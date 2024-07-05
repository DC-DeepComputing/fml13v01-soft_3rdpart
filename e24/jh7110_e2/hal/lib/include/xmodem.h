
#ifndef _X_MODEM_H
#define _X_MODEM_H

int xmodem_receive(uint32_t size, int (*savedata) (uint32_t, uint8_t*, uint32_t));
int xmodem_transmit(unsigned char *src, int size);


#endif

