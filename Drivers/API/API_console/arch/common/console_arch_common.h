/*
 * console_arch_common.h
 *
 *  Created on: Aug 4, 2024
 *      Author: guirespi
 */

#ifndef API_API_CONSOLE_ARCH_COMMON_CONSOLE_ARCH_COMMON_H_
#define API_API_CONSOLE_ARCH_COMMON_CONSOLE_ARCH_COMMON_H_

#include <stdint.h>
#include "API_console_def.h"

typedef enum
{
	CONSOLE_ARCH_E_IO	 = -3,
	CONSOLE_ARCH_E_BUSY	 = -2,
	CONSOLE_ARCH_E_READY = -1,
	CONSOLE_ARCH_OK = 0,
}console_arch_err_t;

int console_arch_common_comm_channel_init(void * channel_hdle, volatile console_state_t * state_ref);

int console_arch_common_comm_channel_send(uint8_t * data, uint16_t data_size);

int console_arch_common_comm_channel_receive(uint8_t * data, uint16_t * data_size);

#endif /* API_API_CONSOLE_ARCH_COMMON_CONSOLE_ARCH_COMMON_H_ */
