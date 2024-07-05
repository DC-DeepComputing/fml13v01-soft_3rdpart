/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_gpio.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"

#ifdef HAL_GPIO_ENABLED

__WEAK int gpio_direction_input(int gpio)
{
    return -ENOTSUP;
}

__WEAK int gpio_direction_output(int gpio, int value)
{
    return -ENOTSUP;
}

__WEAK int gpio_get_value(int gpio)
{
    return -ENOTSUP;
}

__WEAK void gpio_set_value(int gpio, int value)
{
}

__WEAK int gpio_irq_set_trig(int gpio, gpio_trig_t trig)
{
    return -ENOTSUP;
}

__WEAK int gpio_irq_enable(int gpio)
{
    return -ENOTSUP;
}

__WEAK int gpio_irq_disable(int gpio)
{
    return -ENOTSUP;
}

__WEAK int gpio_irq_register(int gpio, void (*handler)(int, void*), void *priv)
{
    return -ENOTSUP;
}

__WEAK int gpio_irq_unregister(int gpio)
{
    return -ENOTSUP;
}

#endif /* HAL_GPIO_ENABLED */

