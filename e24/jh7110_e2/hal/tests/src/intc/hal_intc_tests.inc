/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 *
 * @file hal_intc_test.c
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
static void intc_handle(int irq, void *priv)
{
    *(int *)priv = irq;
}

static int test_intc_soft_self_range(void *intc, int begin, int end)
{
    int err = 0;
    int i, rcvd;
    for (i = begin; i <= end; i++) {
        rcvd = -1;
        intc_register(intc, i, intc_handle, &rcvd);
        intc_enable(intc, i);
        intc_trigger(intc, i);
        int timeout = 1000;
        while (rcvd != i && timeout) {
            timeout--;
        }
        err += !timeout;
        if (timeout) {
            PRINT(" %d\n", i);
        }
    }

    return err ? 1 : 0;
}
