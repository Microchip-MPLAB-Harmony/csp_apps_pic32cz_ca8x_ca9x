/*******************************************************************************
  Temperature Sensor Calibration Function File

  File Name:
    temp_sense_cal.c

  Summary:
    This file contains source code necessary to perform calibration adjustments
    to temperature sensor measurements.

  Description:
    This file contains source code necessary to initialize the system.  It
    implements the "SYS_Initialize" function, defines the configuration bits,
    and allocates any necessary global system resources,
 *******************************************************************************/

// DOM-IGNORE-BEGIN
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
// DOM-IGNORE-END

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


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */

// calibration test functions
float f_parts_conversion(int i_whole_part, int i_decimal_part);

// get temperature calibration dV/dT
float f_get_calibration_dv_dt();

// get temperature calibration dV/dT
float f_get_die_temperature(int i_adc_read_raw_bits)
{
    //FUSES_CALOTP_REGS
    // values
    //uint32_t i_fccg70_value =  *((uint32_t*)FUSES_FCCFG70_LOCATION);
    //uint32_t i_fccg71_value =  *((uint32_t*)FUSES_FCCFG71_LOCATION);
    uint32_t i_fccg70_value =  (uint32_t)FUSES_CALOTP_REGS->FUSES_FCCFG70;
    uint32_t i_fccg71_value =  (uint32_t)FUSES_CALOTP_REGS->FUSES_FCCFG71;

    // Voltage in mV of VREF=VDDANA (3300 typical)
    int i_room_vref_val = (int)((i_fccg70_value & 0x0000fff0) >> 4);
    // Decimal part of hot temperature in 0.1°C (0 default/typical)
    int i_hot_temp_val_dec = (int)((i_fccg70_value & 0x000f0000) >> 16);
    // 12-bit ADC conversion at hot temperature of PTAT in LSB (1325 default/typical)
    int i_hot_adc_val_ptat_bits = (int)(i_fccg71_value & 0x00000fff);
    // Integer part of hot temperature in 0.1°C (0 default/typical)
    int i_hot_temp_val_int = (int)((i_fccg71_value & 0xff000000) >> 24);

    
    // dV/dT slope (Voltage per unit Temperature)
    float f_dV_dT_slope = 0;
    // temperature in deg C
    float f_temp_deg_c = 0;
    // floating point value of hot temperature
    float f_hot_temp_val = 0;
    // voltage representation of the raw bit value difference 
    // between the hot temperature calibration reference and 
    // the current ADC read value
    float f_v_diff_app = 0;
    // voltage representation of hot temperature calibration value
    float f_v_ht_cal = 0;
    // ration of vref app/cal
    float f_delta_ptat_app = 0;
    // ration of vref app/cal
    float f_vref_ratio = (float)TEMP_CAL_VREF_APP_mV/(float)i_room_vref_val;
    // cal volts/bit
    float f_cal_volts_per_bit = 0;
 
    // get floating point value of hot temperature
    f_hot_temp_val = f_parts_conversion(i_hot_temp_val_int, i_hot_temp_val_dec);
    
    // get slope
    f_dV_dT_slope = f_get_calibration_dv_dt();
    
    // calculate delta-ptat-app
    f_delta_ptat_app = ((float)i_hot_adc_val_ptat_bits - ((float)i_adc_read_raw_bits * f_vref_ratio));
    
    // calculate cal volts/bit
    f_cal_volts_per_bit = (float)i_room_vref_val /(1000*4095);
        
    // calculate f_v_diff_app
    f_v_diff_app = f_cal_volts_per_bit * f_delta_ptat_app;
    
    // calculate f_v_ht_cal
    f_v_ht_cal = f_dV_dT_slope * f_hot_temp_val;
    
    // get temperature
    f_temp_deg_c = (f_v_ht_cal - f_v_diff_app) / f_dV_dT_slope;
        
    return f_temp_deg_c;
}

// *****************************************************************************
// *****************************************************************************
// Section: Temp Sense Cal Implementation
// *****************************************************************************
// *****************************************************************************

// get temperature calibration dV/dT
float f_get_calibration_dv_dt()
{
    //values
//    uint32_t i_fccg69_value =  *((uint32_t*)FUSES_FCCFG69_LOCATION);
//    uint32_t i_fccg70_value =  *((uint32_t*)FUSES_FCCFG70_LOCATION);
//    uint32_t i_fccg71_value =  *((uint32_t*)FUSES_FCCFG71_LOCATION);
    
    
    uint32_t i_fccg69_value =  (uint32_t)FUSES_CALOTP_REGS->FUSES_FCCFG69;
    uint32_t i_fccg70_value =  (uint32_t)FUSES_CALOTP_REGS->FUSES_FCCFG70;
    uint32_t i_fccg71_value =  (uint32_t)FUSES_CALOTP_REGS->FUSES_FCCFG71;

    // 12-bit ADC conversion at room temperature of PTAT in LSB (992 default/typical)
    int i_room_adc_val_ptat_bits = (int)(i_fccg69_value & 0x00000fff);
    // Integer part of room temperature in °C (25 default/typical)
    int i_room_temp_val_int = (int)((i_fccg69_value & 0xff000000) >> 24);
    // Decimal part of room temperature in 0.1°C (0 default/typical)
    int i_room_temp_val_dec = (int)(i_fccg70_value & 0x0000000f);
    // Voltage in mV of VREF=VDDANA (3300 typical)
    int i_room_vref_val = (int)((i_fccg70_value & 0x0000fff0) >> 4);
    // Decimal part of hot temperature in 0.1°C (0 default/typical)
    int i_hot_temp_val_dec = (int)((i_fccg70_value & 0x000f0000) >> 16);
    // 12-bit ADC conversion at hot temperature of PTAT in LSB (1325 default/typical)
    int i_hot_adc_val_ptat_bits = (int)(i_fccg71_value & 0x00000fff);
    // Integer part of hot temperature in 0.1°C (0 default/typical)
    int i_hot_temp_val_int = (int)((i_fccg71_value & 0xff000000) >> 24);

    
    // floating point value of room temperature
    float f_room_temp_val = 0;
    // floating point value of hot temperature
    float f_hot_temp_val = 0;
    // dV/dT slope (Voltage per unit Temperature)
    float f_dV_dT_slope = 0;
    // cal volts/bit
    float f_cal_volts_per_bit = 0;
    // cal bit/degC
    float f_cal_bit_per_degc = 0;
    
    // get floating point value of room temperature
    f_room_temp_val = f_parts_conversion(i_room_temp_val_int, i_room_temp_val_dec);
    
    // get floating point value of hot temperature
    f_hot_temp_val = f_parts_conversion(i_hot_temp_val_int, i_hot_temp_val_dec);
    
    // calculate cal volts/bit
    f_cal_volts_per_bit = (float)i_room_vref_val /(1000*4095);
    
    // calculate cal bits/degC
    f_cal_bit_per_degc = (((float)(i_hot_adc_val_ptat_bits - i_room_adc_val_ptat_bits)) / (f_hot_temp_val - f_room_temp_val));
    
    // calculate slope
    f_dV_dT_slope =  f_cal_volts_per_bit * f_cal_bit_per_degc;
    
    return f_dV_dT_slope;
}


float f_parts_conversion(int i_whole_part, int i_decimal_part)
{
    float f_whole_part = (float)i_whole_part;
    float f_decimal_part = (float)i_decimal_part;
    float f_result = 0;
    
    while(f_decimal_part >= 1)
    {
        f_decimal_part = f_decimal_part/10;
    }
    
    f_result = f_whole_part + f_decimal_part;
    
    return f_result;
}





/* ************************************************************************** */
/* ************************************************************************** */
// Section: Interface Functions                                               */
/* ************************************************************************** */
/* ************************************************************************** */








/* *****************************************************************************
 End of File
 */
