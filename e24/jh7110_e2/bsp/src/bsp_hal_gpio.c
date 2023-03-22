/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * 
 * @file bsp_hal_gpio.c
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#include "bsp_include.h"



typedef struct
{
    __IO uint32_t doen[16]; //([5:0]gpo_4n+0_doen_cfg [7:6]reserved)x4
    __IO uint32_t dout[16]; //([6:0]gpo_4n+0_dout_cfg [7]reserved)x4

#define __R_SIG_IN_COUNT  ((GPI_NUM+3)/4)
//#if (__R_SIG_IN_COUNT != (GPI_NUM+3)/4)
//#error "wrong sig_in register count"
//#endif
    __IO uint32_t sig_in[__R_SIG_IN_COUNT]; //([5:0]gpi_4n+0 [7:6]reserved)x4

    __IO uint32_t en;
    __IO uint32_t is[2];
    __IO uint32_t ic[2];
    __IO uint32_t ibe[2];
    __IO uint32_t iev[2];
    __IO uint32_t ie[2];
    __I  uint32_t ris[2];
    __I  uint32_t mis[2];
    __I  uint32_t din[2];
} sys_gpio_regs_t;

typedef struct
{
    void (*handler)(int, void*);
    void *priv;
} gpio_irq_entry_t;
static volatile sys_gpio_regs_t *s_gpio_regs = NULL;
static gpio_irq_entry_t s_gpio_irqs[SYS_GPIO_NUM];

static void gpio_irq_clear(int gpio)
{
    int n = gpio>>5, bit = gpio&0x1f;
    sys_modl(s_gpio_regs->ic+n, BIT(bit), 0);
    sys_modl(s_gpio_regs->ic+n, BIT(bit), BIT(bit));
}

static void gpio_irq_handler(int irq, void *priv)
{
    int i, j, gpio;
    uint32_t mis, ie, is;

    for (i = 0; i < 2; i++) {
        ie = s_gpio_regs->ie[i];
        is = s_gpio_regs->is[i];
        mis = s_gpio_regs->mis[i];
        if (!ie || !mis) continue;

        for (j = 0; j < 32; j++) {
            //handle enabled edge or level triggered int
            if (BIT(j) & ie & mis) {
                gpio = (i<<5) + j;
                if (BIT(j) & is) {
                    gpio_irq_clear(gpio);
                }
                if (s_gpio_irqs[gpio].handler) {
                    //printf("mis %d ris %d din %d is %d ibe %d iev %d\n",
                    //    (mis>>j)&1, (s_gpio_regs->ris[i]>>j)&1, (s_gpio_regs->din[i]>>j)&1,
                    //    (s_gpio_regs->is[i]>>j)&1,
                    //    (s_gpio_regs->ibe[i]>>j)&1,
                    //    (s_gpio_regs->iev[i]>>j)&1);
                    s_gpio_irqs[gpio].handler(gpio, s_gpio_irqs[gpio].priv);
                }
            }
        }
    }
}

int sys_gpio_init(void)
{
    if (!s_gpio_regs) {
        s_gpio_regs = (sys_gpio_regs_t *)U0_SYS_IOMUX__SAIF_BD_APBS__BASE_ADDR;
        //all gpio interrupts disabled by default
        s_gpio_regs->en = 0;
        s_gpio_regs->ie[0] = s_gpio_regs->ie[1] = 0;

        const int GPIO_INT = U0_E2_SFT7110_LOCAL_INTERRUPTS_0__U0_SYS_IOMUX_GPIO_IRQ;
        sys_irq_register(GPIO_INT, gpio_irq_handler, NULL);
        sys_irq_enable(GPIO_INT);
        s_gpio_regs->en = 1;
    }
    return 0;
}

int sys_gpio_irq_set_trig(int gpio, sys_gpio_trig_t trig)
{
    typedef struct {
        int is, ibe, iev;
    } trig_cfg_t;
    //config for every irq mode, refer gpio doc for detail
    const trig_cfg_t TRIG_CFG[] = {
        {0, -0, 0}, //HIGH (-0 means can be 0 or 1)
        {0, -0, 1}, //LOW
        {1, 0, 1},  //POSEDGE
        {1, 0, 0},  //NEGEDGE
        {1, 1, -0}, //BOTHEDGE
    };
    int n = gpio>>5, bit = gpio&0x1f;

    sys_modl(s_gpio_regs->is+n, BIT(bit), TRIG_CFG[trig].is<<bit);
    sys_modl(s_gpio_regs->ibe+n, BIT(bit), TRIG_CFG[trig].ibe<<bit);
    sys_modl(s_gpio_regs->iev+n, BIT(bit), TRIG_CFG[trig].iev<<bit);
    return 0;
}

int sys_gpio_irq_enable(int gpio)
{
    //register ie actually act as "mask", so we need clear edge interrupt status (ris) on irq enable.
    gpio_irq_clear(gpio);
    sys_modl(s_gpio_regs->ie + (gpio>>5), BIT(gpio&0x1f), BIT(gpio&0x1f));
    return 0;
}

int sys_gpio_irq_disable(int gpio)
{
    sys_modl(s_gpio_regs->ie + (gpio>>5), BIT(gpio&0x1f), 0);
    return 0;
}

int sys_gpio_irq_register(int gpio, void (*handler)(int, void*), void *priv)
{
    s_gpio_irqs[gpio].handler = handler;
    s_gpio_irqs[gpio].priv = priv;
    return 0;
}

int sys_gpio_irq_unregister(int gpio)
{
    s_gpio_irqs[gpio].handler = NULL;
    s_gpio_irqs[gpio].priv = NULL;
    return 0;
}

int sys_gpio_complex(int gpio, sys_gpio_gpi_t gpi, sys_gpio_gpo_t gpo, sys_gpio_oen_t oen)
{
    int n, shift;

    if (gpi != GPI_NONE) {
        n = gpi >> 2;
        shift = (gpi & 3) << 3;
        sys_modl(s_gpio_regs->sig_in+n, 0x3f<<shift, (gpio+2)<<shift);
    }

    n = gpio >> 2;
    shift = (gpio & 3) << 3;
    if (gpo != GPO_NONE) {
        sys_modl(s_gpio_regs->dout+n, 0x7f<<shift, gpo<<shift);
    }
    if (oen != OEN_NONE) {
        sys_modl(s_gpio_regs->doen+n, 0x3f<<shift, oen<<shift);
    }
    return 0;
}

int sys_gpio_output_invert(int gpio, int invert)
{
    //not support by hardware
    return 0;
}

int sys_gpio_oen_invert(int gpio, int invert)
{
    //nothing to do, already be handled by hardware
    return 0;
}

int sys_gpio_set_value(int gpio, int value)
{
    int n, shift;
    uint32_t dout = value ? GPO_HIGH : GPO_LOW;
    n = gpio >> 2;
    shift = (gpio & 3) << 3;
    sys_modl(s_gpio_regs->dout+n, 0x7f<<shift, dout<<shift);
    return 0; 
}

int sys_gpio_get_value(int gpio)
{
    uint32_t n = gpio>>5;
    uint32_t shift = gpio&0x1f;
    return (s_gpio_regs->din[n] >> shift) & 1;
}

int sys_gpio_pin(int gpio)
{
#ifndef SYS_GPIO_REMAP_TBL
    return gpio;
#else
    const int PINMAP[] = { SYS_GPIO_REMAP_TBL };
    int i;
    for (i = 0; i < ARRAY_SIZE(PINMAP); i++) {
        if (PINMAP[i] == gpio) {
            return i;
        }
    }
    //return original value for unmapped gpio
    return gpio;
#endif
}
