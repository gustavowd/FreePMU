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
* Profile  : STM32F746
* Platform : STM.STM32.RGB565
*
*******************************************************************************/

#include "ewlocale.h"
#include "_ChartsCoord.h"
#include "_ChartsCoordList.h"
#include "_ChartsGraph.h"
#include "_CoreView.h"
#include "_GraphicsCanvas.h"
#include "_ResourcesBitmap.h"
#include "_ViewsRectangle.h"
#include "Charts.h"
#include "Core.h"

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 360, 240 }};
static const XRect _Const0001 = {{ 0, 0 }, { 370, 270 }};
static const XColor _Const0002 = { 0x00, 0x00, 0x00, 0xFF };
static const XColor _Const0003 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XPoint _Const0004 = { 10, 10 };
static const XColor _Const0005 = { 0x0C, 0x0E, 0x6E, 0xFF };
static const XPoint _Const0006 = { 80, 50 };

/* Initializer for the class 'Charts::Coord' */
void ChartsCoord__Init( ChartsCoord _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ChartsCoord );

  /* ... and initialize objects, variables, properties, etc. */
  _this->X = 0.000000f;
  _this->Y = 0.000000f;
}

/* Re-Initializer for the class 'Charts::Coord' */
void ChartsCoord__ReInit( ChartsCoord _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Charts::Coord' */
void ChartsCoord__Done( ChartsCoord _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ChartsCoord );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Charts::Coord' */
void ChartsCoord__Mark( ChartsCoord _this )
{
  EwMarkObject( _this->next );

  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* Variants derived from the class : 'Charts::Coord' */
EW_DEFINE_CLASS_VARIANTS( ChartsCoord )
EW_END_OF_CLASS_VARIANTS( ChartsCoord )

/* Virtual Method Table (VMT) for the class : 'Charts::Coord' */
EW_DEFINE_CLASS( ChartsCoord, XObject, "Charts::Coord" )
EW_END_OF_CLASS( ChartsCoord )

/* Initializer for the class 'Charts::Graph' */
void ChartsGraph__Init( ChartsGraph _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Background, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ChartsGraph );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreView_OnSetLayout((CoreView)&_this->Background, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Background, _Const0001 );
  ViewsRectangle_OnSetColor( &_this->Background, _Const0002 );
  _this->LineColor = _Const0003;
  _this->LineWidth = 3.000000f;
  _this->DotColor = _Const0003;
  _this->DotWidth = 0.000000f;
  _this->PixelPerUnit = _Const0004;
  _this->BackColor = _Const0002;
  _this->HorzGridColor = _Const0005;
  _this->VertGridColor = _Const0005;
  _this->GridDistance = _Const0006;
  CoreGroup__Add( _this, ((CoreView)&_this->Background ), 0 );
  _this->LineBitmap = EwLoadResource( &ChartsLine7x100, ResourcesBitmap );
  _this->DotBitmap = EwLoadResource( &ChartsDots8x8, ResourcesBitmap );
}

/* Re-Initializer for the class 'Charts::Graph' */
void ChartsGraph__ReInit( ChartsGraph _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Background );
}

/* Finalizer method for the class 'Charts::Graph' */
void ChartsGraph__Done( ChartsGraph _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ChartsGraph );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Background );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Charts::Graph' */
void ChartsGraph__Mark( ChartsGraph _this )
{
  EwMarkObject( &_this->Background );
  EwMarkObject( _this->Coordinates );
  EwMarkObject( _this->LineBitmap );
  EwMarkObject( _this->DotBitmap );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
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
void ChartsGraph_Draw( ChartsGraph _this, GraphicsCanvas aCanvas, XRect aClip, XPoint 
  aOffset, XInt32 aOpacity, XBool aBlend )
{
  XFloat p1X = 0.000000f;
  XFloat p1Y = 0.000000f;
  XFloat p2X = 0.000000f;
  XFloat p2Y = 0.000000f;
  XInt32 dx = _this->Super2.Bounds.Point1.X + aOffset.X;
  XInt32 dy = _this->Super2.Bounds.Point1.Y + aOffset.Y;
  XColor dotCol = _this->DotColor;
  XColor linCol = _this->LineColor;
  XColor hrzCol = _this->HorzGridColor;
  XColor vrtCol = _this->VertGridColor;
  XFloat lw = _this->LineWidth / 2.000000f;
  XFloat dw = _this->DotWidth / 2.000000f;
  XInt32 opacity = ((( aOpacity + 1 ) * _this->Super1.Opacity ) >> 8 ) + 1;
  ChartsCoord coord;

  aBlend = (XBool)( aBlend && (( _this->Super3.viewState & CoreViewStateAlphaBlended 
  ) == CoreViewStateAlphaBlended ));

  if ( opacity < 256 )
  {
    dotCol.Alpha = (XUInt8)(( dotCol.Alpha * opacity ) >> 8 );
    linCol.Alpha = (XUInt8)(( linCol.Alpha * opacity ) >> 8 );
    hrzCol.Alpha = (XUInt8)(( hrzCol.Alpha * opacity ) >> 8 );
    vrtCol.Alpha = (XUInt8)(( vrtCol.Alpha * opacity ) >> 8 );
  }

  CoreGroup_Draw((CoreGroup)_this, aCanvas, aClip, aOffset, aOpacity, aBlend );

  if ( _this->HorzGridColor.Alpha > 0 )
  {
    XInt32 y;

    for ( y = _this->CoordOrigin.Y + dy; y >= dy; y = y - _this->GridDistance.Y )
      GraphicsCanvas_DrawLine( aCanvas, aClip, EwNewPoint( dx, y ), EwNewPoint( 
      dx + EwGetRectW( _this->Super2.Bounds ), y ), hrzCol, hrzCol, aBlend );

    for ( y = ( _this->CoordOrigin.Y + dy ) + _this->GridDistance.Y; y < ( dy + 
         EwGetRectH( _this->Super2.Bounds )); y = y + _this->GridDistance.Y )
      GraphicsCanvas_DrawLine( aCanvas, aClip, EwNewPoint( dx, y ), EwNewPoint( 
      dx + EwGetRectW( _this->Super2.Bounds ), y ), hrzCol, hrzCol, aBlend );
  }

  if ( _this->VertGridColor.Alpha > 0 )
  {
    XInt32 x;

    for ( x = _this->CoordOrigin.X + dx; x >= dx; x = x - _this->GridDistance.X )
      GraphicsCanvas_DrawLine( aCanvas, aClip, EwNewPoint( x, dy ), EwNewPoint( 
      x, dy + EwGetRectH( _this->Super2.Bounds )), vrtCol, vrtCol, aBlend );

    for ( x = ( _this->CoordOrigin.X + dx ) + _this->GridDistance.X; x < ( dx + 
         EwGetRectW( _this->Super2.Bounds )); x = x + _this->GridDistance.X )
      GraphicsCanvas_DrawLine( aCanvas, aClip, EwNewPoint( x, dy ), EwNewPoint( 
      x, dy + EwGetRectH( _this->Super2.Bounds )), vrtCol, vrtCol, aBlend );
  }

  if ( _this->Coordinates == 0 )
    return;

  coord = _this->Coordinates->firstCoord;

  if ( coord != 0 )
  {
    p1X = (XFloat)( dx + _this->CoordOrigin.X ) + ( coord->X * (XFloat)_this->PixelPerUnit.X 
    );
    p1Y = (XFloat)( dy + _this->CoordOrigin.Y ) + ( coord->Y * (XFloat)_this->PixelPerUnit.Y 
    );
    coord = coord->next;
  }

  while ( coord != 0 )
  {
    XFloat dirX;
    XFloat dirY;
    XFloat len;
    p2X = (XFloat)( dx + _this->CoordOrigin.X ) + ( coord->X * (XFloat)_this->PixelPerUnit.X 
    );
    p2Y = (XFloat)( dy + _this->CoordOrigin.Y ) + ( coord->Y * (XFloat)_this->PixelPerUnit.Y 
    );
    dirX = p2X - p1X;
    dirY = p2Y - p1Y;
    len = EwMathSqrt(( dirX * dirX ) + ( dirY * dirY ));

    if ( len != 0.000000f )
    {
      dirX = dirX / len;
      dirY = dirY / len;
    }

    if ( _this->LineBitmap != 0 )
      GraphicsCanvas_WarpBitmap( aCanvas, aClip, _this->LineBitmap, 0, p1X - ( dirY 
      * lw ), p1Y + ( dirX * lw ), 1.000000f, p1X + ( dirY * lw ), p1Y - ( dirX 
      * lw ), 1.000000f, p2X + ( dirY * lw ), p2Y - ( dirX * lw ), 1.000000f, p2X 
      - ( dirY * lw ), p2Y + ( dirX * lw ), 1.000000f, EwNewRect( 0, 0, _this->LineBitmap->FrameSize.X, 
      _this->LineBitmap->FrameSize.Y ), linCol, linCol, linCol, linCol, aBlend, 
      1 );

    if (( _this->DotWidth > 0.000000f ) && ( _this->DotBitmap != 0 ))
    {
      GraphicsCanvas_WarpBitmap( aCanvas, aClip, _this->DotBitmap, _this->DotBitmapIndex, 
      p1X - dw, p1Y - dw, 1.000000f, p1X + dw, p1Y - dw, 1.000000f, p1X + dw, p1Y 
      + dw, 1.000000f, p1X - dw, p1Y + dw, 1.000000f, EwNewRect( 0, 0, _this->DotBitmap->FrameSize.X, 
      _this->DotBitmap->FrameSize.Y ), dotCol, dotCol, dotCol, dotCol, aBlend, 1 
      );
    }

    p1X = p2X;
    p1Y = p2Y;
    coord = coord->next;
  }

  if (( _this->DotWidth > 0.000000f ) && ( _this->DotBitmap != 0 ))
  {
    GraphicsCanvas_WarpBitmap( aCanvas, aClip, _this->DotBitmap, _this->DotBitmapIndex, 
    p1X - dw, p1Y - dw, 1.000000f, p1X + dw, p1Y - dw, 1.000000f, p1X + dw, p1Y 
    + dw, 1.000000f, p1X - dw, p1Y + dw, 1.000000f, EwNewRect( 0, 0, _this->DotBitmap->FrameSize.X, 
    _this->DotBitmap->FrameSize.Y ), _this->DotColor, _this->DotColor, _this->DotColor, 
    _this->DotColor, aBlend, 1 );
  }
}

/* 'C' function for method : 'Charts::Graph.OnSetCoordinates()' */
void ChartsGraph_OnSetCoordinates( ChartsGraph _this, ChartsCoordList value )
{
  _this->Coordinates = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetLineColor()' */
void ChartsGraph_OnSetLineColor( ChartsGraph _this, XColor value )
{
  if ( !EwCompColor( value, _this->LineColor ))
    return;

  _this->LineColor = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetLineWidth()' */
void ChartsGraph_OnSetLineWidth( ChartsGraph _this, XFloat value )
{
  if ( value < 0.500000f )
    value = 0.500000f;

  if ( value > 10.000000f )
    value = 10.000000f;

  _this->LineWidth = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetDotColor()' */
void ChartsGraph_OnSetDotColor( ChartsGraph _this, XColor value )
{
  if ( !EwCompColor( value, _this->DotColor ))
    return;

  _this->DotColor = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetDotWidth()' */
void ChartsGraph_OnSetDotWidth( ChartsGraph _this, XFloat value )
{
  if ( value < 1.000000f )
    value = 0.000000f;

  if ( value > 25.000000f )
    value = 25.000000f;

  _this->DotWidth = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetCoordOrigin()' */
void ChartsGraph_OnSetCoordOrigin( ChartsGraph _this, XPoint value )
{
  if ( !EwCompPoint( value, _this->CoordOrigin ))
    return;

  _this->CoordOrigin = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetPixelPerUnit()' */
void ChartsGraph_OnSetPixelPerUnit( ChartsGraph _this, XPoint value )
{
  if ( value.X == 0 )
    value.X = 1;

  if ( value.Y == 0 )
    value.Y = 1;

  if ( !EwCompPoint( value, _this->PixelPerUnit ))
    return;

  _this->PixelPerUnit = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetBackColor()' */
void ChartsGraph_OnSetBackColor( ChartsGraph _this, XColor value )
{
  if ( !EwCompColor( value, _this->BackColor ))
    return;

  _this->BackColor = value;
  ViewsRectangle_OnSetColor( &_this->Background, value );
}

/* 'C' function for method : 'Charts::Graph.OnSetHorzGridColor()' */
void ChartsGraph_OnSetHorzGridColor( ChartsGraph _this, XColor value )
{
  if ( !EwCompColor( value, _this->HorzGridColor ))
    return;

  _this->HorzGridColor = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetVertGridColor()' */
void ChartsGraph_OnSetVertGridColor( ChartsGraph _this, XColor value )
{
  if ( !EwCompColor( value, _this->VertGridColor ))
    return;

  _this->VertGridColor = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* 'C' function for method : 'Charts::Graph.OnSetGridDistance()' */
void ChartsGraph_OnSetGridDistance( ChartsGraph _this, XPoint value )
{
  if ( value.X < 10 )
    value.X = 10;

  if ( value.Y < 10 )
    value.Y = 10;

  if ( !EwCompPoint( value, _this->GridDistance ))
    return;

  _this->GridDistance = value;
  CoreGroup__InvalidateArea( _this, EwGetRectORect( _this->Super2.Bounds ));
}

/* Variants derived from the class : 'Charts::Graph' */
EW_DEFINE_CLASS_VARIANTS( ChartsGraph )
EW_END_OF_CLASS_VARIANTS( ChartsGraph )

/* Virtual Method Table (VMT) for the class : 'Charts::Graph' */
EW_DEFINE_CLASS( ChartsGraph, CoreGroup, "Charts::Graph" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  ChartsGraph_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ChartsGraph )

/* Initializer for the class 'Charts::CoordList' */
void ChartsCoordList__Init( ChartsCoordList _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ChartsCoordList );

  /* ... and initialize objects, variables, properties, etc. */
  _this->MaxNoOfItems = 10;
}

/* Re-Initializer for the class 'Charts::CoordList' */
void ChartsCoordList__ReInit( ChartsCoordList _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Charts::CoordList' */
void ChartsCoordList__Done( ChartsCoordList _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ChartsCoordList );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Charts::CoordList' */
void ChartsCoordList__Mark( ChartsCoordList _this )
{
  EwMarkObject( _this->firstCoord );
  EwMarkObject( _this->lastCoord );

  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* The method ClearList is used to clear the list of coordinates. */
void ChartsCoordList_ClearList( ChartsCoordList _this )
{
  _this->firstCoord = 0;
  _this->lastCoord = 0;
  _this->NoOfItems = 0;
}

/* The method AddCoord stores the given coordinate at the end of the chained list 
   of coordinates. */
void ChartsCoordList_AddCoord( ChartsCoordList _this, XFloat aX, XFloat aY )
{
  ChartsCoord coord = 0;

  if (( _this->MaxNoOfItems > 0 ) && ( _this->NoOfItems == _this->MaxNoOfItems ))
  {
    coord = _this->firstCoord;
    _this->firstCoord = coord->next;
    coord->next = 0;
    _this->NoOfItems = _this->NoOfItems - 1;
  }
  else
  {
    coord = EwNewObject( ChartsCoord, 0 );
  }

  coord->X = aX;
  coord->Y = aY;

  if ( _this->firstCoord == 0 )
  {
    _this->firstCoord = coord;
    _this->lastCoord = coord;
    _this->NoOfItems = 1;
  }
  else
  {
    _this->lastCoord->next = coord;
    _this->lastCoord = coord;
    _this->NoOfItems = _this->NoOfItems + 1;
  }
}

/* 'C' function for method : 'Charts::CoordList.OnSetMaxNoOfItems()' */
void ChartsCoordList_OnSetMaxNoOfItems( ChartsCoordList _this, XInt32 value )
{
  if ( value < 1 )
    value = 1;

  _this->MaxNoOfItems = value;
}

/* Variants derived from the class : 'Charts::CoordList' */
EW_DEFINE_CLASS_VARIANTS( ChartsCoordList )
EW_END_OF_CLASS_VARIANTS( ChartsCoordList )

/* Virtual Method Table (VMT) for the class : 'Charts::CoordList' */
EW_DEFINE_CLASS( ChartsCoordList, XObject, "Charts::CoordList" )
EW_END_OF_CLASS( ChartsCoordList )

/* Bitmap resources for a line segment of a chart curve. The image is used as alpha 
   bitmap in order to colorize the line segment dynamically during runtime. The 
   resource can be used by the @LineChart or @Graph class to draw the single line 
   pieces of the diagram. */
EW_DEFINE_BITMAP_RES( ChartsLine7x100 )
  EW_BITMAP_FRAMES( ChartsLine7x100, Default, EW_DRIVER_VARIANT_ALPHA8, 7, 100, 0 )
    EW_BITMAP_FRAME( 3, 0, 1, 100, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( ChartsLine7x100, Default )                   /* ratio 16.57 % */
    0x7330EF00, 0xB31DCFF7, 0x1A09023B, 0xE0B03844, 0x190E84C1, 0x70D87C2A, 0x158B4421,
    0x18944E29, 0x8EC6A2F1, 0xDC623919, 0xC7E451E8, 0x86492091, 0xA572C92C, 0x5330954B,
    0xF34944CA, 0x38934DA4, 0x99ACC65B, 0x9BCCE5F3, 0xDCF67F3A, 0xCF27D409, 0x168D47A0,
    0x28543A25, 0x954EA5D2, 0xF4CA4D36, 0x54A854E9, 0x6A9556A3, 0xAFD72BB5, 0x0002031B,
    0x00000000

  EW_BITMAPS_TABLE( ChartsLine7x100 )
    EW_BITMAP( ChartsLine7x100, Default )
EW_END_OF_BITMAP_RES( ChartsLine7x100 )

/* Table with links to derived variants of the bitmap resource : 'Charts::Line7x100' */
EW_RES_WITHOUT_VARIANTS( ChartsLine7x100 )

/* Bitmap resources for a dot of a chart curve. The image is used as alpha bitmap 
   in order to colorize the dot dynamically during runtime. The resource can be 
   used by the @LineChart or @Graph class to draw the single dots of a diagram. 
   The image resource contains several dots that can be selected with the frame 
   number property. */
EW_DEFINE_BITMAP_RES( ChartsDots8x8 )
  EW_BITMAP_FRAMES( ChartsDots8x8, Default, EW_DRIVER_VARIANT_ALPHA8, 8, 8, 0 )
    EW_BITMAP_FRAME( 2, 2, 4, 4, 0x00000000, 0x00000000 ),
    EW_BITMAP_FRAME( 2, 1, 4, 6, 0x0000002C, 0x00000000 ),
    EW_BITMAP_FRAME( 0, 0, 0, 0, 0x0000005C, 0x00000000 ),
    EW_BITMAP_FRAME( 2, 1, 4, 1, 0x00000098, 0x00000000 ),
    EW_BITMAP_FRAME( 2, 2, 4, 4, 0x000000D8, 0x00000000 ),
    EW_BITMAP_FRAME( 2, 4, 4, 3, 0x00000108, 0x00000000 ),
    EW_BITMAP_FRAME( 1, 0, 6, 8, 0x0000013C, 0x00000000 ),
    EW_BITMAP_FRAME( 3, 3, 2, 2, 0x00000154, 0x00000000 ),
    EW_BITMAP_FRAME( 2, 3, 4, 3, 0x00000190, 0x00000000 ),
    EW_BITMAP_FRAME( 2, 1, 4, 6, 0x000001C8, 0x00000000 )

  EW_BITMAP_PIXEL( ChartsDots8x8, Default )                     /* ratio 79.38 % */
    0x1C080100, 0x2100D038, 0x1908E472, 0x9FE87810, 0x04877FC3, 0x4FF87BAA, 0x168A449D,
    0xA87C3401, 0x4681A048, 0x5A35CEE7, 0x40609048, 0x406C0100, 0xAA1C8E45, 0xB44E000D,
    0x5FF0C7FB, 0x1AAB153B, 0x4F057436, 0x1579C322, 0x6573CE2D, 0x152B9FF1, 0x143E1B0B,
    0xB9DCEAB8, 0x02030855, 0x406C0100, 0xAA1C8E45, 0xB44E000D, 0x902816F3, 0x562A76B7,
    0x00007B85, 0xAE7083C0, 0x58AA05E0, 0x8D3CD031, 0x7478011C, 0x45E2B135, 0x36162A57,
    0xE042A87C, 0x56E773AA, 0x00080C21, 0x406C0100, 0xAA1C8E45, 0xB44E000D, 0x5FF0C7FB,
    0xFEAB153B, 0x0361B301, 0xF0573FD8, 0x000061FE, 0x79BFC300, 0xFC0A1119, 0x2DDFEAE8,
    0x5D6E180C, 0xE1B0B154, 0xCEAB8143, 0x30855B9D, 0x00000020, 0x18000100, 0x00D50A80,
    0xFD570381, 0xE0EAB7FB, 0x190B8500, 0x71188C3E, 0x0B8A2A15, 0xB8801951, 0x00019570,
    0x147E3B1B, 0xC8E0A068, 0x00000080, 0x14080100, 0x41A04422, 0x1D98CC00, 0xDFE54004,
    0x07062A3F, 0x6DB87360, 0x0E334080, 0x90019A1D, 0x7FC65C80, 0xF9E012E4, 0xA1CF10E8,
    0x1E53284C, 0x0000080A, 0x1BFD8100, 0xC1205048, 0x2A130883, 0xA110C85C, 0x02C083C1,
    0x00000002, 0x4A341F00, 0x02400000, 0xFD200F48, 0x412095BB, 0x12937FAF, 0xEBA7FB00,
    0x04603FD7, 0xF7FB0813, 0x8341184F, 0xCAFDFF16, 0xC6D850F8, 0x362F075E, 0xD210889C,
    0x020F83C7, 0x00000002, 0x14080100, 0x41A04422, 0x1992C900, 0xD083F04C, 0x7E877FBF,
    0xB0F4C824, 0x034CBFE2, 0x358C5962, 0x8B0B4000, 0xF922042D, 0x3FDE6F37, 0x1CBB0224,
    0x50E12092, 0x01010017, 0x30480100, 0x048CD043, 0xFD2C0000, 0x12CFF85B, 0x18F91200,
    0x8247CBFE, 0xB485C496, 0x75A45E2C, 0x7E449F82, 0x744A122A, 0xC9933028, 0x0203074C,
    0x00000000

  EW_BITMAPS_TABLE( ChartsDots8x8 )
    EW_BITMAP( ChartsDots8x8, Default )
EW_END_OF_BITMAP_RES( ChartsDots8x8 )

/* Table with links to derived variants of the bitmap resource : 'Charts::Dots8x8' */
EW_RES_WITHOUT_VARIANTS( ChartsDots8x8 )

/* Embedded Wizard */
