/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 *
 * @file hal_intc.c
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"

#ifdef HAL_INTC_ENABLED

__WEAK void *intc_open(int id, intc_core_t self)
{
    return NULL;
}

__WEAK int intc_close(void *intc)
{
    return NULL;
}

__WEAK int intc_register(void *intc, int irq, void (*handler)(int, void *), void *priv)
{
    return 0;
}

__WEAK int intc_enable(void *intc, int irq)
{
    return 0;
}

__WEAK int intc_disable(void *intc, int irq)
{
    return 0;
}

__WEAK int intc_trigger(void *intc, int irq)
{
    return 0;
}

__WEAK int intc_irq_num(void *intc)
{
    return 0;
}

#endif /* HAL_INTC_ENABLED */

