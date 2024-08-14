/*
 * app_bootloader.h
 *
 *  Created on: Aug 11, 2024
 *      Author: guirespi
 */

#ifndef APPLICATION_APP_BOOTLOADER_INC_APP_BOOTLOADER_H_
#define APPLICATION_APP_BOOTLOADER_INC_APP_BOOTLOADER_H_

#include <stdio.h>

typedef enum
{
	APP_BOOTLOADER_OK = 0,
	APP_BOOTLOADER_E_READY,
	APP_BOOTLOADER_E_INVALID,
	APP_BOOTLOADER_E_UNKNOWN,
	APP_BOOTLOADER_E_WAIT,
}app_bootloader_err_t;

typedef enum
{
	APP_BOOTLOADER_STATE_DISABLE = -1,
	APP_BOOTLOADER_STATE_INIT,
	APP_BOOTLOADER_STATE_READY,
	APP_BOOTLOADER_STATE_DOWNLOAD_END,
	APP_BOOTLOADER_STATE_BOOT,
}app_bootloader_state_t;

int app_bootloader_init(void);

int app_bootloader_start(void);


#endif /* APPLICATION_APP_BOOTLOADER_INC_APP_BOOTLOADER_H_ */
