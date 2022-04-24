/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * 
 * @file trim.c
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#include <stdint.h>
#include "trim.h"

const char *trim(const char *s)
{
    const char *WHITE_CHARS = " \t\r\n";
    int i;
    while (s && *s) {
        for (i = 0; i < sizeof(WHITE_CHARS)/sizeof(WHITE_CHARS[0]); i++) {
            if (*s == WHITE_CHARS[i]) {
                s++;
                continue;
            }
        }
        break;
    }
    return s;
}
