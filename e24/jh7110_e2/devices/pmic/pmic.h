/**
 ******************************************************************************
 * @copyright Copyright (c) 2020, StarFive Technology Co.,Ltd. All rights reserved.
 * 
 * @file pmic.h
 * @author StarFive FW Team
 * @brief 
 ******************************************************************************
 */
#ifndef __PMIC_H__
#define __PMIC_H__

enum pmic_switch {
    PMIC_SWITCH_OFF,
    PMIC_SWITCH_ON,
};

enum pmic_domain {
    PMIC_DOMAIN_0       = 0,
    PMIC_DOMAIN_1       = 1,
    PMIC_DOMAIN_2       = 2,
    PMIC_DOMAIN_3       = 3,
    PMIC_DOMAIN_4       = 4,
    PMIC_DOMAIN_5       = 5,
    PMIC_DOMAIN_6       = 6,
    PMIC_DOMAIN_7       = 7,
    PMIC_DOMAIN_8       = 8,
    PMIC_DOMAIN_9       = 9,
    PMIC_DOMAIN_10      = 10,
    PMIC_DOMAIN_11      = 11,
    PMIC_DOMAIN_12      = 12,
    PMIC_DOMAIN_13      = 13,
    PMIC_DOMAIN_14      = 14,
    PMIC_DOMAIN_15      = 15,
};



struct pmic_dev_t;

struct pmic_ops {
    int (*pmic_set)(struct pmic_dev_t *dev, enum pmic_domain pmic_dom, enum pmic_switch sw);
    enum pmic_switch (*pmic_get)(struct pmic_dev_t *dev, enum pmic_domain pmic_dom);
};

struct pmic_dev_t {
    void *priv;
    const struct pmic_ops *ops;
};

struct gmac_dev_t;



#endif
