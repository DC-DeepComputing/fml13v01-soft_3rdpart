/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * @file bsp_console.h
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#ifndef __BSP_CONSOLE_H
#define __BSP_CONSOLE_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

int sys_console_init(void);

/**
  * @brief  Put a char to serial port, for gloss lib only, other shall call stdio API putc() instead.
  * @param  c the character to put.
  * @retval 0 for success, else for error.
  */
int sys_putc(char c);

/**
  * @brief  Get a char from serial port, for gloss lib only, other shall call stdio API getchar() instead.
  * @retval >0 for valid character, else for error.
  */
int sys_getc(void);

/**
  * @brief  Get a char from serial port, with echo, compatible with stdio::getchar.
  * @retval >0 for valid character, else for error.
  */
int sys_getchar(void);

/**
  * @brief  self-implement secure gets extension, suitable for memory-constrained env, ex. internal memory
  * @param str buffer to get string.
  * @param size buffer size.
  * @param len length of the string, =strlen(str).
  * @retval always return str.
  */
char *sys_gets_ex(char *str, size_t size, size_t *len);

/**
  * @brief  Test if there is any data to be read at the serial port.
  * @retval 1 for true, 0 for false.
  */
int sys_tstc(void);

/**
  * @brief  self-implement printf, smaller than stdio::printf, suitable for memory-constrained env, ex. internal memory
  * @param fmt format string, compatible with stdio::printf.
  * @retval always return 0, different from stdio::printf.
  */
int sys_printf(const char *fmt, ...);

/**
  * @brief  self-implement printf, smaller than stdio.gets, suitable for memory-constrained env, ex. internal memory
  * @param str buffer to get string, compatible with stdio::gets.
  * @retval always return str, different from stdio::gets.
  */
char *sys_gets(char *str);

void sys_vprintf(const char *fmt, va_list ap);

/**
 * Define REDEFINE_STDIO_FUNCTIONS to suppress stdio::xx() calls (default for CONFIGURATION=rtl_sim).
 * Try to do this ONLY if you want and have included this header after each "#include <stdio.h>".
 */
//#define REDEFINE_STDIO_FUNCTIONS
#if defined(REDEFINE_STDIO_FUNCTIONS) || defined(RTL_SIM)
#define printf(...)   sys_printf(__VA_ARGS__)
#define gets(str)     sys_gets(str)
#define getchar()     sys_getchar()
#define setbuf(...)   do {} while(0)
#define fflush(io)    do {} while(0)
#endif

//#define NO_DEBUG_PRINT
#if defined(NO_DEBUG_PRINT)
#define printf(...)   do {} while(0)
#endif

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_CONSOLE_H */

