/*******************************************************************************
  Controller Area Network (CAN) Peripheral Library Source File

  Company:
    Microchip Technology Inc.

  File Name:
    plib_can3.c

  Summary:
    CAN peripheral library interface.

  Description:
    This file defines the interface to the CAN peripheral library. This
    library provides access to and control of the associated peripheral
    instance.

  Remarks:
    None.
*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2021 Microchip Technology Inc. and its subsidiaries.
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
//DOM-IGNORE-END
// *****************************************************************************
// *****************************************************************************
// Header Includes
// *****************************************************************************
// *****************************************************************************

#include "device.h"
#include "interrupts.h"
#include "plib_can3.h"

// *****************************************************************************
// *****************************************************************************
// Global Data
// *****************************************************************************
// *****************************************************************************
#define CAN_STD_ID_Msk        0x7FFU

static CAN_TX_FIFO_CALLBACK_OBJ can3TxFifoCallbackObj;
static CAN_TX_EVENT_FIFO_CALLBACK_OBJ can3TxEventFifoCallbackObj;
static CAN_TXRX_BUFFERS_CALLBACK_OBJ can3RxBufferCallbackObj;
static CAN_RX_FIFO_CALLBACK_OBJ can3RxFifoCallbackObj[2];
static CAN_OBJ can3Obj;

static const can_sidfe_registers_t can3StdFilter[] =
{
    {
        .CAN_SIDFE_0 = CAN_SIDFE_0_SFT(0UL) |
                  CAN_SIDFE_0_SFID1(0x469UL) |
                  CAN_SIDFE_0_SFID2(0x469UL) |
                  CAN_SIDFE_0_SFEC(1UL)
    },
    {
        .CAN_SIDFE_0 = CAN_SIDFE_0_SFT(0UL) |
                  CAN_SIDFE_0_SFID1(0x45aUL) |
                  CAN_SIDFE_0_SFID2(0x0UL) |
                  CAN_SIDFE_0_SFEC(7UL)
    },
};

static const can_xidfe_registers_t can3ExtFilter[] =
{
    {
        .CAN_XIDFE_0 = CAN_XIDFE_0_EFID1(0x100000a5UL) | CAN_XIDFE_0_EFEC(7UL),
        .CAN_XIDFE_1 = CAN_XIDFE_1_EFID2(0x0UL) | CAN_XIDFE_1_EFT(0UL),
    },
    {
        .CAN_XIDFE_0 = CAN_XIDFE_0_EFID1(0x10000096UL) | CAN_XIDFE_0_EFEC(2UL),
        .CAN_XIDFE_1 = CAN_XIDFE_1_EFID2(0x10000096UL) | CAN_XIDFE_1_EFT(0UL),
    },
};

// *****************************************************************************
// *****************************************************************************
// CAN3 PLib Interface Routines
// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
/* Function:
    void CAN3_Initialize(void)

   Summary:
    Initializes given instance of the CAN peripheral.

   Precondition:
    None.

   Parameters:
    None.

   Returns:
    None
*/
void CAN3_Initialize(void)
{
    /* Start CAN initialization */
    CAN3_REGS->CAN_CCCR = CAN_CCCR_INIT_Msk;
    while ((CAN3_REGS->CAN_CCCR & CAN_CCCR_INIT_Msk) != CAN_CCCR_INIT_Msk)
    {
        /* Wait for initialization complete */
    }

    /* Set CCE to unlock the configuration registers */
    CAN3_REGS->CAN_CCCR |= CAN_CCCR_CCE_Msk;

    /* Set Data Bit Timing and Prescaler Register */
    CAN3_REGS->CAN_DBTP = CAN_DBTP_DTSEG2(6UL) | CAN_DBTP_DTSEG1(16UL) | CAN_DBTP_DBRP(2UL) | CAN_DBTP_DSJW(6UL);

    /* Set Nominal Bit timing and Prescaler Register */
    CAN3_REGS->CAN_NBTP  = CAN_NBTP_NTSEG2(4UL) | CAN_NBTP_NTSEG1(13UL) | CAN_NBTP_NBRP(14UL) | CAN_NBTP_NSJW(4UL);

    /* Receive Buffer / FIFO Element Size Configuration Register */
    CAN3_REGS->CAN_RXESC = 0UL  | CAN_RXESC_F0DS(7UL) | CAN_RXESC_F1DS(7UL) | CAN_RXESC_RBDS(7UL);
    /*lint -e{9048} PC lint incorrectly reports a missing 'U' Suffix */
    CAN3_REGS->CAN_NDAT1 = CAN_NDAT1_Msk;
    /*lint -e{9048} PC lint incorrectly reports a missing 'U' Suffix */
    CAN3_REGS->CAN_NDAT2 = CAN_NDAT2_Msk;

    /* Transmit Buffer/FIFO Element Size Configuration Register */
    CAN3_REGS->CAN_TXESC = CAN_TXESC_TBDS(7UL);

    /* Global Filter Configuration Register */
    CAN3_REGS->CAN_GFC = CAN_GFC_ANFS_REJECT | CAN_GFC_ANFE_REJECT;

    /* Extended ID AND Mask Register */
    CAN3_REGS->CAN_XIDAM = CAN_XIDAM_Msk;

    /* Timestamp Counter Configuration Register */
    CAN3_REGS->CAN_TSCC = CAN_TSCC_TCP(0UL) | CAN_TSCC_TSS_INC;

    /* Set the operation mode */
    CAN3_REGS->CAN_CCCR = (CAN3_REGS->CAN_CCCR & ~CAN_CCCR_INIT_Msk) | CAN_CCCR_FDOE_Msk | CAN_CCCR_BRSE_Msk;
    while ((CAN3_REGS->CAN_CCCR & CAN_CCCR_INIT_Msk) == CAN_CCCR_INIT_Msk)
    {
        /* Wait for initialization complete */
    }

    /* Select interrupt line */
    CAN3_REGS->CAN_ILS = 0x0U;

    /* Enable interrupt line */
    CAN3_REGS->CAN_ILE = CAN_ILE_EINT0_Msk;

    /* Enable CAN interrupts */
    CAN3_REGS->CAN_IE = CAN_IE_BOE_Msk | CAN_IE_TFEE_Msk | CAN_IE_TEFNE_Msk | CAN_IE_RF0NE_Msk | CAN_IE_RF1NE_Msk | CAN_IE_DRXE_Msk;

    memset(&can3Obj.msgRAMConfig, 0x00, sizeof(CAN_MSG_RAM_CONFIG));
}


// *****************************************************************************
/* Function:
    bool CAN3_MessageTransmitFifo(uint8_t numberOfMessage, CAN_TX_BUFFER *txBuffer)

   Summary:
    Transmit multiple messages into CAN bus from Tx FIFO.

   Precondition:
    CAN3_Initialize must have been called for the associated CAN instance.

   Parameters:
    numberOfMessage - Total number of message.
    txBuffer        - Pointer to Tx buffer

   Returns:
    Request status.
    true  - Request was successful.
    false - Request has failed.
*/
bool CAN3_MessageTransmitFifo(uint8_t numberOfMessage, CAN_TX_BUFFER *txBuffer)
{
    uint8_t  *txFifo = NULL;
    uint8_t  *txBuf = (uint8_t *)txBuffer;
    uint32_t bufferNumber = 0U;
    uint8_t  tfqpi = 0U;
    uint8_t  count = 0U;

    if (((numberOfMessage < 1U) || (numberOfMessage > 1U)) || (txBuffer == NULL))
    {
        return false;
    }

    tfqpi = (uint8_t)((CAN3_REGS->CAN_TXFQS & CAN_TXFQS_TFQPI_Msk) >> CAN_TXFQS_TFQPI_Pos);

    for (count = 0; count < numberOfMessage; count++)
    {
        txFifo = (uint8_t *)((uint8_t*)can3Obj.msgRAMConfig.txBuffersAddress + ((uint32_t)tfqpi * CAN3_TX_FIFO_BUFFER_ELEMENT_SIZE));

        memcpy(txFifo, txBuf, CAN3_TX_FIFO_BUFFER_ELEMENT_SIZE);

        txBuf += CAN3_TX_FIFO_BUFFER_ELEMENT_SIZE;
        bufferNumber |= (1UL << tfqpi);
        tfqpi++;
        if (tfqpi == 1U)
        {
            tfqpi = 0U;
        }
    }

    /* Set Transmission request */
    CAN3_REGS->CAN_TXBAR = bufferNumber;

    return true;
}

// *****************************************************************************
/* Function:
    uint8_t CAN3_TxFifoFreeLevelGet(void)

   Summary:
    Returns Tx FIFO Free Level.

   Precondition:
    CAN3_Initialize must have been called for the associated CAN instance.

   Parameters:
    None.

   Returns:
    Tx FIFO Free Level.
*/
uint8_t CAN3_TxFifoFreeLevelGet(void)
{
    return (uint8_t)(CAN3_REGS->CAN_TXFQS & CAN_TXFQS_TFFL_Msk);
}

// *****************************************************************************
/* Function:
    bool CAN3_TxBufferIsBusy(uint8_t bufferNumber)

   Summary:
    Check if Transmission request is pending for the specific Tx buffer.

   Precondition:
    CAN3_Initialize must have been called for the associated CAN instance.

   Parameters:
    None.

   Returns:
    true  - Transmission request is pending.
    false - Transmission request is not pending.
*/
bool CAN3_TxBufferIsBusy(uint8_t bufferNumber)
{
    return ((CAN3_REGS->CAN_TXBRP & (1UL << bufferNumber)) != 0U);
}

// *****************************************************************************
/* Function:
    bool CAN3_TxEventFifoRead(uint8_t numberOfTxEvent, CAN_TX_EVENT_FIFO *txEventFifo)

   Summary:
    Read Tx Event FIFO for the transmitted messages.

   Precondition:
    CAN3_Initialize must have been called for the associated CAN instance.

   Parameters:
    numberOfTxEvent - Total number of Tx Event
    txEventFifo     - Pointer to Tx Event FIFO

   Returns:
    Request status.
    true  - Request was successful.
    false - Request has failed.
*/
bool CAN3_TxEventFifoRead(uint8_t numberOfTxEvent, CAN_TX_EVENT_FIFO *txEventFifo)
{
    uint8_t txefgi     = 0U;
    uint8_t count      = 0U;
    uint8_t *txEvent   = NULL;
    uint8_t *txEvtFifo = (uint8_t *)txEventFifo;

    if (txEventFifo == NULL)
    {
        return false;
    }

    /* Read data from the Rx FIFO0 */
    txefgi = (uint8_t)((CAN3_REGS->CAN_TXEFS & CAN_TXEFS_EFGI_Msk) >> CAN_TXEFS_EFGI_Pos);
    for (count = 0; count < numberOfTxEvent; count++)
    {
        txEvent = (uint8_t *) ((uint8_t *)can3Obj.msgRAMConfig.txEventFIFOAddress + ((uint32_t)txefgi * sizeof(CAN_TX_EVENT_FIFO)));

        memcpy(txEvtFifo, txEvent, sizeof(CAN_TX_EVENT_FIFO));

        if ((count + 1) == numberOfTxEvent)
        {
            break;
        }
        txEvtFifo += sizeof(CAN_TX_EVENT_FIFO);
        txefgi++;
        if (txefgi == 1U)
        {
            txefgi = 0U;
        }
    }

    /* Ack the Tx Event FIFO position */
    CAN3_REGS->CAN_TXEFA = CAN_TXEFA_EFAI((uint32_t)txefgi);

    return true;
}

// *****************************************************************************
/* Function:
    bool CAN3_MessageReceive(uint8_t bufferNumber, CAN_RX_BUFFER *rxBuffer)

   Summary:
    Read a message from the specific Rx Buffer.

   Precondition:
    CAN3_Initialize must have been called for the associated CAN instance.

   Parameters:
    bufferNumber - Rx buffer number
    rxBuffer     - Pointer to Rx buffer

   Returns:
    Request status.
    true  - Request was successful.
    false - Request has failed.
*/
bool CAN3_MessageReceive(uint8_t bufferNumber, CAN_RX_BUFFER *rxBuffer)
{
    uint8_t *rxBuf = NULL;

    if ((bufferNumber >= 1U) || (rxBuffer == NULL))
    {
        return false;
    }

    rxBuf = (uint8_t *) ((uint8_t *)can3Obj.msgRAMConfig.rxBuffersAddress + ((uint32_t)bufferNumber * CAN3_RX_BUFFER_ELEMENT_SIZE));

    memcpy((uint8_t *)rxBuffer, rxBuf, CAN3_RX_BUFFER_ELEMENT_SIZE);

    /* Clear new data flag */
    if (bufferNumber < 32U)
    {
        CAN3_REGS->CAN_NDAT1 = (1UL << bufferNumber);
    }
    else
    {
        CAN3_REGS->CAN_NDAT2 = (1UL << (bufferNumber - 32U));
    }

    return true;
}

// *****************************************************************************
/* Function:
    bool CAN3_MessageReceiveFifo(CAN_RX_FIFO_NUM rxFifoNum, uint8_t numberOfMessage, CAN_RX_BUFFER *rxBuffer)

   Summary:
    Read messages from Rx FIFO0/FIFO1.

   Precondition:
    CAN3_Initialize must have been called for the associated CAN instance.

   Parameters:
    rxFifoNum       - Rx FIFO number
    numberOfMessage - Total number of message
    rxBuffer        - Pointer to Rx buffer

   Returns:
    Request status.
    true  - Request was successful.
    false - Request has failed.
*/
bool CAN3_MessageReceiveFifo(CAN_RX_FIFO_NUM rxFifoNum, uint8_t numberOfMessage, CAN_RX_BUFFER *rxBuffer)
{
    uint8_t rxgi = 0U;
    uint8_t count = 0U;
    uint8_t *rxFifo = NULL;
    uint8_t *rxBuf = (uint8_t *)rxBuffer;
    bool status = false;

    if (rxBuffer == NULL)
    {
        return status;
    }

    switch (rxFifoNum)
    {
        case CAN_RX_FIFO_0:
            /* Read data from the Rx FIFO0 */
            rxgi = (uint8_t)((CAN3_REGS->CAN_RXF0S & CAN_RXF0S_F0GI_Msk) >> CAN_RXF0S_F0GI_Pos);
            for (count = 0; count < numberOfMessage; count++)
            {
                rxFifo = (uint8_t *) ((uint8_t *)can3Obj.msgRAMConfig.rxFIFO0Address + ((uint32_t)rxgi * CAN3_RX_FIFO0_ELEMENT_SIZE));

                memcpy(rxBuf, rxFifo, CAN3_RX_FIFO0_ELEMENT_SIZE);

                if ((count + 1) == numberOfMessage)
                {
                    break;
                }
                rxBuf += CAN3_RX_FIFO0_ELEMENT_SIZE;
                rxgi++;
                if (rxgi == 1U)
                {
                    rxgi = 0U;
                }
            }

            /* Ack the fifo position */
            CAN3_REGS->CAN_RXF0A = CAN_RXF0A_F0AI((uint32_t)rxgi);

            status = true;
            break;
        case CAN_RX_FIFO_1:
            /* Read data from the Rx FIFO1 */
            rxgi = (uint8_t)((CAN3_REGS->CAN_RXF1S & CAN_RXF1S_F1GI_Msk) >> CAN_RXF1S_F1GI_Pos);
            for (count = 0; count < numberOfMessage; count++)
            {
                rxFifo = (uint8_t *) ((uint8_t *)can3Obj.msgRAMConfig.rxFIFO1Address + ((uint32_t)rxgi * CAN3_RX_FIFO1_ELEMENT_SIZE));

                memcpy(rxBuf, rxFifo, CAN3_RX_FIFO1_ELEMENT_SIZE);

                if ((count + 1) == numberOfMessage)
                {
                    break;
                }
                rxBuf += CAN3_RX_FIFO1_ELEMENT_SIZE;
                rxgi++;
                if (rxgi == 1U)
                {
                    rxgi = 0U;
                }
            }
            /* Ack the fifo position */
            CAN3_REGS->CAN_RXF1A = CAN_RXF1A_F1AI((uint32_t)rxgi);

            status = true;
            break;
        default:
            /* Do nothing */
            break;
    }
    return status;
}

// *****************************************************************************
/* Function:
    CAN_ERROR CAN3_ErrorGet(void)

   Summary:
    Returns the error during transfer.

   Precondition:
    CAN3_Initialize must have been called for the associated CAN instance.

   Parameters:
    None.

   Returns:
    Error during transfer.
*/
CAN_ERROR CAN3_ErrorGet(void)
{
    CAN_ERROR error;
    uint32_t   errorStatus = CAN3_REGS->CAN_PSR;

    error = (CAN_ERROR) ((errorStatus & CAN_PSR_LEC_Msk) | (errorStatus & CAN_PSR_EP_Msk) | (errorStatus & CAN_PSR_EW_Msk)
            | (errorStatus & CAN_PSR_BO_Msk) | (errorStatus & CAN_PSR_DLEC_Msk) | (errorStatus & CAN_PSR_PXE_Msk));

    if ((CAN3_REGS->CAN_CCCR & CAN_CCCR_INIT_Msk) == CAN_CCCR_INIT_Msk)
    {
        CAN3_REGS->CAN_CCCR |= CAN_CCCR_CCE_Msk;
        CAN3_REGS->CAN_CCCR = (CAN3_REGS->CAN_CCCR & ~CAN_CCCR_INIT_Msk) | CAN_CCCR_FDOE_Msk | CAN_CCCR_BRSE_Msk;
        while ((CAN3_REGS->CAN_CCCR & CAN_CCCR_INIT_Msk) == CAN_CCCR_INIT_Msk)
        {
            /* Wait for initialization complete */
        }
    }

    return error;
}

// *****************************************************************************
/* Function:
    void CAN3_ErrorCountGet(uint8_t *txErrorCount, uint8_t *rxErrorCount)

   Summary:
    Returns the transmit and receive error count during transfer.

   Precondition:
    CAN3_Initialize must have been called for the associated CAN instance.

   Parameters:
    txErrorCount - Transmit Error Count to be received
    rxErrorCount - Receive Error Count to be received

   Returns:
    None.
*/
void CAN3_ErrorCountGet(uint8_t *txErrorCount, uint8_t *rxErrorCount)
{
    *txErrorCount = (uint8_t)(CAN3_REGS->CAN_ECR & CAN_ECR_TEC_Msk);
    *rxErrorCount = (uint8_t)((CAN3_REGS->CAN_ECR & CAN_ECR_REC_Msk) >> CAN_ECR_REC_Pos);
}

// *****************************************************************************
/* Function:
    void CAN3_MessageRAMConfigSet(uint8_t *msgRAMConfigBaseAddress)

   Summary:
    Set the Message RAM Configuration.

   Precondition:
    CAN3_Initialize must have been called for the associated CAN instance.

   Parameters:
    msgRAMConfigBaseAddress - Pointer to application allocated buffer base address.
                              Application must allocate buffer from non-cached
                              contiguous memory and buffer size must be
                              CAN3_MESSAGE_RAM_CONFIG_SIZE

   Returns:
    None
*/
void CAN3_MessageRAMConfigSet(uint8_t *msgRAMConfigBaseAddress)
{
    uint32_t offset = 0U;

    memset(msgRAMConfigBaseAddress, 0x00, CAN3_MESSAGE_RAM_CONFIG_SIZE);

    /* Set CAN CCCR Init for Message RAM Configuration */
    CAN3_REGS->CAN_CCCR = CAN_CCCR_INIT_Msk;
    while ((CAN3_REGS->CAN_CCCR & CAN_CCCR_INIT_Msk) != CAN_CCCR_INIT_Msk)
    {
        /* Wait for initialization complete */
    }

    /* Set CCE to unlock the configuration registers */
    CAN3_REGS->CAN_CCCR |= CAN_CCCR_CCE_Msk;

    /* Message RAM Base Address Offset */
    CAN3_REGS->CAN_MRCFG = (uint32_t)msgRAMConfigBaseAddress & CAN_MRCFG_OFFSET_Msk;

    can3Obj.msgRAMConfig.rxFIFO0Address = (can_rxf0e_registers_t *)msgRAMConfigBaseAddress;
    offset = CAN3_RX_FIFO0_SIZE;
    /* Receive FIFO 0 Configuration Register */
    CAN3_REGS->CAN_RXF0C = CAN_RXF0C_F0S(1UL) | CAN_RXF0C_F0WM(0UL) | CAN_RXF0C_F0OM_Msk |
            CAN_RXF0C_F0SA((uint32_t)can3Obj.msgRAMConfig.rxFIFO0Address);

    can3Obj.msgRAMConfig.rxFIFO1Address = (can_rxf1e_registers_t *)(msgRAMConfigBaseAddress + offset);
    offset += CAN3_RX_FIFO1_SIZE;
    /* Receive FIFO 1 Configuration Register */
    CAN3_REGS->CAN_RXF1C = CAN_RXF1C_F1S(1UL) | CAN_RXF1C_F1WM(0UL) | CAN_RXF1C_F1OM_Msk |
            CAN_RXF1C_F1SA((uint32_t)can3Obj.msgRAMConfig.rxFIFO1Address);

    can3Obj.msgRAMConfig.rxBuffersAddress = (can_rxbe_registers_t *)(msgRAMConfigBaseAddress + offset);
    offset += CAN3_RX_BUFFER_SIZE;
    CAN3_REGS->CAN_RXBC = CAN_RXBC_RBSA((uint32_t)can3Obj.msgRAMConfig.rxBuffersAddress);

    can3Obj.msgRAMConfig.txBuffersAddress = (can_txbe_registers_t *)(msgRAMConfigBaseAddress + offset);
    offset += CAN3_TX_FIFO_BUFFER_SIZE;
    /* Transmit Buffer/FIFO Configuration Register */
    CAN3_REGS->CAN_TXBC = CAN_TXBC_TFQS(1UL) |
            CAN_TXBC_TBSA((uint32_t)can3Obj.msgRAMConfig.txBuffersAddress);

    can3Obj.msgRAMConfig.txEventFIFOAddress =  (can_txefe_registers_t *)(msgRAMConfigBaseAddress + offset);
    offset += CAN3_TX_EVENT_FIFO_SIZE;
    /* Transmit Event FIFO Configuration Register */
    CAN3_REGS->CAN_TXEFC = CAN_TXEFC_EFWM(0UL) | CAN_TXEFC_EFS(1UL) |
            CAN_TXEFC_EFSA((uint32_t)can3Obj.msgRAMConfig.txEventFIFOAddress);

    can3Obj.msgRAMConfig.stdMsgIDFilterAddress = (can_sidfe_registers_t *)(msgRAMConfigBaseAddress + offset);
    memcpy(can3Obj.msgRAMConfig.stdMsgIDFilterAddress,
           (const void *)can3StdFilter,
           CAN3_STD_MSG_ID_FILTER_SIZE);
    offset += CAN3_STD_MSG_ID_FILTER_SIZE;
    /* Standard ID Filter Configuration Register */
    CAN3_REGS->CAN_SIDFC = CAN_SIDFC_LSS(2UL) |
            CAN_SIDFC_FLSSA((uint32_t)can3Obj.msgRAMConfig.stdMsgIDFilterAddress);

    can3Obj.msgRAMConfig.extMsgIDFilterAddress = (can_xidfe_registers_t *)(msgRAMConfigBaseAddress + offset);
    memcpy(can3Obj.msgRAMConfig.extMsgIDFilterAddress,
           (const void *)can3ExtFilter,
           CAN3_EXT_MSG_ID_FILTER_SIZE);
    /* Extended ID Filter Configuration Register */
    CAN3_REGS->CAN_XIDFC = CAN_XIDFC_LSE(2UL) |
            CAN_XIDFC_FLESA((uint32_t)can3Obj.msgRAMConfig.extMsgIDFilterAddress);

    /* Reference offset variable once to remove warning about the variable not being used after increment */
    (void)offset;

    /* Complete Message RAM Configuration by clearing CAN CCCR Init */
    CAN3_REGS->CAN_CCCR = (CAN3_REGS->CAN_CCCR & ~CAN_CCCR_INIT_Msk) | CAN_CCCR_FDOE_Msk | CAN_CCCR_BRSE_Msk;
    while ((CAN3_REGS->CAN_CCCR & CAN_CCCR_INIT_Msk) == CAN_CCCR_INIT_Msk)
    {
        /* Wait for configuration complete */
    }
}

// *****************************************************************************
/* Function:
    bool CAN3_StandardFilterElementSet(uint8_t filterNumber, can_sidfe_registers_t *stdMsgIDFilterElement)

   Summary:
    Set a standard filter element configuration.

   Precondition:
    CAN3_Initialize and CAN3_MessageRAMConfigSet must have been called
    for the associated CAN instance.

   Parameters:
    filterNumber          - Standard Filter number to be configured.
    stdMsgIDFilterElement - Pointer to Standard Filter Element configuration to be set on specific filterNumber.

   Returns:
    Request status.
    true  - Request was successful.
    false - Request has failed.
*/
bool CAN3_StandardFilterElementSet(uint8_t filterNumber, can_sidfe_registers_t *stdMsgIDFilterElement)
{
    if ((filterNumber > 2U) || (stdMsgIDFilterElement == NULL))
    {
        return false;
    }
    can3Obj.msgRAMConfig.stdMsgIDFilterAddress[filterNumber - 1U].CAN_SIDFE_0 = stdMsgIDFilterElement->CAN_SIDFE_0;

    return true;
}

// *****************************************************************************
/* Function:
    bool CAN3_StandardFilterElementGet(uint8_t filterNumber, can_sidfe_registers_t *stdMsgIDFilterElement)

   Summary:
    Get a standard filter element configuration.

   Precondition:
    CAN3_Initialize and CAN3_MessageRAMConfigSet must have been called
    for the associated CAN instance.

   Parameters:
    filterNumber          - Standard Filter number to get filter configuration.
    stdMsgIDFilterElement - Pointer to Standard Filter Element configuration for storing filter configuration.

   Returns:
    Request status.
    true  - Request was successful.
    false - Request has failed.
*/
bool CAN3_StandardFilterElementGet(uint8_t filterNumber, can_sidfe_registers_t *stdMsgIDFilterElement)
{
    if ((filterNumber > 2U) || (stdMsgIDFilterElement == NULL))
    {
        return false;
    }
    stdMsgIDFilterElement->CAN_SIDFE_0 = can3Obj.msgRAMConfig.stdMsgIDFilterAddress[filterNumber - 1U].CAN_SIDFE_0;

    return true;
}

// *****************************************************************************
/* Function:
    bool CAN3_ExtendedFilterElementSet(uint8_t filterNumber, can_xidfe_registers_t *extMsgIDFilterElement)

   Summary:
    Set a Extended filter element configuration.

   Precondition:
    CAN3_Initialize and CAN3_MessageRAMConfigSet must have been called
    for the associated CAN instance.

   Parameters:
    filterNumber          - Extended Filter number to be configured.
    extMsgIDFilterElement - Pointer to Extended Filter Element configuration to be set on specific filterNumber.

   Returns:
    Request status.
    true  - Request was successful.
    false - Request has failed.
*/
bool CAN3_ExtendedFilterElementSet(uint8_t filterNumber, can_xidfe_registers_t *extMsgIDFilterElement)
{
    if ((filterNumber > 2U) || (extMsgIDFilterElement == NULL))
    {
        return false;
    }
    can3Obj.msgRAMConfig.extMsgIDFilterAddress[filterNumber - 1U].CAN_XIDFE_0 = extMsgIDFilterElement->CAN_XIDFE_0;
    can3Obj.msgRAMConfig.extMsgIDFilterAddress[filterNumber - 1U].CAN_XIDFE_1 = extMsgIDFilterElement->CAN_XIDFE_1;

    return true;
}

// *****************************************************************************
/* Function:
    bool CAN3_ExtendedFilterElementGet(uint8_t filterNumber, can_xidfe_registers_t *extMsgIDFilterElement)

   Summary:
    Get a Extended filter element configuration.

   Precondition:
    CAN3_Initialize and CAN3_MessageRAMConfigSet must have been called
    for the associated CAN instance.

   Parameters:
    filterNumber          - Extended Filter number to get filter configuration.
    extMsgIDFilterElement - Pointer to Extended Filter Element configuration for storing filter configuration.

   Returns:
    Request status.
    true  - Request was successful.
    false - Request has failed.
*/
bool CAN3_ExtendedFilterElementGet(uint8_t filterNumber, can_xidfe_registers_t *extMsgIDFilterElement)
{
    if ((filterNumber > 2U) || (extMsgIDFilterElement == NULL))
    {
        return false;
    }
    extMsgIDFilterElement->CAN_XIDFE_0 = can3Obj.msgRAMConfig.extMsgIDFilterAddress[filterNumber - 1U].CAN_XIDFE_0;
    extMsgIDFilterElement->CAN_XIDFE_1 = can3Obj.msgRAMConfig.extMsgIDFilterAddress[filterNumber - 1U].CAN_XIDFE_1;

    return true;
}

void CAN3_SleepModeEnter(void)
{
    CAN3_REGS->CAN_CCCR |=  CAN_CCCR_CSR_Msk;
    while ((CAN3_REGS->CAN_CCCR & CAN_CCCR_CSA_Msk) != CAN_CCCR_CSA_Msk)
    {
        /* Wait for clock stop request to complete */
    }
}

void CAN3_SleepModeExit(void)
{
    CAN3_REGS->CAN_CCCR &=  ~CAN_CCCR_CSR_Msk;
    while ((CAN3_REGS->CAN_CCCR & CAN_CCCR_CSA_Msk) == CAN_CCCR_CSA_Msk)
    {
        /* Wait for no clock stop */
    }
    CAN3_REGS->CAN_CCCR &= ~CAN_CCCR_INIT_Msk;
    while ((CAN3_REGS->CAN_CCCR & CAN_CCCR_INIT_Msk) == CAN_CCCR_INIT_Msk)
    {
        /* Wait for initialization complete */
    }
}


// *****************************************************************************
/* Function:
    void CAN3_TxFifoCallbackRegister(CAN_TX_FIFO_CALLBACK callback, uintptr_t contextHandle)

   Summary:
    Sets the pointer to the function (and it's context) to be called when the
    given CAN's transfer events occur.

   Precondition:
    CAN3_Initialize must have been called for the associated CAN instance.

   Parameters:
    callback - A pointer to a function with a calling signature defined
    by the CAN_TX_FIFO_CALLBACK data type.

    contextHandle - A value (usually a pointer) passed (unused) into the function
    identified by the callback parameter.

   Returns:
    None.
*/
void CAN3_TxFifoCallbackRegister(CAN_TX_FIFO_CALLBACK callback, uintptr_t contextHandle)
{
    if (callback == NULL)
    {
        return;
    }

    can3TxFifoCallbackObj.callback = callback;
    can3TxFifoCallbackObj.context = contextHandle;
}

// *****************************************************************************
/* Function:
    void CAN3_TxEventFifoCallbackRegister(CAN_TX_EVENT_FIFO_CALLBACK callback, uintptr_t contextHandle)

   Summary:
    Sets the pointer to the function (and it's context) to be called when the
    given CAN's transfer events occur.

   Precondition:
    CAN3_Initialize must have been called for the associated CAN instance.

   Parameters:
    callback - A pointer to a function with a calling signature defined
    by the CAN_TX_EVENT_FIFO_CALLBACK data type.

    contextHandle - A value (usually a pointer) passed (unused) into the function
    identified by the callback parameter.

   Returns:
    None.
*/
void CAN3_TxEventFifoCallbackRegister(CAN_TX_EVENT_FIFO_CALLBACK callback, uintptr_t contextHandle)
{
    if (callback == NULL)
    {
        return;
    }

    can3TxEventFifoCallbackObj.callback = callback;
    can3TxEventFifoCallbackObj.context = contextHandle;
}

// *****************************************************************************
/* Function:
    void CAN3_RxBuffersCallbackRegister(CAN_TXRX_BUFFERS_CALLBACK callback, uintptr_t contextHandle)

   Summary:
    Sets the pointer to the function (and it's context) to be called when the
    given CAN's transfer events occur.

   Precondition:
    CAN3_Initialize must have been called for the associated CAN instance.

   Parameters:
    callback - A pointer to a function with a calling signature defined
    by the CAN_TXRX_BUFFERS_CALLBACK data type.

    contextHandle - A value (usually a pointer) passed (unused) into the function
    identified by the callback parameter.

   Returns:
    None.
*/
void CAN3_RxBuffersCallbackRegister(CAN_TXRX_BUFFERS_CALLBACK callback, uintptr_t contextHandle)
{
    if (callback == NULL)
    {
        return;
    }

    can3RxBufferCallbackObj.callback = callback;
    can3RxBufferCallbackObj.context = contextHandle;
}

// *****************************************************************************
/* Function:
    void CAN3_RxFifoCallbackRegister(CAN_RX_FIFO_NUM rxFifoNum, CAN_RX_FIFO_CALLBACK callback, uintptr_t contextHandle)

   Summary:
    Sets the pointer to the function (and it's context) to be called when the
    given CAN's transfer events occur.

   Precondition:
    CAN3_Initialize must have been called for the associated CAN instance.

   Parameters:
    rxFifoNum - Rx FIFO Number

    callback  - A pointer to a function with a calling signature defined
    by the CAN_RX_FIFO_CALLBACK data type.

    contextHandle - A value (usually a pointer) passed (unused) into the function
    identified by the callback parameter.

   Returns:
    None.
*/
void CAN3_RxFifoCallbackRegister(CAN_RX_FIFO_NUM rxFifoNum, CAN_RX_FIFO_CALLBACK callback, uintptr_t contextHandle)
{
    if (callback == NULL)
    {
        return;
    }

    can3RxFifoCallbackObj[rxFifoNum].callback = callback;
    can3RxFifoCallbackObj[rxFifoNum].context = contextHandle;
}

// *****************************************************************************
/* Function:
    void CAN3_InterruptHandler(void)

   Summary:
    CAN3 Peripheral Interrupt Handler.

   Description:
    This function is CAN3 Peripheral Interrupt Handler and will
    called on every CAN3 interrupt.

   Precondition:
    None.

   Parameters:
    None.

   Returns:
    None.

   Remarks:
    The function is called as peripheral instance's interrupt handler if the
    instance interrupt is enabled. If peripheral instance's interrupt is not
    enabled user need to call it from the main while loop of the application.
*/
void CAN3_InterruptHandler(void)
{
    uint32_t newData1 = 0U;
    uint8_t bufferNumber = 0U;
    uint8_t numberOfMessage = 0;
    uint8_t numberOfTxEvent = 0;

    uint32_t ir = CAN3_REGS->CAN_IR;

    /* Check if error occurred */
    if ((ir & CAN_IR_BO_Msk) != 0U)
    {
        CAN3_REGS->CAN_IR = CAN_IR_BO_Msk;
    }
    /* New Message in Rx FIFO 0 */
    if ((ir & CAN_IR_RF0N_Msk) != 0U)
    {
        CAN3_REGS->CAN_IR = CAN_IR_RF0N_Msk;

        numberOfMessage = (uint8_t)(CAN3_REGS->CAN_RXF0S & CAN_RXF0S_F0FL_Msk);

        if (can3RxFifoCallbackObj[CAN_RX_FIFO_0].callback != NULL)
        {
            can3RxFifoCallbackObj[CAN_RX_FIFO_0].callback(numberOfMessage, can3RxFifoCallbackObj[CAN_RX_FIFO_0].context);
        }
    }
    /* New Message in Rx FIFO 1 */
    if ((ir & CAN_IR_RF1N_Msk) != 0U)
    {
        CAN3_REGS->CAN_IR = CAN_IR_RF1N_Msk;

        numberOfMessage = (uint8_t)(CAN3_REGS->CAN_RXF1S & CAN_RXF1S_F1FL_Msk);

        if (can3RxFifoCallbackObj[CAN_RX_FIFO_1].callback != NULL)
        {
            can3RxFifoCallbackObj[CAN_RX_FIFO_1].callback(numberOfMessage, can3RxFifoCallbackObj[CAN_RX_FIFO_1].context);
        }
    }
    /* New Message in Dedicated Rx Buffer */
    if ((ir & CAN_IR_DRX_Msk) != 0U)
    {
        CAN3_REGS->CAN_IR = CAN_IR_DRX_Msk;

        newData1 = CAN3_REGS->CAN_NDAT1;
        if (newData1 != 0U)
        {
            for (bufferNumber = 0U; bufferNumber < 1U; bufferNumber++)
            {
                if ((newData1 & (1UL << bufferNumber)) == (1UL << bufferNumber))
                {
                    if (can3RxBufferCallbackObj.callback != NULL)
                    {
                        can3RxBufferCallbackObj.callback(bufferNumber, can3RxBufferCallbackObj.context);
                    }
                }
            }
        }
    }

    /* TX FIFO is empty */
    if ((ir & CAN_IR_TFE_Msk) != 0U)
    {
        CAN3_REGS->CAN_IR = CAN_IR_TFE_Msk;
        if (can3TxFifoCallbackObj.callback != NULL)
        {
            can3TxFifoCallbackObj.callback(can3TxFifoCallbackObj.context);
        }
    }
    /* Tx Event FIFO new entry */
    if ((ir & CAN_IR_TEFN_Msk) != 0U)
    {
        CAN3_REGS->CAN_IR = CAN_IR_TEFN_Msk;

        numberOfTxEvent = (uint8_t)(CAN3_REGS->CAN_TXEFS & CAN_TXEFS_EFFL_Msk);

        if (can3TxEventFifoCallbackObj.callback != NULL)
        {
            can3TxEventFifoCallbackObj.callback(numberOfTxEvent, can3TxEventFifoCallbackObj.context);
        }
    }
}

/*******************************************************************************
 End of File
*/
