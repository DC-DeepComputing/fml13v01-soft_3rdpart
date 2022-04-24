/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 *
 * @file hal_intc_sft_aic1.c
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"

#if defined(HAL_INTC_ENABLED) && defined(HAL_INTC_SFT_AIC1)

#include "hal_intc_sft_aic1.h"

#define IS_INVALID(irq)     ((irq)<0 || (irq)>=INTC_IRQ_NUM)

static void intc_root_handler(int irq, void *priv)
{
    intc_dev_t *dev = (intc_dev_t *)priv;
    intc_regs_t *regs = (intc_regs_t*)dev->base;
    int src, intc_irq;

    for (src = 0; src < INTC_SRC_NUM; src++) {
        uint32_t src_int = regs->a[src].src_int;
        uint32_t src_bitmap = dev->bitmap[src];
        uint32_t shift_sel = 0;
        
        while (src_bitmap) {
            // no interest in unregistered ones
            if ((src_bitmap & 1) && (src_int & 1)) {
                // clear trigger
                sys_modl(&regs->c[src].src_sw, 1<<shift_sel, 0<<shift_sel);
                // clear int (write 1 then 0 to clear)
                sys_modl(&regs->a[src].src_clr, 1<<shift_sel, 1<<shift_sel);
                sys_modl(&regs->a[src].src_clr, 1<<shift_sel, 0<<shift_sel);

                // dispatch intc irq
                intc_irq = src * INTC_SRC_IRQ_NUM + shift_sel;
                if (dev->handler[intc_irq]) {
                    dev->handler[intc_irq](intc_irq, dev->priv_data[intc_irq]);
                }
            }
            src_bitmap >>= 1;
            src_int >>= 1;
            shift_sel++;
        }
    }
}

void *intc_open(int id, intc_core_t self)
{
    intc_dev_t *dev = (intc_dev_t *)malloc(sizeof(intc_dev_t));
    if (!dev) {
        return NULL;
    }
    memset(dev, 0, sizeof(intc_dev_t));
    
    dev->base = sys_intc_init(id, self, intc_root_handler, dev);
    if (dev->base == NULL) {
        free(dev);
        return NULL;
    }
    dev->id   = id;
    dev->self = self;

    return (void*)dev;
}

int intc_close(void *intc)
{
    intc_dev_t *dev = (intc_dev_t *)intc;
    int err = 0;

    if (dev) {
        err = sys_intc_deinit(dev->id, dev->self);
        free(dev);
    }
    return err;
}

int intc_register(void *intc, int irq, void (*handler)(int, void *), void *priv)
{
    if (!intc || IS_INVALID(irq)) {
        return -EINVAL;
    }
    intc_dev_t *dev = (intc_dev_t *)intc;
    intc_regs_t *regs = (intc_regs_t*)dev->base;
    uint32_t src_n = irq / INTC_SRC_IRQ_NUM;

    // src_sel <-- self
    uint32_t shift_sel = irq & INTC_SRC_IRQ_MASK;
    sys_modl(&regs->a[src_n].src_sel0, 1<<shift_sel, (dev->self>>0)<<shift_sel);
    sys_modl(&regs->b[src_n].src_sel1, 1<<shift_sel, (dev->self>>1)<<shift_sel);

    // type <-- high
    uint32_t type = INTC_TYPE_HIGH;
    uint32_t type_n = shift_sel / (INTC_SRC_IRQ_NUM>>1);
    uint32_t shift_type = (shift_sel & ((INTC_SRC_IRQ_NUM>>1)-1))<<1;
    sys_modl(type_n ? &regs->a[src_n].src_typeh : &regs->a[src_n].src_typel, 3<<shift_type, (type<<shift_type));

    // set intc irq disable
    sys_modl(&regs->a[src_n].src_mask, 1<<shift_sel, 1<<shift_sel);

    // set the bit in bitmap
    dev->bitmap[src_n] |= BIT(shift_sel);
    dev->handler[irq] = handler;
    dev->priv_data[irq] = priv;

    return 0;
}

int intc_enable(void *intc, int irq)
{
    if (!intc || IS_INVALID(irq)) {
        return -EINVAL;
    }
    intc_dev_t *dev = (intc_dev_t *)intc;
    intc_regs_t *regs = (intc_regs_t*)dev->base;
    uint32_t src_n = irq / INTC_SRC_IRQ_NUM;
    uint32_t shift_sel = irq & INTC_SRC_IRQ_MASK;
    sys_modl(&regs->a[src_n].src_mask, 1<<shift_sel, 0);
    
    return 0;
}

int intc_disable(void *intc, int irq)
{
    if (!intc || IS_INVALID(irq)) {
        return -EINVAL;
    }
    intc_dev_t *dev = (intc_dev_t *)intc;
    intc_regs_t *regs = (intc_regs_t*)dev->base;
    uint32_t src_n = irq / INTC_SRC_IRQ_NUM;
    uint32_t shift_sel = irq & INTC_SRC_IRQ_MASK;
    sys_modl(&regs->a[src_n].src_mask, 1<<shift_sel, 1<<shift_sel);
    return 0;
}

int intc_trigger(void *intc, int irq)
{
    if (!intc || IS_INVALID(irq)) {
        return -EINVAL;
    }
    intc_dev_t *dev = (intc_dev_t *)intc;
    intc_regs_t *regs = (intc_regs_t*)dev->base;
    uint32_t src_n = irq / INTC_SRC_IRQ_NUM;
    uint32_t shift_sel = irq & INTC_SRC_IRQ_MASK;
    sys_modl(&regs->c[src_n].src_sw, 1<<shift_sel, 1<<shift_sel);
    return 0;
}

int intc_irq_num(void *intc)
{
    return INTC_IRQ_NUM - 1;
}

#endif /* HAL_INTC_ENABLED && HAL_INTC_SFT_AIC1 */

