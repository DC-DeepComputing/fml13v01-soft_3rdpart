/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * @file mtest.c
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#include "mem_test_porting.h"
#include <mem_test.h>
// #include <hal_dma.h>

static const unsigned long pattern[] = {
    0x5a5a5a5a5a5a5a5a,     /* 0101101001011010010110100101101001011010010110100101101001011010 */
    0xa5a5a5a5a5a5a5a5,     /* 1010010110100101101001011010010110100101101001011010010110100101 */
};

static ulong mem_test_alt(vu_long *buf, ulong start_addr, ulong end_addr, vu_long *dummy)
{
    vu_long *addr;
    ulong errs = 0;
    vu_long val, readback;
    int j;
    vu_long offset;
    vu_long test_offset;
    vu_long pattern;
    vu_long temp;
    vu_long anti_pattern;
    vu_long num_words;
    static const vu_long bitpattern[] = {
        0x00000001,    /* single bit */
        0x00000003,    /* two adjacent bits */
        0x00000007,    /* three adjacent bits */
        0x0000000F,    /* four adjacent bits */
        0x00000005,    /* two non-adjacent bits */
        0x00000015,    /* three non-adjacent bits */
        0x00000055,    /* four non-adjacent bits */
        0xaaaaaaaa,    /* alternating 1/0 */
    };

    num_words = (end_addr - start_addr) / sizeof(vu_long);

    /*
     * Data line test: write a pattern to the first
     * location, write the 1's complement to a 'parking'
     * address (changes the state of the data bus so a
     * floating bus doesn't give a false OK), and then
     * read the value back. Note that we read it back
     * into a variable because the next time we read it,
     * it might be right (been there, tough to explain to
     * the quality guys why it prints a failure when the
     * "is" and "should be" are obviously the same in the
     * error message).
     *
     * Rather than exhaustively testing, we test some
     * patterns by shifting '1' bits through a field of
     * '0's and '0' bits through a field of '1's (i.e.
     * pattern and ~pattern).
     */
    addr = buf;
    for (j = 0; j < sizeof(bitpattern) / sizeof(bitpattern[0]); j++) {
        val = bitpattern[j];
        for (; val != 0; val <<= 1) {
            *addr = val;
            *dummy  = ~val; /* clear the test data off the bus */
            readback = *addr;
            if (readback != val) {
                printf("FAILURE (data line): "
                    "expected %08lx, actual %08lx\n",
                        val, readback);
                errs++;
                if (ctrlc())
                    return -1;
            }
            *addr  = ~val;
            *dummy  = val;
            readback = *addr;
            if (readback != ~val) {
                printf("FAILURE (data line): "
                    "Is %08lx, should be %08lx\n",
                        readback, ~val);
                errs++;
                if (ctrlc())
                    return -1;
            }
        }
    }

    /*
     * Based on code whose Original Author and Copyright
     * information follows: Copyright (c) 1998 by Michael
     * Barr. This software is placed into the public
     * domain and may be used for any purpose. However,
     * this notice must not be changed or removed and no
     * warranty is either expressed or implied by its
     * publication or distribution.
     */

    /*
    * Address line test
     * Description: Test the address bus wiring in a
     *              memory region by performing a walking
     *              1's test on the relevant bits of the
     *              address and checking for aliasing.
     *              This test will find single-bit
     *              address failures such as stuck-high,
     *              stuck-low, and shorted pins. The base
     *              address and size of the region are
     *              selected by the caller.
     * Notes:    For best results, the selected base
     *              address should have enough LSB 0's to
     *              guarantee single address bit changes.
     *              For example, to test a 64-Kbyte
     *              region, select a base address on a
     *              64-Kbyte boundary. Also, select the
     *              region size as a power-of-two if at
     *              all possible.
     *
     * Returns:     0 if the test succeeds, 1 if the test fails.
     */
    pattern = (vu_long) 0xaaaaaaaa;
    anti_pattern = (vu_long) 0x55555555;

    //debug("%s:%d: length = 0x%.8lx\n", __func__, __LINE__, num_words);
    /*
     * Write the default pattern at each of the
     * power-of-two offsets.
     */
    for (offset = 1; offset < num_words; offset <<= 1)
        addr[offset] = pattern;

    /*
     * Check for address bits stuck high.
     */
    test_offset = 0;
    addr[test_offset] = anti_pattern;

    for (offset = 1; offset < num_words; offset <<= 1) {
        temp = addr[offset];
        if (temp != pattern) {
            printf("\nFAILURE: Address bit stuck high @ 0x%.8lx:"
                " expected 0x%.8lx, actual 0x%.8lx\n",
                start_addr + offset*sizeof(vu_long),
                pattern, temp);
            errs++;
            if (ctrlc())
                return -1;
        }
    }
    addr[test_offset] = pattern;
    WATCHDOG_RESET();

    /*
     * Check for addr bits stuck low or shorted.
     */
    for (test_offset = 1; test_offset < num_words; test_offset <<= 1) {
        addr[test_offset] = anti_pattern;

        for (offset = 1; offset < num_words; offset <<= 1) {
            temp = addr[offset];
            if ((temp != pattern) && (offset != test_offset)) {
                printf("\nFAILURE: Address bit stuck low or"
                    " shorted @ 0x%.8lx: expected 0x%.8lx,"
                    " actual 0x%.8lx\n",
                    start_addr + offset*sizeof(vu_long),
                    pattern, temp);
                errs++;
                if (ctrlc())
                    return -1;
            }
        }
        addr[test_offset] = pattern;
    }

    /*
     * Description: Test the integrity of a physical
     *        memory device by performing an
     *        increment/decrement test over the
     *        entire region. In the process every
     *        storage bit in the device is tested
     *        as a zero and a one. The base address
     *        and the size of the region are
     *        selected by the caller.
     *
     * Returns:     0 if the test succeeds, 1 if the test fails.
     */
    num_words++;

    /*
     * Fill memory with a known pattern.
     */
    for (pattern = 1, offset = 0; offset < num_words; pattern++, offset++) {
        WATCHDOG_RESET();
        addr[offset] = pattern;
    }

    /*
     * Check each location and invert it for the second pass.
     */
    for (pattern = 1, offset = 0; offset < num_words; pattern++, offset++) {
        WATCHDOG_RESET();
        temp = addr[offset];
        if (temp != pattern) {
            printf("\nFAILURE (read/write) @ 0x%.8lx:"
                " expected 0x%.8lx, actual 0x%.8lx)\n",
                start_addr + offset*sizeof(vu_long),
                pattern, temp);
            errs++;
            if (ctrlc())
                return -1;
        }

        anti_pattern = ~pattern;
        addr[offset] = anti_pattern;
    }

    /*
     * Check each location for the inverted pattern and zero it.
     */
    for (pattern = 1, offset = 0; offset < num_words; pattern++, offset++) {
        WATCHDOG_RESET();
        anti_pattern = ~pattern;
        temp = addr[offset];
        if (temp != anti_pattern) {
            printf("\nFAILURE (read/write): @ 0x%.8lx:"
                " expected 0x%.8lx, actual 0x%.8lx)\n",
                start_addr + offset*sizeof(vu_long),
                anti_pattern, temp);
            errs++;
            if (ctrlc())
                return -1;
        }
        addr[offset] = 0;
    }

    return errs;
}

int mem_test(void *addr, unsigned long len, int iteration_limit)
{
    vu_long scratch_space;
    vu_long *buf, *dummy = &scratch_space;
    ulong count = 0;
    ulong errs = 0;
    int iteration;

    buf = (vu_long*)addr;
    for (iteration = 0; iteration < iteration_limit; iteration++) {
        errs = mem_test_alt(buf, (ulong)addr, (ulong)addr+len-1, dummy);
        count += errs;
    }
    //printf("Tested %d iteration(s) with %lu errors.\n", iteration, count);
    return count;
}

// int mem_test_with_dma(hal_dma_req_parms_t *dma, unsigned long start_addr, unsigned long len, unsigned long block_size)
// {
//     int err = 0;
//     unsigned long *addr;

//     //fill the first block
//     for (int j = 0; j < sizeof(pattern) / sizeof(pattern[0]); j++) {
//         addr = (unsigned long *)start_addr;
//         for (int offset = 0; offset < (block_size / sizeof(unsigned long)); offset++) {
//             addr[offset] = pattern[j];
//         }

//         for (int i = 1; i < len / block_size; i++) {
//             dma_xfer(dma, start_addr + i * block_size, start_addr + (i - 1) * block_size, block_size, HAL_DMAC_XFER_FLAGE_BLOCK);
//         }
//         memset(start_addr, 0x0, len - block_size);

//         //check the last block
//         addr = (unsigned long *)(start_addr + ((len/block_size) - 1) * block_size);
//         for(int offset = 0; offset < (block_size / sizeof(unsigned long)); offset++) {
//             if (addr[offset] != pattern[j]) {
//                 err += 1;
//             }
//         }
//         memset(start_addr + len - block_size, 0x0, block_size);
//     }
    
//     if (err) {
//         printf("region FAIL, require further check\n");
//     } else {
//         printf("region PASS\n");
//     }

//     return err;
// }

int mod_reg_test(const mod_reg_test_t *mod, uint32_t *custom_pattern, uint32_t custom_pattern_num)
{
    if (!mod) {
        return -EINVAL;
    }

    uint32_t previous_val, val, expected_val, current_val, reset_value;
    const uint32_t builtin_pattern[] = {0x0, 0x55aa55aa, 0xaa55aa55, 0xcc33cc33, 0x33cc33cc, 0xffffffff};
    const uint32_t *pattern = custom_pattern ? custom_pattern : builtin_pattern;
    const int pattern_num = custom_pattern ? custom_pattern_num : sizeof(builtin_pattern)/sizeof(builtin_pattern[0]);

    if (mod->disable) {
        mod->disable();
    }
    if (mod->enable) {
        mod->enable();
    }

    reset_value = sys_readl(mod->addr);
    printf("%s\n", mod->name);
    printf("    test reg: 0x%lx, reset value: 0x%08x, write mask: 0x%08x\n", mod->addr, reset_value, mod->write_mask);
    if (mod->reset_value_valid && reset_value != mod->reset_value) {
        printf("    ERROR: expected reset value: 0x%08x\n", mod->reset_value);
        return 1;
    }

    //write with pattern and verify
    if (mod->write_mask != 0) {
        for (int i = 0; i < pattern_num; i++) {
            val = pattern[i];
            //previous_val = sys_readl(mod->addr);
            expected_val = val & mod->write_mask;
            sys_writel(val, mod->addr);
            current_val = sys_readl(mod->addr);
            if ((current_val & mod->write_mask) != expected_val) {
                printf("    ERROR: write failed\n");
                printf("    write: 0x%08x, expected: 0x%08x, current: 0x%08x\n\n", val, expected_val, current_val & mod->write_mask);
                return 1;
            }
        }
        printf("    PASS\n\n");

        sys_writel(reset_value, mod->addr);
        if (mod->disable) {
            mod->disable();
        }
    }

    return 0;
}
