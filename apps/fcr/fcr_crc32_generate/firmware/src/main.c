/*******************************************************************************
  Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This file contains the "main" function for a project.

  Description:
    This file contains the "main" function for a project.  The
    "main" function calls the "SYS_Initialize" function to initialize the state
    machines of all modules in the system
 *******************************************************************************/

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "definitions.h"                // SYS function prototypes

#define LED_ON                  LED_Clear

#define READ_WRITE_SIZE         (FCW_FLASH_PAGESIZE)
#define BUFFER_SIZE             (READ_WRITE_SIZE / sizeof(uint32_t))

#define APP_FLASH_ADDRESS       (FCW_FLASH_START_ADDRESS + (FCW_FLASH_SIZE / 2))

#define CRC_DATA_LENGTH         BUFFER_SIZE
#define CRC_SEED                0xFFFFFFFF

uint32_t writeData[BUFFER_SIZE] CACHE_ALIGN;
uint32_t readData[BUFFER_SIZE];

static void populate_buffer(void)
{
    uint32_t i = 0;

    for (i = 0; i < BUFFER_SIZE; i++)
    {
        writeData[i] = i;
    }
}

/* Function to Generate CRC by reading the crc_data array */
static uint32_t crc32_generate(uint32_t address)
{
    uint32_t   i, j, value;
    uint32_t   crc_tab[256];
    uint32_t   crc = CRC_SEED;
    uint8_t    data;

    /* Generate the standard CRC Table */
    for (i = 0; i < 256; i++)
    {
        value = i;

        for (j = 0; j < 8; j++)
        {
            if (value & 1)
            {
                value = (value >> 1) ^ 0xEDB88320;
            }
            else
            {
                value >>= 1;
            }
        }
        crc_tab[i] = value;
    }

    for (i = 0; i < CRC_DATA_LENGTH; i++)
    {
        data = *(uint8_t *)(address + i);
        crc = crc_tab[(crc ^ data) & 0xff] ^ (crc >> 8);
    }

    return crc;
}

static void flash_task(void)
{
    uint32_t address = APP_FLASH_ADDRESS;
    uint8_t *writePtr = (uint8_t *)writeData;
    uint32_t i = 0;
    
    DCACHE_CLEAN_BY_ADDR((uint32_t *)writePtr, sizeof(writeData));
    
    /* Erase the Page */
    FCW_PageErase(address);
    
    while(FCW_IsBusy() == true);
  
    for (i = 0; i < READ_WRITE_SIZE; i+= FCW_FLASH_ROWSIZE)
    {
        /* Program a row of data */
        FCW_RowWrite((uint32_t *)writePtr, address);
        
        while(FCW_IsBusy() == true);

        writePtr += FCW_FLASH_ROWSIZE;
        address  += FCW_FLASH_ROWSIZE;
    }
}

// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

int main ( void )
{
    uint32_t soft_crc32 = 0;
    uint32_t hw_crc32   = 0;
    
    /* Initialize all modules */
    SYS_Initialize ( NULL );
    
    /*Populate random data to be programmed*/
    populate_buffer();
    
    /*Program data into flash*/
    flash_task();
    
    /*Generate crc*/
    soft_crc32 = crc32_generate((uint32_t)&writeData);
    FCR_CRCCalculate(APP_FLASH_ADDRESS, CRC_DATA_LENGTH, CRC_SEED, &hw_crc32);
    
    /* Verify software CRC and hardware CRC match*/
    if (soft_crc32 == hw_crc32)
    {
        LED_ON();
    }

    while ( true );

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

