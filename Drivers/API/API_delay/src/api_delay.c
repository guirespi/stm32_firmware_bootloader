/*
 * api_delay.c
 *
 *  Created on: Jul 4, 2024
 *      Author: guirespi
 */
#include "api_delay.h"

#include <stdio.h>
#include "stm32f4xx_hal.h"

void delay_init(delay_t *delay, tick_t duration) {
	if (delay == NULL)
		return;
	delay->startTime = 0;
	delay->running = false;
	delay->duration = duration;
}

bool delay_read(delay_t *delay) {
	if (delay == NULL)
		return false;

	bool rt = false;

	if (delay->running == false) {
		delay->startTime = HAL_GetTick();
		delay->running = true;
	} else {
		rt = (HAL_GetTick() - delay->startTime) > delay->duration;
		if (rt == true)
			delay->running = false;
	}
	return rt;
}

void delay_write(delay_t *delay, tick_t duration) {
	if (delay == NULL)
		return;

	if (delay->running == true)
		delay->running = false;
	delay->startTime = 0;
	delay->duration = duration;
}

void delay_task(tick_t duration) {
	delay_t delay = { 0 };
	delay_init(&delay, duration);
	while (!delay_read(&delay))
		;
}

bool delay_is_running(delay_t * delay)
{
	bool rt =  delay->running;
	return rt;
}
