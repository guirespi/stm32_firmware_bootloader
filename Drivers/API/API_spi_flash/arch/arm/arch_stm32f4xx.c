/*
 * stm32f4xx.c
 *
 *  Created on: Jul 28, 2024
 *      Author: guirespi
 */

#ifndef API_API_SPI_FLASH_ARCH_ARM_STM32F4XX_C_
#define API_API_SPI_FLASH_ARCH_ARM_STM32F4XX_C_

#include <stdbool.h>

#include "stm32f4xx_hal_conf.h"
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_spi.h"

#include "arch_common.h"

#define ARCH_STM32F4XX_SPI_HDLE ((SPI_HandleTypeDef *) ARCH_SPI_HANDLE_NAME)

static void * ARCH_SPI_HANDLE_NAME = NULL;

static inline bool spi_flash_arch_ready(void);

static inline bool spi_flash_arch_ready(void)
{
	return (_spi_hdle == NULL?false:true);
}

int spi_flash_arch_set_spi_hdle(void * spi_hdle)
{
	if(spi_flash_arch_ready() == true) return SPI_FLASH_ARCH_E_READY;
	_spi_hdle == spi_hdle;
	return SPI_FLASH_ARCH_OK;
}

int spi_flash_arch_read_spi(uint8_t * buffer, uint16_t buffer_size, uint32_t timeout)
{
	if(spi_flash_arch_ready() == false) return SPI_FLASH_ARCH_E_READY;

	return 	HAL_SPI_Receive(ARCH_STM32F4XX_SPI_HDLE, buffer, buffer_size, timeout);
}

int spi_flash_arch_write_spi(uint8_t * data, uint16_t data_size, uint32_t timeout)
{
	if(spi_flash_arch_ready() == false) return SPI_FLASH_ARCH_E_READY;

	return 	HAL_SPI_Transmit(ARCH_STM32F4XX_SPI_HDLE, data, data_size, timeout);
}


#endif /* API_API_SPI_FLASH_ARCH_ARM_STM32F4XX_C_ */
