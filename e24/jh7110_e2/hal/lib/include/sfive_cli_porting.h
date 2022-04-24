
#ifndef __CLI_PORTING_H
#define __CLI_PORTING_H
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdlib.h>
#include "bsp_console.h"

#define PRINTF   printf

enum{
    SUCCESS = 0,
    ERR_BUSY,
    ERR_RETRY,
    ERR_IO_FAIL,
    ERR_OVERFLOW
};


#endif /*__CLI_PORTING_H*/


