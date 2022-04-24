/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 *
 * @file bsp_hal_intc.h
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#ifndef __BSP_HAL_INTC_H_
#define __BSP_HAL_INTC_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef enum
{
    INTC_CORE_0,
} intc_core_t;

typedef enum
{
    //0~59 defined in rtl generated irq_macro.h, U0_INT_CTRL_INT_SRC_IN__xxx
    //FIXME: shall we define enum items for these irqs?

    INTC_IRQ_SCFG_int_0 = U0_INT_CTRL_INT_SRC_IN__U1_CAN_CTRL_HOST_IRQ + 1,
    INTC_IRQ_SCFG_int_1,
    INTC_IRQ_SCFG_int_2,
    INTC_IRQ_SCFG_int_3,
} intc_irq_t;

void *sys_intc_init(int id, intc_core_t self, void (*handler)(int, void*), void *priv);
int sys_intc_deinit(int id, intc_core_t self);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_HAL_INTC_H_ */

