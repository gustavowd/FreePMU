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
*   This template is responsible to initialize the system clock of the hardware,
*   to provide a timer tick for the Embedded Wizard UI application and to get
*   access to the realtime clock (RTC). Additionally, this file contains some
*   performance measurements to analyse the CPU usage of the UI application.
*
*******************************************************************************/

#include "stm32f7xx_hal.h"
#include "stm32f769i_discovery.h"

#include "ew_bsp_clock.h"

/* Defines to select adaquate clock source */
#define RTC_CLOCK_SOURCE_LSI
#undef RTC_CLOCK_SOURCE_LSE

#ifdef RTC_CLOCK_SOURCE_LSI
  #define RTC_ASYNCH_PREDIV   0x7F
  #define RTC_SYNCH_PREDIV    0xF9
#endif

#ifdef RTC_CLOCK_SOURCE_LSE
  #define RTC_ASYNCH_PREDIV   0x7F
  #define RTC_SYNCH_PREDIV    0x00FF
#endif

/* timer tick for Embedded Wizard UI applications */
unsigned int                  EmWiSystemTicks = 0;

/* RTC handler declaration */
static RTC_HandleTypeDef      RtcHandle;

#if EW_CPU_LOAD_MEASURING == 1

  static unsigned long        WorkingTime  = 0;
  static unsigned long        SleepingTime = 0;
  static unsigned long        prevCycCnt   = 0;

#endif


/*******************************************************************************
* FUNCTION:
*   EwBspConfigSystemTick
*
* DESCRIPTION:
*   Configure the system tick counter.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspConfigSystemTick( void )
{
  EmWiSystemTicks = 0;
  HAL_SYSTICK_Config( SystemCoreClock / 1000 );
}


/*******************************************************************************
* FUNCTION:
*   EwBspSystemTickIncrement
*
* DESCRIPTION:
*   The function EwBspSystemTickIncrement increments the millisecond counter,
*   which is used by the Runtime Environmet (RTE) to trigger timer events.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspSystemTickIncrement( void )
{
  EmWiSystemTicks++;
}


/**
  * @brief RTC MSP Initialization
  *        This function configures the hardware resources used in this example
  * @param hrtc: RTC handle pointer
  *
  * @note  Care must be taken when HAL_RCCEx_PeriphCLKConfig() is used to select
  *        the RTC clock source; in this case the Backup domain will be reset in
  *        order to modify the RTC Clock source, as consequence RTC registers (including
  *        the backup registers) and RCC_BDCR register are set to their reset values.
  *
  * @retval None
  */
void HAL_RTC_MspInit(RTC_HandleTypeDef *hrtc)
{
  RCC_OscInitTypeDef        RCC_OscInitStruct;
  RCC_PeriphCLKInitTypeDef  PeriphClkInitStruct;

  /*##-1- Configure LSE as RTC clock source ##################################*/
  RCC_OscInitStruct.OscillatorType =  RCC_OSCILLATORTYPE_LSI | RCC_OSCILLATORTYPE_LSE;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  RCC_OscInitStruct.LSEState = RCC_LSE_ON;
  RCC_OscInitStruct.LSIState = RCC_LSI_OFF;
  if(HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    return;
  }

  PeriphClkInitStruct.PeriphClockSelection = RCC_PERIPHCLK_RTC;
  PeriphClkInitStruct.RTCClockSelection = RCC_RTCCLKSOURCE_LSE;
  if(HAL_RCCEx_PeriphCLKConfig(&PeriphClkInitStruct) != HAL_OK)
  {
    return;
  }

  /*##-2- Enable RTC peripheral Clocks #######################################*/
  /* Enable RTC Clock */
  __HAL_RCC_RTC_ENABLE();
}

/**
  * @brief RTC MSP De-Initialization
  *        This function frees the hardware resources used in this example:
  *          - Disable the Peripheral's clock
  * @param hrtc: RTC handle pointer
  * @retval None
  */
void HAL_RTC_MspDeInit(RTC_HandleTypeDef *hrtc)
{
  /*##-1- Reset peripherals ##################################################*/
   __HAL_RCC_RTC_DISABLE();
}


/*******************************************************************************
* FUNCTION:
*   EwBspConfigRealTimeClock
*
* DESCRIPTION:
*   Configures the Real Time Clock.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspConfigRealTimeClock( void )
{
  RtcHandle.Instance = RTC;

  /* Configure RTC prescaler and RTC data registers */
  /* RTC configured as follows:
     - Hour Format    = Format 24
     - Asynch Prediv  = Value according to source clock
     - Synch Prediv   = Value according to source clock
     - OutPut         = Output Disable
     - OutPutPolarity = High Polarity
     - OutPutType     = Open Drain */
  RtcHandle.Init.HourFormat     = RTC_HOURFORMAT_24;
  RtcHandle.Init.AsynchPrediv   = RTC_ASYNCH_PREDIV;
  RtcHandle.Init.SynchPrediv    = RTC_SYNCH_PREDIV;
  RtcHandle.Init.OutPut         = RTC_OUTPUT_DISABLE;
  RtcHandle.Init.OutPutPolarity = RTC_OUTPUT_POLARITY_HIGH;
  RtcHandle.Init.OutPutType     = RTC_OUTPUT_TYPE_OPENDRAIN;

  HAL_RTC_Init( &RtcHandle );
}


/*******************************************************************************
* FUNCTION:
*   EwBspGetTime
*
* DESCRIPTION:
*   Returns the current time in seconds since 01.01.1970.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   The current time in seconds since 01.01.1970.
*
*******************************************************************************/
unsigned long EwBspGetTime( void )
{
  #define TicksPerSecond    ( 1UL )
  #define TicksPerMinute    ( TicksPerSecond * 60UL )
  #define TicksPerHour      ( TicksPerMinute * 60UL )
  #define TicksPerDay       ( TicksPerHour   * 24UL )

  const unsigned long DaysToMonth[] =
  {
    0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365
  };

  const unsigned long DaysToMonthInLeapYear[] =
  {
    0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366
  };

  RTC_TimeTypeDef currentTime;
  RTC_DateTypeDef currentDate;

  HAL_RTC_GetTime( &RtcHandle, &currentTime, RTC_FORMAT_BIN );
  HAL_RTC_GetDate( &RtcHandle, &currentDate, RTC_FORMAT_BIN );

  unsigned long   days;
  unsigned long   year   = currentDate.Year;
  unsigned long   month  = currentDate.Month;
  unsigned long   day    = currentDate.Date;
  unsigned long   hour   = currentTime.Hours;
  unsigned long   minute = currentTime.Minutes;
  unsigned long   second = currentTime.Seconds;
  unsigned long   timeInSeconds;

  /* year is the number of years since 2000 */
  /* calculate number of days since 01.01.1970 until begin of current
     year including the additional days of leap years */

  days = (year + 30) * 365 + (year + 27) / 4;

  if (year & 0x3)
  {
    days += DaysToMonth[month - 1];
  }
  else
  {
    days += DaysToMonthInLeapYear[month - 1];
  }

  days += day;

  timeInSeconds =
    days   * TicksPerDay +
    hour   * TicksPerHour +
    minute * TicksPerMinute +
    second;

  return timeInSeconds;
}


#if EW_CPU_LOAD_MEASURING == 1

/* helper function to initialize measuring unit */
static void CpuLoadInit()
{
  /* Enable TRC */
  CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;

  /* Unlock DWT registers */
  if ((*(uint32_t*)0xE0001FB4) & 1)
    *(uint32_t*)0xE0001FB0 = 0xC5ACCE55;

  /* clear the cycle counter */
  DWT->CYCCNT = 0;

  /* start the cycle counter */
  DWT->CTRL = 0x40000001;

  /* initialize counters */
  WorkingTime   = 0;
  SleepingTime  = 0;
  prevCycCnt    = 0;
}

/* helper function to get counter value since last call */
static unsigned long CpuLoadGetCounter()
{
  unsigned long cycCnt;
  unsigned long result;

  cycCnt = DWT->CYCCNT;
  if ( cycCnt > prevCycCnt )
    result = cycCnt - prevCycCnt;
  else
    result = prevCycCnt - cycCnt;
  prevCycCnt = cycCnt;

  return result;
}

#endif


/*******************************************************************************
* FUNCTION:
*   EwBspGetCpuLoad
*
* DESCRIPTION:
*   Returns the current CPU load as percent value.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   The current CPU load.
*
*******************************************************************************/
 int EwBspGetCpuLoad( void )
{
  int cpuLoad = 0;

  #if EW_CPU_LOAD_MEASURING == 1

    /* get actual counter value */
    WorkingTime += CpuLoadGetCounter();

    /* calculate CPU load as percent value */
    cpuLoad = ( int ) ( WorkingTime / (( SleepingTime + WorkingTime ) / 100 ));

    /* clear accumulated counter values */
    WorkingTime  = 0;
    SleepingTime = 0;

  #endif

  return cpuLoad;
}


/*******************************************************************************
* FUNCTION:
*   EwBspCpuLoadSetActive
*
* DESCRIPTION:
*   Starts the CPU load counting. Call this function whenever CPU processing
*   is needed.
*
* ARGUMENTS:
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspCpuLoadSetActive( void )
{
  #if EW_CPU_LOAD_MEASURING == 1

    static char initialized = 0;

    if ( !initialized )
    {
      CpuLoadInit();
      initialized = 1;
    }

    SleepingTime += CpuLoadGetCounter();

  #endif
}


/*******************************************************************************
* FUNCTION:
*   EwBspCpuLoadSetIdle
*
* DESCRIPTION:
*   Stops the CPU load counting. Call this function whenever CPU processing is
*   currently not needed since the program execution is waiting for some system
*   event.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspCpuLoadSetIdle( void )
{
  #if EW_CPU_LOAD_MEASURING == 1

    WorkingTime += CpuLoadGetCounter();

  #endif
}


/* msy */
