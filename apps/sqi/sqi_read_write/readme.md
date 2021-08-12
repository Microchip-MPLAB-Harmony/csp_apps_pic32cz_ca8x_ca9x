---
parent: Harmony 3 peripheral library application examples for PIC32CZ CA80/CA90 family
title: SQI flash read write 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# SQI flash read write

This example application demonstrates how to use the SQI Peripheral library to perform erase, write and read operation with the on-board SST26 SQI Serial Flash memory.

## Description

This example uses the SQI peripheral library to erase and write an array of values to the on-board SST26 SQI Serial Flash memory. It verifies the value written by reading the values back and comparing it to the value written.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/sqi/sqi_read_write/firmware**

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

- Connect the Debug USB port on the board to the computer using a micro USB cable

## Running the Application

1. Build and program the application using the its IDE
2. Press the Switch to start the SQI Transfer.
3. LED is turned ON when the value read from the SQI Serial Flash memory matches with the written value

The following table provides the switch and LED names:

| Board      | Switch Name | LED Name   |
| ---------- | ----------- | ---------- |
| [PIC32CZ CA90 Curiosity Ultra board]()    |SW0 | LED0 |
||||
