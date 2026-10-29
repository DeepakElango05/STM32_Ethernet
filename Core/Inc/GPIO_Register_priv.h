/**
 * @file GPIO_Register_priv.h
 * @brief Private register offsets and bitfield definitions for STM32F750 GPIO.
 * @details Register offsets and fields follow the supplied ST RM0385 reference manual.
 * @warning C bitfield layout is implementation-defined. These definitions assume the selected
 *          compiler and ABI place the first declared field at the least-significant bits of a
 *          32-bit word. GPIO register accesses should use 32-bit word accesses for BSRR/LCKR.
 */
#ifndef GPIO_REGISTER_PRIV_H_
#define GPIO_REGISTER_PRIV_H_

#include <stdint.h>

/** @name GPIO port base addresses
 * @brief GPIO register block base addresses. Availability depends on the exact package/device.
 * @{ */
/** @brief Base address of GPIOA. */
#define GPIOA_BASE_ADDR (0x40020000UL)
/** @brief Base address of GPIOB. */
#define GPIOB_BASE_ADDR (0x40020400UL)
/** @brief Base address of GPIOC. */
#define GPIOC_BASE_ADDR (0x40020800UL)
/** @brief Base address of GPIOD. */
#define GPIOD_BASE_ADDR (0x40020C00UL)
/** @brief Base address of GPIOE. */
#define GPIOE_BASE_ADDR (0x40021000UL)
/** @brief Base address of GPIOF. */
#define GPIOF_BASE_ADDR (0x40021400UL)
/** @brief Base address of GPIOG. */
#define GPIOG_BASE_ADDR (0x40021800UL)
/** @brief Base address of GPIOH. */
#define GPIOH_BASE_ADDR (0x40021C00UL)
/** @brief Base address of GPIOI. */
#define GPIOI_BASE_ADDR (0x40022000UL)
/** @brief Base address of GPIOJ. */
#define GPIOJ_BASE_ADDR (0x40022400UL)
/** @brief Base address of GPIOK. */
#define GPIOK_BASE_ADDR (0x40022800UL)
/** @} */

/** @name GPIO register offsets
 * @{ */
/** @brief GPIO MODER register offset. */
#define GPIO_MODER_OFFSET 0x00U
/** @brief GPIO OTYPER register offset. */
#define GPIO_OTYPER_OFFSET 0x04U
/** @brief GPIO OSPEEDR register offset. */
#define GPIO_OSPEEDR_OFFSET 0x08U
/** @brief GPIO PUPDR register offset. */
#define GPIO_PUPDR_OFFSET 0x0CU
/** @brief GPIO IDR register offset. */
#define GPIO_IDR_OFFSET 0x10U
/** @brief GPIO ODR register offset. */
#define GPIO_ODR_OFFSET 0x14U
/** @brief GPIO BSRR register offset. */
#define GPIO_BSRR_OFFSET 0x18U
/** @brief GPIO LCKR register offset. */
#define GPIO_LCKR_OFFSET 0x1CU
/** @brief GPIO AFRL register offset. */
#define GPIO_AFRL_OFFSET 0x20U
/** @brief GPIO AFRH register offset. */
#define GPIO_AFRH_OFFSET 0x24U
/** @} */

/** @name GPIO register bitfield structures
 * @{ */

/** @brief GPIO Port mode register (GPIOx_MODER). */
typedef struct
{
    uint32_t MODER0  :  2; /**< Pin mode */
    uint32_t MODER1  :  2; /**< Pin mode */
    uint32_t MODER2  :  2; /**< Pin mode */
    uint32_t MODER3  :  2; /**< Pin mode */
    uint32_t MODER4  :  2; /**< Pin mode */
    uint32_t MODER5  :  2; /**< Pin mode */
    uint32_t MODER6  :  2; /**< Pin mode */
    uint32_t MODER7  :  2; /**< Pin mode */
    uint32_t MODER8  :  2; /**< Pin mode */
    uint32_t MODER9  :  2; /**< Pin mode */
    uint32_t MODER10 :  2; /**< Pin mode */
    uint32_t MODER11 :  2; /**< Pin mode */
    uint32_t MODER12 :  2; /**< Pin mode */
    uint32_t MODER13 :  2; /**< Pin mode */
    uint32_t MODER14 :  2; /**< Pin mode */
    uint32_t MODER15 :  2; /**< Pin mode */
} GPIO_MODER_t;

/** @brief GPIO Port output type register (GPIOx_OTYPER). */
typedef struct
{
    uint32_t OT0      :  1; /**< Output type */
    uint32_t OT1      :  1; /**< Output type */
    uint32_t OT2      :  1; /**< Output type */
    uint32_t OT3      :  1; /**< Output type */
    uint32_t OT4      :  1; /**< Output type */
    uint32_t OT5      :  1; /**< Output type */
    uint32_t OT6      :  1; /**< Output type */
    uint32_t OT7      :  1; /**< Output type */
    uint32_t OT8      :  1; /**< Output type */
    uint32_t OT9      :  1; /**< Output type */
    uint32_t OT10     :  1; /**< Output type */
    uint32_t OT11     :  1; /**< Output type */
    uint32_t OT12     :  1; /**< Output type */
    uint32_t OT13     :  1; /**< Output type */
    uint32_t OT14     :  1; /**< Output type */
    uint32_t OT15     :  1; /**< Output type */
    uint32_t Reserved : 16; /**< Reserved */
} GPIO_OTYPER_t;

/** @brief GPIO Port output speed register (GPIOx_OSPEEDR). */
typedef struct
{
    uint32_t OSPEEDR0  :  2; /**< Output speed */
    uint32_t OSPEEDR1  :  2; /**< Output speed */
    uint32_t OSPEEDR2  :  2; /**< Output speed */
    uint32_t OSPEEDR3  :  2; /**< Output speed */
    uint32_t OSPEEDR4  :  2; /**< Output speed */
    uint32_t OSPEEDR5  :  2; /**< Output speed */
    uint32_t OSPEEDR6  :  2; /**< Output speed */
    uint32_t OSPEEDR7  :  2; /**< Output speed */
    uint32_t OSPEEDR8  :  2; /**< Output speed */
    uint32_t OSPEEDR9  :  2; /**< Output speed */
    uint32_t OSPEEDR10 :  2; /**< Output speed */
    uint32_t OSPEEDR11 :  2; /**< Output speed */
    uint32_t OSPEEDR12 :  2; /**< Output speed */
    uint32_t OSPEEDR13 :  2; /**< Output speed */
    uint32_t OSPEEDR14 :  2; /**< Output speed */
    uint32_t OSPEEDR15 :  2; /**< Output speed */
} GPIO_OSPEEDR_t;

/** @brief GPIO Port pull-up/pull-down register (GPIOx_PUPDR). */
typedef struct
{
    uint32_t PUPDR0  :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR1  :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR2  :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR3  :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR4  :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR5  :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR6  :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR7  :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR8  :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR9  :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR10 :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR11 :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR12 :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR13 :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR14 :  2; /**< Pull-up/pull-down selection */
    uint32_t PUPDR15 :  2; /**< Pull-up/pull-down selection */
} GPIO_PUPDR_t;

/** @brief GPIO Port input data register (GPIOx_IDR). */
typedef struct
{
    uint32_t IDR0     :  1; /**< Input data */
    uint32_t IDR1     :  1; /**< Input data */
    uint32_t IDR2     :  1; /**< Input data */
    uint32_t IDR3     :  1; /**< Input data */
    uint32_t IDR4     :  1; /**< Input data */
    uint32_t IDR5     :  1; /**< Input data */
    uint32_t IDR6     :  1; /**< Input data */
    uint32_t IDR7     :  1; /**< Input data */
    uint32_t IDR8     :  1; /**< Input data */
    uint32_t IDR9     :  1; /**< Input data */
    uint32_t IDR10    :  1; /**< Input data */
    uint32_t IDR11    :  1; /**< Input data */
    uint32_t IDR12    :  1; /**< Input data */
    uint32_t IDR13    :  1; /**< Input data */
    uint32_t IDR14    :  1; /**< Input data */
    uint32_t IDR15    :  1; /**< Input data */
    uint32_t Reserved : 16; /**< Reserved */
} GPIO_IDR_t;

/** @brief GPIO Port output data register (GPIOx_ODR). */
typedef struct
{
    uint32_t ODR0     :  1; /**< Output data */
    uint32_t ODR1     :  1; /**< Output data */
    uint32_t ODR2     :  1; /**< Output data */
    uint32_t ODR3     :  1; /**< Output data */
    uint32_t ODR4     :  1; /**< Output data */
    uint32_t ODR5     :  1; /**< Output data */
    uint32_t ODR6     :  1; /**< Output data */
    uint32_t ODR7     :  1; /**< Output data */
    uint32_t ODR8     :  1; /**< Output data */
    uint32_t ODR9     :  1; /**< Output data */
    uint32_t ODR10    :  1; /**< Output data */
    uint32_t ODR11    :  1; /**< Output data */
    uint32_t ODR12    :  1; /**< Output data */
    uint32_t ODR13    :  1; /**< Output data */
    uint32_t ODR14    :  1; /**< Output data */
    uint32_t ODR15    :  1; /**< Output data */
    uint32_t Reserved : 16; /**< Reserved */
} GPIO_ODR_t;

/** @brief GPIO Port bit set/reset register (GPIOx_BSRR). */
typedef struct
{
    uint32_t BS0  :  1; /**< Set output data bit */
    uint32_t BS1  :  1; /**< Set output data bit */
    uint32_t BS2  :  1; /**< Set output data bit */
    uint32_t BS3  :  1; /**< Set output data bit */
    uint32_t BS4  :  1; /**< Set output data bit */
    uint32_t BS5  :  1; /**< Set output data bit */
    uint32_t BS6  :  1; /**< Set output data bit */
    uint32_t BS7  :  1; /**< Set output data bit */
    uint32_t BS8  :  1; /**< Set output data bit */
    uint32_t BS9  :  1; /**< Set output data bit */
    uint32_t BS10 :  1; /**< Set output data bit */
    uint32_t BS11 :  1; /**< Set output data bit */
    uint32_t BS12 :  1; /**< Set output data bit */
    uint32_t BS13 :  1; /**< Set output data bit */
    uint32_t BS14 :  1; /**< Set output data bit */
    uint32_t BS15 :  1; /**< Set output data bit */
    uint32_t BR0  :  1; /**< Reset output data bit */
    uint32_t BR1  :  1; /**< Reset output data bit */
    uint32_t BR2  :  1; /**< Reset output data bit */
    uint32_t BR3  :  1; /**< Reset output data bit */
    uint32_t BR4  :  1; /**< Reset output data bit */
    uint32_t BR5  :  1; /**< Reset output data bit */
    uint32_t BR6  :  1; /**< Reset output data bit */
    uint32_t BR7  :  1; /**< Reset output data bit */
    uint32_t BR8  :  1; /**< Reset output data bit */
    uint32_t BR9  :  1; /**< Reset output data bit */
    uint32_t BR10 :  1; /**< Reset output data bit */
    uint32_t BR11 :  1; /**< Reset output data bit */
    uint32_t BR12 :  1; /**< Reset output data bit */
    uint32_t BR13 :  1; /**< Reset output data bit */
    uint32_t BR14 :  1; /**< Reset output data bit */
    uint32_t BR15 :  1; /**< Reset output data bit */
} GPIO_BSRR_t;

/** @brief GPIO Port configuration lock register (GPIOx_LCKR). */
typedef struct
{
    uint32_t LCK0     :  1; /**< Lock configuration for pin */
    uint32_t LCK1     :  1; /**< Lock configuration for pin */
    uint32_t LCK2     :  1; /**< Lock configuration for pin */
    uint32_t LCK3     :  1; /**< Lock configuration for pin */
    uint32_t LCK4     :  1; /**< Lock configuration for pin */
    uint32_t LCK5     :  1; /**< Lock configuration for pin */
    uint32_t LCK6     :  1; /**< Lock configuration for pin */
    uint32_t LCK7     :  1; /**< Lock configuration for pin */
    uint32_t LCK8     :  1; /**< Lock configuration for pin */
    uint32_t LCK9     :  1; /**< Lock configuration for pin */
    uint32_t LCK10    :  1; /**< Lock configuration for pin */
    uint32_t LCK11    :  1; /**< Lock configuration for pin */
    uint32_t LCK12    :  1; /**< Lock configuration for pin */
    uint32_t LCK13    :  1; /**< Lock configuration for pin */
    uint32_t LCK14    :  1; /**< Lock configuration for pin */
    uint32_t LCK15    :  1; /**< Lock configuration for pin */
    uint32_t LCKK     :  1; /**< Lock key */
    uint32_t Reserved : 15; /**< Reserved */
} GPIO_LCKR_t;

/** @brief GPIO Alternate function low register (GPIOx_AFRL). */
typedef struct
{
    uint32_t AFR0 :  4; /**< Alternate function selection */
    uint32_t AFR1 :  4; /**< Alternate function selection */
    uint32_t AFR2 :  4; /**< Alternate function selection */
    uint32_t AFR3 :  4; /**< Alternate function selection */
    uint32_t AFR4 :  4; /**< Alternate function selection */
    uint32_t AFR5 :  4; /**< Alternate function selection */
    uint32_t AFR6 :  4; /**< Alternate function selection */
    uint32_t AFR7 :  4; /**< Alternate function selection */
} GPIO_AFRL_t;

/** @brief GPIO Alternate function high register (GPIOx_AFRH). */
typedef struct
{
    uint32_t AFR8  :  4; /**< Alternate function selection */
    uint32_t AFR9  :  4; /**< Alternate function selection */
    uint32_t AFR10 :  4; /**< Alternate function selection */
    uint32_t AFR11 :  4; /**< Alternate function selection */
    uint32_t AFR12 :  4; /**< Alternate function selection */
    uint32_t AFR13 :  4; /**< Alternate function selection */
    uint32_t AFR14 :  4; /**< Alternate function selection */
    uint32_t AFR15 :  4; /**< Alternate function selection */
} GPIO_AFRH_t;

/** @} */

#endif /* GPIO_REGISTER_PRIV_H_ */
