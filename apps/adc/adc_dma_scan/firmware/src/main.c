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

#define MINIMUM_DMA_BUFFER_SIZE              (32)
#define ADC_VREF                             (3.3f)

static __attribute__ ((aligned (32))) uint32_t adc_fifo_data[MINIMUM_DMA_BUFFER_SIZE];

static volatile bool DMA_BlockTransferDone = false;
static volatile bool ADC_EOS_Done = false;
float adc_inp_vol[2];
uint8_t chid;
uint16_t adc_result;
// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************
void ADC_EventHandler(ADC_CORE_INT status, uintptr_t context)
{
    if (status & ADC_CORE_INT_EOSRDY)
    {
        ADC_EOS_Done = true;
    }
}

void DMA_EventHandler (DMA_TRANSFER_EVENT event, uintptr_t contextHandle)
{
    if (event & DMA_TRANSFER_EVENT_BLOCK_TRANSFER_COMPLETE)
    {        
        DMA_BlockTransferDone = true;
        // Re-enable DMA
        DMA_ChannelEnable(DMA_CHANNEL_0);
    }       
}

int main ( void )
{
    /* Initialize all modules */
    SYS_Initialize ( NULL );
    
    printf("\r\n *********************************************** \r\n");
    printf("\r\n           ADC DMA SCAN DEMO \r\n");
    printf("\r\n *********************************************** \r\n");
    
    ADC_CORE1CallbackRegister(ADC_EventHandler, 0);
    DMA_ChannelCallbackRegister(DMA_CHANNEL_0, DMA_EventHandler, 0);
    DMA_ChannelTransfer(DMA_CHANNEL_0, (const void *)&ADC_REGS->ADC_PFFDATA, adc_fifo_data, 8);  
    RTC_Timer32Start();

    while ( true )
    {
        if (DMA_BlockTransferDone == true && ADC_EOS_Done == true) 
        {
			DMA_BlockTransferDone = false;
            ADC_EOS_Done = false;
            
            /* Invalidate the cache lines before reading ADC FIFO data */
            DCACHE_INVALIDATE_BY_ADDR((uint32_t *)adc_fifo_data, sizeof(adc_fifo_data));
            
            chid = ADC_FIFO_CHNID_GET(adc_fifo_data[0]); 
            adc_result = ADC_FIFO_DATA_GET(adc_fifo_data[0]); 
            adc_inp_vol[chid] = (float)adc_result * ADC_VREF / 4095U;
            
            printf("\r\n ADC1_AIN%d: ADC Count: 0x%03x, ADC Input Voltage = %d.%02d V \r\n", 
                    chid, adc_result, (int)adc_inp_vol[chid], (int)((adc_inp_vol[chid] - (int)adc_inp_vol[chid])*100.0));
            
            chid = ADC_FIFO_CHNID_GET(adc_fifo_data[1]);            
            adc_result = ADC_FIFO_DATA_GET(adc_fifo_data[1]); 
            adc_inp_vol[chid] = (float)adc_result * ADC_VREF / 4095U;
            
            printf("\r\n ADC1_AIN%d: ADC Count: 0x%03x, ADC Input Voltage = %d.%02d V \r\n\r\n", 
                    chid, adc_result, (int)adc_inp_vol[chid], (int)((adc_inp_vol[chid] - (int)adc_inp_vol[chid])*100.0));
		}       
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

