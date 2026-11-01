/**
 * @file RCC_Register_if.h
 * @brief Register pointer definitions for STM32F750 RCC.
 */
#ifndef RCC_REGISTER_IF_H_
#define RCC_REGISTER_IF_H_

#include "RCC_Register_priv.h"

/* Peripheral register pointers: RCC_BASE_ADDR + register offset. */
#define RCC_CR ((volatile RCC_CR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_CR_OFFSET))
#define RCC_PLLCFGR ((volatile RCC_PLLCFGR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_PLLCFGR_OFFSET))
#define RCC_CFGR ((volatile RCC_CFGR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_CFGR_OFFSET))
#define RCC_CIR ((volatile RCC_CIR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_CIR_OFFSET))
#define RCC_AHB1RSTR ((volatile RCC_AHB1RSTR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_AHB1RSTR_OFFSET))
#define RCC_AHB2RSTR ((volatile RCC_AHB2RSTR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_AHB2RSTR_OFFSET))
#define RCC_AHB3RSTR ((volatile RCC_AHB3RSTR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_AHB3RSTR_OFFSET))
#define RCC_APB1RSTR ((volatile RCC_APB1RSTR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_APB1RSTR_OFFSET))
#define RCC_APB2RSTR ((volatile RCC_APB2RSTR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_APB2RSTR_OFFSET))
#define RCC_AHB1ENR ((volatile RCC_AHB1ENR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_AHB1ENR_OFFSET))
#define RCC_AHB2ENR ((volatile RCC_AHB2ENR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_AHB2ENR_OFFSET))
#define RCC_AHB3ENR ((volatile RCC_AHB3ENR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_AHB3ENR_OFFSET))
#define RCC_APB1ENR ((volatile RCC_APB1ENR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_APB1ENR_OFFSET))
#define RCC_APB2ENR ((volatile RCC_APB2ENR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_APB2ENR_OFFSET))
#define RCC_AHB1LPENR ((volatile RCC_AHB1LPENR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_AHB1LPENR_OFFSET))
#define RCC_AHB2LPENR ((volatile RCC_AHB2LPENR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_AHB2LPENR_OFFSET))
#define RCC_AHB3LPENR ((volatile RCC_AHB3LPENR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_AHB3LPENR_OFFSET))
#define RCC_APB1LPENR ((volatile RCC_APB1LPENR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_APB1LPENR_OFFSET))
#define RCC_APB2LPENR ((volatile RCC_APB2LPENR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_APB2LPENR_OFFSET))
#define RCC_BDCR ((volatile RCC_BDCR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_BDCR_OFFSET))
#define RCC_CSR ((volatile RCC_CSR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_CSR_OFFSET))
#define RCC_SSCGR ((volatile RCC_SSCGR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_SSCGR_OFFSET))
#define RCC_PLLI2SCFGR ((volatile RCC_PLLI2SCFGR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_PLLI2SCFGR_OFFSET))
#define RCC_PLLSAICFGR ((volatile RCC_PLLSAICFGR_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_PLLSAICFGR_OFFSET))
#define RCC_DCKCFGR1 ((volatile RCC_DCKCFGR1_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_DCKCFGR1_OFFSET))
#define RCC_DCKCFGR2 ((volatile RCC_DCKCFGR2_t *)(uintptr_t)(RCC_BASE_ADDR + RCC_DCKCFGR2_OFFSET))

#endif /* RCC_REGISTER_IF_H_ */
