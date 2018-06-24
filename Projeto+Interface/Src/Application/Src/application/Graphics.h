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

#ifndef Graphics_H
#define Graphics_H

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

#include "_GraphicsCanvas.h"
#include "_GraphicsPath.h"
#include "_GraphicsWarpMatrix.h"

/* The definition Graphics::Edges enumerates the parts of a free scalable frame. 
   It is used to determine, which parts should be drawn. */
typedef enum
{
  GraphicsEdgesLeft                     = 0x00000001,
  GraphicsEdgesTop                      = 0x00000002,
  GraphicsEdgesRight                    = 0x00000004,
  GraphicsEdgesBottom                   = 0x00000008,
  GraphicsEdgesInterior                 = 0x00000010
} GraphicsEdges;

/* The definition Graphics::PathJoin enumerates the possible modes how the edges 
   of a path are connected when stroking the path with path thickness greater than 
   1 pixel. It is used to determine how Views::StrokePath should raster the path. */
typedef enum
{
  GraphicsPathJoinBevel                 = 0,
  GraphicsPathJoinMiter                 = 1,
  GraphicsPathJoinRound                 = 2
} GraphicsPathJoin;

/* The definition Graphics::PathCap enumerates the possible modes how the path caps 
   are displayed when stroking the path with path thickness greater than 1 pixel. 
   It is used to determine how Views::StrokePath should raster the path. */
typedef enum
{
  GraphicsPathCapFlat                   = 0,
  GraphicsPathCapSquare                 = 1,
  GraphicsPathCapRound                  = 2,
  GraphicsPathCapTriangle               = 3
} GraphicsPathCap;

#ifdef __cplusplus
  }
#endif

#endif /* Graphics_H */

/* Embedded Wizard */
