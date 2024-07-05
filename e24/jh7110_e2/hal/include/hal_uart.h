/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_uart.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __HAL_UART_H_
#define __HAL_UART_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define HAL_UART_NUM    SYS_UART_NUM

typedef enum
{
    UART_STOPBITS_1,        /*!< UART frame with 1 stop bit    */
    UART_STOPBITS_1_5,      /*!< UART frame with 1.5 stop bits */
    UART_STOPBITS_2,        /*!< UART frame with 2 stop bits   */
} uart_stopbits_t;

typedef enum
{
    UART_FLOWCTRL_NONE,     /*!< No hardware control       */
    UART_FLOWCTRL_RTS,      /*!< Request To Send           */
    UART_FLOWCTRL_CTS,      /*!< Clear To Send             */
    UART_FLOWCTRL_RTS_CTS,  /*!< Request and Clear To Send */
} uart_flowctrl_t;

typedef enum
{
    UART_PARITY_NONE,       /*!< No parity   */
    UART_PARITY_EVEN,       /*!< Even parity */
    UART_PARITY_ODD,        /*!< Odd parity  */
} uart_parity_t;

typedef struct
{
    uart_stopbits_t stopbits;
    int baudrate;
    int data_len;
    uart_parity_t parity;
    uart_flowctrl_t flow_ctrl;
} uart_initcfg_t;

typedef struct uart_handle_t
{
    int id;
    void *base;
    void *priv;
} uart_handle_t;

uart_handle_t *uart_open(int id, const uart_initcfg_t *cfg);
int uart_initcfg(uart_handle_t *uart, const uart_initcfg_t *cfg);
int uart_close(uart_handle_t *uart);
int uart_putc(uart_handle_t *uart, char c);
int uart_getc(uart_handle_t *uart);
int uart_tstc(uart_handle_t *uart);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __HAL_UART_H_ */

