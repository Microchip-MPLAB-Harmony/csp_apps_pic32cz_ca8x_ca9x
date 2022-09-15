/*******************************************************************************
  TCC Peripheral Library Interface Source File

  Company
    Microchip Technology Inc.

  File Name
    plib_tcc7.c

  Summary
    TCC7 peripheral library source file.

  Description
    This file implements the interface to the TCC peripheral library.  This
    library provides access to and control of the associated peripheral
    instance.

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END


// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

/*  This section lists the other files that are included in this file.
*/
#include "interrupts.h"
#include "plib_tcc7.h"


/* Object to hold callback function and context */
static TCC_CALLBACK_OBJECT TCC7_CallbackObj;

/* Initialize TCC module */
void TCC7_PWMInitialize(void)
{
    /* Reset TCC */
    TCC7_REGS->TCC_CTRLA = TCC_CTRLA_SWRST_Msk;
    while ((TCC7_REGS->TCC_SYNCBUSY & TCC_SYNCBUSY_SWRST_Msk) != 0U)
    {
        /* Wait for sync */
    }
    /* Clock prescaler */
    TCC7_REGS->TCC_CTRLA = TCC_CTRLA_PRESCALER_DIV1 ;
    /* Dead time configurations */
    TCC7_REGS->TCC_WEXCTRL |= TCC_WEXCTRL_DTIEN0_Msk
 	 	 | TCC_WEXCTRL_DTLS(75UL) | TCC_WEXCTRL_DTHS(150UL);

    TCC7_REGS->TCC_WAVE = TCC_WAVE_WAVEGEN_DSBOTTOM;

    /* Configure duty cycle values */
    TCC7_REGS->TCC_CC[0] = 0U;
    TCC7_REGS->TCC_CC[1] = 0U;
    TCC7_REGS->TCC_PER = 2500U;


    TCC7_REGS->TCC_INTENSET = TCC_INTENSET_OVF_Msk;

    while (TCC7_REGS->TCC_SYNCBUSY != 0U)
    {
        /* Wait for sync */
    }
}


/* Start the PWM generation */
void TCC7_PWMStart(void)
{
    TCC7_REGS->TCC_CTRLA |= TCC_CTRLA_ENABLE_Msk;
    while ((TCC7_REGS->TCC_SYNCBUSY & TCC_SYNCBUSY_ENABLE_Msk) != 0U)
    {
        /* Wait for sync */
    }
}

/* Stop the PWM generation */
void TCC7_PWMStop (void)
{
    TCC7_REGS->TCC_CTRLA &= ~TCC_CTRLA_ENABLE_Msk;
    while ((TCC7_REGS->TCC_SYNCBUSY & TCC_SYNCBUSY_ENABLE_Msk) != 0U)
    {
        /* Wait for sync */
    }
}

/* Configure PWM period */
bool TCC7_PWM32bitPeriodSet (uint32_t period)
{
    bool status = false;
    if ((TCC7_REGS->TCC_STATUS & (TCC_STATUS_PERBUFV_Msk)) == 0U)
    {
        TCC7_REGS->TCC_PERBUF = period;
        status = true;
    }    
    return status;
}

/* Read TCC period */
uint32_t TCC7_PWM32bitPeriodGet (void)
{
    while ((TCC7_REGS->TCC_SYNCBUSY & TCC_SYNCBUSY_PER_Msk) != 0U)
    {
        /* Wait for sync */
    }
    return (TCC7_REGS->TCC_PER);
}

/* Configure dead time */
void TCC7_PWMDeadTimeSet (uint8_t deadtime_high, uint8_t deadtime_low)
{
    TCC7_REGS->TCC_WEXCTRL &= ~(TCC_WEXCTRL_DTHS_Msk | TCC_WEXCTRL_DTLS_Msk);
    TCC7_REGS->TCC_WEXCTRL |= TCC_WEXCTRL_DTHS((uint32_t)deadtime_high) | TCC_WEXCTRL_DTLS((uint32_t)deadtime_low);
}


/* Set the counter*/
void TCC7_PWM32bitCounterSet (uint32_t count)
{
    TCC7_REGS->TCC_COUNT = count;
    while ((TCC7_REGS->TCC_SYNCBUSY & TCC_SYNCBUSY_COUNT_Msk) != 0U)
    {
        /* Wait for sync */
    }
}

/* Enable forced synchronous update */
void TCC7_PWMForceUpdate(void)
{
    TCC7_REGS->TCC_CTRLBSET |= (uint8_t)TCC_CTRLBCLR_CMD_UPDATE;
    while ((TCC7_REGS->TCC_SYNCBUSY & TCC_SYNCBUSY_CTRLB_Msk) != 0U)
    {
        /* Wait for sync */
    }
}

/* Enable the period interrupt - overflow or underflow interrupt */
void TCC7_PWMPeriodInterruptEnable(void)
{
    TCC7_REGS->TCC_INTENSET = TCC_INTENSET_OVF_Msk;
}

/* Disable the period interrupt - overflow or underflow interrupt */
void TCC7_PWMPeriodInterruptDisable(void)
{
    TCC7_REGS->TCC_INTENCLR = TCC_INTENCLR_OVF_Msk;
}

 /* Register callback function */
void TCC7_PWMCallbackRegister(TCC_CALLBACK callback, uintptr_t context)
{
    TCC7_CallbackObj.callback_fn = callback;
    TCC7_CallbackObj.context = context;
}

/* Interrupt Handler */
void TCC7_OTHER_InterruptHandler(void)
{
    uint32_t status;
    status = (TCC7_REGS->TCC_INTFLAG & 0xFFFFU);
    /* Clear interrupt flags */
    TCC7_REGS->TCC_INTFLAG = 0xFFFFU;
    (void)TCC7_REGS->TCC_INTFLAG;
    if (TCC7_CallbackObj.callback_fn != NULL)
    {
        TCC7_CallbackObj.callback_fn(status, TCC7_CallbackObj.context);
    }

}


     



/**
 End of File
*/
