/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_irq.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __BSP_IRQ_H_
#define __BSP_IRQ_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

//interrupt ids
// defined in rtl generated "irq_macro.h"


typedef void (*sys_irq_hanlder_t)(int, void *);
int sys_irq_register(int id, sys_irq_hanlder_t handler, void *priv);
int sys_irq_enable(int id);
int sys_irq_disable(int id);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_IRQ_H_ */

