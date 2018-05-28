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
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "Resources.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x00000058, /* ratio 95.45 % */
  0xB8005500, 0x00000452, 0x00D0002A, 0x04000328, 0xE4003800, 0x70F37800, 0x74004461,
  0x0869E400, 0x230004E0, 0x6800C317, 0x800A7163, 0x58F40034, 0xE510E8F4, 0x00528E1C,
  0x80020C14, 0x0027C708, 0x0260009C, 0x17000B20, 0x0C1A8306, 0x00000008, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XPoint _Const0000 = { 0, 0 };
static const XStringRes _Const0001 = { _StringsDefault0, 0x0003 };

/* Initializer for the class 'Resources::Bitmap' */
void ResourcesBitmap__Init( ResourcesBitmap _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreResource__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ResourcesBitmap );

  /* ... and initialize objects, variables, properties, etc. */
  _this->NoOfFrames = 1;

  /* Call the user defined constructor */
  ResourcesBitmap_Init( _this, aArg );
}

/* Re-Initializer for the class 'Resources::Bitmap' */
void ResourcesBitmap__ReInit( ResourcesBitmap _this )
{
  /* At first re-initialize the super class ... */
  CoreResource__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Resources::Bitmap' */
void ResourcesBitmap__Done( ResourcesBitmap _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ResourcesBitmap );

  /* Call the user defined destructor of the class */
  ResourcesBitmap_Done( _this );

  /* Don't forget to deinitialize the super class ... */
  CoreResource__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Resources::Bitmap' */
void ResourcesBitmap__Mark( ResourcesBitmap _this )
{
  /* Give the super class a chance to mark its objects and references */
  CoreResource__Mark( &_this->_Super );
}

/* 'C' function for method : 'Resources::Bitmap.Done()' */
void ResourcesBitmap_Done( ResourcesBitmap _this )
{
  XHandle handle;

  if ( _this->bitmap == 0 )
    return;

  handle = _this->bitmap;
  EwFreeBitmap((XBitmap*)handle );
  _this->bitmap = 0;
  _this->FrameSize = _Const0000;
  _this->FrameDelay = 0;
  _this->NoOfFrames = 1;
  _this->Animated = 0;
}

/* 'C' function for method : 'Resources::Bitmap.Init()' */
void ResourcesBitmap_Init( ResourcesBitmap _this, XHandle aArg )
{
  XHandle handle;
  XInt32 noOfFrames;
  XPoint frameSize;
  XInt32 frameDelay;

  if ( aArg == 0 )
    return;

  handle = 0;
  noOfFrames = 1;
  frameSize = _Const0000;
  frameDelay = 0;
  {
    /* aArg is a pointer to the memory where the bitmap resource is stored. */
    XBitmap* bmp = EwLoadBitmap((const XBmpRes*)aArg );

    /* After the bitmap has been loaded get the size of the bitmap and store it
       in the following variables. */
    if ( bmp )
    {
      noOfFrames = bmp->NoOfFrames;
      frameSize  = bmp->FrameSize;
      frameDelay = bmp->FrameDelay;
    }

    handle = (XHandle)(void*)bmp;
  }
  _this->bitmap = handle;
  _this->NoOfFrames = noOfFrames;
  _this->FrameSize = frameSize;
  _this->FrameDelay = frameDelay;
  _this->Animated = (XBool)((( _this->bitmap != 0 ) && ( _this->FrameDelay > 0 )) 
  && ( _this->NoOfFrames > 1 ));
}

/* 'C' function for method : 'Resources::Bitmap.OnSetFrameSize()' */
void ResourcesBitmap_OnSetFrameSize( ResourcesBitmap _this, XPoint value )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( value );

  {
    EwThrow( EwLoadString( &_Const0001 ));
    return;
  }
}

/* Wrapper function for the virtual method : 'Resources::Bitmap.OnSetFrameSize()' */
void ResourcesBitmap__OnSetFrameSize( void* _this, XPoint value )
{
  ((ResourcesBitmap)_this)->_VMT->OnSetFrameSize((ResourcesBitmap)_this, value );
}

/* 'C' function for method : 'Resources::Bitmap.Update()' */
void ResourcesBitmap_Update( ResourcesBitmap _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Wrapper function for the virtual method : 'Resources::Bitmap.Update()' */
void ResourcesBitmap__Update( void* _this )
{
  ((ResourcesBitmap)_this)->_VMT->Update((ResourcesBitmap)_this );
}

/* Variants derived from the class : 'Resources::Bitmap' */
EW_DEFINE_CLASS_VARIANTS( ResourcesBitmap )
EW_END_OF_CLASS_VARIANTS( ResourcesBitmap )

/* Virtual Method Table (VMT) for the class : 'Resources::Bitmap' */
EW_DEFINE_CLASS( ResourcesBitmap, CoreResource, "Resources::Bitmap" )
  ResourcesBitmap_OnSetFrameSize,
  ResourcesBitmap_Update,
EW_END_OF_CLASS( ResourcesBitmap )

/* Initializer for the class 'Resources::Font' */
void ResourcesFont__Init( ResourcesFont _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreResource__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ResourcesFont );

  /* Call the user defined constructor */
  ResourcesFont_Init( _this, aArg );
}

/* Re-Initializer for the class 'Resources::Font' */
void ResourcesFont__ReInit( ResourcesFont _this )
{
  /* At first re-initialize the super class ... */
  CoreResource__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Resources::Font' */
void ResourcesFont__Done( ResourcesFont _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ResourcesFont );

  /* Call the user defined destructor of the class */
  ResourcesFont_Done( _this );

  /* Don't forget to deinitialize the super class ... */
  CoreResource__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Resources::Font' */
void ResourcesFont__Mark( ResourcesFont _this )
{
  /* Give the super class a chance to mark its objects and references */
  CoreResource__Mark( &_this->_Super );
}

/* 'C' function for method : 'Resources::Font.Done()' */
void ResourcesFont_Done( ResourcesFont _this )
{
  XHandle handle;

  if ( _this->font == 0 )
    return;

  handle = _this->font;
  EwFreeFont((XFont*)handle );
  _this->font = 0;
  _this->Ascent = 0;
  _this->Descent = 0;
  _this->Leading = 0;
}

/* 'C' function for method : 'Resources::Font.Init()' */
void ResourcesFont_Init( ResourcesFont _this, XHandle aArg )
{
  XHandle handle;
  XInt32 ascent;
  XInt32 descent;
  XInt32 leading;

  if ( aArg == 0 )
    return;

  handle = 0;
  ascent = 0;
  descent = 0;
  leading = 0;
  {
    /* aArg is a pointer to a memory where the font resource is stored. */
    XFont* font = EwLoadFont((const XFntRes*)aArg );

    /* After the font has been loaded query its ascent and descent. */
    if ( font )
    {
      ascent  = font->Ascent;
      descent = font->Descent;
      leading = font->Leading;
    }

    handle = (XHandle)(void*)font;
  }
  _this->font = handle;
  _this->Ascent = ascent;
  _this->Descent = descent;
  _this->Leading = leading;
}

/* 'C' function for method : 'Resources::Font.GetFlowTextSize()' */
XPoint ResourcesFont_GetFlowTextSize( ResourcesFont _this, XString aFlowString )
{
  XInt32 i;
  XInt32 c;
  XInt32 count;
  XInt32 w;
  XInt32 h;

  if ( !EwCompString( aFlowString, 0 ) || ( _this->font == 0 ))
    return _Const0000;

  i = 1;
  c = EwGetStringChar( aFlowString, i );
  count = EwGetStringChar( aFlowString, 0 );
  w = 0;
  h = ((( _this->Ascent + _this->Descent ) + _this->Leading ) * count ) - _this->Leading;

  while ( c > 0 )
  {
    XInt32 cc = c - 2;
    XInt32 tw = 0;

    if ( EwGetStringChar( aFlowString, ( i + c ) - 1 ) == 0x000A )
      cc = cc - 1;

    if ( cc > 0 )
      tw = ResourcesFont_GetTextAdvance( _this, aFlowString, i + 2, cc );

    if ( tw > w )
      w = tw;

    i = i + c;
    c = EwGetStringChar( aFlowString, i );
  }

  return EwNewPoint( w, h );
}

/* 'C' function for method : 'Resources::Font.ParseFlowString()' */
XString ResourcesFont_ParseFlowString( ResourcesFont _this, XString aString, XInt32 
  aOffset, XPoint aSize )
{
  XHandle handle;
  XString result;

  if ( aOffset < 0 )
    aOffset = 0;

  if (( _this->font == 0 ) || (( aOffset > 0 ) && ( aOffset >= EwGetStringLength( 
      aString ))))
    return 0;

  handle = _this->font;
  result = 0;
  result = EwParseFlowString((XFont*)handle, aString + aOffset, aSize );
  return result;
}

/* The method GetGlyphAdvance() determines the horizontal advance in pixel of the 
   glyph with the code aCharCode. This metric describes the offset to the next following 
   glyph within a text row. */
XInt32 ResourcesFont_GetGlyphAdvance( ResourcesFont _this, XChar aCharCode )
{
  XInt32 advance;
  XHandle handle;

  if (( _this->font == 0 ) || ( aCharCode == 0x0000 ))
    return 0;

  advance = 0;
  handle = _this->font;
  {
    XGlyphMetrics metrics;

    if ( EwGetGlyphMetrics((XFont*)handle, aCharCode, &metrics ))
      advance = metrics.Advance;
  }
  return advance;
}

/* The method GetTextAdvance() calculates the horizontal advance in pixel of a text 
   row to print with this font. This value is calculated by the sum of advance values 
   of all affected glyphs. The text is passed in the parameter aString. The parameter 
   aOffset determines within aString the sign to start the calculation. If aOffset 
   is zero, the calculation starts with the first sign. The parameter aCount determines 
   the max. number of following sigs to calculate the advance value. If aCount is 
   -1, all signs until the end of the string will be evaluated. */
XInt32 ResourcesFont_GetTextAdvance( ResourcesFont _this, XString aString, XInt32 
  aOffset, XInt32 aCount )
{
  XHandle handle;
  XInt32 advance;

  if ( aOffset < 0 )
    aOffset = 0;

  if (( _this->font == 0 ) || (( aOffset > 0 ) && ( aOffset >= EwGetStringLength( 
      aString ))))
    return 0;

  handle = _this->font;
  advance = 0;
  advance = EwGetTextAdvance((XFont*)handle, aString + aOffset, aCount );
  return advance;
}

/* Default onget method for the property 'Leading' */
XInt32 ResourcesFont_OnGetLeading( ResourcesFont _this )
{
  return _this->Leading;
}

/* Wrapper function for the non virtual method : 'Resources::Font.OnGetLeading()' */
XInt32 ResourcesFont__OnGetLeading( void* _this )
{
  return ResourcesFont_OnGetLeading((ResourcesFont)_this );
}

/* Default onget method for the property 'Descent' */
XInt32 ResourcesFont_OnGetDescent( ResourcesFont _this )
{
  return _this->Descent;
}

/* Wrapper function for the non virtual method : 'Resources::Font.OnGetDescent()' */
XInt32 ResourcesFont__OnGetDescent( void* _this )
{
  return ResourcesFont_OnGetDescent((ResourcesFont)_this );
}

/* Default onget method for the property 'Ascent' */
XInt32 ResourcesFont_OnGetAscent( ResourcesFont _this )
{
  return _this->Ascent;
}

/* Wrapper function for the non virtual method : 'Resources::Font.OnGetAscent()' */
XInt32 ResourcesFont__OnGetAscent( void* _this )
{
  return ResourcesFont_OnGetAscent((ResourcesFont)_this );
}

/* Variants derived from the class : 'Resources::Font' */
EW_DEFINE_CLASS_VARIANTS( ResourcesFont )
EW_END_OF_CLASS_VARIANTS( ResourcesFont )

/* Virtual Method Table (VMT) for the class : 'Resources::Font' */
EW_DEFINE_CLASS( ResourcesFont, CoreResource, "Resources::Font" )
EW_END_OF_CLASS( ResourcesFont )

/* Bitmap resource : 'Resources::WhiteBitmap' */
EW_DEFINE_BITMAP_RES( ResourcesWhiteBitmap )
  EW_BITMAP_FRAMES( ResourcesWhiteBitmap, Default, EW_DRIVER_VARIANT_ALPHA8, 254, 254, 0 )
    EW_BITMAP_FRAME( 0, 0, 254, 254, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( ResourcesWhiteBitmap, Default )              /* ratio 0.66 % */
    0x1C09FF00, 0xC1A0B048, 0x2A130883, 0xA1B0C85C, 0x231087C3, 0xB1489C4A, 0x188BC5A2,
    0xC8DC6A33, 0x8FC7A3B1, 0x1C8A4320, 0xC9A4B249, 0xAA532893, 0xA5B2C95C, 0x633097CB,
    0xB3499CCA, 0x389BCDA6, 0xC9DCEA73, 0x9FCFA7B3, 0x1D0A8340, 0xD1A8B44A, 0x2A9348A3,
    0xA9B4CA5D, 0xA350A7D3, 0xB54A9D4A, 0x58ABD5AA, 0xCADD6AB3, 0xAFD7ABB5, 0x1D8AC360,
    0xD9ACB64B, 0xAAD368B3, 0xADB6CB5D, 0xE370B7DB, 0xB74B9DCA, 0x78BBDDAE, 0xCBDDEAF3,
    0xBFDFAFB7, 0x1E0B0380, 0xE1B0B84C, 0x2B1388C3, 0xB1B8CC5E, 0x2390C7E3, 0xB94C9E4B,
    0x98CBE5B2, 0xCCDE6B33, 0xCFE7B3B9, 0x1E8B43A0, 0xE9B4BA4D, 0xAB53A8D3, 0xB5BACD5E,
    0x63B0D7EB, 0xBB4D9ECB, 0xB8DBEDB6, 0xCDDEEB73, 0xDFEFB7BB, 0x1F0B83C0, 0xF1B8BC4E,
    0x2B93C8E3, 0xB9BCCE5F, 0xA3D0E7F3, 0xBD4E9F4B, 0xD8EBF5BA, 0xCEDF6BB3, 0xEFF7BBBD,
    0x1F8BC3E0, 0xF9BCBE4F, 0xABD3E8F3, 0xBDBECF5F, 0xE3F0F7FB, 0xBF4F9FCB, 0xF8FBFDBE,
    0xCFDFEBF3, 0xFFFFBFBF, 0xE0280600, 0x68160480, 0x260881E0, 0x0C82E0A8, 0x83E0E836,
    0xE1284610, 0x68561484, 0x661885E1, 0x1C86E1A8, 0x87E1E876, 0xE2288620, 0x68962488,
    0xA62889E2, 0x2C8AE2A8, 0x8BE2E8B6, 0xE328C630, 0x68D6348C, 0xE6388DE3, 0x3C8EE3A8,
    0x8FE3E8F6, 0xE4290640, 0x69164490, 0x264891E4, 0x4C92E4A9, 0x93E4E936, 0xE5294650,
    0x69565494, 0x665895E5, 0x5C96E5A9, 0x97E5E976, 0xE6298660, 0x69966498, 0x01017FE6,
    0x00000000

  EW_BITMAPS_TABLE( ResourcesWhiteBitmap )
    EW_BITMAP( ResourcesWhiteBitmap, Default )
EW_END_OF_BITMAP_RES( ResourcesWhiteBitmap )

/* Table with links to derived variants of the bitmap resource : 'Resources::WhiteBitmap' */
EW_RES_WITHOUT_VARIANTS( ResourcesWhiteBitmap )

/* Font resource : 'Resources::FontArial12' */
EW_DEFINE_FONT_RES( ResourcesFontArial12, 10, 2, 0, 16, 0x001F, 0x00C0 )
  EW_GLYPH( 0x001F, 1, -7, 6, 7, 8, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 3, 0x00000062 ),                /* ' ' */
  EW_GLYPH( 0x0021, 1, -7, 1, 7, 3, 0x00000062 ),               /* '!' */
  EW_GLYPH( 0x0022, 1, -7, 3, 3, 5, 0x0000007F ),               /* '"' */
  EW_GLYPH( 0x0023, 0, -7, 6, 7, 6, 0x00000096 ),               /* '#' */
  EW_GLYPH( 0x0024, 0, -8, 5, 9, 6, 0x00000148 ),               /* '$' */
  EW_GLYPH( 0x0025, 0, -7, 9, 7, 9, 0x00000209 ),               /* '%' */
  EW_GLYPH( 0x0026, 1, -7, 5, 7, 7, 0x000002F3 ),               /* '&' */
  EW_GLYPH( 0x0027, 0, -7, 1, 3, 2, 0x00000387 ),               /* ''' */
  EW_GLYPH( 0x0028, 0, -7, 2, 9, 3, 0x00000391 ),               /* '(' */
  EW_GLYPH( 0x0029, 1, -7, 2, 9, 3, 0x000003E6 ),               /* ')' */
  EW_GLYPH( 0x002A, 0, -7, 3, 4, 4, 0x0000043E ),               /* '*' */
  EW_GLYPH( 0x002B, 0, -6, 5, 5, 6, 0x00000471 ),               /* '+' */
  EW_GLYPH( 0x002C, 1, -1, 1, 3, 3, 0x000004AE ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -3, 2, 1, 3, 0x000004BC ),               /* '-' */
  EW_GLYPH( 0x002E, 1, -1, 1, 1, 3, 0x000004C6 ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -7, 3, 7, 3, 0x000004CB ),               /* '/' */
  EW_GLYPH( 0x0030, 0, -7, 5, 7, 6, 0x00000515 ),               /* '0' */
  EW_GLYPH( 0x0031, 1, -7, 3, 7, 6, 0x000005A2 ),               /* '1' */
  EW_GLYPH( 0x0032, 0, -7, 5, 7, 6, 0x000005D7 ),               /* '2' */
  EW_GLYPH( 0x0033, 0, -7, 5, 7, 6, 0x0000066C ),               /* '3' */
  EW_GLYPH( 0x0034, 0, -7, 5, 7, 6, 0x00000706 ),               /* '4' */
  EW_GLYPH( 0x0035, 0, -7, 5, 7, 6, 0x00000771 ),               /* '5' */
  EW_GLYPH( 0x0036, 0, -7, 5, 7, 6, 0x0000081D ),               /* '6' */
  EW_GLYPH( 0x0037, 0, -7, 5, 7, 6, 0x000008BB ),               /* '7' */
  EW_GLYPH( 0x0038, 0, -7, 5, 7, 6, 0x0000092F ),               /* '8' */
  EW_GLYPH( 0x0039, 0, -7, 5, 7, 6, 0x000009D8 ),               /* '9' */
  EW_GLYPH( 0x003A, 1, -5, 1, 5, 3, 0x00000A71 ),               /* ':' */
  EW_GLYPH( 0x003B, 1, -5, 1, 7, 3, 0x00000A82 ),               /* ';' */
  EW_GLYPH( 0x003C, 0, -6, 5, 5, 6, 0x00000A9C ),               /* '<' */
  EW_GLYPH( 0x003D, 0, -5, 5, 3, 6, 0x00000B13 ),               /* '=' */
  EW_GLYPH( 0x003E, 0, -6, 5, 5, 6, 0x00000B5E ),               /* '>' */
  EW_GLYPH( 0x003F, 0, -7, 5, 7, 6, 0x00000BD1 ),               /* '?' */
  EW_GLYPH( 0x0040, 0, -7, 10, 9, 10, 0x00000C4E ),             /* '@' */
  EW_GLYPH( 0x0041, 0, -7, 7, 7, 7, 0x00000DF5 ),               /* 'A' */
  EW_GLYPH( 0x0042, 1, -7, 5, 7, 7, 0x00000EA9 ),               /* 'B' */
  EW_GLYPH( 0x0043, 1, -7, 5, 7, 7, 0x00000F31 ),               /* 'C' */
  EW_GLYPH( 0x0044, 1, -7, 5, 7, 7, 0x00000FB3 ),               /* 'D' */
  EW_GLYPH( 0x0045, 1, -7, 5, 7, 7, 0x00001021 ),               /* 'E' */
  EW_GLYPH( 0x0046, 1, -7, 4, 7, 6, 0x00001098 ),               /* 'F' */
  EW_GLYPH( 0x0047, 1, -7, 6, 7, 8, 0x000010E8 ),               /* 'G' */
  EW_GLYPH( 0x0048, 1, -7, 5, 7, 7, 0x00001190 ),               /* 'H' */
  EW_GLYPH( 0x0049, 1, -7, 1, 7, 3, 0x000011D3 ),               /* 'I' */
  EW_GLYPH( 0x004A, 1, -7, 4, 7, 6, 0x000011DE ),               /* 'J' */
  EW_GLYPH( 0x004B, 1, -7, 6, 7, 7, 0x0000121B ),               /* 'K' */
  EW_GLYPH( 0x004C, 1, -7, 4, 7, 6, 0x000012A7 ),               /* 'L' */
  EW_GLYPH( 0x004D, 1, -7, 7, 7, 9, 0x000012D3 ),               /* 'M' */
  EW_GLYPH( 0x004E, 1, -7, 5, 7, 7, 0x0000136A ),               /* 'N' */
  EW_GLYPH( 0x004F, 1, -7, 6, 7, 8, 0x000013CA ),               /* 'O' */
  EW_GLYPH( 0x0050, 1, -7, 5, 7, 7, 0x0000146B ),               /* 'P' */
  EW_GLYPH( 0x0051, 1, -7, 6, 8, 8, 0x000014D9 ),               /* 'Q' */
  EW_GLYPH( 0x0052, 1, -7, 5, 7, 7, 0x00001599 ),               /* 'R' */
  EW_GLYPH( 0x0053, 1, -7, 5, 7, 7, 0x00001613 ),               /* 'S' */
  EW_GLYPH( 0x0054, 0, -7, 5, 7, 5, 0x000016CA ),               /* 'T' */
  EW_GLYPH( 0x0055, 1, -7, 5, 7, 7, 0x00001711 ),               /* 'U' */
  EW_GLYPH( 0x0056, 0, -7, 7, 7, 7, 0x00001760 ),               /* 'V' */
  EW_GLYPH( 0x0057, 0, -7, 9, 7, 9, 0x000017ED ),               /* 'W' */
  EW_GLYPH( 0x0058, 0, -7, 7, 7, 7, 0x000018E4 ),               /* 'X' */
  EW_GLYPH( 0x0059, 0, -7, 7, 7, 7, 0x0000198D ),               /* 'Y' */
  EW_GLYPH( 0x005A, 1, -7, 4, 7, 6, 0x00001A1B ),               /* 'Z' */
  EW_GLYPH( 0x005B, 1, -7, 2, 9, 3, 0x00001A96 ),               /* '[' */
  EW_GLYPH( 0x005C, 0, -7, 3, 7, 3, 0x00001AB8 ),               /* '\' */
  EW_GLYPH( 0x005D, 0, -7, 2, 9, 3, 0x00001B02 ),               /* ']' */
  EW_GLYPH( 0x005E, 1, -7, 4, 4, 6, 0x00001B24 ),               /* '^' */
  EW_GLYPH( 0x005F, 0, 1, 6, 1, 6, 0x00001B71 ),                /* '_' */
  EW_GLYPH( 0x0060, 0, -7, 2, 2, 3, 0x00001B8F ),               /* '`' */
  EW_GLYPH( 0x0061, 0, -5, 5, 5, 6, 0x00001BA3 ),               /* 'a' */
  EW_GLYPH( 0x0062, 0, -7, 5, 7, 6, 0x00001C1D ),               /* 'b' */
  EW_GLYPH( 0x0063, 0, -5, 5, 5, 6, 0x00001C92 ),               /* 'c' */
  EW_GLYPH( 0x0064, 0, -7, 5, 7, 6, 0x00001D06 ),               /* 'd' */
  EW_GLYPH( 0x0065, 0, -5, 5, 5, 6, 0x00001D7B ),               /* 'e' */
  EW_GLYPH( 0x0066, -1, -7, 3, 7, 3, 0x00001DFC ),              /* 'f' */
  EW_GLYPH( 0x0067, 0, -5, 5, 7, 6, 0x00001E37 ),               /* 'g' */
  EW_GLYPH( 0x0068, 0, -7, 5, 7, 6, 0x00001ECF ),               /* 'h' */
  EW_GLYPH( 0x0069, 0, -7, 1, 7, 3, 0x00001F25 ),               /* 'i' */
  EW_GLYPH( 0x006A, -1, -7, 3, 9, 4, 0x00001F38 ),              /* 'j' */
  EW_GLYPH( 0x006B, 1, -7, 5, 7, 6, 0x00001F72 ),               /* 'k' */
  EW_GLYPH( 0x006C, 0, -7, 1, 7, 3, 0x00001FD9 ),               /* 'l' */
  EW_GLYPH( 0x006D, 1, -5, 7, 5, 9, 0x00001FE4 ),               /* 'm' */
  EW_GLYPH( 0x006E, 0, -5, 5, 5, 6, 0x0000204A ),               /* 'n' */
  EW_GLYPH( 0x006F, 0, -5, 5, 5, 6, 0x00002092 ),               /* 'o' */
  EW_GLYPH( 0x0070, 0, -5, 5, 7, 6, 0x00002111 ),               /* 'p' */
  EW_GLYPH( 0x0071, 0, -5, 5, 7, 6, 0x00002196 ),               /* 'q' */
  EW_GLYPH( 0x0072, 0, -5, 3, 5, 4, 0x0000221B ),               /* 'r' */
  EW_GLYPH( 0x0073, 0, -5, 5, 5, 6, 0x00002243 ),               /* 's' */
  EW_GLYPH( 0x0074, -1, -7, 3, 7, 3, 0x000022D2 ),              /* 't' */
  EW_GLYPH( 0x0075, 0, -5, 5, 5, 6, 0x00002307 ),               /* 'u' */
  EW_GLYPH( 0x0076, 0, -5, 6, 5, 7, 0x00002345 ),               /* 'v' */
  EW_GLYPH( 0x0077, 0, -5, 9, 5, 9, 0x000023C4 ),               /* 'w' */
  EW_GLYPH( 0x0078, -1, -5, 7, 5, 6, 0x00002485 ),              /* 'x' */
  EW_GLYPH( 0x0079, 0, -5, 5, 7, 5, 0x00002517 ),               /* 'y' */
  EW_GLYPH( 0x007A, 0, -5, 4, 5, 5, 0x000025A5 ),               /* 'z' */
  EW_GLYPH( 0x007B, 0, -7, 4, 9, 4, 0x00002601 ),               /* '{' */
  EW_GLYPH( 0x007C, 1, -7, 1, 9, 3, 0x00002677 ),               /* '|' */
  EW_GLYPH( 0x007D, 0, -7, 4, 9, 4, 0x00002684 ),               /* '}' */
  EW_GLYPH( 0x007E, 0, -5, 6, 2, 6, 0x000026FA ),               /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 3, 0x00002734 ),
  EW_GLYPH( 0x00A1, 1, -5, 1, 7, 3, 0x00002734 ),
  EW_GLYPH( 0x00A2, 0, -7, 5, 9, 6, 0x00002751 ),
  EW_GLYPH( 0x00A3, 0, -7, 6, 7, 6, 0x00002810 ),
  EW_GLYPH( 0x00A4, 0, -5, 4, 4, 6, 0x000028AB ),
  EW_GLYPH( 0x00A5, 0, -7, 5, 7, 6, 0x000028F1 ),
  EW_GLYPH( 0x00A6, 1, -7, 1, 9, 3, 0x0000298C ),
  EW_GLYPH( 0x00A7, 1, -7, 4, 9, 6, 0x000029A1 ),
  EW_GLYPH( 0x00A8, 0, -7, 3, 1, 3, 0x00002A5C ),
  EW_GLYPH( 0x00A9, 0, -7, 7, 7, 7, 0x00002A67 ),
  EW_GLYPH( 0x00AA, 0, -7, 3, 4, 4, 0x00002B6A ),
  EW_GLYPH( 0x00AB, 0, -5, 5, 5, 6, 0x00002BA3 ),
  EW_GLYPH( 0x00AC, 0, -5, 5, 3, 6, 0x00002C14 ),
  EW_GLYPH( 0x00AD, 0, -3, 2, 1, 3, 0x00002C47 ),
  EW_GLYPH( 0x00AE, 0, -7, 7, 7, 7, 0x00002C51 ),
  EW_GLYPH( 0x00AF, 0, -9, 6, 1, 6, 0x00002D42 ),
  EW_GLYPH( 0x00B0, 0, -7, 3, 3, 4, 0x00002D60 ),
  EW_GLYPH( 0x00B1, 0, -6, 5, 6, 5, 0x00002D8F ),
  EW_GLYPH( 0x00B2, 0, -7, 3, 4, 3, 0x00002DE1 ),
  EW_GLYPH( 0x00B3, 0, -7, 3, 4, 3, 0x00002E24 ),
  EW_GLYPH( 0x00B4, 1, -7, 2, 2, 3, 0x00002E5B ),
  EW_GLYPH( 0x00B5, 0, -5, 5, 7, 6, 0x00002E6F ),
  EW_GLYPH( 0x00B6, 0, -7, 6, 9, 6, 0x00002EC3 ),
  EW_GLYPH( 0x00B7, 1, -4, 1, 1, 3, 0x00002F3A ),
  EW_GLYPH( 0x00B8, 1, 0, 2, 2, 4, 0x00002F3F ),
  EW_GLYPH( 0x00B9, 0, -7, 2, 4, 3, 0x00002F4F ),
  EW_GLYPH( 0x00BA, 1, -7, 3, 4, 4, 0x00002F6A ),
  EW_GLYPH( 0x00BB, 1, -5, 5, 5, 6, 0x00002F9E ),
  EW_GLYPH( 0x00BC, 0, -7, 8, 7, 8, 0x0000300F ),
  EW_GLYPH( 0x00BD, 0, -7, 7, 7, 8, 0x000030C4 ),
  EW_GLYPH( 0x00BE, 0, -7, 8, 7, 8, 0x00003173 ),
  EW_GLYPH( 0x00BF, 0, -5, 5, 7, 6, 0x0000324F ),
  EW_GLYPH( 0x00C0, 0, -10, 7, 10, 7, 0x000032B9 ),
  EW_GLYPH( 0x00C1, 0, -10, 7, 10, 7, 0x0000339C ),
  EW_GLYPH( 0x00C2, 0, -10, 7, 10, 7, 0x0000347F ),
  EW_GLYPH( 0x00C3, 0, -10, 7, 10, 7, 0x0000356E ),
  EW_GLYPH( 0x00C4, 0, -9, 7, 9, 7, 0x0000366D ),
  EW_GLYPH( 0x00C5, 0, -9, 7, 9, 7, 0x0000373F ),
  EW_GLYPH( 0x00C6, 0, -7, 9, 7, 10, 0x00003816 ),
  EW_GLYPH( 0x00C7, 1, -7, 5, 9, 7, 0x000038F0 ),
  EW_GLYPH( 0x00C8, 1, -10, 5, 10, 7, 0x00003995 ),
  EW_GLYPH( 0x00C9, 1, -10, 5, 10, 7, 0x00003A35 ),
  EW_GLYPH( 0x00CA, 1, -10, 5, 10, 7, 0x00003AD5 ),
  EW_GLYPH( 0x00CB, 1, -9, 5, 9, 7, 0x00003B81 ),
  EW_GLYPH( 0x00CC, 0, -10, 2, 10, 3, 0x00003C12 ),
  EW_GLYPH( 0x00CD, 1, -10, 2, 10, 3, 0x00003C44 ),
  EW_GLYPH( 0x00CE, 0, -10, 3, 10, 3, 0x00003C76 ),
  EW_GLYPH( 0x00CF, 0, -9, 3, 9, 3, 0x00003CBE ),
  EW_GLYPH( 0x00D0, 0, -7, 6, 7, 7, 0x00003CED ),
  EW_GLYPH( 0x00D1, 1, -10, 5, 10, 7, 0x00003D7A ),
  EW_GLYPH( 0x00D2, 1, -10, 6, 10, 8, 0x00003E1F ),
  EW_GLYPH( 0x00D3, 1, -10, 6, 10, 8, 0x00003EEC ),
  EW_GLYPH( 0x00D4, 1, -10, 6, 10, 8, 0x00003FB9 ),
  EW_GLYPH( 0x00D5, 1, -10, 6, 10, 8, 0x00004092 ),
  EW_GLYPH( 0x00D6, 1, -9, 6, 9, 8, 0x0000417B ),
  EW_GLYPH( 0x00D7, 1, -5, 4, 4, 6, 0x00004238 ),
  EW_GLYPH( 0x00D8, 0, -8, 8, 9, 8, 0x00004280 ),
  EW_GLYPH( 0x00D9, 1, -10, 5, 10, 7, 0x00004381 ),
  EW_GLYPH( 0x00DA, 1, -10, 5, 10, 7, 0x000043F9 ),
  EW_GLYPH( 0x00DB, 1, -10, 5, 10, 7, 0x00004471 ),
  EW_GLYPH( 0x00DC, 1, -9, 5, 9, 7, 0x000044F5 ),
  EW_GLYPH( 0x00DD, 0, -10, 7, 10, 7, 0x0000455E ),
  EW_GLYPH( 0x00DE, 1, -7, 5, 7, 7, 0x0000461B ),
  EW_GLYPH( 0x00DF, 0, -7, 5, 7, 6, 0x00004696 ),
  EW_GLYPH( 0x00E0, 0, -8, 5, 8, 6, 0x00004717 ),
  EW_GLYPH( 0x00E1, 0, -8, 5, 8, 6, 0x000047BA ),
  EW_GLYPH( 0x00E2, 0, -8, 5, 8, 6, 0x0000485D ),
  EW_GLYPH( 0x00E3, 0, -8, 5, 8, 6, 0x0000490C ),
  EW_GLYPH( 0x00E4, 0, -7, 5, 7, 6, 0x000049CB ),
  EW_GLYPH( 0x00E5, 0, -9, 5, 9, 6, 0x00004A5F ),
  EW_GLYPH( 0x00E6, 0, -5, 8, 5, 9, 0x00004B1E ),
  EW_GLYPH( 0x00E7, 0, -5, 5, 7, 6, 0x00004BEA ),
  EW_GLYPH( 0x00E8, 0, -8, 5, 8, 6, 0x00004C84 ),
  EW_GLYPH( 0x00E9, 0, -8, 5, 8, 6, 0x00004D2E ),
  EW_GLYPH( 0x00EA, 0, -8, 5, 8, 6, 0x00004DD8 ),
  EW_GLYPH( 0x00EB, 0, -7, 5, 7, 6, 0x00004E8E ),
  EW_GLYPH( 0x00EC, -1, -8, 2, 8, 3, 0x00004F29 ),
  EW_GLYPH( 0x00ED, 0, -8, 2, 8, 3, 0x00004F57 ),
  EW_GLYPH( 0x00EE, -1, -8, 3, 8, 3, 0x00004F85 ),
  EW_GLYPH( 0x00EF, -1, -7, 3, 7, 3, 0x00004FC7 ),
  EW_GLYPH( 0x00F0, 0, -7, 5, 7, 6, 0x00004FF0 ),
  EW_GLYPH( 0x00F1, 0, -8, 5, 8, 6, 0x0000507F ),
  EW_GLYPH( 0x00F2, 0, -8, 5, 8, 6, 0x0000510C ),
  EW_GLYPH( 0x00F3, 0, -8, 5, 8, 6, 0x000051B4 ),
  EW_GLYPH( 0x00F4, 0, -8, 5, 8, 6, 0x0000525C ),
  EW_GLYPH( 0x00F5, 0, -8, 5, 8, 6, 0x00005310 ),
  EW_GLYPH( 0x00F6, 0, -7, 5, 7, 6, 0x000053D4 ),
  EW_GLYPH( 0x00F7, 0, -6, 5, 5, 5, 0x0000546D ),
  EW_GLYPH( 0x00F8, 0, -6, 5, 7, 6, 0x000054BA ),
  EW_GLYPH( 0x00F9, 0, -8, 5, 8, 6, 0x0000555E ),
  EW_GLYPH( 0x00FA, 0, -8, 5, 8, 6, 0x000055C5 ),
  EW_GLYPH( 0x00FB, 0, -8, 5, 8, 6, 0x0000562C ),
  EW_GLYPH( 0x00FC, 0, -7, 5, 7, 6, 0x0000569F ),
  EW_GLYPH( 0x00FD, 0, -8, 5, 10, 6, 0x000056F7 ),
  EW_GLYPH( 0x00FE, 0, -7, 5, 9, 6, 0x000057AE ),
  EW_GLYPH( 0x00FF, 0, -7, 5, 9, 6, 0x0000583E ),

  EW_FONT_PIXEL( ResourcesFontArial12, 0x000058E6 )             /* ratio 90.36 % */
    0xAF7BDEF7, 0x0005EF7B, 0x7BDEE000, 0xDF47395D, 0xDC94A2EB, 0x7552AB72, 0x75DF75DF,
    0x37BCDEF3, 0xDEBBCDEF, 0x4B5BDEBB, 0xEFEA5C2D, 0xEFD7BE3F, 0xF3EE618E, 0xF5B19E73,
    0xF1A8FFEF, 0xDFD6FBB6, 0xF85DD6BF, 0x5979EF0D, 0x17B1807B, 0x6FDD79EF, 0xFAEEB5DD,
    0x32F3DE3A, 0xBFFC8147, 0x6F35E7BC, 0x9E49FFD3, 0xF17F32A5, 0x8EFBDFFE, 0xEEEFD278,
    0xEFC6ABCE, 0x0CCAAFF7, 0xBF51C9E1, 0x7FFC6FFF, 0x8C429955, 0x9FFF19E7, 0xF27BC7AB,
    0x80B9BBEE, 0xAF7BDD7B, 0x758DC17B, 0x2ADB15EF, 0x96355B7B, 0x7F2556DF, 0xBFFD97F7,
    0x5669AEFF, 0xD3510220, 0x7FDFFEAC, 0xFEAF5BAB, 0xDA8013D9, 0xF7DD5FF7, 0xC604BBBC,
    0xD4F73D7D, 0xF3D0F7B3, 0xDDF63BDE, 0xCF7BDFA3, 0xFFF0B1EF, 0xDCF7FC3D, 0xB7DB8D65,
    0x43E2F30F, 0xBA4D647F, 0x7BAEFCF1, 0xDEE375EF, 0xF7BAD77B, 0x197F75EE, 0x5BFBCF7D,
    0x598FDA9E, 0x37FFBDF7, 0xFEAFF3BE, 0x8CB5D39F, 0x0F777E3D, 0x85A9EF7D, 0xBDE7BDDF,
    0xEF7BDEF7, 0x79BA26FD, 0x731BB82A, 0xDFFAA461, 0x3DEF7D7F, 0xF6F858EF, 0xDF6FBFDD,
    0xCB2C6FDF, 0xB5BCF7D7, 0x7BDE2FEF, 0xCEAB0FEF, 0xFBEC6DBD, 0x7D5CC3D9, 0xE5EFBFCE,
    0x858DCBDE, 0xFFEF1BF9, 0x8F6E7EF4, 0x8C77ECFD, 0xF7BEDCF7, 0xBDEF7BDE, 0xEF7BDEF7,
    0xFFCFA26F, 0xEE77A31D, 0x9F773BD1, 0xBEC63BFF, 0xF6F79C7B, 0xE6163FF9, 0x393FF4BD,
    0xEFCF0B81, 0xBC9BFFDC, 0xEFBB9EE7, 0xFB7F331E, 0xF5FBBFFC, 0xADCF7DD7, 0x5CC6355B,
    0x90646786, 0xCD7BA27E, 0xE70FFDDF, 0xCFFDFD3C, 0xFFF7BDFF, 0xDCF7BEC6, 0xBA97FFD3,
    0xC41D6705, 0xCFCC95EC, 0xEF7BE3EF, 0x7B9E78FB, 0xC3E73D6F, 0x67BDEE77, 0x223777BA,
    0xEE7FBBDD, 0xB8621FDD, 0x677CFF77, 0xBE9FFE8F, 0x213B52CF, 0xEFDA96A1, 0xF7BDF6FF,
    0xFBBDC2FE, 0x10105587, 0xBBBDCB58, 0xBAF7BDEF, 0xDEE05EF7, 0x2F7BDD7B, 0xF7BDEF70,
    0x0BDEEBDE, 0xBDEEBDEE, 0xBFB9D600, 0x39EE715C, 0xC9D9E4DF, 0xD7B937BD, 0x9C569937,
    0x1717BDFB, 0xEE5EF700, 0x00B800BD, 0xC9C0002E, 0xBDF7DECC, 0xEF892FC4, 0xF27FBE4D,
    0x33EF0F9D, 0x642FA18B, 0x00000B8C, 0x13BDEF70, 0x4FE3FAF3, 0xE3BE4A96, 0xE6398C7C,
    0x60FFF7C0, 0xEB87DC59, 0xFAC4DF85, 0x3F985BE0, 0x79CF7978, 0xF4E739F5, 0x064F5933,
    0x67C88332, 0xE73E9F32, 0x9EF7BE9C, 0xC37FDEE9, 0xDD79EF70, 0xBC002FFB, 0xE73EB4E7,
    0xD62CF5DC, 0xFBC99097, 0x57C4B3C4, 0xEDCCCE7D, 0xEF7FE73D, 0x77BA67BD, 0x9EF70C37,
    0xAC1CF6E3, 0xFFAEE818, 0xEE77D7FD, 0xFD6566FB, 0x279F7FCF, 0x7FBFDBBF, 0xDF4E33C5,
    0xEF7BDEF3, 0x00BDD7BD, 0x2E2E0000, 0x478C0000, 0xBDF7DB8D, 0xEBF181BF, 0x0C30F746,
    0x866EB743, 0x61BBA065, 0x71A760F4, 0xE52AEE53, 0xDBFBF551, 0x31BFDB6B, 0x589F79E3,
    0x9E27EAC3, 0xB6E77177, 0xC794A6D7, 0x32FC3F92, 0x69FFADFF, 0xAF44E766, 0x998D5E86,
    0x5BFE539D, 0xF0FC73FF, 0x734C631B, 0xAF8DFD0C, 0x785FFEF1, 0xB80001E2, 0x7F7BDEF7,
    0x7EB3FD0F, 0x9BA5BF91, 0xBDEF77E7, 0x3BB8002E, 0x636DF955, 0x56DECAB1, 0xC0017BDD,
    0xD6B96F65, 0xFAFFFE78, 0xBDEEFD55, 0xE8DFDEF7, 0xE7FEE75E, 0xF676F73A, 0xDF3DC6EF,
    0xEFF7D7EB, 0x3D9EF002, 0x8F5EF3EC, 0x619E9867, 0x7D8EF79F, 0xEDEFB8F7, 0xC7B51E3B,
    0xB77EFB54, 0xF6305C2F, 0x6CF7DD79, 0x8F18F1E3, 0xCB67BEE9, 0xFA797F7D, 0xEEFC77DE,
    0xDEEFC6AF, 0xE59EFB7B, 0xD77E79FB, 0xF1802EBD, 0x9F6F7D3F, 0xF1A63C63, 0xF09F6E98,
    0x77F2A73F, 0xC00BE9EE, 0x9C47FF3A, 0x008D33F3, 0x5C0BDEE0, 0x4400172E, 0x005F6EFC,
    0xBFBC17C4, 0xBF41BEF0, 0x2E2FF441, 0xBEB3BF70, 0xE7DB9D33, 0x01150AB6, 0x673EDC00,
    0xA6DFE73A, 0xEFE40011, 0xDFFDF2FE, 0xACD35BFF, 0xFF3ACD31, 0x77EF7FFB, 0x77CF70F6,
    0x3D30E63D, 0xF5EF3DC3, 0xD8C03D9E, 0xBBF7BBF7, 0xE31E98D7, 0x5CF7DD31, 0xB8179F63,
    0x01B7ADBF, 0x567BFF98, 0xBF59CEFF, 0xCF3FFDFF, 0xF5BFBCEF, 0x966B6FBF, 0x50175EEB,
    0x400B8BBF, 0x9CEF8F0C, 0xDE787DED, 0xCBFBCBDF, 0xDE958CF9, 0x88C65CEF, 0xF5349BF2,
    0x9CCF7FBB, 0xFD55ADCE, 0xBE598DFF, 0xFF7E37EF, 0xACD3598F, 0x5FCA7729, 0x76F3DDE6,
    0x067DEB1A, 0xD92CEF55, 0x3DCEEE77, 0xBE7DFD8C, 0x66B95ADF, 0xCDC27DD4, 0xE9C788C3,
    0xEF7BDEE6, 0xB33EAF5D, 0x7BDEB4CF, 0xF7BD73AD, 0xFD92308A, 0x22461FB0, 0x0BDEF782,
    0xEF72CF70, 0xF072044B, 0x0E4D9E6C, 0xD57DEE11, 0x677E3F7F, 0x6F7D39F7, 0x3F88998F,
    0x5FEC659E, 0xF66B7DD5, 0xF1EF6678, 0x5577DACD, 0x7B7EB1DF, 0xDF6A0F58, 0xEDEF797F,
    0xDF678636, 0xB171B8B8, 0xF75DD98A, 0x7B7BE9F6, 0xD60BFFFD, 0x657EBFFF, 0x1EDDBAFC,
    0xD6E35BEB, 0xF75EF753, 0x7BDEEBDE, 0x2EB97BDD, 0xDF57F9E6, 0x7F8ED6FB, 0xF239FF7D,
    0xB2AFEFDF, 0xFCFF9EEE, 0x77F73DEA, 0xFBBECF5D, 0xDEF7BCF1, 0xEFEF79F7, 0x631DF77C,
    0x318C77DD, 0x78C77DD6, 0xF77CEFEF, 0xEF7BDE7D, 0xD7F77CFB, 0xBF3D3B5D, 0x3BCFBCF0,
    0xEEDE77CE, 0xC6DDDD6E, 0xEF7BCEF9, 0x7BDEF7BD, 0xFB3D7B81, 0xDEF3C7EE, 0xBDE7DF7B,
    0x8EFBDEFB, 0x86318D41, 0xBDE31CFF, 0x7DF7FF3B, 0xFBEF7BDE, 0xBDEF7BDC, 0xD7FD7B7D,
    0xE02E2FFA, 0xEBDEF75E, 0x7BAF705E, 0x677DFBBF, 0xE79EEFE5, 0x27DFDDFF, 0x1CCEFA9C,
    0x0B8BEEBF, 0xB9C3C780, 0x2EFDDF97, 0xF7BDFFA8, 0x03BAE9BE, 0x3F9E12FC, 0x5C000000,
    0x273AAEFB, 0xDEB3AC3E, 0xEF3DE2FB, 0xF78FBCFB, 0xEEE8677C, 0x9EFDDDD6, 0xCC3A8CEF,
    0xE6BF04E6, 0x6A207FA3, 0x77EDCBCE, 0xEF3E641E, 0xAF75F572, 0x70DF875B, 0x747C30C2,
    0xCFDEF0C3, 0x32CEFEED, 0xDD5DFC8C, 0xEEFFF3CE, 0xA13E6C4F, 0xE7CA9C5F, 0xF7F33BE1,
    0xDFBBEBCE, 0xDEFC0E33, 0x9F32B977, 0x5C2E5D7B, 0x38FEE438, 0xECF2C45D, 0xF97BEF73,
    0xC60DD00D, 0x382DD40F, 0xAF6620EB, 0x1F7E7E64, 0xC7DF7BDF, 0xEB7BDCF3, 0x83BE1F39,
    0xE0DD03F1, 0xC16EA037, 0x7B310759, 0xFBF3F325, 0x3EFBDEF8, 0x5BDEE79E, 0x1DF0F9CF,
    0xFBF424F2, 0x507EB7C2, 0x83ACE0B7, 0xF992BD98, 0xEF7C7DF9, 0x73CF1F7D, 0x7CE7ADEF,
    0x2FDF0EF8, 0x2DF79E0F, 0xA87DFCDC, 0x41D6705B, 0xFCC95ECC, 0xF7BE3EFC, 0xB9E78FBE,
    0x3E73D6F7, 0xC2EB877C, 0xC16EA175, 0x7B310759, 0xFBF3F325, 0x3EFBDEF8, 0x5BDEE79E,
    0x1DF0F9CF, 0xBDAC36FA, 0xC607EE60, 0x92BD9882, 0x7C7DF9F9, 0xCF1F7DEF, 0xE7ADEF73,
    0xE30EF87C, 0xE5EF7BDE, 0xAF7BAEFB, 0x1F9807A8, 0xBEBEBDEE, 0xA9F7BDD7, 0x0F9C2F7B,
    0xB3BEBDEE, 0xDF4FFF47, 0x909DA967, 0xF7ED4B50, 0xC6FAFB7F, 0x6FC2EE1E, 0xC7E31BA0,
    0xF75EF7BD, 0x7BDC0BDE, 0x05EF7BAF, 0xF197BDEE, 0xC37E3743, 0xF75EF7BD, 0x7BDC0BDE,
    0x05EF7BAF, 0x9E57BDEE, 0x6F97DFA4, 0xEF7BDCFD, 0xC0BDEF75, 0xF7BAF7BD, 0x7BDEE05E,
    0xBAEB975D, 0xDEEBDEF7, 0xEF7B817B, 0xC0BDEF75, 0x46FEF7BD, 0x00B9F8F7, 0xBFDD7E30,
    0x9E400171, 0xD6FDF7EC, 0xC00005CF, 0x02EBAF75, 0xF7BDC000, 0x1BBBDC17, 0x15EEBAD6,
    0x5602BDD7, 0x7DFEEF71, 0xF79E3CBF, 0x9F7F372D, 0xF0BD70FB, 0x7C1F589B, 0x2F07F30B,
    0x61BA037E, 0xF39EF0FC, 0xE9CE73EA, 0x0C9EB267, 0xCF910664, 0xCE7D3E64, 0x41F8CD39,
    0xDE06FC37, 0xCE7D5E73, 0xD64CFD39, 0x20CC8193, 0xA7CC99F2, 0xC9A739CF, 0xC5F7E893,
    0xE7BC7EB7, 0x739CFABC, 0x27AC99FA, 0xE4419903, 0x9F4F9933, 0x7EFB4E73, 0xB7DE7879,
    0x78FBF9B8, 0x39F579CF, 0x5933F4E7, 0x8332064F, 0x9F3267C8, 0x769CE73E, 0xEF175C5D,
    0xE73EAF39, 0xEB267E9C, 0x106640C9, 0xD3E64CF9, 0x1DD39CE7, 0x7DF7DFD1, 0xDBEFD183,
    0xEFFD6080, 0xFF8ACBAF, 0x9BE3CF5D, 0xFFD492BA, 0x923DFE86, 0xE67E618C, 0xCB1FF793,
    0x2FFDDFEA, 0x31BA06FC, 0x005C5C7E, 0x1A8F1800, 0x197BEFB7, 0x37E3743F, 0x00005C5C,
    0xB71A8F18, 0x49E57BEF, 0xD6F97DFA, 0x0005C5CF, 0x71A8F180, 0x75D7BEFB, 0x0B8BAEB9,
    0x51E30000, 0x2F7DF6E3, 0x83740FC6, 0xF0FC60DF, 0x734C631B, 0xAF8DFD0C, 0x785FFEF1,
    0xB80001E2, 0x70FFDEE0, 0x033C5F6F, 0x7BEF70CF, 0x3CC7BBDD, 0xDBEDFA67, 0x9E1FDF32,
    0xFC93BDC0, 0x7E6DF47E, 0x3F18DD03, 0x5CFFDCEB, 0xFECEDEE7, 0x7BE7B8DD, 0x31FEFAFD,
    0x6FC6E87E, 0xE7FEE758, 0xF676F73A, 0xDF3DC6EF, 0x4FF7D7EB, 0x97DFA49E, 0x73ACFD6F,
    0x7B9D73FF, 0xE377FB3B, 0xEBF5EF9E, 0xE5FBE7FB, 0xB96FBCF1, 0xB9D6FBF9, 0xBDCEB9FF,
    0x71BBFD9D, 0xF5FAF7CF, 0xAE5D73FD, 0x9FFB9D6B, 0xD9DBDCEB, 0x7CF71BBF, 0x3FDF5FAF,
    0x17B59B7D, 0xE7587FFD, 0xCFFDCEB3, 0xECEDEE75, 0xBE7B8DDF, 0x5FEFAFD7, 0xFBFFD39F,
    0xBD773ECB, 0xDBE3BEF7, 0xFCF7F77E, 0xF7BBF1CF, 0xEFBB77F4, 0xF77D8D7F, 0x3BEDEFB8,
    0x54C7B51E, 0xEFB77EFB, 0x770F63D8, 0x1BA06FC1, 0xFDF727E3, 0xDF7BE9E5, 0x1ABFBBF1,
    0xEDEF7BBF, 0x87E3167B, 0xDC86FC6E, 0xEFA797F7, 0xFEEFC77D, 0xBDEEFC6A, 0xF259EFB7,
    0x7CBEFD24, 0xFDF727EB, 0xDF7BE9E5, 0x1ABFBBF1, 0xEDEF7BBF, 0x72EB967B, 0x2FEFB95D,
    0x8EFBDF4F, 0xF8D5FDDF, 0xDF6F7BDD, 0x7BA37EB3, 0xF1805CFC, 0x0B8DFEEB, 0xFBF64F20,
    0x02E7EB7E, 0xD75EEB80, 0x6B7E0005, 0xDEE0DE31, 0xABBF18DF, 0x596F3DCF, 0x5F7BE9D4,
    0xE78F2FDF, 0xDFCDCB7D, 0xE99CFB77, 0x469B7F9C, 0xA06FC000, 0x7F27E31B, 0xFFEF97F7,
    0x669ADFFE, 0xF9D6698D, 0xF8CBFFDF, 0x21BF1BA1, 0xEF97F77F, 0x9ADFFEFF, 0xD6698D66,
    0x2BFFDFF9, 0xCBEFD24F, 0x77F27EB7, 0xEFFEF97F, 0xD669ADFF, 0xFF9D6698, 0x5FBEBFFD,
    0x96FBCF1E, 0x7F2FBF9B, 0xFFEF97F7, 0x669ADFFE, 0xF9D6698D, 0xBAEBFFDF, 0xEEFE575C,
    0xFDFFDF2F, 0x1ACD35BF, 0xBFF3ACD3, 0x970B97FF, 0xF7BDEF7B, 0x40B97BDE, 0x7EDEEFE4,
    0x6AB1FFFF, 0x9EECF6F6, 0xFFFB99CF, 0xA5F9DF3E, 0xC63740DF, 0x400B8B8F, 0x9CEF8F0C,
    0x3743F18D, 0x05C5C37E, 0x77C78620, 0xD24F26CE, 0x7EB7CBEF, 0x31002E2E, 0x3673BE3C,
    0x2EBAE5D7, 0x3C31002E, 0xC63673BE, 0x0DF8DD0F, 0xFBFB187B, 0x72B5BF7C, 0x84FBA8CD,
    0x8F11879B, 0xE005CDD3, 0xE7D87B3D, 0x30CF1EBD, 0xEF3DC33D, 0x803D9EF5, 0x7B5D72EB,
    0x7CFBFB18, 0xCD72B5BF, 0x9B84FBA8, 0xD38F1187, 0x0000000D
EW_END_OF_FONT_RES( ResourcesFontArial12 )

/* Table with links to derived variants of the font resource : 'Resources::FontArial12' */
EW_RES_WITHOUT_VARIANTS( ResourcesFontArial12 )

/* Font resource : 'Resources::FontVerdana20' */
EW_DEFINE_FONT_RES( ResourcesFontVerdana20, 17, 3, 0, 16, 0x001F, 0x00C0 )
  EW_GLYPH( 0x001F, 2, -13, 13, 13, 17, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 6, 0x00000135 ),                /* ' ' */
  EW_GLYPH( 0x0021, 3, -12, 2, 12, 7, 0x00000135 ),             /* '!' */
  EW_GLYPH( 0x0022, 1, -13, 5, 5, 8, 0x0000017A ),              /* '"' */
  EW_GLYPH( 0x0023, 2, -12, 11, 12, 14, 0x000001CF ),           /* '#' */
  EW_GLYPH( 0x0024, 1, -13, 9, 16, 11, 0x0000036A ),            /* '$' */
  EW_GLYPH( 0x0025, 1, -12, 16, 12, 18, 0x00000519 ),           /* '%' */
  EW_GLYPH( 0x0026, 1, -12, 12, 12, 12, 0x00000758 ),           /* '&' */
  EW_GLYPH( 0x0027, 1, -13, 2, 5, 5, 0x0000092F ),              /* ''' */
  EW_GLYPH( 0x0028, 1, -13, 5, 16, 8, 0x00000957 ),             /* '(' */
  EW_GLYPH( 0x0029, 1, -13, 5, 16, 8, 0x00000A41 ),             /* ')' */
  EW_GLYPH( 0x002A, 2, -13, 7, 8, 11, 0x00000B2B ),             /* '*' */
  EW_GLYPH( 0x002B, 1, -11, 11, 11, 14, 0x00000BEC ),           /* '+' */
  EW_GLYPH( 0x002C, 1, -2, 4, 5, 6, 0x00000CB9 ),               /* ',' */
  EW_GLYPH( 0x002D, 1, -6, 5, 1, 8, 0x00000D0C ),               /* '-' */
  EW_GLYPH( 0x002E, 2, -2, 2, 2, 6, 0x00000D25 ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -13, 7, 16, 8, 0x00000D31 ),             /* '/' */
  EW_GLYPH( 0x0030, 1, -12, 9, 12, 11, 0x00000E4B ),            /* '0' */
  EW_GLYPH( 0x0031, 2, -12, 8, 12, 11, 0x00000F9E ),            /* '1' */
  EW_GLYPH( 0x0032, 1, -12, 9, 12, 11, 0x00001044 ),            /* '2' */
  EW_GLYPH( 0x0033, 1, -12, 9, 12, 11, 0x0000119E ),            /* '3' */
  EW_GLYPH( 0x0034, 1, -12, 10, 12, 11, 0x0000131D ),           /* '4' */
  EW_GLYPH( 0x0035, 2, -12, 8, 12, 11, 0x00001435 ),            /* '5' */
  EW_GLYPH( 0x0036, 1, -12, 9, 12, 11, 0x00001545 ),            /* '6' */
  EW_GLYPH( 0x0037, 1, -12, 8, 12, 11, 0x000016B8 ),            /* '7' */
  EW_GLYPH( 0x0038, 1, -12, 9, 12, 11, 0x000017C9 ),            /* '8' */
  EW_GLYPH( 0x0039, 1, -12, 9, 12, 11, 0x00001983 ),            /* '9' */
  EW_GLYPH( 0x003A, 3, -9, 2, 9, 8, 0x00001B01 ),               /* ':' */
  EW_GLYPH( 0x003B, 2, -9, 4, 12, 8, 0x00001B2B ),              /* ';' */
  EW_GLYPH( 0x003C, 2, -12, 10, 12, 14, 0x00001BAA ),           /* '<' */
  EW_GLYPH( 0x003D, 2, -8, 10, 4, 14, 0x00001CF8 ),             /* '=' */
  EW_GLYPH( 0x003E, 2, -12, 10, 12, 14, 0x00001D98 ),           /* '>' */
  EW_GLYPH( 0x003F, 1, -12, 7, 12, 9, 0x00001EE6 ),             /* '?' */
  EW_GLYPH( 0x0040, 1, -12, 14, 14, 17, 0x00001FC8 ),           /* '@' */
  EW_GLYPH( 0x0041, 0, -12, 12, 12, 12, 0x00002280 ),           /* 'A' */
  EW_GLYPH( 0x0042, 2, -12, 9, 12, 12, 0x00002420 ),            /* 'B' */
  EW_GLYPH( 0x0043, 1, -12, 10, 12, 12, 0x00002556 ),           /* 'C' */
  EW_GLYPH( 0x0044, 2, -12, 10, 12, 13, 0x000026BB ),           /* 'D' */
  EW_GLYPH( 0x0045, 2, -12, 8, 12, 11, 0x000027F4 ),            /* 'E' */
  EW_GLYPH( 0x0046, 2, -12, 8, 12, 10, 0x000028D4 ),            /* 'F' */
  EW_GLYPH( 0x0047, 1, -12, 11, 12, 13, 0x00002994 ),           /* 'G' */
  EW_GLYPH( 0x0048, 2, -12, 9, 12, 13, 0x00002B30 ),            /* 'H' */
  EW_GLYPH( 0x0049, 1, -12, 6, 12, 8, 0x00002BD4 ),             /* 'I' */
  EW_GLYPH( 0x004A, 0, -12, 6, 12, 8, 0x00002C54 ),             /* 'J' */
  EW_GLYPH( 0x004B, 2, -12, 10, 12, 12, 0x00002CD7 ),           /* 'K' */
  EW_GLYPH( 0x004C, 2, -12, 7, 12, 9, 0x00002E24 ),             /* 'L' */
  EW_GLYPH( 0x004D, 2, -12, 10, 12, 14, 0x00002E94 ),           /* 'M' */
  EW_GLYPH( 0x004E, 2, -12, 9, 12, 13, 0x00002FAF ),            /* 'N' */
  EW_GLYPH( 0x004F, 1, -12, 11, 12, 13, 0x00003098 ),           /* 'O' */
  EW_GLYPH( 0x0050, 2, -12, 7, 12, 10, 0x00003223 ),            /* 'P' */
  EW_GLYPH( 0x0051, 1, -12, 11, 15, 13, 0x000032F1 ),           /* 'Q' */
  EW_GLYPH( 0x0052, 2, -12, 10, 12, 12, 0x000034DF ),           /* 'R' */
  EW_GLYPH( 0x0053, 1, -12, 10, 12, 12, 0x0000361A ),           /* 'S' */
  EW_GLYPH( 0x0054, 0, -12, 10, 12, 10, 0x000037D3 ),           /* 'T' */
  EW_GLYPH( 0x0055, 1, -12, 10, 12, 12, 0x00003893 ),           /* 'U' */
  EW_GLYPH( 0x0056, 0, -12, 12, 12, 12, 0x00003977 ),           /* 'V' */
  EW_GLYPH( 0x0057, 1, -12, 15, 12, 17, 0x00003B19 ),           /* 'W' */
  EW_GLYPH( 0x0058, 1, -12, 10, 12, 12, 0x00003D4A ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -12, 10, 12, 10, 0x00003EDF ),           /* 'Y' */
  EW_GLYPH( 0x005A, 1, -12, 10, 12, 12, 0x00004006 ),           /* 'Z' */
  EW_GLYPH( 0x005B, 2, -13, 4, 16, 8, 0x00004177 ),             /* '[' */
  EW_GLYPH( 0x005C, 1, -13, 7, 16, 8, 0x000041D7 ),             /* '\' */
  EW_GLYPH( 0x005D, 1, -13, 4, 16, 8, 0x000042F1 ),             /* ']' */
  EW_GLYPH( 0x005E, 2, -12, 11, 7, 14, 0x00004351 ),            /* '^' */
  EW_GLYPH( 0x005F, 0, 2, 11, 1, 11, 0x0000443D ),              /* '_' */
  EW_GLYPH( 0x0060, 3, -14, 4, 3, 11, 0x00004474 ),             /* '`' */
  EW_GLYPH( 0x0061, 0, -9, 8, 9, 10, 0x000044A6 ),              /* 'a' */
  EW_GLYPH( 0x0062, 1, -13, 9, 13, 11, 0x000045AE ),            /* 'b' */
  EW_GLYPH( 0x0063, 0, -9, 8, 9, 9, 0x000046C2 ),               /* 'c' */
  EW_GLYPH( 0x0064, 0, -13, 9, 13, 11, 0x000047AB ),            /* 'd' */
  EW_GLYPH( 0x0065, 0, -9, 9, 9, 10, 0x000048CA ),              /* 'e' */
  EW_GLYPH( 0x0066, 0, -13, 6, 13, 6, 0x00004A08 ),             /* 'f' */
  EW_GLYPH( 0x0067, 0, -9, 9, 12, 11, 0x00004A9D ),             /* 'g' */
  EW_GLYPH( 0x0068, 1, -13, 8, 13, 11, 0x00004C08 ),            /* 'h' */
  EW_GLYPH( 0x0069, 1, -12, 2, 12, 5, 0x00004CBA ),             /* 'i' */
  EW_GLYPH( 0x006A, -1, -12, 5, 15, 6, 0x00004CEA ),            /* 'j' */
  EW_GLYPH( 0x006B, 1, -13, 9, 13, 10, 0x00004D76 ),            /* 'k' */
  EW_GLYPH( 0x006C, 1, -13, 2, 13, 5, 0x00004E9A ),             /* 'l' */
  EW_GLYPH( 0x006D, 1, -9, 14, 9, 17, 0x00004EBC ),             /* 'm' */
  EW_GLYPH( 0x006E, 1, -9, 8, 9, 11, 0x00004FC7 ),              /* 'n' */
  EW_GLYPH( 0x006F, 0, -9, 9, 9, 10, 0x00005059 ),              /* 'o' */
  EW_GLYPH( 0x0070, 1, -9, 9, 12, 11, 0x0000516A ),             /* 'p' */
  EW_GLYPH( 0x0071, 0, -9, 9, 12, 11, 0x00005294 ),             /* 'q' */
  EW_GLYPH( 0x0072, 1, -9, 6, 9, 7, 0x000053BD ),               /* 'r' */
  EW_GLYPH( 0x0073, 0, -9, 8, 9, 9, 0x00005427 ),               /* 's' */
  EW_GLYPH( 0x0074, 0, -12, 7, 12, 7, 0x00005573 ),             /* 't' */
  EW_GLYPH( 0x0075, 1, -9, 8, 9, 11, 0x0000561E ),              /* 'u' */
  EW_GLYPH( 0x0076, 1, -9, 8, 9, 10, 0x000056A2 ),              /* 'v' */
  EW_GLYPH( 0x0077, 1, -9, 12, 9, 14, 0x00005796 ),             /* 'w' */
  EW_GLYPH( 0x0078, 1, -9, 8, 9, 10, 0x00005924 ),              /* 'x' */
  EW_GLYPH( 0x0079, 1, -9, 8, 12, 10, 0x00005A39 ),             /* 'y' */
  EW_GLYPH( 0x007A, 1, -9, 7, 9, 9, 0x00005B6A ),               /* 'z' */
  EW_GLYPH( 0x007B, 2, -13, 8, 16, 11, 0x00005C4B ),            /* '{' */
  EW_GLYPH( 0x007C, 3, -13, 2, 16, 8, 0x00005D76 ),             /* '|' */
  EW_GLYPH( 0x007D, 1, -13, 8, 16, 11, 0x00005D9E ),            /* '}' */
  EW_GLYPH( 0x007E, 2, -8, 11, 4, 14, 0x00005EC8 ),             /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 6, 0x00005F6C ),
  EW_GLYPH( 0x00A1, 3, -12, 2, 12, 7, 0x00005F6C ),
  EW_GLYPH( 0x00A2, 1, -12, 8, 15, 11, 0x00005FB1 ),
  EW_GLYPH( 0x00A3, 1, -12, 9, 12, 11, 0x000060E6 ),
  EW_GLYPH( 0x00A4, 1, -10, 9, 9, 11, 0x00006208 ),
  EW_GLYPH( 0x00A5, 1, -12, 10, 12, 11, 0x00006336 ),
  EW_GLYPH( 0x00A6, 3, -13, 2, 16, 8, 0x000064B8 ),
  EW_GLYPH( 0x00A7, 1, -12, 8, 15, 11, 0x000064F0 ),
  EW_GLYPH( 0x00A8, 3, -13, 5, 2, 11, 0x000066D4 ),
  EW_GLYPH( 0x00A9, 1, -12, 14, 14, 17, 0x000066EE ),
  EW_GLYPH( 0x00AA, 1, -12, 7, 8, 9, 0x000069BF ),
  EW_GLYPH( 0x00AB, 1, -9, 9, 8, 11, 0x00006A87 ),
  EW_GLYPH( 0x00AC, 2, -6, 10, 6, 14, 0x00006B95 ),
  EW_GLYPH( 0x00AD, 1, -6, 5, 1, 8, 0x00006C19 ),
  EW_GLYPH( 0x00AE, 1, -12, 14, 14, 17, 0x00006C32 ),
  EW_GLYPH( 0x00AF, 0, -15, 11, 1, 11, 0x00006EDE ),
  EW_GLYPH( 0x00B0, 1, -12, 7, 7, 9, 0x00006F15 ),
  EW_GLYPH( 0x00B1, 1, -13, 11, 11, 14, 0x00006FD9 ),
  EW_GLYPH( 0x00B2, 2, -12, 6, 8, 9, 0x000070CE ),
  EW_GLYPH( 0x00B3, 2, -12, 6, 8, 9, 0x00007198 ),
  EW_GLYPH( 0x00B4, 4, -14, 4, 3, 11, 0x0000725A ),
  EW_GLYPH( 0x00B5, 1, -9, 8, 12, 11, 0x0000728C ),
  EW_GLYPH( 0x00B6, 1, -12, 8, 15, 11, 0x00007335 ),
  EW_GLYPH( 0x00B7, 2, -6, 2, 2, 6, 0x00007402 ),
  EW_GLYPH( 0x00B8, 3, 0, 4, 3, 11, 0x0000740E ),
  EW_GLYPH( 0x00B9, 2, -12, 6, 8, 9, 0x0000743B ),
  EW_GLYPH( 0x00BA, 1, -12, 7, 8, 9, 0x0000749C ),
  EW_GLYPH( 0x00BB, 1, -9, 9, 8, 11, 0x00007576 ),
  EW_GLYPH( 0x00BC, 1, -12, 13, 12, 17, 0x00007684 ),
  EW_GLYPH( 0x00BD, 1, -12, 16, 12, 17, 0x00007814 ),
  EW_GLYPH( 0x00BE, 1, -12, 14, 12, 17, 0x00007A00 ),
  EW_GLYPH( 0x00BF, 1, -12, 7, 12, 9, 0x00007C0F ),
  EW_GLYPH( 0x00C0, 0, -17, 12, 17, 12, 0x00007CE4 ),
  EW_GLYPH( 0x00C1, 0, -17, 12, 17, 12, 0x00007EF1 ),
  EW_GLYPH( 0x00C2, 0, -17, 12, 17, 12, 0x000080FE ),
  EW_GLYPH( 0x00C3, 0, -16, 12, 16, 12, 0x00008332 ),
  EW_GLYPH( 0x00C4, 0, -16, 12, 16, 12, 0x0000855C ),
  EW_GLYPH( 0x00C5, 0, -17, 12, 17, 12, 0x0000874C ),
  EW_GLYPH( 0x00C6, 0, -12, 16, 12, 17, 0x00008978 ),
  EW_GLYPH( 0x00C7, 1, -12, 10, 15, 12, 0x00008B5B ),
  EW_GLYPH( 0x00C8, 2, -17, 8, 17, 11, 0x00008D0E ),
  EW_GLYPH( 0x00C9, 2, -17, 8, 17, 11, 0x00008E47 ),
  EW_GLYPH( 0x00CA, 2, -17, 8, 17, 11, 0x00008F80 ),
  EW_GLYPH( 0x00CB, 2, -16, 8, 16, 11, 0x000090E0 ),
  EW_GLYPH( 0x00CC, 1, -17, 6, 17, 8, 0x00009200 ),
  EW_GLYPH( 0x00CD, 1, -17, 6, 17, 8, 0x000092CF ),
  EW_GLYPH( 0x00CE, 1, -17, 6, 17, 8, 0x0000939E ),
  EW_GLYPH( 0x00CF, 1, -16, 6, 16, 8, 0x00009494 ),
  EW_GLYPH( 0x00D0, 0, -12, 12, 12, 13, 0x0000954C ),
  EW_GLYPH( 0x00D1, 2, -16, 9, 16, 13, 0x000096BD ),
  EW_GLYPH( 0x00D2, 1, -17, 11, 17, 13, 0x00009824 ),
  EW_GLYPH( 0x00D3, 1, -17, 11, 17, 13, 0x00009A17 ),
  EW_GLYPH( 0x00D4, 1, -17, 11, 17, 13, 0x00009C0A ),
  EW_GLYPH( 0x00D5, 1, -16, 11, 16, 13, 0x00009E24 ),
  EW_GLYPH( 0x00D6, 1, -16, 11, 16, 13, 0x0000A035 ),
  EW_GLYPH( 0x00D7, 1, -10, 10, 9, 14, 0x0000A20C ),
  EW_GLYPH( 0x00D8, 1, -13, 11, 14, 13, 0x0000A370 ),
  EW_GLYPH( 0x00D9, 1, -17, 10, 17, 12, 0x0000A58C ),
  EW_GLYPH( 0x00DA, 1, -17, 10, 17, 12, 0x0000A6D3 ),
  EW_GLYPH( 0x00DB, 1, -17, 10, 17, 12, 0x0000A81A ),
  EW_GLYPH( 0x00DC, 1, -16, 10, 16, 12, 0x0000A988 ),
  EW_GLYPH( 0x00DD, 0, -17, 10, 17, 10, 0x0000AAB4 ),
  EW_GLYPH( 0x00DE, 2, -12, 7, 12, 10, 0x0000AC3E ),
  EW_GLYPH( 0x00DF, 1, -13, 9, 13, 11, 0x0000AD07 ),
  EW_GLYPH( 0x00E0, 0, -14, 8, 14, 10, 0x0000AE4B ),
  EW_GLYPH( 0x00E1, 0, -14, 8, 14, 10, 0x0000AFAC ),
  EW_GLYPH( 0x00E2, 0, -14, 8, 14, 10, 0x0000B10D ),
  EW_GLYPH( 0x00E3, 0, -13, 8, 13, 10, 0x0000B295 ),
  EW_GLYPH( 0x00E4, 0, -13, 8, 13, 10, 0x0000B417 ),
  EW_GLYPH( 0x00E5, 0, -17, 8, 17, 10, 0x0000B55F ),
  EW_GLYPH( 0x00E6, 0, -9, 15, 9, 16, 0x0000B71F ),
  EW_GLYPH( 0x00E7, 0, -9, 8, 12, 9, 0x0000B93D ),
  EW_GLYPH( 0x00E8, 0, -14, 9, 14, 10, 0x0000BA69 ),
  EW_GLYPH( 0x00E9, 0, -14, 9, 14, 10, 0x0000BC05 ),
  EW_GLYPH( 0x00EA, 0, -14, 9, 14, 10, 0x0000BDA1 ),
  EW_GLYPH( 0x00EB, 0, -13, 9, 13, 10, 0x0000BF64 ),
  EW_GLYPH( 0x00EC, 0, -14, 4, 14, 5, 0x0000C0E6 ),
  EW_GLYPH( 0x00ED, 1, -14, 4, 14, 5, 0x0000C157 ),
  EW_GLYPH( 0x00EE, -1, -14, 6, 14, 5, 0x0000C1C8 ),
  EW_GLYPH( 0x00EF, -1, -13, 6, 13, 5, 0x0000C276 ),
  EW_GLYPH( 0x00F0, 1, -12, 8, 12, 10, 0x0000C2EC ),
  EW_GLYPH( 0x00F1, 1, -13, 8, 13, 11, 0x0000C458 ),
  EW_GLYPH( 0x00F2, 0, -14, 9, 14, 10, 0x0000C564 ),
  EW_GLYPH( 0x00F3, 0, -14, 9, 14, 10, 0x0000C6D3 ),
  EW_GLYPH( 0x00F4, 0, -14, 9, 14, 10, 0x0000C842 ),
  EW_GLYPH( 0x00F5, 0, -13, 9, 13, 10, 0x0000C9D8 ),
  EW_GLYPH( 0x00F6, 0, -13, 9, 13, 10, 0x0000CB67 ),
  EW_GLYPH( 0x00F7, 1, -11, 12, 11, 14, 0x0000CCBC ),
  EW_GLYPH( 0x00F8, 0, -10, 9, 11, 10, 0x0000CDB8 ),
  EW_GLYPH( 0x00F9, 1, -14, 8, 14, 11, 0x0000CF27 ),
  EW_GLYPH( 0x00FA, 1, -14, 8, 14, 11, 0x0000D004 ),
  EW_GLYPH( 0x00FB, 1, -14, 8, 14, 11, 0x0000D0E1 ),
  EW_GLYPH( 0x00FC, 1, -13, 8, 13, 11, 0x0000D1E5 ),
  EW_GLYPH( 0x00FD, 1, -14, 8, 17, 10, 0x0000D2A9 ),
  EW_GLYPH( 0x00FE, 1, -13, 9, 16, 11, 0x0000D433 ),
  EW_GLYPH( 0x00FF, 1, -13, 8, 16, 10, 0x0000D581 ),

  EW_FONT_PIXEL( ResourcesFontVerdana20, 0x0000D6F2 )           /* ratio 69.04 % */
    0xEF7BDEF7, 0x7BDEF7BD, 0xBDEF7BDD, 0x017BDEF7, 0x00000000, 0x00000000, 0x00000000,
    0xE0000000, 0xBDEF7BDE, 0x5EEBDEF7, 0x26B08132, 0x9CBDDFBF, 0x8C319CE3, 0x4139A731,
    0xBF884CA6, 0xAA5503FC, 0x8DDD7D80, 0xEF7CEF7B, 0xEF75EEFC, 0x7BCFFBC9, 0x02ACAA2F,
    0x5037B5F6, 0xDEF70AA5, 0xF73CDFFC, 0xF79BF7BA, 0xEC5EF79D, 0x4AA06EEB, 0x0005C015,
    0xFFEE3BEA, 0x04F7F3D7, 0x77E7EB59, 0xF0EF7BDD, 0xA09ED300, 0x7BBAF9DF, 0xA7D77F31,
    0x2DFCF05F, 0xEF7B8CA0, 0xBB78BF75, 0x5AFF9C92, 0x7FF5FFBF, 0x7C000007, 0xFBE07CE7,
    0xDF7CFBC1, 0x0BD462F3, 0x57A14AA5, 0x4F524242, 0xDFA48083, 0x32954B00, 0xF9CEF963,
    0x7BEF9FA2, 0xF79FBF5E, 0xE3A7BEF9, 0x62B3E73B, 0x8816552A, 0xD00849B7, 0x9090914F,
    0x14AA51AB, 0x3EF035BC, 0xBCBCF7DF, 0xF812FCE7, 0x0BD5F7E6, 0x0C052A94, 0xE3780A19,
    0xCC0BE5FD, 0xBDD3759C, 0xE7FF5D8C, 0xEBC74106, 0xA1E9FF37, 0x90ED9F04, 0x4FE7F106,
    0xCF7F29BB, 0x5BF3DABB, 0x9BFD9EFB, 0xC673EAEF, 0xEA4C9398, 0xAF1BE2BE, 0x9473968E,
    0x98AD8FC7, 0x14801492, 0x3C56C94C, 0x451CE47E, 0x78DF1347, 0xE3BC5BDF, 0x1A9A3A0B,
    0x2879F933, 0x0909349B, 0x949A4908, 0xC6A3CFCD, 0x1DED1D4C, 0x3BC5C05F, 0x8F3DEF90,
    0x5F79DEE7, 0x79809DEF, 0xBDE77D5F, 0x4DF7BA8F, 0x002E0BE4, 0x00000000, 0xBDEF7B80,
    0xDEF7BDEE, 0xEF75EF7B, 0x000017BD, 0xAC000000, 0x39D3F3FB, 0xFB44F19E, 0xBDEF74AD,
    0xCE205EF7, 0x5C1F8A86, 0x9E26540F, 0xC1FB6078, 0x828A81CA, 0x072A0FBF, 0xFCFC1646,
    0xC8C289E1, 0x2FC36505, 0xFFEF101E, 0x5FE0DFFE, 0x5BFA9EE7, 0xDF8C37E3, 0xFCA15B98,
    0x099A44A7, 0xC8090048, 0x56E69129, 0x6FE57B28, 0xECB1BF18, 0x1FD4F73A, 0x1EB90BBE,
    0xF706FFB8, 0x0000005E, 0x00000000, 0xDEE5EF70, 0x9EFFEF5B, 0xE71BF15F, 0xEB4DF8DE,
    0xA7E7E21B, 0x06502421, 0x8EF03ED0, 0x7EB3D09A, 0xC1F9EBD0, 0xBF07D6B7, 0x7C541AFA,
    0x6F7BDEF7, 0xFFDCFBBD, 0xDE7BF1EF, 0x3D7C6F73, 0xE67E43F7, 0xFA82420B, 0x7F7B838F,
    0x77B89FF3, 0xBE302DC7, 0x2F908178, 0xA2EE6A18, 0xE9EFF44E, 0x03B9FB7B, 0xA302F73C,
    0x100E7901, 0xFDF007A7, 0x05CDE01E, 0xBF017CAC, 0x7B9C600F, 0x7BDEE5EF, 0x7B97BDEF,
    0xBDC00001, 0x717BDEF7, 0x0017BDEF, 0xC9EEF700, 0x277B77BD, 0xC303EB8C, 0xD4780400,
    0xF67461EF, 0xB53DCF78, 0xEE77EB13, 0x7BBFFF21, 0x2EC6E1EE, 0x7F02F998, 0x57E73BF9,
    0xD7B3BE1E, 0x790AC2AF, 0xA4618075, 0xA0F3F104, 0xC96F1AD4, 0xDF3D9FCE, 0xF71D9F7B,
    0xBDEF7BDE, 0x7F7BDEF7, 0x46075C0A, 0x0F9F03E5, 0x3784C562, 0x83F4C056, 0x73F09519,
    0xAE0B32A1, 0xEE77D40F, 0x7BF986F9, 0xE7FF3C42, 0x2B3DCFA7, 0x9A21587A, 0xBC562BF6,
    0xD9DFADF3, 0xCF46BFDF, 0xC766F2D3, 0xF1EEE62F, 0xC352C496, 0x771D1840, 0xFEBA2FC8,
    0xEC6F7FF3, 0xFEFFEF12, 0xCE7EC43B, 0x2FDFE77D, 0xAC77A87B, 0x02FC7852, 0xC4032CA4,
    0x512C5375, 0xC7CFB5BF, 0xFCE77EA3, 0x73781FD2, 0x9CB8ED42, 0x9FEFEE7B, 0x805EE5EE,
    0x702F717B, 0xEB00002F, 0x8E74FCFE, 0x7ED13C67, 0x8018012B, 0xFC60BBF1, 0xDDA8D9EE,
    0xBED43F77, 0xE7D857F7, 0x600006FE, 0x401BFB9F, 0x057F7BED, 0x1FBBEED4, 0xD9EEFC60,
    0xF7BBF180, 0xBDEF7BDE, 0xEF7BDEF7, 0x0BDEF7BD, 0xDEF7BDC0, 0x03BDEF7B, 0xC00DFDC0,
    0x8037F73E, 0x05DEDF67, 0x5DDEEFD4, 0xB3DDF8C0, 0x77E30001, 0xEEFD46CF, 0x6FB3C5DD,
    0xF73EC2EF, 0x0DFDC037, 0xDDCFBBC0, 0x3CE7B8CB, 0xAF10DFDD, 0xD0A58009, 0xAAF63F9D,
    0x00BF0C1D, 0x2F705EE0, 0xCFB58800, 0x9E057FFD, 0x9BDCFBBB, 0x57CF0FBF, 0x7BFB22BF,
    0x6FCBF13E, 0xEF77CFFE, 0xC6F53CF3, 0x79D779EF, 0x1D4BFC71, 0x0D4781AF, 0x242018F9,
    0x390C4002, 0xA3CF4824, 0xCB0B3E7E, 0x9ADF17FF, 0xFDC39FF3, 0x7C77CCC6, 0xFB3FF9EF,
    0x5D59BBDE, 0xED6002BF, 0x0D9EF7D1, 0x00FBDCF0, 0xAB200E1C, 0x9CF812AA, 0x3E6603E3,
    0xC4F04E4F, 0x1C0F13C3, 0x51839F1F, 0xD5FEF7FE, 0xF7BBE7E0, 0x198FCFDE, 0xCD313C0F,
    0xF98CC098, 0xFE7E03F7, 0xFF7BDEF7, 0x7EF7B81D, 0x052C07EB, 0xC3F68030, 0xC0E577BD,
    0x6FACF7BD, 0x01F9F882, 0xC0348121, 0xF7B9A378, 0xD917F89E, 0xA9DD9EFB, 0x3D3DF576,
    0x7F8DF9FE, 0xC5F5BF51, 0x0297402F, 0x2000090C, 0xE014A025, 0x9D00BF17, 0xC62FF1BF,
    0xF3F67A6F, 0xBEF773DE, 0x5BF3DEF7, 0xF3DEF701, 0xD9E201ED, 0xCBF1004E, 0x2014B017,
    0x6100000C, 0x101F9600, 0xF5105CBF, 0xBDEF7077, 0xEF70FFBF, 0xCBDEF7BD, 0x0BDEF7BD,
    0xBDC00000, 0xBDCBDEF7, 0x000BDEF7, 0xBDC00000, 0xEF7BDEF7, 0xCBDEF7BD, 0x0BDEF7BD,
    0xBDC00000, 0x7BDC5EF7, 0x000005EF, 0xF5800000, 0x56FCF73B, 0x9CEFFF18, 0x8DDFFF7B,
    0xF310FDBF, 0x02FC6F5F, 0x0C014AF8, 0x7BDC0009, 0xF7121DEF, 0xBC014A5E, 0xFC400BF1,
    0x62722EC7, 0xDDCFAFDC, 0x82F73EFF, 0x0000017B, 0xEF7B8000, 0xBDEF70BD, 0x00000017,
    0xEF700000, 0xCBDEF7BD, 0x000000BD, 0xC0000000, 0xBDCBDCBD, 0x002F72F7, 0x00000000,
    0xFF7B4080, 0x7BAF56F7, 0x827F9C61, 0x7109BBFC, 0xC7FC13FD, 0xFC6FC037, 0x1EB57C0A,
    0xD02662A0, 0x9CC0371D, 0x9AC07F9D, 0x9F7807E3, 0x3D5F00FA, 0x00002F7D, 0x00000000,
    0xB8000000, 0xEF7BDEF7, 0x797BDE0F, 0xC59E0B02, 0xCE3E7053, 0x9E332785, 0x2D6FAC07,
    0x3FFCFFE0, 0x7801CCA0, 0x006E801E, 0x0F7B8000, 0x8098CBDC, 0x2CCC03EF, 0xFC01D620,
    0x3EB2049E, 0x1A809DC0, 0x00FBF013, 0x8C260133, 0x0DF3DCEF, 0x6DDF6DCC, 0x4BE3D94F,
    0x5FCE8DF9, 0x5F8DE0BC, 0x052A5029, 0x14800908, 0x50296420, 0x782F17EA, 0xBE3D97E3,
    0x9A765F94, 0x7FDBBEDB, 0xDF9EF7BA, 0x7BE27B83, 0x0690BDA0, 0x883C3010, 0xBEB3DCD6,
    0x01FBBDC1, 0xDF180000, 0x981BE7B9, 0x9EDBBEDB, 0xF297C7B2, 0x78BF9D1B, 0x52BF1BC1,
    0x100A54A0, 0x40290012, 0x7940A518, 0x3782F17E, 0x4BE3D97E, 0x734E8DF9, 0xFCFFF7DB,
    0x6E77C626, 0x09A60078, 0xFFBDF3D0, 0x7B3DEF7B, 0x7CEF7B82, 0x2F3F1017, 0x07A40020,
    0xEE1A37C8, 0xE03DCFFD, 0x780599DE, 0xDFC00F47, 0xFCBE2009, 0xCAF5D500, 0x7ECF7FF7,
    0xF73CED4B, 0xF1BCFE74, 0xA4B7EA0E, 0x09BCAD04, 0xCFFE63BC, 0xBDC87DEF, 0xCEFCD6BB,
    0x9F6FAC60, 0xD7881719, 0xCF5480F8, 0xA275267F, 0x7BEDF3F7, 0xF7B8EEBB, 0xBDEF7BDE,
    0xB97BDEF7, 0x00005EF7, 0x00000000, 0x00000000, 0x17B80000, 0x000017B8, 0x00000000,
    0x80480000, 0x78F03C7C, 0x3AA2ECDE, 0xDF4FD8DF, 0xDF8ECFDB, 0xEFCE2009, 0xF198131F,
    0x5F01F19F, 0x2A0B334C, 0xF87F3F27, 0x056A31FB, 0xC4E06AB1, 0x2781C562, 0xC078BE3E,
    0x098C631C, 0x07CFBE7C, 0x0955AD64, 0xFE071138, 0x42EF3137, 0xE163FFDE, 0xBFA963FA,
    0xDFC2AA8D, 0x76643C7E, 0x8352860C, 0x33C591CA, 0x52DC36C2, 0x1E51465B, 0xB2C7EDB5,
    0x4B33B119, 0xE147F8C5, 0xB2219559, 0xFF3B03C6, 0x1B3F6785, 0x2BFC6D4A, 0x9428460A,
    0x83F77C18, 0x7CBF7EEF, 0x2FE4F906, 0x437B4D5E, 0xCCF1AACD, 0xF9DD9BC2, 0x00EA3382,
    0x7AA9C058, 0xCEECDE03, 0x633E6A1F, 0xD5E253D4, 0xE5F8DEBC, 0xBF93E493, 0xFDF436EF,
    0x3310663A, 0xBCBC673A, 0x19CEA6F1, 0xE3A17331, 0xA9E1A37D, 0x1D01EB39, 0x048302F1,
    0x00000000, 0xDEF7BDC0, 0xF7BDEF7B, 0x5DEF7BDE, 0x7AACF026, 0x03F2FE41, 0x1BE0138E,
    0x9E7AC03D, 0x1F1DEA09, 0xBE01D788, 0xD5BC12FC, 0xEF7D4C05, 0x7BDEF7BD, 0x005EE5EF,
    0x00000000, 0x7DDEE000, 0xF0517E02, 0xE05990B8, 0x367E0789, 0xA2A05C8C, 0x9187F3E0,
    0xFC072A05, 0x01E2A0FD, 0x056C072B, 0xBDEEFC4F, 0x00005EF7, 0x00000000, 0xB9E05EE0,
    0xE37F200F, 0xECFBC097, 0x5E7AC17C, 0x6F1859E7, 0x7077ECA7, 0xF1D6626A, 0xF79F81FA,
    0xBDEF7BDE, 0xB7DBDEF7, 0xF7D333F5, 0xEF7FEFB4, 0xDEF789BF, 0xC57EBD6F, 0xF7F78CB2,
    0xE7EE62BF, 0xBFCFCBDE, 0x32804312, 0xE9EFC7E5, 0x00BDCDD3, 0x30000000, 0x857F73BE,
    0xDF7F3DF7, 0xC6F21BE0, 0x0802940B, 0x1E502420, 0xC57CEA8A, 0x76AFDFFE, 0xDD9EFBD0,
    0xD3DF67B1, 0xA8AFC7A3, 0x0290295F, 0x60A500A4, 0x744AFE75, 0xBDEF9EC7, 0x0BDC03F9,
    0xD1000000, 0x897FFBFF, 0xFFEF7CFF, 0x457E3BCF, 0x052028F1, 0x80A50010, 0x8F8D3A37,
    0xF3FF5FF1, 0x9EFBD0BE, 0xBECF60DF, 0xF8F47FDB, 0xC7E8EC95, 0xF749E183, 0xBA457BDE,
    0x6F7BDEF7, 0xBF1E8079, 0xC5F9E219, 0xEF7BBF7E, 0x47B9F4D9, 0x8F1EF7AF, 0xBDCB8485,
    0x0002F72E, 0x40000000, 0xFBFEFFF4, 0xF7CFF8DC, 0xC77877FE, 0x051E28AF, 0xA00200A4,
    0x4E8DE00C, 0xFE7C63E3, 0x7EA15FA7, 0xE3D2FCF7, 0x5A2FE457, 0xF1DEF7BC, 0x0002F71F,
    0x77E40000, 0x9F7417CE, 0xB4BE69F7, 0x0000402C, 0xDC000000, 0x02F7BDCB, 0x805EE000,
    0x72F7B97B, 0x00000001, 0xFAD30400, 0xBDEF9EDF, 0x00000000, 0x213BBF00, 0xE44DF3F6,
    0xF20FFF3F, 0xCEC07FC6, 0xE7CAC035, 0xA7CDEF03, 0x0D589E41, 0xDF563FC6, 0x7000000B,
    0xF9CEFD6F, 0x7CE77EA2, 0x3F4F79C1, 0x9FA7BCF7, 0x7C534BE6, 0x20005A69, 0x00000000,
    0x00000000, 0x3BF37B80, 0xCFBA0BE7, 0x5A5F34FB, 0x00002016, 0xC4000000, 0x37FFBFFB,
    0x4F73AEC4, 0x877CE8ED, 0x429766F1, 0x026404A9, 0x754A14B2, 0xB378C3BE, 0xA7B9D763,
    0xDF9BDC76, 0xBF42BFB9, 0xC1BEBFE7, 0x0BC76437, 0x20080294, 0x8A1E5024, 0xFD978DFA,
    0x07FAEFBF, 0x37FFBFFD, 0xDE200000, 0xB9F7FDFF, 0xFEF7AFF1, 0x17477877, 0x1480A3C5,
    0x02940040, 0x3E34E8DE, 0xD3ED7FC6, 0xCE77E307, 0xE00000AF, 0xE5CEF8DE, 0x37CB9EF7,
    0x00000000, 0xEE77F300, 0x3BD67BFF, 0xBDF13DEE, 0x7ADF8C3A, 0xBFA49EFC, 0xF3FF7CF9,
    0xFCE7BC65, 0xD44D39EA, 0x886FD727, 0xF738BFD6, 0x2F74DF8E, 0x7B970000, 0x7BDCBDEF,
    0x0000002F, 0xF0596008, 0xFFDEEFAE, 0x002F70BD, 0x40000000, 0x3F259600, 0xDD3DE7DE,
    0xBBA83BEC, 0xADF0C53F, 0x5158ECD8, 0xAAE153C5, 0x7B13CB8A, 0xBF5583C4, 0x1F18DF05,
    0xFFC1CC8C, 0xDE4DBF26, 0x19E2997F, 0xA86DAA69, 0xCBB48F1C, 0x9FBF7F71, 0x7AA462A3,
    0x4239919E, 0xA399953D, 0xFEE3B166, 0x5373FDF8, 0x5153C551, 0x63907278, 0xEF8FDEF0,
    0x193E6FBE, 0x7E275E35, 0xD778CBAF, 0x0B16077C, 0xDE30B0D6, 0x6383BD6F, 0xB378E2FE,
    0x7F7C9F22, 0xFBFBA8B7, 0x19FF6CDB, 0x46B4C545, 0xAA7C98C4, 0xEF6318FC, 0xFEAAF81A,
    0x1098C6B0, 0x1F998163, 0x1D018F44, 0xEF7BDC1F, 0x7BDEF7BD, 0xF9384C77, 0xF3071BE2,
    0x99FB24E9, 0x9BC3E338, 0x7BEC6607, 0xBFF585EF, 0xBDCFDD17, 0x00041A98, 0xCDE41430,
    0x3B1FF717, 0x03FC7771, 0x281F8F46, 0x20000805, 0x5834F805, 0xBDEF73EF, 0xC0000000,
    0xF705FFBD, 0x4DA0DD3E, 0x65000040, 0x309BCE80, 0xE22FFC76, 0x37E2FB1F, 0x1029407A,
    0xD0484000, 0xBCFBDC3E, 0x059CFA0B, 0x4EB5CCF7, 0xEFE7862E, 0xFF3E98F3, 0x7FC560C7,
    0xF72F79AD, 0x25CC7EFE, 0x02E04C80, 0xDFF44000, 0x95EC6FDD, 0x7F59D98C, 0x26F2DEF7,
    0x412904A4, 0xEB3A1379, 0x7B1BDEEF, 0xBC4B18A6, 0x0037677F, 0xDCEFC600, 0xDDFD47FF,
    0x86F1D07B, 0x002431F1, 0xF72F7000, 0xDEE5EE5E, 0xF940948B, 0x413DD581, 0xEF7BDF47,
    0x9E501EBD, 0x9EFE626F, 0xFDDFEDE7, 0x5998FBF5, 0xBF86272A, 0x30AFE501, 0x533C619F,
    0xF77DBFBD, 0x7BEA7DEF, 0x77CF7CF0, 0xFDFB9E0B, 0x5F8E85E2, 0xF958B9BC, 0xCCDE3586,
    0xBC742C77, 0x53D4346F, 0xF1F814F5, 0xE70F7B83, 0xDCBDEE5E, 0x72F7B97B, 0xCBDEE5EF,
    0xF70017BD, 0xDCBDC002, 0xFBEA000B, 0xF5BFBBDF, 0x8EDEF71B, 0x6FD49BD7, 0xDF8BF028,
    0xAD6562EE, 0xDF8FFBF9, 0xF3A77EF8, 0xC3196094, 0x3EC9D422, 0xC6FC6FBF, 0xE55737FF,
    0xF8EF7AA2, 0x8AFC6181, 0xF7D1BCFC, 0xAF75BF5E, 0xF7A2017B, 0x3C03BBBD, 0xCF7B9EFB,
    0xBE9E0FDD, 0xFB75C92B, 0x7C737D11, 0xDBCEEEE7, 0xFE397EF1, 0xE43BDF73, 0xE3A3D6F7,
    0xA9E3F1A6, 0xC8031E91, 0xF48C0001, 0x7A8E4018, 0xFC69B8DC, 0xB2FDEA78, 0x3BDF6BFE,
    0xDF46F7E4, 0x7773BF1C, 0xF4F0EDE7, 0xDBAE495D, 0xCF7D9E0F, 0x07EEE7BD, 0x2F9EFFDF,
    0xCF9FB7B8, 0x7EB2A697, 0xE3D7CBFF, 0xD2274A5E, 0xFF63B8B0, 0x8CD17803, 0xF58FBC5D,
    0x73DF7F9F, 0xF3EFEF7F, 0xC0067F8B, 0x2FCFBFD7, 0xE7FE69FE, 0xC65CF7DF, 0xDEE7DE2E,
    0xF7BDEF7B, 0xBDEF7BDE, 0x00005EF7, 0xEE000000, 0x7A22F7BD, 0xC03BBBDF, 0xF7B9EFB3,
    0xE9E0FDDC, 0xB75C92BB, 0xEF37D11F, 0xF237E7BD, 0xE25FBC76, 0xEFC8EBFE, 0x830C07AD,
    0x528246A7, 0xEFEE00E4, 0x2C2460F9, 0x0F51C82B, 0xA78FCAF4, 0x57A12FDE, 0xD1BDF9BD,
    0xEFA5EF37, 0xFA7876EF, 0xEDD724AE, 0xE7BECF07, 0xC3F773DE, 0x7BDEF7BD, 0xB3D7BDEF,
    0x7CF1FFEF, 0x79EFADCF, 0x210EF6B5, 0x68C2148C, 0xF7CFBDAD, 0xC07BE7DC, 0x00000005,
    0xEF700000, 0xF7BDD7BD, 0xBDEF7BDE, 0x02F7BDEE, 0xB8000000, 0xDEEBDEF7, 0xBFFBEF7B,
    0xEF71CBE7, 0xF4BF79EF, 0xDF229428, 0x1EC6E368, 0xD4ECFFEB, 0xEFBDEEB1, 0x8D5F9EFF,
    0x7DF5FF7B, 0xFAEEE289, 0xA1F57F71, 0x1AA69BD4, 0xE9F3F6F7, 0xEE9F39DB, 0xDC2F73E7,
    0x0000000B, 0x87400000, 0x273EFF86, 0x3CCFFCF0, 0xF3C00017, 0x3BDEF73B, 0x1F970ABF,
    0xF8090120, 0xD0056B00, 0x00000007, 0x00000000, 0x48F70BDC, 0x31C7FCE3, 0x13BB97FE,
    0x000002F7, 0xEBDCBDC0, 0xE3FFDFF9, 0x7CFB9EF9, 0x9CF9F1CF, 0xE00F4A47, 0x7C73D291,
    0x9EF9E73E, 0xE34F7CFB, 0xF6A5E785, 0xFF9F3EE0, 0x8FF92FFC, 0xFEF7EF9F, 0xF1FF2200,
    0xBBFAFDF3, 0xFF3FE7CF, 0x7B52F3D3, 0xDF05F720, 0x601FFB8F, 0x40BDCBD4, 0x4F5004AF,
    0x73EFD003, 0x6CC6602F, 0xFF5FBF00, 0xB3E45600, 0xF6F1BDC0, 0xA9FA017B, 0x5C8B97DC,
    0xC5CBDEED, 0xF720035B, 0xDC0FDF05, 0x5EA300FF, 0x2BD02F70, 0x069EA001, 0x77C6FD00,
    0x8CC04EEE, 0x0E3D9C65, 0x35E3F7E0, 0x84C5600C, 0x78DEE061, 0xE834741B, 0xBE7DE0A7,
    0x5D0D5C82, 0x0D6F02FF, 0xBDEFB958, 0xE0BBB9DF, 0xFFDC61FB, 0xC5EA30F8, 0xAF41E11B,
    0xA3F3BB84, 0xE777069E, 0xF751BF47, 0x96332862, 0xDF947B46, 0x9E43FBCF, 0xB315DEAF,
    0xDCEF859E, 0x7BDB78DF, 0xB929FA01, 0x9AB9172F, 0x6F172F7B, 0x0BDC000D, 0x7B82F700,
    0x20CF8801, 0xBF36B3F6, 0x409946EC, 0xF186F4C0, 0xDEE73F75, 0x401B7D01, 0x7C01333F,
    0xFBF0034F, 0xB9E00000, 0x1C3801F7, 0x25555640, 0x07C739F0, 0x9C9E7CCC, 0x278789E0,
    0x3E3E381E, 0xEFFCA307, 0xCFC1ABFD, 0x9FBDEF77, 0x781E331F, 0x81319A62, 0x07EFF319,
    0xBE81FCFC, 0x69F3900D, 0x003E7E80, 0x00000FDF, 0x003EF73C, 0xAAC80387, 0xE73E04AA,
    0xCF9980F8, 0xF13C1393, 0xC703C4F0, 0x9460E7C7, 0x357FBDFF, 0xBDEEF9F8, 0xC663F3F7,
    0x334C4F03, 0xFE633026, 0x3F9F80FD, 0x8805BDD4, 0x8037CD77, 0xFE77ECDF, 0xEFC7EF80,
    0x73C00003, 0x387003EF, 0x4AAAAC80, 0x0F8E73E0, 0x393CF998, 0x4F0F13C1, 0x7C7C703C,
    0xDFF9460E, 0x9F8357FB, 0x3F7BDEEF, 0xF03C663F, 0x026334C4, 0x0FDFE633, 0xFEA3F9F8,
    0x83FCCDE7, 0xEFB1EEF7, 0xDF99FE0B, 0x000017F9, 0xC00FBDCF, 0xAAB200E1, 0x39CF812A,
    0xF3E6603E, 0x3C4F04E4, 0xF1C0F13C, 0xE51839F1, 0x0D5FEF7F, 0xEF7BBE7E, 0xF198FCFD,
    0x8CD313C0, 0x7F98CC09, 0x8FE7E03F, 0x0017B97B, 0x17B97B80, 0xBDCF0000, 0x00E1C00F,
    0x812AAAB2, 0x603E39CF, 0x04E4F3E6, 0xF13C3C4F, 0x39F1F1C0, 0xEF7FE518, 0xBE7E0D5F,
    0xFCFDEF7B, 0x13C0F198, 0xCC098CD3, 0xE03F7F98, 0x4E7D0FE7, 0x7EFD7A03, 0x79E981AB,
    0x9600004C, 0xB780B1E7, 0x901AAFBE, 0xC6B10064, 0xF8CC0158, 0x17C098BE, 0x2A07C66B,
    0x70595857, 0xF20E7C7C, 0x9EDDEFB1, 0x7BDEF3E4, 0xC663EBEF, 0x13D31984, 0x1CF1580B,
    0x9039F01F, 0xEF7BDEF7, 0xF85EF7BD, 0x7BDEE5F4, 0x131985EF, 0x00AC6600, 0x0007CF80,
    0xBDC06A35, 0x51CBDEF7, 0xBDEE5EF7, 0x71515EF7, 0x6600BDEF, 0xF9F0004C, 0x4AC9E000,
    0xE00E3800, 0x25EF7BDE, 0x3BB3DF7B, 0xA7BEAED5, 0xF1BF3FC7, 0xBEB7EA2F, 0x52E805F8,
    0x00012180, 0x029404A4, 0xA017E2FC, 0xC5FE37F3, 0x7ECF4DF8, 0xD8F77BDE, 0x74BFFBE4,
    0x67006182, 0x1B7D0B8F, 0x7C1333F4, 0x0FBF034F, 0xBDEF7B80, 0xBDEE5EF7, 0x00005EF7,
    0xF7BDEE00, 0xF7BDEE5E, 0x0000005E, 0xF7BDEE00, 0x90DBE85E, 0xE7E869F3, 0x000FDF03,
    0xEF7BDEF7, 0xEF7BDCBD, 0x000000BD, 0xBDEF7BDC, 0xBDEF7BDC, 0x00000000, 0xBDEF7BDC,
    0x7885BDD4, 0xDF837CD7, 0xF8FE77EC, 0x003EFC7E, 0xEF7BDEF7, 0xEF7BDCBD, 0x000000BD,
    0xBDEF7BDC, 0xBDEF7BDC, 0x00000000, 0xBDEF7BDC, 0x005EEBDC, 0x005EEBDC, 0xEF7BDEF7,
    0xEF7BDCBD, 0x000000BD, 0xBDEF7BDC, 0xBDEF7BDC, 0x00000000, 0xBDEF7BDC, 0x99FA36FA,
    0xF869EF89, 0xEF7B807D, 0xEE5EF7BD, 0x00000005, 0xEE000000, 0x6DF45EE5, 0x3F4D3E72,
    0xC01FBE1F, 0x7BDEF7BD, 0x0002F72F, 0x00000000, 0xAF72F700, 0xBBC4B7BA, 0xD9BF1BE6,
    0x3F7DFCEF, 0xEF701F7E, 0xCBDEF7BD, 0x000000BD, 0xC0000000, 0x5EEBDCBD, 0x75EE02F7,
    0xBDEF702F, 0xBDCBDEF7, 0x00000000, 0xBDC00000, 0xF7BDCBDC, 0xE00ADF9E, 0x3DBE7BDE,
    0x276CF100, 0x2F97E200, 0xE5EEA580, 0x2F71845E, 0xC20002F7, 0x00FCB000, 0x880B97E2,
    0xDEE03BFA, 0x41FF7F7B, 0xF99BCFFD, 0xEC7BBDE7, 0xFCCFF2FB, 0xB800BFCE, 0x8CBDC0F7,
    0xC03EF809, 0x1D6202CC, 0x2049EFC0, 0x09DC03EB, 0xBF0131A8, 0x6013300F, 0xD00DBE82,
    0xEF804CCF, 0x0FBF0069, 0xCEF8C000, 0xDCC0DF3D, 0x94F6DDF6, 0xDF94BE3D, 0x0BC5FCE8,
    0x0295F8DE, 0x908052A5, 0x42014800, 0x7EA50296, 0x7E3782F1, 0xF94BE3D9, 0xEDB9A765,
    0xD027FDBB, 0x9F3901B7, 0x01F3F406, 0x00003F7C, 0xF9EE77C6, 0xEFB6E606, 0xF1ECA7B6,
    0xE746FCA5, 0xC6F05E2F, 0x952814AF, 0x40048402, 0x14B2100A, 0x178BF528, 0x1ECBF1BC,
    0x3B2FCA5F, 0xEDDF6DCD, 0x5BDD413F, 0xBE6BBC40, 0xDFB37E01, 0x8FDF03F9, 0x180007DF,
    0x1BE7B9DF, 0xDBBEDB98, 0x97C7B29E, 0xBF9D1BF2, 0xBF1BC178, 0x0A54A052, 0x29001210,
    0xA052C840, 0xF05E2FD4, 0x7C7B2FC6, 0x34ECBF29, 0xFFB77DB7, 0x9BCFFD44, 0xEEF787F9,
    0xFF0BEFB1, 0x0BFCEFCC, 0x73BE3000, 0xB73037CF, 0x653DB77D, 0x37E52F8F, 0x82F17F3A,
    0x40A57E37, 0x242014A9, 0x90805200, 0x5FA940A5, 0x5F8DE0BC, 0x7E52F8F6, 0xFB6E69D9,
    0xF709FF6E, 0xC00017BA, 0x0005EEBD, 0xE7B9DF18, 0xBEDB981B, 0xC7B29EDB, 0x9D1BF297,
    0x1BC178BF, 0x54A052BF, 0x0012100A, 0x52C84029, 0x5E2FD4A0, 0x7B2FC6F0, 0xECBF297C,
    0xB77DB734, 0x017E34FF, 0xFEB91BF1, 0xC657FC41, 0xEFE23FDF, 0xFFEFE21F, 0x19C40FF7,
    0x19C404E3, 0xEFE204E3, 0xF10FF7FF, 0xFBF88FF7, 0x107FAE47, 0xE60095FF, 0x9EE77C62,
    0xB996F9EF, 0x2BE3BBED, 0xA94BE3D9, 0xC5E2FE66, 0xA57E37DA, 0x951EBD88, 0x090B5F82,
    0xD0A40635, 0xACF2C84D, 0x8BF5282F, 0xF8DE27BB, 0xBF292CE5, 0xB8BEA9D1, 0xF7D3DB77,
    0x9EFFDF3D, 0x0DBE806F, 0xE02667E8, 0xF7E01A7B, 0x817B8001, 0x0000017B, 0x00000000,
    0xC8048000, 0xE78F03C7, 0xF3AA2ECD, 0xBDF4FD8D, 0xFA00ECFD, 0x69F39036, 0xF00F9FA0,
    0xBDC000FD, 0x0000BDC0, 0x00000000, 0x02400000, 0xC781E3E4, 0xD51766F3, 0xFA7EC6F9,
    0xA0767EDE, 0xEF102DEE, 0x6FC06F9A, 0xF07F3BF6, 0x007DF8FD, 0x2F702F70, 0x00000000,
    0x00000000, 0x78F90090, 0xD9BCF1E0, 0xB1BE7545, 0x9FB7BE9F, 0xBDD7B81D, 0xDD7B8000,
    0x02F7000B, 0x000002F7, 0x00000000, 0x90090000, 0xCF1E078F, 0xE7545D9B, 0x7BE9FB1B,
    0xF401D9FB, 0xD3E7206D, 0xE01F3F40, 0xEF8001FB, 0x3AFDF436, 0x3A331066, 0xF1BCBC67,
    0x3119CEA6, 0x7DE3A173, 0x39A9E1A3, 0xF11D01EB, 0x00048302, 0xC0000000, 0xBDC000BD,
    0x7EB7B87F, 0x841F5D01, 0x3F103082, 0x77CCF71F, 0x009EEF72, 0xF73BE300, 0xF77F18BF,
    0xE8E9FD7E, 0xC24794B0, 0x82F1D010, 0xFB8156BB, 0x3A827FAB, 0x03C302F9, 0xE40A1800,
    0x7BB9C68D, 0x836FA4EE, 0xEF82667E, 0x01F7E069, 0xFBDFFBE0, 0xF7BDE26F, 0xB15FAF5B,
    0xFDFDE32C, 0xB9FB98AF, 0xAFF3F2F7, 0x4CA010C4, 0xFA7BF1F9, 0x36FA0374, 0xFA1A7CE4,
    0x03F7C0F9, 0xF7BFF7C0, 0xEF7BC4DF, 0x62BF5EB7, 0xFBFBC659, 0x73F7315F, 0x5FE7E5EF,
    0x99402189, 0xF4F7E3F2, 0x6F7506E9, 0xDF35DE21, 0x9DFB37E0, 0xBF1FBE3F, 0xBFF7C00F,
    0x7BC4DFF7, 0xBF5EB7EF, 0xFBC65962, 0xF7315FFB, 0xE7E5EF73, 0x4021895F, 0xF7E3F299,
    0xFD46E9F4, 0xF7F99BCF, 0x7DF63DDE, 0xF3BF33FD, 0xFFDF002F, 0xEF137FDE, 0xFD7ADFBD,
    0xEF19658A, 0xDCC57FEF, 0x9F97BDCF, 0x0086257F, 0xDF8FCA65, 0xEE1BA7D3, 0xEE002F75,
    0xDF002F75, 0x137FDEFF, 0x7ADFBDEF, 0x19658AFD, 0xC57FEFEF, 0x97BDCFDC, 0x86257F9F,
    0x8FCA6500, 0x1BA7D3DF, 0x7A2F39F4, 0x65F37EFD, 0x800B1E7A, 0x7A4C79E9, 0xD1AB7EFD,
    0xDF0034E7, 0x137FDEFF, 0x7ADFBDEF, 0x19658AFD, 0xC57FEFEF, 0x97BDCFDC, 0x86257F9F,
    0x8FCA6500, 0x1BA7D3DF, 0x5F9EFFDF, 0xDF9EFB59, 0xFCF7BC43, 0xEF77FB7F, 0x15FA6F8D,
    0xE21DC733, 0xFEF9E7E7, 0xEF7DA6E7, 0x717D723D, 0x7BDEE5EE, 0x6FAFBDEF, 0x81009484,
    0x94CA03E9, 0x42B58C6F, 0xF66FBF3C, 0xFBB7F779, 0x9B3DEF77, 0x8EECF7DE, 0x1E9EFB3D,
    0xFD457E3D, 0x2014814A, 0xAB052805, 0x3BA257F3, 0xE67BECF6, 0xA2BEF44F, 0xF6701860,
    0x40DBE8B8, 0xEF81333F, 0x03EFC069, 0xF3DF7A00, 0x77D9EC1B, 0xBF1E8FFB, 0x78FD1D92,
    0xDEE93C30, 0xF748AF7B, 0x2DEF7BDE, 0x37E3D00F, 0xD8BF3C43, 0x3DEF77EF, 0x906DF41B,
    0xCFD069F3, 0x003F7C07, 0xBF3DF7A0, 0xB77D9EC1, 0x2BF1E8FF, 0x078FD1D9, 0xBDEE93C3,
    0xEF748AF7, 0xF2DEF7BD, 0x337E3D00, 0xFD8BF3C4, 0xB3DEF77E, 0xC416F751, 0xF81BE6BB,
    0x0FE77ECD, 0x07DF8FDF, 0xF9EFBD00, 0xBBECF60D, 0x5F8F47FD, 0x3C7E8EC9, 0xEF749E18,
    0x7BA457BD, 0x96F7BDEF, 0x9BF1E807, 0xEC5F9E21, 0x9EF7BBF7, 0x05EEBDCD, 0x17BAF700,
    0xE7BEF400, 0xEFB3D837, 0x7E3D1FF6, 0xF1FA3B25, 0xBDD27860, 0xEE915EF7, 0x5BDEF7BD,
    0x6FC7A01E, 0xB17E7886, 0x7BDEEFDF, 0xCFD6DF76, 0xFCD3DF4C, 0x002F703E, 0x7D000000,
    0xFDD3E73B, 0x701FBE7C, 0x0000002F, 0x4BB9D600, 0xF1BD73BC, 0x7DFCEECB, 0xDC01FD9B,
    0x0000000B, 0xBDC00000, 0xCBDC0BDC, 0x02F700BD, 0x00000000, 0xFFD9E000, 0xBF9E5FA7,
    0xBDF8BC6F, 0x357C2D6F, 0xFF3D379F, 0x9EFC47BB, 0xD57D9E6F, 0x32CA61D1, 0x8F184040,
    0x8E8EA941, 0x7F1DF378, 0xEA1BCEF7, 0xBFCCDE7F, 0xEFB1EEF7, 0x9DF99FEB, 0x9BDC017F,
    0xD05F39DF, 0xF9A7DE7D, 0x0100B2D2, 0x00000000, 0xFA06DF40, 0x4F7C0999, 0x001F7E03,
    0xFF7FF788, 0xE75D886F, 0xF9D1DA9E, 0x2ECDE30E, 0xC8095285, 0x94296404, 0xF1877CEA,
    0x73AEC766, 0xBE80ED4F, 0x0D3E720D, 0xEF80F9FA, 0xFBC40007, 0xC437FFBF, 0xED4F73AE,
    0xF1877CE8, 0xA9429766, 0xB2026404, 0xBE754A14, 0x63B378C3, 0x76A7B9D7, 0x882DEEA0,
    0xF037CD77, 0x1FCEFD9B, 0x0FBF1FBE, 0xEFFEF100, 0xEBB10DFF, 0x3A3B53DC, 0xD9BC61DF,
    0x012A50A5, 0x852C8099, 0x30EF9D52, 0x75D8ECDE, 0xEA1DA9EE, 0x3FCCDE7F, 0xDF63DDEF,
    0x77E67F97, 0x788005FE, 0x86FFF7FF, 0xA9EE75D8, 0x30EF9D1D, 0x2852ECDE, 0x404C8095,
    0xCEA94296, 0x766F1877, 0xD4F73AEC, 0x2F75EE0E, 0xBDD7B800, 0xFFEF1000, 0xBB10DFFE,
    0xA3B53DCE, 0x9BC61DF3, 0x12A50A5D, 0x52C80990, 0x0EF9D528, 0x5D8ECDE3, 0x01DA9EE7,
    0x000005EE, 0x000005EE, 0x7BDEF700, 0xDEF7BDEF, 0xF7BDEF7B, 0xBDEF7BDE, 0xE0000000,
    0x8000005E, 0xDFFDE2D1, 0xEC6FDBFF, 0x539DF73A, 0x3BFC3BE7, 0xA58A94BB, 0xA4C9B712,
    0x28ACB22F, 0x6FFB3AA5, 0x7CE6D9BC, 0xBF1DA9EF, 0xFFF7FF7E, 0xE836FA06, 0x9EF82667,
    0x001F7E06, 0x00BDC2F7, 0x00000000, 0xFC965801, 0x74F79F78, 0x721B7D03, 0x7CFD0D3E,
    0xE001FBE0, 0x0017B85E, 0x20000000, 0x1F92CB00, 0x6E9EF3EF, 0xF10B7BA8, 0xBF06F9AE,
    0xF1FCEFD9, 0x007DF8FD, 0x017B85EE, 0x00000000, 0xF92CB002, 0xE9EF3EF1, 0x0BDD7B86,
    0x0BDD7B80, 0x17B85EE0, 0x00000000, 0x92CB0020, 0x9EF3EF1F, 0x86DF406E, 0x3F434F9C,
    0x007EF81F, 0xF7516EFC, 0xFED9B7F7, 0x698A8A33, 0xF931888D, 0xC631F954, 0x55F035DE,
    0x318D61FD, 0x3302C621, 0x031E883F, 0x17B83E3A, 0x00000000, 0x57F73BF2, 0xD7FCF7E8,
    0xEC86F837, 0x00528178, 0xCA048401, 0xF1BF5143, 0x5DF7FFB2, 0xF7FFA0FF, 0x000006FF,
    0x00BDD7B8, 0x00BDD7B8, 0xFBA8B77E, 0xFF6CDBFB, 0xB4C54519, 0x7C98C446, 0x6318FCAA,
    0xAAF81AEF, 0x98C6B0FE, 0x99816310, 0x018F441F, 0x00001F1D
EW_END_OF_FONT_RES( ResourcesFontVerdana20 )

/* Table with links to derived variants of the font resource : 'Resources::FontVerdana20' */
EW_RES_WITHOUT_VARIANTS( ResourcesFontVerdana20 )

/* Embedded Wizard */
