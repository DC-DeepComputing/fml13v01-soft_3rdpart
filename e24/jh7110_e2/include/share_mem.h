/*
 * share_mem.h
 *
 *  Created on: 2021Äê8ÔÂ27ÈÕ
 *      Author: shanlong.li
 */

#ifndef INCLUDE_SHARE_MEM_H_
#define INCLUDE_SHARE_MEM_H_

#include <stdlib.h>
#include "main.h"

#define E24_DSP_CMD_INLINE_DATA_SIZE    16

enum {
	E24_FLAG_INVALID = 0x2,
	E24_FLAG_DONE = 0x3,
	E24_FLAG_VALID = 0x4,
};

struct remote_resource_table
{
	int type;
	int size;
	int *buf;
};

struct e24_dsp_cmd {
	unsigned int flags;
	unsigned int in_data_size;
	unsigned int out_data_size;
	union {
		unsigned int in_data_addr;
		unsigned char in_data[E24_DSP_CMD_INLINE_DATA_SIZE];
	};
	union {
		unsigned int out_data_addr;
		unsigned char out_data[E24_DSP_CMD_INLINE_DATA_SIZE];
	};
};

void poll_client_loop(void);

#endif /* INCLUDE_SHARE_MEM_H_ */
