/*
 * API_spi_flash_def.h
 *
 *  Created on: Jul 28, 2024
 *      Author: guirespi
 */

#ifndef API_API_SPI_FLASH_INC_API_SPI_FLASH_DEF_H_
#define API_API_SPI_FLASH_INC_API_SPI_FLASH_DEF_H_

/* (CFI) Common Flash Interface commands. Refer to JEDEC standards.*/

#define API_SPI_FLASH_CMD_READ_UNIQUE_ID_NUMBER (0x4BU)
#define API_SPI_FLASH_CMD_READ_JEDEC_ID (0x9FU)

#define API_SPI_FLASH_CMD_READ_STATUS_REG_1  (0x05U)
#define API_SPI_FLASH_CMD_READ_STATUS_REG_2  (0x35U)
#define API_SPI_FLASH_CMD_READ_STATUS_REG_3  (0x15U)

#define API_SPI_FLASH_CMD_READ_DATA (0x03U)

#define API_SPI_FLASH_CMD_WRITE_EN (0x06U)
#define API_SPI_FLASH_CMD_WRITE_DIS (0x04U)

#define API_SPI_FLASH_CMD_WRITE_STATUS_REG_1 (0x01U)
#define API_SPI_FLASH_CMD_WRITE_STATUS_REG_2 (0x31U)
#define API_SPI_FLASH_CMD_WRITE_STATUS_REG_3 (0x11U)

#define API_SPI_FLASH_CMD_WRITE_PAGE (0x02U)

#define API_SPI_FLASH_CMD_DEL_SECTOR (0x20U)
#define API_SPI_FLASH_CMD_DEL_32KB_BLOCK (0x52U)
#define API_SPI_FLASH_CMD_DEL_64KB_BLOCK (0xD8U)
#define API_SPI_FLASH_CMD_DEL_CHIP (0xC7U)

#define API_SPI_FLASH_CMD_ENABLE_RESET (0x66U)
#define API_SPI_FLASH_CMD_RESET_DEVICE (0x99U)

#define API_SPI_FLASH_BSY_BIT (1<<0)
#define API_SPI_FLASH_WEL_BIT (1<<1)

#define API_SPI_FLASH_BSY_IS_SET(reg)	((reg & API_SPI_FLASH_BSY_BIT) == API_SPI_FLASH_BSY_BIT)
#define API_SPI_FLASH_WEL_IS_SET(reg)	((reg & API_SPI_FLASH_WEL_BIT) == API_SPI_FLASH_WEL_BIT)

typedef struct __attribute__((packed))
{
	uint8_t manufacturer_id;
	uint8_t memory_type;
	uint8_t memory_capacity;
}spi_flash_jedec_id;

#endif /* API_API_SPI_FLASH_INC_API_SPI_FLASH_DEF_H_ */
