/**
 * @file    LAN8742A_Registers.h
 * @brief   Register addresses and bit definitions for the Microchip LAN8742A/LAN8742Ai PHY.
 *
 * @details
 * This header describes the 16-bit SMI/MDIO registers documented in
 * Microchip document DS00001989A, Chapter 4, Section 4.2, and the supported
 * MMD register addresses listed in Section 4.3.
 *
 * The header is independent of STM32 HAL/LL. Use the register index values
 * with the MDIO read/write functions supplied by the selected STM32 Ethernet
 * HAL driver, or with your own Clause 22 MDIO implementation.
 *
 * IMPORTANT:
 * - LAN8742A PHY registers are 16 bits wide and are accessed through MDIO.
 *   They are NOT memory-mapped registers in the STM32 address space.
 * - The PHY address is a board/strap configuration (PHYAD[0]); it is not
 *   fixed by this header.
 * - Reserved bits should be handled according to the datasheet. In
 *   particular, register 31 bits [11:5] are documented as write-as-0000010b.
 * - MMD registers are accessed indirectly through Clause 22 registers 13/14.
 *
 * Source: LAN8742A/LAN8742Ai Data Sheet, DS00001989A, Rev. A.
 */

#ifndef LAN8742A_REGISTERS_H_
#define LAN8742A_REGISTERS_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/* -------------------------------------------------------------------------- */
/* PHY identification                                                         */
/* -------------------------------------------------------------------------- */

#define LAN8742A_PHY_ID1_DEFAULT             (0x0007U)
#define LAN8742A_PHY_ID2_DEFAULT             (0xC130U)
#define LAN8742A_PHY_ID2_MODEL_MASK          (0xFFF0U)
#define LAN8742A_PHY_ID2_REVISION_MASK       (0x000FU)

#define LAN8742A_PHY_ADDR_MIN                (0U)
#define LAN8742A_PHY_ADDR_MAX                (31U)
#define LAN8742A_PHY_ADDR_MASK               (0x001FU)

/* -------------------------------------------------------------------------- */
/* Clause 22 SMI/MDIO register addresses                                       */
/* -------------------------------------------------------------------------- */

/** @brief LAN8742A Clause 22 register indices (decimal index, 16-bit data). */
typedef enum
{
    LAN8742A_REG_BASIC_CONTROL              = 0x00U, /**< Basic Control Register (BMCR). */
    LAN8742A_REG_BASIC_STATUS               = 0x01U, /**< Basic Status Register (BMSR). */
    LAN8742A_REG_PHY_ID1                    = 0x02U, /**< PHY Identifier 1 Register. */
    LAN8742A_REG_PHY_ID2                    = 0x03U, /**< PHY Identifier 2 Register. */
    LAN8742A_REG_AUTONEG_ADVERTISEMENT      = 0x04U, /**< Auto Negotiation Advertisement Register. */
    LAN8742A_REG_AUTONEG_LINK_PARTNER       = 0x05U, /**< Auto Negotiation Link Partner Ability Register. */
    LAN8742A_REG_AUTONEG_EXPANSION          = 0x06U, /**< Auto Negotiation Expansion Register. */
    LAN8742A_REG_AUTONEG_NEXT_PAGE_TX        = 0x07U, /**< Auto Negotiation Next Page TX Register. */
    LAN8742A_REG_AUTONEG_NEXT_PAGE_RX        = 0x08U, /**< Auto Negotiation Next Page RX Register. */
    LAN8742A_REG_MMD_ACCESS_CONTROL          = 0x0DU, /**< MMD Access Control Register. */
    LAN8742A_REG_MMD_ACCESS_ADDRESS_DATA     = 0x0EU, /**< MMD Access Address/Data Register. */

    LAN8742A_REG_EDPD_NLP_CROSSOVER_TIME     = 0x10U, /**< EDPD NLP/Crossover Time Register. */
    LAN8742A_REG_MODE_CONTROL_STATUS         = 0x11U, /**< Mode Control/Status Register. */
    LAN8742A_REG_SPECIAL_MODES               = 0x12U, /**< Special Modes Register. */

    LAN8742A_REG_TDR_PATTERNS_DELAY_CONTROL  = 0x18U, /**< TDR Patterns/Delay Control Register. */
    LAN8742A_REG_TDR_CONTROL_STATUS          = 0x19U, /**< TDR Control/Status Register. */
    LAN8742A_REG_SYMBOL_ERROR_COUNTER        = 0x1AU, /**< Symbol Error Counter Register. */
    LAN8742A_REG_SPECIAL_CONTROL_STATUS      = 0x1BU, /**< Special Control/Status Indications Register. */
    LAN8742A_REG_CABLE_LENGTH                = 0x1CU, /**< Cable Length Register. */
    LAN8742A_REG_INTERRUPT_SOURCE            = 0x1DU, /**< Interrupt Source Flag Register. */
    LAN8742A_REG_INTERRUPT_MASK              = 0x1EU, /**< Interrupt Mask Register. */
    LAN8742A_REG_PHY_SPECIAL_CONTROL_STATUS  = 0x1FU  /**< PHY Special Control/Status Register. */
} LAN8742A_Register_t;

#define LAN8742A_REG_ADDR_MASK               (0x001FU)
#define LAN8742A_REG_DATA_MASK               (0xFFFFU)

/* -------------------------------------------------------------------------- */
/* Register 0: Basic Control Register (BMCR)                                  */
/* -------------------------------------------------------------------------- */

#define LAN8742A_BMCR_RESET                  (1U << 15)
#define LAN8742A_BMCR_LOOPBACK               (1U << 14)
#define LAN8742A_BMCR_SPEED_SELECT           (1U << 13)
#define LAN8742A_BMCR_AUTONEG_ENABLE         (1U << 12)
#define LAN8742A_BMCR_POWER_DOWN             (1U << 11)
#define LAN8742A_BMCR_ISOLATE                (1U << 10)
#define LAN8742A_BMCR_RESTART_AUTONEG        (1U << 9)
#define LAN8742A_BMCR_DUPLEX_MODE            (1U << 8)
#define LAN8742A_BMCR_RESERVED_MASK          (0x00FFU)

typedef enum
{
    LAN8742A_SPEED_10_MBPS                  = 0x0000U,
    LAN8742A_SPEED_100_MBPS                 = LAN8742A_BMCR_SPEED_SELECT
} LAN8742A_Speed_t;

typedef enum
{
    LAN8742A_DUPLEX_HALF                    = 0x0000U,
    LAN8742A_DUPLEX_FULL                    = LAN8742A_BMCR_DUPLEX_MODE
} LAN8742A_Duplex_t;

/* -------------------------------------------------------------------------- */
/* Register 1: Basic Status Register (BMSR)                                   */
/* -------------------------------------------------------------------------- */

#define LAN8742A_BMSR_100BASE_T4             (1U << 15)
#define LAN8742A_BMSR_100BASE_TX_FULL        (1U << 14)
#define LAN8742A_BMSR_100BASE_TX_HALF        (1U << 13)
#define LAN8742A_BMSR_10BASE_T_FULL          (1U << 12)
#define LAN8742A_BMSR_10BASE_T_HALF          (1U << 11)
#define LAN8742A_BMSR_100BASE_T2_FULL        (1U << 10)
#define LAN8742A_BMSR_100BASE_T2_HALF        (1U << 9)
#define LAN8742A_BMSR_EXTENDED_STATUS        (1U << 8)
#define LAN8742A_BMSR_AUTONEG_COMPLETE       (1U << 5)
#define LAN8742A_BMSR_REMOTE_FAULT           (1U << 4)
#define LAN8742A_BMSR_AUTONEG_ABILITY        (1U << 3)
#define LAN8742A_BMSR_LINK_STATUS            (1U << 2)
#define LAN8742A_BMSR_JABBER_DETECT          (1U << 1)
#define LAN8742A_BMSR_EXTENDED_CAPABILITY    (1U << 0)

/* -------------------------------------------------------------------------- */
/* Registers 2 and 3: PHY identifier                                          */
/* -------------------------------------------------------------------------- */

#define LAN8742A_PHY_ID1_MASK                (0xFFFFU)
#define LAN8742A_PHY_ID2_OUI_MODEL_MASK      (0xFC00U)
#define LAN8742A_PHY_ID2_MODEL_NUMBER_MASK   (0x03F0U)
#define LAN8742A_PHY_ID2_MODEL_NUMBER_SHIFT  (4U)
#define LAN8742A_PHY_ID2_REVISION_MASK       (0x000FU)

/* -------------------------------------------------------------------------- */
/* Register 4: Auto Negotiation Advertisement Register (ANAR)                 */
/* Register 5: Auto Negotiation Link Partner Ability Register (ANLPAR)       */
/* -------------------------------------------------------------------------- */

#define LAN8742A_AN_NEXT_PAGE                (1U << 15)
#define LAN8742A_AN_ACKNOWLEDGE              (1U << 14) /* Register 5: read-only. */
#define LAN8742A_AN_REMOTE_FAULT             (1U << 13)
#define LAN8742A_AN_PAUSE_MASK               (3U << 10)
#define LAN8742A_AN_100BASE_T4               (1U << 9)  /* Register 5; unsupported by LAN8742A. */
#define LAN8742A_AN_100BASE_TX_FULL          (1U << 8)
#define LAN8742A_AN_100BASE_TX               (1U << 7)
#define LAN8742A_AN_10BASE_T_FULL            (1U << 6)
#define LAN8742A_AN_10BASE_T                (1U << 5)
#define LAN8742A_AN_SELECTOR_MASK            (0x001FU)
#define LAN8742A_AN_SELECTOR_IEEE_8023        (0x0001U)

typedef enum
{
    LAN8742A_PAUSE_NONE                     = 0x0000U,
    LAN8742A_PAUSE_SYMMETRIC                = 0x0400U,
    LAN8742A_PAUSE_ASYMMETRIC               = 0x0800U,
    LAN8742A_PAUSE_SYMMETRIC_ASYMMETRIC     = 0x0C00U
} LAN8742A_PauseAdvertisement_t;

/* -------------------------------------------------------------------------- */
/* Register 6: Auto Negotiation Expansion Register (ANER)                     */
/* -------------------------------------------------------------------------- */

#define LAN8742A_ANER_RX_NEXT_PAGE_LOCATION_ABLE  (1U << 6)
#define LAN8742A_ANER_RX_NEXT_PAGE_STORAGE        (1U << 5)
#define LAN8742A_ANER_PARALLEL_DETECTION_FAULT    (1U << 4)
#define LAN8742A_ANER_LP_NEXT_PAGE_ABLE           (1U << 3)
#define LAN8742A_ANER_NEXT_PAGE_ABLE              (1U << 2)
#define LAN8742A_ANER_PAGE_RECEIVED               (1U << 1)
#define LAN8742A_ANER_LP_AUTONEG_ABLE             (1U << 0)

/* -------------------------------------------------------------------------- */
/* Registers 7 and 8: Auto Negotiation Next Page TX/RX                         */
/* -------------------------------------------------------------------------- */

#define LAN8742A_NP_NEXT_PAGE                (1U << 15)
#define LAN8742A_NP_ACKNOWLEDGE              (1U << 14) /* RX register: read-only. */
#define LAN8742A_NP_MESSAGE_PAGE             (1U << 13)
#define LAN8742A_NP_ACKNOWLEDGE2             (1U << 12)
#define LAN8742A_NP_TOGGLE                   (1U << 11) /* Read-only. */
#define LAN8742A_NP_MESSAGE_CODE_MASK        (0x07FFU)

/* -------------------------------------------------------------------------- */
/* Register 13: MMD Access Control Register                                   */
/* Register 14: MMD Access Address/Data Register                              */
/* -------------------------------------------------------------------------- */

#define LAN8742A_MMD_FUNCTION_MASK           (3U << 14)
#define LAN8742A_MMD_DEVICE_ADDRESS_MASK     (0x001FU)

typedef enum
{
    LAN8742A_MMD_FUNCTION_ADDRESS            = 0x0000U,
    LAN8742A_MMD_FUNCTION_DATA_NO_INCREMENT  = 0x4000U,
    LAN8742A_MMD_FUNCTION_RESERVED_2          = 0x8000U,
    LAN8742A_MMD_FUNCTION_RESERVED_3          = 0xC000U
} LAN8742A_MMD_Function_t;

typedef enum
{
    LAN8742A_MMD_DEVICE_PCS                  = 3U,
    LAN8742A_MMD_DEVICE_VENDOR_SPECIFIC      = 30U
} LAN8742A_MMD_Device_t;

/* -------------------------------------------------------------------------- */
/* Register 16: EDPD NLP/Crossover Time Register                              */
/* -------------------------------------------------------------------------- */

#define LAN8742A_EDPD_TX_NLP_ENABLE          (1U << 15)
#define LAN8742A_EDPD_TX_NLP_INTERVAL_MASK   (3U << 13)
#define LAN8742A_EDPD_RX_SINGLE_NLP_WAKE     (1U << 12)
#define LAN8742A_EDPD_RX_NLP_INTERVAL_MASK   (3U << 10)
#define LAN8742A_EDPD_EXTEND_CROSSOVER       (1U << 1)
#define LAN8742A_EDPD_MANUAL_CROSSOVER_EXT   (1U << 0)

typedef enum
{
    LAN8742A_EDPD_TX_NLP_INTERVAL_1_S        = 0x0000U,
    LAN8742A_EDPD_TX_NLP_INTERVAL_768_MS     = 0x2000U,
    LAN8742A_EDPD_TX_NLP_INTERVAL_512_MS     = 0x4000U,
    LAN8742A_EDPD_TX_NLP_INTERVAL_256_MS     = 0x6000U
} LAN8742A_EDPD_TxNlpInterval_t;

typedef enum
{
    LAN8742A_EDPD_RX_NLP_INTERVAL_64_MS      = 0x0000U,
    LAN8742A_EDPD_RX_NLP_INTERVAL_256_MS     = 0x0400U,
    LAN8742A_EDPD_RX_NLP_INTERVAL_512_MS     = 0x0800U,
    LAN8742A_EDPD_RX_NLP_INTERVAL_1_S        = 0x0C00U
} LAN8742A_EDPD_RxNlpInterval_t;

/* -------------------------------------------------------------------------- */
/* Register 17: Mode Control/Status Register                                  */
/* -------------------------------------------------------------------------- */

#define LAN8742A_MODE_EDPWRDOWN              (1U << 13)
#define LAN8742A_MODE_FAR_LOOPBACK           (1U << 9)
#define LAN8742A_MODE_ALTERNATE_INTERRUPT    (1U << 6)
#define LAN8742A_MODE_ENERGY_ON              (1U << 1)

/* -------------------------------------------------------------------------- */
/* Register 18: Special Modes Register                                        */
/* -------------------------------------------------------------------------- */

#define LAN8742A_SPECIAL_MODE_MASK           (7U << 5)
#define LAN8742A_SPECIAL_MODE_SHIFT          (5U)
#define LAN8742A_SPECIAL_PHY_ADDRESS_MASK    (0x001FU)

/* -------------------------------------------------------------------------- */
/* Register 24: TDR Patterns/Delay Control Register                           */
/* -------------------------------------------------------------------------- */

#define LAN8742A_TDR_DELAY_IN                (1U << 15)
#define LAN8742A_TDR_LINE_BREAK_COUNT_MASK   (7U << 12)
#define LAN8742A_TDR_LINE_BREAK_COUNT_SHIFT  (12U)
#define LAN8742A_TDR_PATTERN_HIGH_MASK       (0x0FC0U)
#define LAN8742A_TDR_PATTERN_HIGH_SHIFT      (6U)
#define LAN8742A_TDR_PATTERN_LOW_MASK        (0x003FU)

/* -------------------------------------------------------------------------- */
/* Register 25: TDR Control/Status Register                                   */
/* -------------------------------------------------------------------------- */

#define LAN8742A_TDR_ENABLE                  (1U << 15)
#define LAN8742A_TDR_ADC_FILTER_ENABLE        (1U << 14)
#define LAN8742A_TDR_CABLE_TYPE_MASK          (3U << 9)
#define LAN8742A_TDR_CABLE_TYPE_SHIFT         (9U)
#define LAN8742A_TDR_CHANNEL_STATUS           (1U << 8)
#define LAN8742A_TDR_CHANNEL_LENGTH_MASK      (0x00FFU)

typedef enum
{
    LAN8742A_TDR_CABLE_DEFAULT               = 0x0000U,
    LAN8742A_TDR_CABLE_SHORTED               = 0x0200U,
    LAN8742A_TDR_CABLE_OPEN                  = 0x0400U,
    LAN8742A_TDR_CABLE_MATCH                 = 0x0600U
} LAN8742A_TdrCableType_t;

/* -------------------------------------------------------------------------- */
/* Register 26: Symbol Error Counter Register                                 */
/* -------------------------------------------------------------------------- */

#define LAN8742A_SYMBOL_ERROR_COUNT_MASK     (0xFFFFU)

/* -------------------------------------------------------------------------- */
/* Register 27: Special Control/Status Indications Register                   */
/* -------------------------------------------------------------------------- */

#define LAN8742A_SCS_AMDIX_CONTROL            (1U << 15)
#define LAN8742A_SCS_CHANNEL_SELECT           (1U << 13)
#define LAN8742A_SCS_SQE_OFF                  (1U << 11)
#define LAN8742A_SCS_POLARITY_REVERSED        (1U << 4)

typedef enum
{
    LAN8742A_CHANNEL_MDI                     = 0x0000U,
    LAN8742A_CHANNEL_MDIX                    = LAN8742A_SCS_CHANNEL_SELECT
} LAN8742A_ChannelSelect_t;

/* -------------------------------------------------------------------------- */
/* Register 28: Cable Length Register                                         */
/* -------------------------------------------------------------------------- */

#define LAN8742A_CABLE_LENGTH_MASK            (0xF000U)
#define LAN8742A_CABLE_LENGTH_SHIFT           (12U)

/* -------------------------------------------------------------------------- */
/* Register 29: Interrupt Source Flag Register                                */
/* Register 30: Interrupt Mask Register                                       */
/* -------------------------------------------------------------------------- */

#define LAN8742A_INT_WOL                     (1U << 8)
#define LAN8742A_INT_ENERGY_ON               (1U << 7)
#define LAN8742A_INT_AUTONEG_COMPLETE       (1U << 6)
#define LAN8742A_INT_REMOTE_FAULT            (1U << 5)
#define LAN8742A_INT_LINK_DOWN               (1U << 4)
#define LAN8742A_INT_LP_ACKNOWLEDGE          (1U << 3)
#define LAN8742A_INT_PARALLEL_DETECT_FAULT   (1U << 2)
#define LAN8742A_INT_PAGE_RECEIVED           (1U << 1)
#define LAN8742A_INT_ALL                     (0x01FEU)

/* Register 30 uses the same bit positions: 1 enables an interrupt source. */
#define LAN8742A_INT_MASK_WOL                LAN8742A_INT_WOL
#define LAN8742A_INT_MASK_ENERGY_ON          LAN8742A_INT_ENERGY_ON
#define LAN8742A_INT_MASK_AUTONEG_COMPLETE   LAN8742A_INT_AUTONEG_COMPLETE
#define LAN8742A_INT_MASK_REMOTE_FAULT       LAN8742A_INT_REMOTE_FAULT
#define LAN8742A_INT_MASK_LINK_DOWN          LAN8742A_INT_LINK_DOWN
#define LAN8742A_INT_MASK_LP_ACKNOWLEDGE     LAN8742A_INT_LP_ACKNOWLEDGE
#define LAN8742A_INT_MASK_PARALLEL_DETECT    LAN8742A_INT_PARALLEL_DETECT_FAULT
#define LAN8742A_INT_MASK_PAGE_RECEIVED      LAN8742A_INT_PAGE_RECEIVED

/* -------------------------------------------------------------------------- */
/* Register 31: PHY Special Control/Status Register                           */
/* -------------------------------------------------------------------------- */

#define LAN8742A_PHYSCSR_AUTONEG_DONE         (1U << 12)
#define LAN8742A_PHYSCSR_RESERVED_WRITE_MASK  (0x0FE0U)
#define LAN8742A_PHYSCSR_RESERVED_WRITE_VALUE (0x0040U) /* Bits [11:5] = 0000010b. */
#define LAN8742A_PHYSCSR_SPEED_MASK           (7U << 2)
#define LAN8742A_PHYSCSR_SPEED_SHIFT          (2U)

typedef enum
{
    LAN8742A_LINK_SPEED_10_HALF              = 0x0004U, /* HCDSPEED = 001b. */
    LAN8742A_LINK_SPEED_10_FULL              = 0x0014U, /* HCDSPEED = 101b. */
    LAN8742A_LINK_SPEED_100_HALF             = 0x0008U, /* HCDSPEED = 010b. */
    LAN8742A_LINK_SPEED_100_FULL             = 0x0018U  /* HCDSPEED = 110b. */
} LAN8742A_LinkSpeedStatus_t;

/* -------------------------------------------------------------------------- */
/* Supported MMD register addresses (indirectly accessed through 13/14)       */
/* -------------------------------------------------------------------------- */

/** @brief PCS MMD (DEVAD 3) register indices from datasheet Table 4-3. */
typedef enum
{
    LAN8742A_PCS_MMD_DEVICES_PRESENT_1       = 0x0005U,
    LAN8742A_PCS_MMD_DEVICES_PRESENT_2       = 0x0006U,
    LAN8742A_PCS_MMD_WUCSR                   = 0x8010U,
    LAN8742A_PCS_MMD_WUF_CFGA                = 0x8011U,
    LAN8742A_PCS_MMD_WUF_CFGB                = 0x8012U,
    LAN8742A_PCS_MMD_WUF_MASK_0              = 0x8021U,
    LAN8742A_PCS_MMD_WUF_MASK_1              = 0x8022U,
    LAN8742A_PCS_MMD_WUF_MASK_2              = 0x8023U,
    LAN8742A_PCS_MMD_WUF_MASK_3              = 0x8024U,
    LAN8742A_PCS_MMD_WUF_MASK_4              = 0x8025U,
    LAN8742A_PCS_MMD_WUF_MASK_5              = 0x8026U,
    LAN8742A_PCS_MMD_WUF_MASK_6              = 0x8027U,
    LAN8742A_PCS_MMD_WUF_MASK_7              = 0x8028U,
    LAN8742A_PCS_MMD_RX_ADDRA                = 0x80C1U,
    LAN8742A_PCS_MMD_RX_ADDRB                = 0x80C2U,
    LAN8742A_PCS_MMD_RX_ADDRC                = 0x80C3U,
    LAN8742A_PCS_MMD_MCFGR                   = 0x80C4U
} LAN8742A_PcsMmdRegister_t;

/** @brief Vendor-specific MMD (DEVAD 30) register indices from Table 4-3. */
typedef enum
{
    LAN8742A_VSMMD_DEVICE_ID_1               = 0x0002U,
    LAN8742A_VSMMD_DEVICE_ID_2               = 0x0003U,
    LAN8742A_VSMMD_DEVICES_PRESENT_1         = 0x0005U,
    LAN8742A_VSMMD_DEVICES_PRESENT_2         = 0x0006U,
    LAN8742A_VSMMD_STATUS                   = 0x0008U,
    LAN8742A_VSMMD_TDR_MATCH_THRESHOLD       = 0x000BU,
    LAN8742A_VSMMD_TDR_SHORT_OPEN_THRESHOLD  = 0x000CU,
    LAN8742A_VSMMD_PACKAGE_ID_1              = 0x000EU,
    LAN8742A_VSMMD_PACKAGE_ID_2              = 0x000FU
} LAN8742A_VendorMmdRegister_t;


/** @brief Register 0: Basic Control Register (BMCR). */
typedef union
{
    uint16_t REG;
    struct
    {
        uint16_t RESERVED_0_7       : 8; /**< Bits [7:0]: Reserved. */
        uint16_t DUPLEX_MODE        : 1; /**< Bit 8: Duplex mode. */
        uint16_t RESTART_AUTONEG    : 1; /**< Bit 9: Restart auto-negotiation; self-clearing. */
        uint16_t ISOLATE            : 1; /**< Bit 10: Isolate PHY from RMII. */
        uint16_t POWER_DOWN         : 1; /**< Bit 11: General power-down. */
        uint16_t AUTONEG_ENABLE     : 1; /**< Bit 12: Auto-negotiation enable. */
        uint16_t SPEED_SELECT       : 1; /**< Bit 13: 0 = 10 Mbps, 1 = 100 Mbps. */
        uint16_t LOOPBACK           : 1; /**< Bit 14: Loopback enable. */
        uint16_t SOFT_RESET         : 1; /**< Bit 15: Software reset; self-clearing. */
    } BIT;
} LAN8742A_BMCR_t;

/** @brief Register 1: Basic Status Register (BMSR). */
typedef union
{
    uint16_t REG;
    struct
    {
        uint16_t EXTENDED_CAPABILITY : 1; /**< Bit 0: Extended capabilities supported. */
        uint16_t JABBER_DETECT       : 1; /**< Bit 1: Jabber detected; latch high. */
        uint16_t LINK_STATUS         : 1; /**< Bit 2: Link status; latch low. */
        uint16_t AUTONEG_ABILITY     : 1; /**< Bit 3: Auto-negotiation supported. */
        uint16_t REMOTE_FAULT        : 1; /**< Bit 4: Remote fault; latch high. */
        uint16_t AUTONEG_COMPLETE    : 1; /**< Bit 5: Auto-negotiation completed. */
        uint16_t RESERVED_6_7        : 2; /**< Bits [7:6]: Reserved. */
        uint16_t EXTENDED_STATUS     : 1; /**< Bit 8: Extended status register supported. */
        uint16_t _100BASE_T2_HALF    : 1; /**< Bit 9: 100BASE-T2 half-duplex ability. */
        uint16_t _100BASE_T2_FULL    : 1; /**< Bit 10: 100BASE-T2 full-duplex ability. */
        uint16_t _10BASE_T_HALF      : 1; /**< Bit 11: 10BASE-T half-duplex ability. */
        uint16_t _10BASE_T_FULL      : 1; /**< Bit 12: 10BASE-T full-duplex ability. */
        uint16_t _100BASE_TX_HALF    : 1; /**< Bit 13: 100BASE-TX half-duplex ability. */
        uint16_t _100BASE_TX_FULL    : 1; /**< Bit 14: 100BASE-TX full-duplex ability. */
        uint16_t _100BASE_T4         : 1; /**< Bit 15: 100BASE-T4 ability; not supported by LAN8742A. */
    } BIT;
} LAN8742A_BMSR_t;

/** @brief Register 2: PHY Identifier 1 Register (PHYID1). */
typedef union
{
    uint16_t REG;
    struct
    {
        uint16_t PHY_ID_NUMBER : 16; /**< Bits [15:0]: Organizationally Unique Identifier field. */
    } BIT;
} LAN8742A_PHYID1_t;

/** @brief Register 3: PHY Identifier 2 Register (PHYID2). */
typedef union
{
    uint16_t REG;
    struct
    {
        uint16_t REVISION_NUMBER : 4; /**< Bits [3:0]: Silicon revision number. */
        uint16_t MODEL_NUMBER    : 6; /**< Bits [9:4]: Manufacturer model number. */
        uint16_t PHY_ID_NUMBER   : 6; /**< Bits [15:10]: OUI identifier field. */
    } BIT;
} LAN8742A_PHYID2_t;

/** @brief Register 4: Auto Negotiation Advertisement Register (ANAR). */
typedef union
{
    uint16_t REG;
    struct
    {
        uint16_t SELECTOR_FIELD       : 5; /**< Bits [4:0]: IEEE 802.3 selector. */
        uint16_t _10BASE_T            : 1; /**< Bit 5: 10BASE-T ability. */
        uint16_t _10BASE_T_FULL       : 1; /**< Bit 6: 10BASE-T full-duplex ability. */
        uint16_t _100BASE_TX          : 1; /**< Bit 7: 100BASE-TX ability. */
        uint16_t _100BASE_TX_FULL     : 1; /**< Bit 8: 100BASE-TX full-duplex ability. */
        uint16_t RESERVED_9           : 1; /**< Bit 9: Reserved. */
        uint16_t PAUSE_OPERATION      : 2; /**< Bits [11:10]: Pause capability. */
        uint16_t RESERVED_12          : 1; /**< Bit 12: Reserved. */
        uint16_t REMOTE_FAULT         : 1; /**< Bit 13: Remote fault. */
        uint16_t RESERVED_14          : 1; /**< Bit 14: Reserved. */
        uint16_t NEXT_PAGE            : 1; /**< Bit 15: Next-page ability. */
    } BIT;
} LAN8742A_ANAR_t;

/** @brief Register 26: Symbol Error Counter Register. */
typedef union
{
    uint16_t REG;
    struct
    {
        uint16_t SYMBOL_ERROR_COUNT : 16; /**< Bits [15:0]: Symbol error counter. */
    } BIT;
} LAN8742A_SYMBOL_ERROR_t;

/** @brief Register 27: Special Control/Status Indications Register (SCSIR). */
typedef union
{
    uint16_t REG;
    struct
    {
        uint16_t RESERVED_0_3    : 4; /**< Bits [3:0]: Reserved. */
        uint16_t XPOL             : 1; /**< Bit 4: 10BASE-T polarity reversed; read-only. */
        uint16_t RESERVED_5_10   : 6; /**< Bits [10:5]: Reserved. */
        uint16_t SQE_OFF          : 1; /**< Bit 11: Disable SQE test. */
        uint16_t RESERVED_12     : 1; /**< Bit 12: Reserved. */
        uint16_t CHANNEL_SELECT  : 1; /**< Bit 13: 0 = MDI, 1 = MDIX. */
        uint16_t RESERVED_14     : 1; /**< Bit 14: Reserved. */
        uint16_t AMDIX_CONTROL   : 1; /**< Bit 15: 0 = Auto-MDIX enabled, 1 = disabled. */
    } BIT;
} LAN8742A_SCSIR_t;

/** @brief Register 28: Cable Length Register. */
typedef union
{
    uint16_t REG;
    struct
    {
        uint16_t RESERVED_0_11 : 12; /**< Bits [11:0]: Reserved. */
        uint16_t CABLE_LENGTH  : 4;  /**< Bits [15:12]: Cable length indication. */
    } BIT;
} LAN8742A_CABLE_LENGTH_t;

/** @brief Register 29: Interrupt Source Flag Register. */
typedef union
{
    uint16_t REG;
    struct
    {
        uint16_t RESERVED_0        : 1; /**< Bit 0: Reserved. */
        uint16_t PAGE_RECEIVED     : 1; /**< Bit 1: Auto-negotiation page received. */
        uint16_t PARALLEL_DETECT   : 1; /**< Bit 2: Parallel detection fault. */
        uint16_t LP_ACKNOWLEDGE    : 1; /**< Bit 3: Auto-negotiation LP acknowledge. */
        uint16_t LINK_DOWN         : 1; /**< Bit 4: Link status negated. */
        uint16_t REMOTE_FAULT      : 1; /**< Bit 5: Remote fault detected. */
        uint16_t AUTONEG_COMPLETE  : 1; /**< Bit 6: Auto-negotiation completed. */
        uint16_t ENERGY_ON         : 1; /**< Bit 7: ENERGYON generated. */
        uint16_t WOL_EVENT         : 1; /**< Bit 8: Wake-on-LAN event detected. */
        uint16_t RESERVED_9_15     : 7; /**< Bits [15:9]: Reserved. */
    } BIT;
} LAN8742A_INT_SOURCE_t;

/** @brief Register 30: Interrupt Mask Register. */
typedef union
{
    uint16_t REG;
    struct
    {
        uint16_t RESERVED_0       : 1; /**< Bit 0: Reserved. */
        uint16_t PAGE_RECEIVED    : 1; /**< Bit 1: Enable page-received interrupt. */
        uint16_t PARALLEL_DETECT  : 1; /**< Bit 2: Enable parallel-detection-fault interrupt. */
        uint16_t LP_ACKNOWLEDGE   : 1; /**< Bit 3: Enable LP-acknowledge interrupt. */
        uint16_t LINK_DOWN        : 1; /**< Bit 4: Enable link-down interrupt. */
        uint16_t REMOTE_FAULT     : 1; /**< Bit 5: Enable remote-fault interrupt. */
        uint16_t AUTONEG_COMPLETE : 1; /**< Bit 6: Enable auto-negotiation-complete interrupt. */
        uint16_t ENERGY_ON        : 1; /**< Bit 7: Enable ENERGYON interrupt. */
        uint16_t WOL_EVENT        : 1; /**< Bit 8: Enable Wake-on-LAN interrupt. */
        uint16_t RESERVED_9_15    : 7; /**< Bits [15:9]: Reserved. */
    } BIT;
} LAN8742A_INT_MASK_t;

/** @brief Register 31: PHY Special Control/Status Register (PHYSCSR). */
typedef union
{
    uint16_t REG;
    struct
    {
        uint16_t RESERVED_0_1     : 2; /**< Bits [1:0]: Reserved. */
        uint16_t SPEED_INDICATION : 3; /**< Bits [4:2]: Resolved HCDSPEED indication. */
        uint16_t RESERVED_WRITE  : 7; /**< Bits [11:5]: Write 0000010b as specified. */
        uint16_t AUTONEG_DONE     : 1; /**< Bit 12: Auto-negotiation done; read-only. */
        uint16_t RESERVED_13_15  : 3; /**< Bits [15:13]: Reserved. */
    } BIT;
} LAN8742A_PHYSCSR_t;
/* -------------------------------------------------------------------------- */
/* Small helpers for manipulating register fields                            */
/* -------------------------------------------------------------------------- */

/**
 * @brief Extract a field from a 16-bit PHY register value.
 * @param reg_value Raw 16-bit register value.
 * @param mask      Field mask (already positioned).
 * @param shift     Number of bit positions to right-shift the field.
 * @return          Right-aligned field value.
 */
static inline uint16_t LAN8742A_FieldGet(uint16_t reg_value,
                                        uint16_t mask,
                                        uint8_t shift)
{
    return (uint16_t)((reg_value & mask) >> shift);
}

/**
 * @brief Replace a field in a 16-bit PHY register value, preserving other bits.
 * @param reg_value Existing 16-bit register value.
 * @param mask      Field mask (already positioned).
 * @param shift     Number of bit positions to left-shift the field value.
 * @param value     Right-aligned new field value.
 * @return          Updated 16-bit register value.
 */
static inline uint16_t LAN8742A_FieldSet(uint16_t reg_value,
                                        uint16_t mask,
                                        uint8_t shift,
                                        uint16_t value)
{
    return (uint16_t)((reg_value & (uint16_t)(~mask)) |
                      (uint16_t)((value << shift) & mask));
}

/** @brief Build the value written to MMD Access Control Register (register 13). */
static inline uint16_t LAN8742A_MmdControlValue(LAN8742A_MMD_Device_t devad,
                                                LAN8742A_MMD_Function_t function)
{
    return (uint16_t)(((uint16_t)function & LAN8742A_MMD_FUNCTION_MASK) |
                      ((uint16_t)devad & LAN8742A_MMD_DEVICE_ADDRESS_MASK));
}

#ifdef __cplusplus
}
#endif

#endif /* LAN8742A_REGISTERS_H_ */
