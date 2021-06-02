/**
 * \brief Instance header file for PIC32CZ8110CA90208
 *
 * Copyright (c) 2021 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2021-05-21T19:08:33Z */
#ifndef _PIC32CZCA90_SERCOM7_INSTANCE_
#define _PIC32CZCA90_SERCOM7_INSTANCE_


/* ========== Instance Parameter definitions for SERCOM7 peripheral ========== */
#define SERCOM7_CLK_REDUCTION                    _UL_(1)    /* Reduce clock options to pin 1 for SPI and USART */
#define SERCOM7_DMA                              _UL_(1)    /* DMA support implemented? */
#define SERCOM7_DMAC_ID_RX                       _UL_(19)   /* Index of DMA RX trigger */
#define SERCOM7_DMAC_ID_TX                       _UL_(20)   /* Index of DMA TX trigger */
#define SERCOM7_FIFO_IMPLEMENTED                 _UL_(1)    /* FIFO Rx/Tx implemented? */
#define SERCOM7_FIFO_SIZE                        _UL_(16)   /* Rx-Tx FIFO size in bytes */
#define SERCOM7_FSYNC_IMPLEMENTED                _UL_(1)    /* SPI Frame Synch mode implemented? */
#define SERCOM7_GCLK_ID_CORE                     _UL_(28)   
#define SERCOM7_GCLK_ID_SLOW                     _UL_(20)   
#define SERCOM7_SPI                              _UL_(1)    /* SPI mode implemented? */
#define SERCOM7_TWIM                             _UL_(1)    /* TWI Master mode implemented? */
#define SERCOM7_TWIS                             _UL_(1)    /* TWI Slave mode implemented? */
#define SERCOM7_TWI_HSMODE                       _UL_(1)    /* TWI HighSpeed mode implemented? */
#define SERCOM7_ULTRA_IMPLEMENTATION             _UL_(0)    /* ULTRA platform compatibility? */
#define SERCOM7_USART                            _UL_(1)    /* USART mode implemented? */
#define SERCOM7_USART_AUTOBAUD                   _UL_(1)    /* USART autobaud implemented? */
#define SERCOM7_USART_IRDA                       _UL_(1)    /* USART IrDA implemented? */
#define SERCOM7_USART_ISO7816                    _UL_(1)    /* USART ISO7816 mode implemented? */
#define SERCOM7_USART_LIN_MASTER                 _UL_(1)    /* USART LIN Master mode implemented? */
#define SERCOM7_USART_RS485                      _UL_(1)    /* USART RS485 mode implemented? */
#define SERCOM7_INSTANCE_ID                      _UL_(30)   /* Instance index for SERCOM7 */
#define SERCOM7_MCLK_ID_APB                      _UL_(38)   /* Index for SERCOM7 APB clock */
#define SERCOM7_PAC_ID                           _UL_(30)   /* Index for SERCOM7 registers write protection */

#endif /* _PIC32CZCA90_SERCOM7_INSTANCE_ */
