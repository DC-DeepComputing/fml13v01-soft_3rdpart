/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * 
 * @file simple_shell.h
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#ifndef __SIMPLE_SHELL_H_
#define __SIMPLE_SHELL_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#include "trim.h"

typedef struct
{
    const char *cmd;
    const char *desc;
    int (*func)(const char *args, void *priv);
    void *priv;
} shell_cmd_t;

int shell_start(const char *prompt, const shell_cmd_t *cmds);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __SIMPLE_SHELL_H_ */
