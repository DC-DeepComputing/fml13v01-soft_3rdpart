/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_uart_primecell_pl011.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __HAL_UART_PRIMECELL_PL011_H_
#define __HAL_UART_PRIMECELL_PL011_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define RSR_OE               0x08
#define RSR_BE               0x04
#define RSR_PE               0x02
#define RSR_FE               0x01

#define FR_TXFE              0x80
#define FR_RXFF              0x40
#define FR_TXFF              0x20
#define FR_RXFE              0x10
#define FR_BUSY              0x08
#define FR_TMSK              (FR_TXFF + FR_BUSY)


#define LCRH_SPS             (1 << 7)
#define LCRH_WLEN_8          (3 << 5)
#define LCRH_WLEN_7          (2 << 5)
#define LCRH_WLEN_6          (1 << 5)
#define LCRH_WLEN_5          (0 << 5)
#define LCRH_FEN             (1 << 4)
#define LCRH_STP2            (1 << 3)
#define LCRH_EPS             (1 << 2)
#define LCRH_PEN             (1 << 1)
#define LCRH_BRK             (1 << 0)

#define CR_CTSEN             (1 << 15)
#define CR_RTSEN             (1 << 14)
#define CR_OUT2              (1 << 13)
#define CR_OUT1              (1 << 12)
#define CR_RTS               (1 << 11)
#define CR_DTR               (1 << 10)
#define CR_RXE               (1 << 9)
#define CR_TXE               (1 << 8)
#define CR_LPE               (1 << 7)
#define CR_IIRLP             (1 << 2)
#define CR_SIREN             (1 << 1)
#define CR_UARTEN            (1 << 0)

#define IMSC_OEIM            (1 << 10)
#define IMSC_BEIM            (1 << 9)
#define IMSC_PEIM            (1 << 8)
#define IMSC_FEIM            (1 << 7)
#define IMSC_RTIM            (1 << 6)
#define IMSC_TXIM            (1 << 5)
#define IMSC_RXIM            (1 << 4)
#define IMSC_DSRMIM          (1 << 3)
#define IMSC_DCDMIM          (1 << 2)
#define IMSC_CTSMIM          (1 << 1)
#define IMSC_RIMIM           (1 << 0)

typedef struct
{
    __IO uint32_t dr;
    union {
        __IO uint32_t rsr;
        __IO uint32_t ecr;
    };
    uint8_t rsvd_0[16];
    __I uint32_t fr;
    uint8_t rsvd_1[4];
    __IO uint32_t ilpr;
    __IO uint32_t ibrd;
    __IO uint32_t fbrd;
    __IO uint32_t lcr_h;
    __IO uint32_t cr;
    __IO uint32_t ifls;
    __IO uint32_t imsc;
    __I uint32_t ris;
    __I uint32_t mis;
    __O uint32_t icr;
    __IO uint32_t dmacr;
} uart_regs_t;

typedef struct
{
    int dummy;
} uart_dev_t;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __HAL_UART_PRIMECELL_PL011_H_ */

