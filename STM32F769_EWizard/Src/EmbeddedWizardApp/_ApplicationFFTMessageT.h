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
* Version  : 9.00
* Profile  : STM32F769
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#ifndef _ApplicationFFTMessageT_H
#define _ApplicationFFTMessageT_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x00090000
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x00090000
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

/* Forward declaration of the class Application::FFTMessageT */
#ifndef _ApplicationFFTMessageT_
  EW_DECLARE_CLASS( ApplicationFFTMessageT )
#define _ApplicationFFTMessageT_
#endif


/* Deklaration of class : 'Application::FFTMessageT' */
EW_DEFINE_FIELDS( ApplicationFFTMessageT, XObject )
  EW_PROPERTY( THD_T_text,      XString )
EW_END_OF_FIELDS( ApplicationFFTMessageT )

/* Virtual Method Table (VMT) for the class : 'Application::FFTMessageT' */
EW_DEFINE_METHODS( ApplicationFFTMessageT, XObject )
EW_END_OF_METHODS( ApplicationFFTMessageT )

/* 'C' function for method : 'Application::FFTMessageT.OnSetTHD_T_text()' */
void ApplicationFFTMessageT_OnSetTHD_T_text( ApplicationFFTMessageT _this, XString 
  value );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationFFTMessageT_H */

/* Embedded Wizard */
