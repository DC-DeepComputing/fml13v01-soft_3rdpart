/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_math.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */

#include "bsp_math.h"

unsigned int __div64_32(uint64_t *n, unsigned int base)
{
	uint64_t rem = *n;
	uint64_t b = base;
	uint64_t res, d = 1;
	unsigned int high = rem >> 32;

	/* Reduce the thing a bit first */
	res = 0;
	if (high >= base) {
		high /= base;
		res = (uint64_t) high << 32;
		rem -= (uint64_t) (high*base) << 32;
	}

	while ((int64_t)b > 0 && b < rem) {
		b = b+b;
		d = d+d;
	}

	do {
		if (rem >= b) {
			rem -= b;
			res += d;
		}
		b >>= 1;
		d >>= 1;
	} while (d);

	*n = res;
	return rem;
}

