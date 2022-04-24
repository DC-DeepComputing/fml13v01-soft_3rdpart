/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_mailbox_sft_jh7110.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __HAL_MAILBOX_SFT_JH7110_H_
#define __HAL_MAILBOX_SFT_JH7110_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct {
    __IO uint32_t peers_mask;     /* irq */
#define HAS_MESSAGE_TO(peer, peers_mask)    ((peers_mask) & BIT(peer))
    __O  uint32_t cmd_set;
    __O  uint32_t cmd_clr;
    __I  uint32_t cmd;
} pipe_regs_t;

typedef struct
{
    pipe_regs_t pipe[MAILBOX_CORE_NUM];
    uint8_t rsvd_40_to_100[0xC0];
    __I uint32_t pend_smry;
#define HAS_MESSAGE_FROM(peer, pend_smry)   ((pend_smry) & BIT(peer))
} mailbox_regs_t;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __HAL_MAILBOX_SFT_JH7110_H_ */

