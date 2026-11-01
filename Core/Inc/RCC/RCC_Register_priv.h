/**
 * @file RCC_Register_priv.h
 * @brief Private register offsets and bitfield definitions for STM32F750 RCC.
 * @details Register definitions are based on the supplied ST RM0385 reference manual.
 *          Bitfields are declared least-significant field first, following the ETH header style.
 * @warning C bitfield layout is implementation-defined. These definitions assume the selected
 *          compiler and ABI place the first declared field at the least-significant bits of a
 *          32-bit word. Verify this for the target compiler before memory-mapped use.
 */
#ifndef RCC_REGISTER_PRIV_H_
#define RCC_REGISTER_PRIV_H_

#include <stdint.h>

/** @brief Base address of the Reset and Clock Control peripheral. */
#define RCC_BASE_ADDR (0x40023800UL)

/** @name RCC register offsets
 * @{ */
/** @brief RCC Clock control register (RCC_CR). */
#define RCC_CR_OFFSET 0x0000U
/** @brief RCC PLL configuration register (RCC_PLLCFGR). */
#define RCC_PLLCFGR_OFFSET 0x0004U
/** @brief RCC Clock configuration register (RCC_CFGR). */
#define RCC_CFGR_OFFSET 0x0008U
/** @brief RCC Clock interrupt register (RCC_CIR). */
#define RCC_CIR_OFFSET 0x000CU
/** @brief RCC AHB1 peripheral reset register (RCC_AHB1RSTR). */
#define RCC_AHB1RSTR_OFFSET 0x0010U
/** @brief RCC AHB2 peripheral reset register (RCC_AHB2RSTR). */
#define RCC_AHB2RSTR_OFFSET 0x0014U
/** @brief RCC AHB3 peripheral reset register (RCC_AHB3RSTR). */
#define RCC_AHB3RSTR_OFFSET 0x0018U
/** @brief RCC APB1 peripheral reset register (RCC_APB1RSTR). */
#define RCC_APB1RSTR_OFFSET 0x0020U
/** @brief RCC APB2 peripheral reset register (RCC_APB2RSTR). */
#define RCC_APB2RSTR_OFFSET 0x0024U
/** @brief RCC AHB1 peripheral clock enable register (RCC_AHB1ENR). */
#define RCC_AHB1ENR_OFFSET 0x0030U
/** @brief RCC AHB2 peripheral clock enable register (RCC_AHB2ENR). */
#define RCC_AHB2ENR_OFFSET 0x0034U
/** @brief RCC AHB3 peripheral clock enable register (RCC_AHB3ENR). */
#define RCC_AHB3ENR_OFFSET 0x0038U
/** @brief RCC APB1 peripheral clock enable register (RCC_APB1ENR). */
#define RCC_APB1ENR_OFFSET 0x0040U
/** @brief RCC APB2 peripheral clock enable register (RCC_APB2ENR). */
#define RCC_APB2ENR_OFFSET 0x0044U
/** @brief RCC AHB1 peripheral clock enable in low-power mode register (RCC_AHB1LPENR). */
#define RCC_AHB1LPENR_OFFSET 0x0050U
/** @brief RCC AHB2 peripheral clock enable in low-power mode register (RCC_AHB2LPENR). */
#define RCC_AHB2LPENR_OFFSET 0x0054U
/** @brief RCC AHB3 peripheral clock enable in low-power mode register (RCC_AHB3LPENR). */
#define RCC_AHB3LPENR_OFFSET 0x0058U
/** @brief RCC APB1 peripheral clock enable in low-power mode register (RCC_APB1LPENR). */
#define RCC_APB1LPENR_OFFSET 0x0060U
/** @brief RCC APB2 peripheral clock enable in low-power mode register (RCC_APB2LPENR). */
#define RCC_APB2LPENR_OFFSET 0x0064U
/** @brief RCC Backup domain control register (RCC_BDCR). */
#define RCC_BDCR_OFFSET 0x0070U
/** @brief RCC Clock control and status register (RCC_CSR). */
#define RCC_CSR_OFFSET 0x0074U
/** @brief RCC Spread spectrum clock generation register (RCC_SSCGR). */
#define RCC_SSCGR_OFFSET 0x0080U
/** @brief RCC PLLI2S configuration register (RCC_PLLI2SCFGR). */
#define RCC_PLLI2SCFGR_OFFSET 0x0084U
/** @brief RCC PLLSAI configuration register (RCC_PLLSAICFGR). */
#define RCC_PLLSAICFGR_OFFSET 0x0088U
/** @brief RCC Dedicated clocks configuration register 1 (RCC_DCKCFGR1). */
#define RCC_DCKCFGR1_OFFSET 0x008CU
/** @brief RCC Dedicated clocks configuration register 2 (RCC_DCKCFGR2). */
#define RCC_DCKCFGR2_OFFSET 0x0090U
/** @} */

/** @name RCC register bitfield structures
 * @{ */

/** @brief RCC Clock control register (RCC_CR). */
typedef struct
{
    uint32_t HSION     :  1; /**< Internal high-speed clock enable */
    uint32_t HSIRDY    :  1; /**< Internal high-speed clock ready */
    uint32_t Reserved0 :  1; /**< Reserved */
    uint32_t HSITRIM   :  5; /**< Internal high-speed clock trimming */
    uint32_t HSICAL    :  8; /**< Internal high-speed clock calibration */
    uint32_t HSEON     :  1; /**< External high-speed clock enable */
    uint32_t HSERDY    :  1; /**< External high-speed clock ready */
    uint32_t HSEBYP    :  1; /**< External high-speed clock bypass */
    uint32_t CSSON     :  1; /**< Clock security system enable */
    uint32_t Reserved1 :  4; /**< Reserved */
    uint32_t PLLON     :  1; /**< Main PLL enable */
    uint32_t PLLRDY    :  1; /**< Main PLL ready */
    uint32_t PLLI2SON  :  1; /**< PLLI2S enable */
    uint32_t PLLI2SRDY :  1; /**< PLLI2S ready */
    uint32_t PLLSAION  :  1; /**< PLLSAI enable */
    uint32_t PLLSAIRDY :  1; /**< PLLSAI ready */
    uint32_t Reserved2 :  2; /**< Reserved */
} RCC_CR_t;

/** @brief RCC PLL configuration register (RCC_PLLCFGR). */
typedef struct
{
    uint32_t PLLM      :  6; /**< Main PLL division factor for input clock */
    uint32_t PLLN      :  9; /**< Main PLL multiplication factor for VCO */
    uint32_t Reserved0 :  1; /**< Reserved */
    uint32_t PLLP      :  2; /**< Main PLL division factor for system clock */
    uint32_t Reserved1 :  4; /**< Reserved */
    uint32_t PLLSRC    :  1; /**< PLL clock source */
    uint32_t Reserved2 :  1; /**< Reserved */
    uint32_t PLLQ      :  4; /**< Main PLL division factor for 48 MHz domain */
    uint32_t Reserved3 :  4; /**< Reserved */
} RCC_PLLCFGR_t;

/** @brief RCC Clock configuration register (RCC_CFGR). */
typedef struct
{
    uint32_t SW        :  2; /**< System clock switch */
    uint32_t SWS       :  2; /**< System clock switch status */
    uint32_t HPRE      :  4; /**< AHB prescaler */
    uint32_t Reserved0 :  2; /**< Reserved */
    uint32_t PPRE1     :  3; /**< APB low-speed prescaler */
    uint32_t PPRE2     :  3; /**< APB high-speed prescaler */
    uint32_t RTCPRE    :  5; /**< HSE division factor for RTC clock */
    uint32_t MCO1      :  2; /**< Microcontroller clock output 1 selection */
    uint32_t I2SSRC    :  1; /**< I2S clock source selection */
    uint32_t MCO1PRE   :  3; /**< MCO1 prescaler */
    uint32_t MCO2PRE   :  3; /**< MCO2 prescaler */
    uint32_t MCO2      :  2; /**< Microcontroller clock output 2 selection */
} RCC_CFGR_t;

/** @brief RCC Clock interrupt register (RCC_CIR). */
typedef struct
{
    uint32_t LSIRDYF     :  1; /**< LSI ready interrupt flag */
    uint32_t LSERDYF     :  1; /**< LSE ready interrupt flag */
    uint32_t HSIRDYF     :  1; /**< HSI ready interrupt flag */
    uint32_t HSERDYF     :  1; /**< HSE ready interrupt flag */
    uint32_t PLLRDYF     :  1; /**< PLL ready interrupt flag */
    uint32_t PLLI2SRDYF  :  1; /**< PLLI2S ready interrupt flag */
    uint32_t PLLSAIRDYF  :  1; /**< PLLSAI ready interrupt flag */
    uint32_t CSSF        :  1; /**< Clock security system interrupt flag */
    uint32_t LSIRDYIE    :  1; /**< LSI ready interrupt enable */
    uint32_t LSERDYIE    :  1; /**< LSE ready interrupt enable */
    uint32_t HSIRDYIE    :  1; /**< HSI ready interrupt enable */
    uint32_t HSERDYIE    :  1; /**< HSE ready interrupt enable */
    uint32_t PLLRDYIE    :  1; /**< PLL ready interrupt enable */
    uint32_t PLLI2SRDYIE :  1; /**< PLLI2S ready interrupt enable */
    uint32_t PLLSAIRDYIE :  1; /**< PLLSAI ready interrupt enable */
    uint32_t Reserved0   :  1; /**< Reserved */
    uint32_t LSIRDYC     :  1; /**< LSI ready interrupt clear */
    uint32_t LSERDYC     :  1; /**< LSE ready interrupt clear */
    uint32_t HSIRDYC     :  1; /**< HSI ready interrupt clear */
    uint32_t HSERDYC     :  1; /**< HSE ready interrupt clear */
    uint32_t PLLRDYC     :  1; /**< PLL ready interrupt clear */
    uint32_t PLLI2SRDYC  :  1; /**< PLLI2S ready interrupt clear */
    uint32_t PLLSAIRDYC  :  1; /**< PLLSAI ready interrupt clear */
    uint32_t CSSC        :  1; /**< Clock security system interrupt clear */
    uint32_t Reserved1   :  8; /**< Reserved */
} RCC_CIR_t;

/** @brief RCC AHB1 peripheral reset register (RCC_AHB1RSTR). */
typedef struct
{
    uint32_t GPIOARST  :  1; /**< GPIOA reset */
    uint32_t GPIOBRST  :  1; /**< GPIOB reset */
    uint32_t GPIOCRST  :  1; /**< GPIOC reset */
    uint32_t GPIODRST  :  1; /**< GPIOD reset */
    uint32_t GPIOERST  :  1; /**< GPIOE reset */
    uint32_t GPIOFRST  :  1; /**< GPIOF reset */
    uint32_t GPIOGRST  :  1; /**< GPIOG reset */
    uint32_t GPIOHRST  :  1; /**< GPIOH reset */
    uint32_t GPIOIRST  :  1; /**< GPIOI reset */
    uint32_t GPIOJRST  :  1; /**< GPIOJ reset */
    uint32_t GPIOKRST  :  1; /**< GPIOK reset */
    uint32_t Reserved0 :  1; /**< Reserved */
    uint32_t CRCRST    :  1; /**< CRC reset */
    uint32_t Reserved1 :  8; /**< Reserved */
    uint32_t DMA1RST   :  1; /**< DMA1 reset */
    uint32_t DMA2RST   :  1; /**< DMA2 reset */
    uint32_t DMA2DRST  :  1; /**< DMA2D reset */
    uint32_t Reserved2 :  1; /**< Reserved */
    uint32_t ETHMACRST :  1; /**< Ethernet MAC reset */
    uint32_t Reserved3 :  3; /**< Reserved */
    uint32_t OTGHSRST  :  1; /**< USB OTG HS reset */
    uint32_t Reserved4 :  2; /**< Reserved */
} RCC_AHB1RSTR_t;

/** @brief RCC AHB2 peripheral reset register (RCC_AHB2RSTR). */
typedef struct
{
    uint32_t DCMIRST   :  1; /**< DCMI reset */
    uint32_t Reserved0 :  3; /**< Reserved */
    uint32_t CRYPRST   :  1; /**< Cryptographic processor reset */
    uint32_t HASHRST   :  1; /**< HASH reset */
    uint32_t RNGRST    :  1; /**< RNG reset */
    uint32_t OTGFSRST  :  1; /**< USB OTG FS reset */
    uint32_t Reserved1 : 24; /**< Reserved */
} RCC_AHB2RSTR_t;

/** @brief RCC AHB3 peripheral reset register (RCC_AHB3RSTR). */
typedef struct
{
    uint32_t FMCRST   :  1; /**< FMC reset */
    uint32_t QSPIRST  :  1; /**< Quad-SPI reset */
    uint32_t Reserved : 30; /**< Reserved */
} RCC_AHB3RSTR_t;

/** @brief RCC APB1 peripheral reset register (RCC_APB1RSTR). */
typedef struct
{
    uint32_t TIM2RST    :  1; /**< TIM2 reset */
    uint32_t TIM3RST    :  1; /**< TIM3 reset */
    uint32_t TIM4RST    :  1; /**< TIM4 reset */
    uint32_t TIM5RST    :  1; /**< TIM5 reset */
    uint32_t TIM6RST    :  1; /**< TIM6 reset */
    uint32_t TIM7RST    :  1; /**< TIM7 reset */
    uint32_t TIM12RST   :  1; /**< TIM12 reset */
    uint32_t TIM13RST   :  1; /**< TIM13 reset */
    uint32_t TIM14RST   :  1; /**< TIM14 reset */
    uint32_t LPTIM1RST  :  1; /**< LPTIM1 reset */
    uint32_t Reserved0  :  1; /**< Reserved */
    uint32_t WWDGRST    :  1; /**< Window watchdog reset */
    uint32_t Reserved1  :  2; /**< Reserved */
    uint32_t SPI2RST    :  1; /**< SPI2 reset */
    uint32_t SPI3RST    :  1; /**< SPI3 reset */
    uint32_t SPDIFRXRST :  1; /**< SPDIFRX reset */
    uint32_t USART2RST  :  1; /**< USART2 reset */
    uint32_t USART3RST  :  1; /**< USART3 reset */
    uint32_t UART4RST   :  1; /**< UART4 reset */
    uint32_t UART5RST   :  1; /**< UART5 reset */
    uint32_t I2C1RST    :  1; /**< I2C1 reset */
    uint32_t I2C2RST    :  1; /**< I2C2 reset */
    uint32_t I2C3RST    :  1; /**< I2C3 reset */
    uint32_t I2C4RST    :  1; /**< I2C4 reset */
    uint32_t CAN1RST    :  1; /**< CAN1 reset */
    uint32_t CAN2RST    :  1; /**< CAN2 reset */
    uint32_t CECRST     :  1; /**< CEC reset */
    uint32_t PWRRST     :  1; /**< PWR reset */
    uint32_t DACRST     :  1; /**< DAC reset */
    uint32_t UART7RST   :  1; /**< UART7 reset */
    uint32_t UART8RST   :  1; /**< UART8 reset */
} RCC_APB1RSTR_t;

/** @brief RCC APB2 peripheral reset register (RCC_APB2RSTR). */
typedef struct
{
    uint32_t TIM1RST   :  1; /**< TIM1 reset */
    uint32_t TIM8RST   :  1; /**< TIM8 reset */
    uint32_t Reserved0 :  2; /**< Reserved */
    uint32_t USART1RST :  1; /**< USART1 reset */
    uint32_t USART6RST :  1; /**< USART6 reset */
    uint32_t Reserved1 :  2; /**< Reserved */
    uint32_t ADCRST    :  1; /**< ADC reset */
    uint32_t Reserved2 :  2; /**< Reserved */
    uint32_t SDMMC1RST :  1; /**< SDMMC1 reset */
    uint32_t SPI1RST   :  1; /**< SPI1 reset */
    uint32_t SPI4RST   :  1; /**< SPI4 reset */
    uint32_t SYSCFGRST :  1; /**< SYSCFG reset */
    uint32_t Reserved3 :  1; /**< Reserved */
    uint32_t TIM9RST   :  1; /**< TIM9 reset */
    uint32_t TIM10RST  :  1; /**< TIM10 reset */
    uint32_t TIM11RST  :  1; /**< TIM11 reset */
    uint32_t Reserved4 :  1; /**< Reserved */
    uint32_t SPI5RST   :  1; /**< SPI5 reset */
    uint32_t SPI6RST   :  1; /**< SPI6 reset */
    uint32_t SAI1RST   :  1; /**< SAI1 reset */
    uint32_t SAI2RST   :  1; /**< SAI2 reset */
    uint32_t Reserved5 :  2; /**< Reserved */
    uint32_t LTDCRST   :  1; /**< LTDC reset */
    uint32_t Reserved6 :  5; /**< Reserved */
} RCC_APB2RSTR_t;

/** @brief RCC AHB1 peripheral clock enable register (RCC_AHB1ENR). */
typedef struct
{
    uint32_t GPIOAEN     :  1; /**< GPIOA clock enable */
    uint32_t GPIOBEN     :  1; /**< GPIOB clock enable */
    uint32_t GPIOCEN     :  1; /**< GPIOC clock enable */
    uint32_t GPIODEN     :  1; /**< GPIOD clock enable */
    uint32_t GPIOEEN     :  1; /**< GPIOE clock enable */
    uint32_t GPIOFEN     :  1; /**< GPIOF clock enable */
    uint32_t GPIOGEN     :  1; /**< GPIOG clock enable */
    uint32_t GPIOHEN     :  1; /**< GPIOH clock enable */
    uint32_t GPIOIEN     :  1; /**< GPIOI clock enable */
    uint32_t GPIOJEN     :  1; /**< GPIOJ clock enable */
    uint32_t GPIOKEN     :  1; /**< GPIOK clock enable */
    uint32_t Reserved0   :  1; /**< Reserved */
    uint32_t CRCEN       :  1; /**< CRC clock enable */
    uint32_t Reserved1   :  5; /**< Reserved */
    uint32_t BKPSRAMEN   :  1; /**< Backup SRAM clock enable */
    uint32_t Reserved2   :  1; /**< Reserved */
    uint32_t DTCMRAMEN   :  1; /**< DTCM RAM clock enable */
    uint32_t DMA1EN      :  1; /**< DMA1 clock enable */
    uint32_t DMA2EN      :  1; /**< DMA2 clock enable */
    uint32_t DMA2DEN     :  1; /**< DMA2D clock enable */
    uint32_t Reserved3   :  1; /**< Reserved */
    uint32_t ETHMACEN    :  1; /**< Ethernet MAC clock enable */
    uint32_t ETHMACTXEN  :  1; /**< Ethernet MAC transmit clock enable */
    uint32_t ETHMACRXEN  :  1; /**< Ethernet MAC receive clock enable */
    uint32_t ETHMACPTPEN :  1; /**< Ethernet PTP clock enable */
    uint32_t OTGHSEN     :  1; /**< USB OTG HS clock enable */
    uint32_t OTGHSULPIEN :  1; /**< USB OTG HS ULPI clock enable */
    uint32_t Reserved4   :  1; /**< Reserved */
} RCC_AHB1ENR_t;

/** @brief RCC AHB2 peripheral clock enable register (RCC_AHB2ENR). */
typedef struct
{
    uint32_t DCMIEN    :  1; /**< DCMI clock enable */
    uint32_t Reserved0 :  3; /**< Reserved */
    uint32_t CRYPEN    :  1; /**< Cryptographic processor clock enable */
    uint32_t HASHEN    :  1; /**< HASH clock enable */
    uint32_t RNGEN     :  1; /**< RNG clock enable */
    uint32_t OTGFSEN   :  1; /**< USB OTG FS clock enable */
    uint32_t Reserved1 : 24; /**< Reserved */
} RCC_AHB2ENR_t;

/** @brief RCC AHB3 peripheral clock enable register (RCC_AHB3ENR). */
typedef struct
{
    uint32_t FMCEN    :  1; /**< FMC clock enable */
    uint32_t QSPIEN   :  1; /**< Quad-SPI clock enable */
    uint32_t Reserved : 30; /**< Reserved */
} RCC_AHB3ENR_t;

/** @brief RCC APB1 peripheral clock enable register (RCC_APB1ENR). */
typedef struct
{
    uint32_t TIM2EN    :  1; /**< TIM2 clock enable */
    uint32_t TIM3EN    :  1; /**< TIM3 clock enable */
    uint32_t TIM4EN    :  1; /**< TIM4 clock enable */
    uint32_t TIM5EN    :  1; /**< TIM5 clock enable */
    uint32_t TIM6EN    :  1; /**< TIM6 clock enable */
    uint32_t TIM7EN    :  1; /**< TIM7 clock enable */
    uint32_t TIM12EN   :  1; /**< TIM12 clock enable */
    uint32_t TIM13EN   :  1; /**< TIM13 clock enable */
    uint32_t TIM14EN   :  1; /**< TIM14 clock enable */
    uint32_t LPTIM1EN  :  1; /**< LPTIM1 clock enable */
    uint32_t Reserved0 :  1; /**< Reserved */
    uint32_t WWDGEN    :  1; /**< Window watchdog clock enable */
    uint32_t Reserved1 :  2; /**< Reserved */
    uint32_t SPI2EN    :  1; /**< SPI2 clock enable */
    uint32_t SPI3EN    :  1; /**< SPI3 clock enable */
    uint32_t SPDIFRXEN :  1; /**< SPDIFRX clock enable */
    uint32_t USART2EN  :  1; /**< USART2 clock enable */
    uint32_t USART3EN  :  1; /**< USART3 clock enable */
    uint32_t UART4EN   :  1; /**< UART4 clock enable */
    uint32_t UART5EN   :  1; /**< UART5 clock enable */
    uint32_t I2C1EN    :  1; /**< I2C1 clock enable */
    uint32_t I2C2EN    :  1; /**< I2C2 clock enable */
    uint32_t I2C3EN    :  1; /**< I2C3 clock enable */
    uint32_t I2C4EN    :  1; /**< I2C4 clock enable */
    uint32_t CAN1EN    :  1; /**< CAN1 clock enable */
    uint32_t CAN2EN    :  1; /**< CAN2 clock enable */
    uint32_t CECEN     :  1; /**< CEC clock enable */
    uint32_t PWREN     :  1; /**< PWR clock enable */
    uint32_t DACEN     :  1; /**< DAC clock enable */
    uint32_t UART7EN   :  1; /**< UART7 clock enable */
    uint32_t UART8EN   :  1; /**< UART8 clock enable */
} RCC_APB1ENR_t;

/** @brief RCC APB2 peripheral clock enable register (RCC_APB2ENR). */
typedef struct
{
    uint32_t TIM1EN    :  1; /**< TIM1 clock enable */
    uint32_t TIM8EN    :  1; /**< TIM8 clock enable */
    uint32_t Reserved0 :  2; /**< Reserved */
    uint32_t USART1EN  :  1; /**< USART1 clock enable */
    uint32_t USART6EN  :  1; /**< USART6 clock enable */
    uint32_t Reserved1 :  2; /**< Reserved */
    uint32_t ADC1EN    :  1; /**< ADC1 clock enable */
    uint32_t Reserved2 :  2; /**< Reserved */
    uint32_t SDMMC1EN  :  1; /**< SDMMC1 clock enable */
    uint32_t SPI1EN    :  1; /**< SPI1 clock enable */
    uint32_t SPI4EN    :  1; /**< SPI4 clock enable */
    uint32_t SYSCFGEN  :  1; /**< SYSCFG clock enable */
    uint32_t Reserved3 :  1; /**< Reserved */
    uint32_t TIM9EN    :  1; /**< TIM9 clock enable */
    uint32_t TIM10EN   :  1; /**< TIM10 clock enable */
    uint32_t TIM11EN   :  1; /**< TIM11 clock enable */
    uint32_t Reserved4 :  1; /**< Reserved */
    uint32_t SPI5EN    :  1; /**< SPI5 clock enable */
    uint32_t SPI6EN    :  1; /**< SPI6 clock enable */
    uint32_t SAI1EN    :  1; /**< SAI1 clock enable */
    uint32_t SAI2EN    :  1; /**< SAI2 clock enable */
    uint32_t Reserved5 :  2; /**< Reserved */
    uint32_t LTDCEN    :  1; /**< LTDC clock enable */
    uint32_t Reserved6 :  5; /**< Reserved */
} RCC_APB2ENR_t;

/** @brief RCC AHB1 peripheral clock enable in low-power mode register (RCC_AHB1LPENR). */
typedef struct
{
    uint32_t GPIOALPEN     :  1; /**< GPIOA low-power clock enable */
    uint32_t GPIOBLPEN     :  1; /**< GPIOB low-power clock enable */
    uint32_t GPIOCLPEN     :  1; /**< GPIOC low-power clock enable */
    uint32_t GPIODLPEN     :  1; /**< GPIOD low-power clock enable */
    uint32_t GPIOELPEN     :  1; /**< GPIOE low-power clock enable */
    uint32_t GPIOFLPEN     :  1; /**< GPIOF low-power clock enable */
    uint32_t GPIOGLPEN     :  1; /**< GPIOG low-power clock enable */
    uint32_t GPIOHLPEN     :  1; /**< GPIOH low-power clock enable */
    uint32_t GPIOILPEN     :  1; /**< GPIOI low-power clock enable */
    uint32_t GPIOJLPEN     :  1; /**< GPIOJ low-power clock enable */
    uint32_t GPIOKLPEN     :  1; /**< GPIOK low-power clock enable */
    uint32_t Reserved0     :  1; /**< Reserved */
    uint32_t CRCLPEN       :  1; /**< CRC low-power clock enable */
    uint32_t AXILPEN       :  1; /**< AXI interconnect low-power clock enable */
    uint32_t Reserved1     :  1; /**< Reserved */
    uint32_t FLITFLPEN     :  1; /**< Flash interface low-power clock enable */
    uint32_t SRAM1LPEN     :  1; /**< SRAM1 low-power clock enable */
    uint32_t SRAM2LPEN     :  1; /**< SRAM2 low-power clock enable */
    uint32_t BKPSRAMLPEN   :  1; /**< Backup SRAM low-power clock enable */
    uint32_t Reserved2     :  1; /**< Reserved */
    uint32_t DTCMLPEN      :  1; /**< DTCM RAM low-power clock enable */
    uint32_t DMA1LPEN      :  1; /**< DMA1 low-power clock enable */
    uint32_t DMA2LPEN      :  1; /**< DMA2 low-power clock enable */
    uint32_t DMA2DLPEN     :  1; /**< DMA2D low-power clock enable */
    uint32_t Reserved3     :  1; /**< Reserved */
    uint32_t ETHMACLPEN    :  1; /**< Ethernet MAC low-power clock enable */
    uint32_t ETHMACTXLPLEN :  1; /**< Ethernet transmit low-power clock enable */
    uint32_t ETHMACRXLPLEN :  1; /**< Ethernet receive low-power clock enable */
    uint32_t ETHMACPTPLPEN :  1; /**< Ethernet PTP low-power clock enable */
    uint32_t OTGHSLPEN     :  1; /**< USB OTG HS low-power clock enable */
    uint32_t OTGHSULPILPEN :  1; /**< USB OTG HS ULPI low-power clock enable */
    uint32_t Reserved4     :  1; /**< Reserved */
} RCC_AHB1LPENR_t;

/** @brief RCC AHB2 peripheral clock enable in low-power mode register (RCC_AHB2LPENR). */
typedef struct
{
    uint32_t DCMILPEN  :  1; /**< DCMI low-power clock enable */
    uint32_t Reserved0 :  3; /**< Reserved */
    uint32_t CRYPLPEN  :  1; /**< Cryptographic processor low-power clock enable */
    uint32_t HASHLPEN  :  1; /**< HASH low-power clock enable */
    uint32_t RNGLPEN   :  1; /**< RNG low-power clock enable */
    uint32_t OTGFSLPEN :  1; /**< USB OTG FS low-power clock enable */
    uint32_t Reserved1 : 24; /**< Reserved */
} RCC_AHB2LPENR_t;

/** @brief RCC AHB3 peripheral clock enable in low-power mode register (RCC_AHB3LPENR). */
typedef struct
{
    uint32_t FMCLPEN  :  1; /**< FMC low-power clock enable */
    uint32_t QSPILPEN :  1; /**< Quad-SPI low-power clock enable */
    uint32_t Reserved : 30; /**< Reserved */
} RCC_AHB3LPENR_t;

/** @brief RCC APB1 peripheral clock enable in low-power mode register (RCC_APB1LPENR). */
typedef struct
{
    uint32_t TIM2LPEN    :  1; /**< TIM2 low-power clock enable */
    uint32_t TIM3LPEN    :  1; /**< TIM3 low-power clock enable */
    uint32_t TIM4LPEN    :  1; /**< TIM4 low-power clock enable */
    uint32_t TIM5LPEN    :  1; /**< TIM5 low-power clock enable */
    uint32_t TIM6LPEN    :  1; /**< TIM6 low-power clock enable */
    uint32_t TIM7LPEN    :  1; /**< TIM7 low-power clock enable */
    uint32_t TIM12LPEN   :  1; /**< TIM12 low-power clock enable */
    uint32_t TIM13LPEN   :  1; /**< TIM13 low-power clock enable */
    uint32_t TIM14LPEN   :  1; /**< TIM14 low-power clock enable */
    uint32_t LPTIM1LPEN  :  1; /**< LPTIM1 low-power clock enable */
    uint32_t Reserved0   :  1; /**< Reserved */
    uint32_t WWDGLPEN    :  1; /**< Window watchdog low-power clock enable */
    uint32_t Reserved1   :  2; /**< Reserved */
    uint32_t SPI2LPEN    :  1; /**< SPI2 low-power clock enable */
    uint32_t SPI3LPEN    :  1; /**< SPI3 low-power clock enable */
    uint32_t SPDIFRXLPEN :  1; /**< SPDIFRX low-power clock enable */
    uint32_t USART2LPEN  :  1; /**< USART2 low-power clock enable */
    uint32_t USART3LPEN  :  1; /**< USART3 low-power clock enable */
    uint32_t UART4LPEN   :  1; /**< UART4 low-power clock enable */
    uint32_t UART5LPEN   :  1; /**< UART5 low-power clock enable */
    uint32_t I2C1LPEN    :  1; /**< I2C1 low-power clock enable */
    uint32_t I2C2LPEN    :  1; /**< I2C2 low-power clock enable */
    uint32_t I2C3LPEN    :  1; /**< I2C3 low-power clock enable */
    uint32_t I2C4LPEN    :  1; /**< I2C4 low-power clock enable */
    uint32_t CAN1LPEN    :  1; /**< CAN1 low-power clock enable */
    uint32_t CAN2LPEN    :  1; /**< CAN2 low-power clock enable */
    uint32_t CECLPEN     :  1; /**< CEC low-power clock enable */
    uint32_t PWRLPEN     :  1; /**< PWR low-power clock enable */
    uint32_t DACLPEN     :  1; /**< DAC low-power clock enable */
    uint32_t UART7LPEN   :  1; /**< UART7 low-power clock enable */
    uint32_t UART8LPEN   :  1; /**< UART8 low-power clock enable */
} RCC_APB1LPENR_t;

/** @brief RCC APB2 peripheral clock enable in low-power mode register (RCC_APB2LPENR). */
typedef struct
{
    uint32_t TIM1LPEN   :  1; /**< TIM1 low-power clock enable */
    uint32_t TIM8LPEN   :  1; /**< TIM8 low-power clock enable */
    uint32_t Reserved0  :  2; /**< Reserved */
    uint32_t USART1LPEN :  1; /**< USART1 low-power clock enable */
    uint32_t USART6LPEN :  1; /**< USART6 low-power clock enable */
    uint32_t Reserved1  :  2; /**< Reserved */
    uint32_t ADC1LPEN   :  1; /**< ADC1 low-power clock enable */
    uint32_t Reserved2  :  2; /**< Reserved */
    uint32_t SDMMC1LPEN :  1; /**< SDMMC1 low-power clock enable */
    uint32_t SPI1LPEN   :  1; /**< SPI1 low-power clock enable */
    uint32_t SPI4LPEN   :  1; /**< SPI4 low-power clock enable */
    uint32_t SYSCFGLPEN :  1; /**< SYSCFG low-power clock enable */
    uint32_t Reserved3  :  1; /**< Reserved */
    uint32_t TIM9LPEN   :  1; /**< TIM9 low-power clock enable */
    uint32_t TIM10LPEN  :  1; /**< TIM10 low-power clock enable */
    uint32_t TIM11LPEN  :  1; /**< TIM11 low-power clock enable */
    uint32_t Reserved4  :  1; /**< Reserved */
    uint32_t SPI5LPEN   :  1; /**< SPI5 low-power clock enable */
    uint32_t SPI6LPEN   :  1; /**< SPI6 low-power clock enable */
    uint32_t SAI1LPEN   :  1; /**< SAI1 low-power clock enable */
    uint32_t SAI2LPEN   :  1; /**< SAI2 low-power clock enable */
    uint32_t Reserved5  :  2; /**< Reserved */
    uint32_t LTDCLPEN   :  1; /**< LTDC low-power clock enable */
    uint32_t Reserved6  :  5; /**< Reserved */
} RCC_APB2LPENR_t;

/** @brief RCC Backup domain control register (RCC_BDCR). */
typedef struct
{
    uint32_t LSEON     :  1; /**< LSE oscillator enable */
    uint32_t LSERDY    :  1; /**< LSE oscillator ready */
    uint32_t LSEBYP    :  1; /**< LSE oscillator bypass */
    uint32_t LSEDRV    :  2; /**< LSE oscillator drive capability */
    uint32_t Reserved0 :  3; /**< Reserved */
    uint32_t RTCSEL    :  2; /**< RTC clock source selection */
    uint32_t Reserved1 :  5; /**< Reserved */
    uint32_t RTCEN     :  1; /**< RTC clock enable */
    uint32_t BDRST     :  1; /**< Backup domain software reset */
    uint32_t Reserved2 : 15; /**< Reserved */
} RCC_BDCR_t;

/** @brief RCC Clock control and status register (RCC_CSR). */
typedef struct
{
    uint32_t LSION     :  1; /**< LSI oscillator enable */
    uint32_t LSIRDY    :  1; /**< LSI oscillator ready */
    uint32_t Reserved0 : 22; /**< Reserved */
    uint32_t RMVF      :  1; /**< Remove reset flags */
    uint32_t BORRSTF   :  1; /**< BOR reset flag */
    uint32_t PINRSTF   :  1; /**< Pin reset flag */
    uint32_t PORRSTF   :  1; /**< POR/PDR reset flag */
    uint32_t SFTRSTF   :  1; /**< Software reset flag */
    uint32_t WDGRSTF   :  1; /**< Independent watchdog reset flag */
    uint32_t WWDGRSTF  :  1; /**< Window watchdog reset flag */
    uint32_t LPWRRSTF  :  1; /**< Low-power reset flag */
} RCC_CSR_t;

/** @brief RCC Spread spectrum clock generation register (RCC_SSCGR). */
typedef struct
{
    uint32_t MODPER    : 13; /**< Modulation period */
    uint32_t Reserved0 :  3; /**< Reserved */
    uint32_t INCSTEP   : 12; /**< Increment step */
    uint32_t Reserved1 :  2; /**< Reserved */
    uint32_t SPREADSEL :  1; /**< Spread spectrum modulation selection */
    uint32_t SSCGEN    :  1; /**< Spread spectrum clock generation enable */
} RCC_SSCGR_t;

/** @brief RCC PLLI2S configuration register (RCC_PLLI2SCFGR). */
typedef struct
{
    uint32_t Reserved0 :  6; /**< Reserved */
    uint32_t PLLI2SN   :  9; /**< PLLI2S multiplication factor for VCO */
    uint32_t Reserved1 :  1; /**< Reserved */
    uint32_t PLLI2SP   :  2; /**< PLLI2S division factor for P clock */
    uint32_t Reserved2 :  6; /**< Reserved */
    uint32_t PLLI2SQ   :  4; /**< PLLI2S division factor for Q clock */
    uint32_t PLLI2SR   :  3; /**< PLLI2S division factor for R clock */
    uint32_t Reserved3 :  1; /**< Reserved */
} RCC_PLLI2SCFGR_t;

/** @brief RCC PLLSAI configuration register (RCC_PLLSAICFGR). */
typedef struct
{
    uint32_t Reserved0 :  6; /**< Reserved */
    uint32_t PLLSAIN   :  9; /**< PLLSAI multiplication factor for VCO */
    uint32_t Reserved1 :  1; /**< Reserved */
    uint32_t PLLSAIP   :  2; /**< PLLSAI division factor for P clock */
    uint32_t Reserved2 :  6; /**< Reserved */
    uint32_t PLLSAIQ   :  4; /**< PLLSAI division factor for Q clock */
    uint32_t PLLSAIR   :  3; /**< PLLSAI division factor for R clock */
    uint32_t Reserved3 :  1; /**< Reserved */
} RCC_PLLSAICFGR_t;

/** @brief RCC Dedicated clocks configuration register 1 (RCC_DCKCFGR1). */
typedef struct
{
    uint32_t PLLI2SDIVQ :  5; /**< PLLI2S Q-clock prescaler */
    uint32_t Reserved0  :  3; /**< Reserved */
    uint32_t PLLSAIDIVQ :  5; /**< PLLSAI Q-clock prescaler */
    uint32_t Reserved1  :  1; /**< Reserved */
    uint32_t PLLSAIDIVR :  2; /**< PLLSAI R-clock prescaler */
    uint32_t Reserved2  :  4; /**< Reserved */
    uint32_t SAI1SEL    :  2; /**< SAI1 clock source selection */
    uint32_t SAI2SEL    :  2; /**< SAI2 clock source selection */
    uint32_t TIMPRE     :  1; /**< Timer clock prescaler selection */
    uint32_t Reserved3  :  7; /**< Reserved */
} RCC_DCKCFGR1_t;

/** @brief RCC Dedicated clocks configuration register 2 (RCC_DCKCFGR2). */
typedef struct
{
    uint32_t UART1SEL  :  2; /**< USART1 clock source selection */
    uint32_t UART2SEL  :  2; /**< USART2 clock source selection */
    uint32_t UART3SEL  :  2; /**< USART3 clock source selection */
    uint32_t UART4SEL  :  2; /**< UART4 clock source selection */
    uint32_t UART5SEL  :  2; /**< UART5 clock source selection */
    uint32_t USART6SEL :  2; /**< USART6 clock source selection */
    uint32_t UART7SEL  :  2; /**< UART7 clock source selection */
    uint32_t UART8SEL  :  2; /**< UART8 clock source selection */
    uint32_t I2C1SEL   :  2; /**< I2C1 clock source selection */
    uint32_t I2C2SEL   :  2; /**< I2C2 clock source selection */
    uint32_t I2C3SEL   :  2; /**< I2C3 clock source selection */
    uint32_t I2C4SEL   :  2; /**< I2C4 clock source selection */
    uint32_t LPTIM1SEL :  2; /**< LPTIM1 clock source selection */
    uint32_t CECSEL    :  1; /**< CEC clock source selection */
    uint32_t CK48MSEL  :  1; /**< 48 MHz clock source selection */
    uint32_t SDMMC1SEL :  1; /**< SDMMC1 clock source selection */
    uint32_t Reserved  :  3; /**< Reserved */
} RCC_DCKCFGR2_t;

/** @} */

#endif /* RCC_REGISTER_PRIV_H_ */
