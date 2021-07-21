---
parent: Harmony 3 peripheral library application examples for PIC32CZ CA80/CA90 family
title: CAN blocking 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# CAN blocking

This example application shows how to use the CAN module to transmit and receive normal CAN messages in polling mode.

## Description

This application transmits CAN message to CAN Bus and receives CAN message from CAN Bus. To run this application, two evaluation boards of same type are required. These boards acts as different nodes on the CAN bus. Same application is programmed onto both the boards. Boards are connected to PC via UART. While running the application, user can send and receive CAN messages between the boards using UART console applications running on the PC.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/can/can_normal_operation_blocking/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| pic32cz_ca90_curiosity_ultra.X    | MPLABX Project for [PIC32CZ CA90 Curiosity Ultra board]()|
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
| pic32cz_ca90_curiosity_ultra.X    | [PIC32CZ CA90 Curiosity Ultra board]()|
|||

### Setting up [PIC32CZ CA90 Curiosity Ultra board]()

- Connect PIC32CZ CA90 Curiosity Ultra board to another PIC32CZ CA90 Curiosity Ultra board as per the pin connections shown below

    | PIC32CZ CA90 Curiosity Ultra board - 1   | PIC32CZ CA90 Curiosity Ultra board - 2    |
    | ----------------- | ------------------ |
    | CANH, CAN3        | CANH, CAN3         |
    | CANL, CAN3        | CANL, CAN3         |
    | GND,  CAN3        | GND,  CAN3         |
    |||

- Connect the Debug USB port on the board to the computer using a micro USB cable
- Connect a wire from Pin 11 on EXT2 to Pin 14 on Mikrobus Xplained board
- Connect a wire from Pin 12 on EXT2 to Pin 15 on Mikrobus Xplained board
- Connect VCC and GND between EXT2 and Mikrobus Xplained board

## Running the Application

1. Open the Terminal application (Ex.:Tera term) on the computer
2. Connect to the EDBG Virtual COM port and configure the serial settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None
3. Build and Program the application using its IDE
4. In the console associated with board 1, press "1" to transmit a CAN message
5. Transmitted message status will be displayed in the console window of board 1
6. Received message will be displayed in the console window of board 2
7. Follow the sequence below to send and receive CAN message:
    - Press '1' on board 2
8. If the steps are executed in this sequence, the final output in the consoles will be as below (console on the left is the transmitter (board 1) and the one on the right is receiver (board 2)):

  ![output](images/output_can_normal_operation_blocking.png)
