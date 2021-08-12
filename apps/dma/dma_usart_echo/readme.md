---
parent: Harmony 3 peripheral library application examples for PIC32CZ-CA90 family
title: DMAC USART echo 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# DMAC USART echo

This example application demonstrates USART transfer with DMA to receive 10 bytes and echo back the received bytes.

## Description

This application demonstrates USART transfer with DMA using SERCOM peripheral configured in USART mode. One DMA channel is used to receive 10 bytes of data from the USART and another DMA channel is used to echo back the received bytes.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/dma/dma_usart_echo/firmware** .

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

5. Type 10 characters in the console
6. Entered 10 characters will be echoed back and the LED is toggled
7. The following table provides the LED names

| Board      | LED Name                                    |
| ----------------- | ---------------------------------------------- |
| [PIC32CZ-CA90 Curiosity Ultra board](https://www.microchip.com/developmenttools/ProductDetails/)    |LED0 |
|||