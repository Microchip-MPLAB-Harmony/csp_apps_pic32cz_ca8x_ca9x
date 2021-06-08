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
#ifndef _PIC32CZCA90_RSTC_INSTANCE_
#define _PIC32CZCA90_RSTC_INSTANCE_


/* ========== Instance Parameter definitions for RSTC peripheral ========== */
#define RSTC_BACKUP_IMPLEMENTED                  _UL_(1)    
#define RSTC_CM_DBGRESET_STRETCHED               _UL_(12)   /* Reset stretcher size for Cortex CPU related to DBGRESET. */
#define RSTC_CM_HRESET_N_STRETCHED               _UL_(12)   /* Reset stretcher size for Cortex CPU related to HRESETn. */
#define RSTC_CM_PORESET_STRETCHED                _UL_(12)   /* Reset stretcher size for Cortex CPU related to PORESET. */
#define RSTC_HIB_IMPLEMENTED                     _UL_(1)    
#define RSTC_VBAT_IMPLEMENTED                    _UL_(0)    /* One if VBAT (Battery backup mode) is supported */
#define RSTC_INSTANCE_ID                         _UL_(5)    /* Instance index for RSTC */
#define RSTC_MCLK_ID_APB                         _UL_(8)    /* Index for RSTC APB clock */
#define RSTC_PAC_ID                              _UL_(5)    /* Index for RSTC registers write protection */

#endif /* _PIC32CZCA90_RSTC_INSTANCE_ */
