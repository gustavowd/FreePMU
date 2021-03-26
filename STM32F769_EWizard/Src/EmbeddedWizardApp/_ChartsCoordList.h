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

#ifndef _ChartsCoordList_H
#define _ChartsCoordList_H

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

/* Forward declaration of the class Charts::CoordList */
#ifndef _ChartsCoordList_
  EW_DECLARE_CLASS( ChartsCoordList )
#define _ChartsCoordList_
#endif


/* The class 'CoordList' implements a list of X/Y coordinates used to describe a 
   complete graph. */
EW_DEFINE_FIELDS( ChartsCoordList, XObject )
  EW_VARIABLE( firstCoord,      ChartsCoord )
  EW_VARIABLE( lastCoord,       ChartsCoord )
  EW_PROPERTY( NoOfItems,       XInt32 )
  EW_PROPERTY( MaxNoOfItems,    XInt32 )
EW_END_OF_FIELDS( ChartsCoordList )

/* Virtual Method Table (VMT) for the class : 'Charts::CoordList' */
EW_DEFINE_METHODS( ChartsCoordList, XObject )
EW_END_OF_METHODS( ChartsCoordList )

/* The method ClearList is used to clear the list of coordinates. */
void ChartsCoordList_ClearList( ChartsCoordList _this );

/* The method AddCoord stores the given coordinate at the end of the chained list 
   of coordinates. */
void ChartsCoordList_AddCoord( ChartsCoordList _this, XFloat aX, XFloat aY );

/* 'C' function for method : 'Charts::CoordList.OnSetMaxNoOfItems()' */
void ChartsCoordList_OnSetMaxNoOfItems( ChartsCoordList _this, XInt32 value );

#ifdef __cplusplus
  }
#endif

#endif /* _ChartsCoordList_H */

/* Embedded Wizard */
