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
#ifndef _PIC32CZCA90_EVSYS_INSTANCE_
#define _PIC32CZCA90_EVSYS_INSTANCE_


/* ========== Instance Parameter definitions for EVSYS peripheral ========== */
#define EVSYS_ASYNCHRONOUS_CHANNELS              _UL_(0xFFFFF000) /* Mask of Only Asynchronous Channels */
#define EVSYS_CHANNELS                           _UL_(32)   /* Total Number of Channels */
#define EVSYS_CHANNELS_BITS                      _UL_(5)    /* Number of bits to select Channel */
#define EVSYS_GCLK_ID_0                          _UL_(6)    /* Index of Generic Clocks for Synchronous Channels 0 */
#define EVSYS_GCLK_ID_1                          _UL_(7)    /* Index of Generic Clocks for Synchronous Channels 1 */
#define EVSYS_GCLK_ID_2                          _UL_(8)    /* Index of Generic Clocks for Synchronous Channels 2 */
#define EVSYS_GCLK_ID_3                          _UL_(9)    /* Index of Generic Clocks for Synchronous Channels 3 */
#define EVSYS_GCLK_ID_4                          _UL_(10)   /* Index of Generic Clocks for Synchronous Channels 4 */
#define EVSYS_GCLK_ID_5                          _UL_(11)   /* Index of Generic Clocks for Synchronous Channels 5 */
#define EVSYS_GCLK_ID_6                          _UL_(12)   /* Index of Generic Clocks for Synchronous Channels 6 */
#define EVSYS_GCLK_ID_7                          _UL_(13)   /* Index of Generic Clocks for Synchronous Channels 7 */
#define EVSYS_GCLK_ID_8                          _UL_(14)   /* Index of Generic Clocks for Synchronous Channels 8 */
#define EVSYS_GCLK_ID_9                          _UL_(15)   /* Index of Generic Clocks for Synchronous Channels 9 */
#define EVSYS_GCLK_ID_10                         _UL_(16)   /* Index of Generic Clocks for Synchronous Channels 10 */
#define EVSYS_GCLK_ID_11                         _UL_(17)   /* Index of Generic Clocks for Synchronous Channels 11 */
#define EVSYS_GENERATORS                         _UL_(138)  /* Total Number of Event Generators */
#define EVSYS_GENERATORS_BITS                    _UL_(8)    /* Number of bits to select Event Generator */
#define EVSYS_SECURE_IMPLEMENTED                 _UL_(0)    /* Security Configuration implemented? */
#define EVSYS_SPLIT_IRQ_NUM                      _UL_(12)   /* Number of channels with dedicated interrupt line request */
#define EVSYS_SYNCH_NUM                          _UL_(12)   /* Number of Synchronous Channels */
#define EVSYS_SYNCH_NUM_BITS                     _UL_(4)    /* Number of bits to select Synchronous Channels */
#define EVSYS_USERS                              _UL_(117)  /* Total Number of Event Users */
#define EVSYS_USERS_BITS                         _UL_(7)    /* Number of bits to select Event User */
#define EVSYS_USERS_GROUPS                       _UL_(4)    /* Number of 32-user Groups */
#define EVSYS_INSTANCE_ID                        _UL_(22)   /* Instance index for EVSYS */
#define EVSYS_MCLK_ID_APB                        _UL_(30)   /* Index for EVSYS APB clock */
#define EVSYS_PAC_ID                             _UL_(22)   /* Index for EVSYS registers write protection */

#endif /* _PIC32CZCA90_EVSYS_INSTANCE_ */
