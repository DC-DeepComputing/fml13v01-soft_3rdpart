/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 *
 * @file hal_intc.h
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#ifndef __HAL_INTC_H
#define __HAL_INTC_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

void *intc_open(int id, intc_core_t self);
int intc_close(void *intc);
int intc_register(void *intc, int irq, void (*handler)(int, void *), void *priv);
int intc_enable(void *intc, int irq);
int intc_disable(void *intc, int irq);
int intc_trigger(void *intc, int irq);
int intc_irq_num(void *intc);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __HAL_INTC_H */

