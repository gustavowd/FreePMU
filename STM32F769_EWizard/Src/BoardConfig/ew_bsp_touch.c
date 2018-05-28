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
*   This template is responsible to initialize the touch driver of the display
*   hardware and to receive the touch events for the UI application.
*
*******************************************************************************/

#include "stm32f7xx_hal.h"
#include "stm32f769i_discovery.h"
#include "stm32f769i_discovery_ts.h"

#include "ewrte.h"
#include "ewgfxdriver.h"
#include "ewextgfx.h"

#include "ew_bsp_clock.h"
#include "ew_bsp_touch.h"

static int                    TouchAreaWidth  = 0;
static int                    TouchAreaHeight = 0;

/* timer tick for Embedded Wizard UI applications */
extern unsigned int           EmWiSystemTicks;


/*******************************************************************************
* FUNCTION:
*   EwBspConfigTouch
*
* DESCRIPTION:
*   Configure the touch driver.
*
* ARGUMENTS:
*   aWidth  - Width of the toucharea (framebuffer) in pixel.
*   aHeight - Height of the toucharea (framebuffer) in pixel.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspConfigTouch( int aWidth, int aHeight )
{
  TouchAreaWidth  = aWidth;
  TouchAreaHeight = aHeight;

  BSP_TS_Init( aWidth, aHeight );
}


/*******************************************************************************
* FUNCTION:
*   EwBspGetTouchPosition
*
* DESCRIPTION:
*   The function EwBspGetTouchPosition reads the current touch position from the
*   touch driver and returns the current position and status. The orientation
*   of the touch positions is adjusted to match GUI coordinates.
*
* ARGUMENTS:
*   aPos - Pointer to XPoint structure to return the current position.
*
* RETURN VALUE:
*   Returns 1 if a touch event is detected, otherwise 0.
*
*******************************************************************************/
int EwBspGetTouchPosition( XPoint* aPos )
{
  static TS_StateTypeDef touchPadState;

  /* access touch driver to receive current touch status and position */
  CPU_LOAD_SET_IDLE();
  BSP_TS_GetState( &touchPadState );
  CPU_LOAD_SET_ACTIVE();

  if ( touchPadState.touchDetected )
  {
    /* check for valid coordinates */
    if (( touchPadState.touchX[ 0 ] > 0 ) && ( touchPadState.touchX[ 0 ] < TouchAreaWidth - 1 ) &&
        ( touchPadState.touchY[ 0 ] > 0 ) && ( touchPadState.touchY[ 0 ] < TouchAreaHeight - 1 ))
    {
      #if ( EW_SURFACE_ROTATION == 90 )

        aPos->X = touchPadState.touchY[ 0 ];
        aPos->Y = TouchAreaWidth  - touchPadState.touchX[ 0 ];

      #elif ( EW_SURFACE_ROTATION == 270 )

        aPos->X = TouchAreaHeight - touchPadState.touchY[ 0 ];
        aPos->Y = touchPadState.touchX[ 0 ];

      #elif ( EW_SURFACE_ROTATION == 180 )

        aPos->X = TouchAreaWidth  - touchPadState.touchX[ 0 ];
        aPos->Y = TouchAreaHeight - touchPadState.touchY[ 0 ];

      #else

        aPos->X = touchPadState.touchX[ 0 ];
        aPos->Y = touchPadState.touchY[ 0 ];

      #endif

      /* return valid touch event */
      return 1;
    }
  }
  /* return no touch event */
  return 0;
}


/* msy */
