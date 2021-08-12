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

#define ADC_VREF                             (3.3f)

// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************
uint32_t adc_data;
float adc_inp_vol;

int main ( void )
{
    /* Initialize all modules */
    SYS_Initialize ( NULL );
    
    while ( true )
    {
        ADC_GlobalEdgeConversionStart();
        
        while (ADC_ChannelResultIsReady(ADC_CORE_NUM1, ADC_CH0) == false);
        
        adc_data = ADC_ResultGet(ADC_CORE_NUM1, ADC_CH0);
        
        adc_inp_vol = (uint16_t)adc_data * ADC_VREF / 4095U;
            
        printf("ADC1_AIN0: ADC Count: 0x%03x, ADC Input Voltage = %d.%02d V\r", 
            (uint16_t)adc_data, (int)adc_inp_vol, (int)((adc_inp_vol - (int)adc_inp_vol)*100.0));
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

