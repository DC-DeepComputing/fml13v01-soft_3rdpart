/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * 
 * @file run_hal_tests.h
 * @author StarFive FW Team
 * @brief 
 *******************************************s***********************************
 */
#ifndef __RUN_HAL_TESTS_H_
#define __RUN_HAL_TESTS_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define HAL_TEST_SUCCESS    0
#define HAL_TEST_FAILURE    1
#include <stdbool.h>

typedef struct
{
    const char *name;                                       //mandatary, testcase name, example: "spi nor flash"
    void * (*create)(void*, void*, void*, void*);           //optional, external device constructor 
    void * (*delete)(void*);                                //mandatary if init_dev exist, external device destructor
    void *dp0, *dp1, *dp2, *dp3;                            //optional, parameters for device construction
    int (*run)(void*, void*, void*, void*, void*);          //manatary, testcase entry, additional parameters permitted
    void *tp0, *tp1, *tp2, *tp3;                            //optional, parameters for testcase entry
    int result;                                             //to save test result, 0-pass, 1-failed
} testcase_t;

typedef struct
{
    const char *name;       //testsuite name, example: "hal built-in tests", "devices tests"
    testcase_t *testcases;  //testcase array
    unsigned count;         //count if testcases in the array
} testsuite_t;

int run_hal_testsuite(const testsuite_t *ts);
void hal_testsuite_parser(void* pmod, char* pcmd, bool help);

#define DEFINE_MODULE_TESTCASES_BEGIN(mod)                  \
    static testcase_t __hal_##mod##_testcases[] = {

#define DEFINE_MODULE_TESTCASES_END(mod)                    \
    };                                                      \
    const static testsuite_t __hal_##mod##_testsuite = {    \
        .name      = "hal " #mod " testsuite",              \
        .testcases = __hal_##mod##_testcases,               \
        .count     = ARRAY_SIZE(__hal_##mod##_testcases),   \
    };

#ifdef RTL_SIM
//no module testsuite will be registered
#define REGISTER_MODULE_TESTSUITE(mod,abbr)
#else
#define REGISTER_MODULE_TESTSUITE(mod,abbr)                                         \
    CLI_MODULE_SUITE(mod, abbr, &__hal_##mod##_testsuite, hal_testsuite_parser);    \
    __CONSTRUCTOR static void cli_module_##mod##_init(void) {                       \
        CLI_MODULE_REGISTER(mod);                                                   \
    }

#endif

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __RUN_HAL_TESTS_H_ */
