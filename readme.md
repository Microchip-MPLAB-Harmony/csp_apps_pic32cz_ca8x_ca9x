---
title: Harmony 3 peripheral library application examples for PIC32CZ CA80 family
nav_order: 1
has_children: true
has_toc: false
---
[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# Harmony 3 peripheral library application examples for PIC32CZ CA80 family

MPLAB® Harmony 3 is an extension of the MPLAB® ecosystem for creating embedded firmware solutions for Microchip 32-bit SAM and PIC® microcontroller and microprocessor devices.  Refer to the following links for more information.

- [Microchip 32-bit MCUs](https://www.microchip.com/design-centers/32-bit)
- [Microchip 32-bit MPUs](https://www.microchip.com/design-centers/32-bit-mpus)
- [Microchip MPLAB X IDE](https://www.microchip.com/mplab/mplab-x-ide)
- [Microchip MPLAB® Harmony](https://www.microchip.com/mplab/mplab-harmony)
- [Microchip MPLAB® Harmony Pages](https://microchip-mplab-harmony.github.io/)

This repository contains the MPLAB® Harmony 3 peripheral library application examples for PIC32CZ-CA80 family

- [Release Notes](release_notes.md)
- [MPLAB® Harmony License](mplab_harmony_license.md)

To clone or download these applications from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

## Contents Summary

| Folder     | Description                             |
| ---        | ---                                     |
| apps       | Contains peripheral library example applications |

## Code Examples

The following applications are provided to demonstrate the typical or interesting usage models of one or more peripheral libraries.

| Name | Description |
| ---- | ----------- |
| [AC Sleepwalking](apps/ac/ac_sleepwalk_singleshot/readme.md) | This example application shows how to use the AC Peripheral library to perform a single shot comparison in standby sleep mode periodically and wake up the device when the comparator output toggles |
| [ADC Blocking](apps/adc/adc_blocking/readme.md) | This example application shows how to use the ADC Peripheral library in blocking mode to convert analog input on a ADC channel |
| [ADC DMA Scan](apps/adc/adc_dma_scan/readme.md) | This example application shows how to use the ADC Peripheral library in scan mode to convert multiple analog input on a ADC channels and transfer the ADC result using DMA |
| [ADC Interrupt](apps/adc/adc_interrupt/readme.md) | This example application shows how to use the ADC Peripheral library in in interrupt mode to convert multiple analog inputs |
| [CAN FD blocking](apps/can/can_fd_operation_blocking/readme.md) | This example application shows how to use the CAN module to transmit and receive CAN FD messages in polling mode |
| [CAN FD interrupt](apps/can/can_fd_operation_interrupt_timestamp/readme.md) | This example application shows how to use the CAN module to transmit and receive CAN FD messages in interrupt mode |
| [CAN blocking](apps/can/can_normal_operation_blocking/readme.md) | This example application shows how to use the CAN module to transmit and receive normal CAN messages in polling mode |
| [Clock configuration](apps/clock/clock_config/readme.md) | This example application shows how to configure the clock system to run the device at maximum frequency. It also outputs a prescaled clock signal on a GPIO pin for measurement and verification |
| [DMA CRC-32 Generation](apps/dma/dma_crc32_generate/readme.md) | This example application demonstrates how to use the DMA peripheral to compute 32-bit Cyclic Redundancy Checksum (CRC) |
| [DMAC linked list transfer](apps/dma/dma_linked_list_transfer/readme.md) | This example application demonstrates how to use the DMA peripheral to copy multiple blocks of memory using DMA linked lists |
| [DMAC memory transfer](apps/dma/dma_memory_transfer/readme.md) | This example application demonstrates how to use the DMAC peripheral to do a memory to memory transfer |
| [DMAC USART echo](apps/dma/dma_usart_echo/readme.md) | This example application demonstrates USART transfer with DMA to receive 10 bytes and echo back the received bytes |
| [DMAC USART pattern matching](apps/dma/dma_usart_pattern_matching/readme.md) | This example application demonstrates how to use DMA pattern matching to abort DMA transfer when a specific character is encountered |
| [DSU CRC32 Generate](apps/dsu/dsu_crc32_generate/readme.md) | This example application demonstrates how to use the DSU Peripheral library to compute 32-bit Cyclic Redundancy Checksum (CRC) |
| [EIC Interrupt](apps/eic/eic_led_on_off/readme.md) | This example application demonstrates how to generate interrupt using the EIC on switch press and indicate it through an LED |
| [EVSYS trigger](apps/evsys/evsys_trigger/readme.md) | This example application demonstrates how to use the EVSYS Peripheral library to setup autonomous, low-latency and configurable communication between peripherals |
| [FCR CRC32 Generate](apps/fcr/fcr_crc32_generate/readme.md) | This example application demonstrates how to use the FCR Peripheral library to compute 32-bit Cyclic Redundancy Checksum (CRC) |
| [FCW read write](apps/fcw/flash_read_write/readme.md) | This example application demonstrates how to use the FCW to erase and program the internal Flash memory |
| [FREQM measurement](apps/freqm/freqm_measure_clock_freq/readme.md) | This example application demonstrates how to use the FREQM peripheral to measure the frequency of the internal RC Oscillator |
| [MPU cache coherency](apps/mpu/mpu_coherent_region/readme.md) | This example shows how to maintain cache coherency by allocating DMA buffers in non-cacheable SRAM region defined by MPU |
| [PM wakeup using EIC](apps/pm/pm_wakeup_eic/readme.md) | This application demonstrates entering the low power modes and exiting it using the EIC |
| [PM wakeup using RTC](apps/pm/pm_wakeup_rtc/readme.md) | This example demonstrates entering the low power modes and exiting it using the RTC |
| [PORT polling](apps/port/port_led_on_off_polling/readme.md) | This example application demonstrate how to poll the switch input, and indicate the switch status using the LED |
| [RSTC reset cause](apps/rstc/rstc_reset_cause/readme.md) | This example shows how to use the RSTC peripheral to indicate the cause of the device reset |
| [RTC alarm interrupt](apps/rtc/rtc_alarm/readme.md) | This example shows how to use the RTC to configure the time and generate the alarm |
| [RTC periodic interrupt](apps/rtc/rtc_periodic_timeout/readme.md) | This example application shows how to use the RTC to generate periodic interrupts |
| [SERCOM I2C EEPROM read write](apps/sercom/i2c/master/i2c_eeprom/readme.md) | This example application demonstrates how to use the SERCOM peripheral to write and read from the I2C serial EEPROM memory |
| [SERCOM I2C EEPROM emulation (I2C slave)](apps/sercom/i2c/slave/i2c_eeprom_emulation/readme.md) | This example application demonstrates how to use the SERCOM peripheral in slave mode |
| [SERCOM SPI EEPROM read write](apps/sercom/spi/master/spi_eeprom_write_read/readme.md) | This example application demonstrates how to use the SERCOM SPI peripheral to write and read from the SPI serial EEPROM memory |
| [SERCOM SPI interrupt](apps/sercom/spi/master/spi_self_loopback_interrupt/readme.md) | This example application shows how to use SERCOM SPI PLIB with external loop back to write and then read back an array of data in interrupt mode |
| [SERCOM SPI Master read write test application](apps/sercom/spi/master/spi_write_read_test_app/readme.md) | This is a SPI Master test application which is provided to demonstrate communication between SPI master and the corresponding SPI slave application available under -  apps/sercom/spi/slave/spi_write_read/firmware  |
| [SERCOM SPI Slave read write](apps/sercom/spi/slave/spi_write_read/readme.md) | This example application demonstrates how to use the SERCOM SPI peripheral in slave mode |
| [SERCOM USART blocking](apps/sercom/usart/usart_echo_blocking/readme.md) | This example application demonstrates how to use the SERCOM peripheral in USART mode to transfer block of data in a blocking manner |
| [SERCOM USART interrupt](apps/sercom/usart/usart_echo_interrupt/readme.md) | This example application demonstrates how to use the SERCOM peripheral in USART mode to transfer data in a non-blocking manner |
| [SERCOM USART ring buffer](apps/sercom/usart/usart_ring_buffer_interrupt/readme.md) | This example application demonstrates how to use the SERCOM peripheral in USART ring buffer mode to transfer data in a non-blocking manner |
| [SQI flash read write](apps/sqi/sqi_read_write/readme.md) | This example application demonstrates how to use the SQI Peripheral library to perform erase, write and read operation with the on-board SST26 SQI Serial Flash memory |
| [Systick periodic interrupt](apps/systick/systick_periodic_timeout/readme.md) | This example shows how to use the SysTick to generate periodic interrupts |
| [TCC capture mode](apps/tcc/tcc_capture_mode/readme.md) | This example shows how to use the TCC module in capture mode to measure duty cycle and frequency of an external input |
| [TCC compare mode](apps/tcc/tcc_compare_mode/readme.md) | This example shows how to use the TCC module in compare mode to generate different waveforms |
| [TCC PWM generation](apps/tcc/tcc_synchronous_pwm_channels/readme.md) | This example application shows how to use the TCC to generate a 2 or 3 phase PWM signals for motor control with dead time |
| [TCC timer mode](apps/tcc/tcc_timer_mode/readme.md) | This example shows how to use the TCC module in timer mode to generate periodic interrupt |
| [Temperature Sensor Measurement Calibration](apps/temp_sense/readme.md) | This example application shows how to use the ADC Peripheral library in blocking mode to convert the internal bandgap temperature to a temperature |
| [TRAM erase on tamper detect](apps/tram/tram_tamper_erase/readme.md) | This example application shows how to configure and use tamper detect feature of RTC and TrustRam |
| [TRNG random number](apps/trng/random_number/readme.md) | This example shows how to use the TRNG Peripheral library to generate and read a random number |
| [WDT timeout](apps/wdt/wdt_timeout/readme.md) | This example shows how to generate a Watchdog timer reset by emulating a deadlock |

____


[![License](https://img.shields.io/badge/license-Harmony%20license-orange.svg)](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca/blob/master/mplab_harmony_license.md)
[![Latest release](https://img.shields.io/github/release/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca.svg)](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca/releases/latest)
[![Latest release date](https://img.shields.io/github/release-date/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca.svg)](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca/releases/latest)
[![Commit activity](https://img.shields.io/github/commit-activity/y/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca.svg)](https://github.com/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca/graphs/commit-activity)
[![Contributors](https://img.shields.io/github/contributors-anon/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca.svg)]()

____

[![Follow us on Youtube](https://img.shields.io/badge/Youtube-Follow%20us%20on%20Youtube-red.svg)](https://www.youtube.com/user/MicrochipTechnology)
[![Follow us on LinkedIn](https://img.shields.io/badge/LinkedIn-Follow%20us%20on%20LinkedIn-blue.svg)](https://www.linkedin.com/company/microchip-technology)
[![Follow us on Facebook](https://img.shields.io/badge/Facebook-Follow%20us%20on%20Facebook-blue.svg)](https://www.facebook.com/microchiptechnology/)
[![Follow us on Twitter](https://img.shields.io/twitter/follow/MicrochipTech.svg?style=social)](https://twitter.com/MicrochipTech)

[![](https://img.shields.io/github/stars/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca.svg?style=social)]()
[![](https://img.shields.io/github/watchers/Microchip-MPLAB-Harmony/csp_apps_pic32cz_ca.svg?style=social)]()