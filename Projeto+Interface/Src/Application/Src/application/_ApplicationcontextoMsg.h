/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 8.30
* Profile  : STM32F746
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#ifndef _ApplicationcontextoMsg_H
#define _ApplicationcontextoMsg_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x0008001E
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x0008001E
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

/* Forward declaration of the class Application::contextoMsg */
#ifndef _ApplicationcontextoMsg_
  EW_DECLARE_CLASS( ApplicationcontextoMsg )
#define _ApplicationcontextoMsg_
#endif


/* Deklaration of class : 'Application::contextoMsg' */
EW_DEFINE_FIELDS( ApplicationcontextoMsg, XObject )
  EW_PROPERTY( message,         XString )
EW_END_OF_FIELDS( ApplicationcontextoMsg )

/* Virtual Method Table (VMT) for the class : 'Application::contextoMsg' */
EW_DEFINE_METHODS( ApplicationcontextoMsg, XObject )
EW_END_OF_METHODS( ApplicationcontextoMsg )

/* 'C' function for method : 'Application::contextoMsg.OnSetmessage()' */
void ApplicationcontextoMsg_OnSetmessage( ApplicationcontextoMsg _this, XString 
  value );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationcontextoMsg_H */

/* Embedded Wizard */
