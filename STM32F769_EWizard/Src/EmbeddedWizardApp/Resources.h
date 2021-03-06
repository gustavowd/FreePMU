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

#ifndef Resources_H
#define Resources_H

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

#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"

/* Bitmap resource : 'Resources::WhiteBitmap' */
EW_DECLARE_BITMAP_RES( ResourcesWhiteBitmap )

/* Bitmap resource containing diverse icons you can use in your project. Usually 
   the icons are used to represent keys within a virtual keyboard. The icons have 
   the size 54x54 pixel. */
EW_DECLARE_BITMAP_RES( ResourcesKeyIconsLarge )

/* Bitmap resource containing diverse icons you can use in your project. The icons 
   have the size 36x36 pixel. */
EW_DECLARE_BITMAP_RES( ResourcesSymbolIconsMedium )

/* Bitmap resource containing diverse icons you can use in your project. The icons 
   have the size 54x54 pixel. */
EW_DECLARE_BITMAP_RES( ResourcesSymbolIconsLarge )

/* Bitmap resource containing diverse icons you can use in your project. Usually 
   the icons are used to represent navigation buttons, etc.. The icons have the 
   size 36x36 pixel. */
EW_DECLARE_BITMAP_RES( ResourcesNavigationIconsMedium )

/* Bitmap resource containing diverse icons you can use in your project. Usually 
   the icons are used to represent navigation buttons, etc.. The icons have the 
   size 54x54 pixel. */
EW_DECLARE_BITMAP_RES( ResourcesNavigationIconsLarge )

#ifdef __cplusplus
  }
#endif

#endif /* Resources_H */

/* Embedded Wizard */
