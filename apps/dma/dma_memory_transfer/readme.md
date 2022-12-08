---
parent: Harmony 3 peripheral library application examples for PIC32CZ-CA80 family
title: DMAC memory transfer 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# DMAC memory transfer

This example application demonstrates how to use the DMAC peripheral to do a memory to memory transfer.

## Description

The application uses a software trigger to initiate a memory-memory transfer from the source buffer to the destination buffer. After the transfer is complete the application verifies the data and prints the status on the serial console.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/dma/dma_memory_transfer/firmware** .

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

## Running the Application

1. Build and Program the application using its IDE
2. Connect to the PKOB4 Virtual COM port and configure the serial settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None
3. The transfer status is printed on the serial console:

	![output](images/image_1.png)