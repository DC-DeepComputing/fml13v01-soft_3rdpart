/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * @file run_hal_tests.c
 * @author StarFive FW Team
 * @brief  
 ******************************************************************************
 */
#include "bsp_include.h"
#include "run_hal_tests.h"
#include "sfive_cli.h"

static const char *RESULT_STR[] = {"SUCCESS", "FAILURE"};

static int run_hal_testcase(testcase_t *t)
{
    if (!t->run) {
        return HAL_TEST_FAILURE;
    }

    printf("testcase: '%s'\n", t->name ? t->name : "<unnamed>");
    void *device = t->create ? t->create(t->dp0, t->dp1, t->dp2, t->dp3) : NULL;
    int result = t->run(device, t->tp0, t->tp1, t->tp2, t->tp3);
    if (device && t->delete) {
        t->delete(device);
    }
    printf("result: %s\n", RESULT_STR[result ? HAL_TEST_FAILURE : HAL_TEST_SUCCESS]);

    return result ? HAL_TEST_FAILURE : HAL_TEST_SUCCESS;
}

int run_hal_testsuite(const testsuite_t *ts)
{
    if (!ts) {
        return HAL_TEST_FAILURE;
    }

    printf("\n=======================\n");
    printf("testsuite '%s', %d testcases\n", ts->name, ts->count);
    unsigned i;
    int faileds = 0;
    testcase_t *t = ts->testcases;

    for (i = 0; i < ts->count; i++, t++) {
        printf("\n#%d\n", i);
        t->result = run_hal_testcase(t);
        faileds += (t->result == HAL_TEST_FAILURE) ? 1 : 0;
    }

    printf("\ntestsuite '%s' result: %d SUCCESS, %d FAILED\n", ts->name, ts->count - faileds, faileds);
    t = ts->testcases;
    for (i = 0; i < ts->count; i++, t++) {
        printf("[%s]#%d: '%s'\n", RESULT_STR[t->result], i, t->name ? t->name : "<unnamed>");
    }

    return faileds ? HAL_TEST_FAILURE : HAL_TEST_SUCCESS;
}

/*
xx.all
xx.1
xx.2
*/
void hal_testsuite_parser(void* pmod, char* pcmd, bool help)
{
    cli_module_t* pmods = (cli_module_t*)pmod;
    testsuite_t* pts = (testsuite_t*)pmods->suite;
    int i;
    if(help){
        PRINTF("help:\n");
        PRINTF("module: %s|%s\n", pmods->mod_name, pmods->mod_abbr);
        PRINTF("name: %s\n", pts->name);
        PRINTF("function list:\n");
        for(i = 0; i< pts->count; i++){
            PRINTF("%d: %s\n",i, pts->testcases[i].name);
        }
        return;
    }

    if(pcmd[0] >= '0' && pcmd[0] <= '9')
    {
        int idx = 0;
        char *stop;
        idx = strtol(pcmd, &stop, 10);
        if(idx >= 0 && idx < pts->count)
            run_hal_testcase(&(pts->testcases[idx]));
    }
    else if(strcmp(pcmd, "all") == 0)
    {
        run_hal_testsuite(pts);
    }

}

