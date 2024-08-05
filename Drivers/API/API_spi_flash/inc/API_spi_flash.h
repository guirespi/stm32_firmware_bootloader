/*
 * API_spi_flash.h
 *
 *  Created on: Jul 28, 2024
 *      Author: guirespi
 */

#ifndef API_API_SPI_FLASH_INC_API_SPI_FLASH_H_
#define API_API_SPI_FLASH_INC_API_SPI_FLASH_H_

#include <stdint.h>

typedef void * spi_if_hdle;

typedef enum
{
	SPI_FLASH_OK = 0,
	SPI_FLASH_E_NULL,
	SPI_FLASH_E_PARAM,
	SPI_FLASH_E_READY,
	SPI_FLASH_E_ARCH,
	SPI_FLASH_E_IO,
}spi_flash_err_t;

int spi_flash_init(spi_if_hdle spi_if_hdle);

int spi_flash_read(uint8_t * buffer, uint32_t address, uint32_t size);

int spi_flash_write(uint8_t * buffer, uint32_t address, uint32_t size);

int spi_flash_erase_range(size_t address, uint32_t size);

int spi_flash_erase_chip(void);

int spi_flash_deinit(void);

#endif /* API_API_SPI_FLASH_INC_API_SPI_FLASH_H_ */
