/*******************************************************************************
* Copyright (C) 2023 Microchip Technology Inc. and its subsidiaries.
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

#define SRC_BUFF1_SIZE                  32
#define SRC_BUFF2_SIZE                  128
#define SRC_BUFF3_SIZE                  256

#define DST_BUFF_SIZE                   (SRC_BUFF1_SIZE + SRC_BUFF2_SIZE + SRC_BUFF3_SIZE)


static DMA_DESCRIPTOR_REGS dmaDescRegs[3] = {0};
static volatile bool dmaLLXferDone = false;
static volatile bool dmaXferError = false;

static __attribute__ ((aligned (32))) uint8_t srcBuffer1[SRC_BUFF1_SIZE];
static __attribute__ ((aligned (32))) uint8_t srcBuffer2[SRC_BUFF2_SIZE];
static __attribute__ ((aligned (32))) uint8_t srcBuffer3[SRC_BUFF3_SIZE];

static __attribute__ ((aligned (32))) uint8_t dstBuffer[DST_BUFF_SIZE];

void DMA_EventHandler(DMA_TRANSFER_EVENT status, uintptr_t context)
{
    if(status & DMA_TRANSFER_EVENT_LINKED_LIST_TRANSFER_COMPLETE)
    {
        dmaLLXferDone = true;
    }
    else if (status & DMA_TRANSFER_EVENT_ERROR)
    {
        dmaXferError = true;
    }
}
// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************
void DMA_LinkedListDescSetup(void)
{
    dmaDescRegs[0].DMA_BDNXT = (uint32_t)&dmaDescRegs[1];
    
    dmaDescRegs[0].DMA_BDCFG.SSA = 1;
    dmaDescRegs[0].DMA_BDCFG.DSA = 1;
    dmaDescRegs[0].DMA_BDCFG.XSIZ = 1;
    dmaDescRegs[0].DMA_BDCFG.ENABLE = 1;
    dmaDescRegs[0].DMA_BDCFG.LLEN = 1;    
    dmaDescRegs[0].DMA_BDCFG.SWFRC = 1;        
    dmaDescRegs[0].DMA_BDSSA = (uint32_t)srcBuffer1;
    dmaDescRegs[0].DMA_BDDSA = (uint32_t)&dstBuffer[0];    
    dmaDescRegs[0].DMA_BDXSIZ.CSZ = 1;
    dmaDescRegs[0].DMA_BDXSIZ.BLKSZ = SRC_BUFF1_SIZE;
    
    /*------------------------------------------------------*/
    dmaDescRegs[1].DMA_BDNXT = (uint32_t)&dmaDescRegs[2];
    
    dmaDescRegs[1].DMA_BDCFG.SSA = 1;
    dmaDescRegs[1].DMA_BDCFG.DSA = 1;
    dmaDescRegs[1].DMA_BDCFG.XSIZ = 1;
    dmaDescRegs[1].DMA_BDCFG.ENABLE = 1;
    dmaDescRegs[1].DMA_BDCFG.LLEN = 1;    
    dmaDescRegs[1].DMA_BDCFG.SWFRC = 1;    
    dmaDescRegs[1].DMA_BDSSA = (uint32_t)srcBuffer2;
    dmaDescRegs[1].DMA_BDDSA = (uint32_t)&dstBuffer[SRC_BUFF1_SIZE];    
    dmaDescRegs[1].DMA_BDXSIZ.CSZ = 1;
    dmaDescRegs[1].DMA_BDXSIZ.BLKSZ = SRC_BUFF2_SIZE;
    
    /*------------------------------------------------------*/
    dmaDescRegs[2].DMA_BDNXT = 0xFFFFFFFF;
    
    dmaDescRegs[2].DMA_BDCFG.SSA = 1;
    dmaDescRegs[2].DMA_BDCFG.DSA = 1;
    dmaDescRegs[2].DMA_BDCFG.XSIZ = 1;
    dmaDescRegs[2].DMA_BDCFG.ENABLE = 1;
    dmaDescRegs[2].DMA_BDCFG.LLEN = 0;    
    dmaDescRegs[2].DMA_BDCFG.SWFRC = 1;    
    dmaDescRegs[2].DMA_BDSSA = (uint32_t)srcBuffer3;
    dmaDescRegs[2].DMA_BDDSA = (uint32_t)&dstBuffer[SRC_BUFF1_SIZE + SRC_BUFF2_SIZE];    
    dmaDescRegs[2].DMA_BDXSIZ.CSZ = 1;
    dmaDescRegs[2].DMA_BDXSIZ.BLKSZ = SRC_BUFF3_SIZE;
}

void initSourceBuffers(void)
{
    uint32_t i;
    
    for (i = 0; i < SRC_BUFF1_SIZE; i++ )
    {
        srcBuffer1[i] = i;
    }
    for (i = 0; i < SRC_BUFF2_SIZE; i++ )
    {
        srcBuffer2[i] = i;
    }
    for (i = 0; i < SRC_BUFF3_SIZE; i++ )
    {
        srcBuffer3[i] = i;
    }
}

int main ( void )
{
    /* Initialize all modules */
    SYS_Initialize ( NULL );
    
    printf("\n\r-------------------------------------------------------------");
    printf("\n\r\t DMA Memory Transfer Using Linked Lists \t\t");
    printf("\n\r-------------------------------------------------------------");
    
    DMA_ChannelCallbackRegister(DMA_CHANNEL_0, DMA_EventHandler, 0);
    
    initSourceBuffers();
    
    /* Clean cache lines to push data into the main memory */
    DCACHE_CLEAN_BY_ADDR((uint32_t *)srcBuffer1, SRC_BUFF1_SIZE);
    
    DCACHE_CLEAN_BY_ADDR((uint32_t *)srcBuffer2, SRC_BUFF2_SIZE);
    
    DCACHE_CLEAN_BY_ADDR((uint32_t *)srcBuffer3, SRC_BUFF3_SIZE);
    
    /* Invalidate cache lines before submitting DMA request */
    DCACHE_INVALIDATE_BY_ADDR((uint32_t *)dstBuffer, DST_BUFF_SIZE);
                      
    DMA_LinkedListDescSetup();    

    DMA_ChannelLinkedListTransfer(DMA_CHANNEL_0, dmaDescRegs);
    
    while (dmaLLXferDone == false && dmaXferError == false);
    
    if (dmaLLXferDone == true)
    {
        if ( (memcmp(srcBuffer1, &dstBuffer[0], SRC_BUFF1_SIZE) == 0) && 
             (memcmp(srcBuffer2, &dstBuffer[SRC_BUFF1_SIZE], SRC_BUFF2_SIZE) == 0) &&  
             (memcmp(srcBuffer3, &dstBuffer[SRC_BUFF1_SIZE + SRC_BUFF2_SIZE], SRC_BUFF3_SIZE) == 0)
        )
        {
            printf("\n\r DMA linked list transfer successful with data match\r\n");
        }
        else
        {
            printf("\n\r DMA linked list error - data mismatch\r\n");
        }
    }
    else
    {
        printf("\n\r DMA linked list transfer error\r\n");
    }
       
    while ( true )
    {
        
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

