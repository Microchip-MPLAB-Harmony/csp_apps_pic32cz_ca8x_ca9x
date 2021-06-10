---
parent: Harmony 3 peripheral library application examples for PIC32CZ-CA90 family
title: EVSYS trigger 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# EVSYS trigger

This example application demonstrates how to use the EVSYS Peripheral library to setup autonomous, low-latency and configurable communication between peripherals.

## Description

This example application shows how to use the EVSYS Peripheral library to route the events generated by the switch to toggle an LED without CPU intervention.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/evsys/evsys_trigger/firmware** .

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

1. Build and Program the application using its IDE
2. LED toggles on every switch press

Following table provides the LED and switch names:

| Board      | Switch Name | LED Name |
| ---------- | ---------| ------------|
| [PIC32CZ-CA90 Curiosity Ultra board](https://www.microchip.com/developmenttools/ProductDetails/)    | SW0 | LED0 |
||||