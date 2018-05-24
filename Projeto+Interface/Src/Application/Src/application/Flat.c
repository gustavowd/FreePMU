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
#include "Flat.h"

/* Color constant representing the main theme color of the widget kit. If you want 
   to change this color within your project, just create a variant of this color 
   constant and select a new color value that meets your design ideas. */
const XColor FlatColorOfTheme = { 0x7F, 0xBF, 0x00, 0xFF };

/* Color constant for all touchable items. If you want to change this color within 
   your project, just create a variant of this color constant and select a new color 
   value that meets your design ideas. */
const XColor FlatColorOfTouch = { 0xFF, 0xFF, 0xFF, 0xFF };

/* Color constant for all background items. If you want to change this color within 
   your project, just create a variant of this color constant and select a new color 
   value that meets your design ideas. */
const XColor FlatColorOfBody = { 0x50, 0x53, 0x5F, 0xFF };

/* Color constant for all disabled items. If you want to change this color within 
   your project, just create a variant of this color constant and select a new color 
   value that meets your design ideas. */
const XColor FlatColorOfDisabled = { 0x6B, 0x6F, 0x80, 0xFF };

/* Bitmap resources used for the different widgets. If you want to change the bitmaps 
   within your project, just create a variant of these bitmap resources and define 
   the attributes of the bitmap resources according your design ideas. */
EW_DEFINE_BITMAP_RES( FlatFlatFrame )
  EW_BITMAP_FRAMES( FlatFlatFrame, Default, EW_DRIVER_VARIANT_ALPHA8, 30, 30, 0 )
    EW_BITMAP_FRAME( 1, 1, 28, 28, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( FlatFlatFrame, Default )                     /* ratio 8.00 % */
    0xFB247F00, 0xC1A0B047, 0x260F0883, 0xA12E71FB, 0x1B0687C3, 0xB1489C42, 0x188BC5A2,
    0xC8DC6A33, 0x8FC7A3B1, 0x1C8A4320, 0xC9A4B249, 0xAA532893, 0xA5B2C95C, 0x0D3097CB,
    0x0E492392, 0xE7904489, 0x00040490, 0x00000000

  EW_BITMAPS_TABLE( FlatFlatFrame )
    EW_BITMAP( FlatFlatFrame, Default )
EW_END_OF_BITMAP_RES( FlatFlatFrame )

/* Table with links to derived variants of the bitmap resource : 'Flat::FlatFrame' */
EW_RES_WITHOUT_VARIANTS( FlatFlatFrame )

/* Color constant for all items the should appear like the background. If you want 
   to change this color within your project, just create a variant of this color 
   constant and select a new color value that meets your design ideas. */
const XColor FlatColorOfBackground = { 0x00, 0x00, 0x00, 0xFF };

/* Embedded Wizard */
