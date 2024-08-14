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
	CONSOLE_ARCH_E_IO	 = -3, /*< Error related to input/output of arch related functions */
	CONSOLE_ARCH_E_BUSY	 = -2, /*< Ongoing operation */
	CONSOLE_ARCH_E_READY = -1, /*< Operation is in progress or is already set */
	CONSOLE_ARCH_OK = 0, /*< No error */
}console_arch_err_t;

/**
 * @brief Init communication channel.
 *
 * @param channel_hdle communication channel handle. Expected an UART handle.
 * @param state_ref Pointer of console state.
 * @return
 * 			- CONSOLE_ARCH_OK if no error.
 */
int console_arch_common_comm_channel_init(void * channel_hdle, volatile console_state_t * state_ref);
/**
 * @brief Send data through communication channel.
 *
 * @param data Data to send.
 * @param data_size Data size.
 * @return
 * 			- CONSOLE_ARCH_OK if no error.
 */
int console_arch_common_comm_channel_send(uint8_t * data, uint16_t data_size);
/**
 * @brief Receive data through channel.
 *
 * @param data Buffer.
 * @param data_size Received size.
 * @return
 * 			- CONSOLE_ARCH_OK if no error.
 * 			- CONSOLE_ARCH_BUSY if waiting to receive more data.
 */
int console_arch_common_comm_channel_receive(uint8_t * data, uint16_t * data_size);

#endif /* API_API_CONSOLE_ARCH_COMMON_CONSOLE_ARCH_COMMON_H_ */
