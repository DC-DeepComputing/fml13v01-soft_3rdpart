/**
 ******************************************************************************
 * @copyright Copyright (c) 2020 StarFive Technology Co.,Ltd.
 * @file bsp_hal_pmu.h
 * @author StarFive FW Team
 * @brief
 ******************************************************************************
 */
#ifndef __BSP_HAL_PMU_H_
#define __BSP_HAL_PMU_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef enum {
    PMU_DOMAIN_SYSTOP                   = BIT(0),
    PMU_DOMAIN_CPU                      = BIT(1),
    PMU_DOMAIN_GPUA                     = BIT(2),
    PMU_DOMAIN_VDEC                     = BIT(3),
    PMU_DOMAIN_VOUT                     = BIT(4),
    PMU_DOMAIN_ISP                      = BIT(5),
    PMU_DOMAIN_VENC                     = BIT(6),
    PMU_DOMAIN_ALL                      = (PMU_DOMAIN_SYSTOP|PMU_DOMAIN_CPU|PMU_DOMAIN_GPUA|PMU_DOMAIN_VDEC \
                                              |PMU_DOMAIN_VOUT|PMU_DOMAIN_ISP|PMU_DOMAIN_VENC),
    PMU_DOMAIN_PMIC_VDD18_HDMI          = BIT(16),
    PMU_DOMAIN_PMIC_VDD18_MIPITX        = BIT(17),
    PMU_DOMAIN_PMIC_VDD18_MIPIRX        = BIT(18),
    PMU_DOMAIN_PMIC_VDD09_HDMI          = BIT(19),
    PMU_DOMAIN_PMIC_VDD09_MIPITX        = BIT(20),
    PMU_DOMAIN_PMIC_VDD09_MIPIRX        = BIT(21),
    PMU_DOMAIN_PMIC_VDD1833_SD0_18      = BIT(22),
    PMU_DOMAIN_PMIC_ALL                 = (PMU_DOMAIN_PMIC_VDD18_HDMI|PMU_DOMAIN_PMIC_VDD18_MIPITX|PMU_DOMAIN_PMIC_VDD18_MIPIRX \
                                            |PMU_DOMAIN_PMIC_VDD09_HDMI|PMU_DOMAIN_PMIC_VDD09_MIPITX|PMU_DOMAIN_PMIC_VDD09_MIPIRX \
                                            |PMU_DOMAIN_PMIC_VDD1833_SD0_18),
} sys_pmu_domain_t;

typedef enum {
    PMU_HW_EVENT_RTC                    = BIT(0),
    PMU_HW_EVENT_GMAC                   = BIT(1),
    PMU_HW_EVENT_RFU                    = BIT(2),
    PMU_HW_EVENT_RGPIO0                 = BIT(3),
    PMU_HW_EVENT_RGPIO1                 = BIT(4),
    PMU_HW_EVENT_RGPIO2                 = BIT(5),
    PMU_HW_EVENT_RGPIO3                 = BIT(6),
    PMU_HW_EVENT_GPU                    = BIT(7),
    PMU_POWER_EVENT_ALL                 = (PMU_HW_EVENT_RTC|PMU_HW_EVENT_GMAC|PMU_HW_EVENT_RFU|PMU_HW_EVENT_RGPIO0|PMU_HW_EVENT_RGPIO1|PMU_HW_EVENT_RGPIO2|PMU_HW_EVENT_RGPIO3|PMU_HW_EVENT_GPU),
} sys_pmu_hw_event_t;

int sys_pmu_turn_on(uint32_t domains);
int sys_pmu_turn_off(uint32_t domains);
//hw_encourages use sys_pmu_hw_event_t
int sys_pmu_turn_on_configure(uint32_t domains, uint32_t hw_encourages);
//mask use sys_pmu_hw_event_t
int sys_pmu_turn_off_mask_set(uint32_t mask);
uint32_t sys_pmu_turn_off_mask_get(void);
int sys_pmu_irq_configure(int irq_en, void (*callback)(void*), void *arg);
uint32_t sys_pmu_power_status_get(void);
int sys_pmu_init(void *pmic);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __BSP_HAL_PMU_H_ */

