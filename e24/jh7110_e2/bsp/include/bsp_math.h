#ifndef _BSP_MATH_H
#define _BSP_MATH_H
/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_math.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
 

#include <stdint.h>


unsigned int __div64_32(uint64_t *n, unsigned int base);

//extern u32_t __div64_32(uint64_t *dividend, u32_t divisor);

/* The unnecessary pointer compare is there
 * to check for type safety (n must be 64bit)
 */
# define do_div(n,base) ({				\
	uint32_t __base = (base);			\
	uint32_t __rem;					\
	(void)(((typeof((n)) *)0) == ((uint64_t *)0));	\
	if (((n) >> 32) == 0) {			\
		__rem = (uint32_t)(n) % __base;		\
		(n) = (uint32_t)(n) / __base;		\
	} else						\
		__rem = __div64_32(&(n), __base);	\
	__rem;						\
 })

/* Wrapper for do_div(). Doesn't modify dividend and returns
 * the result, not reminder.
 */
static inline uint64_t bsp_lldiv(uint64_t dividend, uint32_t divisor)
{
	uint64_t __res = dividend;
	do_div(__res, divisor);
	return(__res);
}

static inline uint64_t div_u64_rem(uint64_t dividend, uint32_t divisor, uint32_t *remainder)
{
	*remainder = dividend % divisor;
	return dividend / divisor;
}

#endif /* _BSP_MATH_H */
