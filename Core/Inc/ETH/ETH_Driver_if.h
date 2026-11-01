/*
 * ETH_Driver_if.h
 *
 *  Created on: 31-Oct-2026
 *      Author: DELL
 */

#ifndef ETH_ETH_DRIVER_IF_H_
#define ETH_ETH_DRIVER_IF_H_

#include <stdbool.h>
#include "LAN8742A/LAN8742A_Registers_if.h"
#include "ETH/ETH_Register_if.h"
#include "GPIO/GPIO_Register_if.h"
#include "RCC/RCC_Register_if.h"


void ETH_RCC_GPIO_Init(void);

void ETH_Init(void);

bool ETH_ReadWrite_MDIO(uint8_t reg_addr,uint8_t data,bool write);

void ETH_Read_PHY_AD(void);

#endif /* ETH_ETH_DRIVER_IF_H_ */
