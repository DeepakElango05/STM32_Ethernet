/*
 * ETH_Driver.c
 *
 *  Created on: 31-Oct-2026
 *      Author: DELL
 */
#include "ETH/ETH_Driver_if.h"

static LAN8742A_PHYID1_t phy_ad1={0};
static LAN8742A_PHYID2_t phy_ad2={0};

/*
 * @brief The Initialization of RCC and GPIO Registers for the Ethernet
 */
void ETH_RCC_GPIO_Init(void)
{
	/*Initialize the Clock for the Ethernet and Corresponding GPIO Ports*/
	RCC_AHB1ENR->ETHMACEN=1;
	RCC_AHB1ENR->ETHMACRXEN=1;
	RCC_AHB1ENR->ETHMACTXEN=1;

	/*Initialize the Corresponding GPIO Pin's with respective functionality*/
	RCC_AHB1ENR->GPIOAEN=1;
	RCC_AHB1ENR->GPIOBEN=1;
	RCC_AHB1ENR->GPIOCEN=1;


	/* PA1 -	ETH_RMII_REF_CLK
	 * PA2 -	ETH_MDIO
	 * PA7 -	ETH_RMII_CRS_DV

	 * PB11 -	ETH_RMII_TX_EN
	 * PB12 -	ETH_RMII_TXD0
	 * PB13 -	ETH_RMII_TXD1
	 *
	 * PC1 -	ETH_MDC
	 * PC4 -	ETH_RMII_RXD0
	 * PC5 -	ETH_RMII_RXD1
	 *
	 * Following were not used
	 *
	 * PG11 - 	ETH_RMII_TX_EN
	 * PG13 -	ETH_RMII_TXD0
	 * PG14 -	ETH_RMII_TXD1
	 *
	 */
	 GPIOA_MODER->MODER1=2;  /*2 -Alternate Function*/
	 GPIOA_MODER->MODER2=2;
	 GPIOA_MODER->MODER7=2;

	 GPIOB_MODER->MODER11=2;
	 GPIOB_MODER->MODER12=2;
	 GPIOB_MODER->MODER13=2;

	 GPIOC_MODER->MODER1=2;
	 GPIOC_MODER->MODER4=2;
	 GPIOC_MODER->MODER5=2;

	 GPIOA_AFRL->AFR1=11; /*11 -AF11 for Ethernet*/
	 GPIOA_AFRL->AFR2=11;
	 GPIOA_AFRL->AFR7=11;

	 GPIOB_AFRH->AFR11=11;
	 GPIOB_AFRH->AFR12=11;
	 GPIOB_AFRH->AFR13=11;

	 GPIOC_AFRL->AFR1=11;
	 GPIOC_AFRL->AFR4=11;
	 GPIOC_AFRL->AFR5=11;


	 GPIOA_OSPEEDR->OSPEEDR1=3;/*3 - Very High Speed*/
	 GPIOA_OSPEEDR->OSPEEDR2=3;
	 GPIOA_OSPEEDR->OSPEEDR7=3;

	 GPIOB_OSPEEDR->OSPEEDR11=3;
	 GPIOB_OSPEEDR->OSPEEDR12=3;
	 GPIOB_OSPEEDR->OSPEEDR13=3;

	 GPIOC_OSPEEDR->OSPEEDR1=3;
	 GPIOC_OSPEEDR->OSPEEDR4=3;
	 GPIOC_OSPEEDR->OSPEEDR5=3;
}

void ETH_Init(void)
{
  ETH_MACCR_REG->FES=1; //Configure MAC Speed for 100Mbps

  ETH_MACMIIAR_REG->CR=2; //Setting the MDC Clock frequency to 20-35 MHz HCLK/16

  ETH_MACA0LR_REG->MACA0L=0;
  ETH_MACA0HR_REG->MACA0H=0;

  /*TODO: Further Configuration needs to be added*/

}

void ETH_Read_PHY_AD(void)
{
	uint8_t PHY_Addr_idx=0;
	uint16_t ETH_phy_add[2]={0};
	for(uint8_t addr=(uint8_t)LAN8742A_REG_PHY_ID1;addr<=LAN8742A_REG_PHY_ID2;addr++)
	{
		//Clearing the MDIO Register
		ETH_MACMIIDR_REG->MD=0;

		ETH_MACMIIAR_REG->MR=addr;
		ETH_MACMIIAR_REG->MB=1;	/*Set the MAC Busy to start the read operations*/

		/*Wait until the The read operation is completed*/
		while(ETH_MACMIIAR_REG->MB);

		ETH_phy_add[PHY_Addr_idx]=ETH_MACMIIDR_REG->MD;

		PHY_Addr_idx++;
	}
	phy_ad1.REG=ETH_phy_add[0];
	phy_ad2.REG=ETH_phy_add[1];

}

bool ETH_ReadWrite_MDIO(uint8_t reg_addr,uint8_t data,bool write)
{
	bool status = false;

	/*The Given reg_addr should be a valid address in LAN872A*/
	if(reg_addr<=(uint8_t)(LAN8742A_REG_PHY_SPECIAL_CONTROL_STATUS))
	{
		if(write)
		{
			/*TODO: Write Logic for handling write operation*/
		}
		else
		{
			ETH_MACMIIAR_REG->MR=reg_addr;
			ETH_MACMIIAR_REG->MB=1;	/*Set the MAC Busy to start the read operations*/

			/*Wait until the The read operation is completed*/
			while(ETH_MACMIIAR_REG->MB);

			uint16_t addr=ETH_MACMIIDR_REG->MD;

			ETH_MACMIIAR_REG->MW=1;

			ETH_MACMIIAR_REG->MB=1;

			/*Wait until the The Write operation is completed*/
			while(ETH_MACMIIAR_REG->MB);

		}
	}

	return status;
}

