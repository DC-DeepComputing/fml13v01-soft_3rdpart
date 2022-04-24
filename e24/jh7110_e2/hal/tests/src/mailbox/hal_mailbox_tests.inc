/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file hal_mailbox_tests.inc
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */

#define WAIT_TIMEOUT_MS     200

static int test_mailbox_unicast_recv(int id, mailbox_initcfg_t *initcfg, mailbox_peer_t peer)
{
    mailbox_handle_t *mailbox = mailbox_open(id, initcfg);
    uint32_t data = 0xfeedbac0, exp_resp_data = data + 1, resp_data = 0;
    int result = 1, err = 0;

    if (!mailbox) {
        PRINT("failed to open mailbox: id %d, self %d\n", id, mailbox->initcfg.self);
        goto EXIT;
    }
    PRINT("%s send to %s: 0x%08x\n", sys_mailbox_peer_name(mailbox->initcfg.self), sys_mailbox_peer_name(peer), data);
    err = mailbox_unicast(mailbox, peer, data);
    if (err) {
        PRINTF("send fail, error %d\n", err);
        goto EXIT;
    }
    //wait for response
    uint64_t start = sys_get_timer(0);
    while (mailbox_recv(mailbox, peer, &resp_data)) {
        if (sys_get_timer(start) >= WAIT_TIMEOUT_MS) {
            PRINT("no response\n");
            goto EXIT;
        }
    }
    sys_mdelay(100);
    PRINT("response from %s: 0x%08x\n", sys_mailbox_peer_name(peer), resp_data);
    if (exp_resp_data != resp_data) {
        PRINT("unexpected response: expected 0x%08x, actual 0x%08x\n", exp_resp_data, resp_data);
        goto EXIT;
    }
    result = 0;

EXIT:
    mailbox_close(mailbox);
    return result;
}

static uint32_t rcvd_it_peer, rcvd_it_count, rcvd_it_data;
static void recv_it_handler(mailbox_peer_t peer, uint32_t data)
{
    rcvd_it_peer = peer;
    rcvd_it_data = data;
    rcvd_it_count++;
    PRINT("response from %s: 0x%08x\n", sys_mailbox_peer_name(peer), data);
}

static int test_mailbox_unicast_recv_it(int id, mailbox_initcfg_t *initcfg, mailbox_peer_t peer)
{
    initcfg->cb = recv_it_handler;
    mailbox_handle_t *mailbox = mailbox_open(id, initcfg);
    uint32_t data = 0xfeedbac2, exp_resp_data = data + 1, resp_data = 0;
    int result = 1, err = 0;

    if (!mailbox) {
        PRINT("failed to open mailbox: id %d, self %d\n", id, mailbox->initcfg.self);
        goto EXIT;
    }

    rcvd_it_count = 0;
    PRINT("%s send to %s: data 0x%x\n", sys_mailbox_peer_name(mailbox->initcfg.self), sys_mailbox_peer_name(peer), data);
    err = mailbox_unicast(mailbox, peer, data);
    if (err) {
        PRINT("send fail, error %d\n", err);
        goto EXIT;
    }
    uint64_t start = sys_get_timer(0);
    while (!rcvd_it_count) {
        if (sys_get_timer(start) >= WAIT_TIMEOUT_MS) {
            PRINT("timeout\n");
            goto EXIT;
        }
    }
    if (peer != rcvd_it_peer) {
        PRINT("wrong peer %d, expected %d(%s)\n", rcvd_it_peer, peer, sys_mailbox_peer_name(peer));
        goto EXIT;
    }
    if (exp_resp_data != rcvd_it_data) {
        PRINT("unexpected response: expected 0x%08x, actual 0x%08x\n", exp_resp_data, rcvd_it_data);
        goto EXIT;
    }
    result = 0;

EXIT:
    mailbox_close(mailbox);
    return result;
}

static int test_mailbox_multicast_recv_it(int id, mailbox_initcfg_t *initcfg, uint32_t peers_mask)
{
    initcfg->cb = recv_it_handler;
    mailbox_handle_t *mailbox = mailbox_open(id, initcfg);
    const uint32_t data = 0xfeedbacc;
    int result = 1, err;
    uint32_t i, peers_count = 0;
    const char *peer_name = NULL;

    if (!mailbox) {
        PRINT("failed to open mailbox: id %d, self %d\n", id, mailbox->initcfg.self);
        goto EXIT;
    }

    for (i = 0; peer_name = sys_mailbox_peer_name(i); i++) {
        if (peers_mask & BIT(i)) {
            peers_count++;
            PRINT("%s send to %s: data 0x%x\n", sys_mailbox_peer_name(mailbox->initcfg.self), peer_name, data);
        }
    }

    rcvd_it_count = 0;
    err = mailbox_multicast(mailbox, peers_mask, data);
    if (err) {
        PRINT("send fail, error %d\n", err);
        goto EXIT;
    }
    uint64_t start = sys_get_timer(0);
    while (rcvd_it_count != peers_count) {
        if (sys_get_timer(start) >= WAIT_TIMEOUT_MS) {
            PRINT("timeout\n");
            goto EXIT;
        }
    }

    result = 0;

EXIT:
    mailbox_close(mailbox);
    return result;
}
