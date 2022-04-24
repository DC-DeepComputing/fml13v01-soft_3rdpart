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

#if defined(HAL_UART_ENABLED) && defined(HAL_UART_PRIMECELL_PL011)

#include "hal_uart_tests.inc"

int run_uart_tests(void *dev, void *p0, void *p1, void *p2, void *p3)
{
    uart_handle_t *uart;
    int i;
    int err = 0;
    
    printf("%s: may contains manual tests, please follow the instruction to proceed.\n\n", __func__);
    for (i = 0; i < HAL_UART_NUM; i++) {
        uart = uart_open(i, NULL);
        if (!uart) {
            printf("error: failed to open uart%d\n", i);
            err++;
            continue;
        }
        
        err += test_uart_with_diff_parity(i, uart);
        err += test_uart_with_diff_baudrate(i, uart);

        if (i == CONSOLE_UART_ID) {
            uart_initcfg_t consle_uart_cfg = {
                CONSOLE_UART_INITCFG
            };
            printf("restore console uart default, press any key when ready...\n");
            print_uart_initcfg(&consle_uart_cfg);
            getchar();
        }
        uart_close(uart);
        if (i == CONSOLE_UART_ID) {
            sys_console_init();
        }
    }
    
    return err ? 1 : 0;
}

#endif /* HAL_UART_ENABLED && HAL_UART_PRIMECELL_PL011 */

