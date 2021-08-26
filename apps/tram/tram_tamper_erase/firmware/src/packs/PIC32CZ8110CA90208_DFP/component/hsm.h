/**
 * \brief Component description for HSM
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
#ifndef _PIC32CZCA90_HSM_COMPONENT_H_
#define _PIC32CZCA90_HSM_COMPONENT_H_

/* ************************************************************************** */
/*   SOFTWARE API DEFINITION FOR HSM                                          */
/* ************************************************************************** */

/* -------- HSM_CTRLA : (HSM Offset: 0x00) (R/W 32) CONTROL REGISTER A -------- */
#define HSM_CTRLA_RESETVALUE                  _U_(0x00)                                            /**<  (HSM_CTRLA) CONTROL REGISTER A  Reset Value */

#define HSM_CTRLA_ENABLE_Pos                  _U_(1)                                               /**< (HSM_CTRLA) Clock Enable bit Position */
#define HSM_CTRLA_ENABLE_Msk                  (_U_(0x1) << HSM_CTRLA_ENABLE_Pos)                   /**< (HSM_CTRLA) Clock Enable bit Mask */
#define HSM_CTRLA_ENABLE(value)               (HSM_CTRLA_ENABLE_Msk & ((value) << HSM_CTRLA_ENABLE_Pos))
#define HSM_CTRLA_PRIV_Pos                    _U_(2)                                               /**< (HSM_CTRLA) Privileged Access Only bit Position */
#define HSM_CTRLA_PRIV_Msk                    (_U_(0x1) << HSM_CTRLA_PRIV_Pos)                     /**< (HSM_CTRLA) Privileged Access Only bit Mask */
#define HSM_CTRLA_PRIV(value)                 (HSM_CTRLA_PRIV_Msk & ((value) << HSM_CTRLA_PRIV_Pos))
#define HSM_CTRLA_RUNSTDBY_Pos                _U_(6)                                               /**< (HSM_CTRLA) Run In Standby bit Position */
#define HSM_CTRLA_RUNSTDBY_Msk                (_U_(0x1) << HSM_CTRLA_RUNSTDBY_Pos)                 /**< (HSM_CTRLA) Run In Standby bit Mask */
#define HSM_CTRLA_RUNSTDBY(value)             (HSM_CTRLA_RUNSTDBY_Msk & ((value) << HSM_CTRLA_RUNSTDBY_Pos))
#define HSM_CTRLA_Msk                         _U_(0x00000046)                                      /**< (HSM_CTRLA) Register Mask  */


/* -------- HSM_CTRLB : (HSM Offset: 0x04) (R/W 32) CONTROL REGISTER B -------- */
#define HSM_CTRLB_RESETVALUE                  _U_(0x00)                                            /**<  (HSM_CTRLB) CONTROL REGISTER B  Reset Value */

#define HSM_CTRLB_CANCEL_Pos                  _U_(0)                                               /**< (HSM_CTRLB) Cancel Command Position */
#define HSM_CTRLB_CANCEL_Msk                  (_U_(0x1) << HSM_CTRLB_CANCEL_Pos)                   /**< (HSM_CTRLB) Cancel Command Mask */
#define HSM_CTRLB_CANCEL(value)               (HSM_CTRLB_CANCEL_Msk & ((value) << HSM_CTRLB_CANCEL_Pos))
#define HSM_CTRLB_Msk                         _U_(0x00000001)                                      /**< (HSM_CTRLB) Register Mask  */


/* -------- HSM_INTENCLR : (HSM Offset: 0x08) (R/W 32) INTERRUPT ENABLE CLEAR REGISTER -------- */
#define HSM_INTENCLR_RESETVALUE               _U_(0x00)                                            /**<  (HSM_INTENCLR) INTERRUPT ENABLE CLEAR REGISTER  Reset Value */

#define HSM_INTENCLR_ERROR_Pos                _U_(0)                                               /**< (HSM_INTENCLR) Error Interrupt Enable Position */
#define HSM_INTENCLR_ERROR_Msk                (_U_(0x1) << HSM_INTENCLR_ERROR_Pos)                 /**< (HSM_INTENCLR) Error Interrupt Enable Mask */
#define HSM_INTENCLR_ERROR(value)             (HSM_INTENCLR_ERROR_Msk & ((value) << HSM_INTENCLR_ERROR_Pos))
#define HSM_INTENCLR_TAMPER_Pos               _U_(1)                                               /**< (HSM_INTENCLR) Tamper Interrupt Enable Position */
#define HSM_INTENCLR_TAMPER_Msk               (_U_(0x1) << HSM_INTENCLR_TAMPER_Pos)                /**< (HSM_INTENCLR) Tamper Interrupt Enable Mask */
#define HSM_INTENCLR_TAMPER(value)            (HSM_INTENCLR_TAMPER_Msk & ((value) << HSM_INTENCLR_TAMPER_Pos))
#define HSM_INTENCLR_Msk                      _U_(0x00000003)                                      /**< (HSM_INTENCLR) Register Mask  */


/* -------- HSM_INTENSET : (HSM Offset: 0x0C) (R/W 32) INTERRUPT ENABLE SET -------- */
#define HSM_INTENSET_RESETVALUE               _U_(0x00)                                            /**<  (HSM_INTENSET) INTERRUPT ENABLE SET  Reset Value */

#define HSM_INTENSET_ERROR_Pos                _U_(0)                                               /**< (HSM_INTENSET) Error Interrupt Enable Position */
#define HSM_INTENSET_ERROR_Msk                (_U_(0x1) << HSM_INTENSET_ERROR_Pos)                 /**< (HSM_INTENSET) Error Interrupt Enable Mask */
#define HSM_INTENSET_ERROR(value)             (HSM_INTENSET_ERROR_Msk & ((value) << HSM_INTENSET_ERROR_Pos))
#define HSM_INTENSET_TAMPER_Pos               _U_(1)                                               /**< (HSM_INTENSET) Tamper Interrupt Enable Position */
#define HSM_INTENSET_TAMPER_Msk               (_U_(0x1) << HSM_INTENSET_TAMPER_Pos)                /**< (HSM_INTENSET) Tamper Interrupt Enable Mask */
#define HSM_INTENSET_TAMPER(value)            (HSM_INTENSET_TAMPER_Msk & ((value) << HSM_INTENSET_TAMPER_Pos))
#define HSM_INTENSET_Msk                      _U_(0x00000003)                                      /**< (HSM_INTENSET) Register Mask  */


/* -------- HSM_INTFLAG : (HSM Offset: 0x10) (R/W 32) INTERRUPT FLAG -------- */
#define HSM_INTFLAG_RESETVALUE                _U_(0x00)                                            /**<  (HSM_INTFLAG) INTERRUPT FLAG  Reset Value */

#define HSM_INTFLAG_ERROR_Pos                 _U_(0)                                               /**< (HSM_INTFLAG) Error Interrupt Flag Position */
#define HSM_INTFLAG_ERROR_Msk                 (_U_(0x1) << HSM_INTFLAG_ERROR_Pos)                  /**< (HSM_INTFLAG) Error Interrupt Flag Mask */
#define HSM_INTFLAG_ERROR(value)              (HSM_INTFLAG_ERROR_Msk & ((value) << HSM_INTFLAG_ERROR_Pos))
#define HSM_INTFLAG_TAMPER_Pos                _U_(1)                                               /**< (HSM_INTFLAG) Tamper Interrupt Flag Position */
#define HSM_INTFLAG_TAMPER_Msk                (_U_(0x1) << HSM_INTFLAG_TAMPER_Pos)                 /**< (HSM_INTFLAG) Tamper Interrupt Flag Mask */
#define HSM_INTFLAG_TAMPER(value)             (HSM_INTFLAG_TAMPER_Msk & ((value) << HSM_INTFLAG_TAMPER_Pos))
#define HSM_INTFLAG_Msk                       _U_(0x00000003)                                      /**< (HSM_INTFLAG) Register Mask  */


/* -------- HSM_STATUS : (HSM Offset: 0x14) (R/W 32) STATUS -------- */
#define HSM_STATUS_RESETVALUE                 _U_(0x00)                                            /**<  (HSM_STATUS) STATUS  Reset Value */

#define HSM_STATUS_BUSY_Pos                   _U_(0)                                               /**< (HSM_STATUS) HSM CPU BUSY Position */
#define HSM_STATUS_BUSY_Msk                   (_U_(0x1) << HSM_STATUS_BUSY_Pos)                    /**< (HSM_STATUS) HSM CPU BUSY Mask */
#define HSM_STATUS_BUSY(value)                (HSM_STATUS_BUSY_Msk & ((value) << HSM_STATUS_BUSY_Pos))
#define HSM_STATUS_LKUP_Pos                   _U_(1)                                               /**< (HSM_STATUS) HSM CPU LOCKUP Position */
#define HSM_STATUS_LKUP_Msk                   (_U_(0x1) << HSM_STATUS_LKUP_Pos)                    /**< (HSM_STATUS) HSM CPU LOCKUP Mask */
#define HSM_STATUS_LKUP(value)                (HSM_STATUS_LKUP_Msk & ((value) << HSM_STATUS_LKUP_Pos))
#define HSM_STATUS_PS_Pos                     _U_(4)                                               /**< (HSM_STATUS) PROCESSING STATE Position */
#define HSM_STATUS_PS_Msk                     (_U_(0x7) << HSM_STATUS_PS_Pos)                      /**< (HSM_STATUS) PROCESSING STATE Mask */
#define HSM_STATUS_PS(value)                  (HSM_STATUS_PS_Msk & ((value) << HSM_STATUS_PS_Pos))
#define HSM_STATUS_LCS_Pos                    _U_(8)                                               /**< (HSM_STATUS) LIFECYCLE STATE Position */
#define HSM_STATUS_LCS_Msk                    (_U_(0x7) << HSM_STATUS_LCS_Pos)                     /**< (HSM_STATUS) LIFECYCLE STATE Mask */
#define HSM_STATUS_LCS(value)                 (HSM_STATUS_LCS_Msk & ((value) << HSM_STATUS_LCS_Pos))
#define HSM_STATUS_SBS_Pos                    _U_(12)                                              /**< (HSM_STATUS) SECURE BOOT STATE Position */
#define HSM_STATUS_SBS_Msk                    (_U_(0x7) << HSM_STATUS_SBS_Pos)                     /**< (HSM_STATUS) SECURE BOOT STATE Mask */
#define HSM_STATUS_SBS(value)                 (HSM_STATUS_SBS_Msk & ((value) << HSM_STATUS_SBS_Pos))
#define HSM_STATUS_ECODE_Pos                  _U_(16)                                              /**< (HSM_STATUS) ERROR CODE Position */
#define HSM_STATUS_ECODE_Msk                  (_U_(0xF) << HSM_STATUS_ECODE_Pos)                   /**< (HSM_STATUS) ERROR CODE Mask */
#define HSM_STATUS_ECODE(value)               (HSM_STATUS_ECODE_Msk & ((value) << HSM_STATUS_ECODE_Pos))
#define HSM_STATUS_Msk                        _U_(0x000F7773)                                      /**< (HSM_STATUS) Register Mask  */


/* -------- HSM_MBFIFO : (HSM Offset: 0x100) (R/W 32) MAILBOX FIFO -------- */
#define HSM_MBFIFO_RESETVALUE                 _U_(0x00)                                            /**<  (HSM_MBFIFO) MAILBOX FIFO  Reset Value */

#define HSM_MBFIFO_MBFIFO_Pos                 _U_(0)                                               /**< (HSM_MBFIFO) MAILBOX FIFO Position */
#define HSM_MBFIFO_MBFIFO_Msk                 (_U_(0xFFFFFFFF) << HSM_MBFIFO_MBFIFO_Pos)           /**< (HSM_MBFIFO) MAILBOX FIFO Mask */
#define HSM_MBFIFO_MBFIFO(value)              (HSM_MBFIFO_MBFIFO_Msk & ((value) << HSM_MBFIFO_MBFIFO_Pos))
#define HSM_MBFIFO_Msk                        _U_(0xFFFFFFFF)                                      /**< (HSM_MBFIFO) Register Mask  */


/* -------- HSM_MBTXSTATUS : (HSM Offset: 0x140) (R/W 32) MAILBOX TRANSMIT STATUS -------- */
#define HSM_MBTXSTATUS_RESETVALUE             _U_(0x100000)                                        /**<  (HSM_MBTXSTATUS) MAILBOX TRANSMIT STATUS  Reset Value */

#define HSM_MBTXSTATUS_TXREMAINING_Pos        _U_(0)                                               /**< (HSM_MBTXSTATUS) TRANSMIT BYTES REMAINING Position */
#define HSM_MBTXSTATUS_TXREMAINING_Msk        (_U_(0xFFFF) << HSM_MBTXSTATUS_TXREMAINING_Pos)      /**< (HSM_MBTXSTATUS) TRANSMIT BYTES REMAINING Mask */
#define HSM_MBTXSTATUS_TXREMAINING(value)     (HSM_MBTXSTATUS_TXREMAINING_Msk & ((value) << HSM_MBTXSTATUS_TXREMAINING_Pos))
#define HSM_MBTXSTATUS_TXTYPE_Pos             _U_(16)                                              /**< (HSM_MBTXSTATUS) TRANSMIT MESSAGE HEADER TYPE Position */
#define HSM_MBTXSTATUS_TXTYPE_Msk             (_U_(0xF) << HSM_MBTXSTATUS_TXTYPE_Pos)              /**< (HSM_MBTXSTATUS) TRANSMIT MESSAGE HEADER TYPE Mask */
#define HSM_MBTXSTATUS_TXTYPE(value)          (HSM_MBTXSTATUS_TXTYPE_Msk & ((value) << HSM_MBTXSTATUS_TXTYPE_Pos))
#define HSM_MBTXSTATUS_TXINT_Pos              _U_(20)                                              /**< (HSM_MBTXSTATUS) TRANSMIT FIFO INTERRUPT FLAG Position */
#define HSM_MBTXSTATUS_TXINT_Msk              (_U_(0x1) << HSM_MBTXSTATUS_TXINT_Pos)               /**< (HSM_MBTXSTATUS) TRANSMIT FIFO INTERRUPT FLAG Mask */
#define HSM_MBTXSTATUS_TXINT(value)           (HSM_MBTXSTATUS_TXINT_Msk & ((value) << HSM_MBTXSTATUS_TXINT_Pos))
#define HSM_MBTXSTATUS_TXFULL_Pos             _U_(21)                                              /**< (HSM_MBTXSTATUS) TRANSMIT FIFO FULL Position */
#define HSM_MBTXSTATUS_TXFULL_Msk             (_U_(0x1) << HSM_MBTXSTATUS_TXFULL_Pos)              /**< (HSM_MBTXSTATUS) TRANSMIT FIFO FULL Mask */
#define HSM_MBTXSTATUS_TXFULL(value)          (HSM_MBTXSTATUS_TXFULL_Msk & ((value) << HSM_MBTXSTATUS_TXFULL_Pos))
#define HSM_MBTXSTATUS_TXERR_Pos              _U_(23)                                              /**< (HSM_MBTXSTATUS) TRANSMIT ERROR Position */
#define HSM_MBTXSTATUS_TXERR_Msk              (_U_(0x1) << HSM_MBTXSTATUS_TXERR_Pos)               /**< (HSM_MBTXSTATUS) TRANSMIT ERROR Mask */
#define HSM_MBTXSTATUS_TXERR(value)           (HSM_MBTXSTATUS_TXERR_Msk & ((value) << HSM_MBTXSTATUS_TXERR_Pos))
#define HSM_MBTXSTATUS_Msk                    _U_(0x00BFFFFF)                                      /**< (HSM_MBTXSTATUS) Register Mask  */


/* -------- HSM_MBRXSTATUS : (HSM Offset: 0x144) (R/W 32) MAILBOX RECEIVE STATUS -------- */
#define HSM_MBRXSTATUS_RESETVALUE             _U_(0x200000)                                        /**<  (HSM_MBRXSTATUS) MAILBOX RECEIVE STATUS  Reset Value */

#define HSM_MBRXSTATUS_RXREMAINING_Pos        _U_(0)                                               /**< (HSM_MBRXSTATUS) RECEIVE BYTES REMAINING Position */
#define HSM_MBRXSTATUS_RXREMAINING_Msk        (_U_(0xFFFF) << HSM_MBRXSTATUS_RXREMAINING_Pos)      /**< (HSM_MBRXSTATUS) RECEIVE BYTES REMAINING Mask */
#define HSM_MBRXSTATUS_RXREMAINING(value)     (HSM_MBRXSTATUS_RXREMAINING_Msk & ((value) << HSM_MBRXSTATUS_RXREMAINING_Pos))
#define HSM_MBRXSTATUS_RXTYPE_Pos             _U_(16)                                              /**< (HSM_MBRXSTATUS) RECEIVE MESSAGE HEADER TYPE Position */
#define HSM_MBRXSTATUS_RXTYPE_Msk             (_U_(0xF) << HSM_MBRXSTATUS_RXTYPE_Pos)              /**< (HSM_MBRXSTATUS) RECEIVE MESSAGE HEADER TYPE Mask */
#define HSM_MBRXSTATUS_RXTYPE(value)          (HSM_MBRXSTATUS_RXTYPE_Msk & ((value) << HSM_MBRXSTATUS_RXTYPE_Pos))
#define HSM_MBRXSTATUS_RXINT_Pos              _U_(20)                                              /**< (HSM_MBRXSTATUS) RECEIVE FIFO INTERRUPT FLAG Position */
#define HSM_MBRXSTATUS_RXINT_Msk              (_U_(0x1) << HSM_MBRXSTATUS_RXINT_Pos)               /**< (HSM_MBRXSTATUS) RECEIVE FIFO INTERRUPT FLAG Mask */
#define HSM_MBRXSTATUS_RXINT(value)           (HSM_MBRXSTATUS_RXINT_Msk & ((value) << HSM_MBRXSTATUS_RXINT_Pos))
#define HSM_MBRXSTATUS_RXEMPTY_Pos            _U_(21)                                              /**< (HSM_MBRXSTATUS) RECEIVE FIFO FULL Position */
#define HSM_MBRXSTATUS_RXEMPTY_Msk            (_U_(0x1) << HSM_MBRXSTATUS_RXEMPTY_Pos)             /**< (HSM_MBRXSTATUS) RECEIVE FIFO FULL Mask */
#define HSM_MBRXSTATUS_RXEMPTY(value)         (HSM_MBRXSTATUS_RXEMPTY_Msk & ((value) << HSM_MBRXSTATUS_RXEMPTY_Pos))
#define HSM_MBRXSTATUS_RXHEAD_Pos             _U_(22)                                              /**< (HSM_MBRXSTATUS) Receive Header Next Word bit Position */
#define HSM_MBRXSTATUS_RXHEAD_Msk             (_U_(0x1) << HSM_MBRXSTATUS_RXHEAD_Pos)              /**< (HSM_MBRXSTATUS) Receive Header Next Word bit Mask */
#define HSM_MBRXSTATUS_RXHEAD(value)          (HSM_MBRXSTATUS_RXHEAD_Msk & ((value) << HSM_MBRXSTATUS_RXHEAD_Pos))
#define HSM_MBRXSTATUS_RXERR_Pos              _U_(23)                                              /**< (HSM_MBRXSTATUS) RECEIVE ERROR Position */
#define HSM_MBRXSTATUS_RXERR_Msk              (_U_(0x1) << HSM_MBRXSTATUS_RXERR_Pos)               /**< (HSM_MBRXSTATUS) RECEIVE ERROR Mask */
#define HSM_MBRXSTATUS_RXERR(value)           (HSM_MBRXSTATUS_RXERR_Msk & ((value) << HSM_MBRXSTATUS_RXERR_Pos))
#define HSM_MBRXSTATUS_Msk                    _U_(0x00FFFFFF)                                      /**< (HSM_MBRXSTATUS) Register Mask  */


/* -------- HSM_MBTXPROT : (HSM Offset: 0x148) (R/W 32) MAILBOX TX PROTECTION -------- */
#define HSM_MBTXPROT_RESETVALUE               _U_(0x00)                                            /**<  (HSM_MBTXPROT) MAILBOX TX PROTECTION  Reset Value */

#define HSM_MBTXPROT_UNPROT_Pos               _U_(21)                                              /**< (HSM_MBTXPROT) MAILBOX UNPROTECTED Position */
#define HSM_MBTXPROT_UNPROT_Msk               (_U_(0x1) << HSM_MBTXPROT_UNPROT_Pos)                /**< (HSM_MBTXPROT) MAILBOX UNPROTECTED Mask */
#define HSM_MBTXPROT_UNPROT(value)            (HSM_MBTXPROT_UNPROT_Msk & ((value) << HSM_MBTXPROT_UNPROT_Pos))
#define HSM_MBTXPROT_PRIV_Pos                 _U_(22)                                              /**< (HSM_MBTXPROT) MAILBOX MESSAGE PRIVILEDGED ACCESS Position */
#define HSM_MBTXPROT_PRIV_Msk                 (_U_(0x1) << HSM_MBTXPROT_PRIV_Pos)                  /**< (HSM_MBTXPROT) MAILBOX MESSAGE PRIVILEDGED ACCESS Mask */
#define HSM_MBTXPROT_PRIV(value)              (HSM_MBTXPROT_PRIV_Msk & ((value) << HSM_MBTXPROT_PRIV_Pos))
#define HSM_MBTXPROT_NSEC_Pos                 _U_(23)                                              /**< (HSM_MBTXPROT) MAILBOX MESSAGE NON-SECURE ACCESS Position */
#define HSM_MBTXPROT_NSEC_Msk                 (_U_(0x1) << HSM_MBTXPROT_NSEC_Pos)                  /**< (HSM_MBTXPROT) MAILBOX MESSAGE NON-SECURE ACCESS Mask */
#define HSM_MBTXPROT_NSEC(value)              (HSM_MBTXPROT_NSEC_Msk & ((value) << HSM_MBTXPROT_NSEC_Pos))
#define HSM_MBTXPROT_USER_Pos                 _U_(24)                                              /**< (HSM_MBTXPROT) USER SIDEBAND Position */
#define HSM_MBTXPROT_USER_Msk                 (_U_(0xFF) << HSM_MBTXPROT_USER_Pos)                 /**< (HSM_MBTXPROT) USER SIDEBAND Mask */
#define HSM_MBTXPROT_USER(value)              (HSM_MBTXPROT_USER_Msk & ((value) << HSM_MBTXPROT_USER_Pos))
#define HSM_MBTXPROT_Msk                      _U_(0xFFE00000)                                      /**< (HSM_MBTXPROT) Register Mask  */


/* -------- HSM_MBRXPROT : (HSM Offset: 0x14C) (R/W 32) MAILBOX RX PROTECTION -------- */
#define HSM_MBRXPROT_RESETVALUE               _U_(0x00)                                            /**<  (HSM_MBRXPROT) MAILBOX RX PROTECTION  Reset Value */

#define HSM_MBRXPROT_UNPROT_Pos               _U_(21)                                              /**< (HSM_MBRXPROT) MAILBOX UNPROTECTED Position */
#define HSM_MBRXPROT_UNPROT_Msk               (_U_(0x1) << HSM_MBRXPROT_UNPROT_Pos)                /**< (HSM_MBRXPROT) MAILBOX UNPROTECTED Mask */
#define HSM_MBRXPROT_UNPROT(value)            (HSM_MBRXPROT_UNPROT_Msk & ((value) << HSM_MBRXPROT_UNPROT_Pos))
#define HSM_MBRXPROT_PRIV_Pos                 _U_(22)                                              /**< (HSM_MBRXPROT) MAILBOX MESSAGE PRIVILEDGED ACCESS Position */
#define HSM_MBRXPROT_PRIV_Msk                 (_U_(0x1) << HSM_MBRXPROT_PRIV_Pos)                  /**< (HSM_MBRXPROT) MAILBOX MESSAGE PRIVILEDGED ACCESS Mask */
#define HSM_MBRXPROT_PRIV(value)              (HSM_MBRXPROT_PRIV_Msk & ((value) << HSM_MBRXPROT_PRIV_Pos))
#define HSM_MBRXPROT_NSEC_Pos                 _U_(23)                                              /**< (HSM_MBRXPROT) MAILBOX MESSAGE NON-SECURE ACCESS Position */
#define HSM_MBRXPROT_NSEC_Msk                 (_U_(0x1) << HSM_MBRXPROT_NSEC_Pos)                  /**< (HSM_MBRXPROT) MAILBOX MESSAGE NON-SECURE ACCESS Mask */
#define HSM_MBRXPROT_NSEC(value)              (HSM_MBRXPROT_NSEC_Msk & ((value) << HSM_MBRXPROT_NSEC_Pos))
#define HSM_MBRXPROT_USER_Pos                 _U_(24)                                              /**< (HSM_MBRXPROT) USER SIDEBAND Position */
#define HSM_MBRXPROT_USER_Msk                 (_U_(0xFF) << HSM_MBRXPROT_USER_Pos)                 /**< (HSM_MBRXPROT) USER SIDEBAND Mask */
#define HSM_MBRXPROT_USER(value)              (HSM_MBRXPROT_USER_Msk & ((value) << HSM_MBRXPROT_USER_Pos))
#define HSM_MBRXPROT_Msk                      _U_(0xFFE00000)                                      /**< (HSM_MBRXPROT) Register Mask  */


/* -------- HSM_MBTXHEAD : (HSM Offset: 0x150) (R/W 32) MAILBOX TRANSMIT HEADER -------- */
#define HSM_MBTXHEAD_RESETVALUE               _U_(0x00)                                            /**<  (HSM_MBTXHEAD) MAILBOX TRANSMIT HEADER  Reset Value */

#define HSM_MBTXHEAD_TXHEAD_Pos               _U_(0)                                               /**< (HSM_MBTXHEAD) MAILBOX TRANSMIT HEADER REGISTER Position */
#define HSM_MBTXHEAD_TXHEAD_Msk               (_U_(0xFFFFFFFF) << HSM_MBTXHEAD_TXHEAD_Pos)         /**< (HSM_MBTXHEAD) MAILBOX TRANSMIT HEADER REGISTER Mask */
#define HSM_MBTXHEAD_TXHEAD(value)            (HSM_MBTXHEAD_TXHEAD_Msk & ((value) << HSM_MBTXHEAD_TXHEAD_Pos))
#define HSM_MBTXHEAD_Msk                      _U_(0xFFFFFFFF)                                      /**< (HSM_MBTXHEAD) Register Mask  */


/* -------- HSM_MBRXHEAD : (HSM Offset: 0x154) (R/W 32) MAILBOX RECEIVE HEADER -------- */
#define HSM_MBRXHEAD_RESETVALUE               _U_(0x00)                                            /**<  (HSM_MBRXHEAD) MAILBOX RECEIVE HEADER  Reset Value */

#define HSM_MBRXHEAD_RXHEAD_Pos               _U_(0)                                               /**< (HSM_MBRXHEAD) MAILBOX RECEIVE HEADER REGISTER Position */
#define HSM_MBRXHEAD_RXHEAD_Msk               (_U_(0xFFFFFFFF) << HSM_MBRXHEAD_RXHEAD_Pos)         /**< (HSM_MBRXHEAD) MAILBOX RECEIVE HEADER REGISTER Mask */
#define HSM_MBRXHEAD_RXHEAD(value)            (HSM_MBRXHEAD_RXHEAD_Msk & ((value) << HSM_MBRXHEAD_RXHEAD_Pos))
#define HSM_MBRXHEAD_Msk                      _U_(0xFFFFFFFF)                                      /**< (HSM_MBRXHEAD) Register Mask  */


/* -------- HSM_MBCONFIG : (HSM Offset: 0x158) (R/W 32) MAILBOX CONFIGURATION -------- */
#define HSM_MBCONFIG_RESETVALUE               _U_(0x00)                                            /**<  (HSM_MBCONFIG) MAILBOX CONFIGURATION  Reset Value */

#define HSM_MBCONFIG_TXINT_Pos                _U_(0)                                               /**< (HSM_MBCONFIG) MAILBOX TRANSMIT INTERRUPT ENABLE Position */
#define HSM_MBCONFIG_TXINT_Msk                (_U_(0x1) << HSM_MBCONFIG_TXINT_Pos)                 /**< (HSM_MBCONFIG) MAILBOX TRANSMIT INTERRUPT ENABLE Mask */
#define HSM_MBCONFIG_TXINT(value)             (HSM_MBCONFIG_TXINT_Msk & ((value) << HSM_MBCONFIG_TXINT_Pos))
#define HSM_MBCONFIG_RXINT_Pos                _U_(1)                                               /**< (HSM_MBCONFIG) MAILBOX RECEIVE INTERRUPT ENABLE Position */
#define HSM_MBCONFIG_RXINT_Msk                (_U_(0x1) << HSM_MBCONFIG_RXINT_Pos)                 /**< (HSM_MBCONFIG) MAILBOX RECEIVE INTERRUPT ENABLE Mask */
#define HSM_MBCONFIG_RXINT(value)             (HSM_MBCONFIG_RXINT_Msk & ((value) << HSM_MBCONFIG_RXINT_Pos))
#define HSM_MBCONFIG_Msk                      _U_(0x00000003)                                      /**< (HSM_MBCONFIG) Register Mask  */


/** \brief HSM register offsets definitions */
#define HSM_CTRLA_REG_OFST             (0x00)              /**< (HSM_CTRLA) CONTROL REGISTER A Offset */
#define HSM_CTRLB_REG_OFST             (0x04)              /**< (HSM_CTRLB) CONTROL REGISTER B Offset */
#define HSM_INTENCLR_REG_OFST          (0x08)              /**< (HSM_INTENCLR) INTERRUPT ENABLE CLEAR REGISTER Offset */
#define HSM_INTENSET_REG_OFST          (0x0C)              /**< (HSM_INTENSET) INTERRUPT ENABLE SET Offset */
#define HSM_INTFLAG_REG_OFST           (0x10)              /**< (HSM_INTFLAG) INTERRUPT FLAG Offset */
#define HSM_STATUS_REG_OFST            (0x14)              /**< (HSM_STATUS) STATUS Offset */
#define HSM_MBFIFO_REG_OFST            (0x100)             /**< (HSM_MBFIFO) MAILBOX FIFO Offset */
#define HSM_MBTXSTATUS_REG_OFST        (0x140)             /**< (HSM_MBTXSTATUS) MAILBOX TRANSMIT STATUS Offset */
#define HSM_MBRXSTATUS_REG_OFST        (0x144)             /**< (HSM_MBRXSTATUS) MAILBOX RECEIVE STATUS Offset */
#define HSM_MBTXPROT_REG_OFST          (0x148)             /**< (HSM_MBTXPROT) MAILBOX TX PROTECTION Offset */
#define HSM_MBRXPROT_REG_OFST          (0x14C)             /**< (HSM_MBRXPROT) MAILBOX RX PROTECTION Offset */
#define HSM_MBTXHEAD_REG_OFST          (0x150)             /**< (HSM_MBTXHEAD) MAILBOX TRANSMIT HEADER Offset */
#define HSM_MBRXHEAD_REG_OFST          (0x154)             /**< (HSM_MBRXHEAD) MAILBOX RECEIVE HEADER Offset */
#define HSM_MBCONFIG_REG_OFST          (0x158)             /**< (HSM_MBCONFIG) MAILBOX CONFIGURATION Offset */

#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
/** \brief HSM register API structure */
typedef struct
{  /* Hardware Security Module */
  __IO  uint32_t                       HSM_CTRLA;          /**< Offset: 0x00 (R/W  32) CONTROL REGISTER A */
  __IO  uint32_t                       HSM_CTRLB;          /**< Offset: 0x04 (R/W  32) CONTROL REGISTER B */
  __IO  uint32_t                       HSM_INTENCLR;       /**< Offset: 0x08 (R/W  32) INTERRUPT ENABLE CLEAR REGISTER */
  __IO  uint32_t                       HSM_INTENSET;       /**< Offset: 0x0C (R/W  32) INTERRUPT ENABLE SET */
  __IO  uint32_t                       HSM_INTFLAG;        /**< Offset: 0x10 (R/W  32) INTERRUPT FLAG */
  __IO  uint32_t                       HSM_STATUS;         /**< Offset: 0x14 (R/W  32) STATUS */
  __I   uint8_t                        Reserved1[0xE8];
  __IO  uint32_t                       HSM_MBFIFO[16];     /**< Offset: 0x100 (R/W  32) MAILBOX FIFO */
  __IO  uint32_t                       HSM_MBTXSTATUS;     /**< Offset: 0x140 (R/W  32) MAILBOX TRANSMIT STATUS */
  __IO  uint32_t                       HSM_MBRXSTATUS;     /**< Offset: 0x144 (R/W  32) MAILBOX RECEIVE STATUS */
  __IO  uint32_t                       HSM_MBTXPROT;       /**< Offset: 0x148 (R/W  32) MAILBOX TX PROTECTION */
  __IO  uint32_t                       HSM_MBRXPROT;       /**< Offset: 0x14C (R/W  32) MAILBOX RX PROTECTION */
  __IO  uint32_t                       HSM_MBTXHEAD;       /**< Offset: 0x150 (R/W  32) MAILBOX TRANSMIT HEADER */
  __IO  uint32_t                       HSM_MBRXHEAD;       /**< Offset: 0x154 (R/W  32) MAILBOX RECEIVE HEADER */
  __IO  uint32_t                       HSM_MBCONFIG;       /**< Offset: 0x158 (R/W  32) MAILBOX CONFIGURATION */
} hsm_registers_t;


#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* _PIC32CZCA90_HSM_COMPONENT_H_ */
