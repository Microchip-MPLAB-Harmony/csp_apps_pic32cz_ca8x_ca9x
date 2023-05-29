---
parent: Harmony 3 peripheral library application examples for PIC32CZ CA80 family
title: ADC Interrupt
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# ADC Interrupt

This example application shows how to use the ADC Peripheral library in in interrupt mode to convert multiple analog inputs

## Description

The example configures ADC1 channel 0 and channel 1 in scan mode. The scan trigger source is configured as ADC trigger event. RTC is configured to generate a periodic RTC compare match event. ADC trigger is configured as the user of the RTC compare match event. ADC starts conversion of channel 0 and channel 1 on every scan trigger and generates a end of scan interrupt when conversion for both the channels is complete. 

ADC1 channel 2 is configured to start conversion on global software trigger and is initiated by user pressing a switch on the development board.
The application prints the ADC count and the corresponding analog voltage on the serial terminal.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/adc/adc_interrupt/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| pic32cz_ca80_curiosity_ultra.X    | MPLABX Project for [PIC32CZ-CA80 Curiosity Ultra board](https://www.microchip.com/developmenttools/ProductDetails/)|
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
| pic32cz_ca80_curiosity_ultra.X    | [PIC32CZ-CA80 Curiosity Ultra board](https://www.microchip.com/developmenttools/ProductDetails/)|
|||

### Setting up [PIC32CZ-CA80 Curiosity Ultra board](https://www.microchip.com/developmenttools/ProductDetails/)

- Connect the Debug USB port on the board to the computer using a micro USB cable
- ADC Core 1 Channel 0 input is available on PA18 (Pin 3 of EXT1). Connect PA18 to anlog input voltage.
- ADC Core 1 Channel 1 input is available on PA17 (Pin 4 of EXT1). Connect PA17 to anlog input voltage.
- ADC Core 1 Channel 2 input is available on PA16 (Pin 3 of J403). Connect PA16 to anlog input voltage.

## Running the Application

1. Build and Program the application using its IDE
2. Connect to the PKOB4 Virtual COM port and configure the serial settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None
3. The demo application will print the ADC count and the corresponding analog voltage measured on pin PA18 (ADC1_AIN0, Pin 3 of EXT1) and pin PA17 (ADC1_AIN1, Pin 4 of EXT1):

	![output](images/image_1.png)

4. Press switch to trigger conversion on ADC1-CH2 (ADC1_AIN2, Pin 3 of J403)	

	![output](images/image_2.png)