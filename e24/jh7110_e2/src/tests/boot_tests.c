/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * 
 * @file boot_tests.c
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"
#include "hal_tests_include.h"

//All boards share same intc testcases
#if defined(HAL_ALL_TESTS_ENABLED) || defined(HAL_INTC_TESTS_ENABLED)

DEFINE_MODULE_TESTCASES_BEGIN(intc)
    {"intc soft self core0", NULL, NULL, 0, 0, 0, 0, run_intc_soft_self_tests, 0, INTC_CORE_0, INTC_IRQ_SCFG_int_0, INTC_IRQ_SCFG_int_3 },
DEFINE_MODULE_TESTCASES_END(intc)

REGISTER_MODULE_TESTSUITE(intc,intc)

#endif /* HAL_ALL_TESTS_ENABLED) || HAL_INTC_TESTS_ENABLED */
