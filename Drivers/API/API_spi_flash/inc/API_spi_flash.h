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
	SPI_FLASH_E_BUSY,
	SPI_FLASH_E_FAIL,
	SPI_FLASH_E_ADDRESS,
	SPI_FLASH_E_BOUNDARIES,
	SPI_FLASH_E_MEM,
	SPI_FLASH_E_TIMEOUT,
}spi_flash_err_t;

typedef enum
{
	SPI_FLASH_STATE_DISABLE = 0,
	SPI_FLASH_STATE_INIT,
	SPI_FLASH_STATE_POWER_ON,
	SPI_FLASH_STATE_READY,
	SPI_FLASH_STATE_WRITE_READY,
	SPI_FLASH_STATE_BUSY,
	SPI_FLASH_STATE_ERROR,
}spi_flash_state_t;

typedef struct
{
	uint32_t port;
	uint16_t pin;
}spi_flash_cs_t;

int spi_flash_init(spi_if_hdle spi_if_hdle, spi_flash_cs_t cs_gpio);

int spi_flash_read(uint8_t * buffer, uint32_t address, uint32_t size);

int spi_flash_write(uint8_t * buffer, uint32_t address, uint32_t size);

int spi_flash_erase_range(size_t address, uint32_t size);

int spi_flash_deinit(void);

#endif /* API_API_SPI_FLASH_INC_API_SPI_FLASH_H_ */
