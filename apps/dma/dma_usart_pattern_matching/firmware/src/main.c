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

/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
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

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stddef.h>                     // Defines NULL
#include <stdbool.h>                    // Defines true
#include <stdlib.h>                     // Defines EXIT_FAILURE
#include "definitions.h"                // SYS function prototypes
#include <string.h>

#define LED_ON                                  LED0_Clear
#define LED_OFF                                 LED0_Set

#define USART_RECEIVE_CHANNEL                   DMA_CHANNEL_0
#define USART_TRANSMIT_CHANNEL                  DMA_CHANNEL_1

#define MINIMUM_DMA_BUFFER_SIZE                 (32)
#define NUM_BYTES_TO_READ                       (20)

static __attribute__ ((aligned (32))) char startMessage[192] = 
"*** DMA USART echo demo ***\r\n\
*** Press Enter key to terminate the DMA transfer ***\r\n\
*** Maximum number of characters entered must be less than 20 ***\r\n";

static __attribute__ ((aligned (32))) char receiveBuffer[MINIMUM_DMA_BUFFER_SIZE] = {0};
static __attribute__ ((aligned (32))) char echoBuffer[MINIMUM_DMA_BUFFER_SIZE] = {0};

volatile bool writeComplete = false;
volatile bool readComplete = false;

const uint8_t new_line_ch = 0x0A;

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
             
    /* Clean cache before submitting DMA request, to move data from data cache to main memory */
    DCACHE_CLEAN_BY_ADDR((uint32_t *)startMessage, strlen(startMessage));
    
    /* Transmit the startMessage before turning on the pattern match */
    DMA_ChannelTransfer(USART_TRANSMIT_CHANNEL, (const void *)startMessage, (const void *)&SERCOM1_REGS->USART_INT.SERCOM_DATA, sizeof(startMessage));
    
    while (DMA_ChannelIsBusy(USART_TRANSMIT_CHANNEL));        
        
    DMA_ChannelCallbackRegister(USART_TRANSMIT_CHANNEL, TransmitCompleteCallback,0);
    DMA_ChannelCallbackRegister(USART_RECEIVE_CHANNEL, ReceiveCompleteCallback,0); 
    
    /* data reception from user will stop as soon as "Enter" key is pressed (pattern is matched) */
    DMA_ChannelPatternMatchSetup(USART_RECEIVE_CHANNEL, DMA_PATTERN_MATCH_LEN_1BYTE, (uint16_t)(0x0D));  
    
    DMA_ChannelPatternMatchSetup(USART_TRANSMIT_CHANNEL, DMA_PATTERN_MATCH_LEN_1BYTE, (uint16_t)(0x0D)); 
    
    /* Submit buffer to read user data */
    DMA_ChannelTransfer(USART_RECEIVE_CHANNEL, (const void *)&SERCOM1_REGS->USART_INT.SERCOM_DATA, (const void *)receiveBuffer, NUM_BYTES_TO_READ);
        
    while ( true )
    {        
        if(readComplete == true)
        {
            /* Echo back received buffer and Toggle LED */
            readComplete = false;

            memcpy(echoBuffer, receiveBuffer, NUM_BYTES_TO_READ);
            
            /* Clean cache before submitting DMA request, to move data from data cache to main memory */
            DCACHE_CLEAN_BY_ADDR((uint32_t *)echoBuffer, NUM_BYTES_TO_READ);
            
            /* Since pattern matching is enabled on DMA USART TX channel, this should terminate transfer when 0x0D is found */
            DMA_ChannelTransfer(USART_TRANSMIT_CHANNEL, (const void *)echoBuffer, (const void *)&SERCOM1_REGS->USART_INT.SERCOM_DATA, NUM_BYTES_TO_READ);
            LED0_Toggle();
        }
        else if(writeComplete == true)
        {               
            writeComplete = false;
            
            /* Ensure to add new line character on the console before receiving the next data from user */
            DMA_ChannelTransfer(USART_TRANSMIT_CHANNEL, (const void *)&new_line_ch, (const void *)&SERCOM1_REGS->USART_INT.SERCOM_DATA, 1);
            while(writeComplete == false);
            
            writeComplete = false;
            
            /* Invalidate cache lines before submitting DMA read request */
            DCACHE_INVALIDATE_BY_ADDR((uint32_t *)receiveBuffer, NUM_BYTES_TO_READ);
            
            /* Submit buffer to read user data */
            DMA_ChannelTransfer(USART_RECEIVE_CHANNEL, (const void *)&SERCOM1_REGS->USART_INT.SERCOM_DATA, (const void *)receiveBuffer, NUM_BYTES_TO_READ);            
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

