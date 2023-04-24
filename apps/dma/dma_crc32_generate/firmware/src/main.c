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

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2020 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include <string.h>                     // Defines strncmp
#include <stdio.h>
#include "definitions.h"                // SYS function prototypes

/* Macro definitions */
#define LED_On                      LED_Clear
#define LED_Off                     LED_Set

#define DMA_TRANSFER_SIZE           1024

/* Expected CRC32 With Below Configurations and Input String : 0xCBF43926 */
#define CRC32_POLYNOMIAL            0x04C11DB7
#define CRC32_DIRECT_SEED           0xFFFFFFFF
#define CRC32_FINAL_XOR             0xFFFFFFFF
#define CRC32_REVERSE_INPUT         true
#define CRC32_REVERSE_OUTPUT        true

/* Input String for CRC: 123456789 */
CACHE_ALIGN uint8_t srcBuffer[DMA_TRANSFER_SIZE] = {0};

CACHE_ALIGN uint8_t dstBuffer[DMA_TRANSFER_SIZE] = {0};

CACHE_ALIGN uint32_t reverse_table[256] = {0};

volatile static bool completeStatus = false;
volatile static bool errorStatus = false;

void DMA_EventHandler(DMA_TRANSFER_EVENT status, uintptr_t context)
{
    if(status & DMA_TRANSFER_EVENT_BLOCK_TRANSFER_COMPLETE)
    {
        completeStatus = true;
    }
    else if (status & DMA_TRANSFER_EVENT_ERROR)
    {
        errorStatus = true;
    }
}

static uint32_t APP_bitReverse( uint32_t num, uint32_t bits)
{
    uint32_t out = 0;
    uint32_t i;

    for( i = 0; i < bits; i++ )
    {
        out <<= 1;

        if( num & 1 )
        {
            out |= 1;
        }

        num >>= 1;
    }

    return out;
}

static void APP_ReverseTabGen( void )
{
    uint32_t byte;

    for(  byte = 0; byte < 256; byte++ )
        reverse_table[ byte ] = (APP_bitReverse(byte, 32) >> 24) & 0xFF;
}

static uint32_t APP_SWCRCGenerate(void)
{
    uint32_t   i, j, value;
    uint32_t   crc_tab[256];
    uint32_t   crc     = CRC32_DIRECT_SEED;
    uint8_t    data;

    if (CRC32_REVERSE_INPUT == true)
    {
        APP_ReverseTabGen();
    }

    for (i = 0; i < 256; i++)
    {
        value = (i << 24);

        for (j = 0; j < 8; j++)
        {
            if (value & (1 << 31))
            {
                value = (value << 1) ^ CRC32_POLYNOMIAL;
            }
            else
            {
                value <<= 1;
            }
        }
        crc_tab[i] = value;
    }

    for (i = 0; i < DMA_TRANSFER_SIZE; i++)
    {
        data = srcBuffer[i];

        if (CRC32_REVERSE_INPUT == true)
        {
            data = reverse_table[(uint32_t)data];
        }

        crc = crc_tab[(data ^ (crc >> 24)) & 0xFF] ^ ((crc << 8));
    }

    if (CRC32_REVERSE_OUTPUT == true)
    {
        crc = APP_bitReverse(crc, 32);
    }

    crc = (crc ^ CRC32_FINAL_XOR);

    return crc;
}

// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

int main ( void )
{
    uint32_t sw_crc_32  = 0;
    uint32_t dma_crc_32 = 0;
    uint32_t count = 0;

    DMA_CRC_SETUP CRCSetup = {0};

    /* Initialize all modules */
    SYS_Initialize ( NULL );

    LED_Off();

    /* Build the srcBuffer */
    for (count = 0; count < DMA_TRANSFER_SIZE; count++)
    {
        srcBuffer[count] = count;
    }

    printf("\n\r-------------------------------------------------------------");
    printf("\n\r\t\t DMA CRC-32 Generator DEMO\t\t");
    printf("\n\r-------------------------------------------------------------");
    
    /* Generate Software CRC32 */
    sw_crc_32 = APP_SWCRCGenerate();

    /* Register a callback with DMA PLIB to get transfer complete and error events. */
    DMA_ChannelCallbackRegister(DMA_CHANNEL_0, DMA_EventHandler, 0);

    /* Clean cache lines having source buffer before submitting a transfer
     * request to DMA to load the latest data in the cache to the actual
     * memory */
    DCACHE_CLEAN_BY_ADDR((uint32_t *)srcBuffer, DMA_TRANSFER_SIZE);
    
    /* Invalidate cache lines before submitting DMA request */
    DCACHE_INVALIDATE_BY_ADDR((uint32_t *)dstBuffer, DMA_TRANSFER_SIZE);

    CRCSetup.crc_mode           = DMA_CRC_MODE_CRC_32;
    CRCSetup.seed               = CRC32_DIRECT_SEED;
    CRCSetup.xorMode            = true;
    CRCSetup.reflectedOutput    = true;
    CRCSetup.reflectedInput     = true;

    /* Setup the CRC engine to generate CRC32 using DMA channel */
    DMA_ChannelCRCSetup(DMA_CHANNEL_0, &CRCSetup);

    /* Initiate the DMA transfer to generate the CRC32 on source buffer */
    DMA_ChannelTransfer(DMA_CHANNEL_0, srcBuffer, dstBuffer, DMA_TRANSFER_SIZE);

    while (completeStatus == false && errorStatus == false);
    
    while (1)
    {
        if(completeStatus == true)
        {
            completeStatus = false;

            if(memcmp(srcBuffer, dstBuffer, DMA_TRANSFER_SIZE) == 0)
            {
                /* Successfully transferred the data using DMA */
                printf("\n\r DMA Memory Transfer Successful with Data Match\n\r");

                /* Read the generated CRC32 value */
                dma_crc_32 = DMA_ChannelCRCRead(DMA_CHANNEL_0);

                if (dma_crc_32 == sw_crc_32)
                {
                    /* Successfully transferred the data using DMA */
                    printf("\n\r CRC-32 Match : \n\n\r");
                    LED_On();
                }
                else
                {
                    printf("\n\r CRC-32 MisMatch : \n\n\r");

                }

                printf( "\tPolynomial       = 0x%lx \n\n\r\t"
                        "DMA      CRC-32  = 0x%lx \n\n\r\t"
                        "Software CRC-32  = 0x%lx\n\r",
                        (uint32_t)CRC32_POLYNOMIAL, dma_crc_32, sw_crc_32);
            }
            else
            {
                /* Data transfers done, but data mismatch occurred */
                printf("\n\r DMA Memory Transfer Successful with Data Mismatch !!!\n\r");

                LED_Off();
            }
        }
        else if(errorStatus == true)
        {
            printf("\n\r DMA Memory Transfer Error !!!\n\r");

            /* Error occurred during the transfers */
            errorStatus = false;

            LED_Off();
        }
        else
        {
            /* Nothing to do, loop */
            ;
        }
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

