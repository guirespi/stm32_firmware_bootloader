/*
 * common.h
 *
 *  Created on: Jul 28, 2024
 *      Author: guirespi
 */

#ifndef API_API_SPI_FLASH_ARCH_COMMON_ARCH_COMMON_H_
#define API_API_SPI_FLASH_ARCH_COMMON_ARCH_COMMON_H_

#include <stdint.h>

#define ARCH_SPI_HANDLE_NAME _spi_hdle

typedef enum
{
	SPI_FLASH_ARCH_E_READY = -1,
	SPI_FLASH_ARCH_OK = 0,
}arch_spi_flash_err_t;

int spi_flash_arch_set_spi_hdle(void * spi_hdle);

int spi_flash_arch_read_spi(uint8_t * buffer, uint16_t buffer_size, uint32_t timeout);

int spi_flash_arch_write_spi(uint8_t * data, uint16_t data_size, uint32_t timeout);

#endif /* API_API_SPI_FLASH_ARCH_COMMON_ARCH_COMMON_H_ */
