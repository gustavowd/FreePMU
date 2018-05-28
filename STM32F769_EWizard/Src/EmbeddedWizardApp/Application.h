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
* Profile  : STM32F769
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#ifndef Application_H
#define Application_H

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

#include "_ApplicationAplic.h"
#include "_ApplicationAplic769.h"
#include "_ApplicationClasse.h"
#include "_ApplicationFFT.h"
#include "_ApplicationFFT769.h"
#include "_ApplicationFase.h"
#include "_ApplicationFase769.h"
#include "_ApplicationFasores.h"
#include "_ApplicationFasores769.h"
#include "_ApplicationFreq.h"
#include "_ApplicationFreq769.h"
#include "_ApplicationMag.h"
#include "_ApplicationMag769.h"
#include "_ApplicationModifiedButton.h"
#include "_ApplicationVNC.h"
#include "_ApplicationVNC769.h"
#include "_ApplicationcontextoMsg.h"
#include "_ApplicationcontextoStatus.h"

/* Bitmap resource : 'Application::flecha' */
EW_DECLARE_BITMAP_RES( Applicationflecha )

/* Bitmap resource : 'Application::grid' */
EW_DECLARE_BITMAP_RES( Applicationgrid )

/* Font resource : 'Application::NumbersM' */
EW_DECLARE_FONT_RES( ApplicationNumbersM )

/* Font resource : 'Application::NumbersP' */
EW_DECLARE_FONT_RES( ApplicationNumbersP )

/* Font resource : 'Application::NumbersG' */
EW_DECLARE_FONT_RES( ApplicationNumbersG )

/* Font resource : 'Application::Arial21' */
EW_DECLARE_FONT_RES( ApplicationArial21 )

/* User defined auto object: 'Application::Autoobjeto' */
EW_DECLARE_AUTOOBJECT( ApplicationAutoobjeto, ApplicationClasse )

/* User defined constant: 'Application::cor_R' */
extern const XColor Applicationcor_R;

/* User defined constant: 'Application::cor_S' */
extern const XColor Applicationcor_S;

/* User defined constant: 'Application::cor_T' */
extern const XColor Applicationcor_T;

#ifdef __cplusplus
  }
#endif

#endif /* Application_H */

/* Embedded Wizard */
