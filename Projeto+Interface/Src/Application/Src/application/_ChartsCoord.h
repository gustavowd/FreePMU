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
* Profile  : STM32F746
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#ifndef _ChartsCoord_H
#define _ChartsCoord_H

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

/* Forward declaration of the class Charts::Coord */
#ifndef _ChartsCoord_
  EW_DECLARE_CLASS( ChartsCoord )
#define _ChartsCoord_
#endif


/* The class 'Coord' stores a single X/Y coordinate of a graph diagram. */
EW_DEFINE_FIELDS( ChartsCoord, XObject )
  EW_VARIABLE( X,               XFloat )
  EW_VARIABLE( Y,               XFloat )
  EW_VARIABLE( next,            ChartsCoord )
EW_END_OF_FIELDS( ChartsCoord )

/* Virtual Method Table (VMT) for the class : 'Charts::Coord' */
EW_DEFINE_METHODS( ChartsCoord, XObject )
EW_END_OF_METHODS( ChartsCoord )

#ifdef __cplusplus
  }
#endif

#endif /* _ChartsCoord_H */

/* Embedded Wizard */
