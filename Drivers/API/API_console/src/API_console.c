/*
 * API_console.c
 *
 *  Created on: Aug 4, 2024
 *      Author: guirespi
 */
#include "console_arch_common.h"

#include "API_console.h"

static console_state_t console_state = CONSOLE_STATE_DISABLE;

int console_init(comm_channel_hdle comm_channel_hdle)
{
	return console_arch_common_comm_channel_init((void *)comm_channel_hdle, &console_state);
}

int console_send_data(uint8_t * data, uint16_t data_size)
{
	console_arch_common_comm_channel_send(data, data_size);
}

int console_recv_data(uint8_t * buffer, uint16_t * recv_length)
{
	return console_arch_common_comm_channel_receive(buffer, recv_length);
}
