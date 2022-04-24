/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * 
 * @file simple_shell.c
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#include "simple_shell_porting.h"
#include <simple_shell.h>
#include <trim.h>

static int help(const shell_cmd_t *cmds)
{
    const shell_cmd_t *p = NULL;
    int cmd_width = 0, temp = 0;
    int i;

    //width
    for (p = cmds; p && p->cmd; p++) {
        temp = strlen(p->cmd);
        cmd_width = (cmd_width < temp) ? temp : cmd_width;
    }

    //print cmd help message
    for (p = cmds; p && p->cmd; p++) {
        PRINTF("%-*s - %s\n",
            cmd_width, p->cmd,
            p->desc ? p->desc : "");
    }

    return 0;
}

static int get_cmd_key_len(const char *cmd)
{
    int len = 0;
    while (cmd && *cmd != '\0' && *cmd != ' ') {
        len++;
        cmd++;
    }
    return len;
}

static int match_cmd(const char *s, const char *cmd, int cmd_key_len)
{
    if (!strncmp(s, cmd, cmd_key_len)) {
        //cmd chars match
        s += cmd_key_len;
        //and end with a white-space
        return *s == '\0' || s != trim(s);
    }
    return 0;
}

static int parse_cmd(const char *input, const shell_cmd_t *cmds)
{
    const shell_cmd_t *p = cmds;
    int cmd_key_len;

    while (p && p->cmd) {
        cmd_key_len = get_cmd_key_len(p->cmd);
        if (p->func && input && match_cmd(input, p->cmd, cmd_key_len)) {
            p->func(trim(input+cmd_key_len), p->priv);
            return 0; //handled
        }
        p++;
    }

    return 1; //not interest
}

static int builtin_quit(const char *s, void *need_quit)
{
    if (need_quit) {
        *(int*)need_quit = 1;
    }
    return 0;
}

int shell_start(const char *prompt, const shell_cmd_t *cmds)
{
    int need_quit = 0;
    const shell_cmd_t builtin[] = {
        {"q", "quit", builtin_quit, &need_quit},
        {NULL, },
    };
    char buf[64] = {0};
    char *input = NULL;

    while(!need_quit) {
        PRINTF("%s# ", (prompt ? prompt : ""));
        input = trim(GETS(buf));
        if (*input == '\0') {
            continue;
        }
        
        //parse input cmd
        if (match_cmd(input, "?", 1) || match_cmd(input, "h", 1)) {
            help(cmds);
            if (builtin[0].cmd) {
                PRINTF("*builtin:\n");
                help(builtin);
            }
            PRINTF("\n");
        } else if (parse_cmd(input, cmds) && parse_cmd(input, builtin)) {
            PRINTF("invalid cmd\n");
        }
    }

    return 0;
}
