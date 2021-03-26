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

#ifndef Views_H
#define Views_H

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

#include "_ViewsBorder.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsStrokePath.h"
#include "_ViewsText.h"
#include "_ViewsWarpImage.h"
#include "_ViewsWarpView.h"

/* The definition Views::ImageAlignment determines the set of constraints to apply 
   on a bitmap if its size differ from the size of the view where the bitmap is 
   shown. Depending on the active constraints a bitmap can be aligned or stretched 
   within the view's area. */
typedef enum
{
  ViewsImageAlignmentAlignHorzLeft      = 0x00000001,
  ViewsImageAlignmentAlignHorzCenter    = 0x00000002,
  ViewsImageAlignmentAlignHorzRight     = 0x00000004,
  ViewsImageAlignmentAlignVertTop       = 0x00000008,
  ViewsImageAlignmentAlignVertCenter    = 0x00000010,
  ViewsImageAlignmentAlignVertBottom    = 0x00000020,
  ViewsImageAlignmentScaleToFill        = 0x00000040,
  ViewsImageAlignmentScaleToFit         = 0x00000080,
  ViewsImageAlignmentStretchToFill      = 0x00000100
} ViewsImageAlignment;

/* The definition Views::TextAlignment determines the set of constraints to apply 
   on text rows and blocks if their size differ from the size of the view where 
   the text is shown. Depending on the active constraints the text rows can be aligned 
   horizontally and text blocks vertically. */
typedef enum
{
  ViewsTextAlignmentAlignHorzLeft       = 0x00000001,
  ViewsTextAlignmentAlignHorzCenter     = 0x00000002,
  ViewsTextAlignmentAlignHorzRight      = 0x00000004,
  ViewsTextAlignmentAlignVertTop        = 0x00000008,
  ViewsTextAlignmentAlignVertCenter     = 0x00000010,
  ViewsTextAlignmentAlignVertBottom     = 0x00000020,
  ViewsTextAlignmentAlignHorzJustified  = 0x00000040
} ViewsTextAlignment;

#ifdef __cplusplus
  }
#endif

#endif /* Views_H */

/* Embedded Wizard */
