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

