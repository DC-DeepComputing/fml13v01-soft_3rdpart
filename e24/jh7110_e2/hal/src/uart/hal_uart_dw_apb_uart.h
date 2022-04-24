/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_uart_dw_apb_uart.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __HAL_UART_DW_APB_UART_H_
#define __HAL_UART_DW_APB_UART_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define  SER_RBR    (0x00)
#define  SER_THR    (0x00)
#define  SER_DLL    (0x00)
#define  SER_DLH    (0x04)
#define  SER_IER    (0x04)
#define  SER_IIR    (0x08)
#define  SER_FCR    (0x08)
#define  SER_LCR    (0x0C)
#define  SER_MCR    (0x10)
#define  SER_LSR    (0x14)
#define  SER_MSR    (0x18)
#define  SER_SCR    (0x1C)

//UART_LCR bit define
#define LCR_WORD_LEN5       (0<<0)
#define LCR_WORD_LEN6       (1<<0)
#define LCR_WORD_LEN7       (2<<0)
#define LCR_WORD_LEN8       (3<<0)
#define LCR_STOP_1BIT       (0<<2)
#define LCR_STOP_2BIT       (1<<2)
#define LCR_PE              (1<<3)
#define LCR_EPS             (1<<4)
#define LCR_SP              (1<<5)
#define LCR_BC              (1<<6)
#define LCR_DLAB            (1<<7)

//IER, interrupt enable reg
#define IER_ERBFI           (1<<0)
#define IER_ETBEI           (1<<1)
#define IER_ELSI            (1<<2)
#define IER_EDSSI           (1<<3)
#define IER_PTIME           (1<<7)

//IIR, interrupt identify reg
#define INTR_ID_RLSI        0x06
#define INTR_ID_DATAVL      0x04
#define INTR_ID_TIMEOUT     0x0C
#define INTR_ID_THR         0x02

//FCR
#define RCVR_TRIG_1C        (0x00 << 0x06) //1 char 
#define RCVR_TRIG_QFL       (0x01 << 0x06) //1/4 FIFO
#define RCVR_TRIG_HFL       (0x02 << 0x06) //1/2 FIFO
#define RCVR_TRIG_LTF       (0x03 << 0x06) //2 less than full

#define TXEM_TRIG_EMT       (0x00 << 0x04) //FIFO empty
#define TXEM_TRIG_2C        (0x00 << 0x04) //2 char 
#define TXEM_TRIG_QFL       (0x02 << 0x04) //1/4 FIFO
#define TXEM_TRIG_HFL       (0x03 << 0x04) //1/2 FIFO

#define DMA_MOD1            (0x01 << 0x03) 
#define DMA_MOD0            (0x00 << 0x03)
#define TXFIFO_RST          (0x01 << 0x02) 
#define RXFIFO_RST          (0x01 << 0x01)
#define FIFO_ENA            (0x01 << 0x00)

//LSR
#define DATA_RDY            (0x01<<0x00) //at least one byte available
#define RCV_OVERUN          (0x01<<0x01)
#define ERR_PARITY          (0x01<<0x02)
#define ERR_FRAMING         (0x01<<0x03)
#define ID_BREAK            (0x01<<0x04) //break interrupt bit
#define ID_THRE             (0x01<<0x05) //in FIFO THRE mode, it is the xmit fifo full flag !!!
#define ID_TEMT             (0x01<<0x06) 
#define ERR_RFE             (0x01<<0x07)

/* MCR */
#define MCR_DTR             (0x01<<0x00) /* dtr output */
#define MCR_RTS             (0x01<<0x01) /* rts output */
#define MCR_OUT1            (0x01<<0x02) /* output #1 */
#define MCR_OUT2            (0x01<<0x03) /* output #2 */
#define MCR_LOOP            (0x01<<0x04) /* loop back */
#define MCR_AFCE            (0x01<<0x05) /* auto flow control enable */

typedef struct
{
    union {
        __I uint32_t r_rbr;         /*!< Receive Buffer Register,                 Address offset = 0x00 */
        __O uint32_t r_thr;         /*!< Transmit Holding Register,               Address offset = 0x00 */
        __IO uint32_t r_dll;        /*!< Divisor Latch (Low),                     Address offset = 0x00 */
    };
    union {
        __IO uint32_t r_dlh;        /*!< Divisor Latch (High),                    Address offset = 0x04 */
        __IO uint32_t r_ier;        /*!< Interrupt Enable Register,               Address offset = 0x04 */
    };
    union {
        __I uint32_t r_iir;         /*!< Interrupt Identification Register,       Address offset = 0x08 */
        __O uint32_t r_fcr;         /*!< FIFO Control Register,                   Address offset = 0x08 */
    };
    __IO uint32_t r_lcr;            /*!< Line Control Register,                   Address offset = 0x0C  */
    __IO uint32_t r_mcr;            /*!< Modem Control Register,                  Address offset = 0x10  */
    __I uint32_t r_lsr;             /*!< Line Status Register,                    Address offset = 0x14  */
    __I uint32_t r_msr;             /*!< Modem Status Register,                   Address offset = 0x18  */
    __IO uint32_t r_scr;            /*!< Scratchpad Register,                     Address offset = 0x1C  */
    __IO uint32_t r_lpdll;          /*!< Low Power Divisor Latch (Low) Register,  Address offset = 0x20  */
    __IO uint32_t r_lpdlh;          /*!< Low Power Divisor Latch (High) Register, Address offset = 0x24  */
    uint8_t rsvd_0[8];              /*!< Reserved,                                Address offset = 0x28 -0x2C */
    union {
        __I uint32_t r_srbr[16];    /*!< Shadow Receive Buffer Register,          Address offset = 0x30 -0x6C */
        __O uint32_t r_sthr[16];    /*!< Shadow Transmit Holding Register,        Address offset = 0x30 -0x6C */
    };
    __IO uint32_t r_far;            /*!< FIFO Access Register,                    Address offset = 0x70  */
    __I uint32_t r_tfr;             /*!< Transmit FIFO Read,                      Address offset = 0x74  */
    __O uint32_t r_rfw;             /*!< Receive FIFO Write,                      Address offset = 0x78  */
    __I uint32_t r_usr;             /*!< UART Status Register,                    Address offset = 0x7C  */
    __I uint32_t r_tfl;             /*!< Transmit FIFO Level,                     Address offset = 0x80  */
    __I uint32_t r_rfl;             /*!< Receive FIFO Level,                      Address offset = 0x84  */
    __O uint32_t r_srr;             /*!< Software Reset Register,                 Address offset = 0x88  */
    __IO uint32_t r_srts;           /*!< Shadow Request to Send,                  Address offset = 0x8C  */
    __IO uint32_t r_sbcr;           /*!< Shadow Break Control Register,           Address offset = 0x90  */
    __IO uint32_t r_sdmam;          /*!< Shadow DMA Mode,                         Address offset = 0x94  */
    __IO uint32_t r_sfe;            /*!< Shadow FIFO Enable,                      Address offset = 0x98  */
    __IO uint32_t r_srt;            /*!< Shadow RCVR Trigger,                     Address offset = 0x9C  */
    __IO uint32_t r_stet;           /*!< Shadow TX Empty Trigger,                 Address offset = 0xA0  */
    __IO uint32_t r_htx;            /*!< Halt TX,                                 Address offset = 0xA4  */
    __O uint32_t r_dmasa;           /*!< DMA Software Acknowledge,                Address offset = 0xA8  */
    __IO uint32_t r_tcr;            /*!< Transceiver Control Register,            Address offset = 0xAC  */
    __IO uint32_t r_de_en;          /*!< Driver Output Enable Register.,          Address offset = 0xB0  */
    __IO uint32_t r_re_en;          /*!< Receiver Output Enable Register.,        Address offset = 0xB4  */
    __IO uint32_t r_det;            /*!< Driver Output Enable Timing Register.,   Address offset = 0xB8  */
    __IO uint32_t r_tat;            /*!< TurnAround Timing Register.,             Address offset = 0xBC  */
    __IO uint32_t r_dlf;            /*!< Divisor Latch Fractional Value.,         Address offset = 0xC0  */
    __IO uint32_t r_rar;            /*!< Receive Address Register,                Address offset = 0xC4  */
    __IO uint32_t r_tar;            /*!< Transmit Address Register,               Address offset = 0xC8  */
    __IO uint32_t r_lcr_ext;        /*!< Line Extended Control Register,          Address offset = 0xCC  */
    uint8_t rsvd_1[36];             /*!< Reserved,                                Address offset = 0xD0 -0xF0 */
    __I uint32_t r_cpr;             /*!< Component Parameter Register,            Address offset = 0xF4  */
    __I uint32_t r_ucv;             /*!< UART Component Version,                  Address offset = 0xF8  */
    __I uint32_t r_ctr;             /*!< Component Type Register,                 Address offset = 0xFC  */
} uart_regs_t;

typedef struct
{
    int dummy;
} uart_priv_t;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __HAL_UART_DW_APB_UART_H_ */

