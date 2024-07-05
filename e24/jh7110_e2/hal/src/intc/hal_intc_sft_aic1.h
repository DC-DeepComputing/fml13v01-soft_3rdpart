/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 *
 * @file hal_intc_sft_aic1.h
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#ifndef __HAL_INTC_SFT_AIC1_H
#define __HAL_INTC_SFT_AIC1_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct
{
#if 1
    struct {
        __I  uint32_t src_status;  /* offset 0x00 */
        __IO uint32_t src_typel;   /* offset 0x04 */
        __IO uint32_t src_typeh;   /* offset 0x08 */
        __IO uint32_t src_sel0;    /* offset 0x0c */
        __IO uint32_t src_clr;     /* offset 0x10 */
        __IO uint32_t src_mask;    /* offset 0x14 */
        __I  uint32_t src_raw;     /* offset 0x18 */
        __I  uint32_t src_int;     /* offset 0x1c */
    } a[2];

    struct {
        __IO uint32_t src_sel1;    /* offset 0x40 */
    } b[2];
    
    struct {
        __IO uint32_t src_sw;      /* offset 0x48 */
    } c[2];
#else
    __I  uint32_t src0_status;  /* offset 0x00 */
    __IO uint32_t src0_typel;   /* offset 0x04 */
    __IO uint32_t src0_typeh;   /* offset 0x08 */
    __IO uint32_t src0_sel0;    /* offset 0x0c */
    __IO uint32_t src0_clr;     /* offset 0x10 */
    __IO uint32_t src0_mask;    /* offset 0x14 */
    __I  uint32_t src0_raw;     /* offset 0x18 */
    __I  uint32_t src0_int;     /* offset 0x1c */
    
    __I  uint32_t src1_status;  /* offset 0x20 */
    __IO uint32_t src1_typel;   /* offset 0x24 */
    __IO uint32_t src1_typeh;   /* offset 0x28 */
    __IO uint32_t src1_sel0;    /* offset 0x2c */
    __IO uint32_t src1_clr;     /* offset 0x30 */
    __IO uint32_t src1_mask;    /* offset 0x34 */
    __I  uint32_t src1_raw;     /* offset 0x38 */
    __I  uint32_t src1_int;     /* offset 0x3c */
    
    __IO uint32_t src0_sel1;    /* offset 0x40 */
    __IO uint32_t src1_sel1;    /* offset 0x44 */
    __IO uint32_t src0_sw;      /* offset 0x48 */
    __IO uint32_t src1_sw;      /* offset 0x4c */
#endif
} intc_regs_t;

typedef void (*intc_handler_t)(int, void *);

#define INTC_TYPE_HIGH      0
#define INTC_TYPE_LOW       1
#define INTC_TYPE_POSEDGE   2
#define INTC_TYPE_NEGEDGE   3

#define INTC_SRC_NUM        2
#define INTC_SRC_IRQ_NUM    32
#define INTC_SRC_IRQ_MASK   (INTC_SRC_IRQ_NUM - 1)
#define INTC_IRQ_NUM        (INTC_SRC_IRQ_NUM*INTC_SRC_NUM)
#define INTC_IRQ_MASK       (INTC_IRQ_NUM - 1)

typedef struct
{
    int id;
    void *base;
    intc_core_t self;
    uint32_t bitmap[INTC_SRC_NUM];
    intc_handler_t handler[INTC_IRQ_NUM];
    void *priv_data[INTC_IRQ_NUM];
} intc_dev_t;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __HAL_INTC_SFT_AIC1_H */

