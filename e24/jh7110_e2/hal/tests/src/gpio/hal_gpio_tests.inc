/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_gpio_tests.inc
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */

static int test_gpio_pull(int gpio)
{
    int c;

    gpio_direction_output(gpio, 1);
    printf("%s(): prepare the LA to trigger port %d, ready? [Y]", __func__, gpio_pin(gpio));
    fflush(stdin);
    getchar();

    gpio_set_value(gpio, 0);
    sys_mdelay(10);
    gpio_set_value(gpio, 1);
    sys_mdelay(10);
    gpio_set_value(gpio, 0);
    sys_mdelay(10);
    gpio_set_value(gpio, 1);
    sys_mdelay(10);

    printf("%s(): got waveform like: low high low high? [y/N]", __func__);
    fflush(stdin);
    c = getchar();
    return (c == 'y' | c == 'Y') ? 0 : 1;
}

static int _trig_count = 0;

static void _irq_handle(int gpio, void *priv)
{
    gpio_irq_disable(gpio);
    _trig_count++;
    printf("  GPIO%d int\n", gpio_pin(gpio));
}

static int _wait_irq(int count)
{
    uint32_t timeout = 200;

    while (_trig_count != count && timeout) {
        sys_udelay(100);
        timeout--;
    }
    return timeout ? 0 : 1;
}

static int test_gpio_irq(int gpio_out, int gpio_in)
{
    int c;
    const struct trig_pattern_t {
        int init_value;
        gpio_trig_t trig;
        void (*handler)(int, void*);
        int exp_count;
    } PATTERN[] = {
        {0, GPIO_TRIG_HIGH,         _irq_handle, 1},
        {1, GPIO_TRIG_LOW,          _irq_handle, 1},
        {0, GPIO_TRIG_POSEDGE,      _irq_handle, 1},
        {1, GPIO_TRIG_POSEDGE,      _irq_handle, 0},
        {1, GPIO_TRIG_NEGEDGE,      _irq_handle, 1},
        {0, GPIO_TRIG_NEGEDGE,      _irq_handle, 0},
        {0, GPIO_TRIG_BOTHEDGE,     _irq_handle, 1},
        {1, GPIO_TRIG_BOTHEDGE,     _irq_handle, 1},
    };
    const char *TRIG_STR[] = {
        "high", "low", "posedge", "negedge", "bothedge"
    };
    struct trig_pattern_t *pt = NULL;
    int i, err = 0;

    printf("%s(): connect GPIO%d and GPIO%d pads, ready? [Y]", __func__, gpio_pin(gpio_out), gpio_pin(gpio_in));
    fflush(stdin);
    getchar();

    gpio_direction_output(gpio_out, 1);
    sys_udelay(10);
    gpio_direction_input(gpio_in);

    for (i = 0, pt = PATTERN; i < ARRAY_SIZE(PATTERN); i++, pt++) {
        printf("trigger mode: %s\n", TRIG_STR[pt->trig]);
        printf("pull GPIO%d %s\n", gpio_pin(gpio_out), pt->init_value ? "high" : "low");
        gpio_set_value(gpio_out, pt->init_value);
        sys_udelay(10);

        _trig_count = 0;
        gpio_irq_set_trig(gpio_in, pt->trig);
        gpio_irq_register(gpio_in, pt->handler, NULL);
        gpio_irq_enable(gpio_in);
        sys_udelay(10);

        printf("pull GPIO%d %s\n", gpio_pin(gpio_out), !pt->init_value ? "high" : "low");
        gpio_set_value(gpio_out, !pt->init_value);
        sys_udelay(10);

        int result = _wait_irq(pt->exp_count);
        printf("%s: count %d, expect %d\n\n", result ? "failed" : "success",
            _trig_count, pt->exp_count);
        err += result;
        gpio_irq_disable(gpio_in);
        gpio_irq_unregister(gpio_in);
    }

    return err ? 1 : 0;
}
