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

#ifndef _ApplicationPlotterTripleGraph769_H
#define _ApplicationPlotterTripleGraph769_H

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

#include "_ApplicationPlotterTripleGraph.h"
#include "_GraphicsPath.h"
#include "_ViewsBorder.h"
#include "_ViewsLine.h"
#include "_ViewsStrokePath.h"

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::Group */
#ifndef _CoreGroup_
  EW_DECLARE_CLASS( CoreGroup )
#define _CoreGroup_
#endif

/* Forward declaration of the class Core::KeyPressHandler */
#ifndef _CoreKeyPressHandler_
  EW_DECLARE_CLASS( CoreKeyPressHandler )
#define _CoreKeyPressHandler_
#endif

/* Forward declaration of the class Core::LayoutContext */
#ifndef _CoreLayoutContext_
  EW_DECLARE_CLASS( CoreLayoutContext )
#define _CoreLayoutContext_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif

/* Forward declaration of the class Core::View */
#ifndef _CoreView_
  EW_DECLARE_CLASS( CoreView )
#define _CoreView_
#endif

/* Forward declaration of the class Graphics::Canvas */
#ifndef _GraphicsCanvas_
  EW_DECLARE_CLASS( GraphicsCanvas )
#define _GraphicsCanvas_
#endif


/* Deklaration of class variant : 'Application::PlotterTripleGraph769' */
EW_DEFINE_VFIELDS( ApplicationPlotterTripleGraph769, XObjectVariant, ApplicationPlotterTripleGraph )
EW_END_OF_VFIELDS( ApplicationPlotterTripleGraph769 )

/* Virtual Method Table (VMT) for the class variant : 'Application::PlotterTripleGraph769' */
EW_DEFINE_VMETHODS( ApplicationPlotterTripleGraph769, XObjectVariant, ApplicationPlotterTripleGraph )
  EW_METHOD( AddData,           void )( ApplicationPlotterTripleGraph _this, XFloat 
    dataPointR, XFloat dataPointS, XFloat dataPointT )
  EW_METHOD( OnSetVerticalRatio, void )( ApplicationPlotterTripleGraph _this, XFloat 
    value )
EW_END_OF_VMETHODS( ApplicationPlotterTripleGraph769 )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationPlotterTripleGraph769_Init( ApplicationPlotterTripleGraph _this, 
  XHandle aArg );

/* 'C' function for method : 'Application::PlotterTripleGraph769.AddData()' */
void ApplicationPlotterTripleGraph769_AddData( ApplicationPlotterTripleGraph _this, 
  XFloat dataPointR, XFloat dataPointS, XFloat dataPointT );

/* 'C' function for method : 'Application::PlotterTripleGraph769.OnSetVerticalRatio()' */
void ApplicationPlotterTripleGraph769_OnSetVerticalRatio( ApplicationPlotterTripleGraph _this, 
  XFloat value );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationPlotterTripleGraph769_H */

/* Embedded Wizard */
