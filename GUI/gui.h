#ifndef GUI_H_
#define GUI_H_

#include "lvgl/lvgl.h"
#include "lv_conf.h"
#include "FreeRTOS.h"
#include "semphr.h"
#include "task.h"

void lv_init_widgets(void);
void dhcp_set_status(uint32_t dhcp_state);
void ip_set_address(void);
void server_set_status(uint32_t server_state);
void gps_protocol_set_status(uint32_t gps_protocol);
void gps_set_status(uint32_t gps_state);

extern xSemaphoreHandle GUI_mutex;

#endif
