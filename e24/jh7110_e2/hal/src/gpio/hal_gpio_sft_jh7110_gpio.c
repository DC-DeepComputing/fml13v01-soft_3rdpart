/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_gpio_sft_jh7110_gpio.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"

#if defined(HAL_GPIO_ENABLED) && defined(HAL_GPIO_SFT_JH7110_GPIO)

#include "hal_gpio_sft_jh7110_gpio.h"

int gpio_direction_input(int gpio)
{
    return sys_gpio_input(gpio, GPI_NONE);
}

int gpio_direction_output(int gpio, int value)
{
    return sys_gpio_output(gpio, value ? GPO_HIGH : GPO_LOW);
}

int gpio_get_value(int gpio)
{
    return sys_gpio_get_value(gpio);
}

void gpio_set_value(int gpio, int value)
{
    sys_gpio_set_value(gpio, value);
}

int gpio_irq_set_trig(int gpio, gpio_trig_t trig)
{
    const sys_gpio_trig_t SYS_TRIG[] = {
        SYS_GPIO_TRIG_HIGH,
        SYS_GPIO_TRIG_LOW,
        SYS_GPIO_TRIG_POSEDGE,
        SYS_GPIO_TRIG_NEGEDGE,
        SYS_GPIO_TRIG_BOTHEDGE,
    };
    return sys_gpio_irq_set_trig(gpio, SYS_TRIG[trig]);
}

int gpio_irq_enable(int gpio)
{
    return sys_gpio_irq_enable(gpio);
}

int gpio_irq_disable(int gpio)
{
    return sys_gpio_irq_disable(gpio);
}

int gpio_irq_register(int gpio, void (*handler)(int, void*), void *priv)
{
    return sys_gpio_irq_register(gpio, handler, priv);
}

int gpio_irq_unregister(int gpio)
{
    return sys_gpio_irq_unregister(gpio);
}

int gpio_pin(int gpio)
{
    return sys_gpio_pin(gpio);
}

#endif /* HAL_GPIO_ENABLED && HAL_GPIO_SFT_JH7110_GPIO */

