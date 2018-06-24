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

#ifndef _ChartsGraph_H
#define _ChartsGraph_H

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

#include "_CoreGroup.h"
#include "_ViewsRectangle.h"

/* Forward declaration of the class Charts::CoordList */
#ifndef _ChartsCoordList_
  EW_DECLARE_CLASS( ChartsCoordList )
#define _ChartsCoordList_
#endif

/* Forward declaration of the class Charts::Graph */
#ifndef _ChartsGraph_
  EW_DECLARE_CLASS( ChartsGraph )
#define _ChartsGraph_
#endif

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
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

/* Forward declaration of the class Resources::Bitmap */
#ifndef _ResourcesBitmap_
  EW_DECLARE_CLASS( ResourcesBitmap )
#define _ResourcesBitmap_
#endif


/* The class 'Graph' implements a GUI component for displaying a complete graph 
   diagram. The data for the single dots and lines are defined within a @CoordList. */
EW_DEFINE_FIELDS( ChartsGraph, CoreGroup )
  EW_OBJECT  ( Background,      ViewsRectangle )
  EW_PROPERTY( Coordinates,     ChartsCoordList )
  EW_PROPERTY( LineColor,       XColor )
  EW_PROPERTY( LineWidth,       XFloat )
  EW_PROPERTY( DotColor,        XColor )
  EW_PROPERTY( DotWidth,        XFloat )
  EW_PROPERTY( CoordOrigin,     XPoint )
  EW_PROPERTY( PixelPerUnit,    XPoint )
  EW_PROPERTY( BackColor,       XColor )
  EW_PROPERTY( HorzGridColor,   XColor )
  EW_PROPERTY( VertGridColor,   XColor )
  EW_PROPERTY( GridDistance,    XPoint )
  EW_PROPERTY( LineBitmap,      ResourcesBitmap )
  EW_PROPERTY( DotBitmap,       ResourcesBitmap )
  EW_PROPERTY( DotBitmapIndex,  XInt32 )
EW_END_OF_FIELDS( ChartsGraph )

/* Virtual Method Table (VMT) for the class : 'Charts::Graph' */
EW_DEFINE_METHODS( ChartsGraph, CoreGroup )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreView _this )
  EW_METHOD( Draw,              void )( ChartsGraph _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreGroup _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreGroup _this, CoreView value )
  EW_METHOD( OnSetOpacity,      void )( CoreGroup _this, XInt32 value )
  EW_METHOD( DispatchEvent,     XObject )( CoreGroup _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreGroup _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateLayout,      void )( CoreGroup _this, XPoint aSize )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreGroup _this, XRect aArea )
  EW_METHOD( Restack,           void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
  EW_METHOD( Add,               void )( CoreGroup _this, CoreView aView, XInt32 
    aOrder )
EW_END_OF_METHODS( ChartsGraph )

/* The method Draw() is invoked automatically if parts of the view should be redrawn 
   on the screen. This can occur when e.g. the view has been moved or the appearance 
   of the view has changed before.
   Draw() is invoked automatically by the framework, you never will need to invoke 
   this method directly. However you can request an invocation of this method by 
   calling the method InvalidateArea() of the views @Owner. Usually this is also 
   unnecessary unless you are developing your own view.
   The passed parameters determine the drawing destination aCanvas and the area 
   to redraw aClip in the coordinate space of the canvas. The parameter aOffset 
   contains the displacement between the origin of the views owner and the origin 
   of the canvas. You will need it to convert views coordinates into these of the 
   canvas.
   The parameter aOpacity contains the opacity descended from this view's @Owner. 
   It lies in range 0 .. 255. If the view implements its own 'Opacity', 'Color', 
   etc. properties, the Draw() method should calculate the resulting real opacity 
   by mixing the values of these properties with the one passed in aOpacity parameter.
   The parameter aBlend contains the blending mode descended from this view's @Owner. 
   It determines, whether the view should be drawn with alpha-blending active or 
   not. If aBlend is false, the outputs of the view should overwrite the corresponding 
   pixel in the drawing destination aCanvas. If aBlend is true, the outputs should 
   be mixed with the pixel already stored in aCanvas. For this purpose all Graphics 
   Engine functions provide a parameter to specify the mode for the respective drawing 
   operation. If the view implements its own 'Blend' property, the Draw() method 
   should calculate the resulting real blend mode by using logical AND operation 
   of the value of the property and the one passed in aBlend parameter. */
void ChartsGraph_Draw( ChartsGraph _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend );

/* 'C' function for method : 'Charts::Graph.OnSetCoordinates()' */
void ChartsGraph_OnSetCoordinates( ChartsGraph _this, ChartsCoordList value );

/* 'C' function for method : 'Charts::Graph.OnSetLineColor()' */
void ChartsGraph_OnSetLineColor( ChartsGraph _this, XColor value );

/* 'C' function for method : 'Charts::Graph.OnSetLineWidth()' */
void ChartsGraph_OnSetLineWidth( ChartsGraph _this, XFloat value );

/* 'C' function for method : 'Charts::Graph.OnSetDotColor()' */
void ChartsGraph_OnSetDotColor( ChartsGraph _this, XColor value );

/* 'C' function for method : 'Charts::Graph.OnSetDotWidth()' */
void ChartsGraph_OnSetDotWidth( ChartsGraph _this, XFloat value );

/* 'C' function for method : 'Charts::Graph.OnSetCoordOrigin()' */
void ChartsGraph_OnSetCoordOrigin( ChartsGraph _this, XPoint value );

/* 'C' function for method : 'Charts::Graph.OnSetPixelPerUnit()' */
void ChartsGraph_OnSetPixelPerUnit( ChartsGraph _this, XPoint value );

/* 'C' function for method : 'Charts::Graph.OnSetBackColor()' */
void ChartsGraph_OnSetBackColor( ChartsGraph _this, XColor value );

/* 'C' function for method : 'Charts::Graph.OnSetHorzGridColor()' */
void ChartsGraph_OnSetHorzGridColor( ChartsGraph _this, XColor value );

/* 'C' function for method : 'Charts::Graph.OnSetVertGridColor()' */
void ChartsGraph_OnSetVertGridColor( ChartsGraph _this, XColor value );

#ifdef __cplusplus
  }
#endif

#endif /* _ChartsGraph_H */

/* Embedded Wizard */
