/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * 
 * @file gpio_tests.c
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"
#include "hal_tests_include.h"

#ifdef BSP_BOARD_FPGA_ISP
#if defined(HAL_ALL_TESTS_ENABLED) || defined(HAL_GPIO_TESTS_ENABLED)

DEFINE_MODULE_TESTCASES_BEGIN(gpio)
    //{"uart", NULL, NULL, 0, 0, 0, 0, run_uart_tests, 0, 0, 0, 0 },
    {"gpio pull", NULL, NULL, 0, 0, 0, 0, run_gpio_tests, GPIO19, GPIO20, -1, -1 },
    {"gpio irq", NULL, NULL, 0, 0, 0, 0, run_gpio_irq_tests, GPIO19, GPIO20, -1, -1 },
DEFINE_MODULE_TESTCASES_END(gpio)

REGISTER_MODULE_TESTSUITE(gpio,g)

#endif /* HAL_ALL_TESTS_ENABLED || HAL_GPIO_TESTS_ENABLED */
#endif /* BSP_BOARD_FPGA_ISP */
