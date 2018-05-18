/**
  ******************************************************************************
  * @file    main.h 
  * @author  MCD Application Team
  * @version V1.3.0
  * @date    30-December-2016  
  * @brief   Header for main.c file
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2016 STMicroelectronics International N.V. 
  * All rights reserved.</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
 extern "C" {
#endif

 // Endereço do registrador que contém o valor amostrado pelo ADC1
 #define ADC1_DR_ADDRESS    ((uint32_t)0x4001204C)

 // Endereço do registrador que comtém o valor amostrado
 // pelos ADs no modo triplo (DAC1, ADC2, ADC3)
 #define ADC_CDR_ADDRESS    ((uint32_t)0x40012308)

#define U8    unsigned char
#define I8    signed char
#define U16   unsigned short
#define I16   signed short
#ifdef __x86_64__
#define U32   unsigned
#define I32   int
#else
#define U32   unsigned long
#define I32   signed long
#endif
/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"
#include "stm32f7xx_it.h"

/* EVAL includes components */
#include "stm32746g_discovery.h"
#include "stm32746g_discovery_lcd.h"
#include "stm32746g_discovery_sdram.h"
#include "stm32746g_discovery_ts.h"
#include "stm32746g_discovery_sd.h"
#include "stm32746g_discovery_audio.h"
#include "stm32746g_discovery_qspi.h"
#include "stm32746g_discovery_camera.h"
#include "stm32746g_discovery_eeprom.h"
   
/* FatFs includes components */
#include "ff_gen_drv.h"
#include "usbh_diskio.h"
#include "sd_diskio.h"

/* utilities and standard includes components */   
#include "cpu_utils.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

 /* embedded wizard includes */
#include "DeviceDriver.h"
#include "xprintf.h"
#include "tlsf.h"

#include "ewrte.h"
#include "ewgfx.h"
#include "ewextgfx.h"
#include "ewgfxdefs.h"
#include "Core.h"
#include "Graphics.h"

#include "ew_bsp_system.h"
#include "ew_bsp_clock.h"
#include "ew_bsp_event.h"
#include "ew_bsp_display.h"
#include "ew_bsp_touch.h"
#include "ew_bsp_serial.h"
#include "stm32f7xx.h"
   
/* Exported types ------------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported macros -----------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */ 
 unsigned int Get_ADC_Calib (void);
 void MX_USART6_UART_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
