/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 *
 * @file hat_uart_test.c
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#define TEST_UART_PATTERN_TX    "abcdef01234!@#$%"

static void test_uart_putln(uart_handle_t *uart, const char *str)
{
    while (str && *str) {
        uart_putc(uart, *str);
        str++;
    }
    uart_putc(uart, '\r');
    uart_putc(uart, '\n');
}

static void print_uart_initcfg(const uart_initcfg_t *cfg)
{
    const char *STOPBITS_STR[] = { "1", "1.5", "2" };
    const char *PARITY_STR[] = { "none", "even", "odd" };
    const char *FLOWCTRL_STR[] = { "none", "rts", "cts", "rts/cts" };
    printf("speed: %d, ", cfg->baudrate);
    printf("data: %d, ", cfg->data_len);
    printf("parity: %s, ", PARITY_STR[cfg->parity]);
    printf("stop bits: %s, ", STOPBITS_STR[cfg->stopbits]);
    printf("flow ctrl: %s\n", FLOWCTRL_STR[cfg->flow_ctrl]);
}

static int test_uart_with_cfg(int id, uart_handle_t *uart, const uart_initcfg_t *cfg)
{
    int c;
    
    printf("setup the terminal to UART%d as below, press any key if ready...\n", id);
    print_uart_initcfg(cfg);
    sys_mdelay(200);
    
    uart_initcfg(uart, cfg);
    c = getchar();
    
    test_uart_putln(uart, TEST_UART_PATTERN_TX);
    printf("received '%s' on UART%d (y/n)? ", TEST_UART_PATTERN_TX, id);
    c = getchar();
    printf("%c\n\n", c);

    return (c == 'y' || c == 'Y') ? 0 : 1;
}

static int test_uart_with_diff_baudrate(int id, uart_handle_t *uart)
{
    uart_initcfg_t cfg = {
        CONSOLE_UART_INITCFG
    };
    const int BAUDRATE[] = {9600, 115200, 230400, 921600};
    int i, err = 0;
    
    printf("UART%d: test with different BAUDRATE begin.\n", id);
    for (i = 0; i < ARRAY_SIZE(BAUDRATE); i++) {
        cfg.baudrate = BAUDRATE[i];
        err += test_uart_with_cfg(id, uart, &cfg);
    }
    if (err) {
        printf("UART%d: test with different BAUDRATE end. %d failed\n\n", id, err);
    }

    return err;
}

static int test_uart_with_diff_parity(int id, uart_handle_t *uart)
{
    uart_initcfg_t cfg = {
        CONSOLE_UART_INITCFG
    };
    const int PARITY[] = {UART_PARITY_NONE, UART_PARITY_EVEN, UART_PARITY_ODD};
    int i, err = 0;

    printf("UART%d: test with different PARITY begin.\n", id);
    for (i = 0; i < ARRAY_SIZE(PARITY); i++) {
        cfg.parity = PARITY[i];
        err += test_uart_with_cfg(id, uart, &cfg);
    }
    if (err) {
        printf("UART%d: test with different PARITY end. %d failed\n\n", id, err);
    }

    return err ? 1 : 0;
}

static int test_uart_with_diff_flowctrl(int id, uart_handle_t *uart)
{
    uart_initcfg_t cfg = {
        CONSOLE_UART_INITCFG
    };
    const int HWFLOWCTRL[] = {UART_FLOWCTRL_RTS, UART_FLOWCTRL_CTS, UART_FLOWCTRL_RTS_CTS, UART_FLOWCTRL_NONE};
    int i, err = 0;
    
    printf("UART%d: test with different HWFLOWCTRL begin.\n", id);
    for (i = 0; i < ARRAY_SIZE(HWFLOWCTRL); i++) {
        cfg.baudrate = 3000000;
        cfg.flow_ctrl = HWFLOWCTRL[i];
        err += test_uart_with_cfg(id, uart, &cfg);
    }
    if (err) {
        printf("UART%d: test with different FLOWCTRL end. %d failed\n\n", id, err);
    }

    return err;
}

