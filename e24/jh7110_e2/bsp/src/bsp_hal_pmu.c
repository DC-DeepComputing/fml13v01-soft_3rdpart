/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_hal_pmu.c
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#include "bsp_include.h"
#include "pmic.h"

typedef struct
{
    uint32_t    unused_00[(0x04 - 0x00) / 4];       //0x00
    uint32_t    hard_event_turn_on_mask;            //0x04
    uint32_t    hard_event_turn_off_mask;           //0x08
    uint32_t    sw_dest_power_on;                   //0x0C
    uint32_t    sw_dest_power_off;                  //0x10
    uint32_t    theshold_seq_timeout;               //0x14
    uint32_t    powerdomin_cascade[11];             //0x18~0x40
    uint32_t    sw_encourage;                       //0x44
    uint32_t    interrupt_mask_reg;                 //0x48
    uint32_t    p_channel_bypass;                   //0x4C
    uint32_t    p_channel_ptate;                    //0x50
    uint32_t    p_channel_timeout_theshold;         //0x54
    uint32_t    lp_call_ctrl_timeout_theshold;      //0x58
    uint32_t    hw_dest_power_on;                   //0x5C
    uint32_t    unused_60[(0x80 - 0x60) / 4];       //0x60
    uint32_t    cur_power_mode;                     //0x80
    uint32_t    cur_seq_state;                      //0x84
    uint32_t    pmu_event_status;                   //0x88
    uint32_t    pmu_interrupts_status;              //0x8C
    uint32_t    hw_event_record;                    //0x90
    uint32_t    encourage_type_record;              //0x94
    uint32_t    p_channel_pactive;                  //0x98
} sys_pmu_regs_t;

#define    PMU_INTERRUPT_SEQ_DONE                       BIT(0)
#define    PMU_INTERRUPT_HW_REQ                         BIT(1)
#define    PMU_INTERRUPT_SW_FAIL0                       BIT(2)
#define    PMU_INTERRUPT_SW_FAIL1                       BIT(3)
#define    PMU_INTERRUPT_HW_FAIL0                       BIT(4)
#define    PMU_INTERRUPT_HW_FAIL1                       BIT(5)
#define    PMU_INTERRUPT_PCH_FAIL0                      BIT(6)
#define    PMU_INTERRUPT_PCH_FAIL1                      BIT(7)
#define    PMU_INTERRUPT_PCH_FAIL2                      BIT(8)
#define    PMU_INTERRUPT_FAIL_MASK                      (PMU_INTERRUPT_SW_FAIL0|PMU_INTERRUPT_SW_FAIL1|PMU_INTERRUPT_HW_FAIL0|PMU_INTERRUPT_HW_FAIL1\
                                                            |PMU_INTERRUPT_PCH_FAIL0|PMU_INTERRUPT_PCH_FAIL1|PMU_INTERRUPT_PCH_FAIL2)
#define    PMU_INTERRUPT_DEFAULT_MASK                   (PMU_INTERRUPT_SEQ_DONE|PMU_INTERRUPT_HW_REQ|PMU_INTERRUPT_FAIL_MASK)

#define    PMU_ENCOURAGR_TYPE_SW      0
#define    PMU_ENCOURAGR_TYPE_HW      1


static sys_pmu_regs_t *s_pmu_regs = (sys_pmu_regs_t *)U0_PMU__SAIF_BD_APB__BASE_ADDR;
static void (*irq_callback)(void*) = NULL;
static void *irq_arg = NULL;
static struct pmic_dev_t *pmic_dev = NULL;
static struct {
    int pmu_dom;
    int pmic_dom;
} pmu_pmic_table[] = {
    { PMU_DOMAIN_PMIC_VDD18_HDMI,        PMIC_DOMAIN_0 },
    { PMU_DOMAIN_PMIC_VDD18_MIPITX,      PMIC_DOMAIN_1 },
    { PMU_DOMAIN_PMIC_VDD18_MIPIRX,      PMIC_DOMAIN_2 },
    { PMU_DOMAIN_PMIC_VDD09_HDMI,        PMIC_DOMAIN_3 },
    { PMU_DOMAIN_PMIC_VDD09_MIPITX,      PMIC_DOMAIN_4 },
    { PMU_DOMAIN_PMIC_VDD09_MIPIRX,      PMIC_DOMAIN_5 },
    { PMU_DOMAIN_PMIC_VDD1833_SD0_18,    PMIC_DOMAIN_6 },
};


static void pmu_irq_handler(int irq, void *priv)
{
    uint32_t int_status = 0;
    uint32_t cur_power = 0;
    uint32_t encourage_type = 0;
    uint32_t pmu_event_status = 0;

    int_status = sys_readl(&s_pmu_regs->pmu_interrupts_status);
    cur_power = sys_readl(&s_pmu_regs->cur_power_mode);
    encourage_type = sys_readl(&s_pmu_regs->encourage_type_record);
    pmu_event_status = sys_readl(&s_pmu_regs->pmu_event_status);

    sys_printf("int status:0x%x, pmu_event_status:0x%x, encourage_type:0x%x, cur power mode:0x%x\n", int_status, pmu_event_status, encourage_type, cur_power);
    if(irq_callback)
    {
        irq_callback(irq_arg);
    }
    sys_writel(0x1ff ,&s_pmu_regs->pmu_event_status);
    sys_writel(0x1ff ,&s_pmu_regs->pmu_interrupts_status);
}

static void pmu_pmic_turn_on(uint32_t domains)
{
    int pmu_dom;
    int pmic_dom;
    int i = 0;

    if(!pmic_dev)
    {
        return;
    }

    for(i = 0; i < ARRAY_SIZE(pmu_pmic_table); i++)
    {
        pmu_dom = pmu_pmic_table[i].pmu_dom;
        pmic_dom = pmu_pmic_table[i].pmic_dom;
        if (domains & pmu_dom) 
        {
            pmic_dev->ops->pmic_set(pmic_dev, pmic_dom, PMIC_SWITCH_ON);
        }
    }
}

static void pmu_pmic_turn_off(uint32_t domains)
{
    int pmu_dom;
    int pmic_dom;
    int i = 0;

    if(!pmic_dev)
    {
        return;
    }

    for(i = 0; i < ARRAY_SIZE(pmu_pmic_table); i++)
    {
        pmu_dom = pmu_pmic_table[i].pmu_dom;
        pmic_dom = pmu_pmic_table[i].pmic_dom;
        if (domains & pmu_dom) 
        {
            pmic_dev->ops->pmic_set(pmic_dev, pmic_dom, PMIC_SWITCH_OFF);
        }
    }
}

static uint32_t pmu_pmic_power_status_get(void)
{
    uint32_t pmic_status = 0;

    if(!pmic_dev)
    {
        return 0;
    }

    pmic_status |= ((pmic_dev->ops->pmic_get(pmic_dev, PMIC_DOMAIN_0) == PMIC_SWITCH_ON) ? PMU_DOMAIN_PMIC_VDD18_HDMI: 0);
    pmic_status |= ((pmic_dev->ops->pmic_get(pmic_dev, PMIC_DOMAIN_1) == PMIC_SWITCH_ON) ? PMU_DOMAIN_PMIC_VDD18_MIPITX: 0);
    pmic_status |= ((pmic_dev->ops->pmic_get(pmic_dev, PMIC_DOMAIN_2) == PMIC_SWITCH_ON) ? PMU_DOMAIN_PMIC_VDD18_MIPIRX: 0);
    pmic_status |= ((pmic_dev->ops->pmic_get(pmic_dev, PMIC_DOMAIN_3) == PMIC_SWITCH_ON) ? PMU_DOMAIN_PMIC_VDD09_HDMI: 0);
    pmic_status |= ((pmic_dev->ops->pmic_get(pmic_dev, PMIC_DOMAIN_4) == PMIC_SWITCH_ON) ? PMU_DOMAIN_PMIC_VDD09_MIPITX: 0);
    pmic_status |= ((pmic_dev->ops->pmic_get(pmic_dev, PMIC_DOMAIN_5) == PMIC_SWITCH_ON) ? PMU_DOMAIN_PMIC_VDD09_MIPIRX: 0);
    pmic_status |= ((pmic_dev->ops->pmic_get(pmic_dev, PMIC_DOMAIN_6) == PMIC_SWITCH_ON) ? PMU_DOMAIN_PMIC_VDD1833_SD0_18: 0);

    return pmic_status;
}

/*pubilc*/
int sys_pmu_turn_on(uint32_t domains)
{
    if(domains&PMU_DOMAIN_ALL)
    {
        sys_writel(domains&PMU_DOMAIN_ALL, &s_pmu_regs->sw_dest_power_on);
        sys_writel(0xff, &s_pmu_regs->sw_encourage);
        sys_writel(0x05, &s_pmu_regs->sw_encourage);
        sys_writel(0x50, &s_pmu_regs->sw_encourage);
    }
    if(domains&PMU_DOMAIN_PMIC_ALL)
    {
        pmu_pmic_turn_on(domains&PMU_DOMAIN_PMIC_ALL);
    }

    return 0;
}

int sys_pmu_turn_off(uint32_t domains)
{
    if(domains&PMU_DOMAIN_ALL)
    {
        sys_writel(domains&PMU_DOMAIN_ALL, &s_pmu_regs->sw_dest_power_off);
        sys_writel(0xff, &s_pmu_regs->sw_encourage);
        sys_writel(0x0a, &s_pmu_regs->sw_encourage);
        sys_writel(0xa0, &s_pmu_regs->sw_encourage);
    }
    if(domains&PMU_DOMAIN_PMIC_ALL)
    {
        pmu_pmic_turn_off(domains&PMU_DOMAIN_PMIC_ALL);
    }

    return 0;
}

//hw_encourages use sys_pmu_hw_event_t
int sys_pmu_turn_on_configure(uint32_t domains, uint32_t hw_encourages)
{
    sys_writel(domains, &s_pmu_regs->hw_dest_power_on);
    sys_writel(~hw_encourages, &s_pmu_regs->hard_event_turn_on_mask);

    return 0;
}

//turn_off_mask use sys_pmu_hw_event_t
int sys_pmu_turn_off_mask_set(uint32_t mask)
{
    sys_writel(mask, &s_pmu_regs->hard_event_turn_off_mask);

    return 0;
}

uint32_t sys_pmu_turn_off_mask_get(void)
{
    return sys_readl(&s_pmu_regs->hard_event_turn_off_mask);
}

int sys_pmu_irq_configure(int irq_en, void (*callback)(void*), void *arg)
{
    const int PMU_INT = U0_U7MC_SFT7110_GLOBAL_INTERRUPTS__U0_PMU_IRQ_O;
    if(irq_en)
    {
        irq_callback = callback;
        irq_arg = arg;
        sys_irq_register(PMU_INT, pmu_irq_handler, NULL);
        sys_irq_enable(PMU_INT);
        sys_writel((~PMU_INTERRUPT_DEFAULT_MASK)&0xFFFFFFFF, &s_pmu_regs->interrupt_mask_reg);
    }
    else
    {
        sys_irq_disable(PMU_INT);
    }

    return 0;
}

uint32_t sys_pmu_power_status_get(void)
{
    uint32_t status;
    status = sys_readl(&s_pmu_regs->cur_power_mode);
    status |= pmu_pmic_power_status_get();

    return status;
}

int sys_pmu_init(void *pmic)
{
    pmic_dev = pmic;

    return 0;
}
