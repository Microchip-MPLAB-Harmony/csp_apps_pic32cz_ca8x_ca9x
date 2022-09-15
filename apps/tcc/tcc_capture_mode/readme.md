---
parent: Harmony 3 peripheral library application examples for PIC32CZ-CA80 family
title: TCC capture mode 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# TCC capture mode

This example shows how to use the TCC module in capture mode to measure duty cycle and frequency of an external input.

## Description

The TC channel is configured in capture mode to measure duty cycle and frequency of the PWM signal. The PWM signal is generated using another TC channel which is configured in compare mode. Output of the compare TC channel is connected to input of the capture TC channel.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/tcc/tcc_capture_mode/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| pic32cz_ca80_curiosity_ultra.X    | MPLABX Project for [PIC32CZ-CA80 curiosity ultra board](https://www.microchip.com/developmenttools/productdetails/)|
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
| pic32cz_ca80_curiosity_ultra.X    | [PIC32CZ-CA80 curiosity ultra board](https://www.microchip.com/developmenttools/productdetails/)|
|||

### Setting up [PIC32CZ-CA80 curiosity ultra board](https://www.microchip.com/developmenttools/productdetails/)

- Connect the Debug USB port on the board to the computer using a micro USB cable
- Connect a wire from Pin 11 on EXT2 to RX Pin of any USB to UART converter (for eg: [USB UART click board](https://www.mikroe.com/usb-uart-click))
- Connect a wire from Pin 12 on EXT2 to TX Pin on "USB to UART converter"
- Connect VCC and GND between EXT2 and "USB to UART converter"
- Connect Pin 6 (EIC_EXTINT10) and Pin 11 (TCC0_WO0) of EXT1 connector on the board

## Running the Application

1. Open the Terminal application (Ex.:Tera term) on the computer
2. Connect to the Virtual COM port and configure the serial settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None
3. Build and Program the application using its IDE
4. Console displays the frequency and duty cycle of the input signal
5. Frequency is constant (800 Hz) and duty cycle changes by 1%

  ![output](images/output_tc_capture_mode.png)
