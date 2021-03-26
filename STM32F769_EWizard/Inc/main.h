/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2017 STMicroelectronics International N.V. 
  * All rights reserved.
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
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */
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
/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

/* USER CODE BEGIN Private defines */
// PMU ID
#define PMUID	0x0001

// Define nominal frequency
#define NOMINAL_FREQ 60

// Define nominal voltage
#define NOMINAL_VOLTAGE 127

// Define for enabling 4x oversampling
#define OVERSAMPLING 1

// Define for GPS 30 Hz PPS
#define PPS_30_HZ

// Defines for 50 or 60Hz in the SOC time stamp
#define FRACAO_DE_SEGUNDO_INIT 0
#if (NOMINAL_FREQ == 60)
#define FRACAO_DE_SEGUNDO 0x00008235  //Fração de segundo 0,03333
#define LIMITE_FRACAO_DE_SEGUNDO 0xEC001
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


/* PMU Gains */

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

//#define PLATAFORMA_DE_TESTES 1
//#define USAR_DFT
/* USER CODE END Private defines */

void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
