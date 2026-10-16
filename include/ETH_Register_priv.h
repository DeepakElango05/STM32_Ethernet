/**
 * @file ETH_REG_PRIV.h
 * @brief Private register bitfield definitions for the STM32F750 Ethernet peripheral.
 *
 * @details
 * Register offsets and bitfield descriptions are based on the supplied Ethernet register
 * map workbook. Within each register structure, fields follow the workbook order (LSB first).
 *
 * @warning C bitfield layout is implementation-defined. These definitions assume the target
 * compiler and ABI place the first declared bitfield at the least-significant bits of a
 * 32-bit word. Verify this assumption for the selected compiler and ABI before using these
 * structures for memory-mapped peripheral access.
 */

#ifndef ETH_REG_PRIV_H
#define ETH_REG_PRIV_H

#include <stdint.h>


/** @name Ethernet Register Offsets
 * @{
 */

/** @brief Base address of the Ethernet peripheral. */
#define ETH_BASE_ADDR   (0x40028000UL)

/** @brief Ethernet MAC configuration register (ETH_MACCR). */
#define ETH_MACCR_OFFSET 0x0000U
/** @brief Ethernet MAC frame filter register (ETH_MACFFR). */
#define ETH_MACFFR_OFFSET 0x0004U
/** @brief Ethernet MAC hash table high register (ETH_MACHTHR). */
#define ETH_MACHTHR_OFFSET 0x0008U
/** @brief Ethernet MAC hash table low register (ETH_MACHTLR). */
#define ETH_MACHTLR_OFFSET 0x000CU
/** @brief Ethernet MAC MII address register (ETH_MACMIIAR). */
#define ETH_MACMIIAR_OFFSET 0x0010U
/** @brief Ethernet MAC MII data register (ETH_MACMIIDR). */
#define ETH_MACMIIDR_OFFSET 0x0014U
/** @brief Ethernet MAC flow control register (ETH_MACFCR). */
#define ETH_MACFCR_OFFSET 0x0018U
/** @brief Ethernet MAC VLAN tag register (ETH_MACVLANTR). */
#define ETH_MACVLANTR_OFFSET 0x001CU
/** @brief Ethernet MAC remote wakeup frame filter register (ETH_MACRWUFFR). */
#define ETH_MACRWUFFR_OFFSET 0x0028U
/** @brief Ethernet MAC PMT control and status register (ETH_MACPMTCSR). */
#define ETH_MACPMTCSR_OFFSET 0x002CU
/** @brief RM0385 Ethernet MAC debug register (ETH_MACDBGR). */
#define ETH_MACDBGR_OFFSET 0x0034U
/** @brief Ethernet MAC interrupt status register (ETH_MACSR). */
#define ETH_MACSR_OFFSET 0x0038U
/** @brief Ethernet MAC interrupt mask register (ETH_MACIMR). */
#define ETH_MACIMR_OFFSET 0x003CU
/** @brief Ethernet MAC address 0 high register (ETH_MACA0HR). */
#define ETH_MACA0HR_OFFSET 0x0040U
/** @brief Ethernet MAC address 0 low register (ETH_MACA0LR). */
#define ETH_MACA0LR_OFFSET 0x0044U
/** @brief Ethernet MAC address 1 high register (ETH_MACA1HR). */
#define ETH_MACA1HR_OFFSET 0x0048U
/** @brief Ethernet MAC address1 low register (ETH_MACA1LR). */
#define ETH_MACA1LR_OFFSET 0x004CU
/** @brief Ethernet MAC address 2 high register (ETH_MACA2HR). */
#define ETH_MACA2HR_OFFSET 0x0050U
/** @brief Ethernet MAC address 2 low register (ETH_MACA2LR). */
#define ETH_MACA2LR_OFFSET 0x0054U
/** @brief RM0385 Ethernet MAC address 3 high register (ETH_MACA3HR). */
#define ETH_MACA3HR_OFFSET 0x0058U
/** @brief Ethernet MAC address 3 low register (ETH_MACA3LR). */
#define ETH_MACA3LR_OFFSET 0x005CU
/** @brief Ethernet MMC control register (ETH_MMCCR). */
#define ETH_MMCCR_OFFSET 0x0100U
/** @brief Ethernet MMC receive interrupt register (ETH_MMCRIR). */
#define ETH_MMCRIR_OFFSET 0x0104U
/** @brief Ethernet MMC transmit interrupt register (ETH_MMCTIR). */
#define ETH_MMCTIR_OFFSET 0x0108U
/** @brief Ethernet MMC receive interrupt mask register (ETH_MMCRIMR). */
#define ETH_MMCRIMR_OFFSET 0x010CU
/** @brief Ethernet MMC transmit interrupt mask register (ETH_MMCTIMR). */
#define ETH_MMCTIMR_OFFSET 0x0110U
/** @brief Ethernet MMC transmitted good frames after a single collision counter register (ETH_MMCTGFSCCR). */
#define ETH_MMCTGFSCCR_OFFSET 0x014CU
/** @brief Ethernet MMC transmitted good frames after more than a single collision counter register (ETH_MMCTGFMSCCR). */
#define ETH_MMCTGFMSCCR_OFFSET 0x0150U
/** @brief Ethernet MMC transmitted good frames counter register (ETH_MMCTGFCR). */
#define ETH_MMCTGFCR_OFFSET 0x0168U
/** @brief Ethernet MMC received frames with CRC error counter register (ETH_MMCRFCECR). */
#define ETH_MMCRFCECR_OFFSET 0x0194U
/** @brief Ethernet MMC received frames with alignment error counter register (ETH_MMCRFAECR). */
#define ETH_MMCRFAECR_OFFSET 0x0198U
/** @brief Ethernet MMC received good unicast frames counter register (ETH_MMCRGUFCR). */
#define ETH_MMCRGUFCR_OFFSET 0x01C4U
/** @brief Ethernet PTP time stamp control register (ETH_PTPTSCR). */
#define ETH_PTPTSCR_OFFSET 0x0700U
/** @brief Ethernet PTP subsecond increment register (ETH_PTPSSIR). */
#define ETH_PTPSSIR_OFFSET 0x0704U
/** @brief Ethernet PTP time stamp high register (ETH_PTPTSHR). */
#define ETH_PTPTSHR_OFFSET 0x0708U
/** @brief Ethernet PTP time stamp low register (ETH_PTPTSLR). */
#define ETH_PTPTSLR_OFFSET 0x070CU
/** @brief Ethernet PTP time stamp high update register (ETH_PTPTSHUR). */
#define ETH_PTPTSHUR_OFFSET 0x0710U
/** @brief RM0385 Ethernet PTP time stamp low update register (ETH_PTPTSLUR). */
#define ETH_PTPTSLUR_OFFSET 0x0714U
/** @brief Ethernet PTP time stamp addend register (ETH_PTPTSAR). */
#define ETH_PTPTSAR_OFFSET 0x0718U
/** @brief Ethernet PTP target time high register (ETH_PTPTTHR). */
#define ETH_PTPTTHR_OFFSET 0x071CU
/** @brief Ethernet PTP target time low register (ETH_PTPTTLR). */
#define ETH_PTPTTLR_OFFSET 0x0720U
/** @brief Ethernet PTP time stamp status register (ETH_PTPTSSR). */
#define ETH_PTPTSSR_OFFSET 0x0728U
/** @brief Ethernet PTP PPS control register (ETH_PTPPPSCR). */
#define ETH_PTPPPSCR_OFFSET 0x072CU
/** @brief Ethernet DMA bus mode register (ETH_DMABMR). */
#define ETH_DMABMR_OFFSET 0x1000U
/** @brief Ethernet DMA transmit poll demand register (ETH_DMATPDR). */
#define ETH_DMATPDR_OFFSET 0x1004U
/** @brief EHERNET DMA receive poll demand register (ETH_DMARPDR). */
#define ETH_DMARPDR_OFFSET 0x1008U
/** @brief Ethernet DMA receive descriptor list address register (ETH_DMARDLAR). */
#define ETH_DMARDLAR_OFFSET 0x100CU
/** @brief Ethernet DMA transmit descriptor list address register (ETH_DMATDLAR). */
#define ETH_DMATDLAR_OFFSET 0x1010U
/** @brief Ethernet DMA status register (ETH_DMASR). */
#define ETH_DMASR_OFFSET 0x1014U
/** @brief Ethernet DMA operation mode register (ETH_DMAOMR). */
#define ETH_DMAOMR_OFFSET 0x1018U
/** @brief Ethernet DMA interrupt enable register (ETH_DMAIER). */
#define ETH_DMAIER_OFFSET 0x101CU
/** @brief Ethernet DMA missed frame and buffer overflow counter register (ETH_DMAMFBOCR). */
#define ETH_DMAMFBOCR_OFFSET 0x1020U
/** @brief Ethernet DMA receive status watchdog timer register (ETH_DMARSWTR). */
#define ETH_DMARSWTR_OFFSET 0x1024U
/** @brief Ethernet DMA current host transmit descriptor register (ETH_DMACHTDR). */
#define ETH_DMACHTDR_OFFSET 0x1048U
/** @brief Ethernet DMA current host receive descriptor register (ETH_DMACHRDR). */
#define ETH_DMACHRDR_OFFSET 0x104CU
/** @brief Ethernet DMA current host transmit buffer address register (ETH_DMACHTBAR). */
#define ETH_DMACHTBAR_OFFSET 0x1050U
/** @brief Ethernet DMA current host receive buffer address register (ETH_DMACHRBAR). */
#define ETH_DMACHRBAR_OFFSET 0x1054U

/** @} */

/** @name Ethernet Register Bitfield Structures
 * @{
 */

/** @brief Ethernet MAC configuration register (ETH_MACCR). */
typedef struct
{
    uint32_t Reserved0       : 2;  /**< Reserved */
    uint32_t RE              : 1;  /**< Receiver enable */
    uint32_t TE              : 1;  /**< Transmitter enable */
    uint32_t DC              : 1;  /**< Deferral check */
    uint32_t BL              : 2;  /**< Back-off limit */
    uint32_t APCS            : 1;  /**< Automatic pad/CRC stripping */
    uint32_t Reserved1       : 1;  /**< Reserved */
    uint32_t RD              : 1;  /**< Retry disable */
    uint32_t IPCO            : 1;  /**< IPv4 checksum offload */
    uint32_t DM              : 1;  /**< Duplex mode */
    uint32_t LM              : 1;  /**< Loopback mode */
    uint32_t ROD             : 1;  /**< Receive own disable */
    uint32_t FES             : 1;  /**< Fast Ethernet speed */
    uint32_t Reserved2       : 1;  /**< Reserved */
    uint32_t CSD             : 1;  /**< Carrier sense disable */
    uint32_t IFG             : 3;  /**< Interframe gap */
    uint32_t Reserved3       : 2;  /**< Reserved */
    uint32_t JD              : 1;  /**< Jabber disable */
    uint32_t WD              : 1;  /**< Watchdog disable */
    uint32_t Reserved4       : 1;  /**< Reserved */
    uint32_t CSTF            : 1;  /**< CRC stripping for Type frames */
    uint32_t Reserved5       : 6;  /**< Reserved */
} ETH_MACCR_t;

/** @brief Ethernet MAC frame filter register (ETH_MACFFR). */
typedef struct
{
    uint32_t PM              : 1;  /**< Promiscuous mode */
    uint32_t HU              : 1;  /**< Hash unicast */
    uint32_t HM              : 1;  /**< Hash multicast */
    uint32_t DAIF            : 1;  /**< Destination address inverse filtering */
    uint32_t PAM             : 1;  /**< Pass all multicast */
    uint32_t BFD             : 1;  /**< Broadcast frames disable */
    uint32_t PCF             : 2;  /**< Pass control frames */
    uint32_t SAIF            : 1;  /**< Source address inverse filtering */
    uint32_t SAF             : 1;  /**< Source address filter */
    uint32_t HPF             : 1;  /**< Hash or perfect filter */
    uint32_t Reserved        : 20;  /**< Reserved */
    uint32_t RA              : 1;  /**< Receive all */
} ETH_MACFFR_t;

/** @brief Ethernet MAC hash table high register (ETH_MACHTHR). */
typedef struct
{
    uint32_t HTH             : 32;  /**< Hash table high */
} ETH_MACHTHR_t;

/** @brief Ethernet MAC hash table low register (ETH_MACHTLR). */
typedef struct
{
    uint32_t HTL             : 32;  /**< Hash table low */
} ETH_MACHTLR_t;

/** @brief Ethernet MAC MII address register (ETH_MACMIIAR). */
typedef struct
{
    uint32_t MB              : 1;  /**< MII busy */
    uint32_t MW              : 1;  /**< MII write */
    uint32_t CR              : 3;  /**< Clock range */
    uint32_t Reserved0       : 1;  /**< Reserved */
    uint32_t MR              : 5;  /**< MII register */
    uint32_t PA              : 5;  /**< PHY address */
    uint32_t Reserved1       : 16;  /**< Reserved */
} ETH_MACMIIAR_t;

/** @brief Ethernet MAC MII data register (ETH_MACMIIDR). */
typedef struct
{
    uint32_t MD              : 16;  /**< MII data */
    uint32_t Reserved        : 16;  /**< Reserved */
} ETH_MACMIIDR_t;

/** @brief Ethernet MAC flow control register (ETH_MACFCR). */
typedef struct
{
    uint32_t FCB_BPA         : 1;  /**< Flow control busy/back pressure activate */
    uint32_t TFCE            : 1;  /**< Transmit flow control enable */
    uint32_t RFCE            : 1;  /**< Receive flow control enable */
    uint32_t UPFD            : 1;  /**< Unicast pause frame detect */
    uint32_t PLT             : 2;  /**< Pause low threshold */
    uint32_t Reserved0       : 1;  /**< Reserved */
    uint32_t ZQPD            : 1;  /**< Zero-quanta pause disable */
    uint32_t Reserved1       : 8;  /**< Reserved */
    uint32_t PT              : 16;  /**< Pause time */
} ETH_MACFCR_t;

/** @brief Ethernet MAC VLAN tag register (ETH_MACVLANTR). */
typedef struct
{
    uint32_t VLANTI          : 16;  /**< VLAN tag identifier (for receive frames) */
    uint32_t VLANTC          : 1;  /**< 12-bit VLAN tag comparison */
    uint32_t Reserved        : 15;  /**< Reserved */
} ETH_MACVLANTR_t;

/** @brief Ethernet MAC remote wakeup frame filter register (ETH_MACRWUFFR). */
typedef struct
{
    uint32_t MACRWUFFR       : 32;  /**< Remote wake-up frame filter */
} ETH_MACRWUFFR_t;

/** @brief Ethernet MAC PMT control and status register (ETH_MACPMTCSR). */
typedef struct
{
    uint32_t PD              : 1;  /**< Power down */
    uint32_t MPE             : 1;  /**< Magic Packet enable */
    uint32_t WFE             : 1;  /**< Wakeup frame enable */
    uint32_t Reserved0       : 2;  /**< Reserved */
    uint32_t MPR             : 1;  /**< Magic packet received */
    uint32_t WFR             : 1;  /**< Wakeup frame received */
    uint32_t Reserved1       : 2;  /**< Reserved */
    uint32_t GU              : 1;  /**< Global unicast */
    uint32_t Reserved2       : 21;  /**< Reserved */
    uint32_t WFFRPR          : 1;  /**< Wakeup frame filter register pointer reset */
} ETH_MACPMTCSR_t;

/** @brief RM0385 Ethernet MAC debug register (ETH_MACDBGR). */
typedef struct
{
    uint32_t MMRPEA          : 1;  /**< MAC MII receive protocol engine active */
    uint32_t MSFRWCS         : 2;  /**< MAC small FIFO read / write controllers status */
    uint32_t Reserved0       : 1;  /**< Reserved */
    uint32_t RFWRA           : 1;  /**< Rx FIFO write controller active */
    uint32_t RFRCS           : 2;  /**< Rx FIFO read controller status */
    uint32_t Reserved1       : 1;  /**< Reserved */
    uint32_t RFFL            : 2;  /**< Rx FIFO fill level */
    uint32_t Reserved2       : 6;  /**< Reserved */
    uint32_t MMTEA           : 1;  /**< MAC MII transmit engine active */
    uint32_t MTFCS           : 2;  /**< MAC transmit frame controller status */
    uint32_t MTP             : 1;  /**< MAC transmitter in pause */
    uint32_t TFRS            : 2;  /**< Tx FIFO read status */
    uint32_t TFWA            : 1;  /**< Tx FIFO write active */
    uint32_t Reserved3       : 1;  /**< Reserved */
    uint32_t TFNE            : 1;  /**< Tx FIFO not empty */
    uint32_t TFF             : 1;  /**< Tx FIFO full */
    uint32_t Reserved4       : 6;  /**< Reserved */
} ETH_MACDBGR_t;

/** @brief Ethernet MAC interrupt status register (ETH_MACSR). */
typedef struct
{
    uint32_t Reserved0       : 3;  /**< Reserved */
    uint32_t PMTS            : 1;  /**< PMT status */
    uint32_t MMCS            : 1;  /**< MMC status */
    uint32_t MMCRS           : 1;  /**< MMC receive status */
    uint32_t MMCTS           : 1;  /**< MMC transmit status */
    uint32_t Reserved1       : 2;  /**< Reserved */
    uint32_t TSTS            : 1;  /**< Time stamp trigger status */
    uint32_t Reserved2       : 22;  /**< Reserved (width expanded from 6 to 22 to cover the 32-bit register) [width adjusted from spreadsheet] */
} ETH_MACSR_t;

/** @brief Ethernet MAC interrupt mask register (ETH_MACIMR). */
typedef struct
{
    uint32_t Reserved0       : 3;  /**< Reserved */
    uint32_t PMTIM           : 1;  /**< PMT interrupt mask */
    uint32_t Reserved1       : 5;  /**< Reserved */
    uint32_t TSTIM           : 1;  /**< Time stamp trigger interrupt mask */
    uint32_t Reserved2       : 22;  /**< Reserved (width expanded from 6 to 22 to cover the 32-bit register) [width adjusted from spreadsheet] */
} ETH_MACIMR_t;

/** @brief Ethernet MAC address 0 high register (ETH_MACA0HR). */
typedef struct
{
    uint32_t MACA0H          : 16;  /**< MAC address0 high [47:32] */
    uint32_t Reserved        : 15;  /**< Reserved */
    uint32_t MO              : 1;  /**< Always 1 */
} ETH_MACA0HR_t;

/** @brief Ethernet MAC address 0 low register (ETH_MACA0LR). */
typedef struct
{
    uint32_t MACA0L          : 32;  /**< MAC address0 low [31:0] */
} ETH_MACA0LR_t;

/** @brief Ethernet MAC address 1 high register (ETH_MACA1HR). */
typedef struct
{
    uint32_t MACA1H          : 16;  /**< MAC address1 high [47:32] */
    uint32_t Reserved        : 8;  /**< Reserved */
    uint32_t MBC             : 6;  /**< Mask byte control */
    uint32_t SA              : 1;  /**< Source address */
    uint32_t AE              : 1;  /**< Address enable */
} ETH_MACA1HR_t;

/** @brief Ethernet MAC address1 low register (ETH_MACA1LR). */
typedef struct
{
    uint32_t MACA1L          : 32;  /**< MAC address1 low [31:0] */
} ETH_MACA1LR_t;

/** @brief Ethernet MAC address 2 high register (ETH_MACA2HR). */
typedef struct
{
    uint32_t MACA2H          : 16;  /**< MAC address2 high [47:32] */
    uint32_t Reserved        : 8;  /**< Reserved gap omitted in Excel; bits [23:16] [inserted to preserve bit positions] */
    uint32_t MBC             : 6;  /**< Mask byte control */
    uint32_t SA              : 1;  /**< Source address */
    uint32_t AE              : 1;  /**< Address enable */
} ETH_MACA2HR_t;

/** @brief Ethernet MAC address 2 low register (ETH_MACA2LR). */
typedef struct
{
    uint32_t MACA2L          : 32;  /**< MAC address2 low [31:0] */
} ETH_MACA2LR_t;

/** @brief RM0385 Ethernet MAC address 3 high register (ETH_MACA3HR). */
typedef struct
{
    uint32_t MACA3H          : 16;  /**< MAC address3 high [47:32] */
    uint32_t Reserved        : 8;  /**< Reserved */
    uint32_t MBC             : 6;  /**< Mask byte control */
    uint32_t SA              : 1;  /**< Source address */
    uint32_t AE              : 1;  /**< Address enable */
} ETH_MACA3HR_t;

/** @brief Ethernet MAC address 3 low register (ETH_MACA3LR). */
typedef struct
{
    uint32_t MACA3L          : 32;  /**< MAC address3 low [31:0] */
} ETH_MACA3LR_t;

/** @brief Ethernet MMC control register (ETH_MMCCR). */
typedef struct
{
    uint32_t CR              : 1;  /**< Counter reset */
    uint32_t CSR             : 1;  /**< Counter stop rollover */
    uint32_t ROR             : 1;  /**< Reset on read */
    uint32_t MCF             : 1;  /**< MMC counter freeze */
    uint32_t MCP             : 1;  /**< MMC counter preset */
    uint32_t MCFHP           : 1;  /**< MMC counter Full-Half preset */
    uint32_t Reserved        : 26;  /**< Reserved */
} ETH_MMCCR_t;

/** @brief Ethernet MMC receive interrupt register (ETH_MMCRIR). */
typedef struct
{
    uint32_t Reserved0       : 5;  /**< Reserved */
    uint32_t RFCES           : 1;  /**< Received frames CRC error status */
    uint32_t RFAES           : 1;  /**< Received frames alignment error status */
    uint32_t Reserved1       : 10;  /**< Reserved */
    uint32_t RGUFS           : 1;  /**< Received Good Unicast Frames Status */
    uint32_t Reserved2       : 14;  /**< Reserved */
} ETH_MMCRIR_t;

/** @brief Ethernet MMC transmit interrupt register (ETH_MMCTIR). */
typedef struct
{
    uint32_t Reserved0       : 14;  /**< Reserved */
    uint32_t TGFSCS          : 1;  /**< Transmitted good frames single collision status */
    uint32_t TGFMSCS         : 1;  /**< Transmitted good frames more than a single collision status */
    uint32_t Reserved1       : 5;  /**< Reserved */
    uint32_t TGFS            : 1;  /**< Transmitted good frames status */
    uint32_t Reserved2       : 10;  /**< Reserved */
} ETH_MMCTIR_t;

/** @brief Ethernet MMC receive interrupt mask register (ETH_MMCRIMR). */
typedef struct
{
    uint32_t Reserved0       : 5;  /**< Reserved */
    uint32_t RFCEM           : 1;  /**< Received frame CRC error mask */
    uint32_t RFAEM           : 1;  /**< Received frames alignment error mask */
    uint32_t Reserved1       : 10;  /**< Reserved */
    uint32_t RGUFM           : 1;  /**< Received good unicast frames mask */
    uint32_t Reserved2       : 14;  /**< Reserved */
} ETH_MMCRIMR_t;

/** @brief Ethernet MMC transmit interrupt mask register (ETH_MMCTIMR). */
typedef struct
{
    uint32_t Reserved0       : 14;  /**< Reserved */
    uint32_t TGFSCM          : 1;  /**< Transmitted good frames single collision mask */
    uint32_t TGFMSCM         : 1;  /**< Transmitted good frames more than a single collision mask */
    uint32_t Reserved1       : 5;  /**< Reserved */
    uint32_t TGFM            : 1;  /**< Transmitted good frames mask */
    uint32_t Reserved2       : 10;  /**< Reserved */
} ETH_MMCTIMR_t;

/** @brief Ethernet MMC transmitted good frames after a single collision counter register (ETH_MMCTGFSCCR). */
typedef struct
{
    uint32_t TGFSCC          : 32;  /**< Transmitted good frames after a single collision counter */
} ETH_MMCTGFSCCR_t;

/** @brief Ethernet MMC transmitted good frames after more than a single collision counter register (ETH_MMCTGFMSCCR). */
typedef struct
{
    uint32_t TGFMSCC         : 32;  /**< Transmitted good frames after more than a single collision counter */
} ETH_MMCTGFMSCCR_t;

/** @brief Ethernet MMC transmitted good frames counter register (ETH_MMCTGFCR). */
typedef struct
{
    uint32_t TGFC            : 32;  /**< Transmitted good frames counter */
} ETH_MMCTGFCR_t;

/** @brief Ethernet MMC received frames with CRC error counter register (ETH_MMCRFCECR). */
typedef struct
{
    uint32_t RFCEC           : 32;  /**< Received frames with CRC error counter */
} ETH_MMCRFCECR_t;

/** @brief Ethernet MMC received frames with alignment error counter register (ETH_MMCRFAECR). */
typedef struct
{
    uint32_t RFAEC           : 32;  /**< Received frames with alignment error counter */
} ETH_MMCRFAECR_t;

/** @brief Ethernet MMC received good unicast frames counter register (ETH_MMCRGUFCR). */
typedef struct
{
    uint32_t RGUFC           : 32;  /**< Received good unicast frames counter */
} ETH_MMCRGUFCR_t;

/** @brief Ethernet PTP time stamp control register (ETH_PTPTSCR). */
typedef struct
{
    uint32_t TSE             : 1;  /**< Time stamp enable */
    uint32_t TSFCU           : 1;  /**< Time stamp fine or coarse update */
    uint32_t TSSTI           : 1;  /**< Time stamp system time initialize */
    uint32_t TSSTU           : 1;  /**< Time stamp system time update */
    uint32_t TSITE           : 1;  /**< Time stamp interrupt trigger enable */
    uint32_t TSARU           : 1;  /**< Time stamp addend register update */
    uint32_t Reserved0       : 2;  /**< Reserved */
    uint32_t TSSARFE         : 1;  /**< Time stamp snapshot for all received frames enable */
    uint32_t TSSSR           : 1;  /**< Time stamp subsecond rollover: digital or binary rollover control */
    uint32_t TSPTPPSV2E      : 1;  /**< Time stamp PTP packet snooping for version2 format enable */
    uint32_t TSSPTPOEFE      : 1;  /**< Time stamp snapshot for PTP over ethernet frames enable */
    uint32_t TSSIPV6FE       : 1;  /**< Time stamp snapshot for IPv6 frames enable */
    uint32_t TSSIPV4FE       : 1;  /**< Time stamp snapshot for IPv4 frames enable */
    uint32_t TSSEME          : 1;  /**< Time stamp snapshot for event message enable */
    uint32_t TSSMRME         : 1;  /**< Time stamp snapshot for message relevant to master enable */
    uint32_t TSCNT           : 2;  /**< Time stamp clock node type */
    uint32_t TSPFFMAE        : 1;  /**< Time stamp PTP frame filtering MAC address enable */
    uint32_t Reserved1       : 13;  /**< Reserved */
} ETH_PTPTSCR_t;

/** @brief Ethernet PTP subsecond increment register (ETH_PTPSSIR). */
typedef struct
{
    uint32_t STSSI           : 8;  /**< System time subsecond increment */
    uint32_t Reserved        : 24;  /**< Reserved */
} ETH_PTPSSIR_t;

/** @brief Ethernet PTP time stamp high register (ETH_PTPTSHR). */
typedef struct
{
    uint32_t STS             : 32;  /**< System time second */
} ETH_PTPTSHR_t;

/** @brief Ethernet PTP time stamp low register (ETH_PTPTSLR). */
typedef struct
{
    uint32_t STSS            : 31;  /**< System time subseconds */
    uint32_t STPNS           : 1;  /**< System time positive or negative sign */
} ETH_PTPTSLR_t;

/** @brief Ethernet PTP time stamp high update register (ETH_PTPTSHUR). */
typedef struct
{
    uint32_t TSUS            : 32;  /**< Time stamp update second */
} ETH_PTPTSHUR_t;

/** @brief RM0385 Ethernet PTP time stamp low update register (ETH_PTPTSLUR). */
typedef struct
{
    uint32_t TSUSS           : 31;  /**< Time stamp update subseconds */
    uint32_t TSUPNS          : 1;  /**< Time stamp update positive or negative sign */
} ETH_PTPTSLUR_t;

/** @brief Ethernet PTP time stamp addend register (ETH_PTPTSAR). */
typedef struct
{
    uint32_t TSA             : 32;  /**< Time stamp addend */
} ETH_PTPTSAR_t;

/** @brief Ethernet PTP target time high register (ETH_PTPTTHR). */
typedef struct
{
    uint32_t TTSH            : 32;  /**< Target time stamp high */
} ETH_PTPTTHR_t;

/** @brief Ethernet PTP target time low register (ETH_PTPTTLR). */
typedef struct
{
    uint32_t TTSL            : 32;  /**< Target time stamp low */
} ETH_PTPTTLR_t;

/** @brief Ethernet PTP time stamp status register (ETH_PTPTSSR). */
typedef struct
{
    uint32_t TSSO            : 1;  /**< Time stamp second overflow */
    uint32_t TSTTR           : 1;  /**< Time stamp target time reached */
    uint32_t Reserved        : 30;  /**< Reserved */
} ETH_PTPTSSR_t;

/** @brief Ethernet PTP PPS control register (ETH_PTPPPSCR). */
typedef struct
{
    uint32_t PPSFREQ         : 4;  /**< PPS frequency selection */
    uint32_t Reserved        : 28;  /**< Reserved */
} ETH_PTPPPSCR_t;

/** @brief Ethernet DMA bus mode register (ETH_DMABMR). */
typedef struct
{
    uint32_t SR              : 1;  /**< Software reset */
    uint32_t DA              : 1;  /**< DMA arbitration */
    uint32_t DSL             : 5;  /**< Descriptor skip length */
    uint32_t EDFE            : 1;  /**< Enhanced descriptor format enable */
    uint32_t PBL             : 6;  /**< Programmable burst length */
    uint32_t PM              : 2;  /**< Rx Tx priority ratio */
    uint32_t FB              : 1;  /**< Fixed burst */
    uint32_t RDP             : 6;  /**< Rx DMA PBL */
    uint32_t USP             : 1;  /**< Use separate PBL */
    uint32_t FPM             : 1;  /**< 4xPBL mode */
    uint32_t AAB             : 1;  /**< Address-aligned beats */
    uint32_t MB              : 1;  /**< Mixed burst */
    uint32_t Reserved        : 5;  /**< Reserved */
} ETH_DMABMR_t;

/** @brief Ethernet DMA transmit poll demand register (ETH_DMATPDR). */
typedef struct
{
    uint32_t TPD             : 32;  /**< Transmit poll demand */
} ETH_DMATPDR_t;

/** @brief EHERNET DMA receive poll demand register (ETH_DMARPDR). */
typedef struct
{
    uint32_t RPD             : 32;  /**< Receive poll demand */
} ETH_DMARPDR_t;

/** @brief Ethernet DMA receive descriptor list address register (ETH_DMARDLAR). */
typedef struct
{
    uint32_t SRL             : 32;  /**< Start of receive list */
} ETH_DMARDLAR_t;

/** @brief Ethernet DMA transmit descriptor list address register (ETH_DMATDLAR). */
typedef struct
{
    uint32_t STL             : 32;  /**< Start of transmit list */
} ETH_DMATDLAR_t;

/** @brief Ethernet DMA status register (ETH_DMASR). */
typedef struct
{
    uint32_t TS              : 1;  /**< Transmit status */
    uint32_t TPSS            : 1;  /**< Transmit process stopped status */
    uint32_t TBUS            : 1;  /**< Transmit buffer unavailable status */
    uint32_t TJTS            : 1;  /**< Transmit jabber timeout status */
    uint32_t ROS             : 1;  /**< Receive overflow status */
    uint32_t TUS             : 1;  /**< Transmit underflow status */
    uint32_t RS              : 1;  /**< Receive status */
    uint32_t RBUS            : 1;  /**< Receive buffer unavailable status */
    uint32_t RPSS            : 1;  /**< Receive process stopped status */
    uint32_t RWTS            : 1;  /**< Receive watchdog timeout status */
    uint32_t ETS             : 1;  /**< Early transmit status */
    uint32_t Reserved0       : 2;  /**< Reserved */
    uint32_t FBES            : 1;  /**< Fatal bus error status */
    uint32_t ERS             : 1;  /**< Early receive status */
    uint32_t AIS             : 1;  /**< Abnormal interrupt summary */
    uint32_t NIS             : 1;  /**< Normal interrupt summary */
    uint32_t RPS             : 3;  /**< Receive process state */
    uint32_t TPS             : 3;  /**< Transmit process state */
    uint32_t Error           : 1;  /**< DMA data transfer error type */
    uint32_t EBS             : 3;  /**< Error bits status */
    uint32_t Reserved1       : 1;  /**< Reserved */
    uint32_t MMCS            : 1;  /**< MMC status */
    uint32_t PMTS            : 1;  /**< PMT status */
    uint32_t TSTS            : 1;  /**< Time stamp trigger status */
    uint32_t Reserved2       : 1;  /**< Reserved (width reduced from 2 to 1 because the Excel widths summed to 33 bits) [width adjusted from spreadsheet] */
} ETH_DMASR_t;

/** @brief Ethernet DMA operation mode register (ETH_DMAOMR). */
typedef struct
{
    uint32_t Reserved0       : 1;  /**< Reserved */
    uint32_t SR              : 1;  /**< Start/stop receive */
    uint32_t OSF             : 1;  /**< Operate on second frame */
    uint32_t RTC             : 2;  /**< Receive threshold control */
    uint32_t Reserved1       : 1;  /**< Reserved */
    uint32_t FUGF            : 1;  /**< Forward undersized good frames */
    uint32_t FEF             : 1;  /**< Forward error frames */
    uint32_t Reserved2       : 5;  /**< Reserved */
    uint32_t ST              : 1;  /**< Start/stop transmission */
    uint32_t TTC             : 3;  /**< Transmit threshold control */
    uint32_t Reserved3       : 3;  /**< Reserved */
    uint32_t FTF             : 1;  /**< Flush transmit FIFO */
    uint32_t TSF             : 1;  /**< Transmit store and forward */
    uint32_t Reserved4       : 2;  /**< Reserved */
    uint32_t DFRF            : 1;  /**< Disable flushing of received frames */
    uint32_t RSF             : 1;  /**< Receive store and forward */
    uint32_t DTCEFD          : 1;  /**< Dropping of TCP/IP checksum error frames disable */
    uint32_t Reserved5       : 5;  /**< Reserved */
} ETH_DMAOMR_t;

/** @brief Ethernet DMA interrupt enable register (ETH_DMAIER). */
typedef struct
{
    uint32_t TIE             : 1;  /**< Transmit interrupt enable */
    uint32_t TPSIE           : 1;  /**< Transmit process stopped interrupt enable */
    uint32_t TBUIE           : 1;  /**< Transmit buffer unavailable interrupt enable */
    uint32_t TJTIE           : 1;  /**< Transmit jabber timeout interrupt enable */
    uint32_t ROIE            : 1;  /**< Overflow interrupt enable */
    uint32_t TUIE            : 1;  /**< Underflow interrupt enable */
    uint32_t RIE             : 1;  /**< Receive interrupt enable */
    uint32_t RBUIE           : 1;  /**< Receive buffer unavailable interrupt enable */
    uint32_t RPSIE           : 1;  /**< Receive process stopped interrupt enable */
    uint32_t RWTIE           : 1;  /**< Receive watchdog timeout interrupt enable */
    uint32_t ETIE            : 1;  /**< Early transmit interrupt enable */
    uint32_t Reserved0       : 2;  /**< Reserved */
    uint32_t FBEIE           : 1;  /**< Fatal bus error interrupt enable */
    uint32_t ERIE            : 1;  /**< Early receive interrupt enable */
    uint32_t AISE            : 1;  /**< Abnormal interrupt summary enable */
    uint32_t NISE            : 1;  /**< Normal interrupt summary enable */
    uint32_t Reserved1       : 15;  /**< Reserved */
} ETH_DMAIER_t;

/** @brief Ethernet DMA missed frame and buffer overflow counter register (ETH_DMAMFBOCR). */
typedef struct
{
    uint32_t MFC             : 16;  /**< Missed frames by the controller */
    uint32_t OMFC            : 1;  /**< Overflow bit for missed frame counter */
    uint32_t MFA             : 11;  /**< Missed frames by the application */
    uint32_t OFOC            : 1;  /**< Overflow bit for FIFO overflow counter */
    uint32_t Reserved        : 3;  /**< Reserved */
} ETH_DMAMFBOCR_t;

/** @brief Ethernet DMA receive status watchdog timer register (ETH_DMARSWTR). */
typedef struct
{
    uint32_t RSWTC           : 8;  /**< Receive status (RS) watchdog timer count */
    uint32_t Reserved        : 24;  /**< Reserved */
} ETH_DMARSWTR_t;

/** @brief Ethernet DMA current host transmit descriptor register (ETH_DMACHTDR). */
typedef struct
{
    uint32_t HTDAP           : 32;  /**< Host transmit descriptor address pointer */
} ETH_DMACHTDR_t;

/** @brief Ethernet DMA current host receive descriptor register (ETH_DMACHRDR). */
typedef struct
{
    uint32_t HRDAP           : 32;  /**< Host receive descriptor address pointer */
} ETH_DMACHRDR_t;

/** @brief Ethernet DMA current host transmit buffer address register (ETH_DMACHTBAR). */
typedef struct
{
    uint32_t HTBAP           : 32;  /**< Host transmit buffer address pointer */
} ETH_DMACHTBAR_t;

/** @brief Ethernet DMA current host receive buffer address register (ETH_DMACHRBAR). */
typedef struct
{
    uint32_t HRBAP           : 32;  /**< Host receive buffer address pointer */
} ETH_DMACHRBAR_t;

/** @} */

/** @name Ethernet Transmit Descriptor Structures
 * @{
 */

/** @brief Transmit descriptor word 0 status and control fields. */
typedef struct
{
    uint32_t DB:1;  /**< Defer bit */
    uint32_t UF:1;  /**< Underflow error */
    uint32_t ED:1;  /**< Excessive deferral */
    uint32_t CC:1;  /**< Collision count */
    uint32_t VF:1;  /**< VLAN frame */
    uint32_t EC:1;  /**< Excessive collision */
    uint32_t LCO:1;  /**< Late collision */
    uint32_t NC:1;  /**< No carrier */
    uint32_t LCA:1;  /**< Loss of carrier */
    uint32_t IPE:1;  /**< IP payload error */
    uint32_t FF:1;  /**< Frame flushed */
    uint32_t JT:1;  /**< Jabber timeout */
    uint32_t ES:1;  /**< Error summary */
    uint32_t IHE:1;  /**< IP header error */
    uint32_t TTSS:1;  /**< Transmit timestamp status */
    uint32_t Reserved:2;  /**< Reserved */
    uint32_t TCH:1;  /**< Second address chained */
    uint32_t TER:1;  /**< Transmit end of ring */
    uint32_t CIC:2;  /**< Checksum insertion control */
    uint32_t Reserved1:1;  /**< Reserved */
    uint32_t TTSE:1;  /**< Transmit timestamp enable */
    uint32_t DP:1;  /**< Disable pad */
    uint32_t DC:1;  /**< Disable CRC */
    uint32_t FS:1;  /**< First segment */
    uint32_t LS:1;  /**< Last segment */
    uint32_t IC:1;  /**< Interrupt on completion */
    uint32_t OWN:1;  /**< Own bit */
} ETH_TDES0_t;

/** @brief Transmit descriptor word 1 buffer size fields. */
typedef struct
{
    uint32_t TBS1:13;  /**< Transmit buffer 1 size */
    uint32_t res1:3;  /**< Reserved */
    uint32_t TBS2:13;  /**< Transmit buffer 2 size */
    uint32_t res2:3;  /**< Reserved */
} ETH_TDES1_t;

/** @brief Transmit descriptor word 2 buffer 1 address. */
typedef struct
{
    uint32_t TBAP1;
} ETH_TDES2_t;

/** @brief Transmit descriptor word 3 buffer 2 address. */
typedef struct
{
    uint32_t TBAP2;
} ETH_TDES3_t;

/** @} */

/** @name Ethernet Receive Descriptor Structures
 * @{
 */

/** @brief Receive descriptor word 0 status fields. */
typedef struct
{
    uint32_t PCE_ESA:1;  /**< Payload checksum error / extended status available */
    uint32_t CE:1;  /**< CRC error */
    uint32_t DE:1;  /**< Dribble bit error */
    uint32_t RE:1;  /**< Receive error */
    uint32_t RWT:1;  /**< Receive watchdog timeout */
    uint32_t FT:1;  /**< Frame type */
    uint32_t LCO:1;  /**< Late collision */
    uint32_t IPHCE_TSV:1;  /**< IPv4 header checksum error / timestamp valid */
    uint32_t LS:1;  /**< Last segment */
    uint32_t FS:1;  /**< First segment */
    uint32_t VLAN:1;  /**< VLAN tag */
    uint32_t OE:1;  /**< Overflow error */
    uint32_t LE:1;  /**< Length error */
    uint32_t SAF:1;  /**< Source address filter fail */
    uint32_t DescErr:1;  /**< Descriptor error (abbreviated DE in template) */
    uint32_t ES:1;  /**< Error summary */
    uint32_t FL:14;  /**< Frame length */
    uint32_t AFM:1;  /**< Destination address filter fail */
    uint32_t OWN:1;  /**< Own bit */
} ETH_RDES0_t;

/** @brief Receive descriptor word 1 buffer size and control fields. */
typedef struct
{
    uint32_t RBS:13;  /**< Receive buffer 1 size */
    uint32_t res1:1;  /**< Reserved */
    uint32_t RCH:1;  /**< Second address chained */
    uint32_t RER:1;  /**< Receive end of ring */
    uint32_t RBS2:13;  /**< Receive buffer 2 size */
    uint32_t res2:2;  /**< Reserved */
    uint32_t DIC:1;  /**< Disable interrupt on completion */
} ETH_RDES1_t;

/** @brief Receive descriptor word 2 buffer 1 address. */
typedef struct
{
    uint32_t RBAP1;
} ETH_RDES2_t;

/** @brief Receive descriptor word 3 buffer 2 address. */
typedef struct
{
    uint32_t RBAP2;
} ETH_RDES3_t;


/** @} */

#endif /* ETH_REG_PRIV_H */
