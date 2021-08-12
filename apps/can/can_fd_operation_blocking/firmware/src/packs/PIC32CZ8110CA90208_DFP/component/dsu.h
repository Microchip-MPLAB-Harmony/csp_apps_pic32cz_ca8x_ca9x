/*
 * Component description for DSU
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

/* file generated from device description version 2021-07-22T19:46:10Z */
#ifndef _PIC32CZCA90_DSU_COMPONENT_H_
#define _PIC32CZCA90_DSU_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR DSU                                          */
/* ************************************************************************** */

/* -------- DSU_CTRL : (DSU Offset: 0x00) ( /W 32) Control -------- */
#define DSU_CTRL_RESETVALUE                   _U_(0x00)                                            /**<  (DSU_CTRL) Control  Reset Value */

#define DSU_CTRL_SWRST_Pos                    _U_(0)                                               /**< (DSU_CTRL) Software Reset Position */
#define DSU_CTRL_SWRST_Msk                    (_U_(0x1) << DSU_CTRL_SWRST_Pos)                     /**< (DSU_CTRL) Software Reset Mask */
#define DSU_CTRL_SWRST(value)                 (DSU_CTRL_SWRST_Msk & ((value) << DSU_CTRL_SWRST_Pos))
#define DSU_CTRL_CMD_Pos                      _U_(16)                                              /**< (DSU_CTRL) Command Register Position */
#define DSU_CTRL_CMD_Msk                      (_U_(0xFFFF) << DSU_CTRL_CMD_Pos)                    /**< (DSU_CTRL) Command Register Mask */
#define DSU_CTRL_CMD(value)                   (DSU_CTRL_CMD_Msk & ((value) << DSU_CTRL_CMD_Pos))  
#define   DSU_CTRL_CMD_NOOP_Val               _U_(0x0)                                             /**< (DSU_CTRL) No operation  */
#define   DSU_CTRL_CMD_CRC32_Val              _U_(0xA500)                                          /**< (DSU_CTRL) 32-bit Cyclic Redundancy Code  */
#define   DSU_CTRL_CMD_MBIST_Val              _U_(0xA501)                                          /**< (DSU_CTRL) Global Memory built-in self-test  */
#define DSU_CTRL_CMD_NOOP                     (DSU_CTRL_CMD_NOOP_Val << DSU_CTRL_CMD_Pos)          /**< (DSU_CTRL) No operation Position  */
#define DSU_CTRL_CMD_CRC32                    (DSU_CTRL_CMD_CRC32_Val << DSU_CTRL_CMD_Pos)         /**< (DSU_CTRL) 32-bit Cyclic Redundancy Code Position  */
#define DSU_CTRL_CMD_MBIST                    (DSU_CTRL_CMD_MBIST_Val << DSU_CTRL_CMD_Pos)         /**< (DSU_CTRL) Global Memory built-in self-test Position  */
#define DSU_CTRL_Msk                          _U_(0xFFFF0001)                                      /**< (DSU_CTRL) Register Mask  */


/* -------- DSU_ADDR : (DSU Offset: 0x04) (R/W 32) Address -------- */
#define DSU_ADDR_RESETVALUE                   _U_(0x00)                                            /**<  (DSU_ADDR) Address  Reset Value */

#define DSU_ADDR_ADDR_Pos                     _U_(2)                                               /**< (DSU_ADDR) Address Position */
#define DSU_ADDR_ADDR_Msk                     (_U_(0x3FFFFFFF) << DSU_ADDR_ADDR_Pos)               /**< (DSU_ADDR) Address Mask */
#define DSU_ADDR_ADDR(value)                  (DSU_ADDR_ADDR_Msk & ((value) << DSU_ADDR_ADDR_Pos))
#define DSU_ADDR_Msk                          _U_(0xFFFFFFFC)                                      /**< (DSU_ADDR) Register Mask  */

/* MBIST mode */
#define DSU_ADDR_MBIST_AMOD_Pos               _U_(0)                                               /**< (DSU_ADDR) Access Mode Position */
#define DSU_ADDR_MBIST_AMOD_Msk               (_U_(0x3) << DSU_ADDR_MBIST_AMOD_Pos)                /**< (DSU_ADDR) Access Mode Mask */
#define DSU_ADDR_MBIST_AMOD(value)            (DSU_ADDR_MBIST_AMOD_Msk & ((value) << DSU_ADDR_MBIST_AMOD_Pos))
#define   DSU_ADDR_MBIST_AMOD_EXIT_ON_ERROR_Val _U_(0x0)                                             /**< (DSU_ADDR) STATUSA.FAIL rises upon first error and algorithm stops (STATUSA.DONE rises).  */
#define   DSU_ADDR_MBIST_AMOD_PAUSE_ON_ERROR_Val _U_(0x1)                                             /**< (DSU_ADDR) STATUSA.FAIL rises when an error is detected and algorith stops until STATUSA.FAIL is cleared. Once cleared, the algorithm is resumed going to next test step.  */
#define DSU_ADDR_MBIST_AMOD_EXIT_ON_ERROR     (DSU_ADDR_MBIST_AMOD_EXIT_ON_ERROR_Val << DSU_ADDR_MBIST_AMOD_Pos) /**< (DSU_ADDR) STATUSA.FAIL rises upon first error and algorithm stops (STATUSA.DONE rises). Position  */
#define DSU_ADDR_MBIST_AMOD_PAUSE_ON_ERROR    (DSU_ADDR_MBIST_AMOD_PAUSE_ON_ERROR_Val << DSU_ADDR_MBIST_AMOD_Pos) /**< (DSU_ADDR) STATUSA.FAIL rises when an error is detected and algorith stops until STATUSA.FAIL is cleared. Once cleared, the algorithm is resumed going to next test step. Position  */
#define DSU_ADDR_MBIST_Msk                    _U_(0x00000003)                                       /**< (DSU_ADDR_MBIST) Register Mask  */


/* -------- DSU_LENGTH : (DSU Offset: 0x08) (R/W 32) Length -------- */
#define DSU_LENGTH_RESETVALUE                 _U_(0x00)                                            /**<  (DSU_LENGTH) Length  Reset Value */

#define DSU_LENGTH_LENGTH_Pos                 _U_(2)                                               /**< (DSU_LENGTH) Length Position */
#define DSU_LENGTH_LENGTH_Msk                 (_U_(0x3FFFFFFF) << DSU_LENGTH_LENGTH_Pos)           /**< (DSU_LENGTH) Length Mask */
#define DSU_LENGTH_LENGTH(value)              (DSU_LENGTH_LENGTH_Msk & ((value) << DSU_LENGTH_LENGTH_Pos))
#define DSU_LENGTH_Msk                        _U_(0xFFFFFFFC)                                      /**< (DSU_LENGTH) Register Mask  */


/* -------- DSU_DATA : (DSU Offset: 0x0C) (R/W 32) Data -------- */
#define DSU_DATA_RESETVALUE                   _U_(0x00)                                            /**<  (DSU_DATA) Data  Reset Value */

#define DSU_DATA_DATA_Pos                     _U_(0)                                               /**< (DSU_DATA) Data Position */
#define DSU_DATA_DATA_Msk                     (_U_(0xFFFFFFFF) << DSU_DATA_DATA_Pos)               /**< (DSU_DATA) Data Mask */
#define DSU_DATA_DATA(value)                  (DSU_DATA_DATA_Msk & ((value) << DSU_DATA_DATA_Pos))
#define DSU_DATA_Msk                          _U_(0xFFFFFFFF)                                      /**< (DSU_DATA) Register Mask  */

/* MBIST mode */
#define DSU_DATA_MBIST_STATE_Pos              _U_(0)                                               /**< (DSU_DATA) MBIST state Position */
#define DSU_DATA_MBIST_STATE_Msk              (_U_(0x1F) << DSU_DATA_MBIST_STATE_Pos)              /**< (DSU_DATA) MBIST state Mask */
#define DSU_DATA_MBIST_STATE(value)           (DSU_DATA_MBIST_STATE_Msk & ((value) << DSU_DATA_MBIST_STATE_Pos))
#define   DSU_DATA_MBIST_STATE_SET1_Val       _U_(0x9)                                             /**< (DSU_DATA) SET1 Phase: read '0' write '1'  */
#define   DSU_DATA_MBIST_STATE_SET2_Val       _U_(0xA)                                             /**< (DSU_DATA) SET2 Phase: read '1' write '0'  */
#define   DSU_DATA_MBIST_STATE_SET2B_Val      _U_(0xB)                                             /**< (DSU_DATA) SET2B Phase: read '0' write '1'  */
#define   DSU_DATA_MBIST_STATE_CLEAR1_Val     _U_(0xC)                                             /**< (DSU_DATA) CLEAR1 Phase: read '1' write '0'  */
#define   DSU_DATA_MBIST_STATE_CLEAR2_Val     _U_(0xD)                                             /**< (DSU_DATA) CLEAR2 Phase: read '0' write '1'  */
#define   DSU_DATA_MBIST_STATE_CLEAR2B_Val    _U_(0xE)                                             /**< (DSU_DATA) CLEAR2B Phase: read '1' write '0'  */
#define   DSU_DATA_MBIST_STATE_READ_Val       _U_(0xF)                                             /**< (DSU_DATA) READ Phase: check memory is cleared  */
#define DSU_DATA_MBIST_STATE_SET1             (DSU_DATA_MBIST_STATE_SET1_Val << DSU_DATA_MBIST_STATE_Pos) /**< (DSU_DATA) SET1 Phase: read '0' write '1' Position  */
#define DSU_DATA_MBIST_STATE_SET2             (DSU_DATA_MBIST_STATE_SET2_Val << DSU_DATA_MBIST_STATE_Pos) /**< (DSU_DATA) SET2 Phase: read '1' write '0' Position  */
#define DSU_DATA_MBIST_STATE_SET2B            (DSU_DATA_MBIST_STATE_SET2B_Val << DSU_DATA_MBIST_STATE_Pos) /**< (DSU_DATA) SET2B Phase: read '0' write '1' Position  */
#define DSU_DATA_MBIST_STATE_CLEAR1           (DSU_DATA_MBIST_STATE_CLEAR1_Val << DSU_DATA_MBIST_STATE_Pos) /**< (DSU_DATA) CLEAR1 Phase: read '1' write '0' Position  */
#define DSU_DATA_MBIST_STATE_CLEAR2           (DSU_DATA_MBIST_STATE_CLEAR2_Val << DSU_DATA_MBIST_STATE_Pos) /**< (DSU_DATA) CLEAR2 Phase: read '0' write '1' Position  */
#define DSU_DATA_MBIST_STATE_CLEAR2B          (DSU_DATA_MBIST_STATE_CLEAR2B_Val << DSU_DATA_MBIST_STATE_Pos) /**< (DSU_DATA) CLEAR2B Phase: read '1' write '0' Position  */
#define DSU_DATA_MBIST_STATE_READ             (DSU_DATA_MBIST_STATE_READ_Val << DSU_DATA_MBIST_STATE_Pos) /**< (DSU_DATA) READ Phase: check memory is cleared Position  */
#define DSU_DATA_MBIST_INDEX_Pos              _U_(8)                                               /**< (DSU_DATA) MBIST bit Index Position */
#define DSU_DATA_MBIST_INDEX_Msk              (_U_(0x1F) << DSU_DATA_MBIST_INDEX_Pos)              /**< (DSU_DATA) MBIST bit Index Mask */
#define DSU_DATA_MBIST_INDEX(value)           (DSU_DATA_MBIST_INDEX_Msk & ((value) << DSU_DATA_MBIST_INDEX_Pos))
#define DSU_DATA_MBIST_Msk                    _U_(0x00001F1F)                                       /**< (DSU_DATA_MBIST) Register Mask  */


/* -------- DSU_CFG : (DSU Offset: 0x10) (R/W 32) Configuration -------- */
#define DSU_CFG_RESETVALUE                    _U_(0x00)                                            /**<  (DSU_CFG) Configuration  Reset Value */

#define DSU_CFG_DCCDMALEVEL0_Pos              _U_(0)                                               /**< (DSU_CFG) DMA Trigger 0 Level Position */
#define DSU_CFG_DCCDMALEVEL0_Msk              (_U_(0x1) << DSU_CFG_DCCDMALEVEL0_Pos)               /**< (DSU_CFG) DMA Trigger 0 Level Mask */
#define DSU_CFG_DCCDMALEVEL0(value)           (DSU_CFG_DCCDMALEVEL0_Msk & ((value) << DSU_CFG_DCCDMALEVEL0_Pos))
#define   DSU_CFG_DCCDMALEVEL0_EMPTY_Val      _U_(0x0)                                             /**< (DSU_CFG) Trigger x rises when DCC is read and falls when it is written  */
#define   DSU_CFG_DCCDMALEVEL0_FULL_Val       _U_(0x1)                                             /**< (DSU_CFG) Trigger x rises when DCC is written and falls when it is read  */
#define DSU_CFG_DCCDMALEVEL0_EMPTY            (DSU_CFG_DCCDMALEVEL0_EMPTY_Val << DSU_CFG_DCCDMALEVEL0_Pos) /**< (DSU_CFG) Trigger x rises when DCC is read and falls when it is written Position  */
#define DSU_CFG_DCCDMALEVEL0_FULL             (DSU_CFG_DCCDMALEVEL0_FULL_Val << DSU_CFG_DCCDMALEVEL0_Pos) /**< (DSU_CFG) Trigger x rises when DCC is written and falls when it is read Position  */
#define DSU_CFG_DCCDMALEVEL1_Pos              _U_(1)                                               /**< (DSU_CFG) DMA Trigger 1 Level Position */
#define DSU_CFG_DCCDMALEVEL1_Msk              (_U_(0x1) << DSU_CFG_DCCDMALEVEL1_Pos)               /**< (DSU_CFG) DMA Trigger 1 Level Mask */
#define DSU_CFG_DCCDMALEVEL1(value)           (DSU_CFG_DCCDMALEVEL1_Msk & ((value) << DSU_CFG_DCCDMALEVEL1_Pos))
#define   DSU_CFG_DCCDMALEVEL1_EMPTY_Val      _U_(0x0)                                             /**< (DSU_CFG) Trigger x rises when DCC is read and falls when it is written  */
#define   DSU_CFG_DCCDMALEVEL1_FULL_Val       _U_(0x1)                                             /**< (DSU_CFG) Trigger x rises when DCC is written and falls when it is read  */
#define DSU_CFG_DCCDMALEVEL1_EMPTY            (DSU_CFG_DCCDMALEVEL1_EMPTY_Val << DSU_CFG_DCCDMALEVEL1_Pos) /**< (DSU_CFG) Trigger x rises when DCC is read and falls when it is written Position  */
#define DSU_CFG_DCCDMALEVEL1_FULL             (DSU_CFG_DCCDMALEVEL1_FULL_Val << DSU_CFG_DCCDMALEVEL1_Pos) /**< (DSU_CFG) Trigger x rises when DCC is written and falls when it is read Position  */
#define DSU_CFG_MBFI_Pos                      _U_(2)                                               /**< (DSU_CFG) Enables the Memory Bist Fault Injection Position */
#define DSU_CFG_MBFI_Msk                      (_U_(0x1) << DSU_CFG_MBFI_Pos)                       /**< (DSU_CFG) Enables the Memory Bist Fault Injection Mask */
#define DSU_CFG_MBFI(value)                   (DSU_CFG_MBFI_Msk & ((value) << DSU_CFG_MBFI_Pos))  
#define DSU_CFG_MISC_Pos                      _U_(8)                                               /**< (DSU_CFG) Device Specific Configuration Register Position */
#define DSU_CFG_MISC_Msk                      (_U_(0xFFFFFF) << DSU_CFG_MISC_Pos)                  /**< (DSU_CFG) Device Specific Configuration Register Mask */
#define DSU_CFG_MISC(value)                   (DSU_CFG_MISC_Msk & ((value) << DSU_CFG_MISC_Pos))  
#define DSU_CFG_Msk                           _U_(0xFFFFFF07)                                      /**< (DSU_CFG) Register Mask  */

#define DSU_CFG_DCCDMALEVEL_Pos               _U_(0)                                               /**< (DSU_CFG Position) DMA Trigger x Level */
#define DSU_CFG_DCCDMALEVEL_Msk               (_U_(0x3) << DSU_CFG_DCCDMALEVEL_Pos)                /**< (DSU_CFG Mask) DCCDMALEVEL */
#define DSU_CFG_DCCDMALEVEL(value)            (DSU_CFG_DCCDMALEVEL_Msk & ((value) << DSU_CFG_DCCDMALEVEL_Pos)) 

/* -------- DSU_MBFI0 : (DSU Offset: 0x14) (R/W 32) Memory Bist Fault Injection 0 -------- */
#define DSU_MBFI0_RESETVALUE                  _U_(0x00)                                            /**<  (DSU_MBFI0) Memory Bist Fault Injection 0  Reset Value */

#define DSU_MBFI0_BIDX_Pos                    _U_(0)                                               /**< (DSU_MBFI0) Bit Index of injected fault Position */
#define DSU_MBFI0_BIDX_Msk                    (_U_(0x1F) << DSU_MBFI0_BIDX_Pos)                    /**< (DSU_MBFI0) Bit Index of injected fault Mask */
#define DSU_MBFI0_BIDX(value)                 (DSU_MBFI0_BIDX_Msk & ((value) << DSU_MBFI0_BIDX_Pos))
#define DSU_MBFI0_AMMOD_Pos                   _U_(6)                                               /**< (DSU_MBFI0) Address matching mode Position */
#define DSU_MBFI0_AMMOD_Msk                   (_U_(0x1) << DSU_MBFI0_AMMOD_Pos)                    /**< (DSU_MBFI0) Address matching mode Mask */
#define DSU_MBFI0_AMMOD(value)                (DSU_MBFI0_AMMOD_Msk & ((value) << DSU_MBFI0_AMMOD_Pos))
#define   DSU_MBFI0_AMMOD_ADDR_Val            _U_(0x0)                                             /**< (DSU_MBFI0) Address match, fault injected when the masked master address matches with the masked bcc1.addr  */
#define   DSU_MBFI0_AMMOD_ALWAYS_Val          _U_(0x1)                                             /**< (DSU_MBFI0) Always matches, fault injected every AHB access  */
#define DSU_MBFI0_AMMOD_ADDR                  (DSU_MBFI0_AMMOD_ADDR_Val << DSU_MBFI0_AMMOD_Pos)    /**< (DSU_MBFI0) Address match, fault injected when the masked master address matches with the masked bcc1.addr Position  */
#define DSU_MBFI0_AMMOD_ALWAYS                (DSU_MBFI0_AMMOD_ALWAYS_Val << DSU_MBFI0_AMMOD_Pos)  /**< (DSU_MBFI0) Always matches, fault injected every AHB access Position  */
#define DSU_MBFI0_FTYPE_Pos                   _U_(7)                                               /**< (DSU_MBFI0) Fault type Position */
#define DSU_MBFI0_FTYPE_Msk                   (_U_(0x1) << DSU_MBFI0_FTYPE_Pos)                    /**< (DSU_MBFI0) Fault type Mask */
#define DSU_MBFI0_FTYPE(value)                (DSU_MBFI0_FTYPE_Msk & ((value) << DSU_MBFI0_FTYPE_Pos))
#define   DSU_MBFI0_FTYPE_STUCKAT0_Val        _U_(0x0)                                             /**< (DSU_MBFI0) Stuck At 0  */
#define   DSU_MBFI0_FTYPE_STUCKAT1_Val        _U_(0x1)                                             /**< (DSU_MBFI0) Stuck At 1  */
#define DSU_MBFI0_FTYPE_STUCKAT0              (DSU_MBFI0_FTYPE_STUCKAT0_Val << DSU_MBFI0_FTYPE_Pos) /**< (DSU_MBFI0) Stuck At 0 Position  */
#define DSU_MBFI0_FTYPE_STUCKAT1              (DSU_MBFI0_FTYPE_STUCKAT1_Val << DSU_MBFI0_FTYPE_Pos) /**< (DSU_MBFI0) Stuck At 1 Position  */
#define DSU_MBFI0_AMMSK_Pos                   _U_(8)                                               /**< (DSU_MBFI0) Address matching Mask (Word address) Position */
#define DSU_MBFI0_AMMSK_Msk                   (_U_(0xFFFFFF) << DSU_MBFI0_AMMSK_Pos)               /**< (DSU_MBFI0) Address matching Mask (Word address) Mask */
#define DSU_MBFI0_AMMSK(value)                (DSU_MBFI0_AMMSK_Msk & ((value) << DSU_MBFI0_AMMSK_Pos))
#define DSU_MBFI0_Msk                         _U_(0xFFFFFFDF)                                      /**< (DSU_MBFI0) Register Mask  */


/* -------- DSU_MBFI1 : (DSU Offset: 0x18) (R/W 32) Memory Bist Fault Injection 1 -------- */
#define DSU_MBFI1_RESETVALUE                  _U_(0x00)                                            /**<  (DSU_MBFI1) Memory Bist Fault Injection 1  Reset Value */

#define DSU_MBFI1_ADDR_Pos                    _U_(2)                                               /**< (DSU_MBFI1) Word Address Position */
#define DSU_MBFI1_ADDR_Msk                    (_U_(0x3FFFFFFF) << DSU_MBFI1_ADDR_Pos)              /**< (DSU_MBFI1) Word Address Mask */
#define DSU_MBFI1_ADDR(value)                 (DSU_MBFI1_ADDR_Msk & ((value) << DSU_MBFI1_ADDR_Pos))
#define DSU_MBFI1_Msk                         _U_(0xFFFFFFFC)                                      /**< (DSU_MBFI1) Register Mask  */


/* -------- DSU_STATUSA : (DSU Offset: 0x100) (R/W 32) Status A -------- */
#define DSU_STATUSA_RESETVALUE                _U_(0x00)                                            /**<  (DSU_STATUSA) Status A  Reset Value */

#define DSU_STATUSA_DONE_Pos                  _U_(0)                                               /**< (DSU_STATUSA) Done Position */
#define DSU_STATUSA_DONE_Msk                  (_U_(0x1) << DSU_STATUSA_DONE_Pos)                   /**< (DSU_STATUSA) Done Mask */
#define DSU_STATUSA_DONE(value)               (DSU_STATUSA_DONE_Msk & ((value) << DSU_STATUSA_DONE_Pos))
#define DSU_STATUSA_FAIL_Pos                  _U_(1)                                               /**< (DSU_STATUSA) Failure Position */
#define DSU_STATUSA_FAIL_Msk                  (_U_(0x1) << DSU_STATUSA_FAIL_Pos)                   /**< (DSU_STATUSA) Failure Mask */
#define DSU_STATUSA_FAIL(value)               (DSU_STATUSA_FAIL_Msk & ((value) << DSU_STATUSA_FAIL_Pos))
#define DSU_STATUSA_BERR_Pos                  _U_(2)                                               /**< (DSU_STATUSA) Bus Error Position */
#define DSU_STATUSA_BERR_Msk                  (_U_(0x1) << DSU_STATUSA_BERR_Pos)                   /**< (DSU_STATUSA) Bus Error Mask */
#define DSU_STATUSA_BERR(value)               (DSU_STATUSA_BERR_Msk & ((value) << DSU_STATUSA_BERR_Pos))
#define DSU_STATUSA_PERR_Pos                  _U_(3)                                               /**< (DSU_STATUSA) Protection Error Position */
#define DSU_STATUSA_PERR_Msk                  (_U_(0x1) << DSU_STATUSA_PERR_Pos)                   /**< (DSU_STATUSA) Protection Error Mask */
#define DSU_STATUSA_PERR(value)               (DSU_STATUSA_PERR_Msk & ((value) << DSU_STATUSA_PERR_Pos))
#define DSU_STATUSA_CRSTEXT0_Pos              _U_(8)                                               /**< (DSU_STATUSA) CPU 0 Reset Phase Extension Position */
#define DSU_STATUSA_CRSTEXT0_Msk              (_U_(0x1) << DSU_STATUSA_CRSTEXT0_Pos)               /**< (DSU_STATUSA) CPU 0 Reset Phase Extension Mask */
#define DSU_STATUSA_CRSTEXT0(value)           (DSU_STATUSA_CRSTEXT0_Msk & ((value) << DSU_STATUSA_CRSTEXT0_Pos))
#define DSU_STATUSA_CRSTEXT1_Pos              _U_(9)                                               /**< (DSU_STATUSA) CPU 1 Reset Phase Extension Position */
#define DSU_STATUSA_CRSTEXT1_Msk              (_U_(0x1) << DSU_STATUSA_CRSTEXT1_Pos)               /**< (DSU_STATUSA) CPU 1 Reset Phase Extension Mask */
#define DSU_STATUSA_CRSTEXT1(value)           (DSU_STATUSA_CRSTEXT1_Msk & ((value) << DSU_STATUSA_CRSTEXT1_Pos))
#define DSU_STATUSA_CRSTEXT2_Pos              _U_(10)                                              /**< (DSU_STATUSA) CPU 2 Reset Phase Extension Position */
#define DSU_STATUSA_CRSTEXT2_Msk              (_U_(0x1) << DSU_STATUSA_CRSTEXT2_Pos)               /**< (DSU_STATUSA) CPU 2 Reset Phase Extension Mask */
#define DSU_STATUSA_CRSTEXT2(value)           (DSU_STATUSA_CRSTEXT2_Msk & ((value) << DSU_STATUSA_CRSTEXT2_Pos))
#define DSU_STATUSA_CRSTEXT3_Pos              _U_(11)                                              /**< (DSU_STATUSA) CPU 3 Reset Phase Extension Position */
#define DSU_STATUSA_CRSTEXT3_Msk              (_U_(0x1) << DSU_STATUSA_CRSTEXT3_Pos)               /**< (DSU_STATUSA) CPU 3 Reset Phase Extension Mask */
#define DSU_STATUSA_CRSTEXT3(value)           (DSU_STATUSA_CRSTEXT3_Msk & ((value) << DSU_STATUSA_CRSTEXT3_Pos))
#define DSU_STATUSA_BREXT0_Pos                _U_(16)                                              /**< (DSU_STATUSA) BootRom 0 Phase Extension Position */
#define DSU_STATUSA_BREXT0_Msk                (_U_(0x1) << DSU_STATUSA_BREXT0_Pos)                 /**< (DSU_STATUSA) BootRom 0 Phase Extension Mask */
#define DSU_STATUSA_BREXT0(value)             (DSU_STATUSA_BREXT0_Msk & ((value) << DSU_STATUSA_BREXT0_Pos))
#define DSU_STATUSA_BREXT1_Pos                _U_(17)                                              /**< (DSU_STATUSA) BootRom 1 Phase Extension Position */
#define DSU_STATUSA_BREXT1_Msk                (_U_(0x1) << DSU_STATUSA_BREXT1_Pos)                 /**< (DSU_STATUSA) BootRom 1 Phase Extension Mask */
#define DSU_STATUSA_BREXT1(value)             (DSU_STATUSA_BREXT1_Msk & ((value) << DSU_STATUSA_BREXT1_Pos))
#define DSU_STATUSA_BREXT2_Pos                _U_(18)                                              /**< (DSU_STATUSA) BootRom 2 Phase Extension Position */
#define DSU_STATUSA_BREXT2_Msk                (_U_(0x1) << DSU_STATUSA_BREXT2_Pos)                 /**< (DSU_STATUSA) BootRom 2 Phase Extension Mask */
#define DSU_STATUSA_BREXT2(value)             (DSU_STATUSA_BREXT2_Msk & ((value) << DSU_STATUSA_BREXT2_Pos))
#define DSU_STATUSA_BREXT3_Pos                _U_(19)                                              /**< (DSU_STATUSA) BootRom 3 Phase Extension Position */
#define DSU_STATUSA_BREXT3_Msk                (_U_(0x1) << DSU_STATUSA_BREXT3_Pos)                 /**< (DSU_STATUSA) BootRom 3 Phase Extension Mask */
#define DSU_STATUSA_BREXT3(value)             (DSU_STATUSA_BREXT3_Msk & ((value) << DSU_STATUSA_BREXT3_Pos))
#define DSU_STATUSA_Msk                       _U_(0x000F0F0F)                                      /**< (DSU_STATUSA) Register Mask  */

#define DSU_STATUSA_CRSTEXT_Pos               _U_(8)                                               /**< (DSU_STATUSA Position) CPU x Reset Phase Extension */
#define DSU_STATUSA_CRSTEXT_Msk               (_U_(0xF) << DSU_STATUSA_CRSTEXT_Pos)                /**< (DSU_STATUSA Mask) CRSTEXT */
#define DSU_STATUSA_CRSTEXT(value)            (DSU_STATUSA_CRSTEXT_Msk & ((value) << DSU_STATUSA_CRSTEXT_Pos)) 
#define DSU_STATUSA_BREXT_Pos                 _U_(16)                                              /**< (DSU_STATUSA Position) BootRom 3 Phase Extension */
#define DSU_STATUSA_BREXT_Msk                 (_U_(0xF) << DSU_STATUSA_BREXT_Pos)                  /**< (DSU_STATUSA Mask) BREXT */
#define DSU_STATUSA_BREXT(value)              (DSU_STATUSA_BREXT_Msk & ((value) << DSU_STATUSA_BREXT_Pos)) 

/* -------- DSU_STATUSB : (DSU Offset: 0x104) ( R/ 32) Status B -------- */
#define DSU_STATUSB_RESETVALUE                _U_(0x00)                                            /**<  (DSU_STATUSB) Status B  Reset Value */

#define DSU_STATUSB_BCCD0_Pos                 _U_(0)                                               /**< (DSU_STATUSB) Boot ROM Communication Channel 0 Dirty Position */
#define DSU_STATUSB_BCCD0_Msk                 (_U_(0x1) << DSU_STATUSB_BCCD0_Pos)                  /**< (DSU_STATUSB) Boot ROM Communication Channel 0 Dirty Mask */
#define DSU_STATUSB_BCCD0(value)              (DSU_STATUSB_BCCD0_Msk & ((value) << DSU_STATUSB_BCCD0_Pos))
#define DSU_STATUSB_BCCD1_Pos                 _U_(1)                                               /**< (DSU_STATUSB) Boot ROM Communication Channel 1 Dirty Position */
#define DSU_STATUSB_BCCD1_Msk                 (_U_(0x1) << DSU_STATUSB_BCCD1_Pos)                  /**< (DSU_STATUSB) Boot ROM Communication Channel 1 Dirty Mask */
#define DSU_STATUSB_BCCD1(value)              (DSU_STATUSB_BCCD1_Msk & ((value) << DSU_STATUSB_BCCD1_Pos))
#define DSU_STATUSB_DCCD0_Pos                 _U_(2)                                               /**< (DSU_STATUSB) Debug Communication Channel 0 Dirty Position */
#define DSU_STATUSB_DCCD0_Msk                 (_U_(0x1) << DSU_STATUSB_DCCD0_Pos)                  /**< (DSU_STATUSB) Debug Communication Channel 0 Dirty Mask */
#define DSU_STATUSB_DCCD0(value)              (DSU_STATUSB_DCCD0_Msk & ((value) << DSU_STATUSB_DCCD0_Pos))
#define DSU_STATUSB_DCCD1_Pos                 _U_(3)                                               /**< (DSU_STATUSB) Debug Communication Channel 1 Dirty Position */
#define DSU_STATUSB_DCCD1_Msk                 (_U_(0x1) << DSU_STATUSB_DCCD1_Pos)                  /**< (DSU_STATUSB) Debug Communication Channel 1 Dirty Mask */
#define DSU_STATUSB_DCCD1(value)              (DSU_STATUSB_DCCD1_Msk & ((value) << DSU_STATUSB_DCCD1_Pos))
#define DSU_STATUSB_DBGPRES_Pos               _U_(8)                                               /**< (DSU_STATUSB) Debugger Present Position */
#define DSU_STATUSB_DBGPRES_Msk               (_U_(0x1) << DSU_STATUSB_DBGPRES_Pos)                /**< (DSU_STATUSB) Debugger Present Mask */
#define DSU_STATUSB_DBGPRES(value)            (DSU_STATUSB_DBGPRES_Msk & ((value) << DSU_STATUSB_DBGPRES_Pos))
#define DSU_STATUSB_HPE_Pos                   _U_(10)                                              /**< (DSU_STATUSB) Hot-Plugging Enable Position */
#define DSU_STATUSB_HPE_Msk                   (_U_(0x1) << DSU_STATUSB_HPE_Pos)                    /**< (DSU_STATUSB) Hot-Plugging Enable Mask */
#define DSU_STATUSB_HPE(value)                (DSU_STATUSB_HPE_Msk & ((value) << DSU_STATUSB_HPE_Pos))
#define DSU_STATUSB_APDIS_Pos                 _U_(11)                                              /**< (DSU_STATUSB) ARM Access Ports Disabled Position */
#define DSU_STATUSB_APDIS_Msk                 (_U_(0x1) << DSU_STATUSB_APDIS_Pos)                  /**< (DSU_STATUSB) ARM Access Ports Disabled Mask */
#define DSU_STATUSB_APDIS(value)              (DSU_STATUSB_APDIS_Msk & ((value) << DSU_STATUSB_APDIS_Pos))
#define DSU_STATUSB_Msk                       _U_(0x00000D0F)                                      /**< (DSU_STATUSB) Register Mask  */

#define DSU_STATUSB_BCCD_Pos                  _U_(0)                                               /**< (DSU_STATUSB Position) Boot ROM Communication Channel x Dirty */
#define DSU_STATUSB_BCCD_Msk                  (_U_(0x3) << DSU_STATUSB_BCCD_Pos)                   /**< (DSU_STATUSB Mask) BCCD */
#define DSU_STATUSB_BCCD(value)               (DSU_STATUSB_BCCD_Msk & ((value) << DSU_STATUSB_BCCD_Pos)) 
#define DSU_STATUSB_DCCD_Pos                  _U_(2)                                               /**< (DSU_STATUSB Position) Debug Communication Channel x Dirty */
#define DSU_STATUSB_DCCD_Msk                  (_U_(0x3) << DSU_STATUSB_DCCD_Pos)                   /**< (DSU_STATUSB Mask) DCCD */
#define DSU_STATUSB_DCCD(value)               (DSU_STATUSB_DCCD_Msk & ((value) << DSU_STATUSB_DCCD_Pos)) 

/* -------- DSU_STATUSC : (DSU Offset: 0x108) ( R/ 32) Status C -------- */
#define DSU_STATUSC_RESETVALUE                _U_(0x00)                                            /**<  (DSU_STATUSC) Status C  Reset Value */

#define DSU_STATUSC_STATE_Pos                 _U_(0)                                               /**< (DSU_STATUSC) Core State Position */
#define DSU_STATUSC_STATE_Msk                 (_U_(0x1F) << DSU_STATUSC_STATE_Pos)                 /**< (DSU_STATUSC) Core State Mask */
#define DSU_STATUSC_STATE(value)              (DSU_STATUSC_STATE_Msk & ((value) << DSU_STATUSC_STATE_Pos))
#define   DSU_STATUSC_STATE_IDLE_Val          _U_(0x0)                                             /**< (DSU_STATUSC) State Machine Ready  */
#define   DSU_STATUSC_STATE_MBIST_FILL_Val    _U_(0x8)                                             /**< (DSU_STATUSC) MBIST fill memory with zeroes  */
#define   DSU_STATUSC_STATE_MBIST_SET1_Val    _U_(0x9)                                             /**< (DSU_STATUSC) SET1 Phase: read '0' write '1'  */
#define   DSU_STATUSC_STATE_MBIST_SET2_Val    _U_(0xA)                                             /**< (DSU_STATUSC) SET2 Phase: read '1' write '0'  */
#define   DSU_STATUSC_STATE_MBIST_SET2B_Val   _U_(0xB)                                             /**< (DSU_STATUSC) SET2B Phase: read '0' write '1'  */
#define   DSU_STATUSC_STATE_MBIST_CLEAR1_Val  _U_(0xC)                                             /**< (DSU_STATUSC) CLEAR1 Phase: read '1' write '0'  */
#define   DSU_STATUSC_STATE_MBIST_CLEAR2_Val  _U_(0xD)                                             /**< (DSU_STATUSC) CLEAR2 Phase: read '0' write '1'  */
#define   DSU_STATUSC_STATE_MBIST_CLEAR2B_Val _U_(0xE)                                             /**< (DSU_STATUSC) CLEAR2B Phase: read '1' write '0'  */
#define   DSU_STATUSC_STATE_MBIST_READ_Val    _U_(0xF)                                             /**< (DSU_STATUSC) READ Phase: check memory is cleared  */
#define DSU_STATUSC_STATE_IDLE                (DSU_STATUSC_STATE_IDLE_Val << DSU_STATUSC_STATE_Pos) /**< (DSU_STATUSC) State Machine Ready Position  */
#define DSU_STATUSC_STATE_MBIST_FILL          (DSU_STATUSC_STATE_MBIST_FILL_Val << DSU_STATUSC_STATE_Pos) /**< (DSU_STATUSC) MBIST fill memory with zeroes Position  */
#define DSU_STATUSC_STATE_MBIST_SET1          (DSU_STATUSC_STATE_MBIST_SET1_Val << DSU_STATUSC_STATE_Pos) /**< (DSU_STATUSC) SET1 Phase: read '0' write '1' Position  */
#define DSU_STATUSC_STATE_MBIST_SET2          (DSU_STATUSC_STATE_MBIST_SET2_Val << DSU_STATUSC_STATE_Pos) /**< (DSU_STATUSC) SET2 Phase: read '1' write '0' Position  */
#define DSU_STATUSC_STATE_MBIST_SET2B         (DSU_STATUSC_STATE_MBIST_SET2B_Val << DSU_STATUSC_STATE_Pos) /**< (DSU_STATUSC) SET2B Phase: read '0' write '1' Position  */
#define DSU_STATUSC_STATE_MBIST_CLEAR1        (DSU_STATUSC_STATE_MBIST_CLEAR1_Val << DSU_STATUSC_STATE_Pos) /**< (DSU_STATUSC) CLEAR1 Phase: read '1' write '0' Position  */
#define DSU_STATUSC_STATE_MBIST_CLEAR2        (DSU_STATUSC_STATE_MBIST_CLEAR2_Val << DSU_STATUSC_STATE_Pos) /**< (DSU_STATUSC) CLEAR2 Phase: read '0' write '1' Position  */
#define DSU_STATUSC_STATE_MBIST_CLEAR2B       (DSU_STATUSC_STATE_MBIST_CLEAR2B_Val << DSU_STATUSC_STATE_Pos) /**< (DSU_STATUSC) CLEAR2B Phase: read '1' write '0' Position  */
#define DSU_STATUSC_STATE_MBIST_READ          (DSU_STATUSC_STATE_MBIST_READ_Val << DSU_STATUSC_STATE_Pos) /**< (DSU_STATUSC) READ Phase: check memory is cleared Position  */
#define DSU_STATUSC_INDEX_Pos                 _U_(8)                                               /**< (DSU_STATUSC) MBIST, MSA, PMSA bit Index Position */
#define DSU_STATUSC_INDEX_Msk                 (_U_(0x1F) << DSU_STATUSC_INDEX_Pos)                 /**< (DSU_STATUSC) MBIST, MSA, PMSA bit Index Mask */
#define DSU_STATUSC_INDEX(value)              (DSU_STATUSC_INDEX_Msk & ((value) << DSU_STATUSC_INDEX_Pos))
#define DSU_STATUSC_Msk                       _U_(0x00001F1F)                                      /**< (DSU_STATUSC) Register Mask  */


/* -------- DSU_BCC : (DSU Offset: 0x110) (R/W 32) Boot ROM Communication Channel x -------- */
#define DSU_BCC_RESETVALUE                    _U_(0x00)                                            /**<  (DSU_BCC) Boot ROM Communication Channel x  Reset Value */

#define DSU_BCC_DATA_Pos                      _U_(0)                                               /**< (DSU_BCC) Data Position */
#define DSU_BCC_DATA_Msk                      (_U_(0xFFFFFFFF) << DSU_BCC_DATA_Pos)                /**< (DSU_BCC) Data Mask */
#define DSU_BCC_DATA(value)                   (DSU_BCC_DATA_Msk & ((value) << DSU_BCC_DATA_Pos))  
#define DSU_BCC_Msk                           _U_(0xFFFFFFFF)                                      /**< (DSU_BCC) Register Mask  */


/* -------- DSU_DCC : (DSU Offset: 0x118) (R/W 32) Debug Communication Channel x -------- */
#define DSU_DCC_RESETVALUE                    _U_(0x00)                                            /**<  (DSU_DCC) Debug Communication Channel x  Reset Value */

#define DSU_DCC_DATA_Pos                      _U_(0)                                               /**< (DSU_DCC) Data Position */
#define DSU_DCC_DATA_Msk                      (_U_(0xFFFFFFFF) << DSU_DCC_DATA_Pos)                /**< (DSU_DCC) Data Mask */
#define DSU_DCC_DATA(value)                   (DSU_DCC_DATA_Msk & ((value) << DSU_DCC_DATA_Pos))  
#define DSU_DCC_Msk                           _U_(0xFFFFFFFF)                                      /**< (DSU_DCC) Register Mask  */


/* -------- DSU_DID : (DSU Offset: 0x120) ( R/ 32) Device Identification -------- */
#define DSU_DID_RESETVALUE                    _U_(0x920C053)                                       /**<  (DSU_DID) Device Identification  Reset Value */

#define DSU_DID_MARKER_Pos                    _U_(0)                                               /**< (DSU_DID) Marker Bit Position */
#define DSU_DID_MARKER_Msk                    (_U_(0x1) << DSU_DID_MARKER_Pos)                     /**< (DSU_DID) Marker Bit Mask */
#define DSU_DID_MARKER(value)                 (DSU_DID_MARKER_Msk & ((value) << DSU_DID_MARKER_Pos))
#define DSU_DID_MANID_Pos                     _U_(1)                                               /**< (DSU_DID) Manufacturer ID Position */
#define DSU_DID_MANID_Msk                     (_U_(0x7FF) << DSU_DID_MANID_Pos)                    /**< (DSU_DID) Manufacturer ID Mask */
#define DSU_DID_MANID(value)                  (DSU_DID_MANID_Msk & ((value) << DSU_DID_MANID_Pos))
#define DSU_DID_DEVSEL_Pos                    _U_(12)                                              /**< (DSU_DID) Device Select Position */
#define DSU_DID_DEVSEL_Msk                    (_U_(0xFF) << DSU_DID_DEVSEL_Pos)                    /**< (DSU_DID) Device Select Mask */
#define DSU_DID_DEVSEL(value)                 (DSU_DID_DEVSEL_Msk & ((value) << DSU_DID_DEVSEL_Pos))
#define DSU_DID_PRODUCT_Pos                   _U_(20)                                              /**< (DSU_DID) Product Position */
#define DSU_DID_PRODUCT_Msk                   (_U_(0xFF) << DSU_DID_PRODUCT_Pos)                   /**< (DSU_DID) Product Mask */
#define DSU_DID_PRODUCT(value)                (DSU_DID_PRODUCT_Msk & ((value) << DSU_DID_PRODUCT_Pos))
#define DSU_DID_REVISION_Pos                  _U_(28)                                              /**< (DSU_DID) Revision Position */
#define DSU_DID_REVISION_Msk                  (_U_(0xF) << DSU_DID_REVISION_Pos)                   /**< (DSU_DID) Revision Mask */
#define DSU_DID_REVISION(value)               (DSU_DID_REVISION_Msk & ((value) << DSU_DID_REVISION_Pos))
#define DSU_DID_Msk                           _U_(0xFFFFFFFF)                                      /**< (DSU_DID) Register Mask  */


/* -------- DSU_DAL : (DSU Offset: 0x124) ( R/ 32) Debugger Access Level -------- */
#define DSU_DAL_RESETVALUE                    _U_(0x00)                                            /**<  (DSU_DAL) Debugger Access Level  Reset Value */

#define DSU_DAL_CPU0_Pos                      _U_(0)                                               /**< (DSU_DAL) Per CPU Debugger Access Level Position */
#define DSU_DAL_CPU0_Msk                      (_U_(0x3) << DSU_DAL_CPU0_Pos)                       /**< (DSU_DAL) Per CPU Debugger Access Level Mask */
#define DSU_DAL_CPU0(value)                   (DSU_DAL_CPU0_Msk & ((value) << DSU_DAL_CPU0_Pos))  
#define   DSU_DAL_CPU0_SECURED_Val            _U_(0x0)                                             /**< (DSU_DAL) Debugger targeting CPU0 domain can only access the DSU external address space otherwise debugger access is disabled  */
#define   DSU_DAL_CPU0_NS_DEBUG_Val           _U_(0x1)                                             /**< (DSU_DAL) Debugger can access only non-secure regions  */
#define   DSU_DAL_CPU0_FULL_DEBUG_Val         _U_(0x2)                                             /**< (DSU_DAL) Debugger can access secure and non-secure regions  */
#define   DSU_DAL_CPU0_UNIMPLEMENTED_Val      _U_(0x3)                                             /**< (DSU_DAL) No CPU in this slot  */
#define DSU_DAL_CPU0_SECURED                  (DSU_DAL_CPU0_SECURED_Val << DSU_DAL_CPU0_Pos)       /**< (DSU_DAL) Debugger targeting CPU0 domain can only access the DSU external address space otherwise debugger access is disabled Position  */
#define DSU_DAL_CPU0_NS_DEBUG                 (DSU_DAL_CPU0_NS_DEBUG_Val << DSU_DAL_CPU0_Pos)      /**< (DSU_DAL) Debugger can access only non-secure regions Position  */
#define DSU_DAL_CPU0_FULL_DEBUG               (DSU_DAL_CPU0_FULL_DEBUG_Val << DSU_DAL_CPU0_Pos)    /**< (DSU_DAL) Debugger can access secure and non-secure regions Position  */
#define DSU_DAL_CPU0_UNIMPLEMENTED            (DSU_DAL_CPU0_UNIMPLEMENTED_Val << DSU_DAL_CPU0_Pos) /**< (DSU_DAL) No CPU in this slot Position  */
#define DSU_DAL_CPU1_Pos                      _U_(2)                                               /**< (DSU_DAL) Per CPU Debugger Access Level Position */
#define DSU_DAL_CPU1_Msk                      (_U_(0x3) << DSU_DAL_CPU1_Pos)                       /**< (DSU_DAL) Per CPU Debugger Access Level Mask */
#define DSU_DAL_CPU1(value)                   (DSU_DAL_CPU1_Msk & ((value) << DSU_DAL_CPU1_Pos))  
#define   DSU_DAL_CPU1_SECURED_Val            _U_(0x0)                                             /**< (DSU_DAL) Debugger targeting CPU0 domain can only access the DSU external address space otherwise debugger access is disabled  */
#define   DSU_DAL_CPU1_NS_DEBUG_Val           _U_(0x1)                                             /**< (DSU_DAL) Debugger can access only non-secure regions  */
#define   DSU_DAL_CPU1_FULL_DEBUG_Val         _U_(0x2)                                             /**< (DSU_DAL) Debugger can access secure and non-secure regions  */
#define   DSU_DAL_CPU1_UNIMPLEMENTED_Val      _U_(0x3)                                             /**< (DSU_DAL) No CPU in this slot  */
#define DSU_DAL_CPU1_SECURED                  (DSU_DAL_CPU1_SECURED_Val << DSU_DAL_CPU1_Pos)       /**< (DSU_DAL) Debugger targeting CPU0 domain can only access the DSU external address space otherwise debugger access is disabled Position  */
#define DSU_DAL_CPU1_NS_DEBUG                 (DSU_DAL_CPU1_NS_DEBUG_Val << DSU_DAL_CPU1_Pos)      /**< (DSU_DAL) Debugger can access only non-secure regions Position  */
#define DSU_DAL_CPU1_FULL_DEBUG               (DSU_DAL_CPU1_FULL_DEBUG_Val << DSU_DAL_CPU1_Pos)    /**< (DSU_DAL) Debugger can access secure and non-secure regions Position  */
#define DSU_DAL_CPU1_UNIMPLEMENTED            (DSU_DAL_CPU1_UNIMPLEMENTED_Val << DSU_DAL_CPU1_Pos) /**< (DSU_DAL) No CPU in this slot Position  */
#define DSU_DAL_CPU2_Pos                      _U_(4)                                               /**< (DSU_DAL) Per CPU Debugger Access Level Position */
#define DSU_DAL_CPU2_Msk                      (_U_(0x3) << DSU_DAL_CPU2_Pos)                       /**< (DSU_DAL) Per CPU Debugger Access Level Mask */
#define DSU_DAL_CPU2(value)                   (DSU_DAL_CPU2_Msk & ((value) << DSU_DAL_CPU2_Pos))  
#define   DSU_DAL_CPU2_SECURED_Val            _U_(0x0)                                             /**< (DSU_DAL) Debugger targeting CPU0 domain can only access the DSU external address space otherwise debugger access is disabled  */
#define   DSU_DAL_CPU2_NS_DEBUG_Val           _U_(0x1)                                             /**< (DSU_DAL) Debugger can access only non-secure regions  */
#define   DSU_DAL_CPU2_FULL_DEBUG_Val         _U_(0x2)                                             /**< (DSU_DAL) Debugger can access secure and non-secure regions  */
#define   DSU_DAL_CPU2_UNIMPLEMENTED_Val      _U_(0x3)                                             /**< (DSU_DAL) No CPU in this slot  */
#define DSU_DAL_CPU2_SECURED                  (DSU_DAL_CPU2_SECURED_Val << DSU_DAL_CPU2_Pos)       /**< (DSU_DAL) Debugger targeting CPU0 domain can only access the DSU external address space otherwise debugger access is disabled Position  */
#define DSU_DAL_CPU2_NS_DEBUG                 (DSU_DAL_CPU2_NS_DEBUG_Val << DSU_DAL_CPU2_Pos)      /**< (DSU_DAL) Debugger can access only non-secure regions Position  */
#define DSU_DAL_CPU2_FULL_DEBUG               (DSU_DAL_CPU2_FULL_DEBUG_Val << DSU_DAL_CPU2_Pos)    /**< (DSU_DAL) Debugger can access secure and non-secure regions Position  */
#define DSU_DAL_CPU2_UNIMPLEMENTED            (DSU_DAL_CPU2_UNIMPLEMENTED_Val << DSU_DAL_CPU2_Pos) /**< (DSU_DAL) No CPU in this slot Position  */
#define DSU_DAL_CPU3_Pos                      _U_(6)                                               /**< (DSU_DAL) Per CPU Debugger Access Level Position */
#define DSU_DAL_CPU3_Msk                      (_U_(0x3) << DSU_DAL_CPU3_Pos)                       /**< (DSU_DAL) Per CPU Debugger Access Level Mask */
#define DSU_DAL_CPU3(value)                   (DSU_DAL_CPU3_Msk & ((value) << DSU_DAL_CPU3_Pos))  
#define   DSU_DAL_CPU3_SECURED_Val            _U_(0x0)                                             /**< (DSU_DAL) Debugger targeting CPU0 domain can only access the DSU external address space otherwise debugger access is disabled  */
#define   DSU_DAL_CPU3_NS_DEBUG_Val           _U_(0x1)                                             /**< (DSU_DAL) Debugger can access only non-secure regions  */
#define   DSU_DAL_CPU3_FULL_DEBUG_Val         _U_(0x2)                                             /**< (DSU_DAL) Debugger can access secure and non-secure regions  */
#define   DSU_DAL_CPU3_UNIMPLEMENTED_Val      _U_(0x3)                                             /**< (DSU_DAL) No CPU in this slot  */
#define DSU_DAL_CPU3_SECURED                  (DSU_DAL_CPU3_SECURED_Val << DSU_DAL_CPU3_Pos)       /**< (DSU_DAL) Debugger targeting CPU0 domain can only access the DSU external address space otherwise debugger access is disabled Position  */
#define DSU_DAL_CPU3_NS_DEBUG                 (DSU_DAL_CPU3_NS_DEBUG_Val << DSU_DAL_CPU3_Pos)      /**< (DSU_DAL) Debugger can access only non-secure regions Position  */
#define DSU_DAL_CPU3_FULL_DEBUG               (DSU_DAL_CPU3_FULL_DEBUG_Val << DSU_DAL_CPU3_Pos)    /**< (DSU_DAL) Debugger can access secure and non-secure regions Position  */
#define DSU_DAL_CPU3_UNIMPLEMENTED            (DSU_DAL_CPU3_UNIMPLEMENTED_Val << DSU_DAL_CPU3_Pos) /**< (DSU_DAL) No CPU in this slot Position  */
#define DSU_DAL_Msk                           _U_(0x000000FF)                                      /**< (DSU_DAL) Register Mask  */


/* -------- DSU_ENTRY : (DSU Offset: 0x1000) ( R/ 32) Coresight ROM Table Entry x -------- */
#define DSU_ENTRY_RESETVALUE                  _U_(0x00)                                            /**<  (DSU_ENTRY) Coresight ROM Table Entry x  Reset Value */

#define DSU_ENTRY_EPRES_Pos                   _U_(0)                                               /**< (DSU_ENTRY) Entry Present Position */
#define DSU_ENTRY_EPRES_Msk                   (_U_(0x1) << DSU_ENTRY_EPRES_Pos)                    /**< (DSU_ENTRY) Entry Present Mask */
#define DSU_ENTRY_EPRES(value)                (DSU_ENTRY_EPRES_Msk & ((value) << DSU_ENTRY_EPRES_Pos))
#define DSU_ENTRY_FMT_Pos                     _U_(1)                                               /**< (DSU_ENTRY) Format Position */
#define DSU_ENTRY_FMT_Msk                     (_U_(0x1) << DSU_ENTRY_FMT_Pos)                      /**< (DSU_ENTRY) Format Mask */
#define DSU_ENTRY_FMT(value)                  (DSU_ENTRY_FMT_Msk & ((value) << DSU_ENTRY_FMT_Pos))
#define DSU_ENTRY_ADDOFF_Pos                  _U_(12)                                              /**< (DSU_ENTRY) Address Offset Position */
#define DSU_ENTRY_ADDOFF_Msk                  (_U_(0xFFFFF) << DSU_ENTRY_ADDOFF_Pos)               /**< (DSU_ENTRY) Address Offset Mask */
#define DSU_ENTRY_ADDOFF(value)               (DSU_ENTRY_ADDOFF_Msk & ((value) << DSU_ENTRY_ADDOFF_Pos))
#define DSU_ENTRY_Msk                         _U_(0xFFFFF003)                                      /**< (DSU_ENTRY) Register Mask  */


/* -------- DSU_MEMTYPE : (DSU Offset: 0x1FCC) ( R/ 32) Coresight ROM Table Memory Type -------- */
#define DSU_MEMTYPE_RESETVALUE                _U_(0x00)                                            /**<  (DSU_MEMTYPE) Coresight ROM Table Memory Type  Reset Value */

#define DSU_MEMTYPE_SMEMP_Pos                 _U_(0)                                               /**< (DSU_MEMTYPE) System Memory Present Position */
#define DSU_MEMTYPE_SMEMP_Msk                 (_U_(0x1) << DSU_MEMTYPE_SMEMP_Pos)                  /**< (DSU_MEMTYPE) System Memory Present Mask */
#define DSU_MEMTYPE_SMEMP(value)              (DSU_MEMTYPE_SMEMP_Msk & ((value) << DSU_MEMTYPE_SMEMP_Pos))
#define DSU_MEMTYPE_Msk                       _U_(0x00000001)                                      /**< (DSU_MEMTYPE) Register Mask  */


/* -------- DSU_PID4 : (DSU Offset: 0x1FD0) ( R/ 32) Coresight ROM Table Peripheral Identification 4 -------- */
#define DSU_PID4_RESETVALUE                   _U_(0x00)                                            /**<  (DSU_PID4) Coresight ROM Table Peripheral Identification 4  Reset Value */

#define DSU_PID4_JEPCC_Pos                    _U_(0)                                               /**< (DSU_PID4) JEP-106 Continuation Code Position */
#define DSU_PID4_JEPCC_Msk                    (_U_(0xF) << DSU_PID4_JEPCC_Pos)                     /**< (DSU_PID4) JEP-106 Continuation Code Mask */
#define DSU_PID4_JEPCC(value)                 (DSU_PID4_JEPCC_Msk & ((value) << DSU_PID4_JEPCC_Pos))
#define DSU_PID4_FKBC_Pos                     _U_(4)                                               /**< (DSU_PID4) 4KB count Position */
#define DSU_PID4_FKBC_Msk                     (_U_(0xF) << DSU_PID4_FKBC_Pos)                      /**< (DSU_PID4) 4KB count Mask */
#define DSU_PID4_FKBC(value)                  (DSU_PID4_FKBC_Msk & ((value) << DSU_PID4_FKBC_Pos))
#define DSU_PID4_Msk                          _U_(0x000000FF)                                      /**< (DSU_PID4) Register Mask  */


/* -------- DSU_PID5 : (DSU Offset: 0x1FD4) ( R/ 32) Coresight ROM Table Peripheral Identification 5 -------- */
#define DSU_PID5_RESETVALUE                   _U_(0x00)                                            /**<  (DSU_PID5) Coresight ROM Table Peripheral Identification 5  Reset Value */

#define DSU_PID5_Msk                          _U_(0x00000000)                                      /**< (DSU_PID5) Register Mask  */


/* -------- DSU_PID6 : (DSU Offset: 0x1FD8) ( R/ 32) Coresight ROM Table Peripheral Identification 6 -------- */
#define DSU_PID6_RESETVALUE                   _U_(0x00)                                            /**<  (DSU_PID6) Coresight ROM Table Peripheral Identification 6  Reset Value */

#define DSU_PID6_Msk                          _U_(0x00000000)                                      /**< (DSU_PID6) Register Mask  */


/* -------- DSU_PID7 : (DSU Offset: 0x1FDC) ( R/ 32) Coresight ROM Table Peripheral Identification 7 -------- */
#define DSU_PID7_RESETVALUE                   _U_(0x00)                                            /**<  (DSU_PID7) Coresight ROM Table Peripheral Identification 7  Reset Value */

#define DSU_PID7_Msk                          _U_(0x00000000)                                      /**< (DSU_PID7) Register Mask  */


/* -------- DSU_PID0 : (DSU Offset: 0x1FE0) ( R/ 32) Coresight ROM Table Peripheral Identification 0 -------- */
#define DSU_PID0_RESETVALUE                   _U_(0xD0)                                            /**<  (DSU_PID0) Coresight ROM Table Peripheral Identification 0  Reset Value */

#define DSU_PID0_PARTNBL_Pos                  _U_(0)                                               /**< (DSU_PID0) Part Number Low Position */
#define DSU_PID0_PARTNBL_Msk                  (_U_(0xFF) << DSU_PID0_PARTNBL_Pos)                  /**< (DSU_PID0) Part Number Low Mask */
#define DSU_PID0_PARTNBL(value)               (DSU_PID0_PARTNBL_Msk & ((value) << DSU_PID0_PARTNBL_Pos))
#define DSU_PID0_Msk                          _U_(0x000000FF)                                      /**< (DSU_PID0) Register Mask  */


/* -------- DSU_PID1 : (DSU Offset: 0x1FE4) ( R/ 32) Coresight ROM Table Peripheral Identification 1 -------- */
#define DSU_PID1_RESETVALUE                   _U_(0x9C)                                            /**<  (DSU_PID1) Coresight ROM Table Peripheral Identification 1  Reset Value */

#define DSU_PID1_PARTNBH_Pos                  _U_(0)                                               /**< (DSU_PID1) Part Number High Position */
#define DSU_PID1_PARTNBH_Msk                  (_U_(0xF) << DSU_PID1_PARTNBH_Pos)                   /**< (DSU_PID1) Part Number High Mask */
#define DSU_PID1_PARTNBH(value)               (DSU_PID1_PARTNBH_Msk & ((value) << DSU_PID1_PARTNBH_Pos))
#define DSU_PID1_JEPIDCL_Pos                  _U_(4)                                               /**< (DSU_PID1) Low part of the JEP-106 Identity Code Position */
#define DSU_PID1_JEPIDCL_Msk                  (_U_(0xF) << DSU_PID1_JEPIDCL_Pos)                   /**< (DSU_PID1) Low part of the JEP-106 Identity Code Mask */
#define DSU_PID1_JEPIDCL(value)               (DSU_PID1_JEPIDCL_Msk & ((value) << DSU_PID1_JEPIDCL_Pos))
#define DSU_PID1_Msk                          _U_(0x000000FF)                                      /**< (DSU_PID1) Register Mask  */


/* -------- DSU_PID2 : (DSU Offset: 0x1FE8) ( R/ 32) Coresight ROM Table Peripheral Identification 2 -------- */
#define DSU_PID2_RESETVALUE                   _U_(0x2A)                                            /**<  (DSU_PID2) Coresight ROM Table Peripheral Identification 2  Reset Value */

#define DSU_PID2_JEPIDCH_Pos                  _U_(0)                                               /**< (DSU_PID2) JEP-106 Identity Code High Position */
#define DSU_PID2_JEPIDCH_Msk                  (_U_(0x7) << DSU_PID2_JEPIDCH_Pos)                   /**< (DSU_PID2) JEP-106 Identity Code High Mask */
#define DSU_PID2_JEPIDCH(value)               (DSU_PID2_JEPIDCH_Msk & ((value) << DSU_PID2_JEPIDCH_Pos))
#define DSU_PID2_JEPU_Pos                     _U_(3)                                               /**< (DSU_PID2) JEP-106 Identity Code is used Position */
#define DSU_PID2_JEPU_Msk                     (_U_(0x1) << DSU_PID2_JEPU_Pos)                      /**< (DSU_PID2) JEP-106 Identity Code is used Mask */
#define DSU_PID2_JEPU(value)                  (DSU_PID2_JEPU_Msk & ((value) << DSU_PID2_JEPU_Pos))
#define DSU_PID2_REVISION_Pos                 _U_(4)                                               /**< (DSU_PID2) Revision Number Position */
#define DSU_PID2_REVISION_Msk                 (_U_(0xF) << DSU_PID2_REVISION_Pos)                  /**< (DSU_PID2) Revision Number Mask */
#define DSU_PID2_REVISION(value)              (DSU_PID2_REVISION_Msk & ((value) << DSU_PID2_REVISION_Pos))
#define DSU_PID2_Msk                          _U_(0x000000FF)                                      /**< (DSU_PID2) Register Mask  */


/* -------- DSU_PID3 : (DSU Offset: 0x1FEC) ( R/ 32) Coresight ROM Table Peripheral Identification 3 -------- */
#define DSU_PID3_RESETVALUE                   _U_(0x00)                                            /**<  (DSU_PID3) Coresight ROM Table Peripheral Identification 3  Reset Value */

#define DSU_PID3_CUSMOD_Pos                   _U_(0)                                               /**< (DSU_PID3) ARM CUSMOD Position */
#define DSU_PID3_CUSMOD_Msk                   (_U_(0xF) << DSU_PID3_CUSMOD_Pos)                    /**< (DSU_PID3) ARM CUSMOD Mask */
#define DSU_PID3_CUSMOD(value)                (DSU_PID3_CUSMOD_Msk & ((value) << DSU_PID3_CUSMOD_Pos))
#define DSU_PID3_REVAND_Pos                   _U_(4)                                               /**< (DSU_PID3) Revision Number Position */
#define DSU_PID3_REVAND_Msk                   (_U_(0xF) << DSU_PID3_REVAND_Pos)                    /**< (DSU_PID3) Revision Number Mask */
#define DSU_PID3_REVAND(value)                (DSU_PID3_REVAND_Msk & ((value) << DSU_PID3_REVAND_Pos))
#define DSU_PID3_Msk                          _U_(0x000000FF)                                      /**< (DSU_PID3) Register Mask  */


/* -------- DSU_CID0 : (DSU Offset: 0x1FF0) ( R/ 32) Coresight ROM Table Component Identification 0 -------- */
#define DSU_CID0_RESETVALUE                   _U_(0x0D)                                            /**<  (DSU_CID0) Coresight ROM Table Component Identification 0  Reset Value */

#define DSU_CID0_PREAMBLEB0_Pos               _U_(0)                                               /**< (DSU_CID0) Preamble Byte 0 Position */
#define DSU_CID0_PREAMBLEB0_Msk               (_U_(0xFF) << DSU_CID0_PREAMBLEB0_Pos)               /**< (DSU_CID0) Preamble Byte 0 Mask */
#define DSU_CID0_PREAMBLEB0(value)            (DSU_CID0_PREAMBLEB0_Msk & ((value) << DSU_CID0_PREAMBLEB0_Pos))
#define DSU_CID0_Msk                          _U_(0x000000FF)                                      /**< (DSU_CID0) Register Mask  */


/* -------- DSU_CID1 : (DSU Offset: 0x1FF4) ( R/ 32) Coresight ROM Table Component Identification 1 -------- */
#define DSU_CID1_RESETVALUE                   _U_(0x10)                                            /**<  (DSU_CID1) Coresight ROM Table Component Identification 1  Reset Value */

#define DSU_CID1_PREAMBLE_Pos                 _U_(0)                                               /**< (DSU_CID1) Preamble Position */
#define DSU_CID1_PREAMBLE_Msk                 (_U_(0xF) << DSU_CID1_PREAMBLE_Pos)                  /**< (DSU_CID1) Preamble Mask */
#define DSU_CID1_PREAMBLE(value)              (DSU_CID1_PREAMBLE_Msk & ((value) << DSU_CID1_PREAMBLE_Pos))
#define DSU_CID1_CCLASS_Pos                   _U_(4)                                               /**< (DSU_CID1) Component Class Position */
#define DSU_CID1_CCLASS_Msk                   (_U_(0xF) << DSU_CID1_CCLASS_Pos)                    /**< (DSU_CID1) Component Class Mask */
#define DSU_CID1_CCLASS(value)                (DSU_CID1_CCLASS_Msk & ((value) << DSU_CID1_CCLASS_Pos))
#define DSU_CID1_Msk                          _U_(0x000000FF)                                      /**< (DSU_CID1) Register Mask  */


/* -------- DSU_CID2 : (DSU Offset: 0x1FF8) ( R/ 32) Coresight ROM Table Component Identification 2 -------- */
#define DSU_CID2_RESETVALUE                   _U_(0x05)                                            /**<  (DSU_CID2) Coresight ROM Table Component Identification 2  Reset Value */

#define DSU_CID2_PREAMBLEB2_Pos               _U_(0)                                               /**< (DSU_CID2) Preamble Byte 2 Position */
#define DSU_CID2_PREAMBLEB2_Msk               (_U_(0xFF) << DSU_CID2_PREAMBLEB2_Pos)               /**< (DSU_CID2) Preamble Byte 2 Mask */
#define DSU_CID2_PREAMBLEB2(value)            (DSU_CID2_PREAMBLEB2_Msk & ((value) << DSU_CID2_PREAMBLEB2_Pos))
#define DSU_CID2_Msk                          _U_(0x000000FF)                                      /**< (DSU_CID2) Register Mask  */


/* -------- DSU_CID3 : (DSU Offset: 0x1FFC) ( R/ 32) Coresight ROM Table Component Identification 3 -------- */
#define DSU_CID3_RESETVALUE                   _U_(0xB1)                                            /**<  (DSU_CID3) Coresight ROM Table Component Identification 3  Reset Value */

#define DSU_CID3_PREAMBLEB3_Pos               _U_(0)                                               /**< (DSU_CID3) Preamble Byte 3 Position */
#define DSU_CID3_PREAMBLEB3_Msk               (_U_(0xFF) << DSU_CID3_PREAMBLEB3_Pos)               /**< (DSU_CID3) Preamble Byte 3 Mask */
#define DSU_CID3_PREAMBLEB3(value)            (DSU_CID3_PREAMBLEB3_Msk & ((value) << DSU_CID3_PREAMBLEB3_Pos))
#define DSU_CID3_Msk                          _U_(0x000000FF)                                      /**< (DSU_CID3) Register Mask  */


/** \brief DSU register offsets definitions */
#define DSU_CTRL_REG_OFST              (0x00)              /**< (DSU_CTRL) Control Offset */
#define DSU_ADDR_REG_OFST              (0x04)              /**< (DSU_ADDR) Address Offset */
#define DSU_LENGTH_REG_OFST            (0x08)              /**< (DSU_LENGTH) Length Offset */
#define DSU_DATA_REG_OFST              (0x0C)              /**< (DSU_DATA) Data Offset */
#define DSU_CFG_REG_OFST               (0x10)              /**< (DSU_CFG) Configuration Offset */
#define DSU_MBFI0_REG_OFST             (0x14)              /**< (DSU_MBFI0) Memory Bist Fault Injection 0 Offset */
#define DSU_MBFI1_REG_OFST             (0x18)              /**< (DSU_MBFI1) Memory Bist Fault Injection 1 Offset */
#define DSU_STATUSA_REG_OFST           (0x100)             /**< (DSU_STATUSA) Status A Offset */
#define DSU_STATUSB_REG_OFST           (0x104)             /**< (DSU_STATUSB) Status B Offset */
#define DSU_STATUSC_REG_OFST           (0x108)             /**< (DSU_STATUSC) Status C Offset */
#define DSU_BCC_REG_OFST               (0x110)             /**< (DSU_BCC) Boot ROM Communication Channel x Offset */
#define DSU_BCC0_REG_OFST              (0x110)             /**< (DSU_BCC0) Boot ROM Communication Channel x Offset */
#define DSU_BCC1_REG_OFST              (0x114)             /**< (DSU_BCC1) Boot ROM Communication Channel x Offset */
#define DSU_DCC_REG_OFST               (0x118)             /**< (DSU_DCC) Debug Communication Channel x Offset */
#define DSU_DCC0_REG_OFST              (0x118)             /**< (DSU_DCC0) Debug Communication Channel x Offset */
#define DSU_DCC1_REG_OFST              (0x11C)             /**< (DSU_DCC1) Debug Communication Channel x Offset */
#define DSU_DID_REG_OFST               (0x120)             /**< (DSU_DID) Device Identification Offset */
#define DSU_DAL_REG_OFST               (0x124)             /**< (DSU_DAL) Debugger Access Level Offset */
#define DSU_ENTRY_REG_OFST             (0x1000)            /**< (DSU_ENTRY) Coresight ROM Table Entry x Offset */
#define DSU_ENTRY0_REG_OFST            (0x1000)            /**< (DSU_ENTRY0) Coresight ROM Table Entry x Offset */
#define DSU_ENTRY1_REG_OFST            (0x1004)            /**< (DSU_ENTRY1) Coresight ROM Table Entry x Offset */
#define DSU_ENTRY2_REG_OFST            (0x1008)            /**< (DSU_ENTRY2) Coresight ROM Table Entry x Offset */
#define DSU_ENTRY3_REG_OFST            (0x100C)            /**< (DSU_ENTRY3) Coresight ROM Table Entry x Offset */
#define DSU_ENTRY4_REG_OFST            (0x1010)            /**< (DSU_ENTRY4) Coresight ROM Table Entry x Offset */
#define DSU_ENTRY5_REG_OFST            (0x1014)            /**< (DSU_ENTRY5) Coresight ROM Table Entry x Offset */
#define DSU_ENTRY6_REG_OFST            (0x1018)            /**< (DSU_ENTRY6) Coresight ROM Table Entry x Offset */
#define DSU_ENTRY7_REG_OFST            (0x101C)            /**< (DSU_ENTRY7) Coresight ROM Table Entry x Offset */
#define DSU_MEMTYPE_REG_OFST           (0x1FCC)            /**< (DSU_MEMTYPE) Coresight ROM Table Memory Type Offset */
#define DSU_PID4_REG_OFST              (0x1FD0)            /**< (DSU_PID4) Coresight ROM Table Peripheral Identification 4 Offset */
#define DSU_PID5_REG_OFST              (0x1FD4)            /**< (DSU_PID5) Coresight ROM Table Peripheral Identification 5 Offset */
#define DSU_PID6_REG_OFST              (0x1FD8)            /**< (DSU_PID6) Coresight ROM Table Peripheral Identification 6 Offset */
#define DSU_PID7_REG_OFST              (0x1FDC)            /**< (DSU_PID7) Coresight ROM Table Peripheral Identification 7 Offset */
#define DSU_PID0_REG_OFST              (0x1FE0)            /**< (DSU_PID0) Coresight ROM Table Peripheral Identification 0 Offset */
#define DSU_PID1_REG_OFST              (0x1FE4)            /**< (DSU_PID1) Coresight ROM Table Peripheral Identification 1 Offset */
#define DSU_PID2_REG_OFST              (0x1FE8)            /**< (DSU_PID2) Coresight ROM Table Peripheral Identification 2 Offset */
#define DSU_PID3_REG_OFST              (0x1FEC)            /**< (DSU_PID3) Coresight ROM Table Peripheral Identification 3 Offset */
#define DSU_CID0_REG_OFST              (0x1FF0)            /**< (DSU_CID0) Coresight ROM Table Component Identification 0 Offset */
#define DSU_CID1_REG_OFST              (0x1FF4)            /**< (DSU_CID1) Coresight ROM Table Component Identification 1 Offset */
#define DSU_CID2_REG_OFST              (0x1FF8)            /**< (DSU_CID2) Coresight ROM Table Component Identification 2 Offset */
#define DSU_CID3_REG_OFST              (0x1FFC)            /**< (DSU_CID3) Coresight ROM Table Component Identification 3 Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief DSU register API structure */
typedef struct
{  /* Device Service Unit */
  __O   uint32_t                       DSU_CTRL;           /**< Offset: 0x00 ( /W  32) Control */
  __IO  uint32_t                       DSU_ADDR;           /**< Offset: 0x04 (R/W  32) Address */
  __IO  uint32_t                       DSU_LENGTH;         /**< Offset: 0x08 (R/W  32) Length */
  __IO  uint32_t                       DSU_DATA;           /**< Offset: 0x0C (R/W  32) Data */
  __IO  uint32_t                       DSU_CFG;            /**< Offset: 0x10 (R/W  32) Configuration */
  __IO  uint32_t                       DSU_MBFI0;          /**< Offset: 0x14 (R/W  32) Memory Bist Fault Injection 0 */
  __IO  uint32_t                       DSU_MBFI1;          /**< Offset: 0x18 (R/W  32) Memory Bist Fault Injection 1 */
  __I   uint8_t                        Reserved1[0xE4];
  __IO  uint32_t                       DSU_STATUSA;        /**< Offset: 0x100 (R/W  32) Status A */
  __I   uint32_t                       DSU_STATUSB;        /**< Offset: 0x104 (R/   32) Status B */
  __I   uint32_t                       DSU_STATUSC;        /**< Offset: 0x108 (R/   32) Status C */
  __I   uint8_t                        Reserved2[0x04];
  __IO  uint32_t                       DSU_BCC[2];         /**< Offset: 0x110 (R/W  32) Boot ROM Communication Channel x */
  __IO  uint32_t                       DSU_DCC[2];         /**< Offset: 0x118 (R/W  32) Debug Communication Channel x */
  __I   uint32_t                       DSU_DID;            /**< Offset: 0x120 (R/   32) Device Identification */
  __I   uint32_t                       DSU_DAL;            /**< Offset: 0x124 (R/   32) Debugger Access Level */
  __I   uint8_t                        Reserved3[0xED8];
  __I   uint32_t                       DSU_ENTRY[8];       /**< Offset: 0x1000 (R/   32) Coresight ROM Table Entry x */
  __I   uint8_t                        Reserved4[0xFAC];
  __I   uint32_t                       DSU_MEMTYPE;        /**< Offset: 0x1FCC (R/   32) Coresight ROM Table Memory Type */
  __I   uint32_t                       DSU_PID4;           /**< Offset: 0x1FD0 (R/   32) Coresight ROM Table Peripheral Identification 4 */
  __I   uint32_t                       DSU_PID5;           /**< Offset: 0x1FD4 (R/   32) Coresight ROM Table Peripheral Identification 5 */
  __I   uint32_t                       DSU_PID6;           /**< Offset: 0x1FD8 (R/   32) Coresight ROM Table Peripheral Identification 6 */
  __I   uint32_t                       DSU_PID7;           /**< Offset: 0x1FDC (R/   32) Coresight ROM Table Peripheral Identification 7 */
  __I   uint32_t                       DSU_PID0;           /**< Offset: 0x1FE0 (R/   32) Coresight ROM Table Peripheral Identification 0 */
  __I   uint32_t                       DSU_PID1;           /**< Offset: 0x1FE4 (R/   32) Coresight ROM Table Peripheral Identification 1 */
  __I   uint32_t                       DSU_PID2;           /**< Offset: 0x1FE8 (R/   32) Coresight ROM Table Peripheral Identification 2 */
  __I   uint32_t                       DSU_PID3;           /**< Offset: 0x1FEC (R/   32) Coresight ROM Table Peripheral Identification 3 */
  __I   uint32_t                       DSU_CID0;           /**< Offset: 0x1FF0 (R/   32) Coresight ROM Table Component Identification 0 */
  __I   uint32_t                       DSU_CID1;           /**< Offset: 0x1FF4 (R/   32) Coresight ROM Table Component Identification 1 */
  __I   uint32_t                       DSU_CID2;           /**< Offset: 0x1FF8 (R/   32) Coresight ROM Table Component Identification 2 */
  __I   uint32_t                       DSU_CID3;           /**< Offset: 0x1FFC (R/   32) Coresight ROM Table Component Identification 3 */
} dsu_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CZCA90_DSU_COMPONENT_H_ */
