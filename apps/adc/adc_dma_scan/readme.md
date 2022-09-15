---
parent: Harmony 3 peripheral library application examples for PIC32CZ-CA80 family
title: ADC DMA Scan
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# ADC DMA Scan

This example application shows how to use the ADC Peripheral library in scan mode to convert multiple analog input on a ADC channels and transfer the ADC result using DMA

## Description

The example configures ADC1 channel 0 and channel 1 in scan mode. The scan trigger source is configured as ADC trigger event. RTC is configured to generate a periodic RTC compare match event. ADC trigger is configured as the user of the RTC compare match event. ADC starts conversion of channel 0 and channel 1 on every scan trigger and stores the result in the ADC FIFO. DMA is triggered whenever the ADC FIFO has ADC reuslt. DMA reads the result from ADC FIFO and copies it to the user buffer. DMA interrupt is generated when results for both the channels are copied to the user buffer. The application prints the ADC count and the corresponding analog voltage on the serial terminal.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/adc/adc_dma_scan/firmware** .

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

## Running the Application

1. Build and Program the application using its IDE
2. Connect to the Virtual COM port and configure the serial settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None
3. The demo application will print the ADC count and the corresponding analog voltage measured on pin PA18 (Pin 3 of EXT1) and pin PA17 (Pin 4 of EXT1):

	![output](images/image_1.png)
