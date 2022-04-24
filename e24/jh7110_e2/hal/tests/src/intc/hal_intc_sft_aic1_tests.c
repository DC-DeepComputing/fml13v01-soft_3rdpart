/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 *
 * @file hal_intc_test.c
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"
#include "hal_tests_include.h"

#if defined(HAL_INTC_ENABLED) && defined(HAL_INTC_SFT_AIC1)

#define PRINT       printf
//#define PRINT(...)

#include "hal_intc_tests.inc"

int run_intc_soft_self_tests(void *dev, void *p0, void *p1, void *p2, void *p3)
{
    int id = (int)p0;
    intc_core_t self = (intc_core_t)p1;
    int irq_begin = (int)p2;
    int irq_end = (int)p3;

    PRINT("test intc: id %d, CORE_%d\n", id, self);
    void *intc = intc_open(id, self);
    if (!intc) {
        PRINT("invalid id\n");
        return -ENODEV;
    }

    int result = test_intc_soft_self_range(intc, irq_begin, irq_end);
    intc_close(intc);
    return result;
}

#endif /* HAL_INTC_ENABLED && HAL_INTC_SFT_AIC1 */

