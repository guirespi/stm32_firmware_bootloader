/*
 * API_console.h
 *
 *  Created on: Aug 4, 2024
 *      Author: guirespi
 */

#ifndef API_API_CONSOLE_INC_API_CONSOLE_H_
#define API_API_CONSOLE_INC_API_CONSOLE_H_

#include "API_console_def.h"

typedef void * comm_channel_hdle;

/**
 * @brief Init console.
 *
 * @param comm_channel_hdle Communication channel hanndle. (Expected an UART handle)
 * @return
 * 			- 0 if no error.
 */
int console_init(comm_channel_hdle comm_channel_hdle);
/**
 * @brief Send data through console.
 *
 * @param data Data
 * @param data_size Data size.
 * @return
 * 			- 0 if no error.
 */
int console_send_data(uint8_t * data, uint16_t data_size);
/**
 * @brief Receive variable data size through console.
 *
 * @param buffer Buffer.
 * @param recv_length Pointer where received length will be put.
 * @return
 * 			- 0 if received finish.
 */
int console_recv_data(uint8_t * buffer, uint16_t * recv_length);

#endif /* API_API_CONSOLE_INC_API_CONSOLE_H_ */
