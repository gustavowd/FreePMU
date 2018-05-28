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
*   This template provides access to some LEDs and buttons of the board.
*
*******************************************************************************/

#include "stm32f7xx_hal.h"
#include "stm32f7xx_hal_gpio.h"
#include "stm32f769i_discovery.h"

#include "ew_bsp_inout.h"

#define EW_LED                LED2

static TButtonCallback        ButtonCallback = NULL;


/*******************************************************************************
* FUNCTION:
*   HAL_GPIO_EXTI_Callback
*
* DESCRIPTION:
*   The GPIO interrupt callback function.
*
* ARGUMENTS:
*   GPIO_Pin - the gpio pin.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void HAL_GPIO_EXTI_Callback( uint16_t GPIO_Pin )
{
  if ( GPIO_Pin == USER_BUTTON_PIN )
  {
    GPIO_PinState pinState;

    pinState = HAL_GPIO_ReadPin( USER_BUTTON_GPIO_PORT, GPIO_Pin );

    if ( ButtonCallback )
      ButtonCallback( pinState );
  }
}


/*******************************************************************************
* FUNCTION:
*   EXTI0_IRQHandler
*
* DESCRIPTION:
*   EXTI0_IRQHandler Interrupt Handler.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EXTI0_IRQHandler( void )
{
  HAL_GPIO_EXTI_IRQHandler( USER_BUTTON_PIN );
}


/*******************************************************************************
* FUNCTION:
*   EwBspConfigButton
*
* DESCRIPTION:
*   Configures one hardware button of the board used for demo applications.
*
* ARGUMENTS:
*   aButtonCallback - The button callback.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspConfigButton( TButtonCallback aButtonCallback )
{
  GPIO_InitTypeDef GPIO_InitStructure;

  /* Enable GPIOC clock */
  USER_BUTTON_GPIO_CLK_ENABLE();

  /* Configure PC.13 pin as input floating */
  GPIO_InitStructure.Mode = GPIO_MODE_IT_RISING_FALLING;
  GPIO_InitStructure.Pull = GPIO_NOPULL;
  GPIO_InitStructure.Pin  = USER_BUTTON_PIN;
  HAL_GPIO_Init( USER_BUTTON_GPIO_PORT, &GPIO_InitStructure );

  /* Enable and set EXTI lines 0 Interrupt to the lowest priority */
  HAL_NVIC_SetPriority( USER_BUTTON_EXTI_IRQn, 8, 0 );
  HAL_NVIC_EnableIRQ( USER_BUTTON_EXTI_IRQn );

  ButtonCallback = aButtonCallback;
}


/*******************************************************************************
* FUNCTION:
*   EwBspConfigLed
*
* DESCRIPTION:
*   Configures one LED of the board used for demo applications.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspConfigLed( void )
{
  BSP_LED_Init( EW_LED );
}


/*******************************************************************************
* FUNCTION:
*   EwBspLedOn
*
* DESCRIPTION:
*   Switch LED on (used for demo applications).
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspLedOn( void )
{
  BSP_LED_On( EW_LED );
}


/*******************************************************************************
* FUNCTION:
*   EwBspLedOff
*
* DESCRIPTION:
*   Switch LED off (used for demo applications).
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspLedOff( void )
{
  BSP_LED_Off( EW_LED );
}


/* msy */
