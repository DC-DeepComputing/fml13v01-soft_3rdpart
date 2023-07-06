/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * 
 * @file mailbox_app.c
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#include "bsp_include.h"
#include "hal_include.h"
#include "mailbox_client.h"
#include "share_mem.h"

static mailbox_handle_t *g_mbx;

static void on_message_handler(mailbox_peer_t peer, uint32_t data)
{
#if 1
    struct e24_dsp_cmd *resource = (struct e24_dsp_cmd *)data;

    if(resource->flags != E24_FLAG_VALID)
    {
    	data = E24_FLAG_INVALID;
    }
    else
    {
    	e24_process_command(resource);
    	data = E24_FLAG_DONE;
    }
#else
    data=0x889977;
#endif

    mailbox_unicast(g_mbx, peer, data);
}

void mailbox_client_loop(void)
{
    mailbox_initcfg_t initcfg = {
        .self = MAILBOX_CORE_E2,
        .role = MAILBOX_CLIENT,
        .cb   = on_message_handler,
    };
    mailbox_handle_t *mbx = mailbox_open(0, &initcfg);
    SYS_ASSERT(mbx != NULL);
    g_mbx = mbx;
    int  *p = (int *)0x6e210000;
    *p=0x104;
    while (1) {
        sys_udelay(100);
    }

    // shall never reach here
    mailbox_close(g_mbx);
    g_mbx = NULL;
}
