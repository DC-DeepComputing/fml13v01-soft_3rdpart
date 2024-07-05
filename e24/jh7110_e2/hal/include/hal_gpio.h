/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_gpio.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __HAL_GPIO_H_
#define __HAL_GPIO_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

//gpio irq trigger mode
typedef enum
{
    GPIO_TRIG_HIGH,
    GPIO_TRIG_LOW,
    GPIO_TRIG_POSEDGE,
    GPIO_TRIG_NEGEDGE,
    GPIO_TRIG_BOTHEDGE,
} gpio_trig_t;

/* set as input or output, returning 0 or negative errno */
int gpio_direction_input(int gpio);
int gpio_direction_output(int gpio, int value);

/* GPIO INPUT:  return zero or nonzero */
int gpio_get_value(int gpio);

/* GPIO OUTPUT */
void gpio_set_value(int gpio, int value);

int gpio_irq_set_trig(int gpio, gpio_trig_t trig);
int gpio_irq_enable(int gpio);
int gpio_irq_disable(int gpio);
int gpio_irq_register(int gpio, void (*handler)(int, void*), void *priv);
int gpio_irq_unregister(int gpio);

//pin within pinout
int gpio_pin(int gpio);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __HAL_GPIO_H_ */

