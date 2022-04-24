
#include <string.h>
#include <stdlib.h>
#include "sfive_cli.h"

#define CLI_MOD_NUM_MUX 128
#define CLI_CMD_SIZE  256
#define CLI_DATA_SIZE  4096


typedef struct{

    cli_module_t*   p_module;
    cli_input_t     input;
    char            cmdbuf[CLI_CMD_SIZE];
    bool            prompt;
    int             cmdlen;
}cli_ctx_t;

static cli_ctx_t m_cli_ctx = {
    .p_module  = NULL,
    .input = NULL,
    .prompt = true,
    .cmdlen = 0,
};


uint8_t g_cli_data_buf[CLI_DATA_SIZE];

void parse_cmd(void* pmod, char* pcmd, bool help)
{
    int i;
    int idx = 0;
    cli_module_t* pmods = (cli_module_t*)pmod;
    const cli_cmd_t* pcmdlist = pmods->cmd_list;
    for(i = 0; i< pmods->cmd_num; i++){
        char *stop;
        if(pcmd[0] >= '0' && pcmd[0] <= '9')
        {
            idx = strtol(pcmd, &stop, 10);
            if(idx < 0 || idx >= pmods->cmd_num)
                return;
            pcmd = strtok(pcmd, " \n\r");
            pcmd += strlen(pcmd) + 1;
        }
        else if(strncmp(pcmd, pcmdlist[i].cmd_name, strlen(pcmdlist[i].cmd_name)) == 0 &&
          (pcmd[strlen(pcmdlist[i].cmd_name)] == ' ' ||pcmd[strlen(pcmdlist[i].cmd_name)] == '\0'))
        {
            idx = i;
            pcmd = strtok(pcmd, " \n\r"); 
            pcmd += strlen(pcmd) + 1;
        }
        else
        {
            continue;
        }

        if(help){
            PRINTF("command usage: %s.%s %s\n",pmods->mod_name, pcmdlist[idx].cmd_name, pcmdlist[idx].cmd_help);
            PRINTF("or           : %s.%s %s\n",pmods->mod_abbr, pcmdlist[idx].cmd_name, pcmdlist[idx].cmd_help);
            return;
        }
        else
        {
            pcmdlist[idx].cmd_func(pcmd);
            return;
        }
    }
    if(help){
        pcmdlist = pmods->cmd_list;
        PRINTF("help:\n");
        PRINTF("module: %s|%s\n", pmods->mod_name, pmods->mod_abbr);
        PRINTF("function list:\n");
        for(i = 0; i< pmods->cmd_num; i++){
            PRINTF("%d: %s.%s\n",i, pmods->mod_name, pcmdlist[i].cmd_name);
        }
    }
}

static void parse_module(char* pcmd)
{
    cli_ctx_t* pctx = &m_cli_ctx;
    cli_module_t* pmod = pctx->p_module;
    bool help = false;

    if(strncmp(pcmd, "help", 4) == 0){
        help = true;
        pcmd += 5;
    }
    
    if(strcmp(pcmd, "prompt on") == 0){
        pctx->prompt = true;
        pcmd += 10;
        return;
    }

    if(strcmp(pcmd, "prompt off") == 0){
        pctx->prompt = false;
        pcmd += 11;
        return;
    }

    char* mod_identify = strtok(pcmd, ".");
    if(!mod_identify){
        if(help){
            PRINTF("help:\n");
            PRINTF("modules:\n");
            while(pmod){
                PRINTF("    %s|%s\n", pmod->mod_name, pmod->mod_abbr);
                pmod = (cli_module_t*)(pmod->next_mod);
            }
        }
        return;
    }

    char* cmd_identify = pcmd + strlen(mod_identify) + 1;
    while(pmod){
        if(strcmp(mod_identify, pmod->mod_name)==0){
            pmod->parser(pmod, cmd_identify, help);
            return;
        }
        if(strcmp(mod_identify, pmod->mod_abbr)==0){
            pmod->parser(pmod, cmd_identify, help);
            return;
        }
        pmod = (cli_module_t*)(pmod->next_mod);
    }

}


void cli_loop(void)
{
    int size = 0,i;
    char* pdata = NULL;
    cli_ctx_t* pctx = &m_cli_ctx;
    //collect input data
    if(pctx->input){
        size = pctx->input(&pdata);
        if(size){
            char* pcmd = pctx->cmdbuf;
            for(i = 0; i< size; i++){
                if(pdata[i]== '\r' || pdata[i]== '\n'){
                    pcmd[pctx->cmdlen] = '\0';
                    parse_module(pcmd);
                    pctx->cmdlen = 0;
                    memset(m_cli_ctx.cmdbuf, 0, CLI_CMD_SIZE);
                    if(pctx->prompt)
                        PRINTF("\n>>");
                    continue;
                }
                pcmd[pctx->cmdlen] = pdata[i];
                pctx->cmdlen ++;
                if(pctx->cmdlen >= CLI_CMD_SIZE){
                    memset(m_cli_ctx.cmdbuf, 0, CLI_CMD_SIZE);
                    pctx->cmdlen = 0;
                }
            }
        }
    }
}


int cli_module_register(cli_module_t* p_module)
{
    cli_module_t** pp_module_root = &(m_cli_ctx.p_module);
    if(*pp_module_root == NULL){
        *pp_module_root = p_module;
        return SUCCESS;
    }
    cli_module_t* p_module_root = m_cli_ctx.p_module;
    for(int i = 0; i< CLI_MOD_NUM_MUX; i++){
        if(p_module_root->next_mod == NULL){
            p_module_root->next_mod = (void*)p_module;
            return SUCCESS;
        }
        p_module_root = (cli_module_t*)(p_module_root->next_mod);
    }
    return ERR_OVERFLOW;
}


int cli_init(cli_input_t input)
{
    m_cli_ctx.input = input;
    m_cli_ctx.cmdlen = 0;
    memset(m_cli_ctx.cmdbuf, 0, CLI_CMD_SIZE);
    
    PRINTF("\n>>");
    return SUCCESS;
}


