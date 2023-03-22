/*
 * e24_share_mem.c
 *
 *  Created on: 2021Äê8ÔÂ27ÈÕ
 *      Author: shanlong.li
 */

#include "mailbox_client.h"

struct e24_dsp_cmd __resource_t e24_resource = {
		.flags = 0,
		.in_data_size = 22,
};

void e24_process_command(struct e24_dsp_cmd *resource)
{
	int cnt = 0;
	int out_data_size     = resource->out_data_size;
	unsigned char *inbuf  = resource->in_data;
	unsigned char *outbuf = resource->out_data;

	if(out_data_size > E24_DSP_CMD_INLINE_DATA_SIZE)
	{
		inbuf = (unsigned char *)resource->in_data_addr;
		outbuf = (unsigned char *)resource->out_data_addr;
	}

	for(cnt = 0;cnt < out_data_size;cnt++)
	{
		outbuf[cnt] = inbuf[cnt] + 5;
	}

	resource->flags = E24_FLAG_DONE;
}

void poll_client_loop(void)
{
	int indx=0;
	int out_data_size = 0;

    while(1){
		while(e24_resource.flags != E24_FLAG_VALID)
		{
			indx++;
		}

		out_data_size = e24_resource.out_data_size;
		unsigned char *inbuf = (unsigned char *)e24_resource.in_data_addr;
		unsigned char *outbuf = (unsigned char *)e24_resource.out_data_addr;

		if(out_data_size < E24_DSP_CMD_INLINE_DATA_SIZE)
		{
			inbuf = e24_resource.in_data;
			outbuf = e24_resource.out_data;
		}

		for(indx = 0;indx < out_data_size;indx++)
		{
			outbuf[indx] = inbuf[indx] + 3;
		}
		e24_resource.flags = E24_FLAG_DONE;
    }
}
