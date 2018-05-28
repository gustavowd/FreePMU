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

#include "ewlocale.h"
#include "_CoreGroup.h"
#include "_CoreTimer.h"
#include "_EffectsEffectTimerClass.h"
#include "_GraphicsCanvas.h"
#include "_GraphicsWarpMatrix.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_ViewsWarpImage.h"
#include "_ViewsWarpView.h"
#include "Core.h"
#include "Effects.h"
#include "Graphics.h"
#include "Resources.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x00000012, /* ratio 111.11 % */
  0xB8000F00, 0x00000452, 0x1A130717, 0x2020085C, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XColor _Const0000 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XPoint _Const0001 = { 1, 1 };
static const XPoint _Const0002 = { 0, 0 };
static const XRect _Const0003 = {{ 0, 0 }, { 0, 0 }};
static const XPoint _Const0004 = { 65535, 65535 };
static const XStringRes _Const0005 = { _StringsDefault0, 0x0003 };

#ifndef EW_DONT_CHECK_INDEX
  /* This function is used to check the indices when accessing an array.
     If you don't want this verification add the define EW_DONT_CHECK_INDEX
     to your Makefile or project settings. */
  static int EwCheckIndex( int aIndex, int aRange, const char* aFile, int aLine )
  {
    if (( aIndex < 0 ) || ( aIndex >= aRange ))
    {
      EwPrint( "[FATAL ERROR in %s:%d] Array index %d out of bounds %d",
                aFile, aLine, aIndex, aRange );
      EwPanic();
    }
    return aIndex;
  }

  #define EwCheckIndex( aIndex, aRange ) \
    EwCheckIndex( aIndex, aRange, __FILE__, __LINE__ )
#else
  #define EwCheckIndex( aIndex, aRange ) aIndex
#endif

/* Initializer for the class 'Views::Line' */
void ViewsLine__Init( ViewsLine _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreLineView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsLine );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Width2 = 1;
  _this->Width1 = 1;
  _this->Color2 = _Const0000;
  _this->Color1 = _Const0000;
}

/* Re-Initializer for the class 'Views::Line' */
void ViewsLine__ReInit( ViewsLine _this )
{
  /* At first re-initialize the super class ... */
  CoreLineView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::Line' */
void ViewsLine__Done( ViewsLine _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsLine );

  /* Don't forget to deinitialize the super class ... */
  CoreLineView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::Line' */
void ViewsLine__Mark( ViewsLine _this )
{
  EwMarkObject( _this->whiteBitmap );

  /* Give the super class a chance to mark its objects and references */
  CoreLineView__Mark( &_this->_Super );
}

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
void ViewsLine_Draw( ViewsLine _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XInt32 w1 = _this->Width1;
  XInt32 w2 = _this->Width2;
  XPoint p1 = EwMovePointPos( _this->Super1.Point1, aOffset );
  XPoint p2 = EwMovePointPos( _this->Super1.Point2, aOffset );
  XColor c1 = _this->Color1;
  XColor c2 = _this->Color2;

  if ( !EwCompPoint( p1, p2 ))
    return;

  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended 
  ) == CoreViewStateAlphaBlended ));
  aOpacity = aOpacity + 1;

  if ( aOpacity < 256 )
  {
    c1.Alpha = (XUInt8)(( aOpacity * c1.Alpha ) >> 8 );
    c2.Alpha = (XUInt8)(( aOpacity * c2.Alpha ) >> 8 );
  }

  if (( w1 == 1 ) && ( w2 == 1 ))
    GraphicsCanvas_DrawLine( aCanvas, aClip, EwMovePointPos( _this->Super1.Point1, 
    aOffset ), EwMovePointPos( _this->Super1.Point2, aOffset ), c1, c2, aBlend );
  else
  {
    XFloat fw1 = (XFloat)w1 / 2.000000f;
    XFloat fw2 = (XFloat)w2 / 2.000000f;
    XFloat fp1X = (XFloat)p1.X;
    XFloat fp1Y = (XFloat)p1.Y;
    XFloat fp2X = (XFloat)p2.X;
    XFloat fp2Y = (XFloat)p2.Y;
    XFloat dirX = fp2X - fp1X;
    XFloat dirY = fp2Y - fp1Y;
    XFloat len = EwMathSqrt(( dirX * dirX ) + ( dirY * dirY ));
    dirX = dirX / len;
    dirY = dirY / len;
    GraphicsCanvas_FillPolygon( aCanvas, aClip, fp1X + ( dirY * fw1 ), fp1Y - ( 
    dirX * fw1 ), 1.000000f, fp2X + ( dirY * fw2 ), fp2Y - ( dirX * fw2 ), 1.000000f, 
    fp2X - ( dirY * fw2 ), fp2Y + ( dirX * fw2 ), 1.000000f, fp1X - ( dirY * fw1 
    ), fp1Y + ( dirX * fw1 ), 1.000000f, c1, c2, c2, c1, aBlend );
  }
}

/* The method GetExtent() returns the position and the size of the view relative 
   to the origin of its @Owner. In case of views with a non rectangular shape the 
   method returns the rectangular boundary area enclosing the entire shape. */
XRect ViewsLine_GetExtent( ViewsLine _this )
{
  XInt32 w1 = _this->Width1;
  XInt32 w2 = _this->Width2;
  XPoint p1 = _this->Super1.Point1;
  XPoint p2 = _this->Super1.Point2;
  XFloat fw1;
  XFloat fw2;
  XFloat fp1X;
  XFloat fp1Y;
  XFloat fp2X;
  XFloat fp2Y;
  XFloat dirX;
  XFloat dirY;
  XFloat len;
  XFloat c1x;
  XFloat c1y;
  XFloat c2x;
  XFloat c2y;
  XFloat c3x;
  XFloat c3y;
  XFloat c4x;
  XFloat c4y;
  XFloat left;
  XFloat right;
  XFloat top;
  XFloat bottom;
  XRect r;

  if ((( w1 == 1 ) && ( w2 == 1 )) || !EwCompPoint( p1, p2 ))
    return CoreLineView_GetExtent((CoreLineView)_this );

  fw1 = (XFloat)w1 / 2.000000f;
  fw2 = (XFloat)w2 / 2.000000f;
  fp1X = (XFloat)p1.X;
  fp1Y = (XFloat)p1.Y;
  fp2X = (XFloat)p2.X;
  fp2Y = (XFloat)p2.Y;
  dirX = fp2X - fp1X;
  dirY = fp2Y - fp1Y;
  len = EwMathSqrt(( dirX * dirX ) + ( dirY * dirY ));
  dirX = dirX / len;
  dirY = dirY / len;
  c1x = fp1X + ( dirY * fw1 );
  c1y = fp1Y - ( dirX * fw1 );
  c2x = fp2X + ( dirY * fw2 );
  c2y = fp2Y - ( dirX * fw2 );
  c3x = fp2X - ( dirY * fw2 );
  c3y = fp2Y + ( dirX * fw2 );
  c4x = fp1X - ( dirY * fw1 );
  c4y = fp1Y + ( dirX * fw1 );
  left = c1x;
  right = c1x;
  top = c1y;
  bottom = c1y;

  if ( c2x < left )
    left = c2x;

  if ( c3x < left )
    left = c3x;

  if ( c4x < left )
    left = c4x;

  if ( c2x > right )
    right = c2x;

  if ( c3x > right )
    right = c3x;

  if ( c4x > right )
    right = c4x;

  if ( c2y < top )
    top = c2y;

  if ( c3y < top )
    top = c3y;

  if ( c4y < top )
    top = c4y;

  if ( c2y > bottom )
    bottom = c2y;

  if ( c3y > bottom )
    bottom = c3y;

  if ( c4y > bottom )
    bottom = c4y;

  r = EwNewRect((XInt32)left, (XInt32)top, (XInt32)right, (XInt32)bottom );
  r.Point2 = EwMovePointPos( r.Point2, _Const0001 );
  return r;
}

/* 'C' function for method : 'Views::Line.observerSlot()' */
void ViewsLine_observerSlot( ViewsLine _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));
}

/* 'C' function for method : 'Views::Line.OnSetWidth()' */
void ViewsLine_OnSetWidth( ViewsLine _this, XInt32 value )
{
  if ( value < 1 )
    value = 1;

  if (( value == _this->Width1 ) && ( value == _this->Width2 ))
    return;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  _this->Width1 = value;
  _this->Width2 = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  if (( value != 1 ) && ( _this->whiteBitmap == 0 ))
  {
    _this->whiteBitmap = EwLoadResource( &ResourcesWhiteBitmap, ResourcesBitmap 
    );

    if ( _this->whiteBitmap->Mutable )
      EwAttachObjObserver( EwNewSlot( _this, ViewsLine_observerSlot ), (XObject)_this->whiteBitmap, 
        0 );
  }

  if (( value == 1 ) && ( _this->whiteBitmap != 0 ))
  {
    if ( _this->whiteBitmap->Mutable )
      EwDetachObjObserver( EwNewSlot( _this, ViewsLine_observerSlot ), (XObject)_this->whiteBitmap, 
        0 );

    _this->whiteBitmap = 0;
  }
}

/* 'C' function for method : 'Views::Line.OnSetColor()' */
void ViewsLine_OnSetColor( ViewsLine _this, XColor value )
{
  if ( !EwCompColor( value, _this->Color1 ) && !EwCompColor( value, _this->Color2 
      ))
    return;

  _this->Color1 = value;
  _this->Color2 = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));
}

/* Variants derived from the class : 'Views::Line' */
EW_DEFINE_CLASS_VARIANTS( ViewsLine )
EW_END_OF_CLASS_VARIANTS( ViewsLine )

/* Virtual Method Table (VMT) for the class : 'Views::Line' */
EW_DEFINE_CLASS( ViewsLine, CoreLineView, "Views::Line" )
  CoreLineView_initLayoutContext,
  CoreView_GetRoot,
  ViewsLine_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreLineView_ArrangeView,
  CoreLineView_MoveView,
  ViewsLine_GetExtent,
  CoreView_ChangeViewState,
EW_END_OF_CLASS( ViewsLine )

/* Initializer for the class 'Views::Rectangle' */
void ViewsRectangle__Init( ViewsRectangle _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsRectangle );

  /* ... and initialize objects, variables, properties, etc. */
  _this->ColorBL = _Const0000;
  _this->ColorBR = _Const0000;
  _this->ColorTR = _Const0000;
  _this->ColorTL = _Const0000;
}

/* Re-Initializer for the class 'Views::Rectangle' */
void ViewsRectangle__ReInit( ViewsRectangle _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::Rectangle' */
void ViewsRectangle__Done( ViewsRectangle _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsRectangle );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::Rectangle' */
void ViewsRectangle__Mark( ViewsRectangle _this )
{
  /* Give the super class a chance to mark its objects and references */
  CoreRectView__Mark( &_this->_Super );
}

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
void ViewsRectangle_Draw( ViewsRectangle _this, GraphicsCanvas aCanvas, XRect aClip, 
  XPoint aOffset, XInt32 aOpacity, XBool aBlend )
{
  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended 
  ) == CoreViewStateAlphaBlended ));
  aOpacity = aOpacity + 1;

  if ( aOpacity < 256 )
  {
    XColor ctl = _this->ColorTL;
    XColor ctr = _this->ColorTR;
    XColor cbl = _this->ColorBL;
    XColor cbr = _this->ColorBR;
    ctl.Alpha = (XUInt8)(( aOpacity * ctl.Alpha ) >> 8 );
    ctr.Alpha = (XUInt8)(( aOpacity * ctr.Alpha ) >> 8 );
    cbl.Alpha = (XUInt8)(( aOpacity * cbl.Alpha ) >> 8 );
    cbr.Alpha = (XUInt8)(( aOpacity * cbr.Alpha ) >> 8 );
    GraphicsCanvas_FillRectangle( aCanvas, aClip, EwMoveRectPos( _this->Super1.Bounds, 
    aOffset ), ctl, ctr, cbr, cbl, aBlend );
  }
  else
    GraphicsCanvas_FillRectangle( aCanvas, aClip, EwMoveRectPos( _this->Super1.Bounds, 
    aOffset ), _this->ColorTL, _this->ColorTR, _this->ColorBR, _this->ColorBL, aBlend 
    );
}

/* 'C' function for method : 'Views::Rectangle.OnSetColor()' */
void ViewsRectangle_OnSetColor( ViewsRectangle _this, XColor value )
{
  if ((( !EwCompColor( value, _this->ColorTL ) && !EwCompColor( value, _this->ColorTR 
      )) && !EwCompColor( value, _this->ColorBL )) && !EwCompColor( value, _this->ColorBR 
      ))
    return;

  _this->ColorTL = value;
  _this->ColorTR = value;
  _this->ColorBL = value;
  _this->ColorBR = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* Variants derived from the class : 'Views::Rectangle' */
EW_DEFINE_CLASS_VARIANTS( ViewsRectangle )
EW_END_OF_CLASS_VARIANTS( ViewsRectangle )

/* Virtual Method Table (VMT) for the class : 'Views::Rectangle' */
EW_DEFINE_CLASS( ViewsRectangle, CoreRectView, "Views::Rectangle" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsRectangle_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsRectangle )

/* Initializer for the class 'Views::Border' */
void ViewsBorder__Init( ViewsBorder _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsBorder );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Width = 1;
  _this->ColorBL = _Const0000;
  _this->ColorBR = _Const0000;
  _this->ColorTR = _Const0000;
  _this->ColorTL = _Const0000;
}

/* Re-Initializer for the class 'Views::Border' */
void ViewsBorder__ReInit( ViewsBorder _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::Border' */
void ViewsBorder__Done( ViewsBorder _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsBorder );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::Border' */
void ViewsBorder__Mark( ViewsBorder _this )
{
  /* Give the super class a chance to mark its objects and references */
  CoreRectView__Mark( &_this->_Super );
}

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
void ViewsBorder_Draw( ViewsBorder _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended 
  ) == CoreViewStateAlphaBlended ));
  aOpacity = aOpacity + 1;

  if ( aOpacity < 256 )
  {
    XColor ctl = _this->ColorTL;
    XColor ctr = _this->ColorTR;
    XColor cbl = _this->ColorBL;
    XColor cbr = _this->ColorBR;
    ctl.Alpha = (XUInt8)(( aOpacity * ctl.Alpha ) >> 8 );
    ctr.Alpha = (XUInt8)(( aOpacity * ctr.Alpha ) >> 8 );
    cbl.Alpha = (XUInt8)(( aOpacity * cbl.Alpha ) >> 8 );
    cbr.Alpha = (XUInt8)(( aOpacity * cbr.Alpha ) >> 8 );
    GraphicsCanvas_DrawBorder( aCanvas, aClip, EwMoveRectPos( _this->Super1.Bounds, 
    aOffset ), _this->Width, ctl, ctr, cbr, cbl, aBlend );
  }
  else
    GraphicsCanvas_DrawBorder( aCanvas, aClip, EwMoveRectPos( _this->Super1.Bounds, 
    aOffset ), _this->Width, _this->ColorTL, _this->ColorTR, _this->ColorBR, _this->ColorBL, 
    aBlend );
}

/* 'C' function for method : 'Views::Border.OnSetWidth()' */
void ViewsBorder_OnSetWidth( ViewsBorder _this, XInt32 value )
{
  if ( value < 0 )
    value = 0;

  if ( value == _this->Width )
    return;

  _this->Width = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Border.OnSetColor()' */
void ViewsBorder_OnSetColor( ViewsBorder _this, XColor value )
{
  if ((( !EwCompColor( value, _this->ColorTL ) && !EwCompColor( value, _this->ColorTR 
      )) && !EwCompColor( value, _this->ColorBL )) && !EwCompColor( value, _this->ColorBR 
      ))
    return;

  _this->ColorTL = value;
  _this->ColorTR = value;
  _this->ColorBL = value;
  _this->ColorBR = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* Variants derived from the class : 'Views::Border' */
EW_DEFINE_CLASS_VARIANTS( ViewsBorder )
EW_END_OF_CLASS_VARIANTS( ViewsBorder )

/* Virtual Method Table (VMT) for the class : 'Views::Border' */
EW_DEFINE_CLASS( ViewsBorder, CoreRectView, "Views::Border" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsBorder_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsBorder )

/* Initializer for the class 'Views::Frame' */
void ViewsFrame__Init( ViewsFrame _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsFrame );

  /* ... and initialize objects, variables, properties, etc. */
  _this->animFrameNumber = -1;
  _this->ColorBL = _Const0000;
  _this->ColorBR = _Const0000;
  _this->ColorTR = _Const0000;
  _this->ColorTL = _Const0000;
  _this->Endless = 1;
  _this->Edges = GraphicsEdgesBottom | GraphicsEdgesInterior | GraphicsEdgesLeft 
  | GraphicsEdgesRight | GraphicsEdgesTop;
  _this->Opacity = 255;
}

/* Re-Initializer for the class 'Views::Frame' */
void ViewsFrame__ReInit( ViewsFrame _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::Frame' */
void ViewsFrame__Done( ViewsFrame _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsFrame );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::Frame' */
void ViewsFrame__Mark( ViewsFrame _this )
{
  EwMarkObject( _this->timer );
  EwMarkSlot( _this->OnFinished );
  EwMarkObject( _this->Bitmap );

  /* Give the super class a chance to mark its objects and references */
  CoreRectView__Mark( &_this->_Super );
}

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
void ViewsFrame_Draw( ViewsFrame _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XInt32 frameNr = _this->FrameNumber;
  XColor ctl;
  XColor ctr;
  XColor cbr;
  XColor cbl;
  XInt32 opacity;

  if ( _this->animFrameNumber >= 0 )
    frameNr = _this->animFrameNumber;

  if (( _this->Bitmap == 0 ) || ( frameNr >= _this->Bitmap->NoOfFrames ))
    return;

  ResourcesBitmap__Update( _this->Bitmap );
  ctl = _this->ColorTL;
  ctr = _this->ColorTR;
  cbr = _this->ColorBR;
  cbl = _this->ColorBL;
  opacity = ((( aOpacity + 1 ) * _this->Opacity ) >> 8 ) + 1;
  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended 
  ) == CoreViewStateAlphaBlended ));

  if ( opacity < 256 )
  {
    ctl.Alpha = (XUInt8)(( ctl.Alpha * opacity ) >> 8 );
    ctr.Alpha = (XUInt8)(( ctr.Alpha * opacity ) >> 8 );
    cbr.Alpha = (XUInt8)(( cbr.Alpha * opacity ) >> 8 );
    cbl.Alpha = (XUInt8)(( cbl.Alpha * opacity ) >> 8 );
  }

  GraphicsCanvas_DrawBitmapFrame( aCanvas, aClip, _this->Bitmap, frameNr, EwMoveRectPos( 
  _this->Super1.Bounds, aOffset ), _this->Edges, ctl, ctr, cbr, cbl, aBlend );
}

/* 'C' function for method : 'Views::Frame.observerSlot()' */
void ViewsFrame_observerSlot( ViewsFrame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Frame.timerSlot()' */
void ViewsFrame_timerSlot( ViewsFrame _this, XObject sender )
{
  XInt32 frameNr;
  XInt32 period;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  frameNr = _this->animFrameNumber;
  period = 0;

  if ( _this->Bitmap != 0 )
    period = _this->Bitmap->NoOfFrames * _this->Bitmap->FrameDelay;

  if ((( _this->timer != 0 ) && ( _this->animFrameNumber < 0 )) && ( period > 0 
      ))
    _this->startTime = _this->timer->Time - ( _this->FrameNumber * _this->Bitmap->FrameDelay 
    );

  if (( _this->timer != 0 ) && ( period > 0 ))
  {
    XInt32 time = (XInt32)( _this->timer->Time - _this->startTime );
    frameNr = time / _this->Bitmap->FrameDelay;

    if ( time >= period )
    {
      frameNr = frameNr % _this->Bitmap->NoOfFrames;
      _this->startTime = _this->timer->Time - ( time % period );

      if ( !_this->Endless )
      {
        frameNr = _this->Bitmap->NoOfFrames - 1;
        period = 0;
      }
    }
  }

  if ((( frameNr != _this->animFrameNumber ) && ( _this->Super2.Owner != 0 )) && 
      (( _this->Super2.viewState & CoreViewStateVisible ) == CoreViewStateVisible 
      ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  _this->animFrameNumber = frameNr;

  if (( period == 0 ) && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsFrame_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
    EwSignal( _this->OnFinished, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Views::Frame.OnSetColor()' */
void ViewsFrame_OnSetColor( ViewsFrame _this, XColor value )
{
  if ((( !EwCompColor( value, _this->ColorTL ) && !EwCompColor( value, _this->ColorTR 
      )) && !EwCompColor( value, _this->ColorBL )) && !EwCompColor( value, _this->ColorBR 
      ))
    return;

  _this->ColorTL = value;
  _this->ColorTR = value;
  _this->ColorBL = value;
  _this->ColorBR = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Frame.OnSetAnimated()' */
void ViewsFrame_OnSetAnimated( ViewsFrame _this, XBool value )
{
  if ( _this->Animated == value )
    return;

  _this->Animated = value;
  _this->animFrameNumber = -1;

  if ( !value && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsFrame_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
  }

  if ( value )
  {
    _this->timer = ((CoreTimer)EwGetAutoObject( &EffectsEffectTimer, EffectsEffectTimerClass 
    ));
    EwAttachObjObserver( EwNewSlot( _this, ViewsFrame_timerSlot ), (XObject)_this->timer, 
      0 );
    EwPostSignal( EwNewSlot( _this, ViewsFrame_timerSlot ), ((XObject)_this ));
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Frame.OnSetBitmap()' */
void ViewsFrame_OnSetBitmap( ViewsFrame _this, ResourcesBitmap value )
{
  if ( value == _this->Bitmap )
    return;

  if (( _this->Bitmap != 0 ) && _this->Bitmap->Mutable )
    EwDetachObjObserver( EwNewSlot( _this, ViewsFrame_observerSlot ), (XObject)_this->Bitmap, 
      0 );

  _this->Bitmap = value;
  _this->animFrameNumber = -1;

  if (( value != 0 ) && value->Mutable )
    EwAttachObjObserver( EwNewSlot( _this, ViewsFrame_observerSlot ), (XObject)value, 
      0 );

  if ( _this->Animated )
  {
    ViewsFrame_OnSetAnimated( _this, 0 );
    ViewsFrame_OnSetAnimated( _this, 1 );
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* Variants derived from the class : 'Views::Frame' */
EW_DEFINE_CLASS_VARIANTS( ViewsFrame )
EW_END_OF_CLASS_VARIANTS( ViewsFrame )

/* Virtual Method Table (VMT) for the class : 'Views::Frame' */
EW_DEFINE_CLASS( ViewsFrame, CoreRectView, "Views::Frame" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsFrame_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsFrame )

/* Initializer for the class 'Views::Image' */
void ViewsImage__Init( ViewsImage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsImage );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Quality = 1;
  _this->ColorBL = _Const0000;
  _this->ColorBR = _Const0000;
  _this->ColorTR = _Const0000;
  _this->ColorTL = _Const0000;
  _this->Endless = 1;
  _this->Alignment = ViewsImageAlignmentAlignHorzCenter | ViewsImageAlignmentAlignVertCenter;
  _this->Opacity = 255;
}

/* Re-Initializer for the class 'Views::Image' */
void ViewsImage__ReInit( ViewsImage _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::Image' */
void ViewsImage__Done( ViewsImage _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsImage );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::Image' */
void ViewsImage__Mark( ViewsImage _this )
{
  EwMarkObject( _this->timer );
  EwMarkSlot( _this->OnFinished );
  EwMarkObject( _this->Bitmap );

  /* Give the super class a chance to mark its objects and references */
  CoreRectView__Mark( &_this->_Super );
}

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
void ViewsImage_Draw( ViewsImage _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XInt32 frameNr = _this->FrameNumber;
  XRect area;
  XPoint size;
  XColor ctl;
  XColor ctr;
  XColor cbr;
  XColor cbl;
  XInt32 opacity;

  if ( _this->animFrameNumber >= 0 )
    frameNr = _this->animFrameNumber;

  if (( _this->Bitmap == 0 ) || ( frameNr >= _this->Bitmap->NoOfFrames ))
    return;

  ResourcesBitmap__Update( _this->Bitmap );
  area = ViewsImage_GetContentArea( _this );
  size = _this->Bitmap->FrameSize;

  if ( EwIsRectEmpty( area ))
    return;

  ctl = _this->ColorTL;
  ctr = _this->ColorTR;
  cbr = _this->ColorBR;
  cbl = _this->ColorBL;
  opacity = ((( aOpacity + 1 ) * _this->Opacity ) >> 8 ) + 1;
  aBlend = (XBool)( aBlend && (( _this->Super2.viewState & CoreViewStateAlphaBlended 
  ) == CoreViewStateAlphaBlended ));

  if ( opacity < 256 )
  {
    ctl.Alpha = (XUInt8)(( ctl.Alpha * opacity ) >> 8 );
    ctr.Alpha = (XUInt8)(( ctr.Alpha * opacity ) >> 8 );
    cbr.Alpha = (XUInt8)(( cbr.Alpha * opacity ) >> 8 );
    cbl.Alpha = (XUInt8)(( cbl.Alpha * opacity ) >> 8 );
  }

  if ( !EwCompPoint( EwGetRectSize( area ), size ))
    GraphicsCanvas_CopyBitmap( aCanvas, aClip, _this->Bitmap, frameNr, EwMoveRectPos( 
    _this->Super1.Bounds, aOffset ), EwMovePointNeg( _this->Super1.Bounds.Point1, 
    area.Point1 ), ctl, ctr, cbr, cbl, aBlend );
  else
    GraphicsCanvas_ScaleBitmap( aCanvas, aClip, _this->Bitmap, frameNr, EwMoveRectPos( 
    area, aOffset ), EwNewRect2Point( _Const0002, size ), ctl, ctr, cbr, cbl, aBlend, 
    _this->Quality );
}

/* 'C' function for method : 'Views::Image.observerSlot()' */
void ViewsImage_observerSlot( ViewsImage _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ((( _this->AutoSize && ( _this->Bitmap != 0 )) && ( _this->Bitmap->FrameSize.X 
      > 0 )) && ( _this->Bitmap->FrameSize.Y > 0 ))
    CoreRectView__OnSetBounds( _this, EwMoveRectNeg( ViewsImage_GetContentArea( 
    _this ), _this->ScrollOffset ));

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.timerSlot()' */
void ViewsImage_timerSlot( ViewsImage _this, XObject sender )
{
  XInt32 frameNr;
  XInt32 period;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  frameNr = _this->animFrameNumber;
  period = 0;

  if ( _this->Bitmap != 0 )
    period = _this->Bitmap->NoOfFrames * _this->Bitmap->FrameDelay;

  if ((( _this->timer != 0 ) && ( _this->animFrameNumber < 0 )) && ( period > 0 
      ))
    _this->startTime = _this->timer->Time - ( _this->FrameNumber * _this->Bitmap->FrameDelay 
    );

  if (( _this->timer != 0 ) && ( period > 0 ))
  {
    XInt32 time = (XInt32)( _this->timer->Time - _this->startTime );
    frameNr = time / _this->Bitmap->FrameDelay;

    if ( time >= period )
    {
      frameNr = frameNr % _this->Bitmap->NoOfFrames;
      _this->startTime = _this->timer->Time - ( time % period );

      if ( !_this->Endless )
      {
        frameNr = _this->Bitmap->NoOfFrames - 1;
        period = 0;
      }
    }
  }

  if ((( frameNr != _this->animFrameNumber ) && ( _this->Super2.Owner != 0 )) && 
      (( _this->Super2.viewState & CoreViewStateVisible ) == CoreViewStateVisible 
      ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  _this->animFrameNumber = frameNr;

  if (( period == 0 ) && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsImage_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
    EwSignal( _this->OnFinished, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Views::Image.OnSetColor()' */
void ViewsImage_OnSetColor( ViewsImage _this, XColor value )
{
  if ((( !EwCompColor( value, _this->ColorTL ) && !EwCompColor( value, _this->ColorTR 
      )) && !EwCompColor( value, _this->ColorBL )) && !EwCompColor( value, _this->ColorBR 
      ))
    return;

  _this->ColorTL = value;
  _this->ColorTR = value;
  _this->ColorBL = value;
  _this->ColorBR = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnSetAnimated()' */
void ViewsImage_OnSetAnimated( ViewsImage _this, XBool value )
{
  if ( _this->Animated == value )
    return;

  _this->Animated = value;
  _this->animFrameNumber = -1;

  if ( !value && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsImage_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
  }

  if ( value )
  {
    _this->timer = ((CoreTimer)EwGetAutoObject( &EffectsEffectTimer, EffectsEffectTimerClass 
    ));
    EwAttachObjObserver( EwNewSlot( _this, ViewsImage_timerSlot ), (XObject)_this->timer, 
      0 );
    EwPostSignal( EwNewSlot( _this, ViewsImage_timerSlot ), ((XObject)_this ));
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* 'C' function for method : 'Views::Image.OnSetBitmap()' */
void ViewsImage_OnSetBitmap( ViewsImage _this, ResourcesBitmap value )
{
  if ( value == _this->Bitmap )
    return;

  if (( _this->Bitmap != 0 ) && _this->Bitmap->Mutable )
    EwDetachObjObserver( EwNewSlot( _this, ViewsImage_observerSlot ), (XObject)_this->Bitmap, 
      0 );

  _this->Bitmap = value;
  _this->animFrameNumber = -1;

  if (( value != 0 ) && value->Mutable )
    EwAttachObjObserver( EwNewSlot( _this, ViewsImage_observerSlot ), (XObject)value, 
      0 );

  if ( _this->Animated )
  {
    ViewsImage_OnSetAnimated( _this, 0 );
    ViewsImage_OnSetAnimated( _this, 1 );
  }

  if ((( _this->AutoSize && ( value != 0 )) && ( value->FrameSize.X > 0 )) && ( 
      value->FrameSize.Y > 0 ))
    CoreRectView__OnSetBounds( _this, EwMoveRectNeg( ViewsImage_GetContentArea( 
    _this ), _this->ScrollOffset ));

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* The method GetContentArea() returns the position and the size of an area where 
   the view will show the bitmap. This area is expressed in coordinates relative 
   to the top-left corner of the view's @Owner. The method takes in account all 
   properties which do affect the position and the alignment of the bitmap, e.g. 
   @Alignment or @ScrollOffset. */
XRect ViewsImage_GetContentArea( ViewsImage _this )
{
  XSet align;
  XPoint size;
  XRect rd;
  XRect rs;

  if ( _this->Bitmap == 0 )
    return _Const0003;

  align = _this->Alignment;
  size = _this->Bitmap->FrameSize;
  rd = _this->Super1.Bounds;
  rs = rd;

  if (( size.X == 0 ) || ( size.Y == 0 ))
    return _Const0003;

  if ((( align & ViewsImageAlignmentScaleToFill ) == ViewsImageAlignmentScaleToFill 
      ))
  {
    XInt32 scaleX = (( EwGetRectSize( rd ).X << 16 ) + ( size.X / 2 )) / size.X;
    XInt32 scaleY = (( EwGetRectSize( rd ).Y << 16 ) + ( size.Y / 2 )) / size.Y;
    XInt32 scale = scaleX;

    if ( scaleY > scale )
      scale = scaleY;

    rs = EwSetRectSize( rs, EwSetPointX( EwGetRectSize( rs ), (( size.X * scale 
    ) + 32768 ) >> 16 ));
    rs = EwSetRectSize( rs, EwSetPointY( EwGetRectSize( rs ), (( size.Y * scale 
    ) + 32768 ) >> 16 ));
  }
  else
    if ((( align & ViewsImageAlignmentScaleToFit ) == ViewsImageAlignmentScaleToFit 
        ))
    {
      XInt32 scaleX = (( EwGetRectSize( rd ).X << 16 ) + ( size.X / 2 )) / size.X;
      XInt32 scaleY = (( EwGetRectSize( rd ).Y << 16 ) + ( size.Y / 2 )) / size.Y;
      XInt32 scale = scaleX;

      if ( scaleY < scale )
        scale = scaleY;

      rs = EwSetRectSize( rs, EwSetPointX( EwGetRectSize( rs ), (( size.X * scale 
      ) + 32768 ) >> 16 ));
      rs = EwSetRectSize( rs, EwSetPointY( EwGetRectSize( rs ), (( size.Y * scale 
      ) + 32768 ) >> 16 ));
    }
    else
      if ( !(( align & ViewsImageAlignmentStretchToFill ) == ViewsImageAlignmentStretchToFill 
          ))
        rs = EwSetRectSize( rs, size );

  if ( EwGetRectSize( rs ).X != EwGetRectSize( rd ).X )
  {
    if ((( align & ViewsImageAlignmentAlignHorzRight ) == ViewsImageAlignmentAlignHorzRight 
        ))
      rs = EwSetRectOrigin( rs, EwSetPointX( rs.Point1, rd.Point2.X - EwGetRectSize( 
      rs ).X ));
    else
      if ((( align & ViewsImageAlignmentAlignHorzCenter ) == ViewsImageAlignmentAlignHorzCenter 
          ))
        rs = EwSetRectOrigin( rs, EwSetPointX( rs.Point1, rd.Point1.X + (( EwGetRectSize( 
        rd ).X - EwGetRectSize( rs ).X ) / 2 )));
  }

  if ( EwGetRectSize( rs ).Y != EwGetRectSize( rd ).Y )
  {
    if ((( align & ViewsImageAlignmentAlignVertBottom ) == ViewsImageAlignmentAlignVertBottom 
        ))
      rs = EwSetRectOrigin( rs, EwSetPointY( rs.Point1, rd.Point2.Y - EwGetRectSize( 
      rs ).Y ));
    else
      if ((( align & ViewsImageAlignmentAlignVertCenter ) == ViewsImageAlignmentAlignVertCenter 
          ))
        rs = EwSetRectOrigin( rs, EwSetPointY( rs.Point1, rd.Point1.Y + (( EwGetRectSize( 
        rd ).Y - EwGetRectSize( rs ).Y ) / 2 )));
  }

  return EwMoveRectPos( rs, _this->ScrollOffset );
}

/* Variants derived from the class : 'Views::Image' */
EW_DEFINE_CLASS_VARIANTS( ViewsImage )
EW_END_OF_CLASS_VARIANTS( ViewsImage )

/* Virtual Method Table (VMT) for the class : 'Views::Image' */
EW_DEFINE_CLASS( ViewsImage, CoreRectView, "Views::Image" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsImage_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  CoreRectView_OnSetBounds,
EW_END_OF_CLASS( ViewsImage )

/* Initializer for the class 'Views::Text' */
void ViewsText__Init( ViewsText _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRectView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsText );

  /* ... and initialize objects, variables, properties, etc. */
  _this->ColorBL = _Const0000;
  _this->ColorBR = _Const0000;
  _this->ColorTR = _Const0000;
  _this->ColorTL = _Const0000;
  _this->Alignment = ViewsTextAlignmentAlignHorzCenter | ViewsTextAlignmentAlignVertCenter;
  _this->Opacity = 255;
}

/* Re-Initializer for the class 'Views::Text' */
void ViewsText__ReInit( ViewsText _this )
{
  /* At first re-initialize the super class ... */
  CoreRectView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::Text' */
void ViewsText__Done( ViewsText _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsText );

  /* Release all used strings */
  EwReleaseString( &_this->flowString );
  EwReleaseString( &_this->String );

  /* Don't forget to deinitialize the super class ... */
  CoreRectView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::Text' */
void ViewsText__Mark( ViewsText _this )
{
  EwMarkSlot( _this->OnUpdate );
  EwMarkObject( _this->Font );

  /* Give the super class a chance to mark its objects and references */
  CoreRectView__Mark( &_this->_Super );
}

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
void ViewsText_Draw( ViewsText _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XSet align;
  ResourcesFont font;
  XRect rd;
  XColor ctl;
  XColor ctr;
  XColor cbr;
  XColor cbl;
  XInt32 opacity;
  XInt32 noOfRows;
  XRect area;
  XPoint ofs;
  XInt32 leading;
  XInt32 rowHeight;
  XInt32 y;
  XInt32 i;
  XInt32 c;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aBlend );

  if ( !EwCompString( _this->flowString, 0 ) || ( _this->Font == 0 ))
    return;

  align = _this->Alignment;
  font = _this->Font;
  rd = EwMoveRectPos( _this->Super1.Bounds, aOffset );
  ctl = _this->ColorTL;
  ctr = _this->ColorTR;
  cbr = _this->ColorBR;
  cbl = _this->ColorBL;
  opacity = ((( aOpacity + 1 ) * _this->Opacity ) >> 8 ) + 1;
  noOfRows = EwGetStringChar( _this->flowString, 0 );
  area = EwMoveRectPos( ViewsText_GetContentArea( _this ), aOffset );
  ofs = EwMovePointNeg( EwMovePointNeg( rd.Point1, area.Point1 ), EwNewPoint( 0, 
  font->Ascent ));

  if ( opacity < 256 )
  {
    ctl.Alpha = (XUInt8)(( ctl.Alpha * opacity ) >> 8 );
    ctr.Alpha = (XUInt8)(( ctr.Alpha * opacity ) >> 8 );
    cbr.Alpha = (XUInt8)(( cbr.Alpha * opacity ) >> 8 );
    cbl.Alpha = (XUInt8)(( cbl.Alpha * opacity ) >> 8 );
  }

  if ( noOfRows == 1 )
  {
    XInt32 count = EwGetStringChar( _this->flowString, 1 ) - 2;

    if ( EwGetStringChar( _this->flowString, count + 2 ) == 0x000A )
      count = count - 1;

    GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, 3, count, 
    rd, ofs, 0, ctl, ctr, cbr, cbl, 1 );
  }

  if ( noOfRows < 2 )
    return;

  leading = font->Leading;

  if ( _this->RowDistance > 0 )
    leading = ( _this->RowDistance - font->Ascent ) - font->Descent;

  rowHeight = ( font->Ascent + font->Descent ) + leading;
  y = area.Point1.Y;
  i = 1;
  c = EwGetStringChar( _this->flowString, i );

  while ((( y + rowHeight ) < aClip.Point1.Y ) && ( c > 0 ))
  {
    i = i + c;
    y = y + rowHeight;
    c = EwGetStringChar( _this->flowString, i );
  }

  while (( y < aClip.Point2.Y ) && ( c > 0 ))
  {
    XInt32 cc = c - 2;
    XPoint ofs2 = ofs;
    ofs2.Y = (( ofs2.Y + area.Point1.Y ) - y );

    if ( EwGetStringChar( _this->flowString, ( i + c ) - 1 ) == 0x000A )
      cc = cc - 1;

    if ( cc <= 0 )
      ;
    else
      if ((( align & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified 
          ))
      {
        if (( cc < ( c - 2 )) || ( EwGetStringChar( _this->flowString, i + c ) == 
            0x0000 ))
          GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, i + 
          2, cc, rd, ofs2, 0, ctl, ctr, cbr, cbl, 1 );
        else
          GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, i + 
          2, cc, rd, ofs2, EwGetRectW( area ), ctl, ctr, cbr, cbl, 1 );
      }
      else
        if ((( align & ViewsTextAlignmentAlignHorzRight ) == ViewsTextAlignmentAlignHorzRight 
            ))
        {
          ofs2.X = (( ofs2.X - EwGetRectW( area )) + ResourcesFont_GetTextAdvance( 
          font, _this->flowString, i + 2, cc ));
          GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, i + 
          2, cc, rd, ofs2, 0, ctl, ctr, cbr, cbl, 1 );
        }
        else
          if ((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter 
              ))
          {
            XInt32 tw = ResourcesFont_GetTextAdvance( font, _this->flowString, i 
              + 2, cc );
            ofs2.X = ( ofs2.X - (( EwGetRectW( area ) - tw ) / 2 ));
            GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, i 
            + 2, cc, rd, ofs2, 0, ctl, ctr, cbr, cbl, 1 );
          }
          else
            GraphicsCanvas_DrawText( aCanvas, aClip, font, _this->flowString, i 
            + 2, cc, rd, ofs2, 0, ctl, ctr, cbr, cbl, 1 );

    i = i + c;
    y = y + rowHeight;
    c = EwGetStringChar( _this->flowString, i );
  }
}

/* 'C' function for method : 'Views::Text.OnSetBounds()' */
void ViewsText_OnSetBounds( ViewsText _this, XRect value )
{
  if ( !EwCompRect( value, _this->Super1.Bounds ))
    return;

  if ((((( EwGetRectW( _this->Super1.Bounds ) != EwGetRectW( value )) && ( _this->WrapWidth 
      == 0 )) && _this->WrapText ) && ( EwCompString( _this->flowString, 0 ) != 
      0 )) && !(( _this->Super2.viewState & CoreViewStateUpdatingLayout ) == CoreViewStateUpdatingLayout 
      ))
  {
    EwReleaseString( &_this->flowString );
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this 
      ));
  }

  if ((( _this->Ellipsis && ( EwCompString( _this->flowString, 0 ) != 0 )) && EwCompPoint( 
      EwGetRectSize( _this->Super1.Bounds ), EwGetRectSize( value ))) && !(( _this->Super2.viewState 
      & CoreViewStateUpdatingLayout ) == CoreViewStateUpdatingLayout ))
  {
    EwReleaseString( &_this->flowString );
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this 
      ));
  }

  CoreRectView_OnSetBounds((CoreRectView)_this, value );
  EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.preOnUpdateSlot()' */
void ViewsText_preOnUpdateSlot( ViewsText _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( _this->OnUpdate, ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.preReparseSlot()' */
void ViewsText_preReparseSlot( ViewsText _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwPostSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.reparseSlot()' */
void ViewsText_reparseSlot( ViewsText _this, XObject sender )
{
  XPoint area;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwCompString( _this->flowString, 0 ) != 0 )
    return;

  area = _Const0004;

  if ( _this->WrapText )
  {
    if ( _this->WrapWidth > 0 )
      area.X = _this->WrapWidth;
    else
      if ( !_this->AutoSize )
        area.X = ( EwGetRectW( _this->Super1.Bounds ) - ( _this->Padding * 2 ));
      else
        area.X = EwGetRectW( _this->Super1.Bounds );

    if ( area.X < 0 )
      area.X = 1;
  }

  if (( EwCompString( _this->String, 0 ) != 0 ) && ( _this->Font != 0 ))
    EwRetainString( &_this->flowString, ResourcesFont_ParseFlowString( _this->Font, 
    _this->String, 0, area ));
  else
    EwReleaseString( &_this->flowString );

  _this->textSize = _Const0002;

  if ( _this->AutoSize && ( EwCompString( _this->flowString, 0 ) != 0 ))
  {
    _this->Super2.viewState = _this->Super2.viewState | CoreViewStateUpdatingLayout;
    CoreRectView__OnSetBounds( _this, EwMoveRectNeg( EwInflateRect( ViewsText_GetContentArea( 
    _this ), EwNewPoint( _this->Padding, 0 )), _this->ScrollOffset ));
    _this->Super2.viewState = _this->Super2.viewState & ~CoreViewStateUpdatingLayout;
  }

  if (( _this->Ellipsis && ( EwCompString( _this->flowString, 0 ) != 0 )) && !_this->AutoSize )
  {
    XSet align = _this->Alignment;
    ResourcesFont font = _this->Font;
    XInt32 leading = font->Leading;
    XRect bounds = _this->Super1.Bounds;
    XString tmp = _this->flowString;
    XInt32 rh;
    XInt32 noOfRows;
    XInt32 maxNoOfRows;
    XBool clipF;
    XBool clipL;
    XInt32 row;
    XInt32 inx;
    XInt32 maxW;
    XString ellipStr;
    XInt32 ellipAdv;

    if ( _this->RowDistance > 0 )
      leading = ( _this->RowDistance - font->Ascent ) - font->Descent;

    rh = ( font->Ascent + font->Descent ) + leading;
    noOfRows = EwGetStringChar( tmp, 0 );
    maxNoOfRows = ( EwGetRectH( bounds ) + leading ) / rh;
    clipF = 0;
    clipL = 0;

    if ( maxNoOfRows <= 0 )
      maxNoOfRows = 1;

    if ( noOfRows > maxNoOfRows )
    {
      XInt32 rowF = 0;
      XInt32 rowL = noOfRows;
      XInt32 row2 = 0;
      XInt32 inxF;
      XInt32 inxL;

      if ((( align & ViewsTextAlignmentAlignVertBottom ) == ViewsTextAlignmentAlignVertBottom 
          ))
        rowF = noOfRows - maxNoOfRows;
      else
        if ((( align & ViewsTextAlignmentAlignVertCenter ) == ViewsTextAlignmentAlignVertCenter 
            ))
        {
          rowF = ( noOfRows - maxNoOfRows ) / 2;
          rowL = rowF + maxNoOfRows;
        }
        else
          rowL = maxNoOfRows;

      clipF = (XBool)( rowF > 0 );
      clipL = (XBool)( rowL < noOfRows );

      for ( inxF = 1; row2 < rowF; row2 = row2 + 1 )
        inxF = inxF + EwGetStringChar( tmp, inxF );

      for ( inxL = inxF; row2 < rowL; row2 = row2 + 1 )
        inxL = inxL + EwGetStringChar( tmp, inxL );

      tmp = EwConcatCharString((XChar)maxNoOfRows, EwStringMiddle( tmp, inxF, inxL 
      - inxF ));
    }

    noOfRows = EwGetStringChar( tmp, 0 );
    row = 0;
    inx = 1;
    maxW = EwGetRectW( bounds );
    ellipStr = EwLoadString( &_Const0005 );
    ellipAdv = ResourcesFont_GetTextAdvance( font, ellipStr, 0, -1 );

    if ( _this->WrapText && ( _this->WrapWidth > 0 ))
      maxW = _this->WrapWidth;

    for (; row < noOfRows; row = row + 1 )
    {
      XInt32 len = EwGetStringChar( tmp, inx );
      XString text = EwShareString( EwStringMiddle( tmp, inx + 2, len - 2 ));
      XBool ellipF = (XBool)( clipF && ( row == 0 ));
      XBool ellipL = (XBool)( clipL && ( row == ( noOfRows - 1 )));
      XBool newLine = (XBool)(( len > 2 ) && ( EwGetStringChar( text, len - 3 ) 
        == 0x000A ));
      XInt32 w;
      XInt32 inxF;
      XInt32 inxL;

      if ( newLine )
        text = EwStringRemove( text, len - 3, 1 );

      w = ResourcesFont_GetTextAdvance( font, text, 0, -1 );
      inxF = 0;
      inxL = EwGetStringLength( text );

      if ( w > maxW )
      {
        if ((( align & ViewsTextAlignmentAlignHorzRight ) == ViewsTextAlignmentAlignHorzRight 
            ))
          ellipF = 1;
        else
          if ((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter 
              ))
          {
            ellipF = 1;
            ellipL = 1;
          }
          else
            ellipL = 1;
      }

      if ( ellipF )
        w = w + ellipAdv;

      if ( ellipL )
        w = w + ellipAdv;

      while (( w > maxW ) && ( inxF < inxL ))
      {
        if (( ellipF && ( w > maxW )) && ( inxF < inxL ))
        {
          w = w - ResourcesFont_GetGlyphAdvance( font, EwGetStringChar( text, inxF 
          ));
          inxF = inxF + 1;
        }

        if (( ellipL && ( w > maxW )) && ( inxF < inxL ))
        {
          inxL = inxL - 1;
          w = w - ResourcesFont_GetGlyphAdvance( font, EwGetStringChar( text, inxL 
          ));
        }
      }

      if (( inxF > 0 ) || ( inxL < EwGetStringLength( text )))
        text = EwStringMiddle( text, inxF, inxL - inxF );

      if ( ellipF )
        text = EwConcatString( ellipStr, text );

      if ( ellipL )
        text = EwConcatString( text, ellipStr );

      if ( ellipF || ellipL )
      {
        if ( newLine )
          text = EwConcatStringChar( text, 0x000A );

        tmp = EwStringRemove( tmp, inx + 2, len - 2 );
        tmp = EwShareString( EwStringInsert( tmp, text, inx + 2 ));
        len = EwGetStringLength( text ) + 2;
        tmp = EwSetStringChar( tmp, inx, (XChar)len );
      }

      inx = inx + len;
    }

    _this->textSize = ResourcesFont_GetFlowTextSize( font, tmp );

    if ( _this->RowDistance > 0 )
      _this->textSize.Y = (( EwGetStringChar( tmp, 0 ) * _this->RowDistance ) - 
      leading );

    EwRetainString( &_this->flowString, tmp );
  }

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetAutoSize()' */
void ViewsText_OnSetAutoSize( ViewsText _this, XBool value )
{
  if ( value == _this->AutoSize )
    return;

  _this->AutoSize = value;

  if ( value && _this->Ellipsis )
  {
    EwReleaseString( &_this->flowString );
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this 
      ));
  }

  if ( value && ( EwCompString( _this->flowString, 0 ) != 0 ))
    CoreRectView__OnSetBounds( _this, EwMoveRectNeg( ViewsText_GetContentArea( _this 
    ), _this->ScrollOffset ));
}

/* 'C' function for method : 'Views::Text.OnSetAlignment()' */
void ViewsText_OnSetAlignment( ViewsText _this, XSet value )
{
  if ( value == _this->Alignment )
    return;

  _this->Alignment = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );

  if ( _this->Ellipsis )
  {
    EwReleaseString( &_this->flowString );
    EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this 
      ));
  }

  if ( EwCompString( _this->flowString, 0 ) != 0 )
    EwPostSignal( EwNewSlot( _this, ViewsText_preOnUpdateSlot ), ((XObject)_this 
      ));
}

/* 'C' function for method : 'Views::Text.OnSetString()' */
void ViewsText_OnSetString( ViewsText _this, XString value )
{
  if ( !EwCompString( value, _this->String ))
    return;

  EwRetainString( &_this->String, value );
  EwReleaseString( &_this->flowString );
  EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetFont()' */
void ViewsText_OnSetFont( ViewsText _this, ResourcesFont value )
{
  if ( value == _this->Font )
    return;

  _this->Font = value;
  EwReleaseString( &_this->flowString );
  EwPostSignal( EwNewSlot( _this, ViewsText_preReparseSlot ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::Text.OnSetColor()' */
void ViewsText_OnSetColor( ViewsText _this, XColor value )
{
  if ((( !EwCompColor( value, _this->ColorTL ) && !EwCompColor( value, _this->ColorTR 
      )) && !EwCompColor( value, _this->ColorBL )) && !EwCompColor( value, _this->ColorBR 
      ))
    return;

  _this->ColorTL = value;
  _this->ColorTR = value;
  _this->ColorBL = value;
  _this->ColorBR = value;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, _this->Super1.Bounds );
}

/* The method GetContentArea() returns the position and the size of an area where 
   the view will show the text. This area is expressed in coordinates relative to 
   the top-left corner of the view's @Owner. The method takes in account all properties 
   which do affect the position and the alignment of the text, e.g. @Alignment, 
   @ScrollOffset, @WrapText, etc. */
XRect ViewsText_GetContentArea( ViewsText _this )
{
  XSet align;
  XRect rd;
  XRect rs;

  if ( !EwCompString( _this->String, 0 ) || ( _this->Font == 0 ))
    return _Const0003;

  if ( !EwCompString( _this->flowString, 0 ))
    EwSignal( EwNewSlot( _this, ViewsText_reparseSlot ), ((XObject)_this ));

  if ( !EwCompString( _this->flowString, 0 ))
    return _Const0003;

  if ( !EwCompPoint( _this->textSize, _Const0002 ))
    _this->textSize = ResourcesFont_GetFlowTextSize( _this->Font, _this->flowString 
    );

  if ( _this->RowDistance > 0 )
    _this->textSize.Y = (((( EwGetStringChar( _this->flowString, 0 ) * _this->RowDistance 
    ) - _this->RowDistance ) + _this->Font->Ascent ) + _this->Font->Descent );

  align = _this->Alignment;
  rd = EwInflateRect( _this->Super1.Bounds, EwNewPoint( -_this->Padding, 0 ));
  rs = EwNewRect2Point( rd.Point1, EwMovePointPos( rd.Point1, _this->textSize ));

  if ((( align & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified 
      ))
  {
    XInt32 maxWidth = _this->WrapWidth;

    if ( maxWidth <= 0 )
      maxWidth = EwGetRectW( _this->Super1.Bounds ) - ( _this->Padding * 2 );

    if ( maxWidth < 0 )
      maxWidth = 0;

    if ( maxWidth > EwGetRectW( rs ))
      rs = EwSetRectW( rs, maxWidth );
  }

  if ( EwGetRectW( rs ) != EwGetRectW( rd ))
  {
    if ((( align & ViewsTextAlignmentAlignHorzJustified ) == ViewsTextAlignmentAlignHorzJustified 
        ))
      ;
    else
      if ((( align & ViewsTextAlignmentAlignHorzRight ) == ViewsTextAlignmentAlignHorzRight 
          ))
        rs = EwSetRectOrigin( rs, EwSetPointX( rs.Point1, rd.Point2.X - EwGetRectW( 
        rs )));
      else
        if ((( align & ViewsTextAlignmentAlignHorzCenter ) == ViewsTextAlignmentAlignHorzCenter 
            ))
          rs = EwSetRectOrigin( rs, EwSetPointX( rs.Point1, rd.Point1.X + (( EwGetRectW( 
          rd ) - EwGetRectW( rs )) / 2 )));
  }

  if ( EwGetRectH( rs ) != EwGetRectH( rd ))
  {
    if ((( align & ViewsTextAlignmentAlignVertBottom ) == ViewsTextAlignmentAlignVertBottom 
        ))
      rs = EwSetRectOrigin( rs, EwSetPointY( rs.Point1, rd.Point2.Y - EwGetRectH( 
      rs )));
    else
      if ((( align & ViewsTextAlignmentAlignVertCenter ) == ViewsTextAlignmentAlignVertCenter 
          ))
        rs = EwSetRectOrigin( rs, EwSetPointY( rs.Point1, rd.Point1.Y + (( EwGetRectH( 
        rd ) - EwGetRectH( rs )) / 2 )));
  }

  return EwMoveRectPos( rs, _this->ScrollOffset );
}

/* Variants derived from the class : 'Views::Text' */
EW_DEFINE_CLASS_VARIANTS( ViewsText )
EW_END_OF_CLASS_VARIANTS( ViewsText )

/* Virtual Method Table (VMT) for the class : 'Views::Text' */
EW_DEFINE_CLASS( ViewsText, CoreRectView, "Views::Text" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ViewsText_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreView_ChangeViewState,
  ViewsText_OnSetBounds,
EW_END_OF_CLASS( ViewsText )

/* Initializer for the class 'Views::WarpView' */
void ViewsWarpView__Init( ViewsWarpView _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreQuadView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsWarpView );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Super2.viewState = CoreViewStateAlphaBlended | CoreViewStateVisible;
  _this->oldUpdateCase = 0x0000;
  _this->newUpdateCase = 0x0000;
  _this->Shininess = 5.000000f;
  _this->LightingEffect = 0.000000f;
  _this->Quality = 1;
}

/* Re-Initializer for the class 'Views::WarpView' */
void ViewsWarpView__ReInit( ViewsWarpView _this )
{
  /* At first re-initialize the super class ... */
  CoreQuadView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::WarpView' */
void ViewsWarpView__Done( ViewsWarpView _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsWarpView );

  /* Don't forget to deinitialize the super class ... */
  CoreQuadView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::WarpView' */
void ViewsWarpView__Mark( ViewsWarpView _this )
{
  EwMarkObject( _this->matrix );

  /* Give the super class a chance to mark its objects and references */
  CoreQuadView__Mark( &_this->_Super );
}

/* 'C' function for method : 'Views::WarpView.OnSetPoint4()' */
void ViewsWarpView_OnSetPoint4( ViewsWarpView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Super1.Point4 ))
    return;

  CoreQuadView_OnSetPoint4((CoreQuadView)_this, value );
  _this->vertices[ 3 ][ 0 ] = (XFloat)value.X;
  _this->vertices[ 3 ][ 1 ] = (XFloat)value.Y;
  _this->vertices[ 3 ][ 2 ] = 1.000000f;
  _this->newUpdateCase = 'E';
  _this->matrix = 0;
  EwPostSignal( EwNewSlot( _this, ViewsWarpView_update ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::WarpView.OnSetPoint3()' */
void ViewsWarpView_OnSetPoint3( ViewsWarpView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Super1.Point3 ))
    return;

  CoreQuadView_OnSetPoint3((CoreQuadView)_this, value );
  _this->vertices[ 2 ][ 0 ] = (XFloat)value.X;
  _this->vertices[ 2 ][ 1 ] = (XFloat)value.Y;
  _this->vertices[ 2 ][ 2 ] = 1.000000f;
  _this->newUpdateCase = 'E';
  _this->matrix = 0;
  EwPostSignal( EwNewSlot( _this, ViewsWarpView_update ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::WarpView.OnSetPoint2()' */
void ViewsWarpView_OnSetPoint2( ViewsWarpView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Super1.Point2 ))
    return;

  CoreQuadView_OnSetPoint2((CoreQuadView)_this, value );
  _this->vertices[ 1 ][ 0 ] = (XFloat)value.X;
  _this->vertices[ 1 ][ 1 ] = (XFloat)value.Y;
  _this->vertices[ 1 ][ 2 ] = 1.000000f;
  _this->newUpdateCase = 'E';
  _this->matrix = 0;
  EwPostSignal( EwNewSlot( _this, ViewsWarpView_update ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::WarpView.OnSetPoint1()' */
void ViewsWarpView_OnSetPoint1( ViewsWarpView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->Super1.Point1 ))
    return;

  CoreQuadView_OnSetPoint1((CoreQuadView)_this, value );
  _this->vertices[ 0 ][ 0 ] = (XFloat)value.X;
  _this->vertices[ 0 ][ 1 ] = (XFloat)value.Y;
  _this->vertices[ 0 ][ 2 ] = 1.000000f;
  _this->newUpdateCase = 'E';
  _this->matrix = 0;
  EwPostSignal( EwNewSlot( _this, ViewsWarpView_update ), ((XObject)_this ));
}

/* 'C' function for method : 'Views::WarpView.calculateLight()' */
void ViewsWarpView_calculateLight( ViewsWarpView _this )
{
  XFloat lx;
  XFloat ly;
  XFloat lz;
  XFloat ax;
  XFloat ay;
  XFloat az;
  XFloat bx;
  XFloat by;
  XFloat bz;
  XFloat nx;
  XFloat ny;
  XFloat nz;
  XFloat nlen;
  XInt32 i;

  if ( _this->LightingEffect == 0.000000f )
    return;

  lx = 400.000000f;
  ly = 400.000000f;
  lz = -10000000.000000f;
  ax = _this->vertices[ 1 ][ 0 ] - _this->vertices[ 0 ][ 0 ];
  ay = _this->vertices[ 1 ][ 1 ] - _this->vertices[ 0 ][ 1 ];
  az = _this->vertices[ 1 ][ 2 ] - _this->vertices[ 0 ][ 2 ];
  bx = _this->vertices[ 3 ][ 0 ] - _this->vertices[ 0 ][ 0 ];
  by = _this->vertices[ 3 ][ 1 ] - _this->vertices[ 0 ][ 1 ];
  bz = _this->vertices[ 3 ][ 2 ] - _this->vertices[ 0 ][ 2 ];
  nx = ( ay * bz ) - ( az * by );
  ny = ( az * bx ) - ( ax * bz );
  nz = ( ax * by ) - ( ay * bx );
  nlen = EwMathSqrt((( nx * nx ) + ( ny * ny )) + ( nz * nz ));

  if ( nlen > 0.000000f )
  {
    nlen = 1.000000f / nlen;
    nx = nx * nlen;
    ny = ny * nlen;
    nz = nz * nlen;
  }

  for ( i = 0; i < 4; i = i + 1 )
  {
    XFloat vlx = _this->vertices[ EwCheckIndex( i, 4 )][ 0 ] - lx;
    XFloat vly = _this->vertices[ EwCheckIndex( i, 4 )][ 1 ] - ly;
    XFloat vlz = _this->vertices[ EwCheckIndex( i, 4 )][ 2 ] - lz;
    XFloat vllen = EwMathSqrt((( vlx * vlx ) + ( vly * vly )) + ( vlz * vlz ));
    XFloat light;

    if ( vllen > 0.000000f )
    {
      vllen = 1.000000f / vllen;
      vlx = vlx * vllen;
      vly = vly * vllen;
      vlz = vlz * vllen;
    }

    light = (( vlx * nx ) + ( vly * ny )) + ( vlz * nz );

    if ( light < 0.000000f )
      light = -light;

    light = EwMathPow( light, _this->Shininess );
    light = (( _this->LightingEffect * light ) + 1.000000f ) - _this->LightingEffect;
    _this->lighting[ EwCheckIndex( i, 4 )] = (XInt32)( light * 257.000000f );

    if ( _this->lighting[ EwCheckIndex( i, 4 )] > 256 )
      _this->lighting[ EwCheckIndex( i, 4 )] = 256;
  }
}

/* 'C' function for method : 'Views::WarpView.update()' */
void ViewsWarpView_update( ViewsWarpView _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->newUpdateCase == 0x0000 )
    return;

  if ( _this->newUpdateCase == 'E' )
  {
    GraphicsWarpMatrix m = EwNewObject( GraphicsWarpMatrix, 0 );
    m = GraphicsWarpMatrix_DeriveFromQuad( m, _this->vertices[ 0 ][ 0 ], _this->vertices[ 
    0 ][ 1 ], _this->vertices[ 1 ][ 0 ], _this->vertices[ 1 ][ 1 ], _this->vertices[ 
    2 ][ 0 ], _this->vertices[ 2 ][ 1 ], _this->vertices[ 3 ][ 0 ], _this->vertices[ 
    3 ][ 1 ]);

    if ( m != 0 )
    {
      GraphicsWarpMatrix_CalculateZ( m, 0.000000f, 0.000000f );
      _this->vertices[ 0 ][ 2 ] = m->Z * 240.000000f;
      GraphicsWarpMatrix_CalculateZ( m, 1.000000f, 0.000000f );
      _this->vertices[ 1 ][ 2 ] = m->Z * 240.000000f;
      GraphicsWarpMatrix_CalculateZ( m, 1.000000f, 1.000000f );
      _this->vertices[ 2 ][ 2 ] = m->Z * 240.000000f;
      GraphicsWarpMatrix_CalculateZ( m, 0.000000f, 1.000000f );
      _this->vertices[ 3 ][ 2 ] = m->Z * 240.000000f;
    }

    ViewsWarpView_calculateLight( _this );
  }

  if (((( _this->newUpdateCase == 'M' ) && ( _this->matrix != 0 )) && ( _this->bitmapSize.X 
      != 0 )) && ( _this->bitmapSize.Y != 0 ))
  {
    XRect sourceArea = EwIntersectRect2( _this->SourceArea, EwNewRect2Point( _Const0002, 
      _this->bitmapSize ));
    XPoint sourceAnchor = _this->SourceAnchor;
    XFloat l = (XFloat)( sourceArea.Point1.X - sourceAnchor.X );
    XFloat r = (XFloat)( sourceArea.Point2.X - sourceAnchor.X );
    XFloat t = (XFloat)( sourceArea.Point1.Y - sourceAnchor.Y );
    XFloat b = (XFloat)( sourceArea.Point2.Y - sourceAnchor.Y );
    GraphicsWarpMatrix_Project( _this->matrix, l, t );
    _this->vertices[ 0 ][ 0 ] = _this->matrix->X + _this->dstPosX;
    _this->vertices[ 0 ][ 1 ] = _this->matrix->Y + _this->dstPosY;
    _this->vertices[ 0 ][ 2 ] = _this->matrix->Z;
    GraphicsWarpMatrix_Project( _this->matrix, r, t );
    _this->vertices[ 1 ][ 0 ] = _this->matrix->X + _this->dstPosX;
    _this->vertices[ 1 ][ 1 ] = _this->matrix->Y + _this->dstPosY;
    _this->vertices[ 1 ][ 2 ] = _this->matrix->Z;
    GraphicsWarpMatrix_Project( _this->matrix, r, b );
    _this->vertices[ 2 ][ 0 ] = _this->matrix->X + _this->dstPosX;
    _this->vertices[ 2 ][ 1 ] = _this->matrix->Y + _this->dstPosY;
    _this->vertices[ 2 ][ 2 ] = _this->matrix->Z;
    GraphicsWarpMatrix_Project( _this->matrix, l, b );
    _this->vertices[ 3 ][ 0 ] = _this->matrix->X + _this->dstPosX;
    _this->vertices[ 3 ][ 1 ] = _this->matrix->Y + _this->dstPosY;
    _this->vertices[ 3 ][ 2 ] = _this->matrix->Z;

    if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
        ) == CoreViewStateVisible ))
      CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this 
      ));

    _this->Super1.Point1 = EwNewPoint((XInt32)( _this->vertices[ 0 ][ 0 ] + 0.500000f 
    ), (XInt32)( _this->vertices[ 0 ][ 1 ] + 0.500000f ));
    _this->Super1.Point2 = EwNewPoint((XInt32)( _this->vertices[ 1 ][ 0 ] + 0.500000f 
    ), (XInt32)( _this->vertices[ 1 ][ 1 ] + 0.500000f ));
    _this->Super1.Point3 = EwNewPoint((XInt32)( _this->vertices[ 2 ][ 0 ] + 0.500000f 
    ), (XInt32)( _this->vertices[ 2 ][ 1 ] + 0.500000f ));
    _this->Super1.Point4 = EwNewPoint((XInt32)( _this->vertices[ 3 ][ 0 ] + 0.500000f 
    ), (XInt32)( _this->vertices[ 3 ][ 1 ] + 0.500000f ));
    ViewsWarpView_calculateLight( _this );
  }

  _this->oldUpdateCase = _this->newUpdateCase;
  _this->newUpdateCase = 0x0000;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));
}

/* 'C' function for method : 'Views::WarpView.OnSetSourceAnchor()' */
void ViewsWarpView_OnSetSourceAnchor( ViewsWarpView _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->SourceAnchor ))
    return;

  _this->SourceAnchor = value;

  if (( _this->oldUpdateCase != 'E' ) && ( _this->newUpdateCase == 0x0000 ))
  {
    _this->newUpdateCase = _this->oldUpdateCase;
    EwPostSignal( EwNewSlot( _this, ViewsWarpView_update ), ((XObject)_this ));
  }
}

/* The method RotateAndScale() performs a 2D rotation and scaling of the source 
   image. The transformation is performed around a reference position specified 
   in the property @SourceAnchor. This allows e.g. a rotation around the center 
   of the image, etc. The rotation angle is passed in the parameter aAngle as a 
   value in the range 0 .. 360°. The values passed in the parameters aScaleX and 
   aScaleY determine additional scaling factors for the image in the horizontal 
   and vertical direction. If no scaling should be performed, the value 1.0 can 
   be passed to these parameters. In contrast, if no rotation is desired, 0.0 can 
   be passed to the parameter aAngle.
   The transformed image appears on the screen at the position aDstPos relative 
   to the top-left corner of this view's @Owner. The view itself takes the shape 
   resulting from this transformation and adapts its @Point1 .. @Point4 coordinates 
   accordingly. More sophisticated 2D and 3D transformations are performed by the 
   method @Warp3D(). */
void ViewsWarpView_RotateAndScale( ViewsWarpView _this, XPoint aDstPos, XFloat aAngle, 
  XFloat aScaleX, XFloat aScaleY )
{
  XRect sourceArea;
  XPoint sourceAnchor;
  XFloat l;
  XFloat r;
  XFloat t;
  XFloat b;
  XFloat cosA;
  XFloat sinA;
  XFloat l_cosA;
  XFloat l_sinA;
  XFloat r_cosA;
  XFloat r_sinA;
  XFloat t_cosA;
  XFloat t_sinA;
  XFloat b_cosA;
  XFloat b_sinA;
  XFloat dstX;
  XFloat dstY;

  if (( _this->bitmapSize.X == 0 ) || ( _this->bitmapSize.Y == 0 ))
    return;

  sourceArea = EwIntersectRect2( _this->SourceArea, EwNewRect2Point( _Const0002, 
  _this->bitmapSize ));
  sourceAnchor = _this->SourceAnchor;
  l = (XFloat)( sourceArea.Point1.X - sourceAnchor.X ) * aScaleX;
  r = (XFloat)( sourceArea.Point2.X - sourceAnchor.X ) * aScaleX;
  t = (XFloat)( sourceArea.Point1.Y - sourceAnchor.Y ) * aScaleY;
  b = (XFloat)( sourceArea.Point2.Y - sourceAnchor.Y ) * aScaleY;
  cosA = EwMathCos( aAngle );
  sinA = EwMathSin( aAngle );
  l_cosA = l * cosA;
  l_sinA = l * sinA;
  r_cosA = r * cosA;
  r_sinA = r * sinA;
  t_cosA = t * cosA;
  t_sinA = t * sinA;
  b_cosA = b * cosA;
  b_sinA = b * sinA;
  dstX = (XFloat)aDstPos.X;
  dstY = (XFloat)aDstPos.Y;
  _this->vertices[ 0 ][ 0 ] = ( dstX + l_cosA ) + t_sinA;
  _this->vertices[ 0 ][ 1 ] = ( dstY - l_sinA ) + t_cosA;
  _this->vertices[ 1 ][ 0 ] = ( dstX + r_cosA ) + t_sinA;
  _this->vertices[ 1 ][ 1 ] = ( dstY - r_sinA ) + t_cosA;
  _this->vertices[ 2 ][ 0 ] = ( dstX + r_cosA ) + b_sinA;
  _this->vertices[ 2 ][ 1 ] = ( dstY - r_sinA ) + b_cosA;
  _this->vertices[ 3 ][ 0 ] = ( dstX + l_cosA ) + b_sinA;
  _this->vertices[ 3 ][ 1 ] = ( dstY - l_sinA ) + b_cosA;
  _this->vertices[ 0 ][ 2 ] = 1.000000f;
  _this->vertices[ 1 ][ 2 ] = 1.000000f;
  _this->vertices[ 2 ][ 2 ] = 1.000000f;
  _this->vertices[ 3 ][ 2 ] = 1.000000f;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  _this->Super1.Point1 = EwNewPoint((XInt32)( _this->vertices[ 0 ][ 0 ] + 0.500000f 
  ), (XInt32)( _this->vertices[ 0 ][ 1 ] + 0.500000f ));
  _this->Super1.Point2 = EwNewPoint((XInt32)( _this->vertices[ 1 ][ 0 ] + 0.500000f 
  ), (XInt32)( _this->vertices[ 1 ][ 1 ] + 0.500000f ));
  _this->Super1.Point3 = EwNewPoint((XInt32)( _this->vertices[ 2 ][ 0 ] + 0.500000f 
  ), (XInt32)( _this->vertices[ 2 ][ 1 ] + 0.500000f ));
  _this->Super1.Point4 = EwNewPoint((XInt32)( _this->vertices[ 3 ][ 0 ] + 0.500000f 
  ), (XInt32)( _this->vertices[ 3 ][ 1 ] + 0.500000f ));
  _this->oldUpdateCase = 'E';
  _this->newUpdateCase = 0x0000;
  _this->matrix = 0;

  if (( _this->Super2.Owner != 0 ) && (( _this->Super2.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super2.Owner, CoreView__GetExtent( _this ));

  ViewsWarpView_calculateLight( _this );
}

/* Variants derived from the class : 'Views::WarpView' */
EW_DEFINE_CLASS_VARIANTS( ViewsWarpView )
EW_END_OF_CLASS_VARIANTS( ViewsWarpView )

/* Virtual Method Table (VMT) for the class : 'Views::WarpView' */
EW_DEFINE_CLASS( ViewsWarpView, CoreQuadView, "Views::WarpView" )
  CoreQuadView_initLayoutContext,
  CoreView_GetRoot,
  CoreView_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreQuadView_ArrangeView,
  CoreQuadView_MoveView,
  CoreQuadView_GetExtent,
  CoreView_ChangeViewState,
  ViewsWarpView_OnSetPoint4,
  ViewsWarpView_OnSetPoint3,
  ViewsWarpView_OnSetPoint2,
  ViewsWarpView_OnSetPoint1,
EW_END_OF_CLASS( ViewsWarpView )

/* Initializer for the class 'Views::WarpImage' */
void ViewsWarpImage__Init( ViewsWarpImage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  ViewsWarpView__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ViewsWarpImage );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Color4 = _Const0000;
  _this->Color3 = _Const0000;
  _this->Color2 = _Const0000;
  _this->Color1 = _Const0000;
  _this->Endless = 1;
  _this->Opacity = 255;
}

/* Re-Initializer for the class 'Views::WarpImage' */
void ViewsWarpImage__ReInit( ViewsWarpImage _this )
{
  /* At first re-initialize the super class ... */
  ViewsWarpView__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Views::WarpImage' */
void ViewsWarpImage__Done( ViewsWarpImage _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ViewsWarpImage );

  /* Don't forget to deinitialize the super class ... */
  ViewsWarpView__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Views::WarpImage' */
void ViewsWarpImage__Mark( ViewsWarpImage _this )
{
  EwMarkObject( _this->timer );
  EwMarkSlot( _this->OnFinished );
  EwMarkObject( _this->Bitmap );

  /* Give the super class a chance to mark its objects and references */
  ViewsWarpView__Mark( &_this->_Super );
}

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
void ViewsWarpImage_Draw( ViewsWarpImage _this, GraphicsCanvas aCanvas, XRect aClip, 
  XPoint aOffset, XInt32 aOpacity, XBool aBlend )
{
  XInt32 frameNr = _this->FrameNumber;
  XColor c1;
  XColor c2;
  XColor c3;
  XColor c4;
  XInt32 opacity;
  XFloat ofsX;
  XFloat ofsY;
  XRect area;

  if ( _this->animFrameNumber >= 0 )
    frameNr = _this->animFrameNumber;

  if (( _this->Bitmap == 0 ) || ( frameNr >= _this->Bitmap->NoOfFrames ))
    return;

  ResourcesBitmap__Update( _this->Bitmap );
  c1 = _this->Color1;
  c2 = _this->Color2;
  c3 = _this->Color3;
  c4 = _this->Color4;
  opacity = ((( aOpacity + 1 ) * _this->Opacity ) >> 8 ) + 1;
  ofsX = (XFloat)aOffset.X;
  ofsY = (XFloat)aOffset.Y;
  area = EwIntersectRect2( _this->Super1.SourceArea, EwNewRect2Point( _Const0002, 
  _this->Super1.bitmapSize ));
  aBlend = (XBool)( aBlend && (( _this->Super3.viewState & CoreViewStateAlphaBlended 
  ) == CoreViewStateAlphaBlended ));

  if ( opacity < 256 )
  {
    c1.Alpha = (XUInt8)(( c1.Alpha * opacity ) >> 8 );
    c2.Alpha = (XUInt8)(( c2.Alpha * opacity ) >> 8 );
    c3.Alpha = (XUInt8)(( c3.Alpha * opacity ) >> 8 );
    c4.Alpha = (XUInt8)(( c4.Alpha * opacity ) >> 8 );
  }

  if ( _this->Super1.LightingEffect > 0.000000f )
  {
    if ( _this->Super1.lighting[ 0 ] < 256 )
      c1.Alpha = (XUInt8)(( c1.Alpha * _this->Super1.lighting[ 0 ]) >> 8 );

    if ( _this->Super1.lighting[ 1 ] < 256 )
      c2.Alpha = (XUInt8)(( c2.Alpha * _this->Super1.lighting[ 1 ]) >> 8 );

    if ( _this->Super1.lighting[ 2 ] < 256 )
      c3.Alpha = (XUInt8)(( c3.Alpha * _this->Super1.lighting[ 2 ]) >> 8 );

    if ( _this->Super1.lighting[ 3 ] < 256 )
      c4.Alpha = (XUInt8)(( c4.Alpha * _this->Super1.lighting[ 3 ]) >> 8 );
  }

  aClip = EwIntersectRect2( aClip, EwMoveRectPos( _this->Super1.Clipping, aOffset 
  ));
  GraphicsCanvas_WarpBitmap( aCanvas, aClip, _this->Bitmap, frameNr, _this->Super1.vertices[ 
  0 ][ 0 ] + ofsX, _this->Super1.vertices[ 0 ][ 1 ] + ofsY, _this->Super1.vertices[ 
  0 ][ 2 ], _this->Super1.vertices[ 1 ][ 0 ] + ofsX, _this->Super1.vertices[ 1 ][ 
  1 ] + ofsY, _this->Super1.vertices[ 1 ][ 2 ], _this->Super1.vertices[ 2 ][ 0 ] 
  + ofsX, _this->Super1.vertices[ 2 ][ 1 ] + ofsY, _this->Super1.vertices[ 2 ][ 
  2 ], _this->Super1.vertices[ 3 ][ 0 ] + ofsX, _this->Super1.vertices[ 3 ][ 1 ] 
  + ofsY, _this->Super1.vertices[ 3 ][ 2 ], area, c1, c2, c3, c4, aBlend, _this->Super1.Quality 
  );
}

/* 'C' function for method : 'Views::WarpImage.observerSlot()' */
void ViewsWarpImage_observerSlot( ViewsWarpImage _this, XObject sender )
{
  XPoint oldBitmapSize;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  oldBitmapSize = _this->Super1.bitmapSize;

  if ( _this->Bitmap != 0 )
    _this->Super1.bitmapSize = _this->Bitmap->FrameSize;
  else
    _this->Super1.bitmapSize = _Const0002;

  if ((( !EwCompPoint( oldBitmapSize, _this->Super1.bitmapSize ) || (( _this->Super1.oldUpdateCase 
      == 'E' ) && ( _this->Super1.newUpdateCase == 0x0000 ))) && ( _this->Super3.Owner 
      != 0 )) && (( _this->Super3.viewState & CoreViewStateVisible ) == CoreViewStateVisible 
      ))
    CoreGroup__InvalidateArea( _this->Super3.Owner, CoreView__GetExtent( _this ));

  if ((( _this->Super1.oldUpdateCase != 'E' ) && ( _this->Super1.newUpdateCase == 
      0x0000 )) && EwCompPoint( oldBitmapSize, _this->Super1.bitmapSize ))
  {
    _this->Super1.newUpdateCase = _this->Super1.oldUpdateCase;
    EwPostSignal( EwNewSlot( _this, ViewsWarpView_update ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Views::WarpImage.timerSlot()' */
void ViewsWarpImage_timerSlot( ViewsWarpImage _this, XObject sender )
{
  XInt32 frameNr;
  XInt32 period;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  frameNr = _this->animFrameNumber;
  period = 0;

  if ( _this->Bitmap != 0 )
    period = _this->Bitmap->NoOfFrames * _this->Bitmap->FrameDelay;

  if ((( _this->timer != 0 ) && ( _this->animFrameNumber < 0 )) && ( period > 0 
      ))
    _this->startTime = _this->timer->Time - ( _this->FrameNumber * _this->Bitmap->FrameDelay 
    );

  if (( _this->timer != 0 ) && ( period > 0 ))
  {
    XInt32 time = (XInt32)( _this->timer->Time - _this->startTime );
    frameNr = time / _this->Bitmap->FrameDelay;

    if ( time >= period )
    {
      frameNr = frameNr % _this->Bitmap->NoOfFrames;
      _this->startTime = _this->timer->Time - ( time % period );

      if ( !_this->Endless )
      {
        frameNr = _this->Bitmap->NoOfFrames - 1;
        period = 0;
      }
    }
  }

  if ((( frameNr != _this->animFrameNumber ) && ( _this->Super3.Owner != 0 )) && 
      (( _this->Super3.viewState & CoreViewStateVisible ) == CoreViewStateVisible 
      ))
    CoreGroup__InvalidateArea( _this->Super3.Owner, CoreView__GetExtent( _this ));

  _this->animFrameNumber = frameNr;

  if (( period == 0 ) && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsWarpImage_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
    EwSignal( _this->OnFinished, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Views::WarpImage.OnSetColor1()' */
void ViewsWarpImage_OnSetColor1( ViewsWarpImage _this, XColor value )
{
  if ( !EwCompColor( value, _this->Color1 ))
    return;

  _this->Color1 = value;

  if (( _this->Super3.Owner != 0 ) && (( _this->Super3.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super3.Owner, CoreView__GetExtent( _this ));
}

/* 'C' function for method : 'Views::WarpImage.OnSetAnimated()' */
void ViewsWarpImage_OnSetAnimated( ViewsWarpImage _this, XBool value )
{
  if ( _this->Animated == value )
    return;

  _this->Animated = value;
  _this->animFrameNumber = -1;

  if ( !value && ( _this->timer != 0 ))
  {
    EwDetachObjObserver( EwNewSlot( _this, ViewsWarpImage_timerSlot ), (XObject)_this->timer, 
      0 );
    _this->timer = 0;
  }

  if ( value )
  {
    _this->timer = ((CoreTimer)EwGetAutoObject( &EffectsEffectTimer, EffectsEffectTimerClass 
    ));
    EwAttachObjObserver( EwNewSlot( _this, ViewsWarpImage_timerSlot ), (XObject)_this->timer, 
      0 );
    EwPostSignal( EwNewSlot( _this, ViewsWarpImage_timerSlot ), ((XObject)_this 
      ));
  }

  if (( _this->Super3.Owner != 0 ) && (( _this->Super3.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super3.Owner, CoreView__GetExtent( _this ));
}

/* 'C' function for method : 'Views::WarpImage.OnSetColor()' */
void ViewsWarpImage_OnSetColor( ViewsWarpImage _this, XColor value )
{
  if ((( !EwCompColor( value, _this->Color1 ) && !EwCompColor( value, _this->Color2 
      )) && !EwCompColor( value, _this->Color3 )) && !EwCompColor( value, _this->Color4 
      ))
    return;

  _this->Color1 = value;
  _this->Color2 = value;
  _this->Color3 = value;
  _this->Color4 = value;

  if (( _this->Super3.Owner != 0 ) && (( _this->Super3.viewState & CoreViewStateVisible 
      ) == CoreViewStateVisible ))
    CoreGroup__InvalidateArea( _this->Super3.Owner, CoreView__GetExtent( _this ));
}

/* 'C' function for method : 'Views::WarpImage.OnSetBitmap()' */
void ViewsWarpImage_OnSetBitmap( ViewsWarpImage _this, ResourcesBitmap value )
{
  if ( value == _this->Bitmap )
    return;

  if (( _this->Bitmap != 0 ) && _this->Bitmap->Mutable )
    EwDetachObjObserver( EwNewSlot( _this, ViewsWarpImage_observerSlot ), (XObject)_this->Bitmap, 
      0 );

  _this->Bitmap = value;
  _this->animFrameNumber = -1;

  if (( value != 0 ) && value->Mutable )
    EwAttachObjObserver( EwNewSlot( _this, ViewsWarpImage_observerSlot ), (XObject)value, 
      0 );

  if ( _this->Animated )
  {
    ViewsWarpImage_OnSetAnimated( _this, 0 );
    ViewsWarpImage_OnSetAnimated( _this, 1 );
  }

  EwSignal( EwNewSlot( _this, ViewsWarpImage_observerSlot ), ((XObject)_this ));
}

/* Variants derived from the class : 'Views::WarpImage' */
EW_DEFINE_CLASS_VARIANTS( ViewsWarpImage )
EW_END_OF_CLASS_VARIANTS( ViewsWarpImage )

/* Virtual Method Table (VMT) for the class : 'Views::WarpImage' */
EW_DEFINE_CLASS( ViewsWarpImage, ViewsWarpView, "Views::WarpImage" )
  CoreQuadView_initLayoutContext,
  CoreView_GetRoot,
  ViewsWarpImage_Draw,
  CoreView_HandleEvent,
  CoreView_CursorHitTest,
  CoreQuadView_ArrangeView,
  CoreQuadView_MoveView,
  CoreQuadView_GetExtent,
  CoreView_ChangeViewState,
  ViewsWarpView_OnSetPoint4,
  ViewsWarpView_OnSetPoint3,
  ViewsWarpView_OnSetPoint2,
  ViewsWarpView_OnSetPoint1,
EW_END_OF_CLASS( ViewsWarpImage )

/* Embedded Wizard */
