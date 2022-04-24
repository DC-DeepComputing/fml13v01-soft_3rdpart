/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_cpu.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#include "bsp_include.h"
#include <metal/cpu.h>
#include <metal/interrupt.h>

#define CLIC_LINT_OFFSET        16
//helper for CLIC local interrupt (LINT)
//+16, offset to Local Interrupt 0
#define CLIC_LINT_NUM(x)         ((x)+CLIC_LINT_OFFSET)
//to make CLIC local interrupt offset transparent to user
#define REVEAL_CLIC_LINT_NUM(x)  ((x)-CLIC_LINT_OFFSET)

static struct metal_cpu *cpu = NULL;
static struct metal_interrupt *cpu_intr = NULL;
static struct metal_interrupt *cpu_tmr_intr = NULL;
static struct metal_interrupt *clic = NULL;

typedef struct
{
    sys_irq_hanlder_t handler;
    void *priv;
} sys_irq_priv_t;

static void sys_irq_handler(int id, void *priv)
{
    sys_irq_priv_t * irq_priv = (sys_irq_priv_t *)priv;
    if (irq_priv->handler) {
        irq_priv->handler(REVEAL_CLIC_LINT_NUM(id), irq_priv->priv);
    }
}

int sys_irq_register(int id, sys_irq_hanlder_t handler, void *priv)
{
    sys_irq_priv_t *irq_priv = (sys_irq_priv_t *)malloc(sizeof(sys_irq_priv_t));
    if (!irq_priv) {
        return -ENOMEM;
    }
    irq_priv->handler = handler;
    irq_priv->priv = priv;
    metal_interrupt_vector_disable(clic, CLIC_LINT_NUM(id));
    metal_interrupt_register_handler(clic, CLIC_LINT_NUM(id), sys_irq_handler, irq_priv);
    return 0;
}

int sys_irq_enable(int id)
{
    metal_interrupt_enable(clic, CLIC_LINT_NUM(id));
    return 0;
}

int sys_irq_disable(int id)
{
    metal_interrupt_disable(clic, CLIC_LINT_NUM(id));
    return 0;
}

int sys_cpu_init(void)
{
    // Lets get the CPU and and its interrupt
    cpu = metal_cpu_get(metal_cpu_get_current_hartid());
    if (cpu == NULL) {
        //printf("Abort. CPU is null.\n");
        return 2;
    }

    cpu_intr = metal_cpu_interrupt_controller(cpu);
    if (cpu_intr == NULL) {
        //printf("Abort. CPU interrupt controller is null.\n");
        return 3;
    }
    metal_interrupt_init(cpu_intr);

    // Lets get a CLIC interrupt controller explicitly
    clic = metal_interrupt_get_controller(METAL_CLIC_CONTROLLER,
                                            metal_cpu_get_current_hartid());
    if (clic == NULL) {
        //printf("Exit. This example need a clic interrupt controller.\n");
        return 4;
    }
    metal_interrupt_init(clic);

    // Lets set CLIC in Selective Vector mode. Note this must be done AFTER init!!
    // This mode REQUIRE enabling/disabling specific interrupt BEFORE interrupt registration!!
    metal_interrupt_set_vector_mode(clic, METAL_SELECTIVE_NONVECTOR_MODE);
    // Lastly CPU interrupt
    if (metal_interrupt_enable(cpu_intr, 0) == -1) {
        //printf("CPU interrupt enable failed\n");
        return 6;
    }

    cpu_tmr_intr = metal_cpu_timer_interrupt_controller(cpu);
    if (cpu_tmr_intr == NULL) {
        return -1;
    }
    metal_interrupt_init(cpu_tmr_intr);

    return 0;
}

static uint64_t sys_get_us_timer(uint64_t base)
{
#define MTIME_US        (CPU_RTC_TOGGLE_HZ/1000000UL)    //1us
    uint64_t now = metal_cpu_get_mtime(cpu);
    return bsp_lldiv(now, MTIME_US) - base;
}

uint64_t sys_get_timer(uint64_t base)
{
#define MTIME_MS        (CPU_RTC_TOGGLE_HZ/1000UL)    //1ms
    uint64_t now = metal_cpu_get_mtime(cpu);
    return bsp_lldiv(now, MTIME_MS) - base;
}

void sys_udelay(int us)
{
    uint64_t now = sys_get_us_timer(0);
    while (sys_get_us_timer(now) < us)
        ;
}

void sys_wait(void)
{
	__asm__ volatile("wfi");
}
