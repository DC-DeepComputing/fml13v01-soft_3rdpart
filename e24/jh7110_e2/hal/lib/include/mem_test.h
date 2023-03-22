/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * @file mtest.h
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#ifndef __MTEST_H
#define __MTEST_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

// #include <hal_dma.h>

typedef struct {
    const char *name;
    uint32_t *addr;
    uint32_t write_mask;
    void (*enable)();
    void (*disable)();

    int reset_value_valid;
    uint32_t reset_value;
} mod_reg_test_t;

int mem_test(void *addr, unsigned long len, int iteration_limit);
// int mem_test_with_dma(hal_dma_req_parms_t *dma, unsigned long start_addr, unsigned long len, unsigned long block_size);
int mod_reg_test(const mod_reg_test_t *mod, uint32_t *custom_pattern, uint32_t custom_pattern_num);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __MTEST_H */

