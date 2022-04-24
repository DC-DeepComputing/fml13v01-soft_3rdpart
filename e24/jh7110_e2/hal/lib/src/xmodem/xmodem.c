
#include "sfive_cli_porting.h"
#include <string.h>
//#include "uart.h"
//#include "uart_rx_dma_buf.h"



#define SOH  0x01
#define STX  0x02
#define EOT  0x04
#define ACK  0x06
#define NAK  0x15
#define CAN  0x18
#define CTRLZ 0x1A

#define DLY_1S 0x100000
#define MAXRETRANS 25
static int last_error = 0;


void port_outbyte(uint8_t trychar)
{
    //uart_write(&trychar,1, NULL,NULL);
}

uint8_t port_inbyte(unsigned int time_out)
{
  uint8_t ch = 0;
  //if(time_out == 0)
  //  time_out = 0xffffffff;
  //rx bond dma, so data recieve just polling
  //do{
  //  if(udma_rx_poll_data_byte(&ch) == true)
  //    return ch;
  //}while(time_out--);

  return ch;
}

uint16_t calcrc(unsigned char *ptr, int count)
{
    int crc = 0;
    char i;

    while (--count >= 0)
    {
        crc = crc ^ (int) *ptr++ << 8;
        i = 8;
        do
        {
        if (crc & 0x8000)
            crc = crc << 1 ^ 0x1021;
        else
            crc = crc << 1;
        } while(--i);
    }
    return (uint16_t)crc;
}

static int check(int crc, uint8_t *buf, int sz)
{
    if (crc)
    {
        uint16_t crc2 = calcrc(buf, sz);

        uint16_t tcrc = (buf[sz]<<8)+buf[sz+1];
        if (crc2 == tcrc)
            return 1;
    }
    else
    {
        int i;
        uint8_t cks = 0;
        for (i = 0; i < sz; ++i)
        {
            cks += buf[i];
        }
        if (cks == buf[sz])
            return 1;
    }
    return 0;
}

static void flushinput(void)
{
 //while (port_inbyte(((DLY_1S)*3)>>1) >= 0)
    ;
}

int xmodem_receive(uint32_t size, int (*savedata) (uint32_t, uint8_t*, uint32_t))
{
    static uint8_t s_xbuff[1030];
    uint8_t *p;
    int bufsz, crc = 0;
    uint8_t trychar = 'C';
    uint8_t packetno = 1;
    uint8_t c;
    uint32_t i, len = 0;
    int retry, retrans = MAXRETRANS;
    last_error = 0;
    for(;;)
    {
        for( retry = 0; retry < 16; ++retry)
        {
            if (trychar)
                port_outbyte(trychar);
            c = port_inbyte((DLY_1S)<<1);
            if (last_error == 0)
            {
                switch (c)
                {
                case SOH:
                    bufsz = 128;
                    goto start_recv;
                case STX:
                    bufsz = 1024;
                    goto start_recv;
                case EOT:
                    flushinput();
                    port_outbyte(ACK);
                    return len;
                case CAN:
                    c = port_inbyte(DLY_1S);

                    if (c == CAN)
                    {
                        flushinput();
                        port_outbyte(ACK);
                        return -ERR_BUSY;
                    }
                    break;
                default:
                    break;
                }
            }
        }
        if (trychar == 'C')
        {
            trychar = NAK;
            continue;
        }
        flushinput();
        port_outbyte(CAN);
        port_outbyte(CAN);
        port_outbyte(CAN);
        return -ERR_BUSY;
start_recv:
        if (trychar == 'C') crc = 1;
            trychar = 0;
        p = s_xbuff;
        *p++ = c;
        for (i = 0;  i < (bufsz+(crc?1:0)+3); ++i)
        {
            c = port_inbyte(DLY_1S);

            if (last_error != 0)
                goto reject;
            *p++ = c;
        }

        if (s_xbuff[1] == (uint8_t)(~s_xbuff[2]) &&
            (s_xbuff[1] == packetno || s_xbuff[1] == (uint8_t)packetno-1) &&
            check(crc, &s_xbuff[3], bufsz))
        {
            if (s_xbuff[1] == packetno)
            {
                uint32_t count = size - len;
                if (count > bufsz)
                    count = bufsz;
                if (count > 0)
                {
                    //get effective data
                    //memcpy (&dest[len], &s_xbuff[3], count);
                    if(savedata(len, s_xbuff + 3, count) != SUCCESS)
                      return -ERR_IO_FAIL;
                    len += count;
                }
                ++packetno;
                retrans = MAXRETRANS+1;
            }
            if (--retrans <= 0)
            {
                flushinput();
                port_outbyte(CAN);
                port_outbyte(CAN);
                port_outbyte(CAN);
                return -ERR_RETRY;
            }
            port_outbyte(ACK);
            continue;
        }
reject:
        flushinput();
        port_outbyte(NAK);
    }
    return 0;
}

int xmodem_transmit(unsigned char *src, int size)
{
    unsigned char xbuff[1030];
    int bufsz, crc = -1;
    unsigned char packetno = 1;
    int i, c, len = 0;
    int retry;

    for(;;) {
        for( retry = 0; retry < 16; ++retry)
        {
            c = port_inbyte((DLY_1S)<<1);
            if (last_error == 0)
            {
                switch (c)
                {
                    case 'C':
                        crc = 1;
                        goto start_trans;
                    case NAK:
                        crc = 0;
                        goto start_trans;
                    case CAN:
                        c = port_inbyte(DLY_1S);
                        if (c == CAN)
                        {
                            port_outbyte(ACK);
                            flushinput();
                            return -ERR_BUSY;
                        }
                        break;
                    default:
                        break;
                }
            }
        }
        port_outbyte(CAN);
        port_outbyte(CAN);
        port_outbyte(CAN);
        flushinput();
        return -ERR_BUSY;

        for(;;)
        {
            start_trans:
            xbuff[0] = SOH; bufsz = 128;
            xbuff[1] = packetno;
            xbuff[2] = ~packetno;
            c = size - len;
            if (c > bufsz)
                c = bufsz;
            if (c >= 0)
            {
                memset (&xbuff[3], 0, bufsz);
                if (c == 0)
                {
                    xbuff[3] = CTRLZ;
                }
                else
                {
                    memcpy (&xbuff[3], &src[len], c);
                    if (c < bufsz)
                        xbuff[3+c] = CTRLZ;
                }
                if (crc)
                {
                    unsigned short ccrc = calcrc(&xbuff[3], bufsz);
                    xbuff[bufsz+3] = (ccrc>>8) & 0xFF;
                    xbuff[bufsz+4] = ccrc & 0xFF;
                }
                else
                {
                    unsigned char ccks = 0;
                    for (i = 3; i < bufsz+3; ++i)
                    {
                        ccks += xbuff[i];
                    }
                    xbuff[bufsz+3] = ccks;
                }
                for (retry = 0; retry < MAXRETRANS; ++retry)
                {
                    for (i = 0; i < bufsz+4+(crc?1:0); ++i)
                    {
                        port_outbyte(xbuff[i]);
                    }
                    c = port_inbyte(DLY_1S);
                    if (last_error == 0 )
                    {
                        switch (c)
                        {
                            case ACK:
                                ++packetno;
                                len += bufsz;
                                goto start_trans;
                            case CAN:
                                c = port_inbyte(DLY_1S);
                                if ( c == CAN)
                                {
                                    port_outbyte(ACK);
                                    flushinput();
                                    return -ERR_BUSY;
                                }
                                break;
                            case NAK:
                            default:
                                break;
                        }
                    }
                }
                port_outbyte(CAN);
                port_outbyte(CAN);
                port_outbyte(CAN);
                flushinput();
                return -ERR_RETRY;
            }
            else
            {
                for (retry = 0; retry < 10; ++retry)
                {
                    port_outbyte(EOT);
                    c = port_inbyte((DLY_1S)<<1);
                    if (c == ACK)
                        break;
                }
                flushinput();
                return (c == ACK)?len:-5;
            }
        }
    }
    return 0;
}



