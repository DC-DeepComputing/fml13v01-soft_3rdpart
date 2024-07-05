/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file main.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */

#include "main.h"
#include "mailbox_client.h"

//#define COM_POLL

#ifndef RTL_SIM

int input(char** data){
    static char s_ch;
    s_ch = getchar();
    if(s_ch){
        *data = &s_ch;
        return 1;
    }
    return 0;
}


int main(void)
{
    sys_init();
    //sys_clock_debug_print();

#ifdef COM_POLL
    poll_client_loop();
#else
#ifdef SLAVE_MAILBOX_TESTS_ENABLED
    mailbox_client_loop();
#else
    cli_init(input);
    while(1) {
        cli_loop();
    }
#endif
#endif
    return 0;
}

#endif /* RTL_SIM */
