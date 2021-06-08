/**
 * \brief Component description for FUSES
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
#ifndef _PIC32CZCA90_FUSES_COMPONENT_H_
#define _PIC32CZCA90_FUSES_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR FUSES                                        */
/* ************************************************************************** */

/* -------- FUSES_BLDRCFG : (FUSES Offset: 0x00) (R/W 32) Bootloader Configuration -------- */
#define FUSES_BLDRCFG_PFM_BCRP_Pos            _U_(0)                                               /**< (FUSES_BLDRCFG) Boot Configration Page Read Protect Position */
#define FUSES_BLDRCFG_PFM_BCRP_Msk            (_U_(0x1) << FUSES_BLDRCFG_PFM_BCRP_Pos)             /**< (FUSES_BLDRCFG) Boot Configration Page Read Protect Mask */
#define FUSES_BLDRCFG_PFM_BCRP(value)         (FUSES_BLDRCFG_PFM_BCRP_Msk & ((value) << FUSES_BLDRCFG_PFM_BCRP_Pos))
#define FUSES_BLDRCFG_PFM_BCWP_Pos            _U_(1)                                               /**< (FUSES_BLDRCFG) Boot Configration Page Write Protect Position */
#define FUSES_BLDRCFG_PFM_BCWP_Msk            (_U_(0x1) << FUSES_BLDRCFG_PFM_BCWP_Pos)             /**< (FUSES_BLDRCFG) Boot Configration Page Write Protect Mask */
#define FUSES_BLDRCFG_PFM_BCWP(value)         (FUSES_BLDRCFG_PFM_BCWP_Msk & ((value) << FUSES_BLDRCFG_PFM_BCWP_Pos))
#define FUSES_BLDRCFG_BROM_EN_BFMCHK_Pos      _U_(28)                                              /**< (FUSES_BLDRCFG) Enable BFM CRC Check Position */
#define FUSES_BLDRCFG_BROM_EN_BFMCHK_Msk      (_U_(0x1) << FUSES_BLDRCFG_BROM_EN_BFMCHK_Pos)       /**< (FUSES_BLDRCFG) Enable BFM CRC Check Mask */
#define FUSES_BLDRCFG_BROM_EN_BFMCHK(value)   (FUSES_BLDRCFG_BROM_EN_BFMCHK_Msk & ((value) << FUSES_BLDRCFG_BROM_EN_BFMCHK_Pos))
#define   FUSES_BLDRCFG_BROM_EN_BFMCHK_NONE_Val _U_(0x0)                                             /**< (FUSES_BLDRCFG) No verification  */
#define   FUSES_BLDRCFG_BROM_EN_BFMCHK_CRC32_Val _U_(0x1)                                             /**< (FUSES_BLDRCFG) Verify using crc32  */
#define FUSES_BLDRCFG_BROM_EN_BFMCHK_NONE     (FUSES_BLDRCFG_BROM_EN_BFMCHK_NONE_Val << FUSES_BLDRCFG_BROM_EN_BFMCHK_Pos) /**< (FUSES_BLDRCFG) No verification Position  */
#define FUSES_BLDRCFG_BROM_EN_BFMCHK_CRC32    (FUSES_BLDRCFG_BROM_EN_BFMCHK_CRC32_Val << FUSES_BLDRCFG_BROM_EN_BFMCHK_Pos) /**< (FUSES_BLDRCFG) Verify using crc32 Position  */
#define FUSES_BLDRCFG_BROM_EN_PLL_Pos         _U_(29)                                              /**< (FUSES_BLDRCFG) Enable PLL (Settings in PLL0_<REGS> are used) Position */
#define FUSES_BLDRCFG_BROM_EN_PLL_Msk         (_U_(0x1) << FUSES_BLDRCFG_BROM_EN_PLL_Pos)          /**< (FUSES_BLDRCFG) Enable PLL (Settings in PLL0_<REGS> are used) Mask */
#define FUSES_BLDRCFG_BROM_EN_PLL(value)      (FUSES_BLDRCFG_BROM_EN_PLL_Msk & ((value) << FUSES_BLDRCFG_BROM_EN_PLL_Pos))
#define FUSES_BLDRCFG_BROM_EN_DALUN_Pos       _U_(30)                                              /**< (FUSES_BLDRCFG) Enable DAL Unlock Position */
#define FUSES_BLDRCFG_BROM_EN_DALUN_Msk       (_U_(0x1) << FUSES_BLDRCFG_BROM_EN_DALUN_Pos)        /**< (FUSES_BLDRCFG) Enable DAL Unlock Mask */
#define FUSES_BLDRCFG_BROM_EN_DALUN(value)    (FUSES_BLDRCFG_BROM_EN_DALUN_Msk & ((value) << FUSES_BLDRCFG_BROM_EN_DALUN_Pos))
#define FUSES_BLDRCFG_BROM_EN_RWLOCKS_Pos     _U_(31)                                              /**< (FUSES_BLDRCFG) Enable Read/Write Locks Position */
#define FUSES_BLDRCFG_BROM_EN_RWLOCKS_Msk     (_U_(0x1) << FUSES_BLDRCFG_BROM_EN_RWLOCKS_Pos)      /**< (FUSES_BLDRCFG) Enable Read/Write Locks Mask */
#define FUSES_BLDRCFG_BROM_EN_RWLOCKS(value)  (FUSES_BLDRCFG_BROM_EN_RWLOCKS_Msk & ((value) << FUSES_BLDRCFG_BROM_EN_RWLOCKS_Pos))
#define FUSES_BLDRCFG_Msk                     _U_(0xF0000003)                                      /**< (FUSES_BLDRCFG) Register Mask  */


/* -------- FUSES_BROM_BSEQ : (FUSES Offset: 0x04) (R/W 32) Boot Configuraiton Page Sequence Number -------- */
#define FUSES_BROM_BSEQ_SEQNUM_Pos            _U_(0)                                               /**< (FUSES_BROM_BSEQ) Sequence Number Position */
#define FUSES_BROM_BSEQ_SEQNUM_Msk            (_U_(0xFFFF) << FUSES_BROM_BSEQ_SEQNUM_Pos)          /**< (FUSES_BROM_BSEQ) Sequence Number Mask */
#define FUSES_BROM_BSEQ_SEQNUM(value)         (FUSES_BROM_BSEQ_SEQNUM_Msk & ((value) << FUSES_BROM_BSEQ_SEQNUM_Pos))
#define FUSES_BROM_BSEQ_SEQBAR_Pos            _U_(16)                                              /**< (FUSES_BROM_BSEQ) Sequence Number Bar (Negeated) Position */
#define FUSES_BROM_BSEQ_SEQBAR_Msk            (_U_(0xFFFF) << FUSES_BROM_BSEQ_SEQBAR_Pos)          /**< (FUSES_BROM_BSEQ) Sequence Number Bar (Negeated) Mask */
#define FUSES_BROM_BSEQ_SEQBAR(value)         (FUSES_BROM_BSEQ_SEQBAR_Msk & ((value) << FUSES_BROM_BSEQ_SEQBAR_Pos))
#define FUSES_BROM_BSEQ_Msk                   _U_(0xFFFFFFFF)                                      /**< (FUSES_BROM_BSEQ) Register Mask  */


/* -------- FUSES_BFM_CHK_TABLEPTR : (FUSES Offset: 0x08) (R/W 32) BFM CRC Table Pointer -------- */
#define FUSES_BFM_CHK_TABLEPTR_Msk            _U_(0x00000000)                                      /**< (FUSES_BFM_CHK_TABLEPTR) Register Mask  */


/* -------- FUSES_KEYVAL_TZ0_CE_ALL : (FUSES Offset: 0x80) (R/W 32) Chip Erase Key for TZ0_ALL -------- */
#define FUSES_KEYVAL_TZ0_CE_ALL_Msk           _U_(0x00000000)                                      /**< (FUSES_KEYVAL_TZ0_CE_ALL) Register Mask  */


/* -------- FUSES_CELOCK_TZ0_CE_ALL : (FUSES Offset: 0x90) (R/W 32) Chip Erase Lock for TZ0_ALL -------- */
#define FUSES_CELOCK_TZ0_CE_ALL_Msk           _U_(0x00000000)                                      /**< (FUSES_CELOCK_TZ0_CE_ALL) Register Mask  */


/* -------- FUSES_KEYVAL_CRCCMD : (FUSES Offset: 0xA0) (R/W 32) CRC Access Key -------- */
#define FUSES_KEYVAL_CRCCMD_Msk               _U_(0x00000000)                                      /**< (FUSES_KEYVAL_CRCCMD) Register Mask  */


/* -------- FUSES_KEYCONFIG_CRCCMD : (FUSES Offset: 0xB0) (R/W 32) CRC Access Key Configuration -------- */
#define FUSES_KEYCONFIG_CRCCMD_Msk            _U_(0x00000000)                                      /**< (FUSES_KEYCONFIG_CRCCMD) Register Mask  */


/* -------- FUSES_KEYVAL_HOSTDALELEV : (FUSES Offset: 0xC0) (R/W 32) Host Authenticated DAL Elevation Key -------- */
#define FUSES_KEYVAL_HOSTDALELEV_Msk          _U_(0x00000000)                                      /**< (FUSES_KEYVAL_HOSTDALELEV) Register Mask  */


/* -------- FUSES_KEYCONFIG_HOSTDALELEV : (FUSES Offset: 0xD0) (R/W 32) Host Authenticated DAL Elevation Key Configuration -------- */
#define FUSES_KEYCONFIG_HOSTDALELEV_Msk       _U_(0x00000000)                                      /**< (FUSES_KEYCONFIG_HOSTDALELEV) Register Mask  */


/* -------- FUSES_ROM_CTRLA : (FUSES Offset: 0xE0) (R/W 32) ROM CTRLA Settings  (BROM_PLLEN must be set) -------- */
#define FUSES_ROM_CTRLA_SWRST_Pos             _U_(1)                                               /**< (FUSES_ROM_CTRLA) Software Reset Position */
#define FUSES_ROM_CTRLA_SWRST_Msk             (_U_(0x1) << FUSES_ROM_CTRLA_SWRST_Pos)              /**< (FUSES_ROM_CTRLA) Software Reset Mask */
#define FUSES_ROM_CTRLA_SWRST(value)          (FUSES_ROM_CTRLA_SWRST_Msk & ((value) << FUSES_ROM_CTRLA_SWRST_Pos))
#define FUSES_ROM_CTRLA_ENABLE_Pos            _U_(2)                                               /**< (FUSES_ROM_CTRLA) Module Enable Position */
#define FUSES_ROM_CTRLA_ENABLE_Msk            (_U_(0x1) << FUSES_ROM_CTRLA_ENABLE_Pos)             /**< (FUSES_ROM_CTRLA) Module Enable Mask */
#define FUSES_ROM_CTRLA_ENABLE(value)         (FUSES_ROM_CTRLA_ENABLE_Msk & ((value) << FUSES_ROM_CTRLA_ENABLE_Pos))
#define FUSES_ROM_CTRLA_PRMWS_Pos             _U_(8)                                               /**< (FUSES_ROM_CTRLA) Wait States Position */
#define FUSES_ROM_CTRLA_PRMWS_Msk             (_U_(0x7) << FUSES_ROM_CTRLA_PRMWS_Pos)              /**< (FUSES_ROM_CTRLA) Wait States Mask */
#define FUSES_ROM_CTRLA_PRMWS(value)          (FUSES_ROM_CTRLA_PRMWS_Msk & ((value) << FUSES_ROM_CTRLA_PRMWS_Pos))
#define FUSES_ROM_CTRLA_Msk                   _U_(0x00000706)                                      /**< (FUSES_ROM_CTRLA) Register Mask  */


/* -------- FUSES_FCR_CTRLA : (FUSES Offset: 0xE4) (R/W 32) FCR CTRLA Settings (BROM_PLLEN must be set) -------- */
#define FUSES_FCR_CTRLA_ARB_Pos               _U_(2)                                               /**< (FUSES_FCR_CTRLA) AHB Arbitration scheme Position */
#define FUSES_FCR_CTRLA_ARB_Msk               (_U_(0x1) << FUSES_FCR_CTRLA_ARB_Pos)                /**< (FUSES_FCR_CTRLA) AHB Arbitration scheme Mask */
#define FUSES_FCR_CTRLA_ARB(value)            (FUSES_FCR_CTRLA_ARB_Msk & ((value) << FUSES_FCR_CTRLA_ARB_Pos))
#define FUSES_FCR_CTRLA_FWS_Pos               _U_(8)                                               /**< (FUSES_FCR_CTRLA) Flash Access Time Defined in terms of AHB Clock Wait States Position */
#define FUSES_FCR_CTRLA_FWS_Msk               (_U_(0xF) << FUSES_FCR_CTRLA_FWS_Pos)                /**< (FUSES_FCR_CTRLA) Flash Access Time Defined in terms of AHB Clock Wait States Mask */
#define FUSES_FCR_CTRLA_FWS(value)            (FUSES_FCR_CTRLA_FWS_Msk & ((value) << FUSES_FCR_CTRLA_FWS_Pos))
#define FUSES_FCR_CTRLA_ADRWS_Pos             _U_(14)                                              /**< (FUSES_FCR_CTRLA) Address Wait State Enable Position */
#define FUSES_FCR_CTRLA_ADRWS_Msk             (_U_(0x1) << FUSES_FCR_CTRLA_ADRWS_Pos)              /**< (FUSES_FCR_CTRLA) Address Wait State Enable Mask */
#define FUSES_FCR_CTRLA_ADRWS(value)          (FUSES_FCR_CTRLA_ADRWS_Msk & ((value) << FUSES_FCR_CTRLA_ADRWS_Pos))
#define FUSES_FCR_CTRLA_AUTOWS_Pos            _U_(15)                                              /**< (FUSES_FCR_CTRLA) Automatic Wait State Enable. Position */
#define FUSES_FCR_CTRLA_AUTOWS_Msk            (_U_(0x1) << FUSES_FCR_CTRLA_AUTOWS_Pos)             /**< (FUSES_FCR_CTRLA) Automatic Wait State Enable. Mask */
#define FUSES_FCR_CTRLA_AUTOWS(value)         (FUSES_FCR_CTRLA_AUTOWS_Msk & ((value) << FUSES_FCR_CTRLA_AUTOWS_Pos))
#define FUSES_FCR_CTRLA_RDBUFWS_Pos           _U_(16)                                              /**< (FUSES_FCR_CTRLA) Data returned from the Read Buffer match the Flash Wait States Position */
#define FUSES_FCR_CTRLA_RDBUFWS_Msk           (_U_(0xF) << FUSES_FCR_CTRLA_RDBUFWS_Pos)            /**< (FUSES_FCR_CTRLA) Data returned from the Read Buffer match the Flash Wait States Mask */
#define FUSES_FCR_CTRLA_RDBUFWS(value)        (FUSES_FCR_CTRLA_RDBUFWS_Msk & ((value) << FUSES_FCR_CTRLA_RDBUFWS_Pos))
#define FUSES_FCR_CTRLA_Msk                   _U_(0x000FCF04)                                      /**< (FUSES_FCR_CTRLA) Register Mask  */


/* -------- FUSES_RPMU_VREGCTRL : (FUSES Offset: 0xE8) (R/W 32) RPMU VREGCTRL Settings (BROM_PLLEN must be set) -------- */
#define FUSES_RPMU_VREGCTRL_VREGOUT_Pos       _U_(0)                                               /**< (FUSES_RPMU_VREGCTRL) VREG Output Control in RUN mode only. Enable by production fuse by CALSUPC.VREGOUTEN Position */
#define FUSES_RPMU_VREGCTRL_VREGOUT_Msk       (_U_(0x3) << FUSES_RPMU_VREGCTRL_VREGOUT_Pos)        /**< (FUSES_RPMU_VREGCTRL) VREG Output Control in RUN mode only. Enable by production fuse by CALSUPC.VREGOUTEN Mask */
#define FUSES_RPMU_VREGCTRL_VREGOUT(value)    (FUSES_RPMU_VREGCTRL_VREGOUT_Msk & ((value) << FUSES_RPMU_VREGCTRL_VREGOUT_Pos))
#define   FUSES_RPMU_VREGCTRL_VREGOUT_1p2v_Val _U_(0x0)                                             /**< (FUSES_RPMU_VREGCTRL) In Active mode, VDDCORE_RAM, VDDCORE_BU, VDDCORE_SW and optionnaly VDDCORE_PLL USB are set to 1.2v.  */
#define   FUSES_RPMU_VREGCTRL_VREGOUT_1p0v_Val _U_(0x1)                                             /**< (FUSES_RPMU_VREGCTRL) In Active mode, VDDCORE_RAM, VDDCORE_BU, VDDCORE_SW and optionnaly VDDCORE_PLL USB are set to 1.0v.  */
#define   FUSES_RPMU_VREGCTRL_VREGOUT_0p8v_Val _U_(0x2)                                             /**< (FUSES_RPMU_VREGCTRL) In Active mode, VDDCORE_RAM, VDDCORE_BU, VDDCORE_SW and optionnaly VDDCORE_PLL USB are set to 0.8v.  */
#define FUSES_RPMU_VREGCTRL_VREGOUT_1p2v      (FUSES_RPMU_VREGCTRL_VREGOUT_1p2v_Val << FUSES_RPMU_VREGCTRL_VREGOUT_Pos) /**< (FUSES_RPMU_VREGCTRL) In Active mode, VDDCORE_RAM, VDDCORE_BU, VDDCORE_SW and optionnaly VDDCORE_PLL USB are set to 1.2v. Position  */
#define FUSES_RPMU_VREGCTRL_VREGOUT_1p0v      (FUSES_RPMU_VREGCTRL_VREGOUT_1p0v_Val << FUSES_RPMU_VREGCTRL_VREGOUT_Pos) /**< (FUSES_RPMU_VREGCTRL) In Active mode, VDDCORE_RAM, VDDCORE_BU, VDDCORE_SW and optionnaly VDDCORE_PLL USB are set to 1.0v. Position  */
#define FUSES_RPMU_VREGCTRL_VREGOUT_0p8v      (FUSES_RPMU_VREGCTRL_VREGOUT_0p8v_Val << FUSES_RPMU_VREGCTRL_VREGOUT_Pos) /**< (FUSES_RPMU_VREGCTRL) In Active mode, VDDCORE_RAM, VDDCORE_BU, VDDCORE_SW and optionnaly VDDCORE_PLL USB are set to 0.8v. Position  */
#define FUSES_RPMU_VREGCTRL_OFFSTDBY_Pos      _U_(2)                                               /**< (FUSES_RPMU_VREGCTRL) Off in Standby Control for VREGSW[N-1]. Useful for Riverside only. Position */
#define FUSES_RPMU_VREGCTRL_OFFSTDBY_Msk      (_U_(0x1) << FUSES_RPMU_VREGCTRL_OFFSTDBY_Pos)       /**< (FUSES_RPMU_VREGCTRL) Off in Standby Control for VREGSW[N-1]. Useful for Riverside only. Mask */
#define FUSES_RPMU_VREGCTRL_OFFSTDBY(value)   (FUSES_RPMU_VREGCTRL_OFFSTDBY_Msk & ((value) << FUSES_RPMU_VREGCTRL_OFFSTDBY_Pos))
#define   FUSES_RPMU_VREGCTRL_OFFSTDBY_OFF_Val _U_(0x0)                                             /**< (FUSES_RPMU_VREGCTRL) In standby mode, VREGSW1,2,3 are OFF  */
#define   FUSES_RPMU_VREGCTRL_OFFSTDBY_ON_Val _U_(0x1)                                             /**< (FUSES_RPMU_VREGCTRL) In standby mode, VREGSW1,2,3 are ON  */
#define FUSES_RPMU_VREGCTRL_OFFSTDBY_OFF      (FUSES_RPMU_VREGCTRL_OFFSTDBY_OFF_Val << FUSES_RPMU_VREGCTRL_OFFSTDBY_Pos) /**< (FUSES_RPMU_VREGCTRL) In standby mode, VREGSW1,2,3 are OFF Position  */
#define FUSES_RPMU_VREGCTRL_OFFSTDBY_ON       (FUSES_RPMU_VREGCTRL_OFFSTDBY_ON_Val << FUSES_RPMU_VREGCTRL_OFFSTDBY_Pos) /**< (FUSES_RPMU_VREGCTRL) In standby mode, VREGSW1,2,3 are ON Position  */
#define FUSES_RPMU_VREGCTRL_LVSTDBY_Pos       _U_(4)                                               /**< (FUSES_RPMU_VREGCTRL) Low Voltage Standby Enable Position */
#define FUSES_RPMU_VREGCTRL_LVSTDBY_Msk       (_U_(0x1) << FUSES_RPMU_VREGCTRL_LVSTDBY_Pos)        /**< (FUSES_RPMU_VREGCTRL) Low Voltage Standby Enable Mask */
#define FUSES_RPMU_VREGCTRL_LVSTDBY(value)    (FUSES_RPMU_VREGCTRL_LVSTDBY_Msk & ((value) << FUSES_RPMU_VREGCTRL_LVSTDBY_Pos))
#define   FUSES_RPMU_VREGCTRL_LVSTDBY_1p2v_Val _U_(0x0)                                             /**< (FUSES_RPMU_VREGCTRL) In standby mode, VDDCORE_BU, VDDCORE_RAM, VDDCORE_SW and optionnaly VDDCOREUSB/PLL are set to 1.2v.  */
#define   FUSES_RPMU_VREGCTRL_LVSTDBY_0p8v_Val _U_(0x1)                                             /**< (FUSES_RPMU_VREGCTRL) In standby mode, VDDCORE_BU, VDDCORE_RAM, VDDCORE_SW and optionnaly VDDCOREUSB/PLL are set to 0.8v.  */
#define FUSES_RPMU_VREGCTRL_LVSTDBY_1p2v      (FUSES_RPMU_VREGCTRL_LVSTDBY_1p2v_Val << FUSES_RPMU_VREGCTRL_LVSTDBY_Pos) /**< (FUSES_RPMU_VREGCTRL) In standby mode, VDDCORE_BU, VDDCORE_RAM, VDDCORE_SW and optionnaly VDDCOREUSB/PLL are set to 1.2v. Position  */
#define FUSES_RPMU_VREGCTRL_LVSTDBY_0p8v      (FUSES_RPMU_VREGCTRL_LVSTDBY_0p8v_Val << FUSES_RPMU_VREGCTRL_LVSTDBY_Pos) /**< (FUSES_RPMU_VREGCTRL) In standby mode, VDDCORE_BU, VDDCORE_RAM, VDDCORE_SW and optionnaly VDDCOREUSB/PLL are set to 0.8v. Position  */
#define FUSES_RPMU_VREGCTRL_LVHIB_Pos         _U_(5)                                               /**< (FUSES_RPMU_VREGCTRL) Low Voltage Hibernate Enable Position */
#define FUSES_RPMU_VREGCTRL_LVHIB_Msk         (_U_(0x1) << FUSES_RPMU_VREGCTRL_LVHIB_Pos)          /**< (FUSES_RPMU_VREGCTRL) Low Voltage Hibernate Enable Mask */
#define FUSES_RPMU_VREGCTRL_LVHIB(value)      (FUSES_RPMU_VREGCTRL_LVHIB_Msk & ((value) << FUSES_RPMU_VREGCTRL_LVHIB_Pos))
#define   FUSES_RPMU_VREGCTRL_LVHIB_1p2v_Val  _U_(0x0)                                             /**< (FUSES_RPMU_VREGCTRL) In Hibernate mode, VDDCORE_BU and VDDCORE_RAM are set to 1.2v.  */
#define   FUSES_RPMU_VREGCTRL_LVHIB_0p8v_Val  _U_(0x1)                                             /**< (FUSES_RPMU_VREGCTRL) In Hibernate mode, VDDCORE_BU and VDDCORE_RAM are set to 0.8v  */
#define FUSES_RPMU_VREGCTRL_LVHIB_1p2v        (FUSES_RPMU_VREGCTRL_LVHIB_1p2v_Val << FUSES_RPMU_VREGCTRL_LVHIB_Pos) /**< (FUSES_RPMU_VREGCTRL) In Hibernate mode, VDDCORE_BU and VDDCORE_RAM are set to 1.2v. Position  */
#define FUSES_RPMU_VREGCTRL_LVHIB_0p8v        (FUSES_RPMU_VREGCTRL_LVHIB_0p8v_Val << FUSES_RPMU_VREGCTRL_LVHIB_Pos) /**< (FUSES_RPMU_VREGCTRL) In Hibernate mode, VDDCORE_BU and VDDCORE_RAM are set to 0.8v Position  */
#define FUSES_RPMU_VREGCTRL_CPEN_Pos          _U_(8)                                               /**< (FUSES_RPMU_VREGCTRL) Charge Pump Enable and Auto-enable. Position */
#define FUSES_RPMU_VREGCTRL_CPEN_Msk          (_U_(0x7) << FUSES_RPMU_VREGCTRL_CPEN_Pos)           /**< (FUSES_RPMU_VREGCTRL) Charge Pump Enable and Auto-enable. Mask */
#define FUSES_RPMU_VREGCTRL_CPEN(value)       (FUSES_RPMU_VREGCTRL_CPEN_Msk & ((value) << FUSES_RPMU_VREGCTRL_CPEN_Pos))
#define FUSES_RPMU_VREGCTRL_ULDOEN_Pos        _U_(12)                                              /**< (FUSES_RPMU_VREGCTRL) User LDO Voltage Regulator Enable Position */
#define FUSES_RPMU_VREGCTRL_ULDOEN_Msk        (_U_(0x1) << FUSES_RPMU_VREGCTRL_ULDOEN_Pos)         /**< (FUSES_RPMU_VREGCTRL) User LDO Voltage Regulator Enable Mask */
#define FUSES_RPMU_VREGCTRL_ULDOEN(value)     (FUSES_RPMU_VREGCTRL_ULDOEN_Msk & ((value) << FUSES_RPMU_VREGCTRL_ULDOEN_Pos))
#define FUSES_RPMU_VREGCTRL_ULDOSTDBY_Pos     _U_(13)                                              /**< (FUSES_RPMU_VREGCTRL) User LDO Voltage Regulator Configuration Position */
#define FUSES_RPMU_VREGCTRL_ULDOSTDBY_Msk     (_U_(0x1) << FUSES_RPMU_VREGCTRL_ULDOSTDBY_Pos)      /**< (FUSES_RPMU_VREGCTRL) User LDO Voltage Regulator Configuration Mask */
#define FUSES_RPMU_VREGCTRL_ULDOSTDBY(value)  (FUSES_RPMU_VREGCTRL_ULDOSTDBY_Msk & ((value) << FUSES_RPMU_VREGCTRL_ULDOSTDBY_Pos))
#define   FUSES_RPMU_VREGCTRL_ULDOSTDBY_OFFINSTDBY_Val _U_(0x0)                                             /**< (FUSES_RPMU_VREGCTRL) Regulator is OFF while in sleep mode equal or deeper than standby mode. It is OFF in hibernate and backup mode as well.  */
#define   FUSES_RPMU_VREGCTRL_ULDOSTDBY_ONINSTDBY_Val _U_(0x1)                                             /**< (FUSES_RPMU_VREGCTRL) Regulator is ON in Standby mode. is OFF from Hibernate mode. It is OFF in backup mode as well.  */
#define FUSES_RPMU_VREGCTRL_ULDOSTDBY_OFFINSTDBY (FUSES_RPMU_VREGCTRL_ULDOSTDBY_OFFINSTDBY_Val << FUSES_RPMU_VREGCTRL_ULDOSTDBY_Pos) /**< (FUSES_RPMU_VREGCTRL) Regulator is OFF while in sleep mode equal or deeper than standby mode. It is OFF in hibernate and backup mode as well. Position  */
#define FUSES_RPMU_VREGCTRL_ULDOSTDBY_ONINSTDBY (FUSES_RPMU_VREGCTRL_ULDOSTDBY_ONINSTDBY_Val << FUSES_RPMU_VREGCTRL_ULDOSTDBY_Pos) /**< (FUSES_RPMU_VREGCTRL) Regulator is ON in Standby mode. is OFF from Hibernate mode. It is OFF in backup mode as well. Position  */
#define FUSES_RPMU_VREGCTRL_ULDOLEVEL_Pos     _U_(14)                                              /**< (FUSES_RPMU_VREGCTRL) User LDO Voltage Level Selection Position */
#define FUSES_RPMU_VREGCTRL_ULDOLEVEL_Msk     (_U_(0x3) << FUSES_RPMU_VREGCTRL_ULDOLEVEL_Pos)      /**< (FUSES_RPMU_VREGCTRL) User LDO Voltage Level Selection Mask */
#define FUSES_RPMU_VREGCTRL_ULDOLEVEL(value)  (FUSES_RPMU_VREGCTRL_ULDOLEVEL_Msk & ((value) << FUSES_RPMU_VREGCTRL_ULDOLEVEL_Pos))
#define   FUSES_RPMU_VREGCTRL_ULDOLEVEL_1p2v_Val _U_(0x0)                                             /**< (FUSES_RPMU_VREGCTRL) Vout = 1.2v  */
#define   FUSES_RPMU_VREGCTRL_ULDOLEVEL_1p5v_Val _U_(0x1)                                             /**< (FUSES_RPMU_VREGCTRL) Vout = 1.5v  */
#define   FUSES_RPMU_VREGCTRL_ULDOLEVEL_1p8v_Val _U_(0x2)                                             /**< (FUSES_RPMU_VREGCTRL) Vout = 1.8v  */
#define   FUSES_RPMU_VREGCTRL_ULDOLEVEL_2p5v_Val _U_(0x3)                                             /**< (FUSES_RPMU_VREGCTRL) Vout = 2.5v  */
#define FUSES_RPMU_VREGCTRL_ULDOLEVEL_1p2v    (FUSES_RPMU_VREGCTRL_ULDOLEVEL_1p2v_Val << FUSES_RPMU_VREGCTRL_ULDOLEVEL_Pos) /**< (FUSES_RPMU_VREGCTRL) Vout = 1.2v Position  */
#define FUSES_RPMU_VREGCTRL_ULDOLEVEL_1p5v    (FUSES_RPMU_VREGCTRL_ULDOLEVEL_1p5v_Val << FUSES_RPMU_VREGCTRL_ULDOLEVEL_Pos) /**< (FUSES_RPMU_VREGCTRL) Vout = 1.5v Position  */
#define FUSES_RPMU_VREGCTRL_ULDOLEVEL_1p8v    (FUSES_RPMU_VREGCTRL_ULDOLEVEL_1p8v_Val << FUSES_RPMU_VREGCTRL_ULDOLEVEL_Pos) /**< (FUSES_RPMU_VREGCTRL) Vout = 1.8v Position  */
#define FUSES_RPMU_VREGCTRL_ULDOLEVEL_2p5v    (FUSES_RPMU_VREGCTRL_ULDOLEVEL_2p5v_Val << FUSES_RPMU_VREGCTRL_ULDOLEVEL_Pos) /**< (FUSES_RPMU_VREGCTRL) Vout = 2.5v Position  */
#define FUSES_RPMU_VREGCTRL_AVREGEN_Pos       _U_(16)                                              /**< (FUSES_RPMU_VREGCTRL) Additional Voltage Regulator Enable Position */
#define FUSES_RPMU_VREGCTRL_AVREGEN_Msk       (_U_(0x7) << FUSES_RPMU_VREGCTRL_AVREGEN_Pos)        /**< (FUSES_RPMU_VREGCTRL) Additional Voltage Regulator Enable Mask */
#define FUSES_RPMU_VREGCTRL_AVREGEN(value)    (FUSES_RPMU_VREGCTRL_AVREGEN_Msk & ((value) << FUSES_RPMU_VREGCTRL_AVREGEN_Pos))
#define FUSES_RPMU_VREGCTRL_AVREGSTDBY_Pos    _U_(24)                                              /**< (FUSES_RPMU_VREGCTRL) Additional Voltage Regulator Configuration Position */
#define FUSES_RPMU_VREGCTRL_AVREGSTDBY_Msk    (_U_(0x7) << FUSES_RPMU_VREGCTRL_AVREGSTDBY_Pos)     /**< (FUSES_RPMU_VREGCTRL) Additional Voltage Regulator Configuration Mask */
#define FUSES_RPMU_VREGCTRL_AVREGSTDBY(value) (FUSES_RPMU_VREGCTRL_AVREGSTDBY_Msk & ((value) << FUSES_RPMU_VREGCTRL_AVREGSTDBY_Pos))
#define   FUSES_RPMU_VREGCTRL_AVREGSTDBY_OFFINSTDBY_Val _U_(0x0)                                             /**< (FUSES_RPMU_VREGCTRL) Regulator is OFF while in sleep mode equal or deeper than standby mode. It is OFF in hibernate and backup mode as well.  */
#define   FUSES_RPMU_VREGCTRL_AVREGSTDBY_ONINSTDBY_Val _U_(0x1)                                             /**< (FUSES_RPMU_VREGCTRL) Regulator is ON in Standby mode if AVREGEN bit is set. is OFF from Hibernate mode. It is OFF in backup mode as well.  */
#define FUSES_RPMU_VREGCTRL_AVREGSTDBY_OFFINSTDBY (FUSES_RPMU_VREGCTRL_AVREGSTDBY_OFFINSTDBY_Val << FUSES_RPMU_VREGCTRL_AVREGSTDBY_Pos) /**< (FUSES_RPMU_VREGCTRL) Regulator is OFF while in sleep mode equal or deeper than standby mode. It is OFF in hibernate and backup mode as well. Position  */
#define FUSES_RPMU_VREGCTRL_AVREGSTDBY_ONINSTDBY (FUSES_RPMU_VREGCTRL_AVREGSTDBY_ONINSTDBY_Val << FUSES_RPMU_VREGCTRL_AVREGSTDBY_Pos) /**< (FUSES_RPMU_VREGCTRL) Regulator is ON in Standby mode if AVREGEN bit is set. is OFF from Hibernate mode. It is OFF in backup mode as well. Position  */
#define FUSES_RPMU_VREGCTRL_Msk               _U_(0x0707F737)                                      /**< (FUSES_RPMU_VREGCTRL) Register Mask  */


/* -------- FUSES_PLL0_CTRL : (FUSES Offset: 0xEC) (R/W 32) PLL0 CTRL Settings (BROM_PLLEN must be set) -------- */
#define FUSES_PLL0_CTRL_ENABLE_Pos            _U_(1)                                               /**< (FUSES_PLL0_CTRL) PLL Enable Position */
#define FUSES_PLL0_CTRL_ENABLE_Msk            (_U_(0x1) << FUSES_PLL0_CTRL_ENABLE_Pos)             /**< (FUSES_PLL0_CTRL) PLL Enable Mask */
#define FUSES_PLL0_CTRL_ENABLE(value)         (FUSES_PLL0_CTRL_ENABLE_Msk & ((value) << FUSES_PLL0_CTRL_ENABLE_Pos))
#define FUSES_PLL0_CTRL_WRTLOCK_Pos           _U_(2)                                               /**< (FUSES_PLL0_CTRL) Write Lock Position */
#define FUSES_PLL0_CTRL_WRTLOCK_Msk           (_U_(0x1) << FUSES_PLL0_CTRL_WRTLOCK_Pos)            /**< (FUSES_PLL0_CTRL) Write Lock Mask */
#define FUSES_PLL0_CTRL_WRTLOCK(value)        (FUSES_PLL0_CTRL_WRTLOCK_Msk & ((value) << FUSES_PLL0_CTRL_WRTLOCK_Pos))
#define FUSES_PLL0_CTRL_ONDEMAND_Pos          _U_(7)                                               /**< (FUSES_PLL0_CTRL) On Demand Control Position */
#define FUSES_PLL0_CTRL_ONDEMAND_Msk          (_U_(0x1) << FUSES_PLL0_CTRL_ONDEMAND_Pos)           /**< (FUSES_PLL0_CTRL) On Demand Control Mask */
#define FUSES_PLL0_CTRL_ONDEMAND(value)       (FUSES_PLL0_CTRL_ONDEMAND_Msk & ((value) << FUSES_PLL0_CTRL_ONDEMAND_Pos))
#define FUSES_PLL0_CTRL_REFSEL_Pos            _U_(8)                                               /**< (FUSES_PLL0_CTRL) Reference selection Position */
#define FUSES_PLL0_CTRL_REFSEL_Msk            (_U_(0x7) << FUSES_PLL0_CTRL_REFSEL_Pos)             /**< (FUSES_PLL0_CTRL) Reference selection Mask */
#define FUSES_PLL0_CTRL_REFSEL(value)         (FUSES_PLL0_CTRL_REFSEL_Msk & ((value) << FUSES_PLL0_CTRL_REFSEL_Pos))
#define   FUSES_PLL0_CTRL_REFSEL_GCLK_Val     _U_(0x0)                                             /**< (FUSES_PLL0_CTRL) Dedicated GCLK clock reference  */
#define   FUSES_PLL0_CTRL_REFSEL_XOSC_Val     _U_(0x1)                                             /**< (FUSES_PLL0_CTRL) XOSC clock reference  */
#define   FUSES_PLL0_CTRL_REFSEL_DFLL48M_Val  _U_(0x2)                                             /**< (FUSES_PLL0_CTRL) DFLL48M clock reference  */
#define FUSES_PLL0_CTRL_REFSEL_GCLK           (FUSES_PLL0_CTRL_REFSEL_GCLK_Val << FUSES_PLL0_CTRL_REFSEL_Pos) /**< (FUSES_PLL0_CTRL) Dedicated GCLK clock reference Position  */
#define FUSES_PLL0_CTRL_REFSEL_XOSC           (FUSES_PLL0_CTRL_REFSEL_XOSC_Val << FUSES_PLL0_CTRL_REFSEL_Pos) /**< (FUSES_PLL0_CTRL) XOSC clock reference Position  */
#define FUSES_PLL0_CTRL_REFSEL_DFLL48M        (FUSES_PLL0_CTRL_REFSEL_DFLL48M_Val << FUSES_PLL0_CTRL_REFSEL_Pos) /**< (FUSES_PLL0_CTRL) DFLL48M clock reference Position  */
#define FUSES_PLL0_CTRL_BWSEL_Pos             _U_(11)                                              /**< (FUSES_PLL0_CTRL) Bandwidth selection Position */
#define FUSES_PLL0_CTRL_BWSEL_Msk             (_U_(0x7) << FUSES_PLL0_CTRL_BWSEL_Pos)              /**< (FUSES_PLL0_CTRL) Bandwidth selection Mask */
#define FUSES_PLL0_CTRL_BWSEL(value)          (FUSES_PLL0_CTRL_BWSEL_Msk & ((value) << FUSES_PLL0_CTRL_BWSEL_Pos))
#define   FUSES_PLL0_CTRL_BWSEL_BWSEL0_Val    _U_(0x0)                                             /**< (FUSES_PLL0_CTRL) TBD  */
#define   FUSES_PLL0_CTRL_BWSEL_BWSEL1_Val    _U_(0x1)                                             /**< (FUSES_PLL0_CTRL) TBD  */
#define   FUSES_PLL0_CTRL_BWSEL_BWSEL2_Val    _U_(0x2)                                             /**< (FUSES_PLL0_CTRL) TBD  */
#define   FUSES_PLL0_CTRL_BWSEL_BWSEL3_Val    _U_(0x3)                                             /**< (FUSES_PLL0_CTRL) TBD  */
#define   FUSES_PLL0_CTRL_BWSEL_BWSEL4_Val    _U_(0x4)                                             /**< (FUSES_PLL0_CTRL) TBD  */
#define   FUSES_PLL0_CTRL_BWSEL_BWSEL5_Val    _U_(0x5)                                             /**< (FUSES_PLL0_CTRL) TBD  */
#define   FUSES_PLL0_CTRL_BWSEL_BWSEL6_Val    _U_(0x6)                                             /**< (FUSES_PLL0_CTRL) TBD  */
#define   FUSES_PLL0_CTRL_BWSEL_BWSEL7_Val    _U_(0x7)                                             /**< (FUSES_PLL0_CTRL) TBD  */
#define FUSES_PLL0_CTRL_BWSEL_BWSEL0          (FUSES_PLL0_CTRL_BWSEL_BWSEL0_Val << FUSES_PLL0_CTRL_BWSEL_Pos) /**< (FUSES_PLL0_CTRL) TBD Position  */
#define FUSES_PLL0_CTRL_BWSEL_BWSEL1          (FUSES_PLL0_CTRL_BWSEL_BWSEL1_Val << FUSES_PLL0_CTRL_BWSEL_Pos) /**< (FUSES_PLL0_CTRL) TBD Position  */
#define FUSES_PLL0_CTRL_BWSEL_BWSEL2          (FUSES_PLL0_CTRL_BWSEL_BWSEL2_Val << FUSES_PLL0_CTRL_BWSEL_Pos) /**< (FUSES_PLL0_CTRL) TBD Position  */
#define FUSES_PLL0_CTRL_BWSEL_BWSEL3          (FUSES_PLL0_CTRL_BWSEL_BWSEL3_Val << FUSES_PLL0_CTRL_BWSEL_Pos) /**< (FUSES_PLL0_CTRL) TBD Position  */
#define FUSES_PLL0_CTRL_BWSEL_BWSEL4          (FUSES_PLL0_CTRL_BWSEL_BWSEL4_Val << FUSES_PLL0_CTRL_BWSEL_Pos) /**< (FUSES_PLL0_CTRL) TBD Position  */
#define FUSES_PLL0_CTRL_BWSEL_BWSEL5          (FUSES_PLL0_CTRL_BWSEL_BWSEL5_Val << FUSES_PLL0_CTRL_BWSEL_Pos) /**< (FUSES_PLL0_CTRL) TBD Position  */
#define FUSES_PLL0_CTRL_BWSEL_BWSEL6          (FUSES_PLL0_CTRL_BWSEL_BWSEL6_Val << FUSES_PLL0_CTRL_BWSEL_Pos) /**< (FUSES_PLL0_CTRL) TBD Position  */
#define FUSES_PLL0_CTRL_BWSEL_BWSEL7          (FUSES_PLL0_CTRL_BWSEL_BWSEL7_Val << FUSES_PLL0_CTRL_BWSEL_Pos) /**< (FUSES_PLL0_CTRL) TBD Position  */
#define FUSES_PLL0_CTRL_Msk                   _U_(0x00003F86)                                      /**< (FUSES_PLL0_CTRL) Register Mask  */


/* -------- FUSES_PLL0_FBDIV : (FUSES Offset: 0xF0) (R/W 32) PLL0 FBDIV Settings (BROM_PLLEN must be set) -------- */
#define FUSES_PLL0_FBDIV_FBDIV_Pos            _U_(0)                                               /**< (FUSES_PLL0_FBDIV) PLL Feed-Back Divider Factor Position */
#define FUSES_PLL0_FBDIV_FBDIV_Msk            (_U_(0x3FF) << FUSES_PLL0_FBDIV_FBDIV_Pos)           /**< (FUSES_PLL0_FBDIV) PLL Feed-Back Divider Factor Mask */
#define FUSES_PLL0_FBDIV_FBDIV(value)         (FUSES_PLL0_FBDIV_FBDIV_Msk & ((value) << FUSES_PLL0_FBDIV_FBDIV_Pos))
#define FUSES_PLL0_FBDIV_Msk                  _U_(0x000003FF)                                      /**< (FUSES_PLL0_FBDIV) Register Mask  */


/* -------- FUSES_PLL0_REFDIV : (FUSES Offset: 0xF4) (R/W 32) PLL0 REFDIV Settings (BROM_PLLEN must be set) -------- */
#define FUSES_PLL0_REFDIV_REFDIV_Pos          _U_(0)                                               /**< (FUSES_PLL0_REFDIV) PLL reference division factor Position */
#define FUSES_PLL0_REFDIV_REFDIV_Msk          (_U_(0x3F) << FUSES_PLL0_REFDIV_REFDIV_Pos)          /**< (FUSES_PLL0_REFDIV) PLL reference division factor Mask */
#define FUSES_PLL0_REFDIV_REFDIV(value)       (FUSES_PLL0_REFDIV_REFDIV_Msk & ((value) << FUSES_PLL0_REFDIV_REFDIV_Pos))
#define FUSES_PLL0_REFDIV_Msk                 _U_(0x0000003F)                                      /**< (FUSES_PLL0_REFDIV) Register Mask  */


/* -------- FUSES_PLL0_POSTDIVA : (FUSES Offset: 0xF8) (R/W 32) PLL0 POSTDIVA Settings (BROM_PLLEN must be set) -------- */
#define FUSES_PLL0_POSTDIVA_POSTDIV_Pos       _U_(0)                                               /**< (FUSES_PLL0_POSTDIVA) PLL output 0 clock division factor Position */
#define FUSES_PLL0_POSTDIVA_POSTDIV_Msk       (_U_(0x3F) << FUSES_PLL0_POSTDIVA_POSTDIV_Pos)       /**< (FUSES_PLL0_POSTDIVA) PLL output 0 clock division factor Mask */
#define FUSES_PLL0_POSTDIVA_POSTDIV(value)    (FUSES_PLL0_POSTDIVA_POSTDIV_Msk & ((value) << FUSES_PLL0_POSTDIVA_POSTDIV_Pos))
#define FUSES_PLL0_POSTDIVA_OUTEN_Pos         _U_(7)                                               /**< (FUSES_PLL0_POSTDIVA) PLL output 0 enable Position */
#define FUSES_PLL0_POSTDIVA_OUTEN_Msk         (_U_(0x1) << FUSES_PLL0_POSTDIVA_OUTEN_Pos)          /**< (FUSES_PLL0_POSTDIVA) PLL output 0 enable Mask */
#define FUSES_PLL0_POSTDIVA_OUTEN(value)      (FUSES_PLL0_POSTDIVA_OUTEN_Msk & ((value) << FUSES_PLL0_POSTDIVA_OUTEN_Pos))
#define FUSES_PLL0_POSTDIVA_Msk               _U_(0x000000BF)                                      /**< (FUSES_PLL0_POSTDIVA) Register Mask  */


/* -------- FUSES_MCLK_CLKDIV1 : (FUSES Offset: 0xFC) (R/W 32) MCLK CLKDIV1 Settings (BROM_PLLEN must be set) -------- */
#define FUSES_MCLK_CLKDIV1_Msk                _U_(0x00000000)                                      /**< (FUSES_MCLK_CLKDIV1) Register Mask  */


/* -------- FUSES_GCLK_GENCTRL0 : (FUSES Offset: 0x100) (R/W 32) GCLK GENCTRL0 Settings (BROM_PLLEN must be set) -------- */
#define FUSES_GCLK_GENCTRL0_Msk               _U_(0x00000000)                                      /**< (FUSES_GCLK_GENCTRL0) Register Mask  */


/* -------- FUSES_BROM_BOOTCFGCRC : (FUSES Offset: 0x110) (R/W 32) Boot Configuraiton Page CRC -------- */
#define FUSES_BROM_BOOTCFGCRC_Msk             _U_(0x00000000)                                      /**< (FUSES_BROM_BOOTCFGCRC) Register Mask  */


/* -------- FUSES_BROM_PAGEEND : (FUSES Offset: 0x120) (R/W 32) Page End Marker for Verified Data -------- */
#define FUSES_BROM_PAGEEND_Msk                _U_(0x00000000)                                      /**< (FUSES_BROM_PAGEEND) Register Mask  */


/* -------- FUSES_FCCFG64 : (FUSES Offset: 0x180) ( R/ 32) PTC Calibration -------- */
#define FUSES_FCCFG64_PTCFG0_Pos              _U_(0)                                               /**< (FUSES_FCCFG64)  Position */
#define FUSES_FCCFG64_PTCFG0_Msk              (_U_(0xFFFF) << FUSES_FCCFG64_PTCFG0_Pos)            /**< (FUSES_FCCFG64)  Mask */
#define FUSES_FCCFG64_PTCFG0(value)           (FUSES_FCCFG64_PTCFG0_Msk & ((value) << FUSES_FCCFG64_PTCFG0_Pos))
#define FUSES_FCCFG64_Msk                     _U_(0x0000FFFF)                                      /**< (FUSES_FCCFG64) Register Mask  */


/* -------- FUSES_FCCFG65 : (FUSES Offset: 0x184) ( R/ 32) ADC Calibration -------- */
#define FUSES_FCCFG65_ADCFG0_Pos              _U_(0)                                               /**< (FUSES_FCCFG65)  Position */
#define FUSES_FCCFG65_ADCFG0_Msk              (_U_(0xFFFFFFFF) << FUSES_FCCFG65_ADCFG0_Pos)        /**< (FUSES_FCCFG65)  Mask */
#define FUSES_FCCFG65_ADCFG0(value)           (FUSES_FCCFG65_ADCFG0_Msk & ((value) << FUSES_FCCFG65_ADCFG0_Pos))
#define FUSES_FCCFG65_Msk                     _U_(0xFFFFFFFF)                                      /**< (FUSES_FCCFG65) Register Mask  */


/* -------- FUSES_FCCFG66 : (FUSES Offset: 0x188) ( R/ 32) Comparator Calibration -------- */
#define FUSES_FCCFG66_ACPAIR_SEL_Pos          _U_(0)                                               /**< (FUSES_FCCFG66)  Position */
#define FUSES_FCCFG66_ACPAIR_SEL_Msk          (_U_(0xFF) << FUSES_FCCFG66_ACPAIR_SEL_Pos)          /**< (FUSES_FCCFG66)  Mask */
#define FUSES_FCCFG66_ACPAIR_SEL(value)       (FUSES_FCCFG66_ACPAIR_SEL_Msk & ((value) << FUSES_FCCFG66_ACPAIR_SEL_Pos))
#define FUSES_FCCFG66_Msk                     _U_(0x000000FF)                                      /**< (FUSES_FCCFG66) Register Mask  */


/* -------- FUSES_FCCFG72 : (FUSES Offset: 0x1A0) ( R/ 32) MAC ID (31 through 0) -------- */
#define FUSES_FCCFG72_FMAC_31_0_Pos           _U_(0)                                               /**< (FUSES_FCCFG72)  Position */
#define FUSES_FCCFG72_FMAC_31_0_Msk           (_U_(0xFFFFFFFF) << FUSES_FCCFG72_FMAC_31_0_Pos)     /**< (FUSES_FCCFG72)  Mask */
#define FUSES_FCCFG72_FMAC_31_0(value)        (FUSES_FCCFG72_FMAC_31_0_Msk & ((value) << FUSES_FCCFG72_FMAC_31_0_Pos))
#define FUSES_FCCFG72_Msk                     _U_(0xFFFFFFFF)                                      /**< (FUSES_FCCFG72) Register Mask  */


/* -------- FUSES_FCCFG73 : (FUSES Offset: 0x1A4) ( R/ 32) MAC ID (47 through 32) -------- */
#define FUSES_FCCFG73_FMAC_47_32_Pos          _U_(0)                                               /**< (FUSES_FCCFG73)  Position */
#define FUSES_FCCFG73_FMAC_47_32_Msk          (_U_(0xFFFF) << FUSES_FCCFG73_FMAC_47_32_Pos)        /**< (FUSES_FCCFG73)  Mask */
#define FUSES_FCCFG73_FMAC_47_32(value)       (FUSES_FCCFG73_FMAC_47_32_Msk & ((value) << FUSES_FCCFG73_FMAC_47_32_Pos))
#define FUSES_FCCFG73_Msk                     _U_(0x0000FFFF)                                      /**< (FUSES_FCCFG73) Register Mask  */


/* -------- FUSES_FCCFG_UNIQID : (FUSES Offset: 0x1E0) ( R/ 32) Factory programed Unique ID -------- */
#define FUSES_FCCFG_UNIQID_UID_Pos            _U_(0)                                               /**< (FUSES_FCCFG_UNIQID) Unique ID (programmed at factory) Position */
#define FUSES_FCCFG_UNIQID_UID_Msk            (_U_(0xFFFFFFFF) << FUSES_FCCFG_UNIQID_UID_Pos)      /**< (FUSES_FCCFG_UNIQID) Unique ID (programmed at factory) Mask */
#define FUSES_FCCFG_UNIQID_UID(value)         (FUSES_FCCFG_UNIQID_UID_Msk & ((value) << FUSES_FCCFG_UNIQID_UID_Pos))
#define FUSES_FCCFG_UNIQID_Msk                _U_(0xFFFFFFFF)                                      /**< (FUSES_FCCFG_UNIQID) Register Mask  */


/* -------- FUSES_DAL : (FUSES Offset: 0x00) (R/W 32) Debug Access Level -------- */
#define FUSES_DAL_RESETVALUE                  _U_(0x00)                                            /**<  (FUSES_DAL) Debug Access Level  Reset Value */

#define FUSES_DAL_CPU0_Pos                    _U_(0)                                               /**< (FUSES_DAL) Host DAL Elevation Value Position */
#define FUSES_DAL_CPU0_Msk                    (_U_(0xFF) << FUSES_DAL_CPU0_Pos)                    /**< (FUSES_DAL) Host DAL Elevation Value Mask */
#define FUSES_DAL_CPU0(value)                 (FUSES_DAL_CPU0_Msk & ((value) << FUSES_DAL_CPU0_Pos))
#define   FUSES_DAL_CPU0_DAL0_Val             _U_(0x81)                                            /**< (FUSES_DAL) FCW_DAL0_VALUE  */
#define   FUSES_DAL_CPU0_DAL1_Val             _U_(0x99)                                            /**< (FUSES_DAL) FCW_DAL1_VALUE  */
#define   FUSES_DAL_CPU0_DAL2_Val             _U_(0xDB)                                            /**< (FUSES_DAL) FCW_DAL2_VALUE  */
#define FUSES_DAL_CPU0_DAL0                   (FUSES_DAL_CPU0_DAL0_Val << FUSES_DAL_CPU0_Pos)      /**< (FUSES_DAL) FCW_DAL0_VALUE Position  */
#define FUSES_DAL_CPU0_DAL1                   (FUSES_DAL_CPU0_DAL1_Val << FUSES_DAL_CPU0_Pos)      /**< (FUSES_DAL) FCW_DAL1_VALUE Position  */
#define FUSES_DAL_CPU0_DAL2                   (FUSES_DAL_CPU0_DAL2_Val << FUSES_DAL_CPU0_Pos)      /**< (FUSES_DAL) FCW_DAL2_VALUE Position  */
#define FUSES_DAL_CPU1_Pos                    _U_(8)                                               /**< (FUSES_DAL) HSM DAL Elevation Value Position */
#define FUSES_DAL_CPU1_Msk                    (_U_(0xFF) << FUSES_DAL_CPU1_Pos)                    /**< (FUSES_DAL) HSM DAL Elevation Value Mask */
#define FUSES_DAL_CPU1(value)                 (FUSES_DAL_CPU1_Msk & ((value) << FUSES_DAL_CPU1_Pos))
#define   FUSES_DAL_CPU1_DAL0_Val             _U_(0x81)                                            /**< (FUSES_DAL)   */
#define   FUSES_DAL_CPU1_DAL1_Val             _U_(0x99)                                            /**< (FUSES_DAL)   */
#define   FUSES_DAL_CPU1_DAL2_Val             _U_(0xDB)                                            /**< (FUSES_DAL)   */
#define FUSES_DAL_CPU1_DAL0                   (FUSES_DAL_CPU1_DAL0_Val << FUSES_DAL_CPU1_Pos)      /**< (FUSES_DAL)  Position  */
#define FUSES_DAL_CPU1_DAL1                   (FUSES_DAL_CPU1_DAL1_Val << FUSES_DAL_CPU1_Pos)      /**< (FUSES_DAL)  Position  */
#define FUSES_DAL_CPU1_DAL2                   (FUSES_DAL_CPU1_DAL2_Val << FUSES_DAL_CPU1_Pos)      /**< (FUSES_DAL)  Position  */
#define FUSES_DAL_Msk                         _U_(0x0000FFFF)                                      /**< (FUSES_DAL) Register Mask  */


/* -------- FUSES_FSEQ : (FUSES Offset: 0x00) (R/W 32) Flash Sequence Number -------- */
#define FUSES_FSEQ_SEQNUM_Pos                 _U_(0)                                               /**< (FUSES_FSEQ) Sequence Number Position */
#define FUSES_FSEQ_SEQNUM_Msk                 (_U_(0xFFFF) << FUSES_FSEQ_SEQNUM_Pos)               /**< (FUSES_FSEQ) Sequence Number Mask */
#define FUSES_FSEQ_SEQNUM(value)              (FUSES_FSEQ_SEQNUM_Msk & ((value) << FUSES_FSEQ_SEQNUM_Pos))
#define FUSES_FSEQ_SEQBAR_Pos                 _U_(16)                                              /**< (FUSES_FSEQ) Sequence Number Bar (Negeated) Position */
#define FUSES_FSEQ_SEQBAR_Msk                 (_U_(0xFFFF) << FUSES_FSEQ_SEQBAR_Pos)               /**< (FUSES_FSEQ) Sequence Number Bar (Negeated) Mask */
#define FUSES_FSEQ_SEQBAR(value)              (FUSES_FSEQ_SEQBAR_Msk & ((value) << FUSES_FSEQ_SEQBAR_Pos))
#define FUSES_FSEQ_Msk                        _U_(0xFFFFFFFF)                                      /**< (FUSES_FSEQ) Register Mask  */


/* -------- FUSES_AFSEQ : (FUSES Offset: 0x20) (R/W 32) Flash Alternate Sequence Number -------- */
#define FUSES_AFSEQ_ASEQNUM_Pos               _U_(0)                                               /**< (FUSES_AFSEQ) Alternate Sequence Number Position */
#define FUSES_AFSEQ_ASEQNUM_Msk               (_U_(0xFFFF) << FUSES_AFSEQ_ASEQNUM_Pos)             /**< (FUSES_AFSEQ) Alternate Sequence Number Mask */
#define FUSES_AFSEQ_ASEQNUM(value)            (FUSES_AFSEQ_ASEQNUM_Msk & ((value) << FUSES_AFSEQ_ASEQNUM_Pos))
#define FUSES_AFSEQ_ASEQBAR_Pos               _U_(16)                                              /**< (FUSES_AFSEQ) Alternate Sequence Number Bar (Negeated) Position */
#define FUSES_AFSEQ_ASEQBAR_Msk               (_U_(0xFFFF) << FUSES_AFSEQ_ASEQBAR_Pos)             /**< (FUSES_AFSEQ) Alternate Sequence Number Bar (Negeated) Mask */
#define FUSES_AFSEQ_ASEQBAR(value)            (FUSES_AFSEQ_ASEQBAR_Msk & ((value) << FUSES_AFSEQ_ASEQBAR_Pos))
#define FUSES_AFSEQ_Msk                       _U_(0xFFFFFFFF)                                      /**< (FUSES_AFSEQ) Register Mask  */


/* -------- FUSES_FUCFG0 : (FUSES Offset: 0x40) (R/W 32) WDT Configuration -------- */
#define FUSES_FUCFG0_WDT_ENABLE_Pos           _U_(1)                                               /**< (FUSES_FUCFG0) Enable Position */
#define FUSES_FUCFG0_WDT_ENABLE_Msk           (_U_(0x1) << FUSES_FUCFG0_WDT_ENABLE_Pos)            /**< (FUSES_FUCFG0) Enable Mask */
#define FUSES_FUCFG0_WDT_ENABLE(value)        (FUSES_FUCFG0_WDT_ENABLE_Msk & ((value) << FUSES_FUCFG0_WDT_ENABLE_Pos))
#define FUSES_FUCFG0_WDT_WEN_Pos              _U_(2)                                               /**< (FUSES_FUCFG0) Window Mode Enable Position */
#define FUSES_FUCFG0_WDT_WEN_Msk              (_U_(0x1) << FUSES_FUCFG0_WDT_WEN_Pos)               /**< (FUSES_FUCFG0) Window Mode Enable Mask */
#define FUSES_FUCFG0_WDT_WEN(value)           (FUSES_FUCFG0_WDT_WEN_Msk & ((value) << FUSES_FUCFG0_WDT_WEN_Pos))
#define FUSES_FUCFG0_WDT_RUNSTDBY_Pos         _U_(6)                                               /**< (FUSES_FUCFG0) Run in Standby Position */
#define FUSES_FUCFG0_WDT_RUNSTDBY_Msk         (_U_(0x1) << FUSES_FUCFG0_WDT_RUNSTDBY_Pos)          /**< (FUSES_FUCFG0) Run in Standby Mask */
#define FUSES_FUCFG0_WDT_RUNSTDBY(value)      (FUSES_FUCFG0_WDT_RUNSTDBY_Msk & ((value) << FUSES_FUCFG0_WDT_RUNSTDBY_Pos))
#define FUSES_FUCFG0_WDT_ALWAYSON_Pos         _U_(7)                                               /**< (FUSES_FUCFG0) Always On Position */
#define FUSES_FUCFG0_WDT_ALWAYSON_Msk         (_U_(0x1) << FUSES_FUCFG0_WDT_ALWAYSON_Pos)          /**< (FUSES_FUCFG0) Always On Mask */
#define FUSES_FUCFG0_WDT_ALWAYSON(value)      (FUSES_FUCFG0_WDT_ALWAYSON_Msk & ((value) << FUSES_FUCFG0_WDT_ALWAYSON_Pos))
#define FUSES_FUCFG0_WDT_PER_Pos              _U_(8)                                               /**< (FUSES_FUCFG0) Time-out Period Position */
#define FUSES_FUCFG0_WDT_PER_Msk              (_U_(0xF) << FUSES_FUCFG0_WDT_PER_Pos)               /**< (FUSES_FUCFG0) Time-out Period Mask */
#define FUSES_FUCFG0_WDT_PER(value)           (FUSES_FUCFG0_WDT_PER_Msk & ((value) << FUSES_FUCFG0_WDT_PER_Pos))
#define FUSES_FUCFG0_WDT_WINDOW_Pos           _U_(12)                                              /**< (FUSES_FUCFG0) Window Mode Time-out Period Position */
#define FUSES_FUCFG0_WDT_WINDOW_Msk           (_U_(0xF) << FUSES_FUCFG0_WDT_WINDOW_Pos)            /**< (FUSES_FUCFG0) Window Mode Time-out Period Mask */
#define FUSES_FUCFG0_WDT_WINDOW(value)        (FUSES_FUCFG0_WDT_WINDOW_Msk & ((value) << FUSES_FUCFG0_WDT_WINDOW_Pos))
#define FUSES_FUCFG0_WDT_EWOFFSET_Pos         _U_(16)                                              /**< (FUSES_FUCFG0) Early Warning Interrupt Time Offset Position */
#define FUSES_FUCFG0_WDT_EWOFFSET_Msk         (_U_(0xF) << FUSES_FUCFG0_WDT_EWOFFSET_Pos)          /**< (FUSES_FUCFG0) Early Warning Interrupt Time Offset Mask */
#define FUSES_FUCFG0_WDT_EWOFFSET(value)      (FUSES_FUCFG0_WDT_EWOFFSET_Msk & ((value) << FUSES_FUCFG0_WDT_EWOFFSET_Pos))
#define FUSES_FUCFG0_Msk                      _U_(0x000FFFC6)                                      /**< (FUSES_FUCFG0) Register Mask  */


/* -------- FUSES_FUCFG1 : (FUSES Offset: 0x44) (R/W 32) User Configuration 1 (System Bus Configuration) -------- */
#define FUSES_FUCFG1_SSXEXDRM_Pos             _U_(0)                                               /**< (FUSES_FUCFG1) Execute from System Memory Position */
#define FUSES_FUCFG1_SSXEXDRM_Msk             (_U_(0xFF) << FUSES_FUCFG1_SSXEXDRM_Pos)             /**< (FUSES_FUCFG1) Execute from System Memory Mask */
#define FUSES_FUCFG1_SSXEXDRM(value)          (FUSES_FUCFG1_SSXEXDRM_Msk & ((value) << FUSES_FUCFG1_SSXEXDRM_Pos))
#define FUSES_FUCFG1_SSXEXEBI_Pos             _U_(8)                                               /**< (FUSES_FUCFG1) Execute from EBI attached Memory Position */
#define FUSES_FUCFG1_SSXEXEBI_Msk             (_U_(0xFF) << FUSES_FUCFG1_SSXEXEBI_Pos)             /**< (FUSES_FUCFG1) Execute from EBI attached Memory Mask */
#define FUSES_FUCFG1_SSXEXEBI(value)          (FUSES_FUCFG1_SSXEXEBI_Msk & ((value) << FUSES_FUCFG1_SSXEXEBI_Pos))
#define FUSES_FUCFG1_SSXEXSQI0_Pos            _U_(16)                                              /**< (FUSES_FUCFG1) Execute from SQI0 XIP Memory Position */
#define FUSES_FUCFG1_SSXEXSQI0_Msk            (_U_(0xFF) << FUSES_FUCFG1_SSXEXSQI0_Pos)            /**< (FUSES_FUCFG1) Execute from SQI0 XIP Memory Mask */
#define FUSES_FUCFG1_SSXEXSQI0(value)         (FUSES_FUCFG1_SSXEXSQI0_Msk & ((value) << FUSES_FUCFG1_SSXEXSQI0_Pos))
#define FUSES_FUCFG1_SSXEXSQI1_Pos            _U_(24)                                              /**< (FUSES_FUCFG1) Execute from SQI1 XIP Memory Position */
#define FUSES_FUCFG1_SSXEXSQI1_Msk            (_U_(0xFF) << FUSES_FUCFG1_SSXEXSQI1_Pos)            /**< (FUSES_FUCFG1) Execute from SQI1 XIP Memory Mask */
#define FUSES_FUCFG1_SSXEXSQI1(value)         (FUSES_FUCFG1_SSXEXSQI1_Msk & ((value) << FUSES_FUCFG1_SSXEXSQI1_Pos))
#define FUSES_FUCFG1_Msk                      _U_(0xFFFFFFFF)                                      /**< (FUSES_FUCFG1) Register Mask  */


/* -------- FUSES_FUCFG2 : (FUSES Offset: 0x48) (R/W 32) User Configuration 2 (Deep Sleep SMOR Configuration) -------- */
#define FUSES_FUCFG2_BOR_HYST_Pos             _U_(0)                                               /**< (FUSES_FUCFG2) BOT Trip Hystersis Position */
#define FUSES_FUCFG2_BOR_HYST_Msk             (_U_(0x1) << FUSES_FUCFG2_BOR_HYST_Pos)              /**< (FUSES_FUCFG2) BOT Trip Hystersis Mask */
#define FUSES_FUCFG2_BOR_HYST(value)          (FUSES_FUCFG2_BOR_HYST_Msk & ((value) << FUSES_FUCFG2_BOR_HYST_Pos))
#define FUSES_FUCFG2_BOR_TRIP_Pos             _U_(1)                                               /**< (FUSES_FUCFG2) BOT Trip Points Position */
#define FUSES_FUCFG2_BOR_TRIP_Msk             (_U_(0x3) << FUSES_FUCFG2_BOR_TRIP_Pos)              /**< (FUSES_FUCFG2) BOT Trip Points Mask */
#define FUSES_FUCFG2_BOR_TRIP(value)          (FUSES_FUCFG2_BOR_TRIP_Msk & ((value) << FUSES_FUCFG2_BOR_TRIP_Pos))
#define FUSES_FUCFG2_Msk                      _U_(0x00000007)                                      /**< (FUSES_FUCFG2) Register Mask  */


/* -------- FUSES_FUCFG3 : (FUSES Offset: 0x4C) (R/W 32) User Configuration 2 (SMOR Configuration) -------- */
#define FUSES_FUCFG3_HYST_BOR_VDDIO_Pos       _U_(0)                                               /**< (FUSES_FUCFG3) BOR Trip Point Hystersis for VDDIO Position */
#define FUSES_FUCFG3_HYST_BOR_VDDIO_Msk       (_U_(0x1) << FUSES_FUCFG3_HYST_BOR_VDDIO_Pos)        /**< (FUSES_FUCFG3) BOR Trip Point Hystersis for VDDIO Mask */
#define FUSES_FUCFG3_HYST_BOR_VDDIO(value)    (FUSES_FUCFG3_HYST_BOR_VDDIO_Msk & ((value) << FUSES_FUCFG3_HYST_BOR_VDDIO_Pos))
#define FUSES_FUCFG3_BOR_TRIP_VDDIO_Pos       _U_(1)                                               /**< (FUSES_FUCFG3) BOR Trip Points for VDDIO Position */
#define FUSES_FUCFG3_BOR_TRIP_VDDIO_Msk       (_U_(0x3) << FUSES_FUCFG3_BOR_TRIP_VDDIO_Pos)        /**< (FUSES_FUCFG3) BOR Trip Points for VDDIO Mask */
#define FUSES_FUCFG3_BOR_TRIP_VDDIO(value)    (FUSES_FUCFG3_BOR_TRIP_VDDIO_Msk & ((value) << FUSES_FUCFG3_BOR_TRIP_VDDIO_Pos))
#define FUSES_FUCFG3_HYST_BOR_VDDA_Pos        _U_(6)                                               /**< (FUSES_FUCFG3) BOR Trip Point Hystersis for VDDANA Position */
#define FUSES_FUCFG3_HYST_BOR_VDDA_Msk        (_U_(0x1) << FUSES_FUCFG3_HYST_BOR_VDDA_Pos)         /**< (FUSES_FUCFG3) BOR Trip Point Hystersis for VDDANA Mask */
#define FUSES_FUCFG3_HYST_BOR_VDDA(value)     (FUSES_FUCFG3_HYST_BOR_VDDA_Msk & ((value) << FUSES_FUCFG3_HYST_BOR_VDDA_Pos))
#define FUSES_FUCFG3_BOR_TRIP_VDDA_Pos        _U_(7)                                               /**< (FUSES_FUCFG3) BOR Trip Points for VDDANA Position */
#define FUSES_FUCFG3_BOR_TRIP_VDDA_Msk        (_U_(0x3) << FUSES_FUCFG3_BOR_TRIP_VDDA_Pos)         /**< (FUSES_FUCFG3) BOR Trip Points for VDDANA Mask */
#define FUSES_FUCFG3_BOR_TRIP_VDDA(value)     (FUSES_FUCFG3_BOR_TRIP_VDDA_Msk & ((value) << FUSES_FUCFG3_BOR_TRIP_VDDA_Pos))
#define FUSES_FUCFG3_HYST_BOR_VDDREG_Pos      _U_(10)                                              /**< (FUSES_FUCFG3) BOR Trip Point Hystersis for VDDREG Position */
#define FUSES_FUCFG3_HYST_BOR_VDDREG_Msk      (_U_(0x1) << FUSES_FUCFG3_HYST_BOR_VDDREG_Pos)       /**< (FUSES_FUCFG3) BOR Trip Point Hystersis for VDDREG Mask */
#define FUSES_FUCFG3_HYST_BOR_VDDREG(value)   (FUSES_FUCFG3_HYST_BOR_VDDREG_Msk & ((value) << FUSES_FUCFG3_HYST_BOR_VDDREG_Pos))
#define FUSES_FUCFG3_Msk                      _U_(0x000005C7)                                      /**< (FUSES_FUCFG3) Register Mask  */


/* -------- FUSES_FUCFG5 : (FUSES Offset: 0x54) (R/W 32) User Configuration 5 (VREG Charge Pump Configuration) -------- */
#define FUSES_FUCFG5_RESETVALUE               _U_(0x00)                                            /**<  (FUSES_FUCFG5) User Configuration 5 (VREG Charge Pump Configuration)  Reset Value */

#define FUSES_FUCFG5_UCP0_Pos                 _U_(0)                                               /**< (FUSES_FUCFG5) Charge Pump Settings Position */
#define FUSES_FUCFG5_UCP0_Msk                 (_U_(0xF) << FUSES_FUCFG5_UCP0_Pos)                  /**< (FUSES_FUCFG5) Charge Pump Settings Mask */
#define FUSES_FUCFG5_UCP0(value)              (FUSES_FUCFG5_UCP0_Msk & ((value) << FUSES_FUCFG5_UCP0_Pos))
#define FUSES_FUCFG5_UCP1_Pos                 _U_(4)                                               /**< (FUSES_FUCFG5) Charge Pump Settings Position */
#define FUSES_FUCFG5_UCP1_Msk                 (_U_(0xF) << FUSES_FUCFG5_UCP1_Pos)                  /**< (FUSES_FUCFG5) Charge Pump Settings Mask */
#define FUSES_FUCFG5_UCP1(value)              (FUSES_FUCFG5_UCP1_Msk & ((value) << FUSES_FUCFG5_UCP1_Pos))
#define FUSES_FUCFG5_UCP2_Pos                 _U_(8)                                               /**< (FUSES_FUCFG5) Charge Pump Settings Position */
#define FUSES_FUCFG5_UCP2_Msk                 (_U_(0xF) << FUSES_FUCFG5_UCP2_Pos)                  /**< (FUSES_FUCFG5) Charge Pump Settings Mask */
#define FUSES_FUCFG5_UCP2(value)              (FUSES_FUCFG5_UCP2_Msk & ((value) << FUSES_FUCFG5_UCP2_Pos))
#define FUSES_FUCFG5_UCP3_Pos                 _U_(12)                                              /**< (FUSES_FUCFG5) Charge Pump Settings Position */
#define FUSES_FUCFG5_UCP3_Msk                 (_U_(0xF) << FUSES_FUCFG5_UCP3_Pos)                  /**< (FUSES_FUCFG5) Charge Pump Settings Mask */
#define FUSES_FUCFG5_UCP3(value)              (FUSES_FUCFG5_UCP3_Msk & ((value) << FUSES_FUCFG5_UCP3_Pos))
#define FUSES_FUCFG5_Msk                      _U_(0x0000FFFF)                                      /**< (FUSES_FUCFG5) Register Mask  */


/* -------- FUSES_FUCFG6 : (FUSES Offset: 0x58) (R/W 32) User Configuration 6 (FCR ECCCTRL Configuration) -------- */
#define FUSES_FUCFG6_PFM_ECCCTL_Pos           _U_(4)                                               /**< (FUSES_FUCFG6) ECC Mode Control Position */
#define FUSES_FUCFG6_PFM_ECCCTL_Msk           (_U_(0x3) << FUSES_FUCFG6_PFM_ECCCTL_Pos)            /**< (FUSES_FUCFG6) ECC Mode Control Mask */
#define FUSES_FUCFG6_PFM_ECCCTL(value)        (FUSES_FUCFG6_PFM_ECCCTL_Msk & ((value) << FUSES_FUCFG6_PFM_ECCCTL_Pos))
#define FUSES_FUCFG6_PFM_ECCUNLCK_Pos         _U_(6)                                               /**< (FUSES_FUCFG6) ECC Mode Control Unlock Position */
#define FUSES_FUCFG6_PFM_ECCUNLCK_Msk         (_U_(0x1) << FUSES_FUCFG6_PFM_ECCUNLCK_Pos)          /**< (FUSES_FUCFG6) ECC Mode Control Unlock Mask */
#define FUSES_FUCFG6_PFM_ECCUNLCK(value)      (FUSES_FUCFG6_PFM_ECCUNLCK_Msk & ((value) << FUSES_FUCFG6_PFM_ECCUNLCK_Pos))
#define FUSES_FUCFG6_Msk                      _U_(0x00000070)                                      /**< (FUSES_FUCFG6) Register Mask  */


/* -------- FUSES_FUCFG7 : (FUSES Offset: 0x5C) (R/W 32) User Configuration 7 (FCR CTRLB Configuration) -------- */
#define FUSES_FUCFG7_PFM_TEMP_Pos             _U_(1)                                               /**< (FUSES_FUCFG7) NVM Operating Temperature Read Mode Position */
#define FUSES_FUCFG7_PFM_TEMP_Msk             (_U_(0x1) << FUSES_FUCFG7_PFM_TEMP_Pos)              /**< (FUSES_FUCFG7) NVM Operating Temperature Read Mode Mask */
#define FUSES_FUCFG7_PFM_TEMP(value)          (FUSES_FUCFG7_PFM_TEMP_Msk & ((value) << FUSES_FUCFG7_PFM_TEMP_Pos))
#define FUSES_FUCFG7_Msk                      _U_(0x00000002)                                      /**< (FUSES_FUCFG7) Register Mask  */


/* -------- FUSES_FUCFG8 : (FUSES Offset: 0x60) (R/W 32) User Configuration 8 (FCW CWP Configuration) -------- */
#define FUSES_FUCFG8_PFM_UC1WP_Pos            _U_(0)                                               /**< (FUSES_FUCFG8) User Configuration Page 1 Write Protect Position */
#define FUSES_FUCFG8_PFM_UC1WP_Msk            (_U_(0x1) << FUSES_FUCFG8_PFM_UC1WP_Pos)             /**< (FUSES_FUCFG8) User Configuration Page 1 Write Protect Mask */
#define FUSES_FUCFG8_PFM_UC1WP(value)         (FUSES_FUCFG8_PFM_UC1WP_Msk & ((value) << FUSES_FUCFG8_PFM_UC1WP_Pos))
#define FUSES_FUCFG8_PFM_UC2WP_Pos            _U_(8)                                               /**< (FUSES_FUCFG8) User Configuration Page 2 Write Protect Position */
#define FUSES_FUCFG8_PFM_UC2WP_Msk            (_U_(0x1) << FUSES_FUCFG8_PFM_UC2WP_Pos)             /**< (FUSES_FUCFG8) User Configuration Page 2 Write Protect Mask */
#define FUSES_FUCFG8_PFM_UC2WP(value)         (FUSES_FUCFG8_PFM_UC2WP_Msk & ((value) << FUSES_FUCFG8_PFM_UC2WP_Pos))
#define FUSES_FUCFG8_PFM_UC1WPLOCK_Pos        _U_(16)                                              /**< (FUSES_FUCFG8) User Configuration Page 1 Write Protection Lock Position */
#define FUSES_FUCFG8_PFM_UC1WPLOCK_Msk        (_U_(0x1) << FUSES_FUCFG8_PFM_UC1WPLOCK_Pos)         /**< (FUSES_FUCFG8) User Configuration Page 1 Write Protection Lock Mask */
#define FUSES_FUCFG8_PFM_UC1WPLOCK(value)     (FUSES_FUCFG8_PFM_UC1WPLOCK_Msk & ((value) << FUSES_FUCFG8_PFM_UC1WPLOCK_Pos))
#define FUSES_FUCFG8_PFM_UC2WPLOCK_Pos        _U_(24)                                              /**< (FUSES_FUCFG8) User Configuration Page 2 Write Protection Lock Position */
#define FUSES_FUCFG8_PFM_UC2WPLOCK_Msk        (_U_(0x1) << FUSES_FUCFG8_PFM_UC2WPLOCK_Pos)         /**< (FUSES_FUCFG8) User Configuration Page 2 Write Protection Lock Mask */
#define FUSES_FUCFG8_PFM_UC2WPLOCK(value)     (FUSES_FUCFG8_PFM_UC2WPLOCK_Msk & ((value) << FUSES_FUCFG8_PFM_UC2WPLOCK_Pos))
#define FUSES_FUCFG8_Msk                      _U_(0x01010101)                                      /**< (FUSES_FUCFG8) Register Mask  */


/* -------- FUSES_FUCFG9 : (FUSES Offset: 0x64) (R/W 32) User Configuration 9 (RAM BISR and ECC Configuraiton) -------- */
#define FUSES_FUCFG9_RESETVALUE               _U_(0x202)                                           /**<  (FUSES_FUCFG9) User Configuration 9 (RAM BISR and ECC Configuraiton)  Reset Value */

#define FUSES_FUCFG9_RAM_ECC_EN0_Pos          _U_(1)                                               /**< (FUSES_FUCFG9) Enable RAM ECC Control at Reset Position */
#define FUSES_FUCFG9_RAM_ECC_EN0_Msk          (_U_(0x1) << FUSES_FUCFG9_RAM_ECC_EN0_Pos)           /**< (FUSES_FUCFG9) Enable RAM ECC Control at Reset Mask */
#define FUSES_FUCFG9_RAM_ECC_EN0(value)       (FUSES_FUCFG9_RAM_ECC_EN0_Msk & ((value) << FUSES_FUCFG9_RAM_ECC_EN0_Pos))
#define FUSES_FUCFG9_BISR_RST_EN0_Pos         _U_(9)                                               /**< (FUSES_FUCFG9) Enable RAM Built-In Self Repair at Reset Position */
#define FUSES_FUCFG9_BISR_RST_EN0_Msk         (_U_(0x1) << FUSES_FUCFG9_BISR_RST_EN0_Pos)          /**< (FUSES_FUCFG9) Enable RAM Built-In Self Repair at Reset Mask */
#define FUSES_FUCFG9_BISR_RST_EN0(value)      (FUSES_FUCFG9_BISR_RST_EN0_Msk & ((value) << FUSES_FUCFG9_BISR_RST_EN0_Pos))
#define FUSES_FUCFG9_Msk                      _U_(0x00000202)                                      /**< (FUSES_FUCFG9) Register Mask  */

#define FUSES_FUCFG9_RAM_ECC_EN_Pos           _U_(1)                                               /**< (FUSES_FUCFG9 Position) Enable RAM ECC Control at Reset */
#define FUSES_FUCFG9_RAM_ECC_EN_Msk           (_U_(0x1) << FUSES_FUCFG9_RAM_ECC_EN_Pos)            /**< (FUSES_FUCFG9 Mask) RAM_ECC_EN */
#define FUSES_FUCFG9_RAM_ECC_EN(value)        (FUSES_FUCFG9_RAM_ECC_EN_Msk & ((value) << FUSES_FUCFG9_RAM_ECC_EN_Pos)) 
#define FUSES_FUCFG9_BISR_RST_EN_Pos          _U_(9)                                               /**< (FUSES_FUCFG9 Position) Enable RAM Built-In Self Repair at Reset */
#define FUSES_FUCFG9_BISR_RST_EN_Msk          (_U_(0x1) << FUSES_FUCFG9_BISR_RST_EN_Pos)           /**< (FUSES_FUCFG9 Mask) BISR_RST_EN */
#define FUSES_FUCFG9_BISR_RST_EN(value)       (FUSES_FUCFG9_BISR_RST_EN_Msk & ((value) << FUSES_FUCFG9_BISR_RST_EN_Pos)) 

/* -------- FUSES_FUCFG16 : (FUSES Offset: 0x80) (R/W 32) User Configuration 16 (HSM Firmware Metadata 0 Address) -------- */
#define FUSES_FUCFG16_HSM_PTRMETA0_Pos        _U_(0)                                               /**< (FUSES_FUCFG16) HSM Firmware Metadata pointer 0 Position */
#define FUSES_FUCFG16_HSM_PTRMETA0_Msk        (_U_(0xFFFFFFFF) << FUSES_FUCFG16_HSM_PTRMETA0_Pos)  /**< (FUSES_FUCFG16) HSM Firmware Metadata pointer 0 Mask */
#define FUSES_FUCFG16_HSM_PTRMETA0(value)     (FUSES_FUCFG16_HSM_PTRMETA0_Msk & ((value) << FUSES_FUCFG16_HSM_PTRMETA0_Pos))
#define FUSES_FUCFG16_Msk                     _U_(0xFFFFFFFF)                                      /**< (FUSES_FUCFG16) Register Mask  */


/* -------- FUSES_FUCFG24 : (FUSES Offset: 0xA0) (R/W 32) User Configuration 24 (HSM Firmware Metadata 1 Address) -------- */
#define FUSES_FUCFG24_HSM_PTRMETA1_Pos        _U_(0)                                               /**< (FUSES_FUCFG24) HSM Firmware Metadata pointer 1 Position */
#define FUSES_FUCFG24_HSM_PTRMETA1_Msk        (_U_(0xFFFFFFFF) << FUSES_FUCFG24_HSM_PTRMETA1_Pos)  /**< (FUSES_FUCFG24) HSM Firmware Metadata pointer 1 Mask */
#define FUSES_FUCFG24_HSM_PTRMETA1(value)     (FUSES_FUCFG24_HSM_PTRMETA1_Msk & ((value) << FUSES_FUCFG24_HSM_PTRMETA1_Pos))
#define FUSES_FUCFG24_Msk                     _U_(0xFFFFFFFF)                                      /**< (FUSES_FUCFG24) Register Mask  */


/* -------- FUSES_USEROTPCFG : (FUSES Offset: 0x00) (R/W 32) Dummy register for USEROTP segment -------- */
#define FUSES_USEROTPCFG_Msk                  _U_(0x00000000)                                      /**< (FUSES_USEROTPCFG) Register Mask  */


/** \brief FUSES register offsets definitions */
#define FUSES_BLDRCFG_REG_OFST         (0x00)              /**< (FUSES_BLDRCFG) Bootloader Configuration Offset */
#define FUSES_BROM_BSEQ_REG_OFST       (0x04)              /**< (FUSES_BROM_BSEQ) Boot Configuraiton Page Sequence Number Offset */
#define FUSES_BFM_CHK_TABLEPTR_REG_OFST (0x08)              /**< (FUSES_BFM_CHK_TABLEPTR) BFM CRC Table Pointer Offset */
#define FUSES_KEYVAL_TZ0_CE_ALL_REG_OFST (0x80)              /**< (FUSES_KEYVAL_TZ0_CE_ALL) Chip Erase Key for TZ0_ALL Offset */
#define FUSES_KEYVAL_TZ0_CE_ALL0_REG_OFST (0x80)              /**< (FUSES_KEYVAL_TZ0_CE_ALL0) Chip Erase Key for TZ0_ALL Offset */
#define FUSES_KEYVAL_TZ0_CE_ALL1_REG_OFST (0x84)              /**< (FUSES_KEYVAL_TZ0_CE_ALL1) Chip Erase Key for TZ0_ALL Offset */
#define FUSES_KEYVAL_TZ0_CE_ALL2_REG_OFST (0x88)              /**< (FUSES_KEYVAL_TZ0_CE_ALL2) Chip Erase Key for TZ0_ALL Offset */
#define FUSES_KEYVAL_TZ0_CE_ALL3_REG_OFST (0x8C)              /**< (FUSES_KEYVAL_TZ0_CE_ALL3) Chip Erase Key for TZ0_ALL Offset */
#define FUSES_CELOCK_TZ0_CE_ALL_REG_OFST (0x90)              /**< (FUSES_CELOCK_TZ0_CE_ALL) Chip Erase Lock for TZ0_ALL Offset */
#define FUSES_CELOCK_TZ0_CE_ALL0_REG_OFST (0x90)              /**< (FUSES_CELOCK_TZ0_CE_ALL0) Chip Erase Lock for TZ0_ALL Offset */
#define FUSES_CELOCK_TZ0_CE_ALL1_REG_OFST (0x94)              /**< (FUSES_CELOCK_TZ0_CE_ALL1) Chip Erase Lock for TZ0_ALL Offset */
#define FUSES_CELOCK_TZ0_CE_ALL2_REG_OFST (0x98)              /**< (FUSES_CELOCK_TZ0_CE_ALL2) Chip Erase Lock for TZ0_ALL Offset */
#define FUSES_CELOCK_TZ0_CE_ALL3_REG_OFST (0x9C)              /**< (FUSES_CELOCK_TZ0_CE_ALL3) Chip Erase Lock for TZ0_ALL Offset */
#define FUSES_KEYVAL_CRCCMD_REG_OFST   (0xA0)              /**< (FUSES_KEYVAL_CRCCMD) CRC Access Key Offset */
#define FUSES_KEYVAL_CRCCMD0_REG_OFST  (0xA0)              /**< (FUSES_KEYVAL_CRCCMD0) CRC Access Key Offset */
#define FUSES_KEYVAL_CRCCMD1_REG_OFST  (0xA4)              /**< (FUSES_KEYVAL_CRCCMD1) CRC Access Key Offset */
#define FUSES_KEYVAL_CRCCMD2_REG_OFST  (0xA8)              /**< (FUSES_KEYVAL_CRCCMD2) CRC Access Key Offset */
#define FUSES_KEYVAL_CRCCMD3_REG_OFST  (0xAC)              /**< (FUSES_KEYVAL_CRCCMD3) CRC Access Key Offset */
#define FUSES_KEYCONFIG_CRCCMD_REG_OFST (0xB0)              /**< (FUSES_KEYCONFIG_CRCCMD) CRC Access Key Configuration Offset */
#define FUSES_KEYCONFIG_CRCCMD0_REG_OFST (0xB0)              /**< (FUSES_KEYCONFIG_CRCCMD0) CRC Access Key Configuration Offset */
#define FUSES_KEYCONFIG_CRCCMD1_REG_OFST (0xB4)              /**< (FUSES_KEYCONFIG_CRCCMD1) CRC Access Key Configuration Offset */
#define FUSES_KEYCONFIG_CRCCMD2_REG_OFST (0xB8)              /**< (FUSES_KEYCONFIG_CRCCMD2) CRC Access Key Configuration Offset */
#define FUSES_KEYCONFIG_CRCCMD3_REG_OFST (0xBC)              /**< (FUSES_KEYCONFIG_CRCCMD3) CRC Access Key Configuration Offset */
#define FUSES_KEYVAL_HOSTDALELEV_REG_OFST (0xC0)              /**< (FUSES_KEYVAL_HOSTDALELEV) Host Authenticated DAL Elevation Key Offset */
#define FUSES_KEYVAL_HOSTDALELEV0_REG_OFST (0xC0)              /**< (FUSES_KEYVAL_HOSTDALELEV0) Host Authenticated DAL Elevation Key Offset */
#define FUSES_KEYVAL_HOSTDALELEV1_REG_OFST (0xC4)              /**< (FUSES_KEYVAL_HOSTDALELEV1) Host Authenticated DAL Elevation Key Offset */
#define FUSES_KEYVAL_HOSTDALELEV2_REG_OFST (0xC8)              /**< (FUSES_KEYVAL_HOSTDALELEV2) Host Authenticated DAL Elevation Key Offset */
#define FUSES_KEYVAL_HOSTDALELEV3_REG_OFST (0xCC)              /**< (FUSES_KEYVAL_HOSTDALELEV3) Host Authenticated DAL Elevation Key Offset */
#define FUSES_KEYCONFIG_HOSTDALELEV_REG_OFST (0xD0)              /**< (FUSES_KEYCONFIG_HOSTDALELEV) Host Authenticated DAL Elevation Key Configuration Offset */
#define FUSES_KEYCONFIG_HOSTDALELEV0_REG_OFST (0xD0)              /**< (FUSES_KEYCONFIG_HOSTDALELEV0) Host Authenticated DAL Elevation Key Configuration Offset */
#define FUSES_KEYCONFIG_HOSTDALELEV1_REG_OFST (0xD4)              /**< (FUSES_KEYCONFIG_HOSTDALELEV1) Host Authenticated DAL Elevation Key Configuration Offset */
#define FUSES_KEYCONFIG_HOSTDALELEV2_REG_OFST (0xD8)              /**< (FUSES_KEYCONFIG_HOSTDALELEV2) Host Authenticated DAL Elevation Key Configuration Offset */
#define FUSES_KEYCONFIG_HOSTDALELEV3_REG_OFST (0xDC)              /**< (FUSES_KEYCONFIG_HOSTDALELEV3) Host Authenticated DAL Elevation Key Configuration Offset */
#define FUSES_ROM_CTRLA_REG_OFST       (0xE0)              /**< (FUSES_ROM_CTRLA) ROM CTRLA Settings  (BROM_PLLEN must be set) Offset */
#define FUSES_FCR_CTRLA_REG_OFST       (0xE4)              /**< (FUSES_FCR_CTRLA) FCR CTRLA Settings (BROM_PLLEN must be set) Offset */
#define FUSES_RPMU_VREGCTRL_REG_OFST   (0xE8)              /**< (FUSES_RPMU_VREGCTRL) RPMU VREGCTRL Settings (BROM_PLLEN must be set) Offset */
#define FUSES_PLL0_CTRL_REG_OFST       (0xEC)              /**< (FUSES_PLL0_CTRL) PLL0 CTRL Settings (BROM_PLLEN must be set) Offset */
#define FUSES_PLL0_FBDIV_REG_OFST      (0xF0)              /**< (FUSES_PLL0_FBDIV) PLL0 FBDIV Settings (BROM_PLLEN must be set) Offset */
#define FUSES_PLL0_REFDIV_REG_OFST     (0xF4)              /**< (FUSES_PLL0_REFDIV) PLL0 REFDIV Settings (BROM_PLLEN must be set) Offset */
#define FUSES_PLL0_POSTDIVA_REG_OFST   (0xF8)              /**< (FUSES_PLL0_POSTDIVA) PLL0 POSTDIVA Settings (BROM_PLLEN must be set) Offset */
#define FUSES_MCLK_CLKDIV1_REG_OFST    (0xFC)              /**< (FUSES_MCLK_CLKDIV1) MCLK CLKDIV1 Settings (BROM_PLLEN must be set) Offset */
#define FUSES_GCLK_GENCTRL0_REG_OFST   (0x100)             /**< (FUSES_GCLK_GENCTRL0) GCLK GENCTRL0 Settings (BROM_PLLEN must be set) Offset */
#define FUSES_BROM_BOOTCFGCRC_REG_OFST (0x110)             /**< (FUSES_BROM_BOOTCFGCRC) Boot Configuraiton Page CRC Offset */
#define FUSES_BROM_BOOTCFGCRC0_REG_OFST (0x110)             /**< (FUSES_BROM_BOOTCFGCRC0) Boot Configuraiton Page CRC Offset */
#define FUSES_BROM_BOOTCFGCRC1_REG_OFST (0x114)             /**< (FUSES_BROM_BOOTCFGCRC1) Boot Configuraiton Page CRC Offset */
#define FUSES_BROM_BOOTCFGCRC2_REG_OFST (0x118)             /**< (FUSES_BROM_BOOTCFGCRC2) Boot Configuraiton Page CRC Offset */
#define FUSES_BROM_BOOTCFGCRC3_REG_OFST (0x11C)             /**< (FUSES_BROM_BOOTCFGCRC3) Boot Configuraiton Page CRC Offset */
#define FUSES_BROM_PAGEEND_REG_OFST    (0x120)             /**< (FUSES_BROM_PAGEEND) Page End Marker for Verified Data Offset */
#define FUSES_FCCFG64_REG_OFST         (0x180)             /**< (FUSES_FCCFG64) PTC Calibration Offset */
#define FUSES_FCCFG65_REG_OFST         (0x184)             /**< (FUSES_FCCFG65) ADC Calibration Offset */
#define FUSES_FCCFG66_REG_OFST         (0x188)             /**< (FUSES_FCCFG66) Comparator Calibration Offset */
#define FUSES_FCCFG72_REG_OFST         (0x1A0)             /**< (FUSES_FCCFG72) MAC ID (31 through 0) Offset */
#define FUSES_FCCFG73_REG_OFST         (0x1A4)             /**< (FUSES_FCCFG73) MAC ID (47 through 32) Offset */
#define FUSES_FCCFG_UNIQID_REG_OFST    (0x1E0)             /**< (FUSES_FCCFG_UNIQID) Factory programed Unique ID Offset */
#define FUSES_FCCFG_UNIQID0_REG_OFST   (0x1E0)             /**< (FUSES_FCCFG_UNIQID0) Factory programed Unique ID Offset */
#define FUSES_FCCFG_UNIQID1_REG_OFST   (0x1E4)             /**< (FUSES_FCCFG_UNIQID1) Factory programed Unique ID Offset */
#define FUSES_FCCFG_UNIQID2_REG_OFST   (0x1E8)             /**< (FUSES_FCCFG_UNIQID2) Factory programed Unique ID Offset */
#define FUSES_FCCFG_UNIQID3_REG_OFST   (0x1EC)             /**< (FUSES_FCCFG_UNIQID3) Factory programed Unique ID Offset */
#define FUSES_DAL_REG_OFST             (0x00)              /**< (FUSES_DAL) Debug Access Level Offset */
#define FUSES_FSEQ_REG_OFST            (0x00)              /**< (FUSES_FSEQ) Flash Sequence Number Offset */
#define FUSES_AFSEQ_REG_OFST           (0x20)              /**< (FUSES_AFSEQ) Flash Alternate Sequence Number Offset */
#define FUSES_FUCFG0_REG_OFST          (0x40)              /**< (FUSES_FUCFG0) WDT Configuration Offset */
#define FUSES_FUCFG1_REG_OFST          (0x44)              /**< (FUSES_FUCFG1) User Configuration 1 (System Bus Configuration) Offset */
#define FUSES_FUCFG2_REG_OFST          (0x48)              /**< (FUSES_FUCFG2) User Configuration 2 (Deep Sleep SMOR Configuration) Offset */
#define FUSES_FUCFG3_REG_OFST          (0x4C)              /**< (FUSES_FUCFG3) User Configuration 2 (SMOR Configuration) Offset */
#define FUSES_FUCFG5_REG_OFST          (0x54)              /**< (FUSES_FUCFG5) User Configuration 5 (VREG Charge Pump Configuration) Offset */
#define FUSES_FUCFG6_REG_OFST          (0x58)              /**< (FUSES_FUCFG6) User Configuration 6 (FCR ECCCTRL Configuration) Offset */
#define FUSES_FUCFG7_REG_OFST          (0x5C)              /**< (FUSES_FUCFG7) User Configuration 7 (FCR CTRLB Configuration) Offset */
#define FUSES_FUCFG8_REG_OFST          (0x60)              /**< (FUSES_FUCFG8) User Configuration 8 (FCW CWP Configuration) Offset */
#define FUSES_FUCFG9_REG_OFST          (0x64)              /**< (FUSES_FUCFG9) User Configuration 9 (RAM BISR and ECC Configuraiton) Offset */
#define FUSES_FUCFG16_REG_OFST         (0x80)              /**< (FUSES_FUCFG16) User Configuration 16 (HSM Firmware Metadata 0 Address) Offset */
#define FUSES_FUCFG24_REG_OFST         (0xA0)              /**< (FUSES_FUCFG24) User Configuration 24 (HSM Firmware Metadata 1 Address) Offset */
#define FUSES_USEROTPCFG_REG_OFST      (0x00)              /**< (FUSES_USEROTPCFG) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG0_REG_OFST     (0x00)              /**< (FUSES_USEROTPCFG0) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1_REG_OFST     (0x04)              /**< (FUSES_USEROTPCFG1) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG2_REG_OFST     (0x08)              /**< (FUSES_USEROTPCFG2) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG3_REG_OFST     (0x0C)              /**< (FUSES_USEROTPCFG3) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG4_REG_OFST     (0x10)              /**< (FUSES_USEROTPCFG4) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG5_REG_OFST     (0x14)              /**< (FUSES_USEROTPCFG5) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG6_REG_OFST     (0x18)              /**< (FUSES_USEROTPCFG6) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG7_REG_OFST     (0x1C)              /**< (FUSES_USEROTPCFG7) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG8_REG_OFST     (0x20)              /**< (FUSES_USEROTPCFG8) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG9_REG_OFST     (0x24)              /**< (FUSES_USEROTPCFG9) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG10_REG_OFST    (0x28)              /**< (FUSES_USEROTPCFG10) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG11_REG_OFST    (0x2C)              /**< (FUSES_USEROTPCFG11) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG12_REG_OFST    (0x30)              /**< (FUSES_USEROTPCFG12) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG13_REG_OFST    (0x34)              /**< (FUSES_USEROTPCFG13) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG14_REG_OFST    (0x38)              /**< (FUSES_USEROTPCFG14) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG15_REG_OFST    (0x3C)              /**< (FUSES_USEROTPCFG15) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG16_REG_OFST    (0x40)              /**< (FUSES_USEROTPCFG16) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG17_REG_OFST    (0x44)              /**< (FUSES_USEROTPCFG17) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG18_REG_OFST    (0x48)              /**< (FUSES_USEROTPCFG18) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG19_REG_OFST    (0x4C)              /**< (FUSES_USEROTPCFG19) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG20_REG_OFST    (0x50)              /**< (FUSES_USEROTPCFG20) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG21_REG_OFST    (0x54)              /**< (FUSES_USEROTPCFG21) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG22_REG_OFST    (0x58)              /**< (FUSES_USEROTPCFG22) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG23_REG_OFST    (0x5C)              /**< (FUSES_USEROTPCFG23) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG24_REG_OFST    (0x60)              /**< (FUSES_USEROTPCFG24) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG25_REG_OFST    (0x64)              /**< (FUSES_USEROTPCFG25) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG26_REG_OFST    (0x68)              /**< (FUSES_USEROTPCFG26) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG27_REG_OFST    (0x6C)              /**< (FUSES_USEROTPCFG27) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG28_REG_OFST    (0x70)              /**< (FUSES_USEROTPCFG28) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG29_REG_OFST    (0x74)              /**< (FUSES_USEROTPCFG29) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG30_REG_OFST    (0x78)              /**< (FUSES_USEROTPCFG30) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG31_REG_OFST    (0x7C)              /**< (FUSES_USEROTPCFG31) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG32_REG_OFST    (0x80)              /**< (FUSES_USEROTPCFG32) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG33_REG_OFST    (0x84)              /**< (FUSES_USEROTPCFG33) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG34_REG_OFST    (0x88)              /**< (FUSES_USEROTPCFG34) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG35_REG_OFST    (0x8C)              /**< (FUSES_USEROTPCFG35) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG36_REG_OFST    (0x90)              /**< (FUSES_USEROTPCFG36) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG37_REG_OFST    (0x94)              /**< (FUSES_USEROTPCFG37) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG38_REG_OFST    (0x98)              /**< (FUSES_USEROTPCFG38) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG39_REG_OFST    (0x9C)              /**< (FUSES_USEROTPCFG39) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG40_REG_OFST    (0xA0)              /**< (FUSES_USEROTPCFG40) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG41_REG_OFST    (0xA4)              /**< (FUSES_USEROTPCFG41) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG42_REG_OFST    (0xA8)              /**< (FUSES_USEROTPCFG42) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG43_REG_OFST    (0xAC)              /**< (FUSES_USEROTPCFG43) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG44_REG_OFST    (0xB0)              /**< (FUSES_USEROTPCFG44) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG45_REG_OFST    (0xB4)              /**< (FUSES_USEROTPCFG45) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG46_REG_OFST    (0xB8)              /**< (FUSES_USEROTPCFG46) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG47_REG_OFST    (0xBC)              /**< (FUSES_USEROTPCFG47) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG48_REG_OFST    (0xC0)              /**< (FUSES_USEROTPCFG48) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG49_REG_OFST    (0xC4)              /**< (FUSES_USEROTPCFG49) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG50_REG_OFST    (0xC8)              /**< (FUSES_USEROTPCFG50) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG51_REG_OFST    (0xCC)              /**< (FUSES_USEROTPCFG51) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG52_REG_OFST    (0xD0)              /**< (FUSES_USEROTPCFG52) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG53_REG_OFST    (0xD4)              /**< (FUSES_USEROTPCFG53) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG54_REG_OFST    (0xD8)              /**< (FUSES_USEROTPCFG54) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG55_REG_OFST    (0xDC)              /**< (FUSES_USEROTPCFG55) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG56_REG_OFST    (0xE0)              /**< (FUSES_USEROTPCFG56) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG57_REG_OFST    (0xE4)              /**< (FUSES_USEROTPCFG57) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG58_REG_OFST    (0xE8)              /**< (FUSES_USEROTPCFG58) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG59_REG_OFST    (0xEC)              /**< (FUSES_USEROTPCFG59) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG60_REG_OFST    (0xF0)              /**< (FUSES_USEROTPCFG60) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG61_REG_OFST    (0xF4)              /**< (FUSES_USEROTPCFG61) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG62_REG_OFST    (0xF8)              /**< (FUSES_USEROTPCFG62) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG63_REG_OFST    (0xFC)              /**< (FUSES_USEROTPCFG63) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG64_REG_OFST    (0x100)             /**< (FUSES_USEROTPCFG64) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG65_REG_OFST    (0x104)             /**< (FUSES_USEROTPCFG65) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG66_REG_OFST    (0x108)             /**< (FUSES_USEROTPCFG66) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG67_REG_OFST    (0x10C)             /**< (FUSES_USEROTPCFG67) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG68_REG_OFST    (0x110)             /**< (FUSES_USEROTPCFG68) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG69_REG_OFST    (0x114)             /**< (FUSES_USEROTPCFG69) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG70_REG_OFST    (0x118)             /**< (FUSES_USEROTPCFG70) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG71_REG_OFST    (0x11C)             /**< (FUSES_USEROTPCFG71) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG72_REG_OFST    (0x120)             /**< (FUSES_USEROTPCFG72) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG73_REG_OFST    (0x124)             /**< (FUSES_USEROTPCFG73) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG74_REG_OFST    (0x128)             /**< (FUSES_USEROTPCFG74) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG75_REG_OFST    (0x12C)             /**< (FUSES_USEROTPCFG75) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG76_REG_OFST    (0x130)             /**< (FUSES_USEROTPCFG76) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG77_REG_OFST    (0x134)             /**< (FUSES_USEROTPCFG77) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG78_REG_OFST    (0x138)             /**< (FUSES_USEROTPCFG78) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG79_REG_OFST    (0x13C)             /**< (FUSES_USEROTPCFG79) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG80_REG_OFST    (0x140)             /**< (FUSES_USEROTPCFG80) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG81_REG_OFST    (0x144)             /**< (FUSES_USEROTPCFG81) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG82_REG_OFST    (0x148)             /**< (FUSES_USEROTPCFG82) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG83_REG_OFST    (0x14C)             /**< (FUSES_USEROTPCFG83) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG84_REG_OFST    (0x150)             /**< (FUSES_USEROTPCFG84) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG85_REG_OFST    (0x154)             /**< (FUSES_USEROTPCFG85) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG86_REG_OFST    (0x158)             /**< (FUSES_USEROTPCFG86) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG87_REG_OFST    (0x15C)             /**< (FUSES_USEROTPCFG87) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG88_REG_OFST    (0x160)             /**< (FUSES_USEROTPCFG88) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG89_REG_OFST    (0x164)             /**< (FUSES_USEROTPCFG89) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG90_REG_OFST    (0x168)             /**< (FUSES_USEROTPCFG90) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG91_REG_OFST    (0x16C)             /**< (FUSES_USEROTPCFG91) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG92_REG_OFST    (0x170)             /**< (FUSES_USEROTPCFG92) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG93_REG_OFST    (0x174)             /**< (FUSES_USEROTPCFG93) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG94_REG_OFST    (0x178)             /**< (FUSES_USEROTPCFG94) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG95_REG_OFST    (0x17C)             /**< (FUSES_USEROTPCFG95) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG96_REG_OFST    (0x180)             /**< (FUSES_USEROTPCFG96) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG97_REG_OFST    (0x184)             /**< (FUSES_USEROTPCFG97) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG98_REG_OFST    (0x188)             /**< (FUSES_USEROTPCFG98) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG99_REG_OFST    (0x18C)             /**< (FUSES_USEROTPCFG99) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG100_REG_OFST   (0x190)             /**< (FUSES_USEROTPCFG100) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG101_REG_OFST   (0x194)             /**< (FUSES_USEROTPCFG101) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG102_REG_OFST   (0x198)             /**< (FUSES_USEROTPCFG102) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG103_REG_OFST   (0x19C)             /**< (FUSES_USEROTPCFG103) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG104_REG_OFST   (0x1A0)             /**< (FUSES_USEROTPCFG104) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG105_REG_OFST   (0x1A4)             /**< (FUSES_USEROTPCFG105) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG106_REG_OFST   (0x1A8)             /**< (FUSES_USEROTPCFG106) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG107_REG_OFST   (0x1AC)             /**< (FUSES_USEROTPCFG107) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG108_REG_OFST   (0x1B0)             /**< (FUSES_USEROTPCFG108) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG109_REG_OFST   (0x1B4)             /**< (FUSES_USEROTPCFG109) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG110_REG_OFST   (0x1B8)             /**< (FUSES_USEROTPCFG110) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG111_REG_OFST   (0x1BC)             /**< (FUSES_USEROTPCFG111) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG112_REG_OFST   (0x1C0)             /**< (FUSES_USEROTPCFG112) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG113_REG_OFST   (0x1C4)             /**< (FUSES_USEROTPCFG113) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG114_REG_OFST   (0x1C8)             /**< (FUSES_USEROTPCFG114) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG115_REG_OFST   (0x1CC)             /**< (FUSES_USEROTPCFG115) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG116_REG_OFST   (0x1D0)             /**< (FUSES_USEROTPCFG116) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG117_REG_OFST   (0x1D4)             /**< (FUSES_USEROTPCFG117) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG118_REG_OFST   (0x1D8)             /**< (FUSES_USEROTPCFG118) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG119_REG_OFST   (0x1DC)             /**< (FUSES_USEROTPCFG119) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG120_REG_OFST   (0x1E0)             /**< (FUSES_USEROTPCFG120) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG121_REG_OFST   (0x1E4)             /**< (FUSES_USEROTPCFG121) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG122_REG_OFST   (0x1E8)             /**< (FUSES_USEROTPCFG122) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG123_REG_OFST   (0x1EC)             /**< (FUSES_USEROTPCFG123) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG124_REG_OFST   (0x1F0)             /**< (FUSES_USEROTPCFG124) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG125_REG_OFST   (0x1F4)             /**< (FUSES_USEROTPCFG125) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG126_REG_OFST   (0x1F8)             /**< (FUSES_USEROTPCFG126) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG127_REG_OFST   (0x1FC)             /**< (FUSES_USEROTPCFG127) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG128_REG_OFST   (0x200)             /**< (FUSES_USEROTPCFG128) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG129_REG_OFST   (0x204)             /**< (FUSES_USEROTPCFG129) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG130_REG_OFST   (0x208)             /**< (FUSES_USEROTPCFG130) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG131_REG_OFST   (0x20C)             /**< (FUSES_USEROTPCFG131) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG132_REG_OFST   (0x210)             /**< (FUSES_USEROTPCFG132) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG133_REG_OFST   (0x214)             /**< (FUSES_USEROTPCFG133) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG134_REG_OFST   (0x218)             /**< (FUSES_USEROTPCFG134) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG135_REG_OFST   (0x21C)             /**< (FUSES_USEROTPCFG135) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG136_REG_OFST   (0x220)             /**< (FUSES_USEROTPCFG136) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG137_REG_OFST   (0x224)             /**< (FUSES_USEROTPCFG137) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG138_REG_OFST   (0x228)             /**< (FUSES_USEROTPCFG138) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG139_REG_OFST   (0x22C)             /**< (FUSES_USEROTPCFG139) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG140_REG_OFST   (0x230)             /**< (FUSES_USEROTPCFG140) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG141_REG_OFST   (0x234)             /**< (FUSES_USEROTPCFG141) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG142_REG_OFST   (0x238)             /**< (FUSES_USEROTPCFG142) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG143_REG_OFST   (0x23C)             /**< (FUSES_USEROTPCFG143) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG144_REG_OFST   (0x240)             /**< (FUSES_USEROTPCFG144) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG145_REG_OFST   (0x244)             /**< (FUSES_USEROTPCFG145) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG146_REG_OFST   (0x248)             /**< (FUSES_USEROTPCFG146) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG147_REG_OFST   (0x24C)             /**< (FUSES_USEROTPCFG147) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG148_REG_OFST   (0x250)             /**< (FUSES_USEROTPCFG148) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG149_REG_OFST   (0x254)             /**< (FUSES_USEROTPCFG149) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG150_REG_OFST   (0x258)             /**< (FUSES_USEROTPCFG150) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG151_REG_OFST   (0x25C)             /**< (FUSES_USEROTPCFG151) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG152_REG_OFST   (0x260)             /**< (FUSES_USEROTPCFG152) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG153_REG_OFST   (0x264)             /**< (FUSES_USEROTPCFG153) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG154_REG_OFST   (0x268)             /**< (FUSES_USEROTPCFG154) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG155_REG_OFST   (0x26C)             /**< (FUSES_USEROTPCFG155) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG156_REG_OFST   (0x270)             /**< (FUSES_USEROTPCFG156) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG157_REG_OFST   (0x274)             /**< (FUSES_USEROTPCFG157) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG158_REG_OFST   (0x278)             /**< (FUSES_USEROTPCFG158) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG159_REG_OFST   (0x27C)             /**< (FUSES_USEROTPCFG159) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG160_REG_OFST   (0x280)             /**< (FUSES_USEROTPCFG160) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG161_REG_OFST   (0x284)             /**< (FUSES_USEROTPCFG161) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG162_REG_OFST   (0x288)             /**< (FUSES_USEROTPCFG162) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG163_REG_OFST   (0x28C)             /**< (FUSES_USEROTPCFG163) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG164_REG_OFST   (0x290)             /**< (FUSES_USEROTPCFG164) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG165_REG_OFST   (0x294)             /**< (FUSES_USEROTPCFG165) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG166_REG_OFST   (0x298)             /**< (FUSES_USEROTPCFG166) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG167_REG_OFST   (0x29C)             /**< (FUSES_USEROTPCFG167) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG168_REG_OFST   (0x2A0)             /**< (FUSES_USEROTPCFG168) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG169_REG_OFST   (0x2A4)             /**< (FUSES_USEROTPCFG169) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG170_REG_OFST   (0x2A8)             /**< (FUSES_USEROTPCFG170) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG171_REG_OFST   (0x2AC)             /**< (FUSES_USEROTPCFG171) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG172_REG_OFST   (0x2B0)             /**< (FUSES_USEROTPCFG172) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG173_REG_OFST   (0x2B4)             /**< (FUSES_USEROTPCFG173) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG174_REG_OFST   (0x2B8)             /**< (FUSES_USEROTPCFG174) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG175_REG_OFST   (0x2BC)             /**< (FUSES_USEROTPCFG175) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG176_REG_OFST   (0x2C0)             /**< (FUSES_USEROTPCFG176) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG177_REG_OFST   (0x2C4)             /**< (FUSES_USEROTPCFG177) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG178_REG_OFST   (0x2C8)             /**< (FUSES_USEROTPCFG178) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG179_REG_OFST   (0x2CC)             /**< (FUSES_USEROTPCFG179) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG180_REG_OFST   (0x2D0)             /**< (FUSES_USEROTPCFG180) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG181_REG_OFST   (0x2D4)             /**< (FUSES_USEROTPCFG181) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG182_REG_OFST   (0x2D8)             /**< (FUSES_USEROTPCFG182) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG183_REG_OFST   (0x2DC)             /**< (FUSES_USEROTPCFG183) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG184_REG_OFST   (0x2E0)             /**< (FUSES_USEROTPCFG184) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG185_REG_OFST   (0x2E4)             /**< (FUSES_USEROTPCFG185) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG186_REG_OFST   (0x2E8)             /**< (FUSES_USEROTPCFG186) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG187_REG_OFST   (0x2EC)             /**< (FUSES_USEROTPCFG187) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG188_REG_OFST   (0x2F0)             /**< (FUSES_USEROTPCFG188) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG189_REG_OFST   (0x2F4)             /**< (FUSES_USEROTPCFG189) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG190_REG_OFST   (0x2F8)             /**< (FUSES_USEROTPCFG190) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG191_REG_OFST   (0x2FC)             /**< (FUSES_USEROTPCFG191) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG192_REG_OFST   (0x300)             /**< (FUSES_USEROTPCFG192) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG193_REG_OFST   (0x304)             /**< (FUSES_USEROTPCFG193) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG194_REG_OFST   (0x308)             /**< (FUSES_USEROTPCFG194) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG195_REG_OFST   (0x30C)             /**< (FUSES_USEROTPCFG195) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG196_REG_OFST   (0x310)             /**< (FUSES_USEROTPCFG196) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG197_REG_OFST   (0x314)             /**< (FUSES_USEROTPCFG197) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG198_REG_OFST   (0x318)             /**< (FUSES_USEROTPCFG198) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG199_REG_OFST   (0x31C)             /**< (FUSES_USEROTPCFG199) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG200_REG_OFST   (0x320)             /**< (FUSES_USEROTPCFG200) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG201_REG_OFST   (0x324)             /**< (FUSES_USEROTPCFG201) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG202_REG_OFST   (0x328)             /**< (FUSES_USEROTPCFG202) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG203_REG_OFST   (0x32C)             /**< (FUSES_USEROTPCFG203) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG204_REG_OFST   (0x330)             /**< (FUSES_USEROTPCFG204) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG205_REG_OFST   (0x334)             /**< (FUSES_USEROTPCFG205) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG206_REG_OFST   (0x338)             /**< (FUSES_USEROTPCFG206) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG207_REG_OFST   (0x33C)             /**< (FUSES_USEROTPCFG207) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG208_REG_OFST   (0x340)             /**< (FUSES_USEROTPCFG208) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG209_REG_OFST   (0x344)             /**< (FUSES_USEROTPCFG209) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG210_REG_OFST   (0x348)             /**< (FUSES_USEROTPCFG210) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG211_REG_OFST   (0x34C)             /**< (FUSES_USEROTPCFG211) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG212_REG_OFST   (0x350)             /**< (FUSES_USEROTPCFG212) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG213_REG_OFST   (0x354)             /**< (FUSES_USEROTPCFG213) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG214_REG_OFST   (0x358)             /**< (FUSES_USEROTPCFG214) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG215_REG_OFST   (0x35C)             /**< (FUSES_USEROTPCFG215) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG216_REG_OFST   (0x360)             /**< (FUSES_USEROTPCFG216) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG217_REG_OFST   (0x364)             /**< (FUSES_USEROTPCFG217) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG218_REG_OFST   (0x368)             /**< (FUSES_USEROTPCFG218) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG219_REG_OFST   (0x36C)             /**< (FUSES_USEROTPCFG219) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG220_REG_OFST   (0x370)             /**< (FUSES_USEROTPCFG220) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG221_REG_OFST   (0x374)             /**< (FUSES_USEROTPCFG221) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG222_REG_OFST   (0x378)             /**< (FUSES_USEROTPCFG222) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG223_REG_OFST   (0x37C)             /**< (FUSES_USEROTPCFG223) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG224_REG_OFST   (0x380)             /**< (FUSES_USEROTPCFG224) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG225_REG_OFST   (0x384)             /**< (FUSES_USEROTPCFG225) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG226_REG_OFST   (0x388)             /**< (FUSES_USEROTPCFG226) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG227_REG_OFST   (0x38C)             /**< (FUSES_USEROTPCFG227) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG228_REG_OFST   (0x390)             /**< (FUSES_USEROTPCFG228) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG229_REG_OFST   (0x394)             /**< (FUSES_USEROTPCFG229) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG230_REG_OFST   (0x398)             /**< (FUSES_USEROTPCFG230) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG231_REG_OFST   (0x39C)             /**< (FUSES_USEROTPCFG231) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG232_REG_OFST   (0x3A0)             /**< (FUSES_USEROTPCFG232) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG233_REG_OFST   (0x3A4)             /**< (FUSES_USEROTPCFG233) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG234_REG_OFST   (0x3A8)             /**< (FUSES_USEROTPCFG234) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG235_REG_OFST   (0x3AC)             /**< (FUSES_USEROTPCFG235) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG236_REG_OFST   (0x3B0)             /**< (FUSES_USEROTPCFG236) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG237_REG_OFST   (0x3B4)             /**< (FUSES_USEROTPCFG237) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG238_REG_OFST   (0x3B8)             /**< (FUSES_USEROTPCFG238) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG239_REG_OFST   (0x3BC)             /**< (FUSES_USEROTPCFG239) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG240_REG_OFST   (0x3C0)             /**< (FUSES_USEROTPCFG240) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG241_REG_OFST   (0x3C4)             /**< (FUSES_USEROTPCFG241) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG242_REG_OFST   (0x3C8)             /**< (FUSES_USEROTPCFG242) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG243_REG_OFST   (0x3CC)             /**< (FUSES_USEROTPCFG243) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG244_REG_OFST   (0x3D0)             /**< (FUSES_USEROTPCFG244) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG245_REG_OFST   (0x3D4)             /**< (FUSES_USEROTPCFG245) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG246_REG_OFST   (0x3D8)             /**< (FUSES_USEROTPCFG246) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG247_REG_OFST   (0x3DC)             /**< (FUSES_USEROTPCFG247) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG248_REG_OFST   (0x3E0)             /**< (FUSES_USEROTPCFG248) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG249_REG_OFST   (0x3E4)             /**< (FUSES_USEROTPCFG249) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG250_REG_OFST   (0x3E8)             /**< (FUSES_USEROTPCFG250) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG251_REG_OFST   (0x3EC)             /**< (FUSES_USEROTPCFG251) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG252_REG_OFST   (0x3F0)             /**< (FUSES_USEROTPCFG252) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG253_REG_OFST   (0x3F4)             /**< (FUSES_USEROTPCFG253) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG254_REG_OFST   (0x3F8)             /**< (FUSES_USEROTPCFG254) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG255_REG_OFST   (0x3FC)             /**< (FUSES_USEROTPCFG255) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG256_REG_OFST   (0x400)             /**< (FUSES_USEROTPCFG256) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG257_REG_OFST   (0x404)             /**< (FUSES_USEROTPCFG257) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG258_REG_OFST   (0x408)             /**< (FUSES_USEROTPCFG258) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG259_REG_OFST   (0x40C)             /**< (FUSES_USEROTPCFG259) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG260_REG_OFST   (0x410)             /**< (FUSES_USEROTPCFG260) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG261_REG_OFST   (0x414)             /**< (FUSES_USEROTPCFG261) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG262_REG_OFST   (0x418)             /**< (FUSES_USEROTPCFG262) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG263_REG_OFST   (0x41C)             /**< (FUSES_USEROTPCFG263) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG264_REG_OFST   (0x420)             /**< (FUSES_USEROTPCFG264) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG265_REG_OFST   (0x424)             /**< (FUSES_USEROTPCFG265) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG266_REG_OFST   (0x428)             /**< (FUSES_USEROTPCFG266) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG267_REG_OFST   (0x42C)             /**< (FUSES_USEROTPCFG267) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG268_REG_OFST   (0x430)             /**< (FUSES_USEROTPCFG268) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG269_REG_OFST   (0x434)             /**< (FUSES_USEROTPCFG269) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG270_REG_OFST   (0x438)             /**< (FUSES_USEROTPCFG270) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG271_REG_OFST   (0x43C)             /**< (FUSES_USEROTPCFG271) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG272_REG_OFST   (0x440)             /**< (FUSES_USEROTPCFG272) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG273_REG_OFST   (0x444)             /**< (FUSES_USEROTPCFG273) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG274_REG_OFST   (0x448)             /**< (FUSES_USEROTPCFG274) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG275_REG_OFST   (0x44C)             /**< (FUSES_USEROTPCFG275) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG276_REG_OFST   (0x450)             /**< (FUSES_USEROTPCFG276) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG277_REG_OFST   (0x454)             /**< (FUSES_USEROTPCFG277) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG278_REG_OFST   (0x458)             /**< (FUSES_USEROTPCFG278) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG279_REG_OFST   (0x45C)             /**< (FUSES_USEROTPCFG279) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG280_REG_OFST   (0x460)             /**< (FUSES_USEROTPCFG280) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG281_REG_OFST   (0x464)             /**< (FUSES_USEROTPCFG281) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG282_REG_OFST   (0x468)             /**< (FUSES_USEROTPCFG282) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG283_REG_OFST   (0x46C)             /**< (FUSES_USEROTPCFG283) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG284_REG_OFST   (0x470)             /**< (FUSES_USEROTPCFG284) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG285_REG_OFST   (0x474)             /**< (FUSES_USEROTPCFG285) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG286_REG_OFST   (0x478)             /**< (FUSES_USEROTPCFG286) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG287_REG_OFST   (0x47C)             /**< (FUSES_USEROTPCFG287) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG288_REG_OFST   (0x480)             /**< (FUSES_USEROTPCFG288) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG289_REG_OFST   (0x484)             /**< (FUSES_USEROTPCFG289) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG290_REG_OFST   (0x488)             /**< (FUSES_USEROTPCFG290) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG291_REG_OFST   (0x48C)             /**< (FUSES_USEROTPCFG291) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG292_REG_OFST   (0x490)             /**< (FUSES_USEROTPCFG292) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG293_REG_OFST   (0x494)             /**< (FUSES_USEROTPCFG293) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG294_REG_OFST   (0x498)             /**< (FUSES_USEROTPCFG294) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG295_REG_OFST   (0x49C)             /**< (FUSES_USEROTPCFG295) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG296_REG_OFST   (0x4A0)             /**< (FUSES_USEROTPCFG296) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG297_REG_OFST   (0x4A4)             /**< (FUSES_USEROTPCFG297) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG298_REG_OFST   (0x4A8)             /**< (FUSES_USEROTPCFG298) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG299_REG_OFST   (0x4AC)             /**< (FUSES_USEROTPCFG299) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG300_REG_OFST   (0x4B0)             /**< (FUSES_USEROTPCFG300) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG301_REG_OFST   (0x4B4)             /**< (FUSES_USEROTPCFG301) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG302_REG_OFST   (0x4B8)             /**< (FUSES_USEROTPCFG302) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG303_REG_OFST   (0x4BC)             /**< (FUSES_USEROTPCFG303) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG304_REG_OFST   (0x4C0)             /**< (FUSES_USEROTPCFG304) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG305_REG_OFST   (0x4C4)             /**< (FUSES_USEROTPCFG305) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG306_REG_OFST   (0x4C8)             /**< (FUSES_USEROTPCFG306) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG307_REG_OFST   (0x4CC)             /**< (FUSES_USEROTPCFG307) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG308_REG_OFST   (0x4D0)             /**< (FUSES_USEROTPCFG308) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG309_REG_OFST   (0x4D4)             /**< (FUSES_USEROTPCFG309) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG310_REG_OFST   (0x4D8)             /**< (FUSES_USEROTPCFG310) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG311_REG_OFST   (0x4DC)             /**< (FUSES_USEROTPCFG311) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG312_REG_OFST   (0x4E0)             /**< (FUSES_USEROTPCFG312) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG313_REG_OFST   (0x4E4)             /**< (FUSES_USEROTPCFG313) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG314_REG_OFST   (0x4E8)             /**< (FUSES_USEROTPCFG314) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG315_REG_OFST   (0x4EC)             /**< (FUSES_USEROTPCFG315) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG316_REG_OFST   (0x4F0)             /**< (FUSES_USEROTPCFG316) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG317_REG_OFST   (0x4F4)             /**< (FUSES_USEROTPCFG317) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG318_REG_OFST   (0x4F8)             /**< (FUSES_USEROTPCFG318) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG319_REG_OFST   (0x4FC)             /**< (FUSES_USEROTPCFG319) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG320_REG_OFST   (0x500)             /**< (FUSES_USEROTPCFG320) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG321_REG_OFST   (0x504)             /**< (FUSES_USEROTPCFG321) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG322_REG_OFST   (0x508)             /**< (FUSES_USEROTPCFG322) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG323_REG_OFST   (0x50C)             /**< (FUSES_USEROTPCFG323) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG324_REG_OFST   (0x510)             /**< (FUSES_USEROTPCFG324) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG325_REG_OFST   (0x514)             /**< (FUSES_USEROTPCFG325) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG326_REG_OFST   (0x518)             /**< (FUSES_USEROTPCFG326) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG327_REG_OFST   (0x51C)             /**< (FUSES_USEROTPCFG327) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG328_REG_OFST   (0x520)             /**< (FUSES_USEROTPCFG328) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG329_REG_OFST   (0x524)             /**< (FUSES_USEROTPCFG329) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG330_REG_OFST   (0x528)             /**< (FUSES_USEROTPCFG330) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG331_REG_OFST   (0x52C)             /**< (FUSES_USEROTPCFG331) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG332_REG_OFST   (0x530)             /**< (FUSES_USEROTPCFG332) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG333_REG_OFST   (0x534)             /**< (FUSES_USEROTPCFG333) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG334_REG_OFST   (0x538)             /**< (FUSES_USEROTPCFG334) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG335_REG_OFST   (0x53C)             /**< (FUSES_USEROTPCFG335) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG336_REG_OFST   (0x540)             /**< (FUSES_USEROTPCFG336) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG337_REG_OFST   (0x544)             /**< (FUSES_USEROTPCFG337) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG338_REG_OFST   (0x548)             /**< (FUSES_USEROTPCFG338) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG339_REG_OFST   (0x54C)             /**< (FUSES_USEROTPCFG339) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG340_REG_OFST   (0x550)             /**< (FUSES_USEROTPCFG340) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG341_REG_OFST   (0x554)             /**< (FUSES_USEROTPCFG341) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG342_REG_OFST   (0x558)             /**< (FUSES_USEROTPCFG342) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG343_REG_OFST   (0x55C)             /**< (FUSES_USEROTPCFG343) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG344_REG_OFST   (0x560)             /**< (FUSES_USEROTPCFG344) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG345_REG_OFST   (0x564)             /**< (FUSES_USEROTPCFG345) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG346_REG_OFST   (0x568)             /**< (FUSES_USEROTPCFG346) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG347_REG_OFST   (0x56C)             /**< (FUSES_USEROTPCFG347) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG348_REG_OFST   (0x570)             /**< (FUSES_USEROTPCFG348) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG349_REG_OFST   (0x574)             /**< (FUSES_USEROTPCFG349) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG350_REG_OFST   (0x578)             /**< (FUSES_USEROTPCFG350) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG351_REG_OFST   (0x57C)             /**< (FUSES_USEROTPCFG351) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG352_REG_OFST   (0x580)             /**< (FUSES_USEROTPCFG352) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG353_REG_OFST   (0x584)             /**< (FUSES_USEROTPCFG353) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG354_REG_OFST   (0x588)             /**< (FUSES_USEROTPCFG354) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG355_REG_OFST   (0x58C)             /**< (FUSES_USEROTPCFG355) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG356_REG_OFST   (0x590)             /**< (FUSES_USEROTPCFG356) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG357_REG_OFST   (0x594)             /**< (FUSES_USEROTPCFG357) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG358_REG_OFST   (0x598)             /**< (FUSES_USEROTPCFG358) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG359_REG_OFST   (0x59C)             /**< (FUSES_USEROTPCFG359) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG360_REG_OFST   (0x5A0)             /**< (FUSES_USEROTPCFG360) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG361_REG_OFST   (0x5A4)             /**< (FUSES_USEROTPCFG361) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG362_REG_OFST   (0x5A8)             /**< (FUSES_USEROTPCFG362) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG363_REG_OFST   (0x5AC)             /**< (FUSES_USEROTPCFG363) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG364_REG_OFST   (0x5B0)             /**< (FUSES_USEROTPCFG364) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG365_REG_OFST   (0x5B4)             /**< (FUSES_USEROTPCFG365) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG366_REG_OFST   (0x5B8)             /**< (FUSES_USEROTPCFG366) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG367_REG_OFST   (0x5BC)             /**< (FUSES_USEROTPCFG367) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG368_REG_OFST   (0x5C0)             /**< (FUSES_USEROTPCFG368) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG369_REG_OFST   (0x5C4)             /**< (FUSES_USEROTPCFG369) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG370_REG_OFST   (0x5C8)             /**< (FUSES_USEROTPCFG370) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG371_REG_OFST   (0x5CC)             /**< (FUSES_USEROTPCFG371) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG372_REG_OFST   (0x5D0)             /**< (FUSES_USEROTPCFG372) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG373_REG_OFST   (0x5D4)             /**< (FUSES_USEROTPCFG373) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG374_REG_OFST   (0x5D8)             /**< (FUSES_USEROTPCFG374) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG375_REG_OFST   (0x5DC)             /**< (FUSES_USEROTPCFG375) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG376_REG_OFST   (0x5E0)             /**< (FUSES_USEROTPCFG376) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG377_REG_OFST   (0x5E4)             /**< (FUSES_USEROTPCFG377) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG378_REG_OFST   (0x5E8)             /**< (FUSES_USEROTPCFG378) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG379_REG_OFST   (0x5EC)             /**< (FUSES_USEROTPCFG379) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG380_REG_OFST   (0x5F0)             /**< (FUSES_USEROTPCFG380) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG381_REG_OFST   (0x5F4)             /**< (FUSES_USEROTPCFG381) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG382_REG_OFST   (0x5F8)             /**< (FUSES_USEROTPCFG382) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG383_REG_OFST   (0x5FC)             /**< (FUSES_USEROTPCFG383) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG384_REG_OFST   (0x600)             /**< (FUSES_USEROTPCFG384) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG385_REG_OFST   (0x604)             /**< (FUSES_USEROTPCFG385) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG386_REG_OFST   (0x608)             /**< (FUSES_USEROTPCFG386) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG387_REG_OFST   (0x60C)             /**< (FUSES_USEROTPCFG387) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG388_REG_OFST   (0x610)             /**< (FUSES_USEROTPCFG388) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG389_REG_OFST   (0x614)             /**< (FUSES_USEROTPCFG389) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG390_REG_OFST   (0x618)             /**< (FUSES_USEROTPCFG390) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG391_REG_OFST   (0x61C)             /**< (FUSES_USEROTPCFG391) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG392_REG_OFST   (0x620)             /**< (FUSES_USEROTPCFG392) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG393_REG_OFST   (0x624)             /**< (FUSES_USEROTPCFG393) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG394_REG_OFST   (0x628)             /**< (FUSES_USEROTPCFG394) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG395_REG_OFST   (0x62C)             /**< (FUSES_USEROTPCFG395) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG396_REG_OFST   (0x630)             /**< (FUSES_USEROTPCFG396) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG397_REG_OFST   (0x634)             /**< (FUSES_USEROTPCFG397) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG398_REG_OFST   (0x638)             /**< (FUSES_USEROTPCFG398) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG399_REG_OFST   (0x63C)             /**< (FUSES_USEROTPCFG399) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG400_REG_OFST   (0x640)             /**< (FUSES_USEROTPCFG400) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG401_REG_OFST   (0x644)             /**< (FUSES_USEROTPCFG401) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG402_REG_OFST   (0x648)             /**< (FUSES_USEROTPCFG402) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG403_REG_OFST   (0x64C)             /**< (FUSES_USEROTPCFG403) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG404_REG_OFST   (0x650)             /**< (FUSES_USEROTPCFG404) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG405_REG_OFST   (0x654)             /**< (FUSES_USEROTPCFG405) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG406_REG_OFST   (0x658)             /**< (FUSES_USEROTPCFG406) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG407_REG_OFST   (0x65C)             /**< (FUSES_USEROTPCFG407) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG408_REG_OFST   (0x660)             /**< (FUSES_USEROTPCFG408) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG409_REG_OFST   (0x664)             /**< (FUSES_USEROTPCFG409) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG410_REG_OFST   (0x668)             /**< (FUSES_USEROTPCFG410) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG411_REG_OFST   (0x66C)             /**< (FUSES_USEROTPCFG411) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG412_REG_OFST   (0x670)             /**< (FUSES_USEROTPCFG412) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG413_REG_OFST   (0x674)             /**< (FUSES_USEROTPCFG413) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG414_REG_OFST   (0x678)             /**< (FUSES_USEROTPCFG414) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG415_REG_OFST   (0x67C)             /**< (FUSES_USEROTPCFG415) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG416_REG_OFST   (0x680)             /**< (FUSES_USEROTPCFG416) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG417_REG_OFST   (0x684)             /**< (FUSES_USEROTPCFG417) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG418_REG_OFST   (0x688)             /**< (FUSES_USEROTPCFG418) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG419_REG_OFST   (0x68C)             /**< (FUSES_USEROTPCFG419) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG420_REG_OFST   (0x690)             /**< (FUSES_USEROTPCFG420) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG421_REG_OFST   (0x694)             /**< (FUSES_USEROTPCFG421) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG422_REG_OFST   (0x698)             /**< (FUSES_USEROTPCFG422) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG423_REG_OFST   (0x69C)             /**< (FUSES_USEROTPCFG423) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG424_REG_OFST   (0x6A0)             /**< (FUSES_USEROTPCFG424) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG425_REG_OFST   (0x6A4)             /**< (FUSES_USEROTPCFG425) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG426_REG_OFST   (0x6A8)             /**< (FUSES_USEROTPCFG426) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG427_REG_OFST   (0x6AC)             /**< (FUSES_USEROTPCFG427) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG428_REG_OFST   (0x6B0)             /**< (FUSES_USEROTPCFG428) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG429_REG_OFST   (0x6B4)             /**< (FUSES_USEROTPCFG429) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG430_REG_OFST   (0x6B8)             /**< (FUSES_USEROTPCFG430) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG431_REG_OFST   (0x6BC)             /**< (FUSES_USEROTPCFG431) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG432_REG_OFST   (0x6C0)             /**< (FUSES_USEROTPCFG432) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG433_REG_OFST   (0x6C4)             /**< (FUSES_USEROTPCFG433) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG434_REG_OFST   (0x6C8)             /**< (FUSES_USEROTPCFG434) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG435_REG_OFST   (0x6CC)             /**< (FUSES_USEROTPCFG435) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG436_REG_OFST   (0x6D0)             /**< (FUSES_USEROTPCFG436) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG437_REG_OFST   (0x6D4)             /**< (FUSES_USEROTPCFG437) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG438_REG_OFST   (0x6D8)             /**< (FUSES_USEROTPCFG438) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG439_REG_OFST   (0x6DC)             /**< (FUSES_USEROTPCFG439) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG440_REG_OFST   (0x6E0)             /**< (FUSES_USEROTPCFG440) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG441_REG_OFST   (0x6E4)             /**< (FUSES_USEROTPCFG441) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG442_REG_OFST   (0x6E8)             /**< (FUSES_USEROTPCFG442) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG443_REG_OFST   (0x6EC)             /**< (FUSES_USEROTPCFG443) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG444_REG_OFST   (0x6F0)             /**< (FUSES_USEROTPCFG444) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG445_REG_OFST   (0x6F4)             /**< (FUSES_USEROTPCFG445) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG446_REG_OFST   (0x6F8)             /**< (FUSES_USEROTPCFG446) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG447_REG_OFST   (0x6FC)             /**< (FUSES_USEROTPCFG447) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG448_REG_OFST   (0x700)             /**< (FUSES_USEROTPCFG448) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG449_REG_OFST   (0x704)             /**< (FUSES_USEROTPCFG449) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG450_REG_OFST   (0x708)             /**< (FUSES_USEROTPCFG450) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG451_REG_OFST   (0x70C)             /**< (FUSES_USEROTPCFG451) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG452_REG_OFST   (0x710)             /**< (FUSES_USEROTPCFG452) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG453_REG_OFST   (0x714)             /**< (FUSES_USEROTPCFG453) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG454_REG_OFST   (0x718)             /**< (FUSES_USEROTPCFG454) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG455_REG_OFST   (0x71C)             /**< (FUSES_USEROTPCFG455) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG456_REG_OFST   (0x720)             /**< (FUSES_USEROTPCFG456) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG457_REG_OFST   (0x724)             /**< (FUSES_USEROTPCFG457) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG458_REG_OFST   (0x728)             /**< (FUSES_USEROTPCFG458) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG459_REG_OFST   (0x72C)             /**< (FUSES_USEROTPCFG459) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG460_REG_OFST   (0x730)             /**< (FUSES_USEROTPCFG460) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG461_REG_OFST   (0x734)             /**< (FUSES_USEROTPCFG461) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG462_REG_OFST   (0x738)             /**< (FUSES_USEROTPCFG462) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG463_REG_OFST   (0x73C)             /**< (FUSES_USEROTPCFG463) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG464_REG_OFST   (0x740)             /**< (FUSES_USEROTPCFG464) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG465_REG_OFST   (0x744)             /**< (FUSES_USEROTPCFG465) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG466_REG_OFST   (0x748)             /**< (FUSES_USEROTPCFG466) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG467_REG_OFST   (0x74C)             /**< (FUSES_USEROTPCFG467) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG468_REG_OFST   (0x750)             /**< (FUSES_USEROTPCFG468) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG469_REG_OFST   (0x754)             /**< (FUSES_USEROTPCFG469) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG470_REG_OFST   (0x758)             /**< (FUSES_USEROTPCFG470) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG471_REG_OFST   (0x75C)             /**< (FUSES_USEROTPCFG471) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG472_REG_OFST   (0x760)             /**< (FUSES_USEROTPCFG472) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG473_REG_OFST   (0x764)             /**< (FUSES_USEROTPCFG473) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG474_REG_OFST   (0x768)             /**< (FUSES_USEROTPCFG474) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG475_REG_OFST   (0x76C)             /**< (FUSES_USEROTPCFG475) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG476_REG_OFST   (0x770)             /**< (FUSES_USEROTPCFG476) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG477_REG_OFST   (0x774)             /**< (FUSES_USEROTPCFG477) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG478_REG_OFST   (0x778)             /**< (FUSES_USEROTPCFG478) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG479_REG_OFST   (0x77C)             /**< (FUSES_USEROTPCFG479) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG480_REG_OFST   (0x780)             /**< (FUSES_USEROTPCFG480) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG481_REG_OFST   (0x784)             /**< (FUSES_USEROTPCFG481) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG482_REG_OFST   (0x788)             /**< (FUSES_USEROTPCFG482) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG483_REG_OFST   (0x78C)             /**< (FUSES_USEROTPCFG483) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG484_REG_OFST   (0x790)             /**< (FUSES_USEROTPCFG484) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG485_REG_OFST   (0x794)             /**< (FUSES_USEROTPCFG485) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG486_REG_OFST   (0x798)             /**< (FUSES_USEROTPCFG486) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG487_REG_OFST   (0x79C)             /**< (FUSES_USEROTPCFG487) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG488_REG_OFST   (0x7A0)             /**< (FUSES_USEROTPCFG488) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG489_REG_OFST   (0x7A4)             /**< (FUSES_USEROTPCFG489) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG490_REG_OFST   (0x7A8)             /**< (FUSES_USEROTPCFG490) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG491_REG_OFST   (0x7AC)             /**< (FUSES_USEROTPCFG491) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG492_REG_OFST   (0x7B0)             /**< (FUSES_USEROTPCFG492) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG493_REG_OFST   (0x7B4)             /**< (FUSES_USEROTPCFG493) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG494_REG_OFST   (0x7B8)             /**< (FUSES_USEROTPCFG494) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG495_REG_OFST   (0x7BC)             /**< (FUSES_USEROTPCFG495) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG496_REG_OFST   (0x7C0)             /**< (FUSES_USEROTPCFG496) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG497_REG_OFST   (0x7C4)             /**< (FUSES_USEROTPCFG497) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG498_REG_OFST   (0x7C8)             /**< (FUSES_USEROTPCFG498) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG499_REG_OFST   (0x7CC)             /**< (FUSES_USEROTPCFG499) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG500_REG_OFST   (0x7D0)             /**< (FUSES_USEROTPCFG500) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG501_REG_OFST   (0x7D4)             /**< (FUSES_USEROTPCFG501) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG502_REG_OFST   (0x7D8)             /**< (FUSES_USEROTPCFG502) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG503_REG_OFST   (0x7DC)             /**< (FUSES_USEROTPCFG503) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG504_REG_OFST   (0x7E0)             /**< (FUSES_USEROTPCFG504) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG505_REG_OFST   (0x7E4)             /**< (FUSES_USEROTPCFG505) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG506_REG_OFST   (0x7E8)             /**< (FUSES_USEROTPCFG506) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG507_REG_OFST   (0x7EC)             /**< (FUSES_USEROTPCFG507) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG508_REG_OFST   (0x7F0)             /**< (FUSES_USEROTPCFG508) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG509_REG_OFST   (0x7F4)             /**< (FUSES_USEROTPCFG509) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG510_REG_OFST   (0x7F8)             /**< (FUSES_USEROTPCFG510) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG511_REG_OFST   (0x7FC)             /**< (FUSES_USEROTPCFG511) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG512_REG_OFST   (0x800)             /**< (FUSES_USEROTPCFG512) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG513_REG_OFST   (0x804)             /**< (FUSES_USEROTPCFG513) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG514_REG_OFST   (0x808)             /**< (FUSES_USEROTPCFG514) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG515_REG_OFST   (0x80C)             /**< (FUSES_USEROTPCFG515) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG516_REG_OFST   (0x810)             /**< (FUSES_USEROTPCFG516) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG517_REG_OFST   (0x814)             /**< (FUSES_USEROTPCFG517) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG518_REG_OFST   (0x818)             /**< (FUSES_USEROTPCFG518) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG519_REG_OFST   (0x81C)             /**< (FUSES_USEROTPCFG519) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG520_REG_OFST   (0x820)             /**< (FUSES_USEROTPCFG520) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG521_REG_OFST   (0x824)             /**< (FUSES_USEROTPCFG521) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG522_REG_OFST   (0x828)             /**< (FUSES_USEROTPCFG522) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG523_REG_OFST   (0x82C)             /**< (FUSES_USEROTPCFG523) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG524_REG_OFST   (0x830)             /**< (FUSES_USEROTPCFG524) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG525_REG_OFST   (0x834)             /**< (FUSES_USEROTPCFG525) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG526_REG_OFST   (0x838)             /**< (FUSES_USEROTPCFG526) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG527_REG_OFST   (0x83C)             /**< (FUSES_USEROTPCFG527) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG528_REG_OFST   (0x840)             /**< (FUSES_USEROTPCFG528) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG529_REG_OFST   (0x844)             /**< (FUSES_USEROTPCFG529) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG530_REG_OFST   (0x848)             /**< (FUSES_USEROTPCFG530) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG531_REG_OFST   (0x84C)             /**< (FUSES_USEROTPCFG531) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG532_REG_OFST   (0x850)             /**< (FUSES_USEROTPCFG532) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG533_REG_OFST   (0x854)             /**< (FUSES_USEROTPCFG533) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG534_REG_OFST   (0x858)             /**< (FUSES_USEROTPCFG534) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG535_REG_OFST   (0x85C)             /**< (FUSES_USEROTPCFG535) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG536_REG_OFST   (0x860)             /**< (FUSES_USEROTPCFG536) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG537_REG_OFST   (0x864)             /**< (FUSES_USEROTPCFG537) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG538_REG_OFST   (0x868)             /**< (FUSES_USEROTPCFG538) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG539_REG_OFST   (0x86C)             /**< (FUSES_USEROTPCFG539) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG540_REG_OFST   (0x870)             /**< (FUSES_USEROTPCFG540) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG541_REG_OFST   (0x874)             /**< (FUSES_USEROTPCFG541) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG542_REG_OFST   (0x878)             /**< (FUSES_USEROTPCFG542) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG543_REG_OFST   (0x87C)             /**< (FUSES_USEROTPCFG543) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG544_REG_OFST   (0x880)             /**< (FUSES_USEROTPCFG544) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG545_REG_OFST   (0x884)             /**< (FUSES_USEROTPCFG545) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG546_REG_OFST   (0x888)             /**< (FUSES_USEROTPCFG546) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG547_REG_OFST   (0x88C)             /**< (FUSES_USEROTPCFG547) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG548_REG_OFST   (0x890)             /**< (FUSES_USEROTPCFG548) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG549_REG_OFST   (0x894)             /**< (FUSES_USEROTPCFG549) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG550_REG_OFST   (0x898)             /**< (FUSES_USEROTPCFG550) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG551_REG_OFST   (0x89C)             /**< (FUSES_USEROTPCFG551) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG552_REG_OFST   (0x8A0)             /**< (FUSES_USEROTPCFG552) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG553_REG_OFST   (0x8A4)             /**< (FUSES_USEROTPCFG553) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG554_REG_OFST   (0x8A8)             /**< (FUSES_USEROTPCFG554) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG555_REG_OFST   (0x8AC)             /**< (FUSES_USEROTPCFG555) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG556_REG_OFST   (0x8B0)             /**< (FUSES_USEROTPCFG556) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG557_REG_OFST   (0x8B4)             /**< (FUSES_USEROTPCFG557) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG558_REG_OFST   (0x8B8)             /**< (FUSES_USEROTPCFG558) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG559_REG_OFST   (0x8BC)             /**< (FUSES_USEROTPCFG559) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG560_REG_OFST   (0x8C0)             /**< (FUSES_USEROTPCFG560) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG561_REG_OFST   (0x8C4)             /**< (FUSES_USEROTPCFG561) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG562_REG_OFST   (0x8C8)             /**< (FUSES_USEROTPCFG562) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG563_REG_OFST   (0x8CC)             /**< (FUSES_USEROTPCFG563) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG564_REG_OFST   (0x8D0)             /**< (FUSES_USEROTPCFG564) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG565_REG_OFST   (0x8D4)             /**< (FUSES_USEROTPCFG565) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG566_REG_OFST   (0x8D8)             /**< (FUSES_USEROTPCFG566) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG567_REG_OFST   (0x8DC)             /**< (FUSES_USEROTPCFG567) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG568_REG_OFST   (0x8E0)             /**< (FUSES_USEROTPCFG568) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG569_REG_OFST   (0x8E4)             /**< (FUSES_USEROTPCFG569) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG570_REG_OFST   (0x8E8)             /**< (FUSES_USEROTPCFG570) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG571_REG_OFST   (0x8EC)             /**< (FUSES_USEROTPCFG571) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG572_REG_OFST   (0x8F0)             /**< (FUSES_USEROTPCFG572) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG573_REG_OFST   (0x8F4)             /**< (FUSES_USEROTPCFG573) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG574_REG_OFST   (0x8F8)             /**< (FUSES_USEROTPCFG574) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG575_REG_OFST   (0x8FC)             /**< (FUSES_USEROTPCFG575) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG576_REG_OFST   (0x900)             /**< (FUSES_USEROTPCFG576) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG577_REG_OFST   (0x904)             /**< (FUSES_USEROTPCFG577) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG578_REG_OFST   (0x908)             /**< (FUSES_USEROTPCFG578) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG579_REG_OFST   (0x90C)             /**< (FUSES_USEROTPCFG579) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG580_REG_OFST   (0x910)             /**< (FUSES_USEROTPCFG580) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG581_REG_OFST   (0x914)             /**< (FUSES_USEROTPCFG581) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG582_REG_OFST   (0x918)             /**< (FUSES_USEROTPCFG582) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG583_REG_OFST   (0x91C)             /**< (FUSES_USEROTPCFG583) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG584_REG_OFST   (0x920)             /**< (FUSES_USEROTPCFG584) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG585_REG_OFST   (0x924)             /**< (FUSES_USEROTPCFG585) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG586_REG_OFST   (0x928)             /**< (FUSES_USEROTPCFG586) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG587_REG_OFST   (0x92C)             /**< (FUSES_USEROTPCFG587) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG588_REG_OFST   (0x930)             /**< (FUSES_USEROTPCFG588) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG589_REG_OFST   (0x934)             /**< (FUSES_USEROTPCFG589) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG590_REG_OFST   (0x938)             /**< (FUSES_USEROTPCFG590) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG591_REG_OFST   (0x93C)             /**< (FUSES_USEROTPCFG591) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG592_REG_OFST   (0x940)             /**< (FUSES_USEROTPCFG592) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG593_REG_OFST   (0x944)             /**< (FUSES_USEROTPCFG593) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG594_REG_OFST   (0x948)             /**< (FUSES_USEROTPCFG594) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG595_REG_OFST   (0x94C)             /**< (FUSES_USEROTPCFG595) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG596_REG_OFST   (0x950)             /**< (FUSES_USEROTPCFG596) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG597_REG_OFST   (0x954)             /**< (FUSES_USEROTPCFG597) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG598_REG_OFST   (0x958)             /**< (FUSES_USEROTPCFG598) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG599_REG_OFST   (0x95C)             /**< (FUSES_USEROTPCFG599) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG600_REG_OFST   (0x960)             /**< (FUSES_USEROTPCFG600) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG601_REG_OFST   (0x964)             /**< (FUSES_USEROTPCFG601) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG602_REG_OFST   (0x968)             /**< (FUSES_USEROTPCFG602) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG603_REG_OFST   (0x96C)             /**< (FUSES_USEROTPCFG603) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG604_REG_OFST   (0x970)             /**< (FUSES_USEROTPCFG604) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG605_REG_OFST   (0x974)             /**< (FUSES_USEROTPCFG605) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG606_REG_OFST   (0x978)             /**< (FUSES_USEROTPCFG606) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG607_REG_OFST   (0x97C)             /**< (FUSES_USEROTPCFG607) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG608_REG_OFST   (0x980)             /**< (FUSES_USEROTPCFG608) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG609_REG_OFST   (0x984)             /**< (FUSES_USEROTPCFG609) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG610_REG_OFST   (0x988)             /**< (FUSES_USEROTPCFG610) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG611_REG_OFST   (0x98C)             /**< (FUSES_USEROTPCFG611) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG612_REG_OFST   (0x990)             /**< (FUSES_USEROTPCFG612) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG613_REG_OFST   (0x994)             /**< (FUSES_USEROTPCFG613) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG614_REG_OFST   (0x998)             /**< (FUSES_USEROTPCFG614) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG615_REG_OFST   (0x99C)             /**< (FUSES_USEROTPCFG615) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG616_REG_OFST   (0x9A0)             /**< (FUSES_USEROTPCFG616) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG617_REG_OFST   (0x9A4)             /**< (FUSES_USEROTPCFG617) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG618_REG_OFST   (0x9A8)             /**< (FUSES_USEROTPCFG618) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG619_REG_OFST   (0x9AC)             /**< (FUSES_USEROTPCFG619) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG620_REG_OFST   (0x9B0)             /**< (FUSES_USEROTPCFG620) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG621_REG_OFST   (0x9B4)             /**< (FUSES_USEROTPCFG621) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG622_REG_OFST   (0x9B8)             /**< (FUSES_USEROTPCFG622) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG623_REG_OFST   (0x9BC)             /**< (FUSES_USEROTPCFG623) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG624_REG_OFST   (0x9C0)             /**< (FUSES_USEROTPCFG624) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG625_REG_OFST   (0x9C4)             /**< (FUSES_USEROTPCFG625) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG626_REG_OFST   (0x9C8)             /**< (FUSES_USEROTPCFG626) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG627_REG_OFST   (0x9CC)             /**< (FUSES_USEROTPCFG627) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG628_REG_OFST   (0x9D0)             /**< (FUSES_USEROTPCFG628) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG629_REG_OFST   (0x9D4)             /**< (FUSES_USEROTPCFG629) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG630_REG_OFST   (0x9D8)             /**< (FUSES_USEROTPCFG630) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG631_REG_OFST   (0x9DC)             /**< (FUSES_USEROTPCFG631) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG632_REG_OFST   (0x9E0)             /**< (FUSES_USEROTPCFG632) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG633_REG_OFST   (0x9E4)             /**< (FUSES_USEROTPCFG633) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG634_REG_OFST   (0x9E8)             /**< (FUSES_USEROTPCFG634) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG635_REG_OFST   (0x9EC)             /**< (FUSES_USEROTPCFG635) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG636_REG_OFST   (0x9F0)             /**< (FUSES_USEROTPCFG636) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG637_REG_OFST   (0x9F4)             /**< (FUSES_USEROTPCFG637) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG638_REG_OFST   (0x9F8)             /**< (FUSES_USEROTPCFG638) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG639_REG_OFST   (0x9FC)             /**< (FUSES_USEROTPCFG639) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG640_REG_OFST   (0xA00)             /**< (FUSES_USEROTPCFG640) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG641_REG_OFST   (0xA04)             /**< (FUSES_USEROTPCFG641) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG642_REG_OFST   (0xA08)             /**< (FUSES_USEROTPCFG642) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG643_REG_OFST   (0xA0C)             /**< (FUSES_USEROTPCFG643) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG644_REG_OFST   (0xA10)             /**< (FUSES_USEROTPCFG644) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG645_REG_OFST   (0xA14)             /**< (FUSES_USEROTPCFG645) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG646_REG_OFST   (0xA18)             /**< (FUSES_USEROTPCFG646) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG647_REG_OFST   (0xA1C)             /**< (FUSES_USEROTPCFG647) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG648_REG_OFST   (0xA20)             /**< (FUSES_USEROTPCFG648) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG649_REG_OFST   (0xA24)             /**< (FUSES_USEROTPCFG649) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG650_REG_OFST   (0xA28)             /**< (FUSES_USEROTPCFG650) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG651_REG_OFST   (0xA2C)             /**< (FUSES_USEROTPCFG651) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG652_REG_OFST   (0xA30)             /**< (FUSES_USEROTPCFG652) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG653_REG_OFST   (0xA34)             /**< (FUSES_USEROTPCFG653) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG654_REG_OFST   (0xA38)             /**< (FUSES_USEROTPCFG654) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG655_REG_OFST   (0xA3C)             /**< (FUSES_USEROTPCFG655) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG656_REG_OFST   (0xA40)             /**< (FUSES_USEROTPCFG656) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG657_REG_OFST   (0xA44)             /**< (FUSES_USEROTPCFG657) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG658_REG_OFST   (0xA48)             /**< (FUSES_USEROTPCFG658) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG659_REG_OFST   (0xA4C)             /**< (FUSES_USEROTPCFG659) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG660_REG_OFST   (0xA50)             /**< (FUSES_USEROTPCFG660) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG661_REG_OFST   (0xA54)             /**< (FUSES_USEROTPCFG661) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG662_REG_OFST   (0xA58)             /**< (FUSES_USEROTPCFG662) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG663_REG_OFST   (0xA5C)             /**< (FUSES_USEROTPCFG663) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG664_REG_OFST   (0xA60)             /**< (FUSES_USEROTPCFG664) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG665_REG_OFST   (0xA64)             /**< (FUSES_USEROTPCFG665) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG666_REG_OFST   (0xA68)             /**< (FUSES_USEROTPCFG666) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG667_REG_OFST   (0xA6C)             /**< (FUSES_USEROTPCFG667) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG668_REG_OFST   (0xA70)             /**< (FUSES_USEROTPCFG668) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG669_REG_OFST   (0xA74)             /**< (FUSES_USEROTPCFG669) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG670_REG_OFST   (0xA78)             /**< (FUSES_USEROTPCFG670) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG671_REG_OFST   (0xA7C)             /**< (FUSES_USEROTPCFG671) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG672_REG_OFST   (0xA80)             /**< (FUSES_USEROTPCFG672) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG673_REG_OFST   (0xA84)             /**< (FUSES_USEROTPCFG673) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG674_REG_OFST   (0xA88)             /**< (FUSES_USEROTPCFG674) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG675_REG_OFST   (0xA8C)             /**< (FUSES_USEROTPCFG675) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG676_REG_OFST   (0xA90)             /**< (FUSES_USEROTPCFG676) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG677_REG_OFST   (0xA94)             /**< (FUSES_USEROTPCFG677) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG678_REG_OFST   (0xA98)             /**< (FUSES_USEROTPCFG678) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG679_REG_OFST   (0xA9C)             /**< (FUSES_USEROTPCFG679) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG680_REG_OFST   (0xAA0)             /**< (FUSES_USEROTPCFG680) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG681_REG_OFST   (0xAA4)             /**< (FUSES_USEROTPCFG681) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG682_REG_OFST   (0xAA8)             /**< (FUSES_USEROTPCFG682) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG683_REG_OFST   (0xAAC)             /**< (FUSES_USEROTPCFG683) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG684_REG_OFST   (0xAB0)             /**< (FUSES_USEROTPCFG684) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG685_REG_OFST   (0xAB4)             /**< (FUSES_USEROTPCFG685) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG686_REG_OFST   (0xAB8)             /**< (FUSES_USEROTPCFG686) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG687_REG_OFST   (0xABC)             /**< (FUSES_USEROTPCFG687) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG688_REG_OFST   (0xAC0)             /**< (FUSES_USEROTPCFG688) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG689_REG_OFST   (0xAC4)             /**< (FUSES_USEROTPCFG689) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG690_REG_OFST   (0xAC8)             /**< (FUSES_USEROTPCFG690) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG691_REG_OFST   (0xACC)             /**< (FUSES_USEROTPCFG691) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG692_REG_OFST   (0xAD0)             /**< (FUSES_USEROTPCFG692) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG693_REG_OFST   (0xAD4)             /**< (FUSES_USEROTPCFG693) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG694_REG_OFST   (0xAD8)             /**< (FUSES_USEROTPCFG694) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG695_REG_OFST   (0xADC)             /**< (FUSES_USEROTPCFG695) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG696_REG_OFST   (0xAE0)             /**< (FUSES_USEROTPCFG696) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG697_REG_OFST   (0xAE4)             /**< (FUSES_USEROTPCFG697) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG698_REG_OFST   (0xAE8)             /**< (FUSES_USEROTPCFG698) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG699_REG_OFST   (0xAEC)             /**< (FUSES_USEROTPCFG699) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG700_REG_OFST   (0xAF0)             /**< (FUSES_USEROTPCFG700) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG701_REG_OFST   (0xAF4)             /**< (FUSES_USEROTPCFG701) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG702_REG_OFST   (0xAF8)             /**< (FUSES_USEROTPCFG702) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG703_REG_OFST   (0xAFC)             /**< (FUSES_USEROTPCFG703) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG704_REG_OFST   (0xB00)             /**< (FUSES_USEROTPCFG704) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG705_REG_OFST   (0xB04)             /**< (FUSES_USEROTPCFG705) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG706_REG_OFST   (0xB08)             /**< (FUSES_USEROTPCFG706) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG707_REG_OFST   (0xB0C)             /**< (FUSES_USEROTPCFG707) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG708_REG_OFST   (0xB10)             /**< (FUSES_USEROTPCFG708) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG709_REG_OFST   (0xB14)             /**< (FUSES_USEROTPCFG709) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG710_REG_OFST   (0xB18)             /**< (FUSES_USEROTPCFG710) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG711_REG_OFST   (0xB1C)             /**< (FUSES_USEROTPCFG711) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG712_REG_OFST   (0xB20)             /**< (FUSES_USEROTPCFG712) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG713_REG_OFST   (0xB24)             /**< (FUSES_USEROTPCFG713) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG714_REG_OFST   (0xB28)             /**< (FUSES_USEROTPCFG714) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG715_REG_OFST   (0xB2C)             /**< (FUSES_USEROTPCFG715) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG716_REG_OFST   (0xB30)             /**< (FUSES_USEROTPCFG716) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG717_REG_OFST   (0xB34)             /**< (FUSES_USEROTPCFG717) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG718_REG_OFST   (0xB38)             /**< (FUSES_USEROTPCFG718) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG719_REG_OFST   (0xB3C)             /**< (FUSES_USEROTPCFG719) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG720_REG_OFST   (0xB40)             /**< (FUSES_USEROTPCFG720) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG721_REG_OFST   (0xB44)             /**< (FUSES_USEROTPCFG721) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG722_REG_OFST   (0xB48)             /**< (FUSES_USEROTPCFG722) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG723_REG_OFST   (0xB4C)             /**< (FUSES_USEROTPCFG723) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG724_REG_OFST   (0xB50)             /**< (FUSES_USEROTPCFG724) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG725_REG_OFST   (0xB54)             /**< (FUSES_USEROTPCFG725) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG726_REG_OFST   (0xB58)             /**< (FUSES_USEROTPCFG726) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG727_REG_OFST   (0xB5C)             /**< (FUSES_USEROTPCFG727) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG728_REG_OFST   (0xB60)             /**< (FUSES_USEROTPCFG728) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG729_REG_OFST   (0xB64)             /**< (FUSES_USEROTPCFG729) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG730_REG_OFST   (0xB68)             /**< (FUSES_USEROTPCFG730) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG731_REG_OFST   (0xB6C)             /**< (FUSES_USEROTPCFG731) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG732_REG_OFST   (0xB70)             /**< (FUSES_USEROTPCFG732) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG733_REG_OFST   (0xB74)             /**< (FUSES_USEROTPCFG733) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG734_REG_OFST   (0xB78)             /**< (FUSES_USEROTPCFG734) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG735_REG_OFST   (0xB7C)             /**< (FUSES_USEROTPCFG735) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG736_REG_OFST   (0xB80)             /**< (FUSES_USEROTPCFG736) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG737_REG_OFST   (0xB84)             /**< (FUSES_USEROTPCFG737) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG738_REG_OFST   (0xB88)             /**< (FUSES_USEROTPCFG738) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG739_REG_OFST   (0xB8C)             /**< (FUSES_USEROTPCFG739) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG740_REG_OFST   (0xB90)             /**< (FUSES_USEROTPCFG740) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG741_REG_OFST   (0xB94)             /**< (FUSES_USEROTPCFG741) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG742_REG_OFST   (0xB98)             /**< (FUSES_USEROTPCFG742) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG743_REG_OFST   (0xB9C)             /**< (FUSES_USEROTPCFG743) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG744_REG_OFST   (0xBA0)             /**< (FUSES_USEROTPCFG744) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG745_REG_OFST   (0xBA4)             /**< (FUSES_USEROTPCFG745) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG746_REG_OFST   (0xBA8)             /**< (FUSES_USEROTPCFG746) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG747_REG_OFST   (0xBAC)             /**< (FUSES_USEROTPCFG747) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG748_REG_OFST   (0xBB0)             /**< (FUSES_USEROTPCFG748) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG749_REG_OFST   (0xBB4)             /**< (FUSES_USEROTPCFG749) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG750_REG_OFST   (0xBB8)             /**< (FUSES_USEROTPCFG750) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG751_REG_OFST   (0xBBC)             /**< (FUSES_USEROTPCFG751) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG752_REG_OFST   (0xBC0)             /**< (FUSES_USEROTPCFG752) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG753_REG_OFST   (0xBC4)             /**< (FUSES_USEROTPCFG753) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG754_REG_OFST   (0xBC8)             /**< (FUSES_USEROTPCFG754) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG755_REG_OFST   (0xBCC)             /**< (FUSES_USEROTPCFG755) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG756_REG_OFST   (0xBD0)             /**< (FUSES_USEROTPCFG756) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG757_REG_OFST   (0xBD4)             /**< (FUSES_USEROTPCFG757) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG758_REG_OFST   (0xBD8)             /**< (FUSES_USEROTPCFG758) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG759_REG_OFST   (0xBDC)             /**< (FUSES_USEROTPCFG759) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG760_REG_OFST   (0xBE0)             /**< (FUSES_USEROTPCFG760) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG761_REG_OFST   (0xBE4)             /**< (FUSES_USEROTPCFG761) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG762_REG_OFST   (0xBE8)             /**< (FUSES_USEROTPCFG762) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG763_REG_OFST   (0xBEC)             /**< (FUSES_USEROTPCFG763) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG764_REG_OFST   (0xBF0)             /**< (FUSES_USEROTPCFG764) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG765_REG_OFST   (0xBF4)             /**< (FUSES_USEROTPCFG765) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG766_REG_OFST   (0xBF8)             /**< (FUSES_USEROTPCFG766) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG767_REG_OFST   (0xBFC)             /**< (FUSES_USEROTPCFG767) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG768_REG_OFST   (0xC00)             /**< (FUSES_USEROTPCFG768) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG769_REG_OFST   (0xC04)             /**< (FUSES_USEROTPCFG769) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG770_REG_OFST   (0xC08)             /**< (FUSES_USEROTPCFG770) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG771_REG_OFST   (0xC0C)             /**< (FUSES_USEROTPCFG771) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG772_REG_OFST   (0xC10)             /**< (FUSES_USEROTPCFG772) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG773_REG_OFST   (0xC14)             /**< (FUSES_USEROTPCFG773) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG774_REG_OFST   (0xC18)             /**< (FUSES_USEROTPCFG774) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG775_REG_OFST   (0xC1C)             /**< (FUSES_USEROTPCFG775) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG776_REG_OFST   (0xC20)             /**< (FUSES_USEROTPCFG776) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG777_REG_OFST   (0xC24)             /**< (FUSES_USEROTPCFG777) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG778_REG_OFST   (0xC28)             /**< (FUSES_USEROTPCFG778) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG779_REG_OFST   (0xC2C)             /**< (FUSES_USEROTPCFG779) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG780_REG_OFST   (0xC30)             /**< (FUSES_USEROTPCFG780) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG781_REG_OFST   (0xC34)             /**< (FUSES_USEROTPCFG781) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG782_REG_OFST   (0xC38)             /**< (FUSES_USEROTPCFG782) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG783_REG_OFST   (0xC3C)             /**< (FUSES_USEROTPCFG783) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG784_REG_OFST   (0xC40)             /**< (FUSES_USEROTPCFG784) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG785_REG_OFST   (0xC44)             /**< (FUSES_USEROTPCFG785) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG786_REG_OFST   (0xC48)             /**< (FUSES_USEROTPCFG786) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG787_REG_OFST   (0xC4C)             /**< (FUSES_USEROTPCFG787) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG788_REG_OFST   (0xC50)             /**< (FUSES_USEROTPCFG788) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG789_REG_OFST   (0xC54)             /**< (FUSES_USEROTPCFG789) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG790_REG_OFST   (0xC58)             /**< (FUSES_USEROTPCFG790) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG791_REG_OFST   (0xC5C)             /**< (FUSES_USEROTPCFG791) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG792_REG_OFST   (0xC60)             /**< (FUSES_USEROTPCFG792) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG793_REG_OFST   (0xC64)             /**< (FUSES_USEROTPCFG793) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG794_REG_OFST   (0xC68)             /**< (FUSES_USEROTPCFG794) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG795_REG_OFST   (0xC6C)             /**< (FUSES_USEROTPCFG795) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG796_REG_OFST   (0xC70)             /**< (FUSES_USEROTPCFG796) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG797_REG_OFST   (0xC74)             /**< (FUSES_USEROTPCFG797) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG798_REG_OFST   (0xC78)             /**< (FUSES_USEROTPCFG798) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG799_REG_OFST   (0xC7C)             /**< (FUSES_USEROTPCFG799) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG800_REG_OFST   (0xC80)             /**< (FUSES_USEROTPCFG800) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG801_REG_OFST   (0xC84)             /**< (FUSES_USEROTPCFG801) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG802_REG_OFST   (0xC88)             /**< (FUSES_USEROTPCFG802) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG803_REG_OFST   (0xC8C)             /**< (FUSES_USEROTPCFG803) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG804_REG_OFST   (0xC90)             /**< (FUSES_USEROTPCFG804) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG805_REG_OFST   (0xC94)             /**< (FUSES_USEROTPCFG805) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG806_REG_OFST   (0xC98)             /**< (FUSES_USEROTPCFG806) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG807_REG_OFST   (0xC9C)             /**< (FUSES_USEROTPCFG807) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG808_REG_OFST   (0xCA0)             /**< (FUSES_USEROTPCFG808) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG809_REG_OFST   (0xCA4)             /**< (FUSES_USEROTPCFG809) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG810_REG_OFST   (0xCA8)             /**< (FUSES_USEROTPCFG810) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG811_REG_OFST   (0xCAC)             /**< (FUSES_USEROTPCFG811) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG812_REG_OFST   (0xCB0)             /**< (FUSES_USEROTPCFG812) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG813_REG_OFST   (0xCB4)             /**< (FUSES_USEROTPCFG813) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG814_REG_OFST   (0xCB8)             /**< (FUSES_USEROTPCFG814) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG815_REG_OFST   (0xCBC)             /**< (FUSES_USEROTPCFG815) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG816_REG_OFST   (0xCC0)             /**< (FUSES_USEROTPCFG816) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG817_REG_OFST   (0xCC4)             /**< (FUSES_USEROTPCFG817) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG818_REG_OFST   (0xCC8)             /**< (FUSES_USEROTPCFG818) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG819_REG_OFST   (0xCCC)             /**< (FUSES_USEROTPCFG819) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG820_REG_OFST   (0xCD0)             /**< (FUSES_USEROTPCFG820) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG821_REG_OFST   (0xCD4)             /**< (FUSES_USEROTPCFG821) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG822_REG_OFST   (0xCD8)             /**< (FUSES_USEROTPCFG822) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG823_REG_OFST   (0xCDC)             /**< (FUSES_USEROTPCFG823) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG824_REG_OFST   (0xCE0)             /**< (FUSES_USEROTPCFG824) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG825_REG_OFST   (0xCE4)             /**< (FUSES_USEROTPCFG825) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG826_REG_OFST   (0xCE8)             /**< (FUSES_USEROTPCFG826) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG827_REG_OFST   (0xCEC)             /**< (FUSES_USEROTPCFG827) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG828_REG_OFST   (0xCF0)             /**< (FUSES_USEROTPCFG828) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG829_REG_OFST   (0xCF4)             /**< (FUSES_USEROTPCFG829) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG830_REG_OFST   (0xCF8)             /**< (FUSES_USEROTPCFG830) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG831_REG_OFST   (0xCFC)             /**< (FUSES_USEROTPCFG831) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG832_REG_OFST   (0xD00)             /**< (FUSES_USEROTPCFG832) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG833_REG_OFST   (0xD04)             /**< (FUSES_USEROTPCFG833) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG834_REG_OFST   (0xD08)             /**< (FUSES_USEROTPCFG834) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG835_REG_OFST   (0xD0C)             /**< (FUSES_USEROTPCFG835) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG836_REG_OFST   (0xD10)             /**< (FUSES_USEROTPCFG836) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG837_REG_OFST   (0xD14)             /**< (FUSES_USEROTPCFG837) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG838_REG_OFST   (0xD18)             /**< (FUSES_USEROTPCFG838) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG839_REG_OFST   (0xD1C)             /**< (FUSES_USEROTPCFG839) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG840_REG_OFST   (0xD20)             /**< (FUSES_USEROTPCFG840) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG841_REG_OFST   (0xD24)             /**< (FUSES_USEROTPCFG841) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG842_REG_OFST   (0xD28)             /**< (FUSES_USEROTPCFG842) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG843_REG_OFST   (0xD2C)             /**< (FUSES_USEROTPCFG843) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG844_REG_OFST   (0xD30)             /**< (FUSES_USEROTPCFG844) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG845_REG_OFST   (0xD34)             /**< (FUSES_USEROTPCFG845) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG846_REG_OFST   (0xD38)             /**< (FUSES_USEROTPCFG846) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG847_REG_OFST   (0xD3C)             /**< (FUSES_USEROTPCFG847) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG848_REG_OFST   (0xD40)             /**< (FUSES_USEROTPCFG848) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG849_REG_OFST   (0xD44)             /**< (FUSES_USEROTPCFG849) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG850_REG_OFST   (0xD48)             /**< (FUSES_USEROTPCFG850) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG851_REG_OFST   (0xD4C)             /**< (FUSES_USEROTPCFG851) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG852_REG_OFST   (0xD50)             /**< (FUSES_USEROTPCFG852) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG853_REG_OFST   (0xD54)             /**< (FUSES_USEROTPCFG853) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG854_REG_OFST   (0xD58)             /**< (FUSES_USEROTPCFG854) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG855_REG_OFST   (0xD5C)             /**< (FUSES_USEROTPCFG855) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG856_REG_OFST   (0xD60)             /**< (FUSES_USEROTPCFG856) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG857_REG_OFST   (0xD64)             /**< (FUSES_USEROTPCFG857) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG858_REG_OFST   (0xD68)             /**< (FUSES_USEROTPCFG858) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG859_REG_OFST   (0xD6C)             /**< (FUSES_USEROTPCFG859) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG860_REG_OFST   (0xD70)             /**< (FUSES_USEROTPCFG860) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG861_REG_OFST   (0xD74)             /**< (FUSES_USEROTPCFG861) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG862_REG_OFST   (0xD78)             /**< (FUSES_USEROTPCFG862) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG863_REG_OFST   (0xD7C)             /**< (FUSES_USEROTPCFG863) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG864_REG_OFST   (0xD80)             /**< (FUSES_USEROTPCFG864) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG865_REG_OFST   (0xD84)             /**< (FUSES_USEROTPCFG865) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG866_REG_OFST   (0xD88)             /**< (FUSES_USEROTPCFG866) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG867_REG_OFST   (0xD8C)             /**< (FUSES_USEROTPCFG867) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG868_REG_OFST   (0xD90)             /**< (FUSES_USEROTPCFG868) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG869_REG_OFST   (0xD94)             /**< (FUSES_USEROTPCFG869) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG870_REG_OFST   (0xD98)             /**< (FUSES_USEROTPCFG870) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG871_REG_OFST   (0xD9C)             /**< (FUSES_USEROTPCFG871) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG872_REG_OFST   (0xDA0)             /**< (FUSES_USEROTPCFG872) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG873_REG_OFST   (0xDA4)             /**< (FUSES_USEROTPCFG873) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG874_REG_OFST   (0xDA8)             /**< (FUSES_USEROTPCFG874) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG875_REG_OFST   (0xDAC)             /**< (FUSES_USEROTPCFG875) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG876_REG_OFST   (0xDB0)             /**< (FUSES_USEROTPCFG876) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG877_REG_OFST   (0xDB4)             /**< (FUSES_USEROTPCFG877) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG878_REG_OFST   (0xDB8)             /**< (FUSES_USEROTPCFG878) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG879_REG_OFST   (0xDBC)             /**< (FUSES_USEROTPCFG879) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG880_REG_OFST   (0xDC0)             /**< (FUSES_USEROTPCFG880) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG881_REG_OFST   (0xDC4)             /**< (FUSES_USEROTPCFG881) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG882_REG_OFST   (0xDC8)             /**< (FUSES_USEROTPCFG882) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG883_REG_OFST   (0xDCC)             /**< (FUSES_USEROTPCFG883) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG884_REG_OFST   (0xDD0)             /**< (FUSES_USEROTPCFG884) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG885_REG_OFST   (0xDD4)             /**< (FUSES_USEROTPCFG885) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG886_REG_OFST   (0xDD8)             /**< (FUSES_USEROTPCFG886) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG887_REG_OFST   (0xDDC)             /**< (FUSES_USEROTPCFG887) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG888_REG_OFST   (0xDE0)             /**< (FUSES_USEROTPCFG888) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG889_REG_OFST   (0xDE4)             /**< (FUSES_USEROTPCFG889) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG890_REG_OFST   (0xDE8)             /**< (FUSES_USEROTPCFG890) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG891_REG_OFST   (0xDEC)             /**< (FUSES_USEROTPCFG891) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG892_REG_OFST   (0xDF0)             /**< (FUSES_USEROTPCFG892) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG893_REG_OFST   (0xDF4)             /**< (FUSES_USEROTPCFG893) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG894_REG_OFST   (0xDF8)             /**< (FUSES_USEROTPCFG894) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG895_REG_OFST   (0xDFC)             /**< (FUSES_USEROTPCFG895) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG896_REG_OFST   (0xE00)             /**< (FUSES_USEROTPCFG896) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG897_REG_OFST   (0xE04)             /**< (FUSES_USEROTPCFG897) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG898_REG_OFST   (0xE08)             /**< (FUSES_USEROTPCFG898) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG899_REG_OFST   (0xE0C)             /**< (FUSES_USEROTPCFG899) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG900_REG_OFST   (0xE10)             /**< (FUSES_USEROTPCFG900) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG901_REG_OFST   (0xE14)             /**< (FUSES_USEROTPCFG901) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG902_REG_OFST   (0xE18)             /**< (FUSES_USEROTPCFG902) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG903_REG_OFST   (0xE1C)             /**< (FUSES_USEROTPCFG903) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG904_REG_OFST   (0xE20)             /**< (FUSES_USEROTPCFG904) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG905_REG_OFST   (0xE24)             /**< (FUSES_USEROTPCFG905) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG906_REG_OFST   (0xE28)             /**< (FUSES_USEROTPCFG906) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG907_REG_OFST   (0xE2C)             /**< (FUSES_USEROTPCFG907) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG908_REG_OFST   (0xE30)             /**< (FUSES_USEROTPCFG908) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG909_REG_OFST   (0xE34)             /**< (FUSES_USEROTPCFG909) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG910_REG_OFST   (0xE38)             /**< (FUSES_USEROTPCFG910) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG911_REG_OFST   (0xE3C)             /**< (FUSES_USEROTPCFG911) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG912_REG_OFST   (0xE40)             /**< (FUSES_USEROTPCFG912) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG913_REG_OFST   (0xE44)             /**< (FUSES_USEROTPCFG913) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG914_REG_OFST   (0xE48)             /**< (FUSES_USEROTPCFG914) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG915_REG_OFST   (0xE4C)             /**< (FUSES_USEROTPCFG915) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG916_REG_OFST   (0xE50)             /**< (FUSES_USEROTPCFG916) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG917_REG_OFST   (0xE54)             /**< (FUSES_USEROTPCFG917) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG918_REG_OFST   (0xE58)             /**< (FUSES_USEROTPCFG918) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG919_REG_OFST   (0xE5C)             /**< (FUSES_USEROTPCFG919) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG920_REG_OFST   (0xE60)             /**< (FUSES_USEROTPCFG920) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG921_REG_OFST   (0xE64)             /**< (FUSES_USEROTPCFG921) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG922_REG_OFST   (0xE68)             /**< (FUSES_USEROTPCFG922) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG923_REG_OFST   (0xE6C)             /**< (FUSES_USEROTPCFG923) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG924_REG_OFST   (0xE70)             /**< (FUSES_USEROTPCFG924) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG925_REG_OFST   (0xE74)             /**< (FUSES_USEROTPCFG925) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG926_REG_OFST   (0xE78)             /**< (FUSES_USEROTPCFG926) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG927_REG_OFST   (0xE7C)             /**< (FUSES_USEROTPCFG927) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG928_REG_OFST   (0xE80)             /**< (FUSES_USEROTPCFG928) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG929_REG_OFST   (0xE84)             /**< (FUSES_USEROTPCFG929) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG930_REG_OFST   (0xE88)             /**< (FUSES_USEROTPCFG930) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG931_REG_OFST   (0xE8C)             /**< (FUSES_USEROTPCFG931) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG932_REG_OFST   (0xE90)             /**< (FUSES_USEROTPCFG932) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG933_REG_OFST   (0xE94)             /**< (FUSES_USEROTPCFG933) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG934_REG_OFST   (0xE98)             /**< (FUSES_USEROTPCFG934) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG935_REG_OFST   (0xE9C)             /**< (FUSES_USEROTPCFG935) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG936_REG_OFST   (0xEA0)             /**< (FUSES_USEROTPCFG936) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG937_REG_OFST   (0xEA4)             /**< (FUSES_USEROTPCFG937) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG938_REG_OFST   (0xEA8)             /**< (FUSES_USEROTPCFG938) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG939_REG_OFST   (0xEAC)             /**< (FUSES_USEROTPCFG939) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG940_REG_OFST   (0xEB0)             /**< (FUSES_USEROTPCFG940) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG941_REG_OFST   (0xEB4)             /**< (FUSES_USEROTPCFG941) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG942_REG_OFST   (0xEB8)             /**< (FUSES_USEROTPCFG942) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG943_REG_OFST   (0xEBC)             /**< (FUSES_USEROTPCFG943) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG944_REG_OFST   (0xEC0)             /**< (FUSES_USEROTPCFG944) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG945_REG_OFST   (0xEC4)             /**< (FUSES_USEROTPCFG945) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG946_REG_OFST   (0xEC8)             /**< (FUSES_USEROTPCFG946) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG947_REG_OFST   (0xECC)             /**< (FUSES_USEROTPCFG947) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG948_REG_OFST   (0xED0)             /**< (FUSES_USEROTPCFG948) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG949_REG_OFST   (0xED4)             /**< (FUSES_USEROTPCFG949) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG950_REG_OFST   (0xED8)             /**< (FUSES_USEROTPCFG950) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG951_REG_OFST   (0xEDC)             /**< (FUSES_USEROTPCFG951) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG952_REG_OFST   (0xEE0)             /**< (FUSES_USEROTPCFG952) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG953_REG_OFST   (0xEE4)             /**< (FUSES_USEROTPCFG953) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG954_REG_OFST   (0xEE8)             /**< (FUSES_USEROTPCFG954) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG955_REG_OFST   (0xEEC)             /**< (FUSES_USEROTPCFG955) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG956_REG_OFST   (0xEF0)             /**< (FUSES_USEROTPCFG956) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG957_REG_OFST   (0xEF4)             /**< (FUSES_USEROTPCFG957) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG958_REG_OFST   (0xEF8)             /**< (FUSES_USEROTPCFG958) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG959_REG_OFST   (0xEFC)             /**< (FUSES_USEROTPCFG959) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG960_REG_OFST   (0xF00)             /**< (FUSES_USEROTPCFG960) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG961_REG_OFST   (0xF04)             /**< (FUSES_USEROTPCFG961) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG962_REG_OFST   (0xF08)             /**< (FUSES_USEROTPCFG962) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG963_REG_OFST   (0xF0C)             /**< (FUSES_USEROTPCFG963) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG964_REG_OFST   (0xF10)             /**< (FUSES_USEROTPCFG964) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG965_REG_OFST   (0xF14)             /**< (FUSES_USEROTPCFG965) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG966_REG_OFST   (0xF18)             /**< (FUSES_USEROTPCFG966) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG967_REG_OFST   (0xF1C)             /**< (FUSES_USEROTPCFG967) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG968_REG_OFST   (0xF20)             /**< (FUSES_USEROTPCFG968) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG969_REG_OFST   (0xF24)             /**< (FUSES_USEROTPCFG969) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG970_REG_OFST   (0xF28)             /**< (FUSES_USEROTPCFG970) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG971_REG_OFST   (0xF2C)             /**< (FUSES_USEROTPCFG971) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG972_REG_OFST   (0xF30)             /**< (FUSES_USEROTPCFG972) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG973_REG_OFST   (0xF34)             /**< (FUSES_USEROTPCFG973) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG974_REG_OFST   (0xF38)             /**< (FUSES_USEROTPCFG974) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG975_REG_OFST   (0xF3C)             /**< (FUSES_USEROTPCFG975) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG976_REG_OFST   (0xF40)             /**< (FUSES_USEROTPCFG976) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG977_REG_OFST   (0xF44)             /**< (FUSES_USEROTPCFG977) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG978_REG_OFST   (0xF48)             /**< (FUSES_USEROTPCFG978) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG979_REG_OFST   (0xF4C)             /**< (FUSES_USEROTPCFG979) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG980_REG_OFST   (0xF50)             /**< (FUSES_USEROTPCFG980) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG981_REG_OFST   (0xF54)             /**< (FUSES_USEROTPCFG981) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG982_REG_OFST   (0xF58)             /**< (FUSES_USEROTPCFG982) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG983_REG_OFST   (0xF5C)             /**< (FUSES_USEROTPCFG983) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG984_REG_OFST   (0xF60)             /**< (FUSES_USEROTPCFG984) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG985_REG_OFST   (0xF64)             /**< (FUSES_USEROTPCFG985) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG986_REG_OFST   (0xF68)             /**< (FUSES_USEROTPCFG986) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG987_REG_OFST   (0xF6C)             /**< (FUSES_USEROTPCFG987) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG988_REG_OFST   (0xF70)             /**< (FUSES_USEROTPCFG988) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG989_REG_OFST   (0xF74)             /**< (FUSES_USEROTPCFG989) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG990_REG_OFST   (0xF78)             /**< (FUSES_USEROTPCFG990) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG991_REG_OFST   (0xF7C)             /**< (FUSES_USEROTPCFG991) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG992_REG_OFST   (0xF80)             /**< (FUSES_USEROTPCFG992) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG993_REG_OFST   (0xF84)             /**< (FUSES_USEROTPCFG993) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG994_REG_OFST   (0xF88)             /**< (FUSES_USEROTPCFG994) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG995_REG_OFST   (0xF8C)             /**< (FUSES_USEROTPCFG995) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG996_REG_OFST   (0xF90)             /**< (FUSES_USEROTPCFG996) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG997_REG_OFST   (0xF94)             /**< (FUSES_USEROTPCFG997) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG998_REG_OFST   (0xF98)             /**< (FUSES_USEROTPCFG998) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG999_REG_OFST   (0xF9C)             /**< (FUSES_USEROTPCFG999) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1000_REG_OFST  (0xFA0)             /**< (FUSES_USEROTPCFG1000) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1001_REG_OFST  (0xFA4)             /**< (FUSES_USEROTPCFG1001) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1002_REG_OFST  (0xFA8)             /**< (FUSES_USEROTPCFG1002) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1003_REG_OFST  (0xFAC)             /**< (FUSES_USEROTPCFG1003) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1004_REG_OFST  (0xFB0)             /**< (FUSES_USEROTPCFG1004) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1005_REG_OFST  (0xFB4)             /**< (FUSES_USEROTPCFG1005) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1006_REG_OFST  (0xFB8)             /**< (FUSES_USEROTPCFG1006) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1007_REG_OFST  (0xFBC)             /**< (FUSES_USEROTPCFG1007) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1008_REG_OFST  (0xFC0)             /**< (FUSES_USEROTPCFG1008) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1009_REG_OFST  (0xFC4)             /**< (FUSES_USEROTPCFG1009) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1010_REG_OFST  (0xFC8)             /**< (FUSES_USEROTPCFG1010) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1011_REG_OFST  (0xFCC)             /**< (FUSES_USEROTPCFG1011) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1012_REG_OFST  (0xFD0)             /**< (FUSES_USEROTPCFG1012) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1013_REG_OFST  (0xFD4)             /**< (FUSES_USEROTPCFG1013) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1014_REG_OFST  (0xFD8)             /**< (FUSES_USEROTPCFG1014) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1015_REG_OFST  (0xFDC)             /**< (FUSES_USEROTPCFG1015) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1016_REG_OFST  (0xFE0)             /**< (FUSES_USEROTPCFG1016) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1017_REG_OFST  (0xFE4)             /**< (FUSES_USEROTPCFG1017) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1018_REG_OFST  (0xFE8)             /**< (FUSES_USEROTPCFG1018) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1019_REG_OFST  (0xFEC)             /**< (FUSES_USEROTPCFG1019) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1020_REG_OFST  (0xFF0)             /**< (FUSES_USEROTPCFG1020) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1021_REG_OFST  (0xFF4)             /**< (FUSES_USEROTPCFG1021) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1022_REG_OFST  (0xFF8)             /**< (FUSES_USEROTPCFG1022) Dummy register for USEROTP segment Offset */
#define FUSES_USEROTPCFG1023_REG_OFST  (0xFFC)             /**< (FUSES_USEROTPCFG1023) Dummy register for USEROTP segment Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief FUSES_BOOTCFG1 register API structure */
typedef struct
{  /* Defines FUSE parameters */
  __IO  uint32_t                       FUSES_BLDRCFG;      /**< Offset: 0x00 (R/W  32) Bootloader Configuration */
  __IO  uint32_t                       FUSES_BROM_BSEQ;    /**< Offset: 0x04 (R/W  32) Boot Configuraiton Page Sequence Number */
  __IO  uint32_t                       FUSES_BFM_CHK_TABLEPTR; /**< Offset: 0x08 (R/W  32) BFM CRC Table Pointer */
  __I   uint8_t                        Reserved1[0x74];
  __IO  uint32_t                       FUSES_KEYVAL_TZ0_CE_ALL[4]; /**< Offset: 0x80 (R/W  32) Chip Erase Key for TZ0_ALL */
  __IO  uint32_t                       FUSES_CELOCK_TZ0_CE_ALL[4]; /**< Offset: 0x90 (R/W  32) Chip Erase Lock for TZ0_ALL */
  __IO  uint32_t                       FUSES_KEYVAL_CRCCMD[4]; /**< Offset: 0xA0 (R/W  32) CRC Access Key */
  __IO  uint32_t                       FUSES_KEYCONFIG_CRCCMD[4]; /**< Offset: 0xB0 (R/W  32) CRC Access Key Configuration */
  __IO  uint32_t                       FUSES_KEYVAL_HOSTDALELEV[4]; /**< Offset: 0xC0 (R/W  32) Host Authenticated DAL Elevation Key */
  __IO  uint32_t                       FUSES_KEYCONFIG_HOSTDALELEV[4]; /**< Offset: 0xD0 (R/W  32) Host Authenticated DAL Elevation Key Configuration */
  __IO  uint32_t                       FUSES_ROM_CTRLA;    /**< Offset: 0xE0 (R/W  32) ROM CTRLA Settings  (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_FCR_CTRLA;    /**< Offset: 0xE4 (R/W  32) FCR CTRLA Settings (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_RPMU_VREGCTRL; /**< Offset: 0xE8 (R/W  32) RPMU VREGCTRL Settings (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_PLL0_CTRL;    /**< Offset: 0xEC (R/W  32) PLL0 CTRL Settings (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_PLL0_FBDIV;   /**< Offset: 0xF0 (R/W  32) PLL0 FBDIV Settings (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_PLL0_REFDIV;  /**< Offset: 0xF4 (R/W  32) PLL0 REFDIV Settings (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_PLL0_POSTDIVA; /**< Offset: 0xF8 (R/W  32) PLL0 POSTDIVA Settings (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_MCLK_CLKDIV1; /**< Offset: 0xFC (R/W  32) MCLK CLKDIV1 Settings (BROM_PLLEN must be set) */
  __IO  uint32_t                       FUSES_GCLK_GENCTRL0; /**< Offset: 0x100 (R/W  32) GCLK GENCTRL0 Settings (BROM_PLLEN must be set) */
  __I   uint8_t                        Reserved2[0x0C];
  __IO  uint32_t                       FUSES_BROM_BOOTCFGCRC[4]; /**< Offset: 0x110 (R/W  32) Boot Configuraiton Page CRC */
  __IO  uint32_t                       FUSES_BROM_PAGEEND; /**< Offset: 0x120 (R/W  32) Page End Marker for Verified Data */
} fuses_bootcfg1_registers_t;

/** \brief FUSES_CALOTP register API structure */
typedef struct
{  /* Defines FUSE parameters */
  __I   uint8_t                        Reserved1[0x180];
  __I   uint32_t                       FUSES_FCCFG64;      /**< Offset: 0x180 (R/   32) PTC Calibration */
  __I   uint32_t                       FUSES_FCCFG65;      /**< Offset: 0x184 (R/   32) ADC Calibration */
  __I   uint32_t                       FUSES_FCCFG66;      /**< Offset: 0x188 (R/   32) Comparator Calibration */
  __I   uint8_t                        Reserved2[0x14];
  __I   uint32_t                       FUSES_FCCFG72;      /**< Offset: 0x1A0 (R/   32) MAC ID (31 through 0) */
  __I   uint32_t                       FUSES_FCCFG73;      /**< Offset: 0x1A4 (R/   32) MAC ID (47 through 32) */
  __I   uint8_t                        Reserved3[0x38];
  __I   uint32_t                       FUSES_FCCFG_UNIQID[4]; /**< Offset: 0x1E0 (R/   32) Factory programed Unique ID */
} fuses_calotp_registers_t;

/** \brief FUSES_DALCFG register API structure */
typedef struct
{  /* Defines FUSE parameters */
  __IO  uint32_t                       FUSES_DAL;          /**< Offset: 0x00 (R/W  32) Debug Access Level */
} fuses_dalcfg_registers_t;

/** \brief FUSES_USERCFG1 register API structure */
typedef struct
{  /* Defines FUSE parameters */
  __IO  uint32_t                       FUSES_FSEQ;         /**< Offset: 0x00 (R/W  32) Flash Sequence Number */
  __I   uint8_t                        Reserved1[0x1C];
  __IO  uint32_t                       FUSES_AFSEQ;        /**< Offset: 0x20 (R/W  32) Flash Alternate Sequence Number */
  __I   uint8_t                        Reserved2[0x1C];
  __IO  uint32_t                       FUSES_FUCFG0;       /**< Offset: 0x40 (R/W  32) WDT Configuration */
  __IO  uint32_t                       FUSES_FUCFG1;       /**< Offset: 0x44 (R/W  32) User Configuration 1 (System Bus Configuration) */
  __IO  uint32_t                       FUSES_FUCFG2;       /**< Offset: 0x48 (R/W  32) User Configuration 2 (Deep Sleep SMOR Configuration) */
  __IO  uint32_t                       FUSES_FUCFG3;       /**< Offset: 0x4C (R/W  32) User Configuration 2 (SMOR Configuration) */
  __I   uint8_t                        Reserved3[0x04];
  __IO  uint32_t                       FUSES_FUCFG5;       /**< Offset: 0x54 (R/W  32) User Configuration 5 (VREG Charge Pump Configuration) */
  __IO  uint32_t                       FUSES_FUCFG6;       /**< Offset: 0x58 (R/W  32) User Configuration 6 (FCR ECCCTRL Configuration) */
  __IO  uint32_t                       FUSES_FUCFG7;       /**< Offset: 0x5C (R/W  32) User Configuration 7 (FCR CTRLB Configuration) */
  __IO  uint32_t                       FUSES_FUCFG8;       /**< Offset: 0x60 (R/W  32) User Configuration 8 (FCW CWP Configuration) */
  __IO  uint32_t                       FUSES_FUCFG9;       /**< Offset: 0x64 (R/W  32) User Configuration 9 (RAM BISR and ECC Configuraiton) */
  __I   uint8_t                        Reserved4[0x18];
  __IO  uint32_t                       FUSES_FUCFG16;      /**< Offset: 0x80 (R/W  32) User Configuration 16 (HSM Firmware Metadata 0 Address) */
  __I   uint8_t                        Reserved5[0x1C];
  __IO  uint32_t                       FUSES_FUCFG24;      /**< Offset: 0xA0 (R/W  32) User Configuration 24 (HSM Firmware Metadata 1 Address) */
} fuses_usercfg1_registers_t;

/** \brief FUSES_USEROTP1 register API structure */
typedef struct
{  /* Defines FUSE parameters */
  __IO  uint32_t                       FUSES_USEROTPCFG[1024]; /**< Offset: 0x00 (R/W  32) Dummy register for USEROTP segment */
} fuses_userotp1_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CZCA90_FUSES_COMPONENT_H_ */
