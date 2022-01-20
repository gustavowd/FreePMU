/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"
#include "FreeRTOS.h"
#include "semphr.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
/* Kernel includes components */
#include "k_rtc.h"

/* utilities and standard includes components */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


#include "serial.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
enum SERVER_STATES {
	SERVER_DOWN, SOCKET_ERROR, BIND_ERROR, LISTEN_ERROR, LISTENING, ACCEPT_ERROR, PDC_CONNECTED, UDP_BROADCASTING
};
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
/* USER CODE BEGIN Private defines */

// Definition of the PMU devices.
#define PMU_UFSC_1_IDENTIFICATION	1
#define PMU_UFSC_2_IDENTIFICATION	2

// PMU IDENTIFICATION: Calibration gains and devices ID are selected
// according to this option. Actual values are defined in separated header files.
#define PMU_IDENTIFICATION	PMU_UFSC_2_IDENTIFICATION

//#define PLATAFORMA_DE_TESTES

// Define nominal frequency
#define NOMINAL_FREQ 60

// Define if harmonics are enable or not
#define ENABLE_HARMONICS 1

// Define for enabling 4x oversampling
#define OVERSAMPLING 1

// Define for GPS 30 Hz PPS
#define PPS_30_HZ

// Define for GPS baudrate
#define GPS_BAUDRATE 115200

// Set this define to 1 for simulate GPS time stamp and PPS
#define SIMULATED_GPS 0

// Defines for 50 or 60Hz in the SOC time stamp
#define FRACAO_DE_SEGUNDO_INIT 0
#if (NOMINAL_FREQ == 60)
#define FRACAO_DE_SEGUNDO 0x00008235  //Fração de segundo 0,03333
#define LIMITE_FRACAO_DE_SEGUNDO 0xEC00B
#endif
#if (NOMINAL_FREQ == 50)
#define FRACAO_DE_SEGUNDO 0x00009C40  // Fração de segundo = 0,04
#define LIMITE_FRACAO_DE_SEGUNDO 0xEA600
#endif


//Definition for PEAK or RMS values
#define PEAK_GAIN	(float)2.0
#define RMS_GAIN	(float)1.414213562
#define PEAK_OR_RMS	RMS_GAIN

// Definition to choose between TCP or UDP communication
#define TCP_PMU 0
#define UDP_PMU 1
#define TRANSPORT_PROTOCOL TCP_PMU


//#define CORRIGE_RESIDUAL
#define CORR_HTIM1 1


/* PMU Calibration gains selection */
#if (PMU_IDENTIFICATION == PMU_UFSC_1_IDENTIFICATION)
#include "PMU_UFSC_1.h"
#elif (PMU_IDENTIFICATION == PMU_UFSC_2_IDENTIFICATION)
#include "PMU_UFSC_2.h"
#endif

#if 0
/* Defines for normalized harmonics (127V or 220V) */
#if NOMINAL_VOLTAGE == 127
#define NORM_GAIN_127V_R	(float)3.048178533
#define NORM_GAIN_127V_S	(float)3.031196288
#define NORM_GAIN_127V_T	(float)3.047962608
#endif

#if NOMINAL_VOLTAGE == 220
#define NORM_GAIN_220V_R	(float)1.759630335
#define NORM_GAIN_220V_S	(float)1.749826948
#define NORM_GAIN_220V_T	(float)1.759505687
#endif

/* Defines for the magnitude of fundamental phases */
#define MAG_GAIN_R			(float)42.3832
#define MAG_GAIN_S			(float)42.4718
#define MAG_GAIN_T			(float)42.45794


/* Defines for the fit curve of the magnitude of fundamental R */
#define FIT_MAG_GAIN_A_R	(float)-0.0016362996
#define FIT_MAG_GAIN_B_R	(float)6.4330443785
#define FIT_MAG_GAIN_C_R	(float)0.0658874232
#define FIT_MAG_GAIN_D_R	(float)0.0351025233

/* Defines for the fit curve of the magnitude of fundamental S */
#define FIT_MAG_GAIN_A_S	(float)0.0009628812
#define FIT_MAG_GAIN_B_S	(float)6.3757106266
#define FIT_MAG_GAIN_C_S	(float)0.0686457110
#define FIT_MAG_GAIN_D_S	(float)0.0299965117

/* Defines for the fit curve of the magnitude of fundamental T */
#define FIT_MAG_GAIN_A_T	(float)0.0004282697
#define FIT_MAG_GAIN_B_T	(float)6.4019875313
#define FIT_MAG_GAIN_C_T	(float)0.0981472053
#define FIT_MAG_GAIN_D_T	(float)0.0467723654


/* Defines for the fit curve of the phase of fundamental R */
#define FIT_PHASE_GAIN_A_R	(float)60.256916502
#define FIT_PHASE_GAIN_B_R	(float)0.1863745932
#define FIT_PHASE_GAIN_C_R	(float)0.0076768782

/* Defines for the fit curve of the phase of fundamental S */
#define FIT_PHASE_GAIN_A_S	(float)60.273407182
#define FIT_PHASE_GAIN_B_S	(float)0.2463213789
#define FIT_PHASE_GAIN_C_S	(float)0.0144579474

/* Defines for the fit curve of the phase of fundamental T */
#define FIT_PHASE_GAIN_A_T	(float)60.271458135
#define FIT_PHASE_GAIN_B_T	(float)0.1695834628
#define FIT_PHASE_GAIN_C_T	(float)0.0045740754


/* Defines for the fit curve of the frequency of fundamental R */
#define FIT_FREQ_GAIN_A_R		(float)-2.5770186918
#define FIT_FREQ_GAIN_B_R		(float)0.0521374904

/* Defines for the fit curve of the frequency of fundamental S */
#define FIT_FREQ_GAIN_A_S		(float)-2.6741303661
#define FIT_FREQ_GAIN_B_S		(float)0.0537621928

/* Defines for the fit curve of the frequency of fundamental T */
#define FIT_FREQ_GAIN_A_T		(float)-2.3885333996
#define FIT_FREQ_GAIN_B_T		(float)0.0485053178

#endif

//#define PLATAFORMA_DE_TESTES 1
//#define USAR_DFT
/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
