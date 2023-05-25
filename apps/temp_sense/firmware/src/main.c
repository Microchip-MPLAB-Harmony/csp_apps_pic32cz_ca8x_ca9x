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
#include "temp_sense_cal.h"

#define ADC_BUFFER_SIZE 16384


float adc_inp_vol;
uint32_t adc_data = 0;
uint32_t adc_data_buffer[ADC_BUFFER_SIZE];
uint32_t adc_data_buffer_count = 0;
uint64_t adc_data_sum = 0;

// *****************************************************************************
// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************
// *****************************************************************************

float f_temperature;

int main ( void )
{
    /* Initialize all modules */
    SYS_Initialize ( NULL );
    
    /*  enable temp sensor */
    SUPC_REGS->SUPC_VREFCTRL |= SUPC_VREFCTRL_TSEN_Msk; 
    
    while ( true )
    {
        ADC_GlobalEdgeConversionStart();
        
        while (ADC_ChannelResultIsReady(ADC_CORE_NUM2, ADC_CH6) == false);      
        
        adc_data_buffer[adc_data_buffer_count] = ADC_ResultGet(ADC_CORE_NUM2, ADC_CH6);
            
        adc_data_buffer_count++;

        if(adc_data_buffer_count==ADC_BUFFER_SIZE)
        {
            adc_data_buffer_count = 0;
            adc_data_sum = 0;

            for(int i=0;i<ADC_BUFFER_SIZE;i++)
            {
                adc_data_sum += adc_data_buffer[i];
            }

            // calculate average from buffer data
            adc_data = adc_data_sum/ADC_BUFFER_SIZE;

            // calculate temperature
            f_temperature = f_get_die_temperature((uint32_t)(adc_data & 0x0000ffff));
            
            printf("Bandgap Temperature Sensor = %d.%02d degC\r\n", 
              (int)f_temperature, (int)((f_temperature - (int)f_temperature)*100.0));

        }
            
        
    }

    /* Execution should not come here during normal operation */

    return ( EXIT_FAILURE );
}


/*******************************************************************************
 End of File
*/

