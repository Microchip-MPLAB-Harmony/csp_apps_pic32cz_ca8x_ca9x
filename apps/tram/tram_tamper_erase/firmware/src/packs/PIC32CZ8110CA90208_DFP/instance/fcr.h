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
#ifndef _PIC32CZCA90_FCR_INSTANCE_
#define _PIC32CZCA90_FCR_INSTANCE_


/* ========== Instance Parameter definitions for FCR peripheral ========== */
#define FCR_BFM_PNL_ADDR_MSB                     _UL_(15)   /* Flash Memory Parameters */
#define FCR_BFM_SYS_ADDR_MSB                     _UL_(16)   /* Flash Memory Parameters */
#define FCR_CFM_ADDR_BASE                        _UL_(0x07000000) /* Flash Read Controller Parameters */
#define FCR_CFM_PNL_ADDR_MSB                     _UL_(14)   /* Flash Memory Parameters */
#define FCR_CFM_SYS_ADDR_MSB                     _UL_(15)   /* Flash Memory Parameters */
#define FCR_FCR_AHB_PORTS_NB                     _UL_(4)    /* Flash Read Controller Parameters */
#define FCR_FCR_BFM_ADDR_BASE                    _UL_(0x06000000) /* Flash Read Controller Parameters */
#define FCR_FCR_CAL_ADDR                         _UL_(6000000) /* Flash Read Controller Parameters */
#define FCR_FCR_CAL_NUM_READS                    _UL_(4)    /* Flash Read Controller Parameters */
#define FCR_FCR_CRC_PRESENT                      _UL_(1)    /* Flash Read Controller Parameters */
#define FCR_FCR_DAL_ADDR                         _UL_(1)    /* Flash Read Controller Parameters */
#define FCR_FCR_ECC_PRESENT                      _UL_(1)    /* Flash Read Controller Parameters */
#define FCR_FCR_FFF_ADDR                         _UL_(1)    /* Flash Read Controller Parameters */
#define FCR_FCR_FLT_PRESENT                      _UL_(0)    /* Flash Read Controller Parameters */
#define FCR_FCR_FUSES_DATA_CYCLES                _UL_(4)    /* Flash Read Controller Parameters */
#define FCR_FCR_FUSES_READY_CYCLES               _UL_(1)    /* Flash Read Controller Parameters */
#define FCR_FCR_F1RR_ADDR                        _UL_(1)    /* Flash Read Controller Parameters */
#define FCR_FCR_F2RR_ADDR                        _UL_(1)    /* Flash Read Controller Parameters */
#define FCR_FCR_HDATA_SIZE                       _UL_(64)   /* Flash Read Controller Parameters */
#define FCR_FCR_HSM_CFG0_BASE                    _UL_(64)   /* Flash Read Controller Parameters */
#define FCR_FCR_HSM_CFG1_BASE                    _UL_(64)   /* Flash Read Controller Parameters */
#define FCR_FCR_HSM_CFG2_BASE                    _UL_(64)   /* Flash Read Controller Parameters */
#define FCR_FCR_HSM_CFG3_BASE                    _UL_(64)   /* Flash Read Controller Parameters */
#define FCR_FCR_HSM_PRESENT                      _UL_(1)    /* Flash Read Controller Parameters */
#define FCR_FCR_NOT_FFF_VALUE                    _UL_(0xA5A5A5A5) /* Flash Read Controller Parameters */
#define FCR_FCR_NO_ECC_BUS_ERROR                 _UL_(0)    /* Flash Read Controller Parameters */
#define FCR_FCR_OTPLOCK_ADDR                     _UL_(0)    /* Flash Read Controller Parameters */
#define FCR_FCR_PADDR_MSB                        _UL_(15)   /* Flash Read Controller Parameters */
#define FCR_FCR_PERIOD_MIN                       _UL_(75)   /* Flash Read Controller Parameters */
#define FCR_FCR_PERIOD_NOM                       _UL_(116)  /* Flash Read Controller Parameters */
#define FCR_FCR_PFM_ADDR_BASE                    _UL_(0x08000000) /* Flash Read Controller Parameters */
#define FCR_FCR_RR_NUM_READS                     _UL_(1)    /* Flash Read Controller Parameters */
#define FCR_FCR_TCALH_NS                         _UL_(10000) /* Flash Read Controller Parameters */
#define FCR_FUSES_DATA_MSB                       _UL_(127)  /* Flash Read Controller Parameters */
#define FCR_FUSES_RDY_MSB                        _UL_(8)    /* Flash Read Controller Parameters */
#define FCR_NVR_NUM_PAGES                        _UL_(24)   /* Flash Memory Parameters */
#define FCR_PFM_ACC_HT_NS                        _UL_(30)   /* Flash Read Controller Parameters */
#define FCR_PFM_ACC_NS                           _UL_(25)   /* Flash Read Controller Parameters */
#define FCR_PFM_ACC_RECALL_NS                    _UL_(70)   /* Flash Read Controller Parameters */
#define FCR_PFM_DATA_MSB                         _UL_(255)  /* Flash Memory Parameters */
#define FCR_PFM_NUM_PANELS                       _UL_(2)    /* Flash Memory Parameters */
#define FCR_PFM_NUM_RR                           _UL_(8)    /* Flash Memory Parameters */
#define FCR_PFM_PAGE_ADDR_MSB                    _UL_(11)   /* Flash Memory Parameters */
#define FCR_PFM_PNL_ADDR_MSB                     _UL_(21)   /* Flash Memory Parameters */
#define FCR_PFM_PNL_DATA_MSB                     _UL_(271)  /* Flash Memory Parameters */
#define FCR_PFM_ROW_ADDR_MSB                     _UL_(9)    /* Flash Memory Parameters */
#define FCR_PFM_SRHT_PRESENT                     _UL_(1)    /* Flash Read Controller Parameters */
#define FCR_PFM_SYS_ADDR_MSB                     _UL_(22)   /* Flash Memory Parameters */
#define FCR_PFM_TDPDH_NS                         _UL_(5000) /* Flash Read Controller Parameters */
#define FCR_PFM_TDPDS_NS                         _UL_(100)  /* Flash Read Controller Parameters */
#define FCR_PFM_TLKCFG_NS                        _UL_(1000) /* Flash Read Controller Parameters */
#define FCR_PFM_TMH_NS                           _UL_(100)  /* Flash Read Controller Parameters */
#define FCR_PFM_TMS_NS                           _UL_(5000) /* Flash Read Controller Parameters */
#define FCR_PFM_TONWAIT_NS                       _UL_(6000) /* Flash Read Controller Parameters */
#define FCR_PFM_TRHR_NS                          _UL_(1000) /* Flash Read Controller Parameters */
#define FCR_PFM_TRT_NS                           _UL_(500)  /* Flash Read Controller Parameters */
#define FCR_INSTANCE_ID                          _UL_(2)    /* Instance index for FCR */
#define FCR_MCLK_ID_AHB                          _UL_(4)    /* Index for FCR AHB clock */
#define FCR_MCLK_ID_APB                          _UL_(5)    /* Index for FCR APB clock */
#define FCR_PAC_ID                               _UL_(2)    /* Index for FCR registers write protection */

#endif /* _PIC32CZCA90_FCR_INSTANCE_ */
