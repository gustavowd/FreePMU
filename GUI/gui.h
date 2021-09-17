#ifndef GUI_H_
#define GUI_H_

#include "lvgl/lvgl.h"
#include "lv_conf.h"
#include "FreeRTOS.h"
#include "semphr.h"
#include "task.h"

void lv_init_widgets(void);
int32_t dhcp_set_status(uint32_t dhcp_state);
void server_set_status(uint32_t server_state);

extern xSemaphoreHandle GUI_mutex;

#endif