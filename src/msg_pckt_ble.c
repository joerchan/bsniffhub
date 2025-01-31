/*
* Copyright (c) 2020 Vladimir Alemasov
* All rights reserved
*
* This program and the accompanying materials are distributed under 
* the terms of GNU General Public License version 2 
* as published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*/

#include <stdint.h>     /* uint8_t ... uint64_t */
#include "msg_pckt_ble.h"

//--------------------------------------------
static msgqueue_t queue;

//--------------------------------------------
int msg_pckt_ble_init(void)
{
	return msg_ble_init(&queue);
}

//--------------------------------------------
int msg_pckt_ble_add(msg_ble_t *ms)
{
	return msg_ble_add(&queue, (msg_t *)ms);
}

//--------------------------------------------
int msg_pckt_ble_remove(msg_ble_t *ms)
{
	return msg_ble_remove(&queue, (msg_ble_t *)ms);
}

//--------------------------------------------
int msg_pckt_ble_remove_cover(msg_ble_t *ms)
{
	return msg_ble_remove_cover(&queue, ms);
}

//--------------------------------------------
msg_ble_t* msg_pckt_ble_get_first(void)
{
	return msg_ble_get_first(&queue);
}

//--------------------------------------------
void msg_pckt_ble_remove_all(void)
{
	msg_ble_remove_all(&queue);
}

//--------------------------------------------
void msg_pckt_ble_destroy(void)
{
	msg_ble_destroy(&queue);
}

//--------------------------------------------
int msg_pckt_ble_add_packet(ble_info_t *info)
{
	return msg_ble_add_packet(&queue, info);
}
