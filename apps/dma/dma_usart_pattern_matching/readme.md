---
parent: Harmony 3 peripheral library application examples for PIC32CZ-CA90 family
title: DMAC USART Pattern Matching 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# DMAC USART pattern matching

This example application demonstrates how to use DMA pattern matching to abort DMA transfer when a specific character is encountered.

## Description

Two DMA channels are used - one to receive data from USART and the other to transmit data to USART. Both the DMA channels are configured to abort transfer when a "Enter" (0x0d) is found in the source data. The DMA channel configured to receive data over USART terminates transfer as soon as user enters 0x0d on the serial terminal. The application then echoes the received data back on the serial terminal. The DMA channel configured for transmission of data to USART terminates transfer as soon as 0x0d is found in the source buffer. For both the DMA channels the transfer length is always specified as 20 bytes; however because the channels are configured to terminate transfer on pattern match, the transfer terminates when the 0x0d character is found. 

If the character 0x0d is not found (i.e. no pattern match), then DMA transfer will terminate when 20 bytes are received or transmitted.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/dma/dma_usart_pattern_matching/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| pic32cz_ca90_curiosity_ultra.X    | MPLABX Project for [PIC32CZ-CA90 Curiosity Ultra board](https://www.microchip.com/developmenttools/ProductDetails/)|
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
| pic32cz_ca90_curiosity_ultra.X    | [PIC32CZ-CA90 Curiosity Ultra board](https://www.microchip.com/developmenttools/ProductDetails/)|
|||

### Setting up [PIC32CZ-CA90 Curiosity Ultra board](https://www.microchip.com/developmenttools/ProductDetails/)

- Connect the Debug USB port on the board to the computer using a micro USB cable

## Running the Application

1. Open the Terminal application (Ex.:Tera term) on the computer
2. Connect to the Virtual COM port and configure the serial settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None
3. Build and Program the application using its IDE
4. The console displays the following message

    ![output](images/image_1.png)

5. Type characters (less than 20) on the console and press enter. The DMA transfer is terminated and the received characters are echoed on the serial console and a LED is toggled.

	![output](images/image_1.png)
	
6. The following table provides the LED names

| Board      | LED Name                                    |
| ----------------- | ---------------------------------------------- |
| [PIC32CZ-CA90 Curiosity Ultra board](https://www.microchip.com/developmenttools/ProductDetails/)    |LED0 |
|||