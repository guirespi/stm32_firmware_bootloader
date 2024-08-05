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

int console_init(comm_channel_hdle comm_channel_hdle);

int console_send_data(uint8_t * data, uint16_t data_size);

int console_recv_data(uint8_t * buffer, uint16_t * recv_length);

#endif /* API_API_CONSOLE_INC_API_CONSOLE_H_ */
