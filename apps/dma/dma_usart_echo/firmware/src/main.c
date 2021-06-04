/*******************************************************************************
* Copyright (C) 2019 Microchip Technology Inc. and its subsidiaries.
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

#define MINIMUM_DMA_BUFFER_SIZE                 (32)
#define NUM_BYTES_TO_READ                       (10)
#define LED_ON                                  LED0_Clear
#define LED_OFF                                 LED0_Set

static __attribute__ ((aligned (32))) char startMessage[192] = 
"**** DMAC USART echo demo ****\r\n\
**** Type a buffer of 10 characters and observe it echo back using DMA ****\r\n\
**** LED toggles each time the buffer is echoed ****\r\n";

static __attribute__ ((aligned (32))) char receiveBuffer[MINIMUM_DMA_BUFFER_SIZE] = {0};
static __attribute__ ((aligned (32))) char echoBuffer[MINIMUM_DMA_BUFFER_SIZE] = {0};

        
static volatile bool writeComplete = false;
static volatile bool readComplete = false;

// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************
static void TransmitCompleteCallback(DMA_TRANSFER_EVENT event, uintptr_t contextHandle)
{
    if (event & DMA_TRANSFER_EVENT_BLOCK_TRANSFER_COMPLETE)
    { 
        writeComplete = true;
    }
}

static void ReceiveCompleteCallback(DMA_TRANSFER_EVENT event, uintptr_t contextHandle)
{
    if (event & DMA_TRANSFER_EVENT_BLOCK_TRANSFER_COMPLETE)
    { 
        readComplete = true; 
    }
}

int main ( void )
{
    /* Initialize all modules */
    SYS_Initialize ( NULL );
    
    DMA_ChannelCallbackRegister(DMA_CHANNEL_0, TransmitCompleteCallback, 0);
    DMA_ChannelCallbackRegister(DMA_CHANNEL_1, ReceiveCompleteCallback, 0);
    
    /* Clean cache before submitting DMA request, to move data from data cache to main memory */
    DCACHE_CLEAN_BY_ADDR((uint32_t *)startMessage, strlen(startMessage));
    DMA_ChannelTransfer(DMA_CHANNEL_0, startMessage, (const void *)&SERCOM5_REGS->USART_INT.SERCOM_DATA, strlen(startMessage));
            
    while ( true )
    {
        if(readComplete == true)
        {
            /* Echo back received buffer and Toggle LED */
            readComplete = false;

            memcpy(echoBuffer, receiveBuffer, NUM_BYTES_TO_READ);
            echoBuffer[NUM_BYTES_TO_READ] = '\r';
            echoBuffer[NUM_BYTES_TO_READ + 1] ='\n';
            
            /* Clean cache before submitting DMA request, to move data from data cache to main memory */
            DCACHE_CLEAN_BY_ADDR((uint32_t *)echoBuffer, (NUM_BYTES_TO_READ + 2));

            DMA_ChannelTransfer(DMA_CHANNEL_0, echoBuffer, (const void *)&SERCOM5_REGS->USART_INT.SERCOM_DATA, (NUM_BYTES_TO_READ + 2));
            LED0_Toggle();
        }
        else if(writeComplete == true)
        {
            /* Now, submit DMA request to read user data */
            writeComplete = false;
            
            /* Invalidate cache lines before submitting DMA read request */
            DCACHE_INVALIDATE_BY_ADDR((uint32_t *)receiveBuffer, NUM_BYTES_TO_READ);
            
            DMA_ChannelTransfer(DMA_CHANNEL_1, (const void *)&SERCOM5_REGS->USART_INT.SERCOM_DATA, receiveBuffer, NUM_BYTES_TO_READ);            
        }
        else
        {
            /* Repeat the loop */
            ;
        }        
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

