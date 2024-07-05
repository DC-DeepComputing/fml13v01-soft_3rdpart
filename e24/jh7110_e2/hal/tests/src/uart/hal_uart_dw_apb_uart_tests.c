/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 *
 * @file hat_uart_test.c
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"
#include "hal_tests_include.h"

#if defined(HAL_UART_ENABLED) && defined(HAL_UART_DW_APB_UART)

#include "hal_uart_tests.inc"

int run_uart_tests(void *dev, void *p0, void *p1, void *p2, void *p3)
{
    uart_handle_t *uart;
    int i;
    int err = 0;
    
    printf("%s: may contains manual tests, please follow the instruction to proceed.\n\n", __func__);
    for (i = 0; i < HAL_UART_NUM; i++) {
        if (i == CONSOLE_UART_ID) {
            printf("skip console uart %d\n", i);
            continue;
        }
        uart = uart_open(i, NULL);
        if (!uart) {
            printf("error: failed to open uart%d\n", i);
            err += 1;
            continue;
        }
        
        err += test_uart_with_diff_parity(i, uart);
        err += test_uart_with_diff_baudrate(i, uart);
        //err += test_uart_with_diff_flowctrl(i, uart);

        uart_close(uart);
    }
    
    return err ? 1 : 0;
}

#endif /* HAL_UART_ENABLED && HAL_UART_DW_APB_UART */

