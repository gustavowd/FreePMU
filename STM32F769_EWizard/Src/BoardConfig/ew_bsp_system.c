/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software is delivered "as is" and shows the usage of other software
* components. It is provided as an example software which is intended to be
* modified and extended according to particular requirements.
*
* TARA Systems hereby disclaims all warranties and conditions with regard to the
* software, including all implied warranties and conditions of merchantability
* and non-infringement of any third party IPR or other rights which may result
* from the use or the inability to use the software.
*
********************************************************************************
*
* DESCRIPTION:
*   This file is part of the interface (glue layer) between an Embedded Wizard
*   generated UI application and the board support package (BSP) of a dedicated
*   target.
*   This template is responsible to configurate the entire system (CPU clock,
*   memory, qspi, etc).
*
*******************************************************************************/

#include "stm32f7xx_hal.h"
#include "stm32f769i_discovery.h"
#include "stm32f769i_discovery_sdram.h"
#include "stm32f769i_discovery_qspi.h"

#include <string.h>

#include "ew_bsp_system.h"


/*******************************************************************************
* FUNCTION:
*   SystemClock_Config
*
* DESCRIPTION:
*   System Clock Configuration
*     The system Clock is configured as follow :
*     System Clock source            = PLL (HSE)
*     SYSCLK(Hz)                     = 216000000
*     HCLK(Hz)                       = 216000000
*     AHB Prescaler                  = 1
*     APB1 Prescaler                 = 4
*     APB2 Prescaler                 = 2
*     HSE Frequency(Hz)              = 25000000
*     PLL_M                          = 25
*     PLL_N                          = 432
*     PLL_P                          = 2
*     PLL_Q                          = 9
*     PLL_R                          = 7
*     VDD(V)                         = 3.3
*     Main regulator output voltage  = Scale1 mode
*     Flash Latency(WS)              = 7
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
static void SystemClock_Config( void )
{
  RCC_ClkInitTypeDef        RCC_ClkInitStruct;
  RCC_OscInitTypeDef        RCC_OscInitStruct;
  RCC_PeriphCLKInitTypeDef  PeriphClkInitStruct;

  /* Enable Power Control clock */
  __HAL_RCC_PWR_CLK_ENABLE();

  /* The voltage scaling allows optimizing the power consumption when the device is
     clocked below the maximum system frequency, to update the voltage scaling value
     regarding system frequency refer to product datasheet.  */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /* Enable HSE Oscillator and activate PLL with HSE as source */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState       = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState   = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource  = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM       = 25;
  RCC_OscInitStruct.PLL.PLLN       = 400; //432 p/ 216MHz
  RCC_OscInitStruct.PLL.PLLP       = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ       = 9;
  RCC_OscInitStruct.PLL.PLLR       = 7;

  HAL_RCC_OscConfig(&RCC_OscInitStruct);

  /* Activate the Over-Drive mode */
  HAL_PWREx_EnableOverDrive();

  /* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
     clocks dividers */
  RCC_ClkInitStruct.ClockType      = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
  RCC_ClkInitStruct.SYSCLKSource   = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider  = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
  HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7);

  /* LCD clock configuration */
  memset( &PeriphClkInitStruct, 0, sizeof( PeriphClkInitStruct ));
  HAL_RCCEx_GetPeriphCLKConfig( &PeriphClkInitStruct );
  PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_LTDC;

#if EW_USE_DOUBLE_BUFFER == 1

  /* PLLSAI_VCO Input = HSE_VALUE/PLL_M = 1 MHz */
  /* PLLSAI_VCO Output = PLLSAI_VCO Input * PLLSAIN = 364 MHz */
  /* PLLLCDCLK = PLLSAI_VCO Output/PLLSAIR = 364 MHz / 7 = 52.0 MHz */
  /* LTDC clock frequency = PLLLCDCLK / LTDC_PLLSAI_DIVR_2 = 52.0 / 2 = 26,0 MHz */
  /* These reduced LTDC clock frequency is neccessary to avoid display artefacts
     that occur on higher LTDC clock frequencies, if there is heavy memory access
     by application during display update */
  PeriphClkInitStruct.PLLSAI.PLLSAIN = 364;
  PeriphClkInitStruct.PLLSAI.PLLSAIR = 7;

#else

  /* PLLSAI_VCO Input = HSE_VALUE/PLL_M = 1 MHz */
  /* PLLSAI_VCO Output = PLLSAI_VCO Input * PLLSAIN = 417 MHz */
  /* PLLLCDCLK = PLLSAI_VCO Output/PLLSAIR = 417 MHz / 5 = 83.4 MHz */
  /* LTDC clock frequency = PLLLCDCLK / LTDC_PLLSAI_DIVR_2 = 83.4 / 2 = 41.7 MHz */
  PeriphClkInitStruct.PLLSAI.PLLSAIN = 417;
  PeriphClkInitStruct.PLLSAI.PLLSAIR = 5;

#endif

  PeriphClkInitStruct.PLLSAIDivR     = RCC_PLLSAIDIVR_2;
  HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct);
}


/*******************************************************************************
* FUNCTION:
*   MPU_Config
*
* DESCRIPTION:
*   Configure the MPU attributes as Write Through for SRAM1/2.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
static void MPU_Config( void )
{
  MPU_Region_InitTypeDef MPU_InitStruct;

  /* Disable the MPU */
  HAL_MPU_Disable();

  /* Configure the MPU attributes as WT for SRAM */
  MPU_InitStruct.Enable           = MPU_REGION_ENABLE;
  MPU_InitStruct.BaseAddress      = 0x20020000;
  MPU_InitStruct.Size             = MPU_REGION_SIZE_512KB;
  MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
  MPU_InitStruct.IsBufferable     = MPU_ACCESS_NOT_BUFFERABLE;
  MPU_InitStruct.IsCacheable      = MPU_ACCESS_CACHEABLE;
  MPU_InitStruct.IsShareable      = MPU_ACCESS_SHAREABLE;
  MPU_InitStruct.Number           = MPU_REGION_NUMBER0;
  MPU_InitStruct.TypeExtField     = MPU_TEX_LEVEL0;
  MPU_InitStruct.SubRegionDisable = 0x00;
  MPU_InitStruct.DisableExec      = MPU_INSTRUCTION_ACCESS_ENABLE;
  HAL_MPU_ConfigRegion(&MPU_InitStruct);

  /* Configure the MPU attributes for Quad-SPI area to strongly ordered
     This setting is essentially needed to avoid MCU blockings! 
     See also STM Application Note AN4861 */
  MPU_InitStruct.Enable           = MPU_REGION_ENABLE;
  MPU_InitStruct.Number           = MPU_REGION_NUMBER2;
  MPU_InitStruct.BaseAddress      = 0x90000000;
  MPU_InitStruct.Size             = MPU_REGION_SIZE_256MB;
  MPU_InitStruct.SubRegionDisable = 0x0;
  MPU_InitStruct.TypeExtField     = MPU_TEX_LEVEL0;
  MPU_InitStruct.AccessPermission = MPU_REGION_NO_ACCESS;
  MPU_InitStruct.DisableExec      = MPU_INSTRUCTION_ACCESS_DISABLE;
  MPU_InitStruct.IsShareable      = MPU_ACCESS_SHAREABLE;
  MPU_InitStruct.IsCacheable      = MPU_ACCESS_NOT_CACHEABLE;
  MPU_InitStruct.IsBufferable     = MPU_ACCESS_NOT_BUFFERABLE;
  HAL_MPU_ConfigRegion(&MPU_InitStruct);
 
  /* Configure the MPU attributes for the QSPI 64MB to normal memory Cacheable, must reflect the real memory size */
  MPU_InitStruct.Enable           = MPU_REGION_ENABLE;
  MPU_InitStruct.Number           = MPU_REGION_NUMBER3;
  MPU_InitStruct.BaseAddress      = 0x90000000;
  MPU_InitStruct.Size             = MPU_REGION_SIZE_64MB; // Set region size according to the QSPI memory size
  MPU_InitStruct.SubRegionDisable = 0x0;
  MPU_InitStruct.TypeExtField     = MPU_TEX_LEVEL0;
  MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
  MPU_InitStruct.DisableExec      = MPU_INSTRUCTION_ACCESS_DISABLE;
  MPU_InitStruct.IsShareable      = MPU_ACCESS_SHAREABLE;
  MPU_InitStruct.IsCacheable      = MPU_ACCESS_CACHEABLE;
  MPU_InitStruct.IsBufferable     = MPU_ACCESS_NOT_BUFFERABLE;
  HAL_MPU_ConfigRegion(&MPU_InitStruct);

  /* Configure the MPU attributes for SDRAM_Banks area to strongly ordered
     This setting is essentially needed to avoid MCU blockings!
     See also STM Application Note AN4861 */
  MPU_InitStruct.Enable           = MPU_REGION_ENABLE;
  MPU_InitStruct.Number           = MPU_REGION_NUMBER4;
  MPU_InitStruct.BaseAddress      = 0x60000000;
  MPU_InitStruct.Size             = MPU_REGION_SIZE_512MB;
  MPU_InitStruct.SubRegionDisable = 0x0;
  MPU_InitStruct.TypeExtField     = MPU_TEX_LEVEL0;
  MPU_InitStruct.AccessPermission = MPU_REGION_NO_ACCESS;
  MPU_InitStruct.DisableExec      = MPU_INSTRUCTION_ACCESS_DISABLE;
  MPU_InitStruct.IsShareable      = MPU_ACCESS_SHAREABLE;
  MPU_InitStruct.IsCacheable      = MPU_ACCESS_NOT_CACHEABLE;
  MPU_InitStruct.IsBufferable     = MPU_ACCESS_NOT_BUFFERABLE;
  HAL_MPU_ConfigRegion(&MPU_InitStruct);
 
  /* Configure the MPU attributes for SDRAM 16MB to normal memory Cacheable */
  MPU_InitStruct.Enable           = MPU_REGION_ENABLE;
  MPU_InitStruct.Number           = MPU_REGION_NUMBER5;
  MPU_InitStruct.BaseAddress      = 0x60000000;
  MPU_InitStruct.Size             = MPU_REGION_SIZE_16MB;
  MPU_InitStruct.SubRegionDisable = 0x0;
  MPU_InitStruct.TypeExtField     = MPU_TEX_LEVEL0;
  MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
  MPU_InitStruct.DisableExec      = MPU_INSTRUCTION_ACCESS_ENABLE;
  MPU_InitStruct.IsShareable      = MPU_ACCESS_NOT_SHAREABLE;
  MPU_InitStruct.IsCacheable      = MPU_ACCESS_CACHEABLE;
  MPU_InitStruct.IsBufferable     = MPU_ACCESS_NOT_BUFFERABLE;
  HAL_MPU_ConfigRegion(&MPU_InitStruct);

  /* Enable the MPU */
  HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);

}


/*******************************************************************************
* FUNCTION:
*   EwBspConfigSystem
*
* DESCRIPTION:
*   Configuration of system components (CPU clock, memory, qspi, ...)
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspConfigSystem( void )
{
  MPU_Config();

  /* Disable FMC bank1 (0x6000 0000 - 0x6FFF FFFF), since it is not used.
     This setting avoids unnedded speculative access to the first FMC bank.
     See also STM Application Note AN4861 */
  FMC_Bank1->BTCR[0] = 0x000030D2;

  /* Enable I-Cache */
  SCB_EnableICache();

  /* Enable D-Cache */
  SCB_EnableDCache();

  HAL_Init();

  SystemClock_Config();

  HAL_EnableFMCMemorySwapping();
  BSP_SDRAM_Init();

#if EW_USE_QSPI_FLASH == 1

  BSP_QSPI_Init();
  BSP_QSPI_EnableMemoryMappedMode();

  /* configure QSPI: LPTR register with the low-power time out value */
  WRITE_REG( QUADSPI->LPTR, 0xFFF );

#endif
}


/* msy */
