/*******************************************************************************
  SERIAL COMMUNICATION SERIAL PERIPHERAL INTERFACE(SERCOM3_SPI) PLIB

  Company
    Microchip Technology Inc.

  File Name
    plib_sercom3_spi_slave.c

  Summary
    SERCOM3_SPI PLIB Slave Implementation File.

  Description
    This file defines the interface to the SERCOM SPI Slave peripheral library.
    This library provides access to and control of the associated
    peripheral instance.

  Remarks:
    None.

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2020 Microchip Technology Inc. and its subsidiaries.
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


#include "interrupts.h"
#include "plib_sercom3_spi_slave.h"
#include "peripheral/port/plib_port.h"
#include <string.h>

// *****************************************************************************
// *****************************************************************************
// Section: MACROS Definitions
// *****************************************************************************
// *****************************************************************************
#define SERCOM3_SPI_READ_BUFFER_SIZE            256U
#define SERCOM3_SPI_WRITE_BUFFER_SIZE           256U

volatile static uint8_t SERCOM3_SPI_ReadBuffer[SERCOM3_SPI_READ_BUFFER_SIZE];
volatile static uint8_t SERCOM3_SPI_WriteBuffer[SERCOM3_SPI_WRITE_BUFFER_SIZE];


/* Global object to save SPI Exchange related data  */
volatile static SPI_SLAVE_OBJECT sercom3SPISObj;

// *****************************************************************************
// *****************************************************************************
// Section: SERCOM3_SPI Slave Implementation
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************

static void mem_copy(volatile void* pDst, volatile void* pSrc, uint32_t nBytes)
{
    volatile uint8_t* pSource = (volatile uint8_t*)pSrc;
    volatile uint8_t* pDest = (volatile uint8_t*)pDst;

    for (uint32_t i = 0U; i < nBytes; i++)
    {
        pDest[i] = pSource[i];
    }
}

void SERCOM3_SPI_Initialize(void)
{
    /* CHSIZE - 8_BIT
     * PLOADEN - 1
     *  SSDE - 1 
     * RXEN - 1
     */
    SERCOM3_REGS->SPIS.SERCOM_CTRLB = SERCOM_SPIS_CTRLB_CHSIZE_8_BIT | SERCOM_SPIS_CTRLB_PLOADEN_Msk | SERCOM_SPIS_CTRLB_RXEN_Msk | SERCOM_SPIS_CTRLB_SSDE_Msk;

    /* Wait for synchronization */
    while(SERCOM3_REGS->SPIS.SERCOM_SYNCBUSY != 0U)
    {
        /* Do nothing */
    }

    /* Mode - SPI Slave
     * IBON - 1 (Set immediately upon buffer overflow)
     * DOPO - PAD2
     * DIPO - PAD0
     * CPHA - LEADING_EDGE
     * COPL - IDLE_LOW
     * DORD - MSB
     * ENABLE - 1
     */
    SERCOM3_REGS->SPIS.SERCOM_CTRLA = SERCOM_SPIS_CTRLA_MODE_SPI_SLAVE | SERCOM_SPIS_CTRLA_IBON_Msk | SERCOM_SPIS_CTRLA_DOPO_PAD2 | SERCOM_SPIS_CTRLA_DIPO_PAD0 | SERCOM_SPIS_CTRLA_CPOL_IDLE_LOW | SERCOM_SPIS_CTRLA_CPHA_LEADING_EDGE | SERCOM_SPIS_CTRLA_DORD_MSB | SERCOM_SPIS_CTRLA_ENABLE_Msk ;

    /* Wait for synchronization */
    while(SERCOM3_REGS->SPIS.SERCOM_SYNCBUSY != 0U)
    {
        /* Do nothing */
    }

    sercom3SPISObj.rdInIndex = 0U;
    sercom3SPISObj.wrOutIndex = 0U;
    sercom3SPISObj.nWrBytes = 0U;
    sercom3SPISObj.errorStatus = SPI_SLAVE_ERROR_NONE;
    sercom3SPISObj.callback = NULL ;
    sercom3SPISObj.transferIsBusy = false ;

    SERCOM3_REGS->SPIS.SERCOM_INTENSET = (uint8_t)(SERCOM_SPIS_INTENSET_SSL_Msk | SERCOM_SPIS_INTENCLR_RXC_Msk);

    /* Set the Busy Pin to ready state */
    PORT_PinWrite(PORT_PIN_PA08, false);
}

/* For 9-bit mode, the "size" must be specified in terms of 16-bit words */
size_t SERCOM3_SPI_Read(void* pRdBuffer, size_t size)
{
    uint8_t intState = SERCOM3_REGS->SPIS.SERCOM_INTENSET;
    size_t rdSize = size;
    uint8_t* pDstBuffer = (uint8_t*)pRdBuffer;

    SERCOM3_REGS->SPIS.SERCOM_INTENCLR = intState;

    if (rdSize > sercom3SPISObj.rdInIndex)
    {
        rdSize = sercom3SPISObj.rdInIndex;
    }

    (void) mem_copy(pDstBuffer, SERCOM3_SPI_ReadBuffer, rdSize);

    SERCOM3_REGS->SPIS.SERCOM_INTENSET = intState;

    return rdSize;
}

/* For 9-bit mode, the "size" must be specified in terms of 16-bit words */
size_t SERCOM3_SPI_Write(void* pWrBuffer, size_t size )
{
    uint8_t intState = SERCOM3_REGS->SPIS.SERCOM_INTENSET;
    size_t wrSize = size;
    bool writeReady = false;
    uint32_t wrOutIndex = 0;
    uint8_t* pSrcBuffer = (uint8_t*)pWrBuffer;

    SERCOM3_REGS->SPIS.SERCOM_INTENCLR = intState;

    if (wrSize > SERCOM3_SPI_WRITE_BUFFER_SIZE)
    {
        wrSize = SERCOM3_SPI_WRITE_BUFFER_SIZE;
    }

   (void) mem_copy(SERCOM3_SPI_WriteBuffer, pSrcBuffer, wrSize);

    sercom3SPISObj.nWrBytes = wrSize;

    writeReady = (wrOutIndex < sercom3SPISObj.nWrBytes);
    writeReady = ((SERCOM3_REGS->SPIS.SERCOM_INTFLAG & SERCOM_SPIS_INTFLAG_DRE_Msk) == SERCOM_SPIS_INTFLAG_DRE_Msk) && writeReady;
    while (writeReady)
    {
        SERCOM3_REGS->SPIS.SERCOM_DATA = SERCOM3_SPI_WriteBuffer[wrOutIndex];
        wrOutIndex++;
        writeReady = (wrOutIndex < sercom3SPISObj.nWrBytes);
        writeReady = ((SERCOM3_REGS->SPIS.SERCOM_INTFLAG & SERCOM_SPIS_INTFLAG_DRE_Msk) == SERCOM_SPIS_INTFLAG_DRE_Msk) && writeReady;
    }

    sercom3SPISObj.wrOutIndex = wrOutIndex;

    /* Restore interrupt enable state and also enable DRE interrupt to start pre-loading of DATA register */
    SERCOM3_REGS->SPIS.SERCOM_INTENSET = (intState | (uint8_t)SERCOM_SPIS_INTENSET_DRE_Msk);

    return wrSize;
}

/* For 9-bit mode, the return value is in terms of 16-bit words */
size_t SERCOM3_SPI_ReadCountGet(void)
{
    return sercom3SPISObj.rdInIndex;
}

/* For 9-bit mode, the return value is in terms of 16-bit words */
size_t SERCOM3_SPI_ReadBufferSizeGet(void)
{
    return SERCOM3_SPI_READ_BUFFER_SIZE;
}

/* For 9-bit mode, the return value is in terms of 16-bit words */
size_t SERCOM3_SPI_WriteBufferSizeGet(void)
{
    return SERCOM3_SPI_WRITE_BUFFER_SIZE;
}

void SERCOM3_SPI_CallbackRegister(SERCOM_SPI_SLAVE_CALLBACK callBack, uintptr_t context )
{
    sercom3SPISObj.callback = callBack;

    sercom3SPISObj.context = context;
}

/* The status is returned busy during the period the chip-select remains asserted */
bool SERCOM3_SPI_IsBusy(void)
{
    return sercom3SPISObj.transferIsBusy;
}

/* Drive the GPIO pin to indicate to SPI Master that the slave is ready now */
void SERCOM3_SPI_Ready(void)
{
    PORT_PinWrite(PORT_PIN_PA08, false);
}

SPI_SLAVE_ERROR SERCOM3_SPI_ErrorGet(void)
{
    SPI_SLAVE_ERROR errorStatus = sercom3SPISObj.errorStatus;

    sercom3SPISObj.errorStatus = SPI_SLAVE_ERROR_NONE;

    return errorStatus;
}

void __attribute__((used)) SERCOM3_SPI_InterruptHandler(void)
{
    uint8_t txRxData;
    uint8_t intFlag = SERCOM3_REGS->SPIS.SERCOM_INTFLAG;

    if((SERCOM3_REGS->SPIS.SERCOM_INTFLAG & SERCOM_SPIS_INTFLAG_SSL_Msk) == SERCOM_SPIS_INTFLAG_SSL_Msk)
    {
        /* Clear the SSL flag and enable TXC interrupt */
        SERCOM3_REGS->SPIS.SERCOM_INTFLAG = (uint8_t)SERCOM_SPIS_INTFLAG_SSL_Msk;
        SERCOM3_REGS->SPIS.SERCOM_INTENSET = (uint8_t)SERCOM_SPIS_INTENSET_TXC_Msk;
        sercom3SPISObj.rdInIndex = 0U;
        sercom3SPISObj.transferIsBusy = true;
        PORT_PinWrite(PORT_PIN_PA08, true);
    }

    if ((SERCOM3_REGS->SPIS.SERCOM_STATUS & SERCOM_SPIS_STATUS_BUFOVF_Msk) == SERCOM_SPIS_STATUS_BUFOVF_Msk)
    {
        /* Save the error to report it to application later, when the transfer is complete (TXC = 1) */
        sercom3SPISObj.errorStatus = SERCOM_SPIS_STATUS_BUFOVF_Msk;

        /* Clear the status register */
        SERCOM3_REGS->SPIS.SERCOM_STATUS = SERCOM_SPIS_STATUS_BUFOVF_Msk;

        /* Flush out the received data until RXC flag is set */
        while((SERCOM3_REGS->SPIS.SERCOM_INTFLAG & SERCOM_SPIS_INTFLAG_RXC_Msk) == SERCOM_SPIS_INTFLAG_RXC_Msk)
        {
            /* Reading DATA register will also clear the RXC flag */
            txRxData = (uint8_t)SERCOM3_REGS->SPIS.SERCOM_DATA;
        }

        /* Clear the Error Interrupt Flag */
        SERCOM3_REGS->SPIS.SERCOM_INTFLAG = (uint8_t)SERCOM_SPIS_INTFLAG_ERROR_Msk;
    }

    if((SERCOM3_REGS->SPIS.SERCOM_INTFLAG & SERCOM_SPIS_INTFLAG_RXC_Msk) == SERCOM_SPIS_INTFLAG_RXC_Msk)
    {
        /* Reading DATA register will also clear the RXC flag */
        txRxData = (uint8_t)SERCOM3_REGS->SPIS.SERCOM_DATA;

        if (sercom3SPISObj.rdInIndex < SERCOM3_SPI_READ_BUFFER_SIZE)
        {
            uint32_t rdInIndex = sercom3SPISObj.rdInIndex;

            SERCOM3_SPI_ReadBuffer[rdInIndex] = txRxData;
            sercom3SPISObj.rdInIndex++;
        }
    }

    if((SERCOM3_REGS->SPIS.SERCOM_INTFLAG & SERCOM_SPIS_INTFLAG_DRE_Msk) == SERCOM_SPIS_INTFLAG_DRE_Msk)
    {
        uint32_t wrOutIndex = sercom3SPISObj.wrOutIndex;

        if (wrOutIndex < sercom3SPISObj.nWrBytes)
        {
            txRxData = SERCOM3_SPI_WriteBuffer[wrOutIndex];
            wrOutIndex++;

            /* Before writing to DATA register (which clears TXC flag), check if TXC flag is set */
            if((SERCOM3_REGS->SPIS.SERCOM_INTFLAG & SERCOM_SPIS_INTFLAG_TXC_Msk) == SERCOM_SPIS_INTFLAG_TXC_Msk)
            {
                intFlag = (uint8_t)SERCOM_SPIS_INTFLAG_TXC_Msk;
            }
            SERCOM3_REGS->SPIS.SERCOM_DATA = (uint32_t)txRxData;
        }
        else
        {
            /* Disable DRE interrupt. The last byte sent by the master will be shifted out automatically */
            SERCOM3_REGS->SPIS.SERCOM_INTENCLR = (uint8_t)SERCOM_SPIS_INTENCLR_DRE_Msk;
        }

        sercom3SPISObj.wrOutIndex = wrOutIndex;
    }

    if((intFlag & SERCOM_SPIS_INTFLAG_TXC_Msk) == SERCOM_SPIS_INTFLAG_TXC_Msk)
    {
        /* Clear TXC flag */
        SERCOM3_REGS->SPIS.SERCOM_INTFLAG = (uint8_t)SERCOM_SPIS_INTFLAG_TXC_Msk;

        sercom3SPISObj.transferIsBusy = false;

        sercom3SPISObj.wrOutIndex = 0U;
        sercom3SPISObj.nWrBytes = 0U;

        if(sercom3SPISObj.callback != NULL)
        {
            uintptr_t context = sercom3SPISObj.context;

            sercom3SPISObj.callback(context);
        }
    }
}
