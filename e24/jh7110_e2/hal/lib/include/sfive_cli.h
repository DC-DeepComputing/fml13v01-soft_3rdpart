
#ifndef _SFIVE_CLI_H
#define _SFIVE_CLI_H

#include <stdint.h>
#include <stdbool.h>
#include "sfive_cli_porting.h"

#define CLI_CMD_DEF(function, help) {#function, function, help}


enum{
    CLI_MOD_TYPE_CASE = 0,
    CLI_MOD_TYPE_SUITE
};

typedef void(*cmd_func_t)(char* param);

//return data length
typedef int(*cli_input_t)(char** data);

typedef struct cli_cmd_s{
    const char* cmd_name;
    cmd_func_t  cmd_func;
    char* cmd_help;
}cli_cmd_t;

typedef void (*parser_t)(void* pmod, char* pcmd, bool help);

typedef struct cli_module_s{
    void*       next_mod;
    parser_t    parser;
    const char* mod_name;
    const char* mod_abbr;
    int         mod_type;
    uint32_t    cmd_num;
    union{
        cli_cmd_t*    cmd_list;
        void*         suite;
    };
}cli_module_t;

#define __resource_t

#define CLI_MODULE_DEF(mod, abbr, cmdlist) static cli_module_t s_cli_module_##mod = {\
    .next_mod = 0,                                  \
    .parser   = parse_cmd,                          \
    .mod_name = #mod,                               \
    .mod_abbr = #abbr,                              \
    .mod_type = CLI_MOD_TYPE_CASE,                  \
    .cmd_num  = sizeof(cmdlist)/sizeof(cli_cmd_t),  \
    .cmd_list = cmdlist                            }

#define CLI_MODULE_SUITE(mod, abbr, psuite, suite_parser) static cli_module_t s_cli_module_##mod = {\
    .next_mod = 0,                                  \
    .parser   = suite_parser,                          \
    .mod_name = #mod,                               \
    .mod_abbr = #abbr,                              \
    .mod_type = CLI_MOD_TYPE_SUITE,                 \
    .cmd_num  = 0,                                  \
    .suite    = (void*)psuite                      }

#define CLI_MODULE_REGISTER(mod) cli_module_register(&s_cli_module_##mod)


void parse_cmd(void* pmod, char* pcmd, bool help);
extern void cli_loop(void);
extern int cli_module_register(cli_module_t* p_module);
extern int cli_init(cli_input_t input);

#endif /*_SFIVE_CLI_H*/


