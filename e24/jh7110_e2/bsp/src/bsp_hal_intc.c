/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 *
 * @file bsp_hal_intc.c
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#include "bsp_include.h"

static int sys_intc_get_root_irq(int id, int self)
{
    return (id != 0 || self != INTC_CORE_0) ? -1 : U0_E2_SFT7110_LOCAL_INTERRUPTS_0__U0_INT_CTRL_INTC_IRQ_0;
}

void *sys_intc_init(int id, intc_core_t self, void (*handler)(int, void*), void *priv)
{
    int root_irq = sys_intc_get_root_irq(id, self);
    if (root_irq < 0) {
        return NULL;
    }

    sys_irq_register(root_irq, handler, priv);
    sys_irq_enable(root_irq);
    u0_int_ctrl_enable();
    
    return (void*)U0_INT_CTRL__SAIF_BD_APB__BASE_ADDR;
}

int sys_intc_deinit(int id, intc_core_t self)
{
    int root_irq = sys_intc_get_root_irq(id, self);
    
    sys_irq_disable(root_irq);
    u0_int_ctrl_disable();

    return 0;
}
