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

#include "ewlocale.h"
#include "_ApplicationAplic.h"
#include "_ApplicationClasse.h"
#include "_ApplicationConfigScreen.h"
#include "_ApplicationFFT.h"
#include "_ApplicationFase.h"
#include "_ApplicationFasores.h"
#include "_ApplicationFreq.h"
#include "_ApplicationMag.h"
#include "_ApplicationModIconButton.h"
#include "_ApplicationModifiedButton.h"
#include "_ApplicationPDC.h"
#include "_ApplicationPDCButtonState.h"
#include "_ApplicationPDCMessage.h"
#include "_ApplicationPDCStatus.h"
#include "_ApplicationPlotterGraph.h"
#include "_ApplicationPlotterTripleGraph.h"
#include "_ChartsCoordList.h"
#include "_ChartsGraph.h"
#include "_CoreOutline.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSystemEvent.h"
#include "_CoreSystemEventHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_CoreWipeTouchHandler.h"
#include "_EffectsInt32Effect.h"
#include "_EffectsPointEffect.h"
#include "_GraphicsPath.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsStrokePath.h"
#include "_ViewsText.h"
#include "_ViewsWarpImage.h"
#include "Application.h"
#include "Core.h"
#include "Effects.h"
#include "Flat.h"
#include "OldResources.h"
#include "Resources.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x0000041A, /* ratio 47.24 % */
  0xB8001700, 0x00000452, 0x00C20023, 0x0DE00398, 0xCA003900, 0xC008342C, 0x0782C0C1,
  0x1004461F, 0x001D4007, 0x01B800EA, 0x9A400630, 0x5C1B1484, 0xE504D834, 0x01269119,
  0x8008F1D0, 0x088346CC, 0xC8546656, 0x03C1A250, 0xA422113A, 0xCE83D142, 0xDA211B29,
  0x21D36989, 0x37351044, 0xB2822542, 0x70A844E9, 0x08544250, 0xAA000A15, 0xD0162843,
  0x50228309, 0x00630682, 0xACA001C0, 0x733A0341, 0xB3AB35B4, 0x6EB90005, 0x68C59C01,
  0x9C5CC6D7, 0x95A80175, 0x4E4017F1, 0xAAEC00B4, 0x6F7851AD, 0xF384005A, 0x37EC45C2,
  0x00C4E3AF, 0x8C9E1466, 0x9D65B351, 0xD0470B8B, 0xCBE152D9, 0x7E672791, 0xEA1129B4,
  0x00560016, 0x20C8A174, 0x009ECA28, 0x2580035C, 0x83606C5B, 0xA0B31163, 0x63311028,
  0x42CBC3B6, 0x0F400245, 0x01959D71, 0x800DCF24, 0xC58373B9, 0x3C25FA31, 0x8A73797D,
  0x65960D9C, 0x0D2753F8, 0xEBC98C00, 0xFD573B8D, 0x356A8C61, 0xFEF8A7A7, 0x14F1DB31,
  0x2886D81F, 0x90C7E3B1, 0x92749523, 0x85D03A42, 0xADD77798, 0x50662077, 0x4E809419,
  0x02875208, 0xD002107D, 0xF82944C6, 0x0F7A9886, 0x5A96A622, 0x5146C1CA, 0x3641F087,
  0x39B15417, 0x27665A08, 0x87A2A88A, 0x9D359573, 0xE6901341, 0xD1A94C12, 0x0055DAC4,
  0x865B184C, 0x6155BE05, 0x1028008A, 0xF22D60D8, 0x21621E56, 0x8900092A, 0x9D46458F,
  0x86211693, 0x311B4F10, 0xBC84D504, 0x8ADE0901, 0xA524E992, 0x979D8890, 0x0D737D57,
  0x4B631847, 0x7A232462, 0x1D293214, 0x69C03700, 0xDE569190, 0x52001526, 0x46278450,
  0x1AD44E57, 0x69DD4800, 0x1283961B, 0x8868D065, 0x85D12521, 0xD124B550, 0xB6990C48,
  0x21CFA511, 0x248E0496, 0x4410A4C5, 0x10145114, 0x00000000
};

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault1[] =
{
  0x0000015E, /* ratio 62.86 % */
  0xB8002D00, 0x80000452, 0xD0007382, 0x00061001, 0x006F0019, 0x50C87080, 0x10218022,
  0x5001B801, 0x001E0006, 0x30EA32E3, 0xC0C2E008, 0x24010782, 0x61F0D85C, 0x2D2E89C4,
  0x4008E14E, 0x003B000E, 0x688C50D2, 0x0841A473, 0xA1120D27, 0xC64C7099, 0x1A68688D,
  0x60D319D5, 0xA000A082, 0xD0D9B454, 0x500541A6, 0xA3A80085, 0x8DC46BB0, 0x34122706,
  0xD7634498, 0x3671368E, 0x66119364, 0x010889C5, 0x16FB5D18, 0x369A1580, 0x0B9CEA17,
  0x0EC1AD80, 0xA4D48D50, 0x002B6719, 0xD6976675, 0x6271D87D, 0xE95CAE90, 0xF153D4EA,
  0x068CC81C, 0x01AD401D, 0x16C58720, 0x88006D16, 0x00091161, 0x402506CA, 0x34D13D25,
  0x462889E5, 0xBB318003, 0x2A36C4F6, 0xC920A401, 0x0000203B, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 480, 270 }};
static const XPoint _Const0001 = { 0, 0 };
static const XRect _Const0002 = {{ 0, 0 }, { 480, 280 }};
static const XColor _Const0003 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0004 = {{ 0, 240 }, { 480, 272 }};
static const XRect _Const0005 = {{ 0, 240 }, { 480, 270 }};
static const XStringRes _Const0006 = { _StringsDefault0, 0x0003 };
static const XRect _Const0007 = {{ 0, 0 }, { 480, 272 }};
static const XRect _Const0008 = {{ 0, 0 }, { 480, 242 }};
static const XRect _Const0009 = {{ 480, 0 }, { 960, 242 }};
static const XRect _Const000A = {{ 960, 0 }, { 1440, 242 }};
static const XRect _Const000B = {{ 1440, 0 }, { 1920, 242 }};
static const XRect _Const000C = {{ 1920, 0 }, { 2400, 242 }};
static const XRect _Const000D = {{ 2400, 0 }, { 2880, 242 }};
static const XStringRes _Const000E = { _StringsDefault0, 0x000E };
static const XStringRes _Const000F = { _StringsDefault0, 0x001C };
static const XStringRes _Const0010 = { _StringsDefault0, 0x0029 };
static const XStringRes _Const0011 = { _StringsDefault0, 0x0031 };
static const XStringRes _Const0012 = { _StringsDefault0, 0x0038 };
static const XPoint _Const0013 = { 135, 120 };
static const XRect _Const0014 = {{ 25, 10 }, { 245, 230 }};
static const XColor _Const0015 = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const0016 = {{ 230, 110 }, { 280, 130 }};
static const XStringRes _Const0017 = { _StringsDefault0, 0x0056 };
static const XRect _Const0018 = {{ -12, 110 }, { 38, 130 }};
static const XStringRes _Const0019 = { _StringsDefault0, 0x005B };
static const XRect _Const001A = {{ 110, -5 }, { 160, 15 }};
static const XStringRes _Const001B = { _StringsDefault0, 0x0062 };
static const XRect _Const001C = {{ 110, 225 }, { 160, 245 }};
static const XStringRes _Const001D = { _StringsDefault0, 0x0068 };
static const XRect _Const001E = {{ 192, 213 }, { 210, 225 }};
static const XStringRes _Const001F = { _StringsDefault0, 0x006F };
static const XRect _Const0020 = {{ 60, 213 }, { 78, 225 }};
static const XStringRes _Const0021 = { _StringsDefault0, 0x0076 };
static const XRect _Const0022 = {{ 19, 171 }, { 37, 183 }};
static const XStringRes _Const0023 = { _StringsDefault0, 0x007E };
static const XRect _Const0024 = {{ 62, 13 }, { 80, 25 }};
static const XStringRes _Const0025 = { _StringsDefault0, 0x0086 };
static const XRect _Const0026 = {{ 192, 13 }, { 204, 25 }};
static const XStringRes _Const0027 = { _StringsDefault0, 0x008D };
static const XRect _Const0028 = {{ 234, 171 }, { 252, 183 }};
static const XStringRes _Const0029 = { _StringsDefault0, 0x0093 };
static const XRect _Const002A = {{ 236, 58 }, { 248, 70 }};
static const XStringRes _Const002B = { _StringsDefault0, 0x009A };
static const XRect _Const002C = {{ 18, 58 }, { 36, 70 }};
static const XStringRes _Const002D = { _StringsDefault0, 0x00A0 };
static const XRect _Const002E = {{ 282, 16 }, { 386, 32 }};
static const XStringRes _Const002F = { _StringsDefault0, 0x00A7 };
static const XRect _Const0030 = {{ 401, 16 }, { 465, 32 }};
static const XStringRes _Const0031 = { _StringsDefault0, 0x00B8 };
static const XRect _Const0032 = {{ 376, 95 }, { 385, 113 }};
static const XRect _Const0033 = {{ 455, 95 }, { 464, 113 }};
static const XRect _Const0034 = {{ 376, 70 }, { 385, 88 }};
static const XRect _Const0035 = {{ 455, 70 }, { 464, 88 }};
static const XRect _Const0036 = {{ 376, 45 }, { 385, 63 }};
static const XRect _Const0037 = {{ 455, 45 }, { 464, 63 }};
static const XPoint _Const0038 = { 475, 37 };
static const XPoint _Const0039 = { 272, 37 };
static const XPoint _Const003A = { 115, 160 };
static const XPoint _Const003B = { 240, 160 };
static const XPoint _Const003C = { 240, 152 };
static const XPoint _Const003D = { 115, 152 };
static const XPoint _Const003E = { 0, 4 };
static const XPoint _Const003F = { 115, 148 };
static const XPoint _Const0040 = { 240, 148 };
static const XPoint _Const0041 = { 240, 140 };
static const XPoint _Const0042 = { 115, 140 };
static const XPoint _Const0043 = { 135, 123 };
static const XPoint _Const0044 = { 245, 123 };
static const XPoint _Const0045 = { 245, 115 };
static const XPoint _Const0046 = { 135, 115 };
static const XStringRes _Const0047 = { _StringsDefault0, 0x00C4 };
static const XStringRes _Const0048 = { _StringsDefault0, 0x00C9 };
static const XRect _Const0049 = {{ 400, 180 }, { 480, 200 }};
static const XStringRes _Const004A = { _StringsDefault0, 0x00CE };
static const XColor _Const004B = { 0xFF, 0x00, 0x00, 0xFF };
static const XRect _Const004C = {{ 400, 120 }, { 480, 140 }};
static const XStringRes _Const004D = { _StringsDefault0, 0x00D9 };
static const XColor _Const004E = { 0x00, 0xFF, 0x00, 0xFF };
static const XRect _Const004F = {{ 400, 60 }, { 480, 80 }};
static const XStringRes _Const0050 = { _StringsDefault0, 0x00E4 };
static const XRect _Const0051 = {{ 370, 220 }, { 430, 240 }};
static const XStringRes _Const0052 = { _StringsDefault0, 0x00EF };
static const XRect _Const0053 = {{ 275, 220 }, { 335, 240 }};
static const XStringRes _Const0054 = { _StringsDefault0, 0x00F5 };
static const XRect _Const0055 = {{ 180, 220 }, { 240, 240 }};
static const XStringRes _Const0056 = { _StringsDefault0, 0x00FC };
static const XRect _Const0057 = {{ 85, 220 }, { 145, 240 }};
static const XStringRes _Const0058 = { _StringsDefault0, 0x0103 };
static const XRect _Const0059 = {{ 2, 220 }, { 62, 240 }};
static const XStringRes _Const005A = { _StringsDefault0, 0x010B };
static const XRect _Const005B = {{ 20, 0 }, { 140, 40 }};
static const XStringRes _Const005C = { _StringsDefault0, 0x0113 };
static const XRect _Const005D = {{ 140, 0 }, { 270, 40 }};
static const XRect _Const005E = {{ 430, 10 }, { 470, 50 }};
static const XRect _Const005F = {{ 20, 40 }, { 400, 220 }};
static const XStringRes _Const0060 = { _StringsDefault0, 0x0122 };
static const XStringRes _Const0061 = { _StringsDefault0, 0x0129 };
static const XStringRes _Const0062 = { _StringsDefault0, 0x0130 };
static const XStringRes _Const0063 = { _StringsDefault0, 0x0139 };
static const XStringRes _Const0064 = { _StringsDefault0, 0x0141 };
static const XRect _Const0065 = {{ 410, 180 }, { 480, 200 }};
static const XStringRes _Const0066 = { _StringsDefault0, 0x0146 };
static const XRect _Const0067 = {{ 410, 120 }, { 480, 140 }};
static const XStringRes _Const0068 = { _StringsDefault0, 0x014F };
static const XRect _Const0069 = {{ 410, 60 }, { 480, 80 }};
static const XStringRes _Const006A = { _StringsDefault0, 0x0158 };
static const XRect _Const006B = {{ 4, 220 }, { 64, 240 }};
static const XRect _Const006C = {{ 350, 0 }, { 420, 40 }};
static const XStringRes _Const006D = { _StringsDefault0, 0x0161 };
static const XRect _Const006E = {{ 270, 0 }, { 340, 40 }};
static const XRect _Const006F = {{ 190, 0 }, { 260, 40 }};
static const XRect _Const0070 = {{ 20, 0 }, { 188, 40 }};
static const XStringRes _Const0071 = { _StringsDefault0, 0x016A };
static const XStringRes _Const0072 = { _StringsDefault0, 0x017D };
static const XStringRes _Const0073 = { _StringsDefault0, 0x0183 };
static const XStringRes _Const0074 = { _StringsDefault0, 0x018D };
static const XStringRes _Const0075 = { _StringsDefault0, 0x0194 };
static const XRect _Const0076 = {{ 0, 220 }, { 60, 240 }};
static const XStringRes _Const0077 = { _StringsDefault0, 0x019D };
static const XPoint _Const0078 = { 80, 220 };
static const XPoint _Const0079 = { 80, 20 };
static const XColor _Const007A = { 0x77, 0x77, 0x77, 0xFF };
static const XPoint _Const007B = { 140, 220 };
static const XPoint _Const007C = { 140, 20 };
static const XPoint _Const007D = { 200, 220 };
static const XPoint _Const007E = { 200, 20 };
static const XPoint _Const007F = { 260, 220 };
static const XPoint _Const0080 = { 260, 20 };
static const XPoint _Const0081 = { 320, 170 };
static const XPoint _Const0082 = { 20, 170 };
static const XPoint _Const0083 = { 320, 120 };
static const XPoint _Const0084 = { 20, 120 };
static const XPoint _Const0085 = { 320, 70 };
static const XPoint _Const0086 = { 20, 70 };
static const XRect _Const0087 = {{ 60, 220 }, { 100, 240 }};
static const XStringRes _Const0088 = { _StringsDefault0, 0x01AB };
static const XRect _Const0089 = {{ 120, 220 }, { 160, 240 }};
static const XStringRes _Const008A = { _StringsDefault0, 0x01B1 };
static const XRect _Const008B = {{ 180, 220 }, { 220, 240 }};
static const XRect _Const008C = {{ 240, 220 }, { 280, 240 }};
static const XStringRes _Const008D = { _StringsDefault0, 0x01B7 };
static const XRect _Const008E = {{ 330, 160 }, { 370, 180 }};
static const XStringRes _Const008F = { _StringsDefault0, 0x01BD };
static const XRect _Const0090 = {{ 330, 110 }, { 370, 130 }};
static const XStringRes _Const0091 = { _StringsDefault0, 0x01C5 };
static const XRect _Const0092 = {{ 330, 60 }, { 370, 80 }};
static const XStringRes _Const0093 = { _StringsDefault0, 0x01CC };
static const XRect _Const0094 = {{ 20, 20 }, { 320, 220 }};
static const XPoint _Const0095 = { 0, 200 };
static const XPoint _Const0096 = { 6, 200 };
static const XColor _Const0097 = { 0x5B, 0x56, 0x27, 0x00 };
static const XColor _Const0098 = { 0x0C, 0x0E, 0x6E, 0x00 };
static const XRect _Const0099 = {{ 370, 40 }, { 470, 85 }};
static const XStringRes _Const009A = { _StringsDefault0, 0x01D4 };
static const XRect _Const009B = {{ 370, 100 }, { 470, 145 }};
static const XStringRes _Const009C = { _StringsDefault0, 0x01DE };
static const XRect _Const009D = {{ 370, 160 }, { 470, 205 }};
static const XStringRes _Const009E = { _StringsDefault0, 0x01E8 };
static const XRect _Const009F = {{ 0, 0 }, { 480, 240 }};
static const XRect _Const00A0 = {{ 10, 30 }, { 470, 80 }};
static const XStringRes _Const00A1 = { _StringsDefault0, 0x01F2 };
static const XRect _Const00A2 = {{ 100, 180 }, { 220, 210 }};
static const XStringRes _Const00A3 = { _StringsDefault0, 0x0203 };
static const XRect _Const00A4 = {{ 0, 0 }, { 260, 30 }};
static const XStringRes _Const00A5 = { _StringsDefault1, 0x0003 };
static const XRect _Const00A6 = {{ 0, 80 }, { 220, 110 }};
static const XStringRes _Const00A7 = { _StringsDefault1, 0x0019 };
static const XRect _Const00A8 = {{ 10, 110 }, { 470, 160 }};
static const XStringRes _Const00A9 = { _StringsDefault1, 0x0030 };
static const XRect _Const00AA = {{ 260, 180 }, { 380, 210 }};
static const XStringRes _Const00AB = { _StringsDefault1, 0x0040 };
static const XRect _Const00AC = {{ 0, 0 }, { 120, 30 }};
static const XPoint _Const00AD = { 0, 30 };
static const XPoint _Const00AE = { 120, 30 };
static const XPoint _Const00AF = { 120, 0 };
static const XStringRes _Const00B0 = { _StringsDefault1, 0x0049 };
static const XRect _Const00B1 = {{ 0, 0 }, { 30, 30 }};
static const XPoint _Const00B2 = { 30, 30 };
static const XPoint _Const00B3 = { 30, 0 };
static const XRect _Const00B4 = {{ 0, 0 }, { 380, 180 }};
static const XColor _Const00B5 = { 0x00, 0x00, 0x00, 0x80 };
static const XRect _Const00B6 = {{ 10, 10 }, { 350, 50 }};
static const XStringRes _Const00B7 = { _StringsDefault1, 0x0053 };
static const XRect _Const00B8 = {{ 10, 90 }, { 370, 130 }};
static const XStringRes _Const00B9 = { _StringsDefault1, 0x0073 };
static const XRect _Const00BA = {{ 60, 45 }, { 100, 85 }};
static const XRect _Const00BB = {{ 280, 45 }, { 320, 85 }};
static const XRect _Const00BC = {{ 60, 125 }, { 100, 165 }};
static const XRect _Const00BD = {{ 280, 125 }, { 320, 165 }};
static const XRect _Const00BE = {{ 90, 45 }, { 290, 85 }};
static const XStringRes _Const00BF = { _StringsDefault1, 0x0090 };
static const XRect _Const00C0 = {{ 90, 125 }, { 290, 165 }};
static const XStringRes _Const00C1 = { _StringsDefault1, 0x009E };
static const XRect _Const00C2 = {{ 340, 0 }, { 380, 40 }};
static const XPoint _Const00C3 = { 285, 180 };
static const XPoint _Const00C4 = { 285, 0 };
static const XColor _Const00C5 = { 0xFF, 0xFF, 0xFF, 0x40 };
static const XPoint _Const00C6 = { 190, 180 };
static const XPoint _Const00C7 = { 190, 0 };
static const XPoint _Const00C8 = { 95, 180 };
static const XPoint _Const00C9 = { 95, 0 };
static const XPoint _Const00CA = { 380, 30 };
static const XPoint _Const00CB = { 380, 60 };
static const XPoint _Const00CC = { 0, 60 };
static const XPoint _Const00CD = { 380, 90 };
static const XPoint _Const00CE = { 0, 90 };
static const XPoint _Const00CF = { 380, 120 };
static const XPoint _Const00D0 = { 0, 120 };
static const XPoint _Const00D1 = { 380, 150 };
static const XPoint _Const00D2 = { 0, 150 };

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

/* Initializer for the class 'Application::Aplic' */
void ApplicationAplic__Init( ApplicationAplic _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  EffectsPointEffect__Init( &_this->Anima, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle, &_this->_XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Title, &_this->_XObject, 0 );
  CoreWipeTouchHandler__Init( &_this->WipeTouchHandler, &_this->_XObject, 0 );
  CoreOutline__Init( &_this->Janela, &_this->_XObject, 0 );
  ApplicationFasores__Init( &_this->TFasores, &_this->_XObject, 0 );
  ApplicationFreq__Init( &_this->TFreq, &_this->_XObject, 0 );
  ApplicationMag__Init( &_this->TMag, &_this->_XObject, 0 );
  ApplicationFase__Init( &_this->TFase, &_this->_XObject, 0 );
  ApplicationFFT__Init( &_this->TFFT, &_this->_XObject, 0 );
  ApplicationPDC__Init( &_this->TVNC, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationAplic );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  _this->nrTela = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->Anima, EffectsTimingFastIn_EaseOut 
  );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->Anima, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Anima, 200 );
  _this->Anima.Value2 = _Const0001;
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0002 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0003 );
  CoreRectView__OnSetBounds( &_this->Rectangle1, _Const0004 );
  ViewsRectangle_OnSetColor( &_this->Rectangle1, FlatColorOfBody );
  CoreRectView__OnSetBounds( &_this->Title, _Const0005 );
  ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0006 ));
  CoreRectView__OnSetBounds( &_this->WipeTouchHandler, _Const0007 );
  CoreRectView__OnSetBounds( &_this->Janela, _Const0008 );
  CoreRectView__OnSetBounds( &_this->TFasores, _Const0008 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->TFasores, 1 );
  CoreRectView__OnSetBounds( &_this->TFreq, _Const0009 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->TFreq, 1 );
  CoreRectView__OnSetBounds( &_this->TMag, _Const000A );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->TMag, 1 );
  CoreRectView__OnSetBounds( &_this->TFase, _Const000B );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->TFase, 1 );
  CoreRectView__OnSetBounds( &_this->TFFT, _Const000C );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->TFFT, 1 );
  CoreRectView__OnSetBounds( &_this->TVNC, _Const000D );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->TVNC, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Title ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->WipeTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Janela ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TFasores ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TFreq ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TMag ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TFase ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TFFT ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->TVNC ), 0 );
  _this->Anima.Outlet = EwNewRef( &_this->Janela, CoreOutline_OnGetScrollOffset, 
  CoreOutline_OnSetScrollOffset );
  ViewsText_OnSetFont( &_this->Title, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  _this->WipeTouchHandler.OnBottomRight = EwNewSlot( _this, ApplicationAplic_onWipeRight 
  );
  _this->WipeTouchHandler.OnTopRight = EwNewSlot( _this, ApplicationAplic_onWipeRight 
  );
  _this->WipeTouchHandler.OnBottomLeft = EwNewSlot( _this, ApplicationAplic_onWipeLeft 
  );
  _this->WipeTouchHandler.OnTopLeft = EwNewSlot( _this, ApplicationAplic_onWipeLeft 
  );
  _this->WipeTouchHandler.OnRight = EwNewSlot( _this, ApplicationAplic_onWipeRight 
  );
  _this->WipeTouchHandler.OnLeft = EwNewSlot( _this, ApplicationAplic_onWipeLeft 
  );

  /* Call the user defined constructor */
  ApplicationAplic_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Aplic' */
void ApplicationAplic__ReInit( ApplicationAplic _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  EffectsPointEffect__ReInit( &_this->Anima );
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsRectangle__ReInit( &_this->Rectangle1 );
  ViewsText__ReInit( &_this->Title );
  CoreWipeTouchHandler__ReInit( &_this->WipeTouchHandler );
  CoreOutline__ReInit( &_this->Janela );
  ApplicationFasores__ReInit( &_this->TFasores );
  ApplicationFreq__ReInit( &_this->TFreq );
  ApplicationMag__ReInit( &_this->TMag );
  ApplicationFase__ReInit( &_this->TFase );
  ApplicationFFT__ReInit( &_this->TFFT );
  ApplicationPDC__ReInit( &_this->TVNC );
}

/* Finalizer method for the class 'Application::Aplic' */
void ApplicationAplic__Done( ApplicationAplic _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationAplic );

  /* Finalize all embedded objects */
  EffectsPointEffect__Done( &_this->Anima );
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsRectangle__Done( &_this->Rectangle1 );
  ViewsText__Done( &_this->Title );
  CoreWipeTouchHandler__Done( &_this->WipeTouchHandler );
  CoreOutline__Done( &_this->Janela );
  ApplicationFasores__Done( &_this->TFasores );
  ApplicationFreq__Done( &_this->TFreq );
  ApplicationMag__Done( &_this->TMag );
  ApplicationFase__Done( &_this->TFase );
  ApplicationFFT__Done( &_this->TFFT );
  ApplicationPDC__Done( &_this->TVNC );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Aplic' */
void ApplicationAplic__Mark( ApplicationAplic _this )
{
  EwMarkObject( &_this->Anima );
  EwMarkObject( &_this->Rectangle );
  EwMarkObject( &_this->Rectangle1 );
  EwMarkObject( &_this->Title );
  EwMarkObject( &_this->WipeTouchHandler );
  EwMarkObject( &_this->Janela );
  EwMarkObject( &_this->TFasores );
  EwMarkObject( &_this->TFreq );
  EwMarkObject( &_this->TMag );
  EwMarkObject( &_this->TFase );
  EwMarkObject( &_this->TFFT );
  EwMarkObject( &_this->TVNC );

  /* Give the super class a chance to mark its objects and references */
  CoreRoot__Mark( &_this->_Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationAplic_Init( ApplicationAplic _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* This method is called when the user has performed a wipe left gesture. It starts 
   a transition to the next screen. */
void ApplicationAplic_onWipeLeft( ApplicationAplic _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Anima.Super1.Enabled )
    return;

  if ( _this->TVNC.Super2.Bounds.Point1.X < EwGetRectW( _this->Super3.Bounds ))
    return;

  _this->Anima.Value1 = _this->Janela.ScrollOffset;
  _this->Anima.Value2 = EwMovePointNeg( _this->Janela.ScrollOffset, EwNewPoint( 
  EwGetRectW( _this->Super3.Bounds ), 0 ));
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Anima, 1 );
  _this->nrTela = _this->nrTela + 1;

  if ( _this->nrTela > 6 )
  {
    _this->nrTela = 6;
  }

  switch ( _this->nrTela )
  {
    case 1 :
      ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0006 ));
    break;

    case 2 :
      ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const000E ));
    break;

    case 3 :
      ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const000F ));
    break;

    case 4 :
      ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0010 ));
    break;

    case 5 :
      ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0011 ));
    break;

    case 6 :
      ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0012 ));
    break;

    default : 
      ;
  }
}

/* This method is called when the user has performed a wipe right gesture. It starts 
   a transition to the preceding screen. */
void ApplicationAplic_onWipeRight( ApplicationAplic _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->Anima.Super1.Enabled )
    return;

  if ( _this->TFasores.Super2.Bounds.Point1.X >= 0 )
    return;

  _this->Anima.Value1 = _this->Janela.ScrollOffset;
  _this->Anima.Value2 = EwMovePointPos( _this->Janela.ScrollOffset, EwNewPoint( 
  EwGetRectW( _this->Super3.Bounds ), 0 ));
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Anima, 1 );
  _this->nrTela = _this->nrTela - 1;

  if ( _this->nrTela < 0 )
  {
    _this->nrTela = 0;
  }

  switch ( _this->nrTela )
  {
    case 1 :
      ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0006 ));
    break;

    case 2 :
      ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const000E ));
    break;

    case 3 :
      ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const000F ));
    break;

    case 4 :
      ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0010 ));
    break;

    case 5 :
      ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0011 ));
    break;

    case 6 :
      ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const0012 ));
    break;

    default : 
      ;
  }
}

/* Variants derived from the class : 'Application::Aplic' */
EW_DEFINE_CLASS_VARIANTS( ApplicationAplic )
EW_END_OF_CLASS_VARIANTS( ApplicationAplic )

/* Virtual Method Table (VMT) for the class : 'Application::Aplic' */
EW_DEFINE_CLASS( ApplicationAplic, CoreRoot, "Application::Aplic" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetOpacity,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateLayout,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreRoot_Restack,
  CoreRoot_Add,
EW_END_OF_CLASS( ApplicationAplic )

/* Bitmap resource : 'Application::flecha' */
EW_DEFINE_BITMAP_RES( Applicationflecha )
  EW_BITMAP_FRAMES( Applicationflecha, Default, EW_DRIVER_VARIANT_ALPHA8, 110, 8, 0 )
    EW_BITMAP_FRAME( 0, 3, 107, 2, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( Applicationflecha, Default )                 /* ratio 15.91 % */
    0x1C080100, 0xC1A0B048, 0x2A130883, 0x21B0C85C, 0x32D90242, 0xB1487081, 0x188BC5A2,
    0x77FA4A11, 0x039898AE, 0x1C890D04, 0xC9A4B249, 0xAA532893, 0x65B2C95C, 0xFEF84DCA,
    0xEE97E3FD, 0x32810B54, 0xC9DCEA73, 0x9FCFA7B3, 0x1D0A8340, 0xBBE7344A, 0x2A8A7568,
    0xA9B4CA5D, 0xEB479953, 0xB54A9A38, 0x58ABD5AA, 0xCADD6AB3, 0xAD57ABB5, 0x54CE62A1,
    0xD9A33367, 0x422B68B3, 0x6411E8E2, 0xE370B7DA, 0x30789442, 0x00000020, 0x00000000

  EW_BITMAPS_TABLE( Applicationflecha )
    EW_BITMAP( Applicationflecha, Default )
EW_END_OF_BITMAP_RES( Applicationflecha )

/* Table with links to derived variants of the bitmap resource : 'Application::flecha' */
EW_RES_WITHOUT_VARIANTS( Applicationflecha )

/* Bitmap resource : 'Application::grid' */
EW_DEFINE_BITMAP_RES( Applicationgrid )
  EW_BITMAP_FRAMES( Applicationgrid, Default, EW_DRIVER_VARIANT_ALPHA8, 220, 220, 0 )
    EW_BITMAP_FRAME( 209, 99, 1, 22, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( Applicationgrid, Default )                   /* ratio 12.73 % */
    0x1C080100, 0xC1A0B048, 0x2A130883, 0x21B0C85C, 0x6E2106C1, 0x07C32938, 0xC459A8D2,
    0xC76B91AC, 0x6BB963B1, 0x929568C6, 0x940CE7D4, 0x041E231C, 0xA5B2C870, 0x633097CB,
    0xB3299CCA, 0x8B300DC2, 0xF7A35D6A, 0x7ACF67AF, 0xF32DB0E5, 0x28D52B25, 0xA148F276,
    0x994BD58A, 0x7CF371B5, 0x2DA7BCF6, 0x3A322417, 0xCADCD030, 0xAFD7ABB5, 0x58D81D31,
    0x3EDA8A43, 0x7586E49F, 0x0805B3DA, 0x0C0E0D8B, 0xCDB64418, 0x1A068160, 0x82C0F856,
    0x70301347, 0xBBF67AFD, 0x8E8E0A86, 0x2B136008, 0x2138CC5E, 0x72791E03, 0x2F29EBC1,
    0x39322599, 0xB9601432, 0x87009BAC, 0xF8D82E03, 0xBBD8A912, 0xF97EF49E, 0xB1A10209,
    0x59B0D7EB, 0x6A92E87A, 0xA8724F5D, 0x2070D0D2, 0x9867F3B3, 0x118C600C, 0x3C27ADF5,
    0xC4446458, 0x71BCCE5E, 0x04C43506, 0x42B33AF7, 0x5BDF56EE, 0x6300A007, 0x654F5F0B,
    0x1F343C73, 0x04661E4F, 0xFDF4AF2A, 0x0B2A8763, 0xBDD8B007, 0xCA02905E, 0xB87F3FDC,
    0xCF2854B8, 0x1E417FBF, 0x0FF3C49C, 0xC128A03C, 0x81F1629B, 0x9810C0A5, 0x290F56D8,
    0xDFE00C44, 0x604DCB84, 0xC9F73386, 0x8D620582, 0x035AE5D1, 0xCF92AC50, 0xA1C0D63F,
    0x26288515, 0x932482B6, 0x0807736D, 0x80E00D5E, 0x00FC3007, 0xD86B1785, 0xE62107F1,
    0x1FC853BC, 0x45F1B077, 0x00C44114, 0x780403C2, 0xD31B81A5, 0x270F63FC, 0x2528A433,
    0xD2A0384D, 0x584E2E13, 0x3204D327, 0x27C7A14C, 0x951378C2, 0x29966454, 0x14E03D55,
    0x571F8A33, 0x4CDFB0D0, 0x4AE11402, 0x3104B24F, 0xC12C9DE5, 0xAA4F4A00, 0x025320E0,
    0xC8E1642A, 0xE4F8F630, 0xC0CB394F, 0x671F0952, 0x0E847154, 0x41E0942D, 0x4080E134,
    0x18390B02, 0x7A194541, 0x324AE248, 0x53E3F0E3, 0xE24CC83E, 0xC80B0B45, 0xFF9EC2F4,
    0x9E0372B0, 0x82E41EB0, 0xE2753D29, 0xD4094C02, 0xEA2CC720, 0x2ACDA4F8, 0x0341587E,
    0xA42C0706, 0x190B370C, 0x5E0C4170, 0xA88D629A, 0x0B93B8FF, 0x00303A1E, 0x889309D3,
    0xB10D8B1A, 0x25C1FAC6, 0xC2A2613D, 0x917C1F4B, 0xA13D3A0A, 0x421E0B13, 0x4B52B068,
    0x81743A09, 0x42AC730F, 0xBCEC4F4E, 0x2F090662, 0x88C8F08D, 0xADD09CA3, 0x31EC1294,
    0xB8282859, 0xC31BC244, 0x1B8B6650, 0x53302431, 0x06FCDF33, 0xA02C0193, 0xDF3B8AF1,
    0x4B6E31D9, 0xCFF25421, 0x305C853D, 0xDC5D84F0, 0x2D0D0D5B, 0x4F5D0071, 0x445248E0,
    0x931D5C6B, 0x3533C58D, 0xDA2283F0, 0x1C8CB4F4, 0xC2C4B1CA, 0x21A5EB31, 0x8DE3C9E1,
    0xDA3FCB90, 0x968DC370, 0x8A70E10B, 0xB25CEE7A, 0x855F66C3, 0x0257EFC0, 0xBA08D0D4,
    0xA762C0FF, 0x4394CE43, 0xB4C53FCD, 0x0172F480, 0x2253C1A8, 0xCFF1140C, 0x303D0B20,
    0xD13D3246, 0x6BCD0552, 0x1340C40B, 0x0D0604AB, 0xD4266F1B, 0x1C5A3FC6, 0xFC3F07D0,
    0xDF7581DC, 0x1D10CD8B, 0x540C3531, 0x20233E8B, 0xBD2001D4, 0x09881386, 0xC1F42390,
    0x13FCDB1D, 0x1B5B22CF, 0xC83BC164, 0x2E02B6FC, 0x43E334FF, 0x600960E8, 0xC8F83FC7,
    0x2940B471, 0x418AC3F4, 0x22324C2B, 0x40205230, 0x240542BB, 0x9D7DCB61, 0x25905944,
    0x9050E8FF, 0x43FCF219, 0xD3C7B148, 0xFF2EC244, 0x41BA02D8, 0x3633FC8D, 0xD2742900,
    0x643C2B53, 0xA20D10EF, 0x0C4A84F4, 0xCFF0BD03, 0x607D0728, 0xAB6A3225, 0xA715D30F,
    0x049091BD, 0x000678EB, 0x9E891030, 0xFA7E0278, 0x260A4963, 0x0010AB51, 0xE8F617A0,
    0x80C44240, 0x218C7B8F, 0xC0212C81, 0x8E01FE22, 0x0C842C1F, 0x39C4F0FF, 0x3F0B91FE,
    0x2E25D061, 0x323C5398, 0x2C3C8FF1, 0xF8D50664, 0x70142607, 0x80708542, 0x8568FF17,
    0x052216C9, 0x096EC47F, 0x10498C35, 0x3113D184, 0x7B01E430, 0x82F7C652, 0xDC1E1048,
    0x090C0D8B, 0x08469581, 0x44C62609, 0xC728FF0F, 0x31F16A3F, 0x1F417C85, 0x158248EE,
    0x7F05F205, 0x0B08039C, 0xDE1B0021, 0xF8580176, 0x04630603, 0x517E3DD9, 0x63F43E01,
    0x9E30771F, 0x3A506642, 0x00513037, 0x31C7F886, 0x1910A460, 0x941FE314, 0xEA07C813,
    0xB2388BE1, 0x58FE1544, 0xF75E4081, 0x60F4680F, 0x9A581621, 0xC098F425, 0x6C22A402,
    0x1AC852A9, 0xDD877302, 0x880FC001, 0x8E432473, 0x144A0FF0, 0xD2230D44, 0xF00A42C3,
    0x4B5A1209, 0xC5900D7F, 0x35012C3F, 0x14804C83, 0xF38648FF, 0x6900F208, 0x0B9541CC,
    0x36358301, 0xE0149060, 0x49EF1650, 0x29020048, 0xAED1C28C, 0xC3A30D02, 0x8DC08642,
    0x7B02207F, 0x3221A106, 0x834E2217, 0xFF0F2008, 0x3E130740, 0x7C690FF8, 0x781B78E0,
    0xB0C23FC6, 0x23FC3E10, 0x27184A1D, 0x8DE07A63, 0x49222C7F, 0x3F028909, 0xB5C4B1BA,
    0xFF1B00A1, 0x224282A8, 0xCC7F8AC0, 0x64FA3C42, 0xA4AC054C, 0xA4280D0B, 0xC718F708,
    0x82764F30, 0x09A3F871, 0x3481410A, 0x8887C1FE, 0xDE70E6C2, 0x7C425960, 0x54770F50,
    0xD01A64EE, 0xA0A83F06, 0xC3A01B90, 0x6930601F, 0x8F60A26C, 0x21410C79, 0x39C7B046,
    0x0A30304A, 0x0AA3E33C, 0xD43E82E1, 0xC69D4681, 0x51C50666, 0x607C4283, 0x14406F0F,
    0x0E880D4F, 0x8732134D, 0x6043507F, 0x070E5D4E, 0x85373190, 0xD31F8110, 0x0A8A66B0,
    0x2A798B30, 0x9D0E10A4, 0xD39B5840, 0xE2555A00, 0x0281075D, 0xA2994322, 0x9B527C01,
    0x3FC48109, 0xB9B8F144, 0xA180A732, 0xC241E800, 0x524E3DD0, 0xB8FF10E8, 0x48364284,
    0xA796C33F, 0x08509E80, 0x89A1FE21, 0x1FE17914, 0x4125E8AF, 0x530A2836, 0x8239B65A,
    0x0D6284ED, 0x5038BED2, 0x48FC0748, 0x220D3946, 0xECE05158, 0x2DA9E3B4, 0x00420B5E,
    0x3FB3E5D8, 0x3A072019, 0xB8108824, 0xFEB71696, 0x1164AC11, 0xC06D0122, 0x21CDA0A3,
    0x71FE2F80, 0x55748449, 0x90A5C814, 0x10910B60, 0x19C3DC17, 0x230E6D7C, 0x844501FE,
    0x858B616C, 0x467F2ECD, 0x24368FF1, 0xE8FF0B24, 0x00A87904, 0x40D084DA, 0x90E0D61F,
    0x0093FD7A, 0x0883FC63, 0x3FC4E109, 0x101CD0CA, 0x6A1C43BC, 0xCC09C81D, 0xEEA20EA1,
    0xF0194297, 0x80643BC6, 0x234C0610, 0x8D83F91F, 0x8FC17C00, 0x02041AEA, 0xECC7F0D4,
    0x17A28C1E, 0x161C43D4, 0xEC0C083D, 0x36C70CF1, 0xF0FF0EE6, 0xF4E6421F, 0xE94B1205,
    0x45F8FF09, 0x05C2077A, 0x05E6C27F, 0x4245C0FC, 0x1B5259EC, 0xFF0D494B, 0x4A4222A8,
    0x360F0FF1, 0xC0C80026, 0xF20F0387, 0xF919EE83, 0x0293ED4E, 0x8EC02842, 0x3153806C,
    0x1C87F869, 0x6F011210, 0x579983A0, 0xB6041296, 0x1A688EB1, 0xF0FF0BA4, 0x30406303,
    0x7698640F, 0x423AB420, 0x0364EF9A, 0x16A42612, 0x62A490FD, 0x8446F178, 0x7B9BC1AC,
    0x5A1D13C6, 0xD8111088, 0xDE3B1923, 0x811579CA, 0x83EC1710, 0xF44DA219, 0x8BA00284,
    0x20D88C7F, 0x58318875, 0x3B91F01E, 0xC8008003, 0x34ADC7E0, 0xCC10A77D, 0x25E11B23,
    0x91E03288, 0xE1ECAEE2, 0x6DF8DE1F, 0x076D0E41, 0x0CCAC356, 0x41C400FF, 0x248D6080,
    0xEF03657B, 0x653F46A0, 0x74816AB1, 0xB8C71E60, 0x4453AFAD, 0x5A087E0B, 0x55A02520,
    0x8F819C39, 0x85857184, 0x2080702F, 0x0B08C544, 0xFF156408, 0xF1B4E380, 0x0A398224,
    0x508001E4, 0xF02623CF, 0x82BC7D81, 0x9F98292B, 0x0EB4AD82, 0x1FE14834, 0xAC775889,
    0x2E060D16, 0xB41FE38C, 0x1C003750, 0x6C1C8FF1, 0xC8FB1545, 0xB088411C, 0xC3F47F8C,
    0xF815B31C, 0x9811B294, 0x20A1406A, 0x23479016, 0xCE02B267, 0xE713C422, 0x53C6B893,
    0xF45081A4, 0x06D21604, 0x27D366C0, 0x03F45213, 0x40B102BA, 0x89219C38, 0x0281F991,
    0x03D09F2B, 0x4D1A70E8, 0x07B86308, 0x6C3D40C9, 0xFC199321, 0x610813E3, 0x50001160,
    0xA35F4E83, 0x8FE74101, 0x0C690E01, 0x153D3A0F, 0xF8845108, 0x2EEE8262, 0xFB048412,
    0xB24105E8, 0x66DD8720, 0x186839BD, 0xA4AD5E03, 0xE06C82D2, 0x96B8C01E, 0x10815A3F,
    0xA363F850, 0x09D29F6F, 0x840B51F4, 0x2E55EB80, 0x05E02061, 0x807F0262, 0xDADDF022,
    0x720CB720, 0xBD807E82, 0xC7881025, 0x3222102E, 0x563E4016, 0x2AC7D01D, 0x7D8A7210,
    0x6521D9A0, 0x09AE87F8, 0xC07B8192, 0xD2DDF3E2, 0x5AC03F84, 0x63FC1B90, 0x80112C0F,
    0xE911BC34, 0xF103FC40, 0x09D3C7B0, 0x66108864, 0x0ACBE38C, 0x7A3FC1C9, 0xB006906D,
    0xEFC11883, 0x71EE2BD6, 0xE18082A2, 0x486CEB1F, 0x107F4C27, 0x09E3FC31, 0x0F158FD1,
    0x838771FE, 0x0D167E64, 0x683C8071, 0x90671081, 0xA7E1D323, 0x01A60050, 0x627B488E,
    0xC84EB51F, 0x907A1214, 0xFE3B041A, 0x3F6482B1, 0xF0411065, 0x10C0680F, 0x070F10B2,
    0xD0A91052, 0x8006530F, 0xF4014277, 0x61070B90, 0x0C70E300, 0xF901510B, 0x87490A10,
    0x81074C0F, 0xB427B2B0, 0xA7621047, 0x66110772, 0x6110667A, 0x08200536, 0x07F6552B,
    0x0A7CB7FD, 0x10ED0C81, 0x0C71026B, 0x2D7580F0, 0x10052778, 0x6770DB0E, 0xDA0DE004,
    0xB0006A60, 0x0A80FB01, 0xFE021107, 0x783B5CB0, 0x40876227, 0xD773D105, 0x76701056,
    0x06E10705, 0x7884D7BF, 0x73D60282, 0x66204310, 0xD5710108, 0x20C61047, 0x85A6910E,
    0xDA0D0213, 0x000D6D20, 0x4E17790F, 0x070BF0EE, 0x10FD01D1, 0x27886809, 0x0679E6B7,
    0x60F90AF1, 0x03B1056E, 0x5F107603, 0x70420FF0, 0x03027787, 0x055800FF, 0x00FF0581,
    0x45810552, 0xAA107029, 0x683A0F30, 0x0E556B88, 0x1910586F, 0x464A0FD0, 0x0E60BA10,
    0xEA0085A2, 0x78960B70, 0x0F70A027, 0xD3107012, 0xC1050D00, 0x8480F200, 0xEE74E106,
    0xC2528A55, 0x10675388, 0x630FC091, 0x68077FE8, 0x0FF07210, 0x528B402F, 0x70FE01F2,
    0x7FB10708, 0x87102829, 0x41066146, 0x7C80EA0B, 0x011FD8C2, 0x70C90D80, 0x0FF02210,
    0xA5104081, 0x81068940, 0x7AF0ED00, 0x9B2298D1, 0xC5720F90, 0x0BA0E45B, 0xD50D6104,
    0x17E44CD8, 0x58C2298E, 0xE88CD3D2, 0xA0141D60, 0x1070950F, 0xEE3E388C, 0x33F21FE8,
    0x07F1058B, 0x7D3410FF, 0xE1064176, 0x8FB8BA08, 0xA58AE214, 0xF04E1070, 0x0004620F,
    0x054267D7, 0x10DB0C41, 0x1E390873, 0x070D60C7, 0x207585C1, 0x0FD08C10, 0x12102863,
    0x70AA0F70, 0x09621491, 0x0B6090FA, 0x65950F20, 0x5AB0E40B, 0xFF032102, 0x392607D0,
    0x76306821, 0xCB0D2106, 0x38D30000, 0x7FC8C70C, 0x421FD935, 0xD1078060, 0x00D8CF0A,
    0x065F20F5, 0x18CC6B71, 0x0231E594, 0x901066C6, 0xF0210195, 0x1064B20F, 0x4E9200A0,
    0x000C1FC9, 0x10581F0F, 0xB602F420, 0x310705A7, 0x95B8A00C, 0xD60D41FC, 0x200076E0,
    0x90D04837, 0x0310464E, 0x893B0DE0, 0x0B61E596, 0x044B70F0, 0x90633F21, 0x4C487A7A,
    0x766F70F4, 0x742C1E49, 0x01C1037A, 0xF94F6956, 0xD01E1027, 0x1E49834A, 0x036CD900,
    0x00F500E1, 0x0F509009, 0x88103895, 0xC98F6458, 0x0FF0671C, 0x0410454D, 0x30A50E30,
    0x63B0E50A, 0x670FF040, 0xF1CD99D0, 0x10682C6F, 0xB30B80D4, 0x05790D70, 0x1B19AC94,
    0x06604805, 0x50C90C41, 0x1059750C, 0xB7046883, 0xA7FE1CB9, 0x0B410488, 0x230D60D8,
    0xD06C1057, 0x1B19C370, 0x078D802C, 0x50E30A71, 0x1070B20E, 0xCF6193B7, 0xE02418D9,
    0x09C10663, 0xB00ED0EC, 0x64A81058, 0x18B9DB82, 0x930FF01D, 0xC0931070, 0x10678F11,
    0xE79217BE, 0xB0141899, 0x08B1074B, 0xEB0EC0ED, 0xD9FC0CA0, 0x1F60CA9F, 0xC69FD0D0,
    0x29F380F0, 0x0BF01413, 0xEA4F29FD, 0x79FD9FE0, 0x0F29F90E, 0x4EA1134E, 0xE0E01A73,
    0x0D80DD34, 0x31A053A9, 0xD0D10161, 0x0E034E0D, 0x12A100FF, 0x39E1A13A, 0xA270020A,
    0x70002A28, 0xAA290205, 0xA2915BA1, 0x2909A988, 0xC08FA28A, 0x1070A711, 0x2EA044A8,
    0x79EA6C7A, 0x0ED09210, 0x070B10E6, 0xB97F6301, 0x95015EA3, 0x9B10708C, 0xA0D70EC0,
    0x38710676, 0x5DA46912, 0x70827251, 0x0E40A610, 0x070CA0C6, 0x28B77D71, 0x7FE15DA5,
    0xB310691D, 0xA0B40D80, 0x05110691, 0x5E9AF0FF, 0x69A915CA, 0x0C210706, 0xE40A50CA,
    0xB9B963B0, 0x57A15DA6, 0xD210555B, 0x40920B90, 0x1029990F, 0x76956031, 0xA7A915CA,
    0x0041028F, 0x7D0A60E2, 0x60190FF0, 0x0FF01F10, 0x5BA83092, 0x370AA8B1, 0x0F400D10,
    0x5399F092, 0xC0F66EF8, 0x133A9277, 0x0366E2E0, 0xA52401B1, 0x10369F57, 0xEB0E0004,
    0x4131A9F8, 0xA7F0F20B, 0xFF02D000, 0x60FF1980, 0x0C510685, 0xAC8670E3, 0x80D110CA,
    0x85F96C0D, 0xE58D7049, 0xB0A31067, 0xABB87E0F, 0xD200A12D, 0x10FF7DD2, 0x0F700E03,
    0xA810659D, 0xDAC8A954, 0xA3D02010, 0x1B59B106, 0x90DA0020, 0x05610489, 0xD565A0FF,
    0xB65512CA, 0x0EC89206, 0xE10B92C5, 0xC0346770, 0x10EAE368, 0x06600420, 0x20CE0CF1,
    0x0FC08F10, 0xF9014609, 0xEAEF0A60, 0x0FB09210, 0xF000A9F2, 0x3000AFC0, 0x52F0FF06,
    0xD70C9105, 0xBAFD96C0, 0x96C0DA9B, 0x3AAEE025, 0x66350FF0, 0x609AFF10, 0x0A104B0D,
    0x57970EF0, 0x7D804B10, 0x760FC739, 0xE63D1068, 0x106B1961, 0x4B6639D1, 0x160E0FF9,
    0x0C50D900, 0x27B29107, 0x659F108B, 0x0B0103B2, 0xA84E00EB, 0x07190F00, 0x3BFB0200,
    0x28106B33, 0x00036099, 0x0009CB0E, 0x920FF06F, 0xA89F1039, 0x0D3B0DAB, 0xFEA8EAF5,
    0xA1035DC0, 0x1059047C, 0x41766630, 0xD0FD01BB, 0x63810708, 0xF56EF7D9, 0x81055950,
    0xB419AA03, 0xAB7FB104, 0x691F1037, 0x0C000098, 0x3E9300E1, 0x8A420EEB, 0x8E3102B6,
    0xD50CEB18, 0x84A876E0, 0x0AF00073, 0x0D8360F0, 0x00E1004B, 0x0FC3AAB3, 0x551058F7,
    0x9105B156, 0xB417347A, 0x067B8725, 0x17CD9AE1, 0x1066420F, 0x6869484A, 0x485068BB,
    0x0FB0A810, 0xB1106A8D, 0xCB180F90, 0x8440DD0C, 0xDF0CAAE3, 0xC00AB720, 0x1080C60E,
    0x07051B06, 0xDB9D6A11, 0x0FE022B0, 0x3E10708B, 0x80780FF0, 0x0FE02010, 0x2610681C,
    0x108E0FF0, 0x7C07BEB4, 0x096E95A3, 0xE0E90CE1, 0x0CE10262, 0xD5B3D0EB, 0x10DB003A,
    0x00263B0E, 0x097F50D9, 0x59380711, 0x440BDC10, 0xC67CAB19, 0x43F21068, 0x01A10993,
    0x070990FB, 0xE0FB01E1, 0x098B270A, 0x039DA0FF, 0xE0FF0821, 0x0BA1096D, 0xB2107835,
    0x8B6E0FA0, 0x0F0010AC, 0x041070C2, 0xAB510DD0, 0x0FF05A10, 0x3D10704E, 0xEB0DBBC0,
    0x87FBE07D, 0x1110B6A2, 0x7BEE0F50, 0xBAB0D410, 0xE50CCAFD, 0x70008D00, 0x5570FE09,
    0xF70A610A, 0x7104AC70, 0xAC88C968, 0x068D9AED, 0xC0EC00C1, 0x9A910E0B, 0x111048FE,
    0x38E80F10, 0x0FB0A5AE, 0x571055C4, 0x9A790FF0, 0x0D70DA46, 0xD441B6A6, 0xC020A92A,
    0x1075D80F, 0xD20E90C4, 0x5858108B, 0x0FBA8E88, 0x8FABBB04, 0xD62AB4A0, 0x01412C85,
    0x079D70F5, 0xE0FE09F1, 0x017A9F60, 0x077850F6, 0xA0FE09D1, 0x09D10CA3, 0x02B5A0FD,
    0x90FF02E1, 0x080A9FB8, 0xF984964D, 0xC12DC5A0, 0x105B64C6, 0x6A0FB0AB, 0x5020A52C,
    0x1078720F, 0x2D9713E1, 0x17110B51, 0xC740FFB3, 0xF4047000, 0xF0579E74, 0x3E610371,
    0x15104B8F, 0xC0C90F30, 0x7E310CB0, 0xB5105C6E, 0x40263E94, 0x80B0E02B, 0x180079B7,
    0x58C10B32, 0x1077EC72, 0x2FC0F900, 0xF0F90AE1, 0x01E1064E, 0x7E0C30E9, 0x00922230,
    0x983C9602, 0x6708801A, 0xF0B60861, 0x1038230E, 0x3386E013, 0x7A91A811, 0x0FF42C10,
    0xDBC430BC, 0xD0B00269, 0x1077A313, 0x328036B7, 0x20F70B41, 0x034000AA, 0x8245934B,
    0xD0D79F3B, 0xAA70C313, 0xEC011000, 0xECB70C80, 0x098A8110, 0x9401A103, 0xE07C3B80,
    0xA3BB927D, 0x7007099F, 0x10A03D50, 0xBF400034, 0x4C134C4E, 0xF0040256, 0x0A11A706,
    0xFA0B7341, 0xA9E7CBF0, 0xA5A0F101, 0x23CEA000, 0x700907B3, 0xC350F701, 0xF502215B,
    0x52180C70, 0x025AA70C, 0x2EC2E0F9, 0x7B08256A, 0x0D634BCD, 0xB50FD0BF, 0x7570133B,
    0x96C05D0E, 0x1A069630, 0x3A49C07A, 0xAD1A20B9, 0xD365C15D, 0x30071080, 0xC5E0F70D,
    0xEE0189CF, 0x800F0E20, 0x0F50C510, 0x9F15ECAE, 0x6106BE69, 0x9160C0B6, 0xAA0AD983,
    0xC9371087, 0x0C723199, 0x58108D03, 0x09C39574, 0x1080886C, 0xD40F001A, 0x91893120,
    0x109D1902, 0x3B0FF0B4, 0x902B9C30, 0xB720C60F, 0x1D49F102, 0x43B7160D, 0x01810806,
    0xE50DF0E8, 0x000B98F8, 0xD380F30D, 0xB957A104, 0x000418CB, 0x98B0F20D, 0xFF049103,
    0x098FCCF0, 0x10805C2E, 0xE00E600F, 0x315ECDB0, 0x9F7B40B1, 0xE798F5ED, 0xF7867505,
    0x18CCAA0F, 0x06C8B570, 0xE4380041, 0x04295BC8, 0x4B0CC0FC, 0x0BEA90DC, 0x0CA0061B,
    0x00CCA0F6, 0x70E00170, 0x93594D0F, 0xEC0EC024, 0x61039E60, 0x0DA0EE02, 0x2918CAB0,
    0x00D70F70, 0x033104CA, 0xFD0E00F1, 0x20118EEB, 0xC820F80D, 0x64006104, 0xC1B0A515,
    0x105C7758, 0x7A0C9805, 0xB0058FB9, 0x107AE234, 0xE34C7C53, 0x905E42C1, 0x9E366110,
    0x4E3228FB, 0x304C105D, 0x0081E5D8, 0x230F90CB, 0x559B103D, 0xC708EECC, 0x23109096,
    0xA0DA0EF0, 0x0EE3495F, 0x9C7400DD, 0x1B230FF7, 0x0A79008D, 0xDC00B916, 0xC1CBDAA6,
    0xD680BB4A, 0xFD72E93C, 0x29008A5D, 0x0007F00B, 0x1405849F, 0x60A03872, 0x3E6003C9,
    0x00877E0B, 0xED5C0AE9, 0x2287FFA3, 0x0A0862E0, 0x0896E181, 0xE080AF90, 0x2568B000,
    0x00072299, 0x108D6E3B, 0x9D72E004, 0x1C7084D8, 0x000C4B0B, 0x3D0C46FF, 0x400C252D,
    0x108BB244, 0xA23D0001, 0x67B0E370, 0x0A740C00, 0xFB041E0F, 0x2D730D10, 0x0D201425,
    0x07A5D0FC, 0x30C55701, 0x0127B0DC, 0x480953B0, 0x00F3036D, 0x277D410E, 0xF70DC01E,
    0x8105CE00, 0xDAF0DE85, 0x230267C1, 0x0105DE35, 0x0E90ED03, 0x25252C7B, 0x70F30E40,
    0x046106C2, 0x3F0F50F1, 0xB0437C1E, 0xA6A0FA0E, 0xEB03A107, 0x13486130, 0x0F80EE03,
    0x20DBFE64, 0x77B0AE6A, 0x9A10EC5E, 0xF80ED62A, 0x5303E900, 0x0F70E503, 0x1C106E52,
    0x10FF0BD0, 0x72BE4D0A, 0x4A3D000B, 0xE0ED5354, 0x327A860E, 0xFC0DD026, 0x5107E7B0,
    0x0DAC5300, 0x2F72B8F1, 0xC09E2180, 0x042000D8, 0x680E90F3, 0xD01F36BE, 0x10A44624,
    0x611B6054, 0x1D48107A, 0x067D4851, 0xDD0F40FA, 0xC05310AD, 0xE710E00F, 0x0D016348,
    0xF10B0843, 0x0B83CB01, 0xC2B3ED78, 0x75738BD0, 0x6090C605, 0xC46E801C, 0xF5D6BF60,
    0x4840D10F, 0xB500C3EA, 0x2E285830, 0x0F34E810, 0x8B104D2A, 0xA561B576, 0x63CB9A57,
    0x4E4DE0EC, 0x573D000B, 0x409DFA0C, 0xB6BF0008, 0x1104B180, 0x0B26C504, 0xEE0173DF,
    0xABA80C90, 0x0F90B64F, 0x4C01E341, 0x988E0E06, 0x0A700D10, 0x3B0A80FF, 0x9BDC435E,
    0x104DEB0D, 0xF990000C, 0xC00C0760, 0x586EB15E, 0xB30FC02A, 0x206800B0, 0x8A908B20,
    0xCC02610A, 0xC456E1F0, 0x0F80F004, 0x2F10C05B, 0xE0D93DC0, 0x5C8CE80F, 0xC6CDDBF4,
    0xE10B70E0, 0x0F90EF04, 0x2848E964, 0xE09BF330, 0x13DA5BDB, 0x73F270C1, 0xFD610315,
    0xF0D0700F, 0x0C007000, 0xE7750D97, 0x09B00B48, 0x8B78B4ED, 0x51935A08, 0x526A450A,
    0xF942C024, 0x1D910AA0, 0x0A848752, 0x664AAE9F, 0xD0F90FA0, 0x0E518E05, 0x210000D9,
    0xA0FF2B40, 0x4E3CF608, 0x2307F01B, 0x74920B02, 0xC240F20C, 0x93050105, 0x153ADDA1,
    0x0A3F3303, 0xBE105BA1, 0x1038C0F7, 0x0991F70B, 0x25456F67, 0xF0F708E0, 0x3E30BB0F,
    0x0484C7CA, 0x83220131, 0x53AC910D, 0xEB762009, 0x11045390, 0x8A40F902, 0xADF1887F,
    0x8427E942, 0xC873ED03, 0xEC104AF2, 0x7053AD45, 0xF1B0972F, 0x31043586, 0x97B40B24,
    0x1084910A, 0xDE09502B, 0x206C0CF1, 0x0133B49F, 0x8E564063, 0xD000F627, 0xA4E0F601,
    0xB401E000, 0x97E00DD2, 0xA8B0095D, 0x040760F8, 0x7E338800, 0x07701B10, 0x9F0F64DD,
    0x1E0F0430, 0x03B0032B, 0xE2193097, 0xFC660810, 0x0007DF88, 0x8A193069, 0xF5B8F4E0,
    0x0CC34402, 0x1C2D5100, 0x0D050003, 0xC058341E, 0xFF7FAD48, 0x816229BC, 0x8A44E250,
    0xA8582907, 0x89A35198, 0xFE1AD740, 0x6340927A, 0xBED401C1, 0x2D37FB15, 0x2D9648C7,
    0xF984BE5D, 0x791C40B2, 0x78959CFF, 0xC78FE2A9, 0xCCF8CD7F, 0x22931028, 0x840268B0,
    0x82E01C4A, 0xDE86B1CE, 0xE978C50E, 0x7CBFD7C1, 0xC51C167C, 0xD1EB559A, 0xF9F28E0E,
    0xA5E1B463, 0xAC841A00, 0x4A071435, 0xCEAD088B, 0xEAC519C2, 0x6F268A81, 0xD231B90D,
    0x8525E061, 0x61FEF840, 0xF055B122, 0x5B14C260, 0x8F37FAAC, 0x01980750, 0xD7BAFA94,
    0x31A6DAF0, 0x5CC41C31, 0xCBAE0DD6, 0x58BC2D05, 0xDF50D692, 0x08343DB0, 0x87B0B4C0,
    0x365B3FDD, 0x4D86BF0A, 0x7FAE87B8, 0x108112F7, 0x21C8E14A, 0xC61AF964, 0x8D29763B,
    0x460D1210, 0x7236E32A, 0x65200841, 0xD7730D24, 0x47335F90, 0xD5082E4C, 0x3FDE07F0,
    0x7F624762, 0x88159F07, 0x2CFA7FAC, 0x614A3C45, 0xD5521B87, 0x07FC35F6, 0x4D2D9A8F,
    0x0948CE7F, 0x89058362, 0x81A01A0F, 0x1203C0E3, 0x0801A858, 0x03E0CA28, 0x69A25A13,
    0xB07F3E07, 0x1F0E6549, 0x048A3BAE, 0xA7F9E646, 0xE3C2EF17, 0x8A97C3B0, 0x52A1A5E0,
    0x82CAD878, 0xA480D020, 0x81DE6B16, 0x5F1745AF, 0x6C1E316C, 0x8D84A172, 0x8AD83222,
    0xF9FC4D06, 0x3C2798A7, 0x91C83204, 0x9FA53076, 0x6311927F, 0xD018C202, 0xA62005C0,
    0x408E8328, 0x13049916, 0x84D1E475, 0xA9044612, 0x822A0CC3, 0xE303A180, 0x0B207306,
    0x65821A60, 0x64D72108, 0xF60FA273, 0x791FE700, 0x00E2293A, 0x86D9910E, 0xB07A01C3,
    0xCE7F9D64, 0x3684C429, 0x20B42507, 0x85889C04, 0xC11670C7, 0x32D8B4E1, 0x00B0ACDB,
    0x9B441864, 0x82B97286, 0x253742A0, 0x883403D4, 0x23124BB1, 0xD20D781E, 0x620018C2,
    0x621A6A91, 0x38B60E06, 0x13D37585, 0x9FEB38EA, 0x82D95C77, 0xDD4CC183, 0x4E29834A,
    0x6EA1A751, 0x562168FC, 0xA0156163, 0xD17C3905, 0x2468A1A7, 0xA08482A1, 0xA635E28E,
    0x82784001, 0xF4786611, 0x643C9887, 0x7158F698, 0x09C0C561, 0xF1E19C48, 0x0168711F,
    0xC61489E4, 0xE55AA96C, 0x8F62584C, 0x686AEA57, 0xD0A84A1A, 0xC77F5C75, 0x400900D5,
    0x3E073174, 0xE569A479, 0x788E3290, 0xC2070381, 0x89CF083D, 0x03606808, 0x83108817,
    0x899C5510, 0x7C74A1AE, 0xC609A431, 0xE4B925FE, 0xC2484603, 0x4194510E, 0xC67AC5C7,
    0x5A1886A9, 0x1284E150, 0xE781D047, 0x39364991, 0xA4611665, 0x16C30711, 0x14C671D9,
    0x01309A3D, 0x66979281, 0x3203A11A, 0x31090178, 0x94A480F2, 0x66B9925B, 0xE1DA761C,
    0xC876EBBA, 0x5C9966C1, 0x0F84994E, 0x81909432, 0xFE9BA503, 0x0000202E, 0x00000000

  EW_BITMAPS_TABLE( Applicationgrid )
    EW_BITMAP( Applicationgrid, Default )
EW_END_OF_BITMAP_RES( Applicationgrid )

/* Table with links to derived variants of the bitmap resource : 'Application::grid' */
EW_RES_WITHOUT_VARIANTS( Applicationgrid )

/* Font resource : 'Application::NumbersM' */
EW_DEFINE_FONT_RES( ApplicationNumbersM, 14, 4, 0, 16, 0x0016, 0x00BE )
  EW_GLYPH( 0x0016, 0, -14, 9, 19, 9, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 9, 0x000001F5 ),                /* ' ' */
  EW_GLYPH( 0x0021, 3, -13, 3, 13, 9, 0x000001F5 ),             /* '!' */
  EW_GLYPH( 0x0022, 1, -13, 7, 5, 9, 0x0000024F ),              /* '"' */
  EW_GLYPH( 0x0023, 1, -13, 8, 13, 9, 0x0000028B ),             /* '#' */
  EW_GLYPH( 0x0024, 0, -13, 9, 13, 9, 0x000003A9 ),             /* '$' */
  EW_GLYPH( 0x0025, 0, -13, 9, 13, 9, 0x00000539 ),             /* '%' */
  EW_GLYPH( 0x0026, 0, -13, 9, 13, 9, 0x000006B9 ),             /* '&' */
  EW_GLYPH( 0x0027, 3, -13, 3, 5, 9, 0x00000813 ),              /* ''' */
  EW_GLYPH( 0x0028, 2, -14, 6, 18, 9, 0x00000830 ),             /* '(' */
  EW_GLYPH( 0x0029, 2, -14, 6, 18, 9, 0x0000090D ),             /* ')' */
  EW_GLYPH( 0x002A, 1, -13, 7, 8, 9, 0x000009E3 ),              /* '*' */
  EW_GLYPH( 0x002B, 1, -10, 7, 7, 9, 0x00000ABE ),              /* '+' */
  EW_GLYPH( 0x002C, 3, -2, 3, 5, 9, 0x00000B4C ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -7, 9, 2, 9, 0x00000B79 ),               /* '-' */
  EW_GLYPH( 0x002E, 3, -2, 3, 2, 9, 0x00000BC6 ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -13, 9, 13, 9, 0x00000BE3 ),             /* '/' */
  EW_GLYPH( 0x0030, 0, -13, 9, 13, 9, 0x00000CF7 ),             /* '0' */
  EW_GLYPH( 0x0031, 0, -13, 9, 13, 9, 0x00000E61 ),             /* '1' */
  EW_GLYPH( 0x0032, 0, -13, 9, 13, 9, 0x00000F37 ),             /* '2' */
  EW_GLYPH( 0x0033, 0, -13, 9, 13, 9, 0x00001099 ),             /* '3' */
  EW_GLYPH( 0x0034, 0, -13, 9, 13, 9, 0x00001204 ),             /* '4' */
  EW_GLYPH( 0x0035, 0, -13, 9, 13, 9, 0x00001341 ),             /* '5' */
  EW_GLYPH( 0x0036, 0, -13, 9, 13, 9, 0x000014A7 ),             /* '6' */
  EW_GLYPH( 0x0037, 0, -13, 9, 13, 9, 0x000015E2 ),             /* '7' */
  EW_GLYPH( 0x0038, 0, -13, 9, 13, 9, 0x0000171F ),             /* '8' */
  EW_GLYPH( 0x0039, 0, -13, 9, 13, 9, 0x000018C4 ),             /* '9' */
  EW_GLYPH( 0x003A, 3, -8, 3, 8, 9, 0x00001A10 ),               /* ':' */
  EW_GLYPH( 0x003B, 3, -7, 3, 10, 9, 0x00001A64 ),              /* ';' */
  EW_GLYPH( 0x003C, 1, -12, 7, 11, 9, 0x00001AC5 ),             /* '<' */
  EW_GLYPH( 0x003D, 1, -9, 7, 5, 9, 0x00001BB7 ),               /* '=' */
  EW_GLYPH( 0x003E, 1, -12, 7, 11, 9, 0x00001C5E ),             /* '>' */
  EW_GLYPH( 0x003F, 0, -13, 9, 13, 9, 0x00001D4B ),             /* '?' */
  EW_GLYPH( 0x0040, 0, -10, 9, 13, 9, 0x00001E9B ),             /* '@' */
  EW_GLYPH( 0x0041, 0, -13, 9, 13, 9, 0x00002011 ),             /* 'A' */
  EW_GLYPH( 0x0042, 0, -13, 9, 13, 9, 0x0000216A ),             /* 'B' */
  EW_GLYPH( 0x0043, 1, -13, 8, 13, 9, 0x000022B0 ),             /* 'C' */
  EW_GLYPH( 0x0044, 0, -13, 9, 13, 9, 0x000023A3 ),             /* 'D' */
  EW_GLYPH( 0x0045, 0, -13, 9, 13, 9, 0x000024A1 ),             /* 'E' */
  EW_GLYPH( 0x0046, 0, -13, 9, 13, 9, 0x000025C2 ),             /* 'F' */
  EW_GLYPH( 0x0047, 0, -13, 9, 13, 9, 0x000026B6 ),             /* 'G' */
  EW_GLYPH( 0x0048, 0, -13, 9, 13, 9, 0x000027E5 ),             /* 'H' */
  EW_GLYPH( 0x0049, 0, -13, 9, 13, 9, 0x000028A0 ),             /* 'I' */
  EW_GLYPH( 0x004A, 0, -13, 9, 13, 9, 0x000029A2 ),             /* 'J' */
  EW_GLYPH( 0x004B, 0, -13, 9, 13, 9, 0x00002A7F ),             /* 'K' */
  EW_GLYPH( 0x004C, 0, -13, 9, 13, 9, 0x00002B9C ),             /* 'L' */
  EW_GLYPH( 0x004D, 0, -13, 9, 13, 9, 0x00002C47 ),             /* 'M' */
  EW_GLYPH( 0x004E, 0, -13, 9, 13, 9, 0x00002D59 ),             /* 'N' */
  EW_GLYPH( 0x004F, 0, -13, 9, 13, 9, 0x00002E4D ),             /* 'O' */
  EW_GLYPH( 0x0050, 0, -13, 9, 13, 9, 0x00002F79 ),             /* 'P' */
  EW_GLYPH( 0x0051, 0, -13, 9, 15, 9, 0x00003082 ),             /* 'Q' */
  EW_GLYPH( 0x0052, 0, -13, 9, 13, 9, 0x000031DF ),             /* 'R' */
  EW_GLYPH( 0x0053, 0, -13, 9, 13, 9, 0x00003309 ),             /* 'S' */
  EW_GLYPH( 0x0054, 0, -13, 9, 13, 9, 0x0000348E ),             /* 'T' */
  EW_GLYPH( 0x0055, 0, -13, 9, 13, 9, 0x0000355B ),             /* 'U' */
  EW_GLYPH( 0x0056, 0, -13, 9, 13, 9, 0x0000363B ),             /* 'V' */
  EW_GLYPH( 0x0057, 0, -13, 9, 13, 9, 0x00003787 ),             /* 'W' */
  EW_GLYPH( 0x0058, 0, -13, 9, 13, 9, 0x000038EE ),             /* 'X' */
  EW_GLYPH( 0x0059, 0, -13, 9, 13, 9, 0x00003A66 ),             /* 'Y' */
  EW_GLYPH( 0x005A, 0, -13, 9, 13, 9, 0x00003B7F ),             /* 'Z' */
  EW_GLYPH( 0x005B, 2, -14, 5, 18, 9, 0x00003CE9 ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -13, 9, 13, 9, 0x00003D83 ),             /* '\' */
  EW_GLYPH( 0x005D, 2, -14, 5, 18, 9, 0x00003E94 ),             /* ']' */
  EW_GLYPH( 0x005E, 0, -13, 10, 6, 9, 0x00003F42 ),             /* '^' */
  EW_GLYPH( 0x005F, 0, 2, 10, 2, 9, 0x00003FEA ),               /* '_' */
  EW_GLYPH( 0x0060, 1, -13, 6, 3, 9, 0x00004043 ),              /* '`' */
  EW_GLYPH( 0x0061, 0, -10, 9, 10, 9, 0x0000408B ),             /* 'a' */
  EW_GLYPH( 0x0062, 0, -13, 9, 13, 9, 0x000041AC ),             /* 'b' */
  EW_GLYPH( 0x0063, 0, -10, 9, 10, 9, 0x0000429A ),             /* 'c' */
  EW_GLYPH( 0x0064, 0, -13, 9, 13, 9, 0x00004399 ),             /* 'd' */
  EW_GLYPH( 0x0065, 0, -10, 9, 10, 9, 0x00004495 ),             /* 'e' */
  EW_GLYPH( 0x0066, 0, -13, 9, 13, 9, 0x000045BB ),             /* 'f' */
  EW_GLYPH( 0x0067, 0, -10, 9, 14, 9, 0x000046B7 ),             /* 'g' */
  EW_GLYPH( 0x0068, 0, -13, 9, 13, 9, 0x00004802 ),             /* 'h' */
  EW_GLYPH( 0x0069, 0, -13, 9, 13, 9, 0x000048C1 ),             /* 'i' */
  EW_GLYPH( 0x006A, 1, -13, 7, 17, 9, 0x000049CB ),             /* 'j' */
  EW_GLYPH( 0x006B, 0, -13, 9, 13, 9, 0x00004ADB ),             /* 'k' */
  EW_GLYPH( 0x006C, 0, -13, 9, 13, 9, 0x00004BF9 ),             /* 'l' */
  EW_GLYPH( 0x006D, 0, -10, 9, 10, 9, 0x00004CDE ),             /* 'm' */
  EW_GLYPH( 0x006E, 0, -10, 9, 10, 9, 0x00004D8E ),             /* 'n' */
  EW_GLYPH( 0x006F, 0, -10, 9, 10, 9, 0x00004E33 ),             /* 'o' */
  EW_GLYPH( 0x0070, 0, -10, 9, 14, 9, 0x00004F2D ),             /* 'p' */
  EW_GLYPH( 0x0071, 0, -10, 9, 14, 9, 0x0000504E ),             /* 'q' */
  EW_GLYPH( 0x0072, 1, -10, 8, 10, 9, 0x0000515E ),             /* 'r' */
  EW_GLYPH( 0x0073, 0, -10, 9, 10, 9, 0x00005207 ),             /* 's' */
  EW_GLYPH( 0x0074, 0, -13, 9, 13, 9, 0x00005353 ),             /* 't' */
  EW_GLYPH( 0x0075, 0, -10, 9, 10, 9, 0x00005441 ),             /* 'u' */
  EW_GLYPH( 0x0076, 0, -10, 9, 10, 9, 0x000054E2 ),             /* 'v' */
  EW_GLYPH( 0x0077, 0, -10, 9, 10, 9, 0x000055E2 ),             /* 'w' */
  EW_GLYPH( 0x0078, 0, -10, 9, 10, 9, 0x0000571D ),             /* 'x' */
  EW_GLYPH( 0x0079, 0, -10, 9, 14, 9, 0x00005860 ),             /* 'y' */
  EW_GLYPH( 0x007A, 0, -10, 9, 10, 9, 0x000059CF ),             /* 'z' */
  EW_GLYPH( 0x007B, 1, -14, 7, 18, 9, 0x00005AFB ),             /* '{' */
  EW_GLYPH( 0x007C, 3, -14, 3, 18, 9, 0x00005C30 ),             /* '|' */
  EW_GLYPH( 0x007D, 1, -14, 7, 18, 9, 0x00005C73 ),             /* '}' */
  EW_GLYPH( 0x007E, 1, -8, 7, 3, 9, 0x00005D99 ),               /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 9, 0x00005DFC ),
  EW_GLYPH( 0x00A1, 3, -9, 3, 13, 9, 0x00005DFC ),
  EW_GLYPH( 0x00A2, 1, -13, 7, 13, 9, 0x00005E56 ),
  EW_GLYPH( 0x00A3, 0, -13, 9, 13, 9, 0x00005F4C ),
  EW_GLYPH( 0x00A5, 0, -13, 9, 13, 9, 0x0000607D ),
  EW_GLYPH( 0x00A6, 3, -14, 3, 19, 9, 0x00006202 ),
  EW_GLYPH( 0x00A7, 1, -13, 8, 15, 9, 0x00006262 ),
  EW_GLYPH( 0x00A8, 1, -13, 7, 2, 9, 0x00006409 ),
  EW_GLYPH( 0x00A9, 0, -13, 9, 13, 9, 0x0000644B ),
  EW_GLYPH( 0x00AA, 1, -13, 7, 8, 9, 0x00006605 ),
  EW_GLYPH( 0x00AB, 1, -9, 7, 7, 9, 0x000066CF ),
  EW_GLYPH( 0x00AC, 1, -8, 7, 5, 9, 0x0000679C ),
  EW_GLYPH( 0x00AD, 0, -7, 9, 2, 9, 0x0000681B ),
  EW_GLYPH( 0x00AE, 0, -13, 9, 11, 9, 0x00006868 ),
  EW_GLYPH( 0x00AF, 1, -13, 7, 2, 9, 0x000069E7 ),
  EW_GLYPH( 0x00B0, 1, -13, 7, 8, 9, 0x00006A2E ),
  EW_GLYPH( 0x00B1, 1, -10, 7, 10, 9, 0x00006AE9 ),
  EW_GLYPH( 0x00B2, 2, -13, 5, 8, 9, 0x00006BCF ),
  EW_GLYPH( 0x00B3, 2, -13, 5, 7, 9, 0x00006C7A ),
  EW_GLYPH( 0x00B4, 2, -13, 6, 3, 9, 0x00006D15 ),
  EW_GLYPH( 0x00B6, 0, -13, 9, 17, 9, 0x00006D59 ),
  EW_GLYPH( 0x00B7, 3, -7, 3, 2, 9, 0x00006E58 ),
  EW_GLYPH( 0x00B8, 3, 1, 3, 3, 9, 0x00006E75 ),
  EW_GLYPH( 0x00B9, 3, -13, 3, 6, 9, 0x00006E93 ),
  EW_GLYPH( 0x00BA, 1, -13, 7, 8, 9, 0x00006EC2 ),
  EW_GLYPH( 0x00BB, 1, -9, 7, 7, 9, 0x00006F77 ),
  EW_GLYPH( 0x00BC, 0, -13, 9, 13, 9, 0x0000704E ),
  EW_GLYPH( 0x00BD, 0, -13, 9, 13, 9, 0x000071C8 ),
  EW_GLYPH( 0x00BE, 0, -13, 9, 13, 9, 0x0000735B ),
  EW_GLYPH( 0x00BF, 0, -9, 9, 13, 9, 0x00007527 ),
  EW_GLYPH( 0x00C0, 0, -14, 9, 16, 9, 0x0000766B ),
  EW_GLYPH( 0x00C1, 0, -14, 9, 16, 9, 0x00007828 ),
  EW_GLYPH( 0x00C2, 0, -14, 9, 14, 9, 0x000079E1 ),
  EW_GLYPH( 0x00C3, 0, -14, 9, 15, 9, 0x00007B62 ),
  EW_GLYPH( 0x00C4, 0, -14, 9, 14, 9, 0x00007CFA ),
  EW_GLYPH( 0x00C5, 0, -14, 9, 14, 9, 0x00007E8D ),
  EW_GLYPH( 0x00C6, 0, -13, 9, 13, 9, 0x00007FF5 ),
  EW_GLYPH( 0x00C7, 1, -13, 8, 17, 9, 0x00008124 ),
  EW_GLYPH( 0x00C8, 0, -14, 9, 16, 9, 0x0000826C ),
  EW_GLYPH( 0x00C9, 0, -14, 9, 16, 9, 0x000083F1 ),
  EW_GLYPH( 0x00CA, 0, -14, 9, 14, 9, 0x00008572 ),
  EW_GLYPH( 0x00CB, 0, -14, 9, 14, 9, 0x000086C0 ),
  EW_GLYPH( 0x00CC, 0, -14, 9, 16, 9, 0x000087FD ),
  EW_GLYPH( 0x00CD, 0, -14, 9, 16, 9, 0x00008963 ),
  EW_GLYPH( 0x00CE, 0, -14, 9, 14, 9, 0x00008AC5 ),
  EW_GLYPH( 0x00CF, 0, -14, 9, 14, 9, 0x00008BDF ),
  EW_GLYPH( 0x00D0, 0, -13, 9, 13, 9, 0x00008CFD ),
  EW_GLYPH( 0x00D1, 0, -14, 9, 15, 9, 0x00008E25 ),
  EW_GLYPH( 0x00D2, 0, -14, 9, 16, 9, 0x00008F55 ),
  EW_GLYPH( 0x00D3, 0, -14, 9, 16, 9, 0x000090E5 ),
  EW_GLYPH( 0x00D4, 0, -14, 9, 14, 9, 0x00009271 ),
  EW_GLYPH( 0x00D5, 0, -14, 9, 15, 9, 0x000093C1 ),
  EW_GLYPH( 0x00D6, 0, -14, 9, 14, 9, 0x00009527 ),
  EW_GLYPH( 0x00D7, 1, -10, 7, 7, 9, 0x00009665 ),
  EW_GLYPH( 0x00D8, 0, -13, 9, 14, 9, 0x0000973A ),
  EW_GLYPH( 0x00D9, 0, -14, 9, 16, 9, 0x000098D0 ),
  EW_GLYPH( 0x00DA, 0, -14, 9, 16, 9, 0x00009A17 ),
  EW_GLYPH( 0x00DB, 0, -14, 9, 14, 9, 0x00009B58 ),
  EW_GLYPH( 0x00DC, 0, -14, 9, 14, 9, 0x00009C6F ),
  EW_GLYPH( 0x00DD, 0, -14, 9, 16, 9, 0x00009D84 ),
  EW_GLYPH( 0x00DE, 0, -13, 9, 13, 9, 0x00009EFE ),
  EW_GLYPH( 0x00DF, 0, -13, 9, 13, 9, 0x0000A007 ),
  EW_GLYPH( 0x00E0, 0, -14, 9, 14, 9, 0x0000A150 ),
  EW_GLYPH( 0x00E1, 0, -14, 9, 14, 9, 0x0000A2E0 ),
  EW_GLYPH( 0x00E2, 0, -13, 9, 13, 9, 0x0000A471 ),
  EW_GLYPH( 0x00E3, 0, -13, 9, 13, 9, 0x0000A5F0 ),
  EW_GLYPH( 0x00E4, 0, -13, 9, 13, 9, 0x0000A77E ),
  EW_GLYPH( 0x00E5, 0, -14, 9, 15, 9, 0x0000A906 ),
  EW_GLYPH( 0x00E6, 0, -10, 9, 10, 9, 0x0000AA97 ),
  EW_GLYPH( 0x00E7, 0, -10, 9, 14, 9, 0x0000ABF0 ),
  EW_GLYPH( 0x00E8, 0, -14, 9, 14, 9, 0x0000AD4C ),
  EW_GLYPH( 0x00E9, 0, -14, 9, 14, 9, 0x0000AEDE ),
  EW_GLYPH( 0x00EA, 0, -13, 9, 13, 9, 0x0000B071 ),
  EW_GLYPH( 0x00EB, 0, -13, 9, 13, 9, 0x0000B1F2 ),
  EW_GLYPH( 0x00EC, 0, -14, 9, 14, 9, 0x0000B37C ),
  EW_GLYPH( 0x00ED, 0, -14, 9, 14, 9, 0x0000B4B2 ),
  EW_GLYPH( 0x00EE, 0, -13, 9, 13, 9, 0x0000B5E9 ),
  EW_GLYPH( 0x00EF, 0, -13, 9, 13, 9, 0x0000B70E ),
  EW_GLYPH( 0x00F0, 0, -13, 9, 13, 9, 0x0000B83C ),
  EW_GLYPH( 0x00F1, 0, -13, 9, 13, 9, 0x0000B978 ),
  EW_GLYPH( 0x00F2, 0, -14, 9, 14, 9, 0x0000BA85 ),
  EW_GLYPH( 0x00F3, 0, -14, 9, 14, 9, 0x0000BBEB ),
  EW_GLYPH( 0x00F4, 0, -13, 9, 13, 9, 0x0000BD52 ),
  EW_GLYPH( 0x00F5, 0, -13, 9, 13, 9, 0x0000BEA7 ),
  EW_GLYPH( 0x00F6, 0, -13, 9, 13, 9, 0x0000C00B ),
  EW_GLYPH( 0x00F7, 1, -11, 7, 8, 9, 0x0000C169 ),
  EW_GLYPH( 0x00F8, 0, -12, 9, 13, 9, 0x0000C238 ),
  EW_GLYPH( 0x00F9, 0, -14, 9, 14, 9, 0x0000C3B7 ),
  EW_GLYPH( 0x00FA, 0, -14, 9, 14, 9, 0x0000C4C4 ),
  EW_GLYPH( 0x00FB, 0, -13, 9, 13, 9, 0x0000C5D2 ),
  EW_GLYPH( 0x00FC, 0, -13, 9, 13, 9, 0x0000C6CE ),
  EW_GLYPH( 0x00FD, 0, -14, 9, 18, 9, 0x0000C7D3 ),
  EW_GLYPH( 0x00FE, 0, -13, 9, 17, 9, 0x0000C9AF ),
  EW_GLYPH( 0x00FF, 0, -13, 9, 17, 9, 0x0000CAF0 ),

  EW_FONT_PIXEL( ApplicationNumbersM, 0x0000CCC3 )              /* ratio 67.97 % */
    0x8C6318C6, 0xF7BDED61, 0x803DFBDE, 0xF7DF7EF4, 0x7BDEC9BD, 0xCE67879B, 0x6048E5F9,
    0xA0B84039, 0xEFB9062A, 0xF2FC3E2F, 0x79E14F7F, 0xC00DF813, 0x0039C02A, 0x0D80E700,
    0xE739CF18, 0x77FA739C, 0xC000002F, 0x6B3C5EEF, 0xD7B8EE9D, 0x00000EEF, 0x3CFEF000,
    0x80000017, 0xB9FBACFF, 0x8FD91BF1, 0x75CCF98E, 0x99F3002D, 0x237E5AEB, 0x9FF1D1FB,
    0x00373F75, 0xA0371000, 0xCB5DEBD6, 0xBAB2F5F8, 0xDCE3CCA3, 0xAE01C71B, 0xC798AC03,
    0x7F88FFB9, 0x1A72AB2F, 0x0DB6F5EB, 0xBD7AD620, 0xB2F7646D, 0xEF71BF2A, 0xEB3FEE71,
    0x7B36ADDC, 0x88BB11CC, 0x99036A6A, 0x83D43185, 0x6F63FCF3, 0x53DFEECC, 0xEFA6B588,
    0xFAAA899C, 0xCEF63FDE, 0xCF016A05, 0x76377C88, 0x8DFD4F59, 0xC1F7BDFF, 0x645EEAC9,
    0x824AD6FA, 0x78804900, 0x35AD6B7C, 0x5DDDD55C, 0xDCB77E7E, 0x00014235, 0xBE1C8041,
    0x66E1AD35, 0xEE7AEA75, 0x77EA000B, 0x766FD46F, 0x65AEF5C7, 0x0000007A, 0x00000000,
    0xFC484000, 0x1BD65E9C, 0xFF7FE3AB, 0xBBC75F93, 0x48BC75CC, 0x00000011, 0x00000000,
    0xECC44000, 0xFD2DF96D, 0xADF078C2, 0x7AE887EF, 0x591D8E7A, 0xFBE3576B, 0x7EB2BD9E,
    0x5F59E399, 0x1317FB27, 0x9E003EE3, 0x9E6BB9F5, 0xFDFE9E9E, 0x3FDDF6EE, 0x7FBBF000,
    0xAD21C926, 0x2B5AD6B5, 0xBBBBBBA3, 0xE9D6B3D7, 0xA02DC606, 0x2F518147, 0xA301E3D0,
    0x0F1DE05E, 0x7A05E7C8, 0x179F203C, 0x7C80F1E8, 0x01F3A05E, 0xF500FCF9, 0xC99EF7BF,
    0xE88F4F97, 0x0ADF18A8, 0x6463C2B1, 0xFC05280A, 0x7F1C80EA, 0x5F80B1E0, 0x1FC67805,
    0x511CB0C2, 0x58AF6721, 0x3A5ECCBE, 0x1FEF7B8C, 0xB5880BB2, 0x00000001, 0x00000000,
    0xB5AC4000, 0xBB32B58D, 0xE32F744B, 0x914F7BDE, 0x47C4FDDD, 0x88BEB5AC, 0x20031E02,
    0x751E3E40, 0x18C7FDEE, 0xFBBA78BE, 0xD6B7C2AF, 0x0000010A, 0x06B5AD6B, 0x9EBBBBBA,
    0xFFBDEF7B, 0x57777561, 0x5AD6B95E, 0x0820919F, 0xC0C4A000, 0xBA133FBD, 0xF5AC0F1F,
    0x0D301665, 0x6B5C8A60, 0xAD632FAD, 0x7E27EEEE, 0x1F7BBF01, 0x22F80518, 0x601AAC40,
    0x637C0BC6, 0xE05F2780, 0xF18C07CD, 0x9BDF5301, 0xBBBAB5BE, 0xD6B953C3, 0x001DC35A,
    0xBDEF7B9E, 0x777445F7, 0x5AD631FF, 0x400000AB, 0xB4CF7BDE, 0x7467BBBA, 0xBD6B5AE4,
    0x04B01623, 0x7231E000, 0x917EB5AD, 0x2BBBBAB5, 0x7BDCEB0F, 0xA78EC86F, 0x5BE4C3BB,
    0x0000116B, 0x055AD6B0, 0x81BFDDDD, 0xC050EF7B, 0x4C004002, 0xCC8FD5DE, 0xF3CBD98E,
    0xBDEF7BAC, 0xEEEAAEF7, 0xD6B1CC5E, 0xF805475A, 0x3C46301C, 0xD30167E0, 0x01C89E07,
    0x99440F8E, 0x9F00AA60, 0x01E32A03, 0xFDEF7FE3, 0x9EACDC3F, 0x7E2313F9, 0xD2311DEB,
    0x180663C0, 0xA8873322, 0x3DF63C78, 0xD3D31151, 0xF22A33D3, 0x80A3EF5B, 0x45490301,
    0x152DEB7C, 0xE8CF4F9D, 0xEF7B9D61, 0xD3C764F9, 0x7C5A9E33, 0x04834DEB, 0xA2C09000,
    0x8CE41AD7, 0xCF781DD5, 0x000137BD, 0xDEB5AD40, 0x7BBBFC34, 0x5ACF53C6, 0x2F77FBA7,
    0xD3AD6780, 0x74F7BBFD, 0xBF016B3F, 0x1C9267FB, 0xF880C412, 0x173FE44F, 0x71A76379,
    0x2764E4DD, 0xB90AFE6E, 0xFF107BF3, 0xEFC42BE7, 0xB1ADF009, 0xA9EB5AD6, 0xEB3EEEEE,
    0x6FEF7BDE, 0x7AD6B5AC, 0x4FBBBBAA, 0xC2137024, 0x3FF3B01E, 0x5FE7FF10, 0x182F8E88,
    0xFC61FE27, 0x79FE21ED, 0xC44FF913, 0xEF7B880E, 0xBA21FFBD, 0x6B2F2BBB, 0x318BF5AD,
    0x04026180, 0x7BC1E918, 0x667827B6, 0xFD21FBF6, 0xC01904D7, 0x4C5601FC, 0xF03FD7E0,
    0xFBDEF7BB, 0xDDD9AA8F, 0xB5E8672B, 0x5AE42756, 0xA01DDBC0, 0x90020276, 0xBF01DE3D,
    0xCF30158A, 0x803177BD, 0xBDEF7FE9, 0xBBAF8D77, 0xEF70BBBB, 0x0F0C301D, 0x5C0E7E3C,
    0xE463C065, 0x24661903, 0x31691E23, 0xDFCFE385, 0x7D0C1A5F, 0xD98F0F3F, 0xAF43322D,
    0xC112E615, 0xDEF73F63, 0xBA03FF7B, 0xF5AC0F2B, 0x13480393, 0x78C8C020, 0x02B6EF70,
    0x6B058FDD, 0xB026237D, 0x5AC0B004, 0x7BA0F0EF, 0xBBF19BC6, 0x5D1BDEF7, 0xA51DDDD9,
    0x9A4B5AD7, 0x00000000, 0x4C200000, 0x6B5AF4B0, 0xEEEECAE9, 0x7BDEF718, 0x4FDD03CF,
    0x7D6B02FC, 0x094C0519, 0x00000000, 0x53000000, 0xA32FAD62, 0x2FC4FDD0, 0xEF7BDEE2,
    0xBBB303BD, 0xB5ADF13B, 0x00000056, 0x3FDEFB00, 0xF03FDD98, 0x000135AD, 0x6B5ADF00,
    0x77776605, 0xBDEF7B8E, 0xDD583EF7, 0x5AEF0BDD, 0x0000256B, 0xBDEE7000, 0x78377560,
    0x00005AD7, 0xDC800000, 0xC37BDEF7, 0x7777463B, 0xAD6B3944, 0x00004925, 0xBDEFFC00,
    0x803AFC0F, 0x920006B9, 0x6BBC3104, 0xEEACDC0D, 0xBF17B9E0, 0x000000BB, 0xEE000000,
    0x3BBA05BD, 0x026B5AC1, 0x00000000, 0xF7BDEF71, 0x43DD11DE, 0x1EB5A776, 0x0000AD73,
    0x00000000, 0xB0000000, 0x15AE63D6, 0x77643DD1, 0xEF7BDEE2, 0x6B037740, 0x0000002D,
    0x00000000, 0xD6104000, 0x3233EB5A, 0xAF2BBBBA, 0xB9E4FF75, 0x0A78DE05, 0x681F8A9E,
    0x98E6F01D, 0x9805D390, 0xD02F1F20, 0xF1F203C6, 0xC8146D02, 0x351B40D2, 0x000005EE,
    0x00000000, 0x00000000, 0x6B5AC000, 0x777744AD, 0xE0DEE7AF, 0x011485DC, 0x0F1C091E,
    0x25880E90, 0x09AD3213, 0x7F01C8D3, 0x49FC80E5, 0x902E46B0, 0x9E247016, 0x2EE7937B,
    0x400F007C, 0xC0FE1016, 0x8A9C058A, 0x500E3807, 0x3E7C0959, 0x0A204A60, 0xEFFD40E0,
    0x65F267BD, 0x2B378CF5, 0xE1DEB7E2, 0x038F0309, 0x00000000, 0x81840000, 0xDF88A9C7,
    0x97C7877A, 0x9F3A33D5, 0xA7BDEF7B, 0x1789FBA0, 0x0B22FAD6, 0x60002478, 0x65F5AC4A,
    0xF89FBA14, 0x0A7BDEE0, 0x00000000, 0xF7BDFFA8, 0x9EACBE4C, 0xBF1159D1, 0x30A88EF5,
    0x000008F0, 0x00000000, 0xA23C0C20, 0x1DEB7E22, 0x33D597CA, 0x96FFD53A, 0x93DBC0BD,
    0xF7BDEF71, 0x93F740FF, 0x5F5AC0BF, 0x014C03C6, 0x789F2010, 0x2FDFEF70, 0x0744FDD0,
    0x0B22FAD6, 0x00002478, 0xBDFF8C00, 0x59B9FEF7, 0xC393FDDD, 0xA69AD6B7, 0x1E00C00C,
    0xDFA62051, 0xFBC9FFBD, 0x32765776, 0x288DFAD7, 0x4A600960, 0x65F5AD73, 0x3F775F94,
    0x7BDC45F1, 0x89F7BDEF, 0xCBDD92EE, 0x2B5CDB5A, 0x00000001, 0x00000000, 0x78000000,
    0xBBBF1FEE, 0x00000000, 0x00000000, 0x034C0000, 0xDF888C53, 0x2F9632FA, 0x98E89FAB,
    0xFDBE8FF7, 0x08FFA448, 0x53496583, 0x7A47A464, 0xFA5FD714, 0xC1AE98F3, 0xC30A3C30,
    0x8A8F01C8, 0x85D7AE07, 0x10607847, 0x710B7D83, 0x994812EF, 0x98108806, 0x3EF371D6,
    0xA65310E4, 0x443A6533, 0x8631E470, 0x19873599, 0x64219DCC, 0x348F13E6, 0x21046645,
    0x37B8C34D, 0xF28F6F79, 0x3D73E2B1, 0x9954A89E, 0xB9F8BC75, 0x94660635, 0x64143C17,
    0xF8F3E0B1, 0x665F8CC1, 0x73E2A2B1, 0x278F5CF8, 0x0E478C9F, 0xBF07BADF, 0x44314EFB,
    0x94FCA2F9, 0x7DB28E1C, 0x4CB2313C, 0xC0ACBF2C, 0x52303A67, 0x003CA03C, 0x80000000,
    0xF7BDEF71, 0xDDDD95DE, 0xAD6B118B, 0xAF028D75, 0x0F18AC17, 0xC560BD78, 0x05EBC078,
    0xAF01F22B, 0x1391581F, 0x6B5AE6BC, 0xBBAA118D, 0xDEF7FEBB, 0xD6B3774B, 0x00000002,
    0x00000000, 0xEE8B5AC0, 0xF900FBCE, 0x0F1E80BC, 0xE80BCF90, 0xBCF900F1, 0xC03C7780,
    0xE3D017A8, 0x80BD4601, 0x6A8C051E, 0xBFF51DC0, 0x775FDEF7, 0x000D6B98, 0x00000000,
    0xE6000000, 0x3BAFC35A, 0x5D8C0240, 0x25F59C40, 0x6FB79EF8, 0x9F368DE0, 0xE87CF58F,
    0xD6B5AD78, 0xE8AD6B5A, 0xEEEEEEEE, 0x9FFC848C, 0xF5F8C6FD, 0xBDEE30CF, 0xEEC8FCF7,
    0xB58A6A5E, 0x400E3F56, 0x5BDEE798, 0x774F1BE4, 0xD6B7E4B2, 0xBD92C004, 0x563B24D6,
    0x0BDCF277, 0x7B800000, 0x3DD059EF, 0x7AD607A3, 0x001003D3, 0x08000000, 0x07A6F5AC,
    0x787A33DD, 0x7BDEF7FE, 0xEEACBF1F, 0x5DE195EE, 0x060CAD6B, 0x40000000, 0xEDC32090,
    0xE5FA56B5, 0x80BDDD58, 0x00005DFF, 0xDEF7FE78, 0xEE9F2FC4, 0xAD6F8460, 0x00000001,
    0x08C12000, 0x5F81AD67, 0x3AC0EE8E, 0xC9FBDEF7, 0x9F3BA78E, 0x956B7C9A, 0x6B580011,
    0xE7774495, 0x7BDEE0F3, 0xF930013F, 0xEC8F5AD6, 0x40FBBA78, 0x0FBDEFFD, 0x0BDD1CDE,
    0x71CAD7A9, 0xC8FBBF2F, 0xB12F666E, 0x004ADF16, 0x00000000, 0xEB000000, 0x5DEF7BDC,
    0xC1DD51D1, 0x41AD6FC3, 0x00000000, 0xBE1E0020, 0xF1D106B5, 0xB9D60774, 0xC10026F7,
    0x1E97D6B3, 0x7313F74E, 0x0002F73C, 0x7BDEE000, 0xF15EE83E, 0x53AB583C, 0x00000002,
    0x00000000, 0x3817BBF0, 0x16B3C0DD, 0xFEF7BDC6, 0xC403DD90, 0x00000F5A, 0x00000000,
    0xAE63D6B1, 0x643DD995, 0x7F7B82F7, 0xAD607DD0, 0xEF7BDC67, 0x41DDD95D, 0x0006B5AC,
    0x00000000, 0x64300000, 0x330BF5AC, 0x58E62BBB, 0x00000FF7, 0x07FDD600, 0x204E378C,
    0x2F80F44E, 0xF1AC84E7, 0xCE402202, 0x18EF03FC, 0x59E2701F, 0xC6BA7F20, 0x90FEF7BD,
    0x5AC403DD, 0x0000000F, 0x00000000, 0xB5880000, 0xCCAD731E, 0xD7BB21EE, 0x7BDEF7BA,
    0x33D3187E, 0xEE7CF26A, 0x000605CF, 0x00000000, 0xEF73C000, 0xD07CF7BD, 0xAC29E33D,
    0x0001A6F5, 0x00000000, 0x9EF00000, 0xD4F9EF7B, 0x33CBD98C, 0x3F577C87, 0x0800C02E,
    0x30010000, 0x3F577C86, 0xBD98CD4E, 0x7BDD6B3C, 0xA21F3DEF, 0xC61E7A7B, 0x0FE3EF5A,
    0x00000010, 0x5AC60800, 0xDD13F8FD, 0xF790F3CB, 0x0001F3DE, 0xEE798000, 0xE8AEF7BD,
    0xC320EEA8, 0x0001AD6F, 0x00000000, 0x35ADF0C8, 0x3BA78E88, 0x37BDCF30, 0x40000001,
    0x7BDEE77E, 0x7764FBC7, 0x6B5E9677, 0x000160AD, 0x00000000, 0xF7B9EF00, 0xE8E6ABDE,
    0xB3C36EEE, 0x4A4B5AD6, 0xF7B9E2A0, 0xEEEC4FDE, 0xB94CF1EE, 0x0B9F5AD6, 0xAD6B5AC0,
    0xEEEE8DCF, 0xBDC4CF1E, 0x1800000F, 0xFBDDF2F7, 0xF74F3764, 0x6BB8B58A, 0x00000025,
    0x7A400000, 0x1D1CE817, 0xBFF17B9E, 0x0000000B, 0x00000000, 0x1AD778B0, 0x1DD98AE4,
    0xEF78DDF4, 0xF65033F7, 0x29522508, 0x6DB4C943, 0x9479457F, 0x46A2393F, 0xC0F5CA14,
    0x50543656, 0x7183EEFC, 0x3258184F, 0xCC33B8C5, 0x90CE3EE3, 0xEE11AE29, 0x95CF1E34,
    0x30C56443, 0x7BF89E23, 0x422B0CA4, 0xE91E2298, 0xB7BC7FB9, 0xCC65CA9F, 0xF378DED1,
    0x771BE4BA, 0x323581CC, 0x4246105F, 0x67234667, 0x378A7CEC, 0x3D79F8DE, 0xD91CCB15,
    0xEF23FDEF, 0xF1E0E4FE, 0x5B63F48D, 0xC2AA251E, 0xCFE5C8CF, 0x163FCF48, 0x09E7BF3E,
    0xC81C463C, 0x54FC0A21, 0x3302EB80, 0x0144F01E, 0xF7B881C7, 0x88EF7BDE, 0x6912EEEE,
    0x6F1F35AD, 0x82C62FC0, 0x9AF05C7A, 0x43465603, 0x8DE03ABE, 0x4456B588, 0xC4EEEE89,
    0xF1979DF8, 0xC6F3FAAF, 0x03F08AFA, 0x23300000, 0xC893A3D0, 0xF1BE20F1, 0x0122780F,
    0xE1300000, 0xBE78B7E8, 0x3EE3FEB9, 0x00000000, 0xF7580000, 0xF3E6A0F7, 0xBDB78C3D,
    0x00000CB0, 0xBE021100, 0x48CCC1F8, 0x9125F1DC, 0x20000002, 0x8F8FA325, 0xAC2EF15A,
    0xEFAE7255, 0xFFD9EF7E, 0xFBE57BAF, 0x3F74F7BB, 0x2F77E16B, 0xDE000000, 0x677BC005,
    0x8E6627DF, 0x7B3D45EA, 0x00000025, 0x99E22030, 0x1EFF1F7D, 0xCF58CBD5, 0xEE7BC95E,
    0x699E3FBD, 0xD5B61F75, 0x03A43D6B, 0xD7B4E400, 0xDD54AC5A, 0xDEFA53CD, 0x0000000B,
    0x6B5AD7B0, 0x6BBBBAA0, 0x6FFC13DE, 0xE99288AF, 0x8C7B6517, 0x8FB658E1, 0x1627A8CA,
    0xE0546F1E, 0x43181D27, 0x790EE216, 0xEA3CE21F, 0x9CD3983C, 0xBD90F449, 0x7DD53B88,
    0x0001773C, 0x0005DCF0, 0x00005DCF, 0xF7BDFF8C, 0x7767372E, 0x6B5DE197, 0xCFC1290D,
    0xAE53DEFF, 0xCB5E2BD9, 0x00333ABB, 0x473AB7CA, 0x797A78F4, 0xC6F7BEE4, 0x83008604,
    0xC6F7BDDF, 0xBBBBA713, 0x3D7DD67F, 0x5BFEADF7, 0xE77E37FD, 0x9FF15F9E, 0xA2FCD7AB,
    0xFBD77EC6, 0xB13C567F, 0xF2738DEF, 0x31D98CFF, 0x092EF903, 0xA40C0000, 0x37B8CFF8,
    0x5F93E466, 0xEC6A73B7, 0xF967ECED, 0xFE6BD5CF, 0xDDEF73C2, 0x4A31EEAC, 0xD613F5AE,
    0x57378DBD, 0x937AA231, 0xBC4DACF1, 0x30720BA3, 0xFF7CBB8D, 0xFCFD6F3A, 0xF98D4FFE,
    0xF46F8EF3, 0xF3CF3F2E, 0xF3A95F36, 0x9AD6B5AC, 0x7FBBBBA7, 0x9DEF7BBF, 0xB3FFE000,
    0xAD6B5AD6, 0xEEEEEE8C, 0xDDDF8C5E, 0xF197FC85, 0xB560FD15, 0x3AEF3D98, 0xC41FC8CF,
    0x9DE691FF, 0x746D856B, 0xE6A393D6, 0xAFFF7EB3, 0x3D55BD7C, 0x6EEFAD61, 0x6FEBEF8D,
    0xF7BDDF87, 0xEEE9FFDE, 0xBDDF9FEE, 0xFA351B77, 0x7AEF0F19, 0xA400200D, 0xFEFA3325,
    0xF777F8CC, 0x01F71837, 0x77DBBBF0, 0xA7A7A7FF, 0xDCFACF7F, 0xC6000135, 0x5AD6787D,
    0xDDD3CD6B, 0xEF71BFDD, 0x2B1EEC89, 0x5B8C5AD6, 0xB148F64B, 0x9F7B8D56, 0xF96FDD91,
    0x8F4E13DD, 0xF195ACF2, 0x4678CFBF, 0x9ACF15BF, 0x320BBDD4, 0x2BFCEFF4, 0xD4AFF762,
    0xFBDEF7B9, 0x1935837A, 0x0263F789, 0xF9005800, 0x016F7C00, 0x000006E6, 0x00000000,
    0xCF000000, 0xDD7BA75A, 0xDDFACD97, 0xEFE001F8, 0xB77BDDF8, 0x3C63D951, 0x200D7AD4,
    0x33290C00, 0x7C66DB9E, 0x628DFDDD, 0xFC4FF60C, 0xFE3D8F4B, 0xC6ABD4EF, 0x9E3DCBEF,
    0xEBEFCEFE, 0x53D9FE31, 0x0B3CC2FE, 0xC81F39DE, 0xC0DBC09A, 0x1B700F58, 0x56F15678,
    0x7BDE3757, 0x81DD46B3, 0xAC4DCFDF, 0xE24E4727, 0xF43FBD7B, 0xBCFBE617, 0xF7FB16A3,
    0xF03CF3BC, 0x98C0F9CD, 0xA817E813, 0x817D00F5, 0x9D9E0D67, 0x7CAD67D9, 0xF74A7AD6,
    0xDCF7EF8B, 0x5C9FA2DF, 0xF3E4FEBF, 0xFD3DDEFA, 0x518390BE, 0x5BFFFB0B, 0x3DF8BEF7,
    0xEB5173D5, 0xBE87EB19, 0x99E5FFBC, 0x747CFF83, 0x558C4633, 0xEFAAF549, 0x78EF7587,
    0x9F20DE72, 0xFBF037D7, 0xB22DF9E2, 0xB6F0B396, 0x1DE7BF58, 0x37FB11EB, 0x0BDDF85E,
    0x79E06E9C, 0x017DE026, 0x2463006B, 0xF8EEFFC6, 0x1FFD59D0, 0x00D77944, 0x94412012,
    0x3BEFBEF3, 0x39CC63BC, 0x55BE34E7, 0xEFDF1109, 0xFFBF903F, 0x7BDC033D, 0x03C30C06,
    0x57039F8F, 0xF918F019, 0xC9198640, 0x4C5A4788, 0xF7F3F8E1, 0xDF430697, 0x7663C3CF,
    0x6BD0CC8B, 0xF044B985, 0x5F5A88D8, 0x0BEFCE21, 0xFFFDFF88, 0x0EF7FE0A, 0x1E078618,
    0x32AE073F, 0x81F231E0, 0x1192330C, 0xC298B48F, 0x2FEFE7F1, 0x9FBE860D, 0x16ECC787,
    0x0AD7A199, 0xB1E08973, 0x42EFB3A9, 0x124E18EC, 0x3C4DC33F, 0x655C0E7E, 0x03E463C0,
    0x23246619, 0x8531691E, 0x5FDFCFE3, 0x3F7D0C1A, 0x2DD98F0F, 0x15AF4332, 0x63C112E6,
    0x6227FD43, 0x105773DE, 0x2067F9E5, 0x7E3C0F0C, 0xC0655C0E, 0x1903E463, 0x1E232466,
    0xE3853169, 0x1A5FDFCF, 0x0F3F7D0C, 0x322DD98F, 0xE615AF43, 0x5B63C112, 0x97DCF5F7,
    0xF37EF35A, 0x6E19F8CF, 0xE073F1E1, 0x231E032A, 0x2330C81F, 0x8B48F119, 0xFE7F1C29,
    0xE860D2FE, 0xCC7879FB, 0x7A19916E, 0x089730AD, 0xEF799B1E, 0x07F0786D, 0x9F8F0186,
    0xF0195703, 0x08C0F918, 0x91E19233, 0xFC708F16, 0x60D2FE39, 0x7879FBE8, 0x19916ECC,
    0x9730AD7A, 0x73DB1E08, 0xFEF7BDEF, 0x71F749A4, 0x08F5AC7D, 0x2C01A401, 0x97DC0401,
    0xA0BFE8B4, 0x0B8D2559, 0x58040596, 0xEE8949EB, 0xEF7BBF13, 0xDD95D1BD, 0xAD7A51DD,
    0x0009A4B5, 0x00000000, 0x4B04C200, 0xAE96B5AF, 0xF88EEEEC, 0x0DEF7BDD, 0x1B017DD6,
    0xAB7C60B0, 0xDFBE2212, 0xFF7F207F, 0xEF71067B, 0x81DEE7BD, 0xF89DDDD9, 0x002B5AD6,
    0x7D800000, 0xEECC1FEF, 0x9AD6F81F, 0x6F800000, 0xB302B5AD, 0xB5113BBB, 0xDF9C42BE,
    0xFBFF1017, 0xF7B895FF, 0x03BDEF7F, 0xF13BBBB3, 0x0056B5AD, 0xFB000000, 0xDD983FDE,
    0x35ADF03F, 0xDF000001, 0x66056B5A, 0xF4F27777, 0xFB884FD3, 0x677D6FAD, 0xCE7399E0,
    0xEFBEFBC0, 0x0000009B, 0x0FF7BEC0, 0x7C0FF766, 0x00004D6B, 0x5AD6B7C0, 0x9DDDD981,
    0xF73D7DD6, 0xCFDE6D15, 0xDDDD981C, 0xB5AD6F89, 0x00000002, 0xC1FEF7D8, 0x6F81FEEC,
    0x000009AD, 0x2B5AD6F8, 0xD3BBBB30, 0x442556F8, 0x40FFBF7C, 0x0CF7FEFE, 0xCF7BDEE2,
    0x87BA23BD, 0x3D6B4EEC, 0x00015AE6, 0x00000000, 0x60000000, 0x2B5CC7AD, 0xEEC87BA2,
    0x0AFAD444, 0x405F7E71, 0x57FFEFFC, 0xBDFFDEE2, 0x1EE88EF7, 0xF5AD3BB2, 0x00056B98,
    0x00000000, 0x80000000, 0xAD731EB5, 0xBB21EE88, 0x2EFB3A93, 0xE862FEE2, 0xC87BA23B,
    0x63D6B4EE, 0x000015AE, 0x00000000, 0xD6000000, 0x22B5CC7A, 0x4EEC87BA, 0xFB9EBEEB,
    0x67EF368A, 0xB21EE88E, 0x98F5AD3B, 0x0000056B, 0x00000000, 0xB5800000, 0x88AD731E,
    0x33BB21EE, 0x9EF7BDEE, 0x7467B305, 0x796F5BE2, 0x2C007480, 0x33F895BE, 0xDF63E17B,
    0x00000007, 0x6F5BE0E9, 0xD19ECC29, 0x113FEA03, 0xC2BB9EF3, 0x65F5DE73, 0x0F00059D,
    0xFE101640, 0x9C058AC0, 0x0E38078A, 0x7C095950, 0x204A603E, 0xF8C0E00A, 0x7C442556,
    0xFE40FFBF, 0xD40CF7FE, 0x2673DEFF, 0x78CF565F, 0xEB7E22B3, 0xF0309E1D, 0x00000038,
    0x40000000, 0x8A9C7818, 0x7877ADF8, 0xA33D597C, 0x2BEB5113, 0x017DF9C4, 0x5FFFBFF1,
    0xBDFFFF51, 0xF565F267, 0xE22B378C, 0x09E1DEB7, 0x00038F03, 0x00000000, 0xC7818400,
    0x7ADF88A9, 0xD597C787, 0xFA793A33, 0x5EA827E9, 0xBE2DFADF, 0x9BC4F9AC, 0xBF7BF115,
    0x8F0309E1, 0x00000003, 0x84000000, 0x88A9C781, 0xC7877ADF, 0x3A33D597, 0x3113FEA1,
    0x782BB9EF, 0x5DFF9E7E, 0xE33D597C, 0xADF88ACD, 0xC0C27877, 0x000000E3, 0x00000000,
    0x2A71E061, 0xE1DEB7E2, 0x8CF565F1, 0x9EBEEB4E, 0x9FBCC2FB, 0x7A7AABC1, 0xEB7E22B2,
    0xF0309E1D, 0x00000038, 0x40000000, 0x8A9C7818, 0x7877ADF8, 0xA33D597C, 0xC578A753,
    0x8D7FC773, 0x37E763B8, 0xFC3C63E4, 0xC47F8D6A, 0x239FFB7A, 0xAA4E34F6, 0x9CF7BDFF,
    0x8CF566F6, 0xDF8C8DF8, 0x069BF1FA, 0x0572023F, 0xE40B1BF0, 0x31BF01FA, 0x203F58C1,
    0xA4BC984C, 0xB7AF6118, 0xCF5442FC, 0xBDCED1E8, 0xB7C62CF7, 0xFBE2212A, 0xF7F207FD,
    0xDCF067BF, 0x0BBBF13F, 0x00000000, 0x00000000, 0x3034C000, 0xADF888C5, 0xB2F9632F,
    0x440E89FA, 0xE710AFAD, 0xFFC405F7, 0xB9E57FFE, 0x1777E4FF, 0x00000000, 0x00000000,
    0x60698000, 0x5BF1118A, 0x65F2C65F, 0xD41D13F5, 0xDCF177D9, 0xDDF7F7AF, 0x099E98C5,
    0x00000000, 0x00000000, 0xC53034C0, 0x2FADF888, 0xFAB2F963, 0xBEEB0E89, 0x3A7AFB9E,
    0xC5CE56FE, 0x00013928, 0x00000000, 0x98000000, 0x1118A606, 0x2C65F5BF, 0xD13F565F,
    0x15F5A881, 0x80BEFCE2, 0xAFFFDFF8, 0xDF927BAC, 0xA218A77D, 0x4A7E517C, 0x3ED9470E,
    0x2659189E, 0xE0565F96, 0x29181D33, 0x001E501E, 0xC0000000, 0x00002F73, 0xA7BDEE00,
    0x1789FBA0, 0x0B22FAD6, 0x60002478, 0x65F5AC4A, 0xF89FBA14, 0x0A7BDEE0, 0xF7B9DF00,
    0x789EA99E, 0x8A47467A, 0x1519BD6F, 0xF0100006, 0x59C16674, 0x51DDF826, 0x01B3F00F,
    0xAE41DB00, 0xEAC1E2B7, 0x00629D19, 0x97FFDF72, 0x12FBFB18, 0x6275678C, 0xF9EF7BDC,
    0xD4BDDD91, 0x7EAD6B14, 0xCF30801C, 0x8EC8B7BD, 0x91593BA7, 0x00135ADF, 0x935AF64B,
    0x2775637C, 0xB7C448C0, 0xBF905EEF, 0x5E883F6F, 0xF7B8C0CF, 0xBB23F3DE, 0xD629A97B,
    0x0038FD5A, 0x6F7B9E61, 0x774F1D91, 0xB5BF22B2, 0xEC960026, 0xC6F926B5, 0xB3A84EEA,
    0xDE8C42EF, 0xF4D6249F, 0x7BDC64AC, 0xDD91F9EF, 0x6B14D4BD, 0x801C7EAD, 0xB7BDCF30,
    0x3BA78EC8, 0x5ADF9159, 0xF64B0013, 0x637C935A, 0x7FEA2775, 0xBE1FBDEF, 0xB51FEEEE,
    0x182B5AD6, 0x7E7BDEF7, 0x352F7764, 0x1FAB5AC5, 0x73CC2007, 0xE3B22DEF, 0xE4564EE9,
    0xC004D6B7, 0x24D6BD92, 0x89DD58DF, 0x7DCF5F75, 0xFD5BFEA9, 0xAB92AC67, 0x7BDEF718,
    0x2F77647E, 0xAB5AC535, 0xCC20071F, 0xB22DEF73, 0x564EE9E3, 0x04D6B7E4, 0xD6BD92C0,
    0xDD58DF24, 0x4AD6B109, 0x03FDDD98, 0x02012B79, 0x31B5B8C6, 0xC8FF417E, 0x8A6A5EEE,
    0x0E3F56B5, 0xDEE79840, 0xD3C7645B, 0x6FC8AC9D, 0x258009AD, 0xBE49AD7B, 0xFF13BAB1,
    0x9EE7FF7B, 0x472BAFC7, 0x575CD78F, 0x18581AAD, 0xB3DBB9C6, 0x1E78DF2A, 0x7C56FDA3,
    0x0667BCD7, 0x6ABE8CC0, 0x8F5CECAD, 0xFF9E5EEC, 0xC7DEF7BD, 0x7BBBAB2F, 0x5AD77865,
    0x0001832B, 0x24100000, 0xAD7B70C8, 0x56397E95, 0xFFCF2F77, 0x83EF7BDE, 0x0D805F75,
    0x200620B0, 0x897FFDF7, 0xC12FBFB1, 0xD6275678, 0x4FDEF7B9, 0xF9DD3C76, 0xAB5BE4D4,
    0x5AC0008C, 0x3BBA24AB, 0xDEF7079F, 0xC98009FB, 0x647AD6B7, 0x07DDD3C7, 0xEDF11230,
    0xEFE417BB, 0xD7A20FDB, 0xBDCEB033, 0xE3B27EF7, 0x26A7CEE9, 0x04655ADF, 0x255AD600,
    0x3CF9DDD1, 0x4FDEF7B8, 0xB5BE4C00, 0x9E3B23D6, 0xB3A83EEE, 0xDE8C42EF, 0xF4D6249F,
    0x7B9D64AC, 0xC764FDEF, 0x4D4F9DD3, 0x08CAB5BE, 0x4AB5AC00, 0x79F3BBA2, 0x9FBDEF70,
    0x6B7C9800, 0x3C7647AD, 0xF7587DDD, 0xEA97DCF5, 0xC67FD5BF, 0x758AB92A, 0x93F7BDEE,
    0x3E774F1D, 0x2AD6F935, 0xD6B00023, 0xCEEE892A, 0xF7BDC1E7, 0xF260027E, 0xD91EB5AD,
    0x21F774F1, 0xFDF72006, 0xBFB1897F, 0x5678C12F, 0x7BDEE327, 0x01EEC87F, 0x0007AD62,
    0x00000000, 0x31EB5880, 0x1EECCAD7, 0x23017BB2, 0x7BBEDF11, 0xFDBEFE41, 0x833D7A20,
    0x3FBDEF71, 0xB100F764, 0x000003D6, 0x40000000, 0x6B98F5AC, 0xD90F7665, 0xEFB3A8BD,
    0x9FDE8C42, 0xACF4D624, 0xF7BDEE34, 0x201EEC87, 0x00007AD6, 0x00000000, 0x731EB588,
    0x21EECCAD, 0x5F7597BB, 0xFEA97DCF, 0xAC67FD5B, 0x7B8CAB92, 0xBB21FDEF, 0x1EB58807,
    0x00000000, 0xAD620000, 0xB32B5CC7, 0xC5EEC87B, 0x0F9EF7BD, 0x79E2BDDD, 0x4A756B58,
    0x26F7B9EF, 0x07766339, 0x01AD778B, 0x00000000, 0xEB7C5800, 0x9E2B994D, 0xEA3CF19E,
    0x1FBDEF7F, 0x1FEEEEBE, 0x2B5AD6B5, 0x7BDEF73C, 0x2BDD07CF, 0x9D5AC29E, 0x00000006,
    0x00000000, 0xEE400C40, 0x6312FFFB, 0xF1825F7F, 0xE7BC4EAC, 0x353E7BDE, 0xCCF2F663,
    0x8FD5DF21, 0x0200300B, 0x8C004000, 0x8FD5DF21, 0x2F663353, 0x224602CF, 0x82F77DBE,
    0x41FB7DFC, 0xDE067AF4, 0x9F3DEF73, 0x797B319A, 0xEAEF90E6, 0x001805C7, 0x00200001,
    0xEAEF90C6, 0xB319A9C7, 0x67516797, 0xBD1885DF, 0xE9AC493F, 0xEE7BC959, 0x3353E7BD,
    0x1CCF2F66, 0xB8FD5DF2, 0x00200300, 0x18C00400, 0x38FD5DF2, 0xF2F66335, 0xF7BFF52C,
    0x775F0FDE, 0x6B5A8FF7, 0xE7BC15AD, 0x353E7BDE, 0xCCF2F663, 0x8FD5DF21, 0x0200300B,
    0x8C004000, 0x8FD5DF21, 0x2F663353, 0xEBEEB2CF, 0x7FD52FB9, 0x558CFFAB, 0xB9EF1572,
    0xCD4F9EF7, 0x733CBD98, 0xE3F577C8, 0x00800C02, 0x63001000, 0xE3F577C8, 0xCBD98CD4,
    0xC0F5A8B3, 0xF7BC0FBF, 0x5AD6B3C7, 0xEEEE9E6B, 0xBDEEFDFE, 0xF5A9FEF7, 0x400FBFC0,
    0x4BFA04AC, 0xCEF7B9EF, 0xA7663350, 0x9F7C86B1, 0x1BF0FE11, 0x0FD7204B, 0xC6098DF8,
    0xA63101FA, 0xFAB98394, 0x5EA86A71, 0x77C6359E, 0x311F3DEF, 0xFFEFB900, 0x7DFD8C4B,
    0x3AB3C609, 0xFFC5EE79, 0x0000002E, 0x00000000, 0x6B5DE2C0, 0x77662B90, 0x7C448C00,
    0xF905EEFB, 0xE883F6FB, 0x7B9E0CF5, 0x000BBFF1, 0x00000000, 0x78B00000, 0x8AE41AD7,
    0x67501DD9, 0xBD1885DF, 0xE9AC493F, 0x17B9E959, 0x0000BBFF, 0x00000000, 0x778B0000,
    0x98AE41AD, 0x5F7581DD, 0xFEA97DCF, 0xAC67FD5B, 0xF73CAB92, 0x00177FE2, 0x00000000,
    0xF1600000, 0x15C835AE, 0x46003BB3, 0xF77DBE22, 0xFB7DFC82, 0x067AF441, 0xEF23FDEF,
    0xF1E0E4FE, 0x5B63F48D, 0xC2AA251E, 0xCFE5C8CF, 0x163FCF48, 0x09E7BF3E, 0xC81C463C,
    0x54FC0A21, 0x3302EB80, 0x0144F01E, 0xFF7581C7, 0xE4000000, 0x887CF7BD, 0x1879E9EE,
    0x3F8FBD6B, 0x00000040, 0x6B182000, 0x744FE3F5, 0xDE43CF2F, 0x0007CF7B, 0x7DD60000,
    0xFAA5F73D, 0xB19FF56F, 0xDEF2AE4A, 0x4FEEF23F, 0x48DF1E0E, 0x51E5B63F, 0x8CFC2AA2,
    0xF48CFE5C, 0xF3E163FC, 0x63C09E7B, 0xA21C81C4, 0xB8054FC0, 0x01E3302E, 0x1C70144F,
    0x00000000
EW_END_OF_FONT_RES( ApplicationNumbersM )

/* Table with links to derived variants of the font resource : 'Application::NumbersM' */
EW_RES_WITHOUT_VARIANTS( ApplicationNumbersM )

/* Font resource : 'Application::NumbersP' */
EW_DEFINE_FONT_RES( ApplicationNumbersP, 13, 3, 0, 16, 0x0016, 0x00BE )
  EW_GLYPH( 0x0016, 0, -13, 8, 16, 8, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 8, 0x0000018E ),                /* ' ' */
  EW_GLYPH( 0x0021, 2, -11, 4, 11, 8, 0x0000018E ),             /* '!' */
  EW_GLYPH( 0x0022, 1, -12, 6, 4, 8, 0x000001F5 ),              /* '"' */
  EW_GLYPH( 0x0023, 0, -11, 7, 11, 8, 0x00000227 ),             /* '#' */
  EW_GLYPH( 0x0024, 0, -11, 8, 11, 8, 0x0000030F ),             /* '$' */
  EW_GLYPH( 0x0025, 0, -11, 8, 11, 8, 0x00000485 ),             /* '%' */
  EW_GLYPH( 0x0026, 0, -11, 8, 11, 8, 0x000005C0 ),             /* '&' */
  EW_GLYPH( 0x0027, 3, -12, 2, 4, 8, 0x00000703 ),              /* ''' */
  EW_GLYPH( 0x0028, 1, -12, 6, 15, 8, 0x00000717 ),             /* '(' */
  EW_GLYPH( 0x0029, 1, -12, 6, 15, 8, 0x000007D9 ),             /* ')' */
  EW_GLYPH( 0x002A, 1, -12, 6, 7, 8, 0x000008A0 ),              /* '*' */
  EW_GLYPH( 0x002B, 1, -9, 6, 6, 8, 0x00000948 ),               /* '+' */
  EW_GLYPH( 0x002C, 2, -1, 4, 4, 8, 0x000009D0 ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -7, 8, 3, 8, 0x000009FC ),               /* '-' */
  EW_GLYPH( 0x002E, 2, -2, 4, 2, 8, 0x00000A66 ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -11, 8, 11, 8, 0x00000A8B ),             /* '/' */
  EW_GLYPH( 0x0030, 0, -11, 8, 11, 8, 0x00000B61 ),             /* '0' */
  EW_GLYPH( 0x0031, 0, -11, 8, 11, 8, 0x00000C7A ),             /* '1' */
  EW_GLYPH( 0x0032, 0, -11, 8, 11, 8, 0x00000D2B ),             /* '2' */
  EW_GLYPH( 0x0033, 0, -11, 8, 11, 8, 0x00000E72 ),             /* '3' */
  EW_GLYPH( 0x0034, 0, -11, 8, 11, 8, 0x00000FBB ),             /* '4' */
  EW_GLYPH( 0x0035, 0, -11, 8, 11, 8, 0x000010C5 ),             /* '5' */
  EW_GLYPH( 0x0036, 0, -11, 8, 11, 8, 0x0000120C ),             /* '6' */
  EW_GLYPH( 0x0037, 0, -11, 8, 11, 8, 0x00001339 ),             /* '7' */
  EW_GLYPH( 0x0038, 0, -11, 8, 11, 8, 0x0000144F ),             /* '8' */
  EW_GLYPH( 0x0039, 0, -11, 8, 11, 8, 0x000015AB ),             /* '9' */
  EW_GLYPH( 0x003A, 2, -7, 4, 7, 8, 0x000016EC ),               /* ':' */
  EW_GLYPH( 0x003B, 2, -7, 4, 10, 8, 0x00001751 ),              /* ';' */
  EW_GLYPH( 0x003C, 1, -11, 6, 10, 8, 0x000017C1 ),             /* '<' */
  EW_GLYPH( 0x003D, 1, -9, 6, 6, 8, 0x0000187B ),               /* '=' */
  EW_GLYPH( 0x003E, 1, -11, 6, 10, 8, 0x0000192B ),             /* '>' */
  EW_GLYPH( 0x003F, 0, -11, 8, 11, 8, 0x000019ED ),             /* '?' */
  EW_GLYPH( 0x0040, 0, -9, 8, 12, 8, 0x00001B09 ),              /* '@' */
  EW_GLYPH( 0x0041, 0, -11, 8, 11, 8, 0x00001C77 ),             /* 'A' */
  EW_GLYPH( 0x0042, 0, -11, 8, 11, 8, 0x00001D99 ),             /* 'B' */
  EW_GLYPH( 0x0043, 0, -11, 8, 11, 8, 0x00001EC4 ),             /* 'C' */
  EW_GLYPH( 0x0044, 0, -11, 8, 11, 8, 0x00001FB2 ),             /* 'D' */
  EW_GLYPH( 0x0045, 0, -11, 8, 11, 8, 0x00002083 ),             /* 'E' */
  EW_GLYPH( 0x0046, 0, -11, 8, 11, 8, 0x0000219F ),             /* 'F' */
  EW_GLYPH( 0x0047, 0, -11, 8, 11, 8, 0x0000228C ),             /* 'G' */
  EW_GLYPH( 0x0048, 0, -11, 8, 11, 8, 0x000023A5 ),             /* 'H' */
  EW_GLYPH( 0x0049, 0, -11, 8, 11, 8, 0x0000245A ),             /* 'I' */
  EW_GLYPH( 0x004A, 0, -11, 8, 11, 8, 0x0000253A ),             /* 'J' */
  EW_GLYPH( 0x004B, 0, -11, 8, 11, 8, 0x0000260E ),             /* 'K' */
  EW_GLYPH( 0x004C, 0, -11, 8, 11, 8, 0x000026FE ),             /* 'L' */
  EW_GLYPH( 0x004D, 0, -11, 8, 11, 8, 0x00002798 ),             /* 'M' */
  EW_GLYPH( 0x004E, 0, -11, 8, 11, 8, 0x0000288D ),             /* 'N' */
  EW_GLYPH( 0x004F, 0, -11, 8, 11, 8, 0x00002957 ),             /* 'O' */
  EW_GLYPH( 0x0050, 0, -11, 8, 11, 8, 0x00002A52 ),             /* 'P' */
  EW_GLYPH( 0x0051, 0, -11, 8, 13, 8, 0x00002B41 ),             /* 'Q' */
  EW_GLYPH( 0x0052, 0, -11, 8, 11, 8, 0x00002C63 ),             /* 'R' */
  EW_GLYPH( 0x0053, 0, -11, 8, 11, 8, 0x00002D62 ),             /* 'S' */
  EW_GLYPH( 0x0054, 0, -11, 8, 11, 8, 0x00002EB0 ),             /* 'T' */
  EW_GLYPH( 0x0055, 0, -11, 8, 11, 8, 0x00002F5C ),             /* 'U' */
  EW_GLYPH( 0x0056, 0, -11, 8, 11, 8, 0x0000300B ),             /* 'V' */
  EW_GLYPH( 0x0057, 0, -11, 8, 11, 8, 0x00003120 ),             /* 'W' */
  EW_GLYPH( 0x0058, 0, -11, 8, 11, 8, 0x0000324A ),             /* 'X' */
  EW_GLYPH( 0x0059, 0, -11, 8, 11, 8, 0x00003381 ),             /* 'Y' */
  EW_GLYPH( 0x005A, 0, -11, 8, 11, 8, 0x00003466 ),             /* 'Z' */
  EW_GLYPH( 0x005B, 1, -12, 6, 15, 8, 0x000035A5 ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -11, 8, 11, 8, 0x00003659 ),             /* '\' */
  EW_GLYPH( 0x005D, 1, -12, 6, 15, 8, 0x00003734 ),             /* ']' */
  EW_GLYPH( 0x005E, 0, -12, 8, 6, 8, 0x000037E8 ),              /* '^' */
  EW_GLYPH( 0x005F, 0, 1, 8, 2, 8, 0x00003875 ),                /* '_' */
  EW_GLYPH( 0x0060, 1, -12, 5, 3, 8, 0x000038D5 ),              /* '`' */
  EW_GLYPH( 0x0061, 0, -9, 8, 9, 8, 0x00003913 ),               /* 'a' */
  EW_GLYPH( 0x0062, 0, -12, 8, 12, 8, 0x00003A18 ),             /* 'b' */
  EW_GLYPH( 0x0063, 0, -9, 8, 9, 8, 0x00003AF0 ),               /* 'c' */
  EW_GLYPH( 0x0064, 0, -12, 8, 12, 8, 0x00003BD5 ),             /* 'd' */
  EW_GLYPH( 0x0065, 0, -9, 8, 9, 8, 0x00003CB3 ),               /* 'e' */
  EW_GLYPH( 0x0066, 0, -12, 8, 12, 8, 0x00003DD4 ),             /* 'f' */
  EW_GLYPH( 0x0067, 0, -9, 8, 12, 8, 0x00003EBF ),              /* 'g' */
  EW_GLYPH( 0x0068, 0, -12, 8, 12, 8, 0x00003FDE ),             /* 'h' */
  EW_GLYPH( 0x0069, 0, -12, 8, 12, 8, 0x0000408B ),             /* 'i' */
  EW_GLYPH( 0x006A, 1, -12, 6, 15, 8, 0x0000417C ),             /* 'j' */
  EW_GLYPH( 0x006B, 0, -12, 8, 12, 8, 0x00004265 ),             /* 'k' */
  EW_GLYPH( 0x006C, 0, -12, 8, 12, 8, 0x00004355 ),             /* 'l' */
  EW_GLYPH( 0x006D, 0, -9, 8, 9, 8, 0x00004418 ),               /* 'm' */
  EW_GLYPH( 0x006E, 0, -9, 8, 9, 8, 0x000044AC ),               /* 'n' */
  EW_GLYPH( 0x006F, 0, -9, 8, 9, 8, 0x0000453F ),               /* 'o' */
  EW_GLYPH( 0x0070, 0, -9, 8, 12, 8, 0x0000462C ),              /* 'p' */
  EW_GLYPH( 0x0071, 0, -9, 8, 12, 8, 0x00004724 ),              /* 'q' */
  EW_GLYPH( 0x0072, 0, -9, 8, 9, 8, 0x00004810 ),               /* 'r' */
  EW_GLYPH( 0x0073, 0, -9, 8, 9, 8, 0x000048AE ),               /* 's' */
  EW_GLYPH( 0x0074, 0, -11, 8, 11, 8, 0x000049F1 ),             /* 't' */
  EW_GLYPH( 0x0075, 0, -9, 8, 9, 8, 0x00004ACA ),               /* 'u' */
  EW_GLYPH( 0x0076, 0, -9, 8, 9, 8, 0x00004B5E ),               /* 'v' */
  EW_GLYPH( 0x0077, 0, -9, 8, 9, 8, 0x00004C3F ),               /* 'w' */
  EW_GLYPH( 0x0078, 0, -9, 8, 9, 8, 0x00004D36 ),               /* 'x' */
  EW_GLYPH( 0x0079, 0, -9, 8, 12, 8, 0x00004E3E ),              /* 'y' */
  EW_GLYPH( 0x007A, 0, -9, 8, 9, 8, 0x00004F6F ),               /* 'z' */
  EW_GLYPH( 0x007B, 1, -12, 6, 15, 8, 0x0000507D ),             /* '{' */
  EW_GLYPH( 0x007C, 3, -12, 2, 15, 8, 0x0000516D ),             /* '|' */
  EW_GLYPH( 0x007D, 1, -12, 6, 15, 8, 0x00005196 ),             /* '}' */
  EW_GLYPH( 0x007E, 1, -8, 6, 4, 8, 0x0000527F ),               /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 8, 0x000052F4 ),
  EW_GLYPH( 0x00A1, 2, -9, 4, 12, 8, 0x000052F4 ),
  EW_GLYPH( 0x00A2, 1, -11, 6, 11, 8, 0x0000535F ),
  EW_GLYPH( 0x00A3, 0, -11, 8, 11, 8, 0x0000542E ),
  EW_GLYPH( 0x00A5, 0, -11, 8, 11, 8, 0x00005540 ),
  EW_GLYPH( 0x00A6, 3, -12, 2, 16, 8, 0x00005666 ),
  EW_GLYPH( 0x00A7, 0, -11, 8, 14, 8, 0x000056AA ),
  EW_GLYPH( 0x00A8, 1, -11, 6, 2, 8, 0x00005869 ),
  EW_GLYPH( 0x00A9, 0, -12, 8, 12, 8, 0x000058A7 ),
  EW_GLYPH( 0x00AA, 1, -11, 6, 7, 8, 0x00005A48 ),
  EW_GLYPH( 0x00AB, 1, -8, 6, 6, 8, 0x00005AE4 ),
  EW_GLYPH( 0x00AC, 1, -8, 6, 5, 8, 0x00005B78 ),
  EW_GLYPH( 0x00AD, 0, -7, 8, 3, 8, 0x00005BEE ),
  EW_GLYPH( 0x00AE, 0, -12, 8, 10, 8, 0x00005C58 ),
  EW_GLYPH( 0x00AF, 1, -11, 6, 2, 8, 0x00005DAD ),
  EW_GLYPH( 0x00B0, 1, -12, 6, 8, 8, 0x00005DF3 ),
  EW_GLYPH( 0x00B1, 1, -9, 6, 9, 8, 0x00005EA5 ),
  EW_GLYPH( 0x00B2, 2, -11, 4, 7, 8, 0x00005F84 ),
  EW_GLYPH( 0x00B3, 2, -11, 4, 7, 8, 0x0000600D ),
  EW_GLYPH( 0x00B4, 2, -12, 5, 3, 8, 0x00006099 ),
  EW_GLYPH( 0x00B6, 0, -11, 8, 14, 8, 0x000060D1 ),
  EW_GLYPH( 0x00B7, 2, -7, 4, 3, 8, 0x00006195 ),
  EW_GLYPH( 0x00B8, 3, 0, 2, 3, 8, 0x000061C5 ),
  EW_GLYPH( 0x00B9, 2, -11, 4, 7, 8, 0x000061E1 ),
  EW_GLYPH( 0x00BA, 1, -11, 6, 7, 8, 0x00006242 ),
  EW_GLYPH( 0x00BB, 1, -8, 6, 6, 8, 0x000062E4 ),
  EW_GLYPH( 0x00BC, 0, -11, 8, 11, 8, 0x00006386 ),
  EW_GLYPH( 0x00BD, 0, -11, 8, 11, 8, 0x000064BB ),
  EW_GLYPH( 0x00BE, 0, -11, 8, 11, 8, 0x00006603 ),
  EW_GLYPH( 0x00BF, 0, -9, 8, 12, 8, 0x0000676B ),
  EW_GLYPH( 0x00C0, 0, -13, 8, 13, 8, 0x00006896 ),
  EW_GLYPH( 0x00C1, 0, -13, 8, 13, 8, 0x000069EB ),
  EW_GLYPH( 0x00C2, 0, -12, 8, 12, 8, 0x00006B46 ),
  EW_GLYPH( 0x00C3, 0, -13, 8, 13, 8, 0x00006C82 ),
  EW_GLYPH( 0x00C4, 0, -12, 8, 12, 8, 0x00006DE4 ),
  EW_GLYPH( 0x00C5, 0, -12, 8, 12, 8, 0x00006F31 ),
  EW_GLYPH( 0x00C6, 0, -11, 8, 11, 8, 0x00007061 ),
  EW_GLYPH( 0x00C7, 0, -11, 8, 14, 8, 0x0000717F ),
  EW_GLYPH( 0x00C8, 0, -13, 8, 13, 8, 0x000072A7 ),
  EW_GLYPH( 0x00C9, 0, -13, 8, 13, 8, 0x000073F8 ),
  EW_GLYPH( 0x00CA, 0, -12, 8, 12, 8, 0x00007550 ),
  EW_GLYPH( 0x00CB, 0, -12, 8, 12, 8, 0x00007693 ),
  EW_GLYPH( 0x00CC, 0, -13, 8, 13, 8, 0x000077C7 ),
  EW_GLYPH( 0x00CD, 0, -13, 8, 13, 8, 0x000078DC ),
  EW_GLYPH( 0x00CE, 0, -12, 8, 12, 8, 0x000079F8 ),
  EW_GLYPH( 0x00CF, 0, -12, 8, 12, 8, 0x00007AF5 ),
  EW_GLYPH( 0x00D0, 0, -11, 8, 11, 8, 0x00007BED ),
  EW_GLYPH( 0x00D1, 0, -13, 8, 13, 8, 0x00007D04 ),
  EW_GLYPH( 0x00D2, 0, -13, 8, 13, 8, 0x00007E14 ),
  EW_GLYPH( 0x00D3, 0, -13, 8, 13, 8, 0x00007F48 ),
  EW_GLYPH( 0x00D4, 0, -12, 8, 12, 8, 0x0000807C ),
  EW_GLYPH( 0x00D5, 0, -13, 8, 13, 8, 0x0000819A ),
  EW_GLYPH( 0x00D6, 0, -12, 8, 12, 8, 0x000082D4 ),
  EW_GLYPH( 0x00D7, 1, -9, 6, 6, 8, 0x000083E6 ),
  EW_GLYPH( 0x00D8, 0, -12, 8, 13, 8, 0x0000848E ),
  EW_GLYPH( 0x00D9, 0, -13, 8, 13, 8, 0x000085DB ),
  EW_GLYPH( 0x00DA, 0, -13, 8, 13, 8, 0x000086C5 ),
  EW_GLYPH( 0x00DB, 0, -12, 8, 12, 8, 0x000087B4 ),
  EW_GLYPH( 0x00DC, 0, -12, 8, 12, 8, 0x00008892 ),
  EW_GLYPH( 0x00DD, 0, -13, 8, 13, 8, 0x0000896F ),
  EW_GLYPH( 0x00DE, 0, -11, 8, 11, 8, 0x00008A94 ),
  EW_GLYPH( 0x00DF, 0, -12, 8, 12, 8, 0x00008B91 ),
  EW_GLYPH( 0x00E0, 0, -13, 8, 13, 8, 0x00008CB2 ),
  EW_GLYPH( 0x00E1, 0, -13, 8, 13, 8, 0x00008E13 ),
  EW_GLYPH( 0x00E2, 0, -12, 8, 12, 8, 0x00008F72 ),
  EW_GLYPH( 0x00E3, 0, -12, 8, 12, 8, 0x000090D3 ),
  EW_GLYPH( 0x00E4, 0, -12, 8, 12, 8, 0x00009244 ),
  EW_GLYPH( 0x00E5, 0, -13, 8, 14, 8, 0x000093A5 ),
  EW_GLYPH( 0x00E6, 0, -9, 8, 9, 8, 0x00009505 ),
  EW_GLYPH( 0x00E7, 0, -9, 8, 12, 8, 0x0000963D ),
  EW_GLYPH( 0x00E8, 0, -13, 8, 13, 8, 0x0000975F ),
  EW_GLYPH( 0x00E9, 0, -13, 8, 13, 8, 0x000098DC ),
  EW_GLYPH( 0x00EA, 0, -12, 8, 12, 8, 0x00009A57 ),
  EW_GLYPH( 0x00EB, 0, -12, 8, 12, 8, 0x00009BD4 ),
  EW_GLYPH( 0x00EC, 0, -13, 8, 13, 8, 0x00009D51 ),
  EW_GLYPH( 0x00ED, 0, -13, 8, 13, 8, 0x00009E5A ),
  EW_GLYPH( 0x00EE, 0, -12, 8, 12, 8, 0x00009F61 ),
  EW_GLYPH( 0x00EF, 0, -12, 8, 12, 8, 0x0000A06A ),
  EW_GLYPH( 0x00F0, 0, -12, 8, 12, 8, 0x0000A173 ),
  EW_GLYPH( 0x00F1, 0, -12, 8, 12, 8, 0x0000A299 ),
  EW_GLYPH( 0x00F2, 0, -13, 8, 13, 8, 0x0000A39A ),
  EW_GLYPH( 0x00F3, 0, -13, 8, 13, 8, 0x0000A4E1 ),
  EW_GLYPH( 0x00F4, 0, -12, 8, 12, 8, 0x0000A626 ),
  EW_GLYPH( 0x00F5, 0, -12, 8, 12, 8, 0x0000A76D ),
  EW_GLYPH( 0x00F6, 0, -12, 8, 12, 8, 0x0000A8C2 ),
  EW_GLYPH( 0x00F7, 1, -10, 6, 8, 8, 0x0000AA09 ),
  EW_GLYPH( 0x00F8, 0, -11, 8, 12, 8, 0x0000AAB5 ),
  EW_GLYPH( 0x00F9, 0, -13, 8, 13, 8, 0x0000ABF8 ),
  EW_GLYPH( 0x00FA, 0, -13, 8, 13, 8, 0x0000ACE8 ),
  EW_GLYPH( 0x00FB, 0, -12, 8, 12, 8, 0x0000ADD6 ),
  EW_GLYPH( 0x00FC, 0, -12, 8, 12, 8, 0x0000AEC6 ),
  EW_GLYPH( 0x00FD, 0, -13, 8, 16, 8, 0x0000AFB6 ),
  EW_GLYPH( 0x00FE, 0, -12, 8, 15, 8, 0x0000B141 ),
  EW_GLYPH( 0x00FF, 0, -12, 8, 15, 8, 0x0000B254 ),

  EW_FONT_PIXEL( ApplicationNumbersP, 0x0000B3E1 )              /* ratio 76.21 % */
    0xFFFFFECF, 0x647B5DFF, 0xEEBF8E66, 0x739C15EE, 0xB39CC7F4, 0x2E900A9F, 0xFD989748,
    0xACFDF054, 0x03BB750F, 0x8C0D8123, 0xD8C0013D, 0x5555FE13, 0x37B8DF55, 0x60000000,
    0x3CF11BDC, 0xB9E2FBF2, 0x0003BACF, 0x0B88EE00, 0x7114CC20, 0xED89DB7C, 0x53C36CFD,
    0xC4533086, 0xB6276DF1, 0x4F0DB3F7, 0x9BE20019, 0xE79CF211, 0xFD17C73D, 0x1CC2DEF4,
    0xC6A38639, 0x9EF89E08, 0xBDC89CF7, 0x7258EE9F, 0x88AE9C8C, 0xE73C4A31, 0x57E7EF3C,
    0xFFBD3F7B, 0x715BDE63, 0x5AED4FB8, 0x1BD8EFF8, 0xD622AAF7, 0xDEF4111A, 0xB18C1FFF,
    0xC785DECF, 0x29E7F7EF, 0x3FFF6F60, 0xD9E7DD6A, 0xC8BBDCFA, 0x61EFDE35, 0x4C93E67A,
    0xAE422323, 0x1E739FFA, 0xAED37F33, 0x4463AA8A, 0xF01C2038, 0x4F7F9AC4, 0xDF1F7B46,
    0xF101FFFA, 0xD5FE1B9D, 0xF358E45F, 0x00000011, 0x20000000, 0x87AD6640, 0xC62FDEBB,
    0xEFC86F3D, 0x56789F5D, 0x00006055, 0x00000000, 0x56B3C400, 0x5D6F7E46, 0x1EC77818,
    0x73513AC6, 0x39EF193D, 0xDDFECC33, 0xAE6199E8, 0x225EFC9B, 0xEA73888C, 0xF1EF7B39,
    0x1AC633EC, 0xDEE30063, 0x24C48220, 0x38C22222, 0xC6739CE7, 0xBDEF7BD8, 0xFC8F3C47,
    0x077900BE, 0x3E4067E8, 0xC849FA0D, 0x093F41A7, 0x99E834F9, 0x7A07EA30, 0x07E78C25,
    0x59EF73AC, 0xA337E746, 0x833EF1F3, 0x8F02A815, 0x6035B83F, 0x0F7F05D4, 0xC3C19542,
    0xAC6B3E78, 0x5A765F98, 0xF3C0DEF7, 0x0000F901, 0x00000000, 0xD61E7C80, 0x78FBEB13,
    0xBDEEB4BF, 0xDF7CF267, 0xCF3E43AB, 0x8200F15C, 0x77CB2C88, 0x1C9F3FCE, 0x7F7BD8CF,
    0xC0631AA6, 0xE79FFC05, 0xFBE79279, 0xF73D6FBE, 0xFACA7BDE, 0x95E3AFBE, 0xCAACF3CF,
    0x3E440C00, 0x1FE73C91, 0x397FB513, 0xF1551883, 0xE79F2200, 0x7D6A2B99, 0xC0EAF7DF,
    0x0703EF73, 0x97C03518, 0x03F5883F, 0x04DF04D3, 0x86B8EE4F, 0xFBCB3BF4, 0xD4F7BDCC,
    0x238C6315, 0xEF7BDD63, 0xDF7CF17D, 0x3CFFE1F7, 0x088DC0CF, 0x369CE758, 0x5CBFDEF7,
    0x7A8C6319, 0x6690002C, 0x2B33CF3E, 0xDF7DF3C7, 0xF7BBE5EB, 0xF8CF50DE, 0xDF842FBE,
    0x23703CF3, 0x6739D602, 0xA35DEE63, 0x00A46338, 0xCF5082E0, 0xC67A88F3, 0xDEA78DF7,
    0xF7BDEF7B, 0xFBEFBEF9, 0x3CF19F22, 0x8E03C44F, 0x612AA20F, 0x317C1FC6, 0xE38172A1,
    0x301CA883, 0xDCEB03E3, 0xF1E8A67B, 0xEFA5A37D, 0xE0189E79, 0x7F23B192, 0xF3A9E231,
    0xF6AAA51F, 0xD8633C6F, 0x40267EA3, 0x33E79EF9, 0x37DF1CC7, 0xF7BBF0D6, 0xE353CF9E,
    0x4353C6FB, 0x70894F3D, 0x0C47FA41, 0x3CE73C56, 0x3F7BDDE4, 0x00C63188, 0x53CF3D40,
    0x5F7DFBC2, 0x38C2253E, 0x61DEC627, 0x23CF100C, 0x18442FBF, 0x3BD8C4E7, 0xDC60018C,
    0x9890441B, 0xF0B7C240, 0x7FABE2D5, 0x721ED6FA, 0x49B8EE41, 0xB126E3FC, 0x8ADF82E7,
    0xCEF88888, 0xBDDFA739, 0xCC8DFEF7, 0x739DF1CC, 0xEF7BBF4E, 0x3EB04BFD, 0xFF21F558,
    0xEBFC61F5, 0xF2198C43, 0xCEF23FC6, 0x61FCD61D, 0x7BDC60FD, 0x7DF929EF, 0xCF15EBDF,
    0x1327CCF3, 0x18AC8084, 0xC4C7F9D4, 0xCC6EDFCD, 0x097C06AF, 0xF7C40464, 0xEF7FE225,
    0xE358FFBD, 0x546FBEFB, 0x67A9E78C, 0x81E7FE20, 0x03C8139A, 0xCF501DE4, 0xF7B1137A,
    0xCC8C45DE, 0xCE73CA8C, 0xEFF8CF39, 0xE62EF7BD, 0xCCEC0FBD, 0x0735CC3F, 0x3078FF8C,
    0x31E489E4, 0xE58AE2D3, 0x0DBFE3CF, 0x1F3BD8C6, 0x46631CC3, 0xD6B4923E, 0xC29EF7BD,
    0xFC3EBDF3, 0x00C4F99F, 0x18CE46E0, 0x85CFF3AC, 0x82B97FB9, 0x0289EA33, 0xC7CCFFE0,
    0xD1DEF9E2, 0xF7BDCEA9, 0xFBFA3786, 0xEB1C88BE, 0x002C1E79, 0xC0000000, 0x3D639102,
    0xFD1BC3CF, 0xF73C5F7D, 0xEA267BDE, 0xCF90757B, 0x0200F15C, 0x00000000, 0x5733E410,
    0xEAF7D43C, 0x7BDEF718, 0xDF7C60EF, 0x79EB25F7, 0x1000279E, 0x1CE75011, 0x586F7B18,
    0x58000C63, 0xC13CF3CF, 0xCBEFBEF8, 0xEF7BDEE7, 0xFBEF8C1D, 0xCF3D64BE, 0x220004F3,
    0x139CEA02, 0xC0EF7B18, 0x0000631A, 0x7B9E6000, 0xEF688DEF, 0x51917DF7, 0xD31E79F3,
    0xF0111000, 0x6A06739C, 0x60C6203F, 0xE6A3201A, 0xBF7B4493, 0xF797DD62, 0x0000003E,
    0xCF01888C, 0x7B3C0F39, 0x18C6303F, 0x8C000000, 0x77BDEF7B, 0x7DF1F7E4, 0xF3C3CF19,
    0x00000004, 0x3C400000, 0xF913CF0F, 0xF25F7C7D, 0xB06F7BDC, 0x3E406FBE, 0x000002CF,
    0x2C000000, 0x359E79E2, 0xBEFBF232, 0x8BBAD78E, 0x7CE849FF, 0x058D6313, 0x63BC2E37,
    0x8CC1200E, 0x1ABEE127, 0x4C1278AC, 0xC678DE0D, 0x00005F73, 0x00000000, 0x3E400000,
    0xF504F3CF, 0xCF97DF7D, 0x87DDF8FD, 0x022903C9, 0x7CC41322, 0x26719E12, 0x9C073FE4,
    0x66640EB9, 0x60788AC2, 0x3FB9E264, 0x04A87DC6, 0xC03C407C, 0x1C5F02CA, 0x9C135590,
    0x80B2A0B8, 0x7D09802F, 0x58CB3DEE, 0xE7477BE3, 0x63E67BE3, 0x00095C05, 0x70100000,
    0xE67BE3E5, 0xBE358D63, 0xF73E7477, 0xEA267BDE, 0x99F2357B, 0x11800A2B, 0xE73C98F9,
    0xD9E49E3F, 0x63187F7B, 0x0000000C, 0x59EF73AC, 0x1DEF8F46, 0x99EF8F9D, 0x0170158F,
    0x08000000, 0x67BE3CB8, 0xE358D63E, 0x3EA7477B, 0xD505BF3F, 0xF7BDEE78, 0xEAF7D44C,
    0x22B99F20, 0x4F911801, 0x1FF39E0C, 0xA2FF678D, 0xE2AA3183, 0x00004301, 0xFBDEE758,
    0xBF78EF17, 0xCCF155EF, 0x305C29E7, 0x518232FD, 0xF34E7FE3, 0x95CBFBDB, 0x0594F18C,
    0xCCF3CF08, 0xFBEF8F15, 0xDEE31D5E, 0xF91DEF7B, 0xC65F7C7D, 0x013CF0F3, 0x00000000,
    0xB0000000, 0x0FBDE2EE, 0x00000000, 0xBA400000, 0xB99E7A60, 0xF7C6B1AC, 0x31775CEA,
    0x1CFE1CEF, 0xD2232655, 0x19879E48, 0xE6D83199, 0xF0E479B4, 0x067FDC30, 0xCC16B3C6,
    0x0F361B91, 0x2DFDC2FB, 0x7BE48841, 0xC91908D3, 0x539CD6B9, 0x4E41C8A4, 0xC2B7F4FF,
    0x61CA4F98, 0x91112C66, 0x90C99FE7, 0xB1FDD429, 0xD2A353EE, 0x57D78F97, 0x73E4F1F9,
    0x67CBE162, 0x0BE1B142, 0x2AAAB107, 0x4C4F7198, 0x3E2A78BE, 0x7CA89733, 0xEF797DD6,
    0x158A8A9C, 0x85646395, 0x89E1CAA3, 0x6B0B2FDF, 0x263E0F8C, 0x00000124, 0xBDEF73C0,
    0xFBEB3EF7, 0xE56237BE, 0x25623CF3, 0x3307E2FC, 0xC3474257, 0xC6F0198A, 0x10331D0B,
    0x279E7DD3, 0x7DF7F42B, 0x37BDEE2B, 0xF82FBE78, 0x00000F3F, 0x00000000, 0x3CFFE000,
    0xC62FBE78, 0x1F9E3049, 0x78C12BD0, 0x04AF407E, 0xBD01F9E3, 0x81A78C12, 0x6A8C127E,
    0xF7119FA0, 0x7DF11BDE, 0x0FE79E0F, 0x00000000, 0x78000000, 0x7DF13F9E, 0x05E8000F,
    0xF1037EAA, 0xAF82739E, 0xCE9F7F33, 0x79EB9987, 0x9E79E79E, 0xEFBEFBE7, 0xAC0FBEFB,
    0xF9F2B7FF, 0xEEB4CFFD, 0xF3C7F7BD, 0x92A8DF7D, 0xBF0D3555, 0xD543CE73, 0xE187EDF8,
    0x50006357, 0x6324F3F6, 0xCF15F7D6, 0x0000017D, 0xA8D3DEF3, 0xC92B1BEF, 0x000B29E7,
    0x7C800000, 0xF7D45966, 0x73DE958E, 0xA723BDEF, 0x0CBEFBF7, 0x279E7CCF, 0x60000026,
    0x9F33C202, 0xDE9C89E7, 0xFC12FBEF, 0xE00003EE, 0x3916F73D, 0x960DF7C7, 0x00059E7A,
    0x2C030000, 0x4E459F35, 0xDDF037EF, 0x9EA7EF7B, 0x2A7ABEFC, 0xC16CF3D4, 0x9CF03888,
    0xF678B333, 0x63183BDE, 0x79EA108C, 0xFC9EA19E, 0xEF83EFBE, 0x27A83BDE, 0xF5092FBF,
    0xCFDCF13C, 0x4DF58FBC, 0x6CF92DF5, 0x000024F9, 0x00000000, 0xDEF7B9DF, 0xFDE33C67,
    0x93E6A98A, 0x00000000, 0xA49E7A84, 0x857DF19E, 0xE13BDCEF, 0xE2996679, 0xC731DEFB,
    0x00002FBA, 0x3F7BDE60, 0x53E5F7D4, 0x0094F3E4, 0x00000000, 0x1BDC6000, 0x1017DF90,
    0xDEE783CF, 0x0FBEB17B, 0x0000F3E4, 0x7C800000, 0xD6279E1E, 0x897DF1F7, 0xBF717DDF,
    0x758CF50F, 0xF9EBBDEF, 0x279F22BE, 0x00000001, 0x599F2000, 0xACDEF9F2, 0x000BBDE7,
    0x1F9D4000, 0xDC3E37E4, 0xFE5604EB, 0x89E01006, 0xE6FFE037, 0x05A8D607, 0xB9E3BC4E,
    0xEFAC5EF7, 0x002CF905, 0x00000000, 0xCF900000, 0x7D6279E2, 0xEB97DF2F, 0x0FEF7BDE,
    0x0F53D473, 0x6091E57B, 0x00000001, 0x7BDCF000, 0xDF50FDEF, 0x9F20CF97, 0x00004CA7,
    0x80000000, 0xEF7BDDF8, 0xBEF8D567, 0xEFC73CF1, 0x00327E79, 0x97010000, 0x253CF7E3,
    0x1BEF8D57, 0xBDEEB3CF, 0xBE787CF7, 0xFFC53C77, 0x01012599, 0xFE080000, 0xE79253CF,
    0xF453C6FB, 0x0003E7BD, 0xDEF73DE0, 0xDE398CFB, 0x3E6A98AF, 0x00000009, 0x93CF54C0,
    0xAFBE398C, 0x277B9EF0, 0xDF6A0000, 0xF2F86F7B, 0x222FBEFD, 0x079E7CC6, 0x00000000,
    0xBDDF8000, 0x9ACDFEF7, 0xC2BDF7DF, 0x094F3CF7, 0xE2B0444F, 0x716CE73D, 0x4C6BDEF7,
    0x89F8C631, 0xF9E79E78, 0xF7DF7E64, 0xEE787ACD, 0x7EE7800B, 0x7D63BDE6, 0xE65F7D53,
    0x04F3E5B3, 0x00000000, 0xCAA81EA1, 0xF2FBAC2F, 0x000007DE, 0x00200000, 0xA49E79E9,
    0x457DF19E, 0xBDBAC9DF, 0x165DB66D, 0x1CCA944F, 0xC7ADB0F1, 0x18ADECA6, 0xA818ACF1,
    0x97360B91, 0x37F7117D, 0xF8D32905, 0x9E2B9C7D, 0x227A44B5, 0xC47B4E53, 0xA7CD5336,
    0x08CC8864, 0xBCD239D2, 0x1CCFBACD, 0xC7ADF333, 0x632F6E8D, 0xF89BCF3E, 0xC686F098,
    0xC1CD5678, 0x736B5F8D, 0xCF551CAC, 0xEFB89B7B, 0x91BE58A7, 0x7873FD23, 0xFC3CF13C,
    0x8C7E2AFC, 0xF818EF1C, 0x3C3C1F8C, 0x46123190, 0x8267C0FC, 0xEF718155, 0x7E46F7BD,
    0xC46537DF, 0x868F3CF3, 0xBC41EA35, 0x4CC742F1, 0xD70D998C, 0x18C79E7A, 0x82FBEF9E,
    0x7ECBCEF8, 0xECE467E6, 0x78000381, 0x3177460C, 0xA2A077DE, 0x8C5C0000, 0xBFE0D678,
    0x02F7EFDE, 0x7BC00000, 0xCF9BE0BE, 0x0235D19F, 0x5B600009, 0x6A0F5678, 0x0B1FE0F6,
    0xAD630000, 0x175BDF0C, 0xF7BAC411, 0xFFEFDF99, 0x8EFFEF7D, 0xC229EFFA, 0xDEC62738,
    0xDEE30C61, 0x00000000, 0xD9C42FC6, 0x1E8A9E75, 0x0235A8BB, 0xB0A60000, 0xE4F3ABE2,
    0x592EC6FE, 0xBFF1846B, 0x9CE8FEF7, 0xDE9977DF, 0x445229E7, 0x84E738B0, 0x043BDEC9,
    0x00000C63, 0x93CF3CF0, 0x5BEFBEF8, 0x777CBEEB, 0x198A8B4E, 0x7162A315, 0x278FB6FC,
    0x3581C9EA, 0x133F83F2, 0xF0F38FCF, 0xB3C3CE6C, 0xB1F50F39, 0xC007FFCB, 0x7FFC07FF,
    0xDEE79800, 0x7DF1E8BB, 0x9EA223DF, 0x191149E7, 0xCE759811, 0x77B1CC99, 0x633C44FE,
    0x46444654, 0x9D66113C, 0xF7BD2633, 0x8C6307CE, 0xF11110CA, 0x9CE7D844, 0xEF7B3931,
    0x711BDEDD, 0xF88BEFDF, 0xBBDF733E, 0xDF3EF91F, 0xD6A2FCFB, 0x5577CCFB, 0xB1DCE7EC,
    0xBEA79DC7, 0xFBC3119C, 0x54310004, 0x67DDCEE0, 0xF6BD88CC, 0x7AD47B1E, 0xCAAEF3E7,
    0xE7DEF9F7, 0xFEF77E17, 0x4B3AFDC3, 0xFA33CD7F, 0xB1587A85, 0xDEF7B937, 0x1DFA64C5,
    0xF7FBF3BF, 0x1AE3DFEF, 0xF1D7C757, 0x117F57EA, 0x9CE71111, 0x7BDEF673, 0x718C634F,
    0x88889640, 0x739CE308, 0xEF6319CE, 0xAC1EF7BD, 0xEF585FF3, 0xAFC9BE7C, 0xF53EFAD6,
    0x6F9D778D, 0xFF5DE3C4, 0xDEBE5A67, 0x8AAAEA33, 0x311844F3, 0xFFF2FC32, 0xEDF8978F,
    0xEF7FE3FD, 0xFBF7FFBD, 0xFFCDEFBE, 0x7CA8FFBD, 0x39C8ACDF, 0x99180025, 0x8FFFE2A2,
    0xDEF7FC67, 0x844BDF83, 0x3D4E7111, 0x9E3DEF67, 0x6358C67D, 0xCBDF800C, 0x53CF3CF3,
    0xDF7DF7DF, 0xDF53DEFB, 0x7338F6B7, 0x39E333BB, 0xDFDF4FB7, 0x53DC73DE, 0x7D7FADF9,
    0xADF5ECF3, 0x4EF857FC, 0x40FF7BBF, 0x567FF7F6, 0xBDF4BBFC, 0x8B95DEF7, 0x5FF0A5E7,
    0xAA006004, 0x180DBF00, 0x00000000, 0x84400000, 0xBD8C4E71, 0xB0CBFFE3, 0x21F25DC7,
    0x3D7B80FE, 0x7BDA8D6B, 0x7FDEFFE4, 0x8B2BD93E, 0xE7800AF9, 0xF3F7E511, 0xFFDEFF8C,
    0xCF9C58B1, 0xF7FFBCF9, 0xC7FEBFFD, 0xEBFEFCFF, 0xB9775FF7, 0xDF037BCB, 0x18C312F8,
    0x27A42DD0, 0xDBC797D3, 0xFE7FEEFC, 0xF5BE06F2, 0x1F2BF40D, 0xD1799EB2, 0x239ADCED,
    0x7CE6FF4A, 0x5F1BE06F, 0xBA031862, 0x6A64F485, 0xFBC2FDED, 0x9F67ADFF, 0x7BBDF887,
    0xD8D7DE6D, 0x77EA78E4, 0x79FEDD3F, 0xDF9830D6, 0xFC19EF7D, 0xA955F7C6, 0x8F3CE31C,
    0x9AAFF16E, 0x33EFD0BF, 0xCF7BC5BE, 0xB22E7BFF, 0x75F81DE6, 0x9AC8C58C, 0x7E9DBA1F,
    0xFEF0E556, 0xF00882C6, 0x7B50139C, 0x602AC407, 0xB7F220FC, 0x1C7FCEB0, 0xFFDF8DE2,
    0x82556321, 0x7CD44601, 0xBCFC279E, 0xF9A5F7DF, 0xCC9E0575, 0x0CF38C2E, 0x30FF33B0,
    0xFE301CD7, 0x2790C1E3, 0x8B4CC792, 0x8F3F962B, 0x631836FF, 0x730C7CEF, 0x48F9198C,
    0xFE9E22D2, 0x639BD615, 0x89FE78C2, 0xB987F99D, 0x1FF180E6, 0x913C860F, 0x5C5A663C,
    0xFC79FCB1, 0x7B18C1B7, 0x639863E7, 0x9247C8CC, 0xFFFFDF16, 0x0C94C862, 0x6B989199,
    0xF1FF180E, 0xC913C860, 0x15C5A663, 0x7FC79FCB, 0x77B18C1B, 0xC639863E, 0x69247C8C,
    0x837BF909, 0x0DEF9DF8, 0xF81E71EC, 0xAE61FE67, 0xC7FC6039, 0x244F2183, 0x5716998F,
    0xFF1E7F2C, 0xDEC6306D, 0x18E618F9, 0xA491F233, 0xF711BDE5, 0x99CE7BE5, 0x0C66431F,
    0x8C0735CC, 0xE43078FF, 0xD331E489, 0xCFE58AE2, 0xC60DBFE3, 0xC31F3BD8, 0x3E46631C,
    0xF7D8B492, 0x21FC507E, 0x35CC2F33, 0x78FF8C07, 0xE489E430, 0x8AE2D331, 0xBFE3CFE5,
    0x3BD8C60D, 0x631CC31F, 0xB4923E46, 0x7BDEF7BC, 0xF78F9197, 0x5BFCC47B, 0x4C809A4F,
    0x9D718432, 0xBB2CF0D7, 0xDA613985, 0x27AC0607, 0x1EFDE08F, 0x37BDEE75, 0xF7DFD1BC,
    0xCF58E445, 0x000160F3, 0x16000000, 0x79EB1C88, 0xEFE8DE1E, 0xAC9D42FB, 0x8019037B,
    0x0AEBF30D, 0x8C5D993C, 0xDDF19EBD, 0xEFBEF8C1, 0x3CF3D64B, 0x2220004F, 0x3039CEA0,
    0xC6B0DEF6, 0x9EB00018, 0xF18279E7, 0xC497DF7D, 0x7AC2BFD3, 0xBEE34C73, 0xC1FF59E3,
    0x4BEFBEF8, 0x4F3CF3D6, 0xA0222000, 0xF63039CE, 0x18C6B0DE, 0xE79EB000, 0x7DF18279,
    0x7BF297DF, 0xFF8D37DF, 0x0FFCE733, 0x5F7DF7C6, 0x79E79EB2, 0x01110002, 0xB181CE75,
    0xC63586F7, 0x3CF58000, 0xEF8C13CF, 0xDEF4BEFB, 0xD31AFB88, 0x7C60E639, 0xEB25F7DF,
    0x00279E79, 0xE7501110, 0x6F7B181C, 0x000C6358, 0x3CF3CF58, 0xEFBEF8C1, 0x0AEBF34B,
    0x8C5D993C, 0xDDF19EBD, 0xF7C7DF91, 0xCF0F3C65, 0x00000013, 0xF1000000, 0xE44F3C3C,
    0x497DF1F7, 0xAC2BFD3C, 0xEE34C737, 0x1FF59E3B, 0x5F7C7DF9, 0x3CF0F3C6, 0x00000001,
    0xCF100000, 0x7E44F3C3, 0x7C97DF1F, 0xB8CBFFFF, 0x23BCE64F, 0xCBEF8FBF, 0x279E1E78,
    0x00000000, 0x79E20000, 0xEFC89E78, 0x7BD2FBE3, 0x4C6BEE23, 0xBF2398E7, 0x78CBEF8F,
    0x00279E1E, 0x00000000, 0x7879E200, 0xE3EFC89E, 0x7BDC72FB, 0xDF1859EF, 0xCF593A37,
    0x2C4029F3, 0xD3AAF022, 0x87FB19F8, 0x40091AC7, 0xF3E79EB0, 0xAC6FBE30, 0x0DEFE421,
    0x37BE77E2, 0x63FE773C, 0x801C87DC, 0x5807880F, 0x038BE059, 0x13826AB2, 0xF0165417,
    0x7E613005, 0xB327815D, 0x8CF9BF0B, 0xF8D632DF, 0xF8F9D1DE, 0x0158F99E, 0x00000257,
    0xF95C0400, 0x58F99EF8, 0x1DEF8D63, 0xBFD3C49D, 0x4C737AC2, 0x1F33C7BA, 0x1DEF8D63,
    0x99EF8F9D, 0x2570158F, 0x40000000, 0xEF8F95C0, 0xD6358F99, 0x29D1DEF8, 0x937DF7BF,
    0x8F5CE6AF, 0x8EFBC6B1, 0xE737C7CE, 0x095C0563, 0x10000000, 0x7BE3E570, 0x358D63E6,
    0x0A7477BE, 0xF8837BF9, 0xFA0DEF9D, 0x632CE719, 0x9D1DEF8D, 0x8F99EF8F, 0x00257015,
    0xC0400000, 0x99EF8F95, 0xF8D6358F, 0xBDE9D1DE, 0x9D25F711, 0xDF951863, 0xBE3E4F9B,
    0xC0563E67, 0x00000095, 0x3E570100, 0xD63E67BE, 0x477BE358, 0xE46F3467, 0xE395BEFC,
    0xB0FF9E7B, 0xF7EB1943, 0x67BF18F6, 0xBDF006FE, 0xD4F7B9D6, 0x4FDE3D97, 0x78B99E58,
    0x90217EB8, 0x36AFC0AB, 0xA78357FC, 0x12C46812, 0xBC1E7CF5, 0xF7E358DF, 0x334F7B9C,
    0x93C0AEBF, 0xF7DAC5D9, 0x003EFBDB, 0x00000000, 0x82E90000, 0xB2E679E9, 0xABDF1AC6,
    0x57FA7893, 0x698E6F58, 0xFC5FD8DD, 0x0000001F, 0x80000000, 0x3CF4C174, 0x8D635973,
    0xF7C9D5EF, 0x6BACBFFF, 0xFF0FBCDF, 0x000004C8, 0x20000000, 0xCF3D305D, 0xE358D65C,
    0x6F7A757B, 0xF9AD7DC4, 0xF87CD444, 0x00000093, 0xA4000000, 0x99E7A60B, 0x7C6B1ACB,
    0xE9E24EAF, 0x39BD615F, 0xFEEF75A6, 0xA2A73FE2, 0x18E54562, 0x72A8E159, 0xCBF7E278,
    0x83E31AC2, 0x0049098F, 0xDCF00000, 0xEF300017, 0x5EFA853D, 0x9599F22F, 0x10130C03,
    0xF0F2C88C, 0xE0CE7F9C, 0x18BF7BD9, 0x77E20C63, 0xAACB3DEF, 0xE15E7DF1, 0x03153CF7,
    0xC0C66200, 0xEC60A338, 0x4F8C24F1, 0x5FC02181, 0xC28CE6A2, 0xC008757D, 0xCC4DFB3C,
    0xD4408BEF, 0xEF7581EC, 0xEF9E3FBD, 0xAC9546FB, 0x9DF869AA, 0xC6AA1E73, 0xBF0C3F6F,
    0xB280031A, 0xB319279F, 0x6000AFBE, 0x583CFBBC, 0xEA857DF1, 0xF7BAC159, 0xF7CF1FDE,
    0x564AA37D, 0xCEFC34D5, 0xE3550F39, 0x5F861FB7, 0xD940018D, 0x598C93CF, 0xFDF057DF,
    0xDDC62FFF, 0x89E32777, 0xEF75927C, 0xEF9E3FBD, 0xAC9546FB, 0x9DF869AA, 0xC6AA1E73,
    0xBF0C3F6F, 0xB280031A, 0xB319279F, 0xE750AFBE, 0xBB8FE63F, 0xB7377ED6, 0x316FDFBF,
    0x7EFDFDCE, 0x8DF7DF3C, 0xD355592A, 0x3CE73BF0, 0x7EDF8D54, 0x06357E18, 0x4F3F6500,
    0x5F7D6632, 0xF711BDE1, 0xBE22FBE5, 0x0CF0F18F, 0xFEF7BDD6, 0x1BEFBE78, 0xA6AAB255,
    0x79CE77E1, 0xFDBF1AA8, 0x0C6AFC30, 0x9E7ECA00, 0xBEFACC64, 0x3BE01102, 0x56B583E7,
    0x75417B80, 0xFE64D627, 0x1BEFBE78, 0xA6AAB255, 0x79CE77E1, 0xFDBF1AA8, 0x0C6AFC30,
    0x9E7ECA00, 0xBEFACC64, 0xDCE7BDC2, 0x786FBE53, 0x639AA8F3, 0x539CF13E, 0x8DFC9D22,
    0xD567B53C, 0x8197BDCA, 0xACF5AC31, 0xC7789F31, 0xD2FDE237, 0x77BDEE7B, 0xDF7EF4E4,
    0xCF99E197, 0x0004C4F3, 0x78404C00, 0x913CF3E6, 0x5F7DFBD3, 0xBDD64F7A, 0x0D801903,
    0xBF679801, 0x117DF989, 0xF03D9A88, 0xA7EF7BDD, 0x7ABEFC9E, 0x6CF3D42A, 0xF03888C1,
    0x78B3339C, 0x183BDEF6, 0xEA108C63, 0x9EA19E79, 0x03EFBEFC, 0x79F778C0, 0x0AFBE2B0,
    0xEF82B3D5, 0xF53F7BDE, 0x53D5F7E4, 0x0B679EA1, 0xE781C446, 0xB3C5999C, 0x18C1DEF7,
    0xCF508463, 0xE4F50CF3, 0xBE1F7DF7, 0xB8C5FFFF, 0x3C64EEFB, 0xDDF24F91, 0x9EA7EF7B,
    0x2A7ABEFC, 0xC16CF3D4, 0x9CF03888, 0xF678B333, 0x63183BDE, 0x79EA108C, 0xFC9EA19E,
    0xBDE3EFBE, 0xFBE5F711, 0xF18FBE22, 0x7BBE0CF0, 0x93D4FDEF, 0x854F57DF, 0x182D9E7A,
    0x739E0711, 0xDECF1666, 0x8C63077B, 0xCF3D4211, 0xDF93D433, 0x60047DF7, 0xE626FD9E,
    0x6A2045F7, 0xF7B9E0F6, 0x03EFAC5E, 0x00003CF9, 0x9F200000, 0xF589E787, 0x025F7C7D,
    0x1E7DDE30, 0x42BEF8AC, 0xDCF0ACF5, 0xF7D62F7B, 0x001E7C81, 0x90000000, 0xC4F3C3CF,
    0x2FBE3EFA, 0x17FFFEF9, 0x93BBEEE3, 0xE93E44F1, 0xAC5EF7B9, 0x3CF903EF, 0x00000000,
    0xE7879F20, 0x7C7DF589, 0xC46F7A5F, 0x88BEF97D, 0x3C3C63EF, 0xBDEF73C3, 0xF207DF58,
    0x00000079, 0x0F3E4000, 0xFBEB13CF, 0xEE34BEF8, 0xBF23F7BD, 0xC4A7CBEF, 0xFC253CF3,
    0xAA93BDEE, 0x78457DF1, 0x0001279E, 0xF5080000, 0xC9EA253C, 0xD4A7CBEF, 0xE3F98FF9,
    0xCDDFB5AE, 0x5BF7EFED, 0xBFB9DF9E, 0xBEFA87DF, 0x3CF9067C, 0x00000265, 0x08000000,
    0x4DFB3CC0, 0x408BEFCC, 0xFC41ECD4, 0xB3F7BDEE, 0x78DF7C6A, 0x3CF7E39E, 0x0000193F,
    0xF1CB8080, 0xAB929E7B, 0x7A8DF7C6, 0x3EEF1800, 0x5F7C560F, 0x88567AA1, 0x7EF7BDDF,
    0x1BEF8D56, 0x9EFC73CF, 0x000327E7, 0x39701000, 0x7253CF7E, 0x51BEF8D5, 0xFFFFDF0F,
    0x777DDC62, 0x27C89E32, 0x7BDEEFC5, 0xF7C6AB3F, 0x7E39E78D, 0x0193F3CF, 0xB8080000,
    0x29E7BF1C, 0xDF7C6AB9, 0xFF9D47A8, 0x5AEE3F98, 0xFEDCDDFB, 0xEE25BF7E, 0x67DFBFB9,
    0xF1BEF8D5, 0x79EFC73C, 0x0000327E, 0xE3970100, 0x57253CF7, 0xF51BEF8D, 0x7DC46F78,
    0xEF88BEF9, 0x433C3C63, 0xF7BDEEFC, 0xDF7C6AB3, 0xF7E39E78, 0x00193F3C, 0xCB808000,
    0x929E7BF1, 0x8DF7C6AB, 0x7380887A, 0x88BEF888, 0xECEFBE73, 0x67DEF7BD, 0x3831CC8C,
    0x5806F607, 0xFC2FE601, 0xB32FBDEE, 0xCF18F7C6, 0xC8667BF1, 0xDE09C9E0, 0x172FC2F7,
    0x10E178C2, 0xF0AE4FCF, 0x729EA37E, 0x023FBDEE, 0x137ECF30, 0x1022FBF3, 0xEEB07B35,
    0x001F7BCB, 0x80000000, 0x79E7A400, 0xF7C67A92, 0x778C0015, 0xBE2B079F, 0x2B3D50AF,
    0xDEF2FBAC, 0x00000007, 0xE9002000, 0x9EA49E79, 0xDF057DF1, 0xDC62FFFF, 0x9E32777D,
    0xFBAD27C8, 0x0007DEF2, 0x20000000, 0x9E79E900, 0x7DF19EA4, 0xDC46F785, 0xF88BEF97,
    0x33C3C63E, 0xDEF2FBAC, 0x00000007, 0xE9002000, 0x9EA49E79, 0x00057DF1, 0xC1E7DDE3,
    0x542BEF8A, 0x6DEF0ACF, 0x629FBEE2, 0xF48E46F9, 0xC4F1E1CF, 0xABF3F0F3, 0xBC7231F8,
    0x7E33E063, 0xC640F0F0, 0x03F11848, 0x0556099F, 0x00005DD6, 0x7CF7BE80, 0x3C77BE78,
    0x2599FFC5, 0x00000101, 0x53CFFE08, 0xC6FBE792, 0xE7BDF453, 0xBDE00003, 0xFBE5F711,
    0xF18FBE22, 0x6DEF0CF0, 0x629FBEE2, 0xF48E46F9, 0xC4F1E1CF, 0xABF3F0F3, 0xBC7231F8,
    0x7E33E063, 0xC640F0F0, 0x03F11848, 0x0556099F, 0x00000000
EW_END_OF_FONT_RES( ApplicationNumbersP )

/* Table with links to derived variants of the font resource : 'Application::NumbersP' */
EW_RES_WITHOUT_VARIANTS( ApplicationNumbersP )

/* Font resource : 'Application::NumbersG' */
EW_DEFINE_FONT_RES( ApplicationNumbersG, 18, 4, 0, 16, 0x0016, 0x00BE )
  EW_GLYPH( 0x0016, 0, -18, 11, 22, 11, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 11, 0x00000273 ),               /* ' ' */
  EW_GLYPH( 0x0021, 3, -15, 5, 15, 11, 0x00000273 ),            /* '!' */
  EW_GLYPH( 0x0022, 2, -16, 7, 5, 11, 0x00000303 ),             /* '"' */
  EW_GLYPH( 0x0023, 1, -15, 9, 15, 11, 0x00000344 ),            /* '#' */
  EW_GLYPH( 0x0024, 0, -15, 11, 15, 11, 0x0000048D ),           /* '$' */
  EW_GLYPH( 0x0025, 0, -15, 11, 15, 11, 0x00000684 ),           /* '%' */
  EW_GLYPH( 0x0026, 0, -15, 11, 15, 11, 0x0000086D ),           /* '&' */
  EW_GLYPH( 0x0027, 4, -16, 3, 5, 11, 0x00000A2E ),             /* ''' */
  EW_GLYPH( 0x0028, 2, -17, 7, 22, 11, 0x00000A4D ),            /* '(' */
  EW_GLYPH( 0x0029, 2, -17, 7, 22, 11, 0x00000B71 ),            /* ')' */
  EW_GLYPH( 0x002A, 1, -16, 9, 10, 11, 0x00000C95 ),            /* '*' */
  EW_GLYPH( 0x002B, 1, -12, 9, 8, 11, 0x00000DC8 ),             /* '+' */
  EW_GLYPH( 0x002C, 3, -3, 5, 6, 11, 0x00000E7E ),              /* ',' */
  EW_GLYPH( 0x002D, 1, -8, 9, 2, 11, 0x00000EC2 ),              /* '-' */
  EW_GLYPH( 0x002E, 3, -3, 5, 3, 11, 0x00000F25 ),              /* '.' */
  EW_GLYPH( 0x002F, 0, -15, 11, 15, 11, 0x00000F55 ),           /* '/' */
  EW_GLYPH( 0x0030, 0, -15, 11, 15, 11, 0x000010B9 ),           /* '0' */
  EW_GLYPH( 0x0031, 0, -15, 11, 15, 11, 0x00001272 ),           /* '1' */
  EW_GLYPH( 0x0032, 0, -15, 11, 15, 11, 0x0000138C ),           /* '2' */
  EW_GLYPH( 0x0033, 0, -15, 11, 15, 11, 0x00001558 ),           /* '3' */
  EW_GLYPH( 0x0034, 0, -15, 11, 15, 11, 0x0000173D ),           /* '4' */
  EW_GLYPH( 0x0035, 0, -15, 11, 15, 11, 0x000018BC ),           /* '5' */
  EW_GLYPH( 0x0036, 0, -15, 11, 15, 11, 0x00001A8C ),           /* '6' */
  EW_GLYPH( 0x0037, 0, -15, 11, 15, 11, 0x00001C3F ),           /* '7' */
  EW_GLYPH( 0x0038, 0, -15, 11, 15, 11, 0x00001DE2 ),           /* '8' */
  EW_GLYPH( 0x0039, 0, -15, 11, 15, 11, 0x00001FD4 ),           /* '9' */
  EW_GLYPH( 0x003A, 3, -9, 5, 9, 11, 0x0000218B ),              /* ':' */
  EW_GLYPH( 0x003B, 3, -10, 5, 13, 11, 0x0000220C ),            /* ';' */
  EW_GLYPH( 0x003C, 2, -14, 7, 13, 11, 0x000022A6 ),            /* '<' */
  EW_GLYPH( 0x003D, 1, -11, 9, 6, 11, 0x000023BC ),             /* '=' */
  EW_GLYPH( 0x003E, 2, -14, 7, 13, 11, 0x000024A4 ),            /* '>' */
  EW_GLYPH( 0x003F, 1, -15, 9, 15, 11, 0x000025BA ),            /* '?' */
  EW_GLYPH( 0x0040, 0, -12, 11, 15, 11, 0x00002737 ),           /* '@' */
  EW_GLYPH( 0x0041, 0, -15, 11, 15, 11, 0x00002923 ),           /* 'A' */
  EW_GLYPH( 0x0042, 0, -15, 11, 15, 11, 0x00002AD9 ),           /* 'B' */
  EW_GLYPH( 0x0043, 1, -15, 9, 15, 11, 0x00002C81 ),            /* 'C' */
  EW_GLYPH( 0x0044, 0, -15, 11, 15, 11, 0x00002DD7 ),           /* 'D' */
  EW_GLYPH( 0x0045, 1, -15, 9, 15, 11, 0x00002F25 ),            /* 'E' */
  EW_GLYPH( 0x0046, 0, -15, 10, 15, 11, 0x00003090 ),           /* 'F' */
  EW_GLYPH( 0x0047, 1, -15, 9, 15, 11, 0x000031D5 ),            /* 'G' */
  EW_GLYPH( 0x0048, 0, -15, 11, 15, 11, 0x00003346 ),           /* 'H' */
  EW_GLYPH( 0x0049, 1, -15, 9, 15, 11, 0x00003449 ),            /* 'I' */
  EW_GLYPH( 0x004A, 1, -15, 9, 15, 11, 0x0000357C ),            /* 'J' */
  EW_GLYPH( 0x004B, 0, -15, 11, 15, 11, 0x0000369F ),           /* 'K' */
  EW_GLYPH( 0x004C, 0, -15, 11, 15, 11, 0x00003824 ),           /* 'L' */
  EW_GLYPH( 0x004D, 0, -15, 11, 15, 11, 0x00003919 ),           /* 'M' */
  EW_GLYPH( 0x004E, 0, -15, 11, 15, 11, 0x00003A85 ),           /* 'N' */
  EW_GLYPH( 0x004F, 0, -15, 11, 15, 11, 0x00003BBD ),           /* 'O' */
  EW_GLYPH( 0x0050, 0, -15, 11, 15, 11, 0x00003D42 ),           /* 'P' */
  EW_GLYPH( 0x0051, 0, -15, 11, 17, 11, 0x00003EAC ),           /* 'Q' */
  EW_GLYPH( 0x0052, 0, -15, 11, 15, 11, 0x0000406E ),           /* 'R' */
  EW_GLYPH( 0x0053, 0, -15, 11, 15, 11, 0x000041E7 ),           /* 'S' */
  EW_GLYPH( 0x0054, 1, -15, 9, 15, 11, 0x000043D5 ),            /* 'T' */
  EW_GLYPH( 0x0055, 0, -15, 11, 15, 11, 0x000044BD ),           /* 'U' */
  EW_GLYPH( 0x0056, 0, -15, 11, 15, 11, 0x000045D9 ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -15, 11, 15, 11, 0x00004782 ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -15, 11, 15, 11, 0x00004941 ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -15, 11, 15, 11, 0x00004B18 ),           /* 'Y' */
  EW_GLYPH( 0x005A, 0, -15, 11, 15, 11, 0x00004C84 ),           /* 'Z' */
  EW_GLYPH( 0x005B, 2, -17, 7, 22, 11, 0x00004E60 ),            /* '[' */
  EW_GLYPH( 0x005C, 0, -15, 11, 15, 11, 0x00004F6A ),           /* '\' */
  EW_GLYPH( 0x005D, 2, -17, 7, 22, 11, 0x000050CC ),            /* ']' */
  EW_GLYPH( 0x005E, 0, -15, 11, 7, 11, 0x000051D6 ),            /* '^' */
  EW_GLYPH( 0x005F, 0, 3, 12, 2, 11, 0x000052A3 ),              /* '_' */
  EW_GLYPH( 0x0060, 2, -15, 6, 3, 11, 0x00005321 ),             /* '`' */
  EW_GLYPH( 0x0061, 0, -12, 11, 12, 11, 0x00005376 ),           /* 'a' */
  EW_GLYPH( 0x0062, 0, -16, 11, 16, 11, 0x0000550D ),           /* 'b' */
  EW_GLYPH( 0x0063, 1, -12, 9, 12, 11, 0x0000565D ),            /* 'c' */
  EW_GLYPH( 0x0064, 0, -16, 11, 16, 11, 0x0000578C ),           /* 'd' */
  EW_GLYPH( 0x0065, 0, -12, 11, 12, 11, 0x000058E9 ),           /* 'e' */
  EW_GLYPH( 0x0066, 0, -16, 11, 16, 11, 0x00005A83 ),           /* 'f' */
  EW_GLYPH( 0x0067, 0, -12, 11, 17, 11, 0x00005BDA ),           /* 'g' */
  EW_GLYPH( 0x0068, 0, -16, 11, 16, 11, 0x00005D93 ),           /* 'h' */
  EW_GLYPH( 0x0069, 0, -16, 10, 16, 11, 0x00005EA9 ),           /* 'i' */
  EW_GLYPH( 0x006A, 2, -16, 8, 21, 11, 0x00006005 ),            /* 'j' */
  EW_GLYPH( 0x006B, 0, -16, 11, 16, 11, 0x00006164 ),           /* 'k' */
  EW_GLYPH( 0x006C, 0, -16, 11, 16, 11, 0x000062E3 ),           /* 'l' */
  EW_GLYPH( 0x006D, 0, -12, 11, 12, 11, 0x00006411 ),           /* 'm' */
  EW_GLYPH( 0x006E, 0, -12, 11, 12, 11, 0x000064F3 ),           /* 'n' */
  EW_GLYPH( 0x006F, 0, -12, 11, 12, 11, 0x000065DC ),           /* 'o' */
  EW_GLYPH( 0x0070, 0, -12, 11, 17, 11, 0x00006748 ),           /* 'p' */
  EW_GLYPH( 0x0071, 0, -12, 11, 17, 11, 0x000068C6 ),           /* 'q' */
  EW_GLYPH( 0x0072, 1, -12, 9, 12, 11, 0x00006A33 ),            /* 'r' */
  EW_GLYPH( 0x0073, 0, -12, 11, 12, 11, 0x00006B0D ),           /* 's' */
  EW_GLYPH( 0x0074, 0, -15, 11, 15, 11, 0x00006CE0 ),           /* 't' */
  EW_GLYPH( 0x0075, 0, -12, 11, 12, 11, 0x00006E1E ),           /* 'u' */
  EW_GLYPH( 0x0076, 0, -12, 11, 12, 11, 0x00006F02 ),           /* 'v' */
  EW_GLYPH( 0x0077, 0, -12, 11, 12, 11, 0x00007054 ),           /* 'w' */
  EW_GLYPH( 0x0078, 0, -12, 11, 12, 11, 0x000071B5 ),           /* 'x' */
  EW_GLYPH( 0x0079, 0, -12, 11, 17, 11, 0x00007359 ),           /* 'y' */
  EW_GLYPH( 0x007A, 1, -12, 9, 12, 11, 0x00007534 ),            /* 'z' */
  EW_GLYPH( 0x007B, 1, -17, 9, 22, 11, 0x00007699 ),            /* '{' */
  EW_GLYPH( 0x007C, 4, -17, 3, 22, 11, 0x0000782C ),            /* '|' */
  EW_GLYPH( 0x007D, 1, -17, 9, 22, 11, 0x0000787A ),            /* '}' */
  EW_GLYPH( 0x007E, 1, -9, 9, 3, 11, 0x00007A0D ),              /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 11, 0x00007A80 ),
  EW_GLYPH( 0x00A1, 3, -10, 5, 15, 11, 0x00007A80 ),
  EW_GLYPH( 0x00A2, 2, -15, 7, 15, 11, 0x00007B10 ),
  EW_GLYPH( 0x00A3, 0, -15, 11, 15, 11, 0x00007C2A ),
  EW_GLYPH( 0x00A5, 0, -15, 11, 15, 11, 0x00007DBE ),
  EW_GLYPH( 0x00A6, 4, -17, 3, 22, 11, 0x00007F94 ),
  EW_GLYPH( 0x00A7, 1, -15, 9, 17, 11, 0x00008000 ),
  EW_GLYPH( 0x00A8, 1, -15, 9, 2, 11, 0x00008218 ),
  EW_GLYPH( 0x00A9, 0, -16, 11, 16, 11, 0x00008254 ),
  EW_GLYPH( 0x00AA, 2, -15, 7, 9, 11, 0x00008455 ),
  EW_GLYPH( 0x00AB, 1, -11, 9, 8, 11, 0x0000853D ),
  EW_GLYPH( 0x00AC, 1, -9, 9, 5, 11, 0x00008665 ),
  EW_GLYPH( 0x00AD, 1, -8, 9, 2, 11, 0x000086FC ),
  EW_GLYPH( 0x00AE, 0, -16, 11, 11, 11, 0x0000875F ),
  EW_GLYPH( 0x00AF, 1, -15, 9, 2, 11, 0x0000890F ),
  EW_GLYPH( 0x00B0, 2, -16, 7, 9, 11, 0x00008960 ),
  EW_GLYPH( 0x00B1, 1, -12, 9, 12, 11, 0x00008A23 ),
  EW_GLYPH( 0x00B2, 3, -15, 5, 7, 11, 0x00008B58 ),
  EW_GLYPH( 0x00B3, 3, -15, 5, 7, 11, 0x00008BE8 ),
  EW_GLYPH( 0x00B4, 3, -15, 6, 3, 11, 0x00008C6F ),
  EW_GLYPH( 0x00B6, 0, -15, 11, 20, 11, 0x00008CC5 ),
  EW_GLYPH( 0x00B7, 3, -9, 5, 3, 11, 0x00008E1C ),
  EW_GLYPH( 0x00B8, 4, 1, 3, 4, 11, 0x00008E4C ),
  EW_GLYPH( 0x00B9, 3, -15, 5, 7, 11, 0x00008E76 ),
  EW_GLYPH( 0x00BA, 2, -15, 7, 9, 11, 0x00008EC2 ),
  EW_GLYPH( 0x00BB, 1, -11, 9, 8, 11, 0x00008F8D ),
  EW_GLYPH( 0x00BC, 0, -15, 11, 15, 11, 0x000090B2 ),
  EW_GLYPH( 0x00BD, 0, -15, 11, 15, 11, 0x00009289 ),
  EW_GLYPH( 0x00BE, 0, -15, 11, 15, 11, 0x0000946B ),
  EW_GLYPH( 0x00BF, 1, -10, 9, 15, 11, 0x00009693 ),
  EW_GLYPH( 0x00C0, 0, -18, 11, 18, 11, 0x00009808 ),
  EW_GLYPH( 0x00C1, 0, -18, 11, 18, 11, 0x00009A28 ),
  EW_GLYPH( 0x00C2, 0, -17, 11, 17, 11, 0x00009C49 ),
  EW_GLYPH( 0x00C3, 0, -18, 11, 18, 11, 0x00009E59 ),
  EW_GLYPH( 0x00C4, 0, -17, 11, 17, 11, 0x0000A087 ),
  EW_GLYPH( 0x00C5, 0, -17, 11, 17, 11, 0x0000A293 ),
  EW_GLYPH( 0x00C6, 0, -15, 11, 15, 11, 0x0000A486 ),
  EW_GLYPH( 0x00C7, 1, -15, 9, 20, 11, 0x0000A613 ),
  EW_GLYPH( 0x00C8, 1, -18, 9, 18, 11, 0x0000A7D6 ),
  EW_GLYPH( 0x00C9, 1, -18, 9, 18, 11, 0x0000A9A4 ),
  EW_GLYPH( 0x00CA, 1, -17, 9, 17, 11, 0x0000AB73 ),
  EW_GLYPH( 0x00CB, 1, -17, 9, 17, 11, 0x0000AD24 ),
  EW_GLYPH( 0x00CC, 1, -18, 9, 18, 11, 0x0000AEC7 ),
  EW_GLYPH( 0x00CD, 1, -18, 9, 18, 11, 0x0000B05D ),
  EW_GLYPH( 0x00CE, 1, -17, 9, 17, 11, 0x0000B1F4 ),
  EW_GLYPH( 0x00CF, 1, -17, 9, 17, 11, 0x0000B36D ),
  EW_GLYPH( 0x00D0, 0, -15, 11, 15, 11, 0x0000B4D8 ),
  EW_GLYPH( 0x00D1, 0, -18, 11, 18, 11, 0x0000B65D ),
  EW_GLYPH( 0x00D2, 0, -18, 11, 18, 11, 0x0000B80E ),
  EW_GLYPH( 0x00D3, 0, -18, 11, 18, 11, 0x0000B9FB ),
  EW_GLYPH( 0x00D4, 0, -17, 11, 17, 11, 0x0000BBE9 ),
  EW_GLYPH( 0x00D5, 0, -18, 11, 18, 11, 0x0000BDB6 ),
  EW_GLYPH( 0x00D6, 0, -17, 11, 17, 11, 0x0000BFA5 ),
  EW_GLYPH( 0x00D7, 2, -12, 7, 8, 11, 0x0000C15E ),
  EW_GLYPH( 0x00D8, 0, -16, 11, 17, 11, 0x0000C24B ),
  EW_GLYPH( 0x00D9, 0, -18, 11, 18, 11, 0x0000C467 ),
  EW_GLYPH( 0x00DA, 0, -18, 11, 18, 11, 0x0000C5F0 ),
  EW_GLYPH( 0x00DB, 0, -17, 11, 17, 11, 0x0000C77A ),
  EW_GLYPH( 0x00DC, 0, -17, 11, 17, 11, 0x0000C8EC ),
  EW_GLYPH( 0x00DD, 0, -18, 11, 18, 11, 0x0000CA50 ),
  EW_GLYPH( 0x00DE, 0, -15, 11, 15, 11, 0x0000CC2B ),
  EW_GLYPH( 0x00DF, 0, -16, 11, 16, 11, 0x0000CD9A ),
  EW_GLYPH( 0x00E0, 0, -16, 11, 16, 11, 0x0000CF62 ),
  EW_GLYPH( 0x00E1, 0, -16, 11, 16, 11, 0x0000D17F ),
  EW_GLYPH( 0x00E2, 0, -16, 11, 16, 11, 0x0000D39C ),
  EW_GLYPH( 0x00E3, 0, -16, 11, 16, 11, 0x0000D5B6 ),
  EW_GLYPH( 0x00E4, 0, -16, 11, 16, 11, 0x0000D808 ),
  EW_GLYPH( 0x00E5, 0, -16, 11, 16, 11, 0x0000DA1E ),
  EW_GLYPH( 0x00E6, 0, -12, 11, 12, 11, 0x0000DC16 ),
  EW_GLYPH( 0x00E7, 1, -12, 9, 17, 11, 0x0000DDE0 ),
  EW_GLYPH( 0x00E8, 0, -16, 11, 16, 11, 0x0000DF7E ),
  EW_GLYPH( 0x00E9, 0, -16, 11, 16, 11, 0x0000E19B ),
  EW_GLYPH( 0x00EA, 0, -16, 11, 16, 11, 0x0000E3B8 ),
  EW_GLYPH( 0x00EB, 0, -16, 11, 16, 11, 0x0000E5D2 ),
  EW_GLYPH( 0x00EC, 0, -16, 10, 16, 11, 0x0000E7E8 ),
  EW_GLYPH( 0x00ED, 0, -16, 10, 16, 11, 0x0000E968 ),
  EW_GLYPH( 0x00EE, 0, -16, 10, 16, 11, 0x0000EAE8 ),
  EW_GLYPH( 0x00EF, 0, -16, 10, 16, 11, 0x0000EC65 ),
  EW_GLYPH( 0x00F0, 0, -16, 11, 16, 11, 0x0000EDDE ),
  EW_GLYPH( 0x00F1, 0, -16, 11, 16, 11, 0x0000EF95 ),
  EW_GLYPH( 0x00F2, 0, -16, 11, 16, 11, 0x0000F136 ),
  EW_GLYPH( 0x00F3, 0, -16, 11, 16, 11, 0x0000F325 ),
  EW_GLYPH( 0x00F4, 0, -16, 11, 16, 11, 0x0000F514 ),
  EW_GLYPH( 0x00F5, 0, -16, 11, 16, 11, 0x0000F700 ),
  EW_GLYPH( 0x00F6, 0, -16, 11, 16, 11, 0x0000F924 ),
  EW_GLYPH( 0x00F7, 1, -13, 9, 9, 11, 0x0000FB0C ),
  EW_GLYPH( 0x00F8, 0, -14, 11, 16, 11, 0x0000FC18 ),
  EW_GLYPH( 0x00F9, 0, -16, 11, 16, 11, 0x0000FE2B ),
  EW_GLYPH( 0x00FA, 0, -16, 11, 16, 11, 0x0000FF92 ),
  EW_GLYPH( 0x00FB, 0, -16, 11, 16, 11, 0x000100F9 ),
  EW_GLYPH( 0x00FC, 0, -16, 11, 16, 11, 0x0001025D ),
  EW_GLYPH( 0x00FD, 0, -16, 11, 21, 11, 0x000103BD ),
  EW_GLYPH( 0x00FE, 0, -16, 11, 21, 11, 0x0001061B ),
  EW_GLYPH( 0x00FF, 0, -16, 11, 21, 11, 0x000107C8 ),

  EW_FONT_PIXEL( ApplicationNumbersG, 0x00010A1F )              /* ratio 63.29 % */
    0x04444444, 0xCE739CE3, 0x0A8CE739, 0x7C001440, 0xEF7BDEF7, 0xFBF7F78B, 0x8C9CDAFD,
    0xF8F5AAAA, 0x2012FE00, 0x901ED800, 0x587F1EB5, 0x135B5FFF, 0x6F7FE3D9, 0x5809D4C3,
    0x05F1801E, 0x77C00780, 0xFA00000F, 0x133201BF, 0xAAAAB398, 0x7B8CE6AA, 0x0000006F,
    0x10000000, 0xFF88DEF7, 0x13321FFF, 0xEFCFEF78, 0x000000BE, 0xEE32EE20, 0x00000003,
    0x8FFEF6EF, 0xA645337E, 0x77D1DFCC, 0x00007EFB, 0x3FFBDBBC, 0x9914CDFA, 0xDF477F32,
    0x0001FBED, 0x0DC60000, 0xEC7FFB50, 0x37C5BFFF, 0x58666532, 0xDEE76F61, 0x00018857,
    0x500310C0, 0xDEE76F69, 0x329919C5, 0x7FFB1A74, 0x100A1BEC, 0x43C4008F, 0x63FFFFFC,
    0x333250DF, 0xEE239865, 0xF7B9DBBD, 0x25DEE795, 0xF389E0EF, 0xC4062A7C, 0xD400BB48,
    0x2058A806, 0x7811EE46, 0x155F3CE2, 0x19F7B9E4, 0xFA8A803F, 0xAEC277FF, 0x40F1DD6F,
    0x541231ED, 0xC8F60054, 0x0C653C00, 0xCF3DB990, 0xDEEF878D, 0x8FD07F7B, 0xC6984CCC,
    0x217FFFFF, 0xF0004014, 0x91D00278, 0x6F7BDEE7, 0xE4C86640, 0x8FFFFE46, 0x0F0C47FE,
    0x0B801700, 0x7C00F488, 0xF47FFFF2, 0x9919AC3F, 0xFEEFD321, 0x77E78000, 0xCABEB2EF,
    0xFFFD6C8C, 0x000587CF, 0x00000000, 0x00000000, 0x00000000, 0xDF954283, 0xDEFD3FFF,
    0xBDD63231, 0xACC887BF, 0x7FFF996F, 0x01E2C4EB, 0x00000000, 0x00000000, 0x00000000,
    0xFFCC6280, 0x722AA7FF, 0x0007F78C, 0xEB03DDE5, 0x18919F37, 0x3FDE39D1, 0xCAC622AB,
    0x9E60FDAA, 0xB119D1AA, 0xCF93F61E, 0xE351122F, 0xD7E313D9, 0x03EE7806, 0xBDD60000,
    0x15DEEF9F, 0x63332999, 0xFFADFFFE, 0x400009FF, 0x11037BDC, 0x70909848, 0xFFFFFFFC,
    0xFFFFFFFF, 0x33333333, 0x7FFFFE33, 0x60004CC8, 0xE33C009F, 0x0B1BC00D, 0xE0178CF0,
    0xE398058D, 0x02E5F805, 0xFC01FCCC, 0xFE660272, 0x60273A00, 0xE3BC0345, 0x0178AC01,
    0xC400F1DE, 0xF7BDEF77, 0xC3323F43, 0xFFACB2F3, 0xF84658BF, 0xA8062289, 0x0FC70018,
    0xB00A3510, 0x1EFE00FC, 0x8091ACC0, 0x0B2803E3, 0x27C2A08C, 0xFFF3C586, 0x447E8B4F,
    0xBFF1A7A6, 0x66605EF7, 0x0FFEFC00, 0x00000000, 0x00000000, 0x00000000, 0xFFC40000,
    0xFFF87FFF, 0x833321FF, 0xDEFFC4CC, 0x3307CF7B, 0xC69E3333, 0xFFFFFFEF, 0x13F00987,
    0x4FC00001, 0xFFFFFD04, 0x57A2C3FF, 0x65E7A666, 0xFBDEF71A, 0xC100A191, 0x00000005,
    0xFFFFFF78, 0x881FFFFF, 0xE34CCCCC, 0x3DEF7BDE, 0x1999990B, 0xFFF18FD1, 0x1BFFFFFF,
    0x0F1E200E, 0x8F100300, 0xDFFFF505, 0x33221788, 0x27BDCF00, 0x28F101A3, 0x2E024B80,
    0x18C8F003, 0xFFFFFFFF, 0xCC87A7FF, 0x0D98CCCC, 0xC07F7BEC, 0x00BC0033, 0x5C048C6A,
    0x1F2B202F, 0xB201FB40, 0x78BE0262, 0x02633101, 0x7FFFEC32, 0xC883FE78, 0xDC6910CC,
    0x754DEF7B, 0x30000007, 0xDEF7BDEE, 0x3332037B, 0xFFFF4133, 0x003FFFFF, 0xC0000000,
    0x1FBDEF77, 0x3D333332, 0xFFFFF1AF, 0x597FFFFF, 0x000C5B00, 0x78092E00, 0xFFFF188C,
    0xE93FFFFF, 0x23333323, 0xBDF6A4D6, 0x7785DEF7, 0x220CCCC8, 0xFFFFFFD5, 0x000D924F,
    0xF7D00000, 0x882FFBDE, 0xE0FC8CCC, 0x53FFFFFD, 0x0005C00C, 0x71FC9000, 0xFFCF4888,
    0xBD229FFF, 0x9F1A6643, 0xEF7BDEE7, 0xC88EF7BD, 0x630CCCCC, 0xFFFFFFD4, 0x00F86FFF,
    0x4780589F, 0x03A4F005, 0x2C80B238, 0x0263E01F, 0x4F004F1E, 0x0B23803A, 0x3E00F2C8,
    0x12A3C03E, 0xEF7B9DF0, 0x89F782F9, 0x59A78CCC, 0x97FFFFEA, 0x97F1FC22, 0x8FE50400,
    0xFF5687BF, 0x1F34BFFF, 0xA58FC999, 0x1A65BDEE, 0x18BF8FE1, 0xC0C01818, 0x9FC7F240,
    0xFFFEA511, 0x92BE297F, 0xF6A3EA99, 0x5DDEF7BD, 0x1A66437C, 0xFFF50CAF, 0xB0664BFF,
    0x00000491, 0x61180380, 0x05FFFFFD, 0x0666465F, 0x7BDEFFD4, 0x00000027, 0xFFEA1240,
    0x25FFFFFF, 0xA6666453, 0x6F7B8AF1, 0xFE299900, 0x10007FFF, 0x643FFFFF, 0xFFFF1026,
    0x1026643F, 0x0000DEF7, 0x1037BDC4, 0x09098481, 0x6FC0B007, 0xE20D7623, 0x3DCB663F,
    0x766F2BD6, 0xF9811953, 0x2F9E2779, 0x73FD46DE, 0x1B9B8C2D, 0x3D100F72, 0xFFFFFFFE,
    0x990FFFFF, 0xDC699999, 0x77BDEF7B, 0xFFFF1800, 0xFFFFFFFF, 0xCCCCCC87, 0x03FD80B4,
    0xE7A076A3, 0x35DE07F8, 0x6F3BA276, 0xDF316422, 0xE37EA6F8, 0xFF95AC7B, 0x181DE762,
    0xDC03A13B, 0xA7BDEF7B, 0xC4666665, 0xFFFFFF9A, 0x0FE9BFFF, 0x100014A2, 0xDFFDE065,
    0x199BE3F4, 0xDF6516B1, 0xC01A88D3, 0xA06EC048, 0x2207FBFE, 0xEB000273, 0x3DEF7BDC,
    0x66665A2D, 0xFFD6915A, 0xA7FFFFFF, 0xBC0B80E4, 0x98C03EF7, 0x3FE98019, 0x00200000,
    0x835F9396, 0x04CCCCEC, 0xFFFFFFEB, 0x100B83FF, 0xFFFFFFE6, 0x91FFFFFF, 0x66666653,
    0x4EF7BCC2, 0x78170AE0, 0x28601EBC, 0xC2310C03, 0x0F4A4780, 0x6174D36C, 0x0C0F4BFA,
    0x30606FE9, 0xFB0F064D, 0xC8B61E6E, 0x9E9970CC, 0x1E9FFFFF, 0x0C34C086, 0xC633F8FE,
    0x7BDEF7BD, 0xC466441A, 0xFFFEF09A, 0xCB007D27, 0x52C00000, 0x27FFFEF0, 0x866442E3,
    0x4DEF7D00, 0x0918F00D, 0x048013F8, 0xDE0627E0, 0x2C3FFFFF, 0xBCF4CC88, 0xBDEF73CC,
    0x88DE3FF7, 0xF1F9CCCC, 0xFFFFFFFD, 0x0581652F, 0x00000010, 0x60000000, 0xE01CA402,
    0xFFFFFFE3, 0x46F1BFFF, 0xB8CE6664, 0xCF7BDEF7, 0xE3332207, 0xFFFF5869, 0x4A00787F,
    0x0002E006, 0x00000000, 0xC0000000, 0x6044A005, 0x61FFFFFD, 0x3C666442, 0xEF7BDEED,
    0x9912F7BD, 0xFF8C9999, 0xFFFFFFFF, 0xC0000001, 0xFFFFFFF8, 0x84CCC881, 0x01DEF7BC,
    0x00000000, 0xFFFFFF18, 0x9913FFFF, 0xEF719999, 0x7BDEF7BD, 0x99999911, 0xFFFFFE78,
    0x0007FFFF, 0x40000000, 0x03EF7BDD, 0xF0199991, 0x7FFFFFFC, 0x00000001, 0x9F400000,
    0xBFBDEF7B, 0x333222B9, 0xFFF713F3, 0x61DFFFFF, 0x00000005, 0xFFFFFFFE, 0x0999990F,
    0x00004EF7, 0x00AC3000, 0xFFFF713F, 0x99115AC5, 0xC5F7B8C1, 0x000077BA, 0x00000000,
    0xFFFEB000, 0x66440BFF, 0xBDEF3006, 0x0000000D, 0x00000000, 0xF7BDEE00, 0x666F7BDE,
    0xFFCCC886, 0xFF8C3FFF, 0x00000FFF, 0x00000000, 0x00000000, 0x1FFFFFC0, 0xCFFFFFC6,
    0xC99910CC, 0xF7BDEF73, 0x50199912, 0x01FFFFFF, 0x00000000, 0x00000000, 0xE4125800,
    0xFFFF7F30, 0x3339BFFF, 0x9FA23333, 0x7D85DEE7, 0xD0F401FF, 0x3CF4C601, 0x01F88DC0,
    0xFF00E86B, 0x09E04D57, 0x9805002F, 0x8A6701A1, 0x0BC37805, 0xE0162988, 0xA6202F0D,
    0xBC378058, 0x00BEF711, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFAC0,
    0x103FFFFF, 0xC6999999, 0x7BBE1FBD, 0x480B1303, 0x00691024, 0xC308134C, 0x97F1181F,
    0x6699E091, 0x03C69902, 0x601C789C, 0x2D3006D8, 0x09114813, 0x7A601218, 0x83FBDC60,
    0x0095037B, 0x003C007C, 0x070C0164, 0x980153E0, 0xFA601311, 0x00727E00, 0xFE00F946,
    0x008CC016, 0x40F80130, 0xF7BDEEFC, 0xC95F82FE, 0x8F13F54C, 0xE5FFFFFA, 0x3F8FE489,
    0x00018189, 0x00000000, 0x30000000, 0xF1FC9030, 0xFF51E327, 0xE13CBFFF, 0xFD533257,
    0xDEF7BDC4, 0x99105E7B, 0xFAC27319, 0x03E9FFFF, 0x5C008C78, 0x25002E00, 0xFFFFEB03,
    0x66441F0F, 0xEF305CC6, 0x0005E7BD, 0x00000000, 0x7BBE2000, 0xD05FBDEF, 0xFCF4CC8F,
    0xFFFFC658, 0x1F84652F, 0x312062FE, 0x00000000, 0x00000000, 0x23031200, 0xA549FC6C,
    0x797FFFFE, 0x9991EFC2, 0xF77C47EA, 0xC017EFA6, 0x7BDC45E7, 0x05E7BDEF, 0x1B319991,
    0x1FFFFFD6, 0x0092801E, 0x002B8017, 0xEF3058F1, 0x442F593D, 0xAC267A66, 0xD19FFFFF,
    0xC0088F00, 0x00000005, 0xEF7BBE00, 0x3EF177BD, 0x58333332, 0xFFFFFFC6, 0x3F08A7FF,
    0xC32000C0, 0xFF19600F, 0xBC2F7FFF, 0xE8E6644F, 0xFBDCEF85, 0x3F201F4F, 0x5C000019,
    0xBC231E00, 0x7FFFFFFF, 0x666647D2, 0xDEE9AC46, 0xF7BDEF7B, 0x99906666, 0xF07FFFFF,
    0x0001FFFF, 0x00000000, 0x00000000, 0x60000000, 0xEEB0BBDC, 0x0000001D, 0x00000000,
    0x00000000, 0x00000000, 0x27E1F846, 0xFFFE3286, 0x3DF8B0FF, 0xEAD3D332, 0x6F7189DE,
    0x3C3C1C3D, 0x11AE0691, 0xF0F48996, 0x32E3C197, 0x878A1948, 0xA44912C7, 0x6581EFE3,
    0xD36C3618, 0x9991E034, 0x467C181E, 0x80796180, 0x28B81707, 0xBF03FBEC, 0x9605A7BB,
    0xE3080439, 0xC09C3048, 0x248853BC, 0x317209C2, 0x24AC188E, 0xCC190652, 0x92422E69,
    0xDB092995, 0xA92C15DF, 0xC8AA45A4, 0x31E1C92C, 0x10690439, 0xEA1FDCE2, 0x92A58ADE,
    0x9F1F9463, 0xE3E4BC78, 0x5783E531, 0xC60F9F3E, 0xBC0B19D0, 0x1B0A04D2, 0xABC03898,
    0xE233093C, 0xACFC1F0B, 0xFA4F1328, 0xCAF2623B, 0x8633E952, 0xF3518F0F, 0x77BAC6DE,
    0x89F850CE, 0x86291969, 0x7C5947C5, 0x8DB7F48C, 0xE513CF81, 0x623A2983, 0x15A63C41,
    0x1E03E2E0, 0x00000072, 0x00000000, 0x7BDEF710, 0x6437BDEF, 0xE2066666, 0xFFFFFFFF,
    0x5E00CC37, 0x594603F1, 0x01F8B409, 0x2D026655, 0x6619E05E, 0x8178AF00, 0xFC01BC39,
    0x7A5602C4, 0xFFDF2F01, 0x23FFFFFF, 0x4CCCCC82, 0xEF7BDEEB, 0x78333222, 0x04FFFFFE,
    0x00000000, 0x00000000, 0x00000000, 0xFCF00000, 0x6449FFFF, 0xC01B3866, 0x15801E3B,
    0x3C77802F, 0x005E2B00, 0x2B0098EF, 0x397E007F, 0x00FE6601, 0xCC0172FC, 0x62FC017C,
    0x017CCC01, 0x67802C74, 0xBDEEB1BC, 0xCCC8AEF7, 0xFFFFFE60, 0x00000007, 0x00000000,
    0x00000000, 0xC0000000, 0x0FFFFFFC, 0x98019991, 0x00BBD600, 0x902DF3D5, 0x97EFBF5F,
    0x75596A70, 0xF9F0F9F0, 0xD4E03AAC, 0xFFFFFFFA, 0xFFFFFFFF, 0x9991FFFF, 0x99999999,
    0xF54955DE, 0xDEE67FEF, 0xFF2677BF, 0xFFBDEF7B, 0x94CCCCC2, 0xFFFF7E1F, 0x00C4BFFF,
    0xFF78965C, 0x25FFFFFF, 0x666666FC, 0xEE751E20, 0x00FF246D, 0x401C1000, 0xFFFFF996,
    0x6447785F, 0xFBDC6066, 0x00000002, 0x7BDE6000, 0x32212FEF, 0xFEB0BD53, 0x80297FFF,
    0x00480024, 0x00000000, 0xAC092024, 0x0A5FFFFF, 0x2BD53322, 0x7BDEE77E, 0x6455FDEF,
    0xF8966666, 0xFFFFFFFF, 0x00003C3F, 0x00000000, 0xE2500F08, 0xFFFFFFFC, 0x991157FF,
    0xEF780999, 0x0000000D, 0xEE77E200, 0x157E13BD, 0xEA501999, 0x442FFFFF, 0x00000048,
    0x60000000, 0x00AC2200, 0xFFFFBC94, 0x64455F82, 0xBDDF8C06, 0xE0FFDEF7, 0x3C8CCC96,
    0xFFFFA862, 0xC49332DF, 0xC0830020, 0x2DFFFFFA, 0x91999112, 0xEF7BCC1F, 0x240017FD,
    0xFEA18809, 0x3FFFFFFF, 0x333325B8, 0xF7BFF981, 0xCA7440DE, 0xFEB0A84C, 0x7F007FFF,
    0xBE3F7B88, 0x926647FB, 0xBFFF8939, 0x000FFFE9, 0x00000000, 0x00000000, 0x18000000,
    0xBDEF7BBF, 0x225B86F7, 0x9D431033, 0x90617FFF, 0x00000080, 0x00400000, 0x0C404830,
    0x17FFFFF5, 0x019992DC, 0xBDEF77E3, 0x3C000013, 0xFFFFFEA0, 0xCC882A19, 0xF71AF50C,
    0x000000BE, 0xF7980000, 0x220BBBDE, 0xD6178D33, 0x992FFFFF, 0x00002480, 0x00000000,
    0x00000000, 0xDEF71000, 0x88133200, 0x001FFFFF, 0x7BDEF710, 0x019990FF, 0x0FFFFFE2,
    0x00000000, 0x00000000, 0xFFFFC400, 0xFFFFC61F, 0x32219997, 0x1DEF7113, 0xFF109990,
    0xDC007FFF, 0x7FBDEF7B, 0xFF819999, 0x001FFFFF, 0x00000000, 0x00000000, 0xA4400000,
    0x2FFFFFF0, 0xA88CCC8F, 0x00FBDCF6, 0x00000000, 0x2FBDCF00, 0x05EA7E30, 0x303F2271,
    0x403719FE, 0x61025F0F, 0x00358016, 0xC802711D, 0xCF00FC9F, 0x0EF00B54, 0xBE13805D,
    0xBDEF7B8C, 0x8099907F, 0x00FFFFF8, 0x00000000, 0x00000000, 0x00000000, 0xF1000000,
    0xFF19FFFF, 0x26643FFF, 0x7B9E9991, 0xFEF7BDEF, 0xE464320B, 0x7FD5E707, 0x04C90031,
    0x00000000, 0x00000000, 0xF7180000, 0xDDEF7BDE, 0x8D332203, 0xFFFFEB03, 0x32400C97,
    0x00000800, 0x00000000, 0xE0000000, 0xEF7BDFF9, 0xA5F897FD, 0x3C5F94CC, 0xFFFFFE61,
    0xE2E09E29, 0x00181812, 0x80000000, 0xE2E08181, 0xFF984F12, 0x278A7FFF, 0xE533297E,
    0xF7BDCF17, 0x80F77BDE, 0xC0E34CC8, 0x1FFFFFFB, 0x007F0039, 0x00000130, 0x01300000,
    0xFFFF7807, 0x910314FF, 0x7D07C699, 0x00BBBDEF, 0x00000000, 0x7BDDFC80, 0xBC37BDEF,
    0xCA033225, 0x42FFFF38, 0x000000F0, 0x00000000, 0x94024100, 0x0BFFFFFA, 0x019992DE,
    0xDEF7BBF9, 0x00000009, 0xECF00000, 0xFFBDEF73, 0x33321BE7, 0xFFFEE5E7, 0x116FFFFF,
    0x00000000, 0x00000000, 0xEFFD4000, 0x57DEF7BD, 0x9999197C, 0xFFF09E19, 0x7FFFFFFF,
    0x7930120B, 0xEEFD2300, 0x9C5FF7BD, 0xFC8CCCCA, 0xFFFFBF18, 0x028BFFFF, 0xC2480124,
    0xFFFFFFFF, 0x32517FFF, 0x3F233333, 0x005DEE78, 0xBDC40000, 0x0DEF7D1F, 0xA6644999,
    0xF79BFFF8, 0x0007FFFF, 0x00000000, 0xC0000000, 0x7FD62C05, 0xC194EC82, 0xBDE177B8,
    0x00000077, 0x00000000, 0x00000000, 0xA6407F04, 0x2FFFFFE7, 0x0CCC8778, 0x3C1F7BAC,
    0x8FE2AEF7, 0xA152353F, 0x884650C4, 0x3C79B161, 0x536D8A6C, 0x04652944, 0x414311B6,
    0x8460FCD1, 0x14280629, 0xBBF1B170, 0xBFBFF07F, 0x24790C04, 0xEF312708, 0xDB624E44,
    0x734C0CC1, 0x8C33C910, 0x43034A49, 0x6D8F6D32, 0x8251CA12, 0x0E482A24, 0xEEA3878F,
    0xADEE785D, 0x7B41BC7A, 0xADA22FCA, 0x66D11F8C, 0x39817EBD, 0x701EA2FC, 0x44580F89,
    0xB05C2D02, 0x42C67C46, 0xDE3D66BC, 0xEAF117E0, 0xBC7A9F88, 0xFAA7A721, 0xFBBF05DE,
    0xF288D8FE, 0x9282A18D, 0x7AE28FC3, 0x1F94B878, 0x1C8A9439, 0x7BFA89F8, 0x7E5FE1E0,
    0x1CCCC390, 0x780F87E0, 0x8C3900F0, 0x403F2C04, 0x19F00796, 0x00FC7809, 0xBFF01E95,
    0xEF7BDEF7, 0x2666667F, 0xFFFFFBF1, 0x53C349FF, 0x868B4166, 0x4C607537, 0xC2E5C263,
    0xB440E61C, 0xFB05F868, 0x16FFFFFF, 0x21399991, 0x630373BF, 0xC46E123F, 0xBC3107FE,
    0x00002809, 0x50018000, 0xF8E8C062, 0x5824F283, 0xC781FD6F, 0x00006018, 0x0B000000,
    0x7B403844, 0x7F303FCE, 0x02EEB48F, 0x00000000, 0xC4000000, 0xF4825F3D, 0xEFF881EC,
    0x35F20B88, 0x00001402, 0x40300000, 0x8FF10286, 0x051F201E, 0x182EF5FE, 0x003003C3,
    0x16000000, 0xFC4111C0, 0x3D21A3CF, 0xDEEFC27B, 0xD467DC57, 0xAD73AF6F, 0x9D168D47,
    0x200DEF71, 0xFFFFC533, 0x06F7B88F, 0x00000000, 0xBDF80000, 0xD6FFC600, 0x2337BFBC,
    0xB3F43322, 0x00032FFE, 0x90000000, 0xBFFACF7E, 0xCC8888DF, 0xFBCD6FB1, 0xBDF63003,
    0x3381DEF7, 0xD2A26664, 0xFFFFFFFA, 0x4007E0C1, 0xCD180002, 0x083EF7B9, 0xF1833332,
    0x7FFFFFB2, 0x00000001, 0xFFB00000, 0x3FFFFFFF, 0xD3333320, 0xF78BEF73, 0xA1427ADE,
    0xC8725944, 0x0F28F934, 0xB6DA463F, 0x7CA8F031, 0x8747E0FC, 0x54786309, 0xF00E1F80,
    0xFDF80F10, 0x7787FB89, 0xBBC0FB93, 0x93207DC9, 0x9FEF09C8, 0xDEF1FFF1, 0xBC000017,
    0xBC0005F7, 0x000005F7, 0xEF7BDCFA, 0x666456B5, 0xFFFEADA6, 0x496FFFFF, 0x8DE04A60,
    0x17DEF7BA, 0xDE7CD332, 0x5FFFFFA8, 0x314894EE, 0xF55C5225, 0xDE2BFFFF, 0x42664567,
    0xC56F7B9F, 0x5200A40B, 0xFFFFFFCC, 0x991D97FF, 0x7199E999, 0x0DEE30EF, 0xDAC4C899,
    0xD0BD9EE7, 0xFA7B9F5F, 0xD429E66B, 0x6018C699, 0xF1A6B18C, 0x2B9877BF, 0x43BDC752,
    0x0003E606, 0x00000000, 0x40F9A440, 0xEF3A9AC6, 0xC6359E1D, 0x31DEE718, 0xEA14F30C,
    0x73EBFA4C, 0xFFCD7F4F, 0x332FFBDE, 0xFDF8F233, 0xF62B3FFF, 0x88EF1FBD, 0xDFEFCA4C,
    0x7FBE5010, 0x04C88EF3, 0x1FF24891, 0xBB8CB7E2, 0xC6ABFF32, 0xCFB9FBFF, 0x8E4A358E,
    0xE7FDF53F, 0xF58B7DF8, 0xDFFCF1EB, 0xFC63E787, 0xFFFFFE63, 0x9FFFFFFF, 0x99999991,
    0xF7BDEEB1, 0xF000007E, 0xFFFFFFFF, 0xCFFFFFFF, 0x4CCCCCCC, 0x4FFDFFCC, 0xEF7BEDF0,
    0xFFC530FE, 0xFDF26BEE, 0xBF3DF77C, 0x8880AC4F, 0xF6EF9215, 0xEDDF2491, 0x644AC523,
    0xEF5F0AC4, 0xC7DFEE69, 0x37F10FF4, 0xBDEFFDF1, 0xEF758FFF, 0x15DEF7BD, 0x19999999,
    0xFEF7BFF5, 0xE66466EB, 0x9B7FEE9D, 0x20000084, 0x5FFED305, 0xE46466F3, 0x001F73C5,
    0xFDEEB000, 0xC8AEF77C, 0xF319994C, 0xFFFD6FFF, 0xF000004F, 0xE60007DC, 0xFFFFFFFF,
    0x9919FFFF, 0xBF199999, 0xEEFD4F7B, 0x73C303AD, 0x9F73CF9F, 0xDEEFC60F, 0xA9EF713A,
    0xF01D77B8, 0x59EEBB9C, 0xF40E3CF7, 0xE9F27FBD, 0xB7FF9E77, 0xDBFBE72A, 0x7BDEEF9B,
    0x7E8FBDEF, 0x0CC84C00, 0x07FF6032, 0x12000001, 0xDC001880, 0x97F63000, 0x0000F900,
    0x00000000, 0x00000000, 0x10000000, 0x643FFFFF, 0x3FBFF026, 0xFC567F06, 0x001B10EF,
    0x7B1CF000, 0xFBDEFFD4, 0x91919BAF, 0x7FFDFA77, 0x0004D326, 0xBD30F1E0, 0x32BB35F7,
    0x81913AB3, 0x4FF10BF5, 0xAC63FD6A, 0x767EC43B, 0xF27FBEFC, 0xD319E91F, 0xFB3C7AFA,
    0xE6FDE7AB, 0xFF12F5F8, 0xFFCC9BE2, 0xB319E41F, 0x30035E81, 0x1BEE01AA, 0x40162780,
    0xAF2FDE37, 0xF7BC1F35, 0xA01B78DE, 0x61FFF86B, 0xE80736AC, 0x9E17BE99, 0xE82AD5A7,
    0x98AC36E6, 0xC563BECC, 0xDEFFF8DB, 0x83F9E6B1, 0xE05F393C, 0xE7A8099D, 0x0037E805,
    0x37401633, 0x9FABCEDE, 0x37BDEF07, 0x72F40367, 0xEA8C49EF, 0xE1F3EF71, 0x627801BE,
    0x8FCEE759, 0xFDF5F1FE, 0x1C9315A7, 0xFFA1B788, 0x3DEE7EFF, 0xE789C60F, 0xDF7079DE,
    0x78B13C00, 0xE374BAEE, 0xF358F3B9, 0x36F11101, 0xE9E77B9E, 0x3DEE781A, 0xCF403573,
    0xE783F38C, 0xCDD02F69, 0x698AC2F3, 0xE6DE2256, 0x4A7E83F7, 0xCF3EFBC4, 0x7FB12F58,
    0xFF81E7BF, 0x30000FBD, 0xF6FC0333, 0x80DE80BF, 0x40A8C01C, 0x6B15BB9F, 0xF8FCE445,
    0x317FFBC9, 0x50060054, 0xDC5FC02A, 0xFFFFFFFF, 0x999115CF, 0x12ABBC99, 0x9FFBFD50,
    0xBDFEF609, 0xBF3C4133, 0x85702577, 0x0F5E3C0B, 0x86019430, 0x23C06118, 0x69B607A5,
    0xA5FD30BA, 0x37F48607, 0x83269830, 0x0F377D87, 0xB866645B, 0xFFFFCF4C, 0x60430F4F,
    0xFC7F061A, 0x7E9F2019, 0x6FFF3CC1, 0xFEF9C815, 0xDEB906F6, 0x0AE013DF, 0x1EBC7817,
    0x0C032860, 0x4780C231, 0xD36C0F4A, 0x4BFA6174, 0x6FE90C0F, 0x064D3060, 0x1E6EFB0F,
    0x70CCC8B6, 0xFFFF9E99, 0xC0861E9F, 0xF8FE0C34, 0xFFDEF033, 0xEB5BC17D, 0xF785EB3F,
    0xBDFCEEB7, 0x78170AE0, 0x28601EBC, 0xC2310C03, 0x0F4A4780, 0x6174D36C, 0x0C0F4BFA,
    0x30606FE9, 0xFB0F064D, 0xC8B61E6E, 0x9E9970CC, 0x1E9FFFFF, 0x0C34C086, 0x8033F8FE,
    0xF7BBF900, 0xA3067B9E, 0x7DEFFDEF, 0xFDE63106, 0xC2B807EF, 0x07AF1E05, 0x4300CA18,
    0x91E0308C, 0x34DB03D2, 0xD2FE985D, 0x1BFA4303, 0xC1934C18, 0x879BBEC3, 0x5C33322D,
    0xFFFFE7A6, 0x302187A7, 0xFE3F830D, 0x30EF710C, 0x22640DEE, 0xEDFFF113, 0x80FF7FBB,
    0xF1E05C2B, 0x0CA1807A, 0x0308C430, 0xB03D291E, 0xE985D34D, 0xA4303D2F, 0x34C181BF,
    0xBBEC3C19, 0x3322D879, 0xFE7A65C3, 0x187A7FFF, 0xF830D302, 0xBEC0CFE3, 0x3C606EF7,
    0x7CC019F7, 0x218133EE, 0x03D7A600, 0x2180650C, 0x48F01846, 0x9A6D81E9, 0xE97F4C2E,
    0x0DFD2181, 0xE0C9A60C, 0xC3CDDF61, 0x2E199916, 0xFFFFF3D3, 0x9810C3D3, 0x7F1FC186,
    0x7BDEF706, 0x884BBDEF, 0x1A433324, 0x4FFFFD9B, 0x0B0C0053, 0x12380020, 0xC1B9C120,
    0x04FB36B2, 0xA40C9221, 0x400100EF, 0xC2C58012, 0x1067FFFE, 0xCF30CCC8, 0xFFDEF7BD,
    0x33322378, 0xFFF7C7E7, 0x94BFFFFF, 0x00401605, 0x00000000, 0x90098000, 0xFF8F8072,
    0xFFFFFFFF, 0x99911BC6, 0xEF73CD39, 0xFF8FF7BD, 0x800C01FD, 0x7782C03F, 0xDFEA8255,
    0xFDEC4CFF, 0xCF72677B, 0x77EBBDFE, 0x9999912F, 0xFFFFF8C9, 0x001FFFFF, 0xFF8C0000,
    0x881FFFFF, 0x7BC84CCC, 0x00001DEF, 0xF1800000, 0xFFFFFFFF, 0x9999913F, 0x8BF4F909,
    0x2ADFFE79, 0x7B7F7CE4, 0xDEB7F7BB, 0xC8973EDF, 0xFC64CCCC, 0xFFFFFFFF, 0x0000000F,
    0xFFFFFFC6, 0x2666440F, 0x0EF7BDE4, 0x00000000, 0xFFFFF8C0, 0xC89FFFFF, 0xBBE4CCCC,
    0xE3587EFB, 0x6E58DFDB, 0xB37EEFCF, 0x9999912F, 0xFFFFF8C9, 0x001FFFFF, 0xFF8C0000,
    0x881FFFFF, 0x7BC84CCC, 0x00001DEF, 0xF1800000, 0xFFFFFFFF, 0x9999913F, 0xE30EF719,
    0x4C8990DE, 0x9DDF7327, 0xCCCC8879, 0xFFFFC64C, 0x00FFFFFF, 0xFC600000, 0x40FFFFFF,
    0xDE426664, 0x0000EF7B, 0x8C000000, 0xFFFFFFFF, 0xCCCC89FF, 0x04AAEF4C, 0x99FFBFD5,
    0xCEF7FBD8, 0x7BFD9EE4, 0xCCDEEFD7, 0xFF99910C, 0xFF187FFF, 0x00001FFF, 0x00000000,
    0x00000000, 0x3FFFFF80, 0x9FFFFF8C, 0x13322199, 0xF317E9F2, 0xC855BFFC, 0x76F6FEF9,
    0xBFBD6FEF, 0x86666E7D, 0xFFFFCCC8, 0xFFFF8C3F, 0x0000000F, 0x00000000, 0xC0000000,
    0xC61FFFFF, 0xCCCFFFFF, 0x7BC99910, 0x5BC5F7FF, 0x75EB3FEB, 0x733BAE67, 0x910CCCDE,
    0x7FFFFF99, 0x1FFFFF18, 0x00000000, 0x00000000, 0xFF800000, 0xFF8C3FFF, 0x21999FFF,
    0x1DEE3332, 0x1321BDC6, 0xBEE64E99, 0x6664F33B, 0xFFFCCC88, 0xFFF8C3FF, 0x000000FF,
    0x00000000, 0x00000000, 0x61FFFFFC, 0xCCFFFFFC, 0xEE99910C, 0xFBDEF7BD, 0x54CC880B,
    0xFFFF8C1F, 0x87002A5F, 0xC0008007, 0x27FFF8CB, 0xF0199124, 0x005DEF23, 0x10000000,
    0xF183C380, 0x054BFFFF, 0x07D53322, 0x7BBF9008, 0x3067B9EF, 0xDEFFDEFA, 0xFF671867,
    0x06F718E4, 0x00F8012A, 0x02C80078, 0xA7C00E18, 0x26233002, 0xFC01F4C0, 0xF28C00E4,
    0x802DFC01, 0x02600119, 0xAAEF01F0, 0xFEFF5404, 0x7FBD8267, 0x6F884CEF, 0xFBF5DEFF,
    0x9992BF05, 0xF51E27EA, 0x13CBFFFF, 0x127F1FC9, 0x00000303, 0x00000000, 0x60600000,
    0x4FE3F920, 0xFFFEA3C6, 0xAFC2797F, 0x01FAA664, 0xE60BF4F9, 0x40AB7FF9, 0x37B7F7CE,
    0xEF5BF7E2, 0xAFC17F6F, 0x89FAA664, 0xFFFFFD47, 0xC7F244F2, 0x00C0C49F, 0x00000000,
    0x00000000, 0xFE481818, 0xA8F193F8, 0x9E5FFFFF, 0xA9992BF0, 0x7DDDF07E, 0xB7C6B03F,
    0x7B10B1BF, 0x3B9BF77E, 0x54CC95F8, 0xFF18F13F, 0x913CBFFF, 0x1893F87C, 0x00000018,
    0x00000000, 0x03030000, 0x327F1FC9, 0xFFFFF51E, 0x257E13CB, 0x100FD533, 0xDEF77F20,
    0xF460CF73, 0xCFBDFFBD, 0xDFFBDF40, 0x4AFC17FB, 0x789FAA66, 0x2FFFFFD4, 0xFC7F244F,
    0x000C0C49, 0x00000000, 0x80000000, 0x8FE48181, 0xFA8F193F, 0x09E5FFFF, 0xEA9992BF,
    0x8C3BDC47, 0xC899037B, 0xEEFB9984, 0xCC95F89C, 0xA8F13F54, 0x9E5FFFFF, 0x93F8FE48,
    0x00001818, 0x00000000, 0x03000000, 0x7F1FC903, 0xFFF51E32, 0x7E13CBFF, 0x4FD53325,
    0xD59E5636, 0x6B93DFBA, 0xC6F37CAF, 0x442A9B88, 0xF1BC6F99, 0xF9FF13CE, 0x187BDB8F,
    0xDBA805FB, 0x7BDEF77C, 0x8FBD78BF, 0x584F14CC, 0x4FFFFFC6, 0x547E1995, 0x02340332,
    0xDE01233C, 0x78CF00F8, 0x02C6F013, 0xC805E37C, 0x82F02058, 0xCB8B10C8, 0xFFFFE254,
    0xC8552A3F, 0xF8E9F54C, 0xFDEF7BDD, 0x0955DE05, 0xCFFDFEA8, 0xDEFF7B04, 0x54F71899,
    0x0EF71ECD, 0x00000000, 0x00000000, 0x00000000, 0x23000000, 0x4313F0FC, 0x7FFFFF19,
    0x991EFC58, 0x9F2069E9, 0xFF3CC17E, 0xF9C8156F, 0xDC66F6FE, 0x9D567A3B, 0x0000003B,
    0x00000000, 0x00000000, 0x00000000, 0x4FC3F08C, 0xFFFC650C, 0x7BF161FF, 0xE1A7A664,
    0x82FBFFBD, 0xD67FD6B7, 0x6BF3B8CB, 0x00EF37EF, 0x00000000, 0x00000000, 0x00000000,
    0xC2300000, 0x94313F0F, 0x87FFFFF1, 0x9991EFC5, 0x1DEE269E, 0x4C81BDC6, 0x7E4E3264,
    0x0CF2F8C3, 0x00000000, 0x00000000, 0x00000000, 0x23000000, 0x4313F0FC, 0x7FFFFF19,
    0x991EFC58, 0x9F2069E9, 0xFF3CC17E, 0xF9C8156F, 0xDE66F6FE, 0x9D567BBB, 0xFC28673B,
    0x148CB4C4, 0x2CA3E2C3, 0xDBFA463E, 0x89E7C0C6, 0x1D14C1F2, 0xD31E20B1, 0x01F1700A,
    0x0000390F, 0x00000000, 0x5F7B8800, 0x80000000, 0x2F3DEF79, 0x398CCC88, 0xFFFFFD61,
    0x463C01F4, 0x17002E00, 0xF5819280, 0x0F87FFFF, 0x2E633322, 0xF3DEF798, 0x78000002,
    0x7BDEF7FE, 0x3297E23E, 0x09E59E33, 0x4FFFFFCF, 0x928FE09F, 0x02180000, 0xFF807960,
    0xA66068CD, 0x7FDF80F8, 0xF3F8019A, 0x98011600, 0x0788E004, 0x2B2FFFFA, 0x79E33220,
    0x801CF5F1, 0x277DDEB5, 0xD7F7FFF8, 0x5678E409, 0xF7BDFF81, 0x9983FFDE, 0xF87F2999,
    0xFFFFFFFD, 0x59700312, 0xFFFFFDE2, 0x9BF097FF, 0x78819999, 0x91B7B9D4, 0x400003FC,
    0xE6590070, 0xE17FFFFF, 0x0199911D, 0x607F6630, 0x05AEFDDE, 0xFFFDBFB2, 0x48CF5A83,
    0xDEF7BFF0, 0x33307FFB, 0xBF0FE533, 0x5FFFFFFF, 0x4B2E0062, 0xFFFFFFBC, 0x337E12FF,
    0x8F103333, 0x9236F73A, 0x0800007F, 0xFCCB200E, 0xBC2FFFFF, 0x80333223, 0x0BEFFEF7,
    0x59FF5ADE, 0xF6FFBC2F, 0xC0005FFE, 0xEF7BDEFF, 0xCCCCC1FF, 0xFEFC3F94, 0x897FFFFF,
    0xF12CB801, 0xFFFFFFFE, 0xCCCDF84B, 0xEA3C40CC, 0xFE48DBDC, 0x38200001, 0xFFF32C80,
    0x8EF0BFFF, 0xEB00CCC8, 0x7DC6379C, 0xD7FDFD18, 0x7CCC51D9, 0x2FC6BFC6, 0xFC61FE78,
    0x7BFF03F6, 0x07FFBDEF, 0xFE533333, 0xFFFFFBF0, 0xE00625FF, 0xFFFBC4B2, 0xE12FFFFF,
    0x03333337, 0x6F73A8F1, 0x0007F923, 0xB200E080, 0xFFFFFFCC, 0x33223BC2, 0x61DEE203,
    0x44C81BDC, 0x1FFFE226, 0x001FFFC6, 0x7BDEFFC0, 0xCCC1FFEF, 0xFC3F94CC, 0x7FFFFFFE,
    0x2CB80189, 0xFFFFFEF1, 0xCDF84BFF, 0x3C40CCCC, 0x48DBDCEA, 0x200001FE, 0xF32C8038,
    0xF0BFFFFF, 0x00CCC88E, 0x1FDEF77E, 0x0A7DCF50, 0xF73D4000, 0xD42FF029, 0xCCCCC1FF,
    0xFEFC3F94, 0x897FFFFF, 0xF12CB801, 0xFFFFFFFE, 0xCCCDF84B, 0xEA3C40CC, 0xFE48DBDC,
    0x38200001, 0xFFF32C80, 0x8EF0BFFF, 0xDF80CCC8, 0x7B9F77BD, 0x234CC877, 0xFDEBC632,
    0xFFF1A7FF, 0x0B1E380C, 0x62FFFFEF, 0x586666B1, 0xE6D8CFFF, 0x7C63229D, 0xDEF31FD3,
    0x1258009D, 0x5FFD6C0F, 0x37FFFFC6, 0x4CC8322B, 0xDEF73BF1, 0x22AFEF7B, 0xE4B33333,
    0xFFFFFFFF, 0x000261FF, 0x00000000, 0x89403C20, 0xFFFFFFF3, 0x64455FFF, 0xCEFC6666,
    0x8BDEF7BD, 0x0C01FDFF, 0x02C03F80, 0x5801CF5F, 0x8277DDEB, 0x9D7F7FFF, 0x15678E40,
    0xF7BDDF8C, 0x96E0FFDE, 0x623C8CCC, 0xDFFFFFA8, 0x20C49332, 0xFAC08300, 0x132DFFFF,
    0x2F919991, 0xFDEF7BCC, 0x09240017, 0xFFFEA188, 0xB83FFFFF, 0x01333325, 0xE607F663,
    0x205AEFDD, 0x3FFFDBFB, 0x848CF5A8, 0xDEF7BBF1, 0x92DC1FFB, 0x0C479199, 0x5BFFFFF5,
    0x04189266, 0xFF581060, 0x2265BFFF, 0x85F23332, 0xFFBDEF79, 0x01248002, 0xFFFFD431,
    0xB707FFFF, 0x78266664, 0xE0BEFFEF, 0xF59FF5AD, 0xEF6FFBC2, 0xC60005FF, 0xEF7BDEEF,
    0x664B707F, 0xD4311E46, 0x996FFFFF, 0x80106249, 0xFFFD6041, 0xC88996FF, 0xE617C8CC,
    0x0BFEF7BD, 0xC4049200, 0xFFFFFF50, 0x92DC1FFF, 0x7B889999, 0x206F7187, 0xFF889913,
    0x7FFF187F, 0xBBF18000, 0x1FFBDEF7, 0x919992DC, 0xFFF50C47, 0x92665BFF, 0x10600418,
    0xBFFFFF58, 0x33322265, 0xEF7985F2, 0x8002FFBD, 0xD4310124, 0xFFFFFFFF, 0x6664B707,
    0x073D7C26, 0xEFBBD6B0, 0x7F7FFF84, 0xB3C7209D, 0xDEF7B88A, 0x0CCC87FB, 0x7FFFFF10,
    0x00000000, 0x00000000, 0xFFFE2000, 0xFFFE30FF, 0x910CCCBF, 0x7F663099, 0xD77EEF30,
    0xFF6FEC82, 0x19EB50FF, 0xDEF7B889, 0x0CCC87FB, 0x7FFFFF10, 0x00000000, 0x00000000,
    0xFFFE2000, 0xFFFE30FF, 0x910CCCBF, 0xFFEF7899, 0xFAD6F0BE, 0xFEF17ACF, 0x017FFBDB,
    0x7BDEF710, 0x019990FF, 0x0FFFFFE2, 0x00000000, 0x00000000, 0xFFFFC400, 0xFFFFC61F,
    0x32219997, 0x8C3BDC53, 0x644C837B, 0x30FFFF12, 0x2000FFFE, 0xFEF7BDEE, 0xC4033321,
    0x001FFFFF, 0x00000000, 0x00000000, 0x3FFFFF88, 0x2FFFFF8C, 0x26644333, 0xEF7BDEEB,
    0xA666442E, 0xFFFE62F1, 0x04C97FFF, 0xF7FEA124, 0xCDE13BDE, 0xA640CCC8, 0x0BFFFFFA,
    0x000000C1, 0x00000000, 0x12449200, 0xFFFFEA91, 0x90EF4C97, 0x758BC699, 0x3EE31BCE,
    0xEBFEFE8C, 0x3E6628EC, 0x17E35FE3, 0x7E30FF3C, 0x7BDC61FB, 0x0F77BDEF, 0x0E34CC88,
    0x5FFFFFAC, 0x00C90032, 0x00000020, 0x00000000, 0x5F000000, 0xEB5801CF, 0xFF8277DD,
    0x409D7F7F, 0x3C15678E, 0xBDEF7BFF, 0x94BF12FF, 0x278BF299, 0x3FFFFFCC, 0x5C5C13C5,
    0x00030302, 0x30000000, 0x5C5C1030, 0xFFF309E2, 0xC4F14FFF, 0xFCA6652F, 0x1FD98C02,
    0x6BBF7798, 0xFF6FEC81, 0x33D6A0FF, 0xBDFF9E12, 0x897FDEF7, 0xF94CCA5F, 0xFFE613C5,
    0x09E29FFF, 0x81812E2E, 0x00000001, 0x08181800, 0x84F12E2E, 0xA7FFFFF9, 0x3297E278,
    0xF7817E53, 0xDE0BEFFE, 0x2F59FF5A, 0xFEF6FFBC, 0xF9E0005F, 0xFDEF7BDF, 0xCCA5F897,
    0x613C5F94, 0x29FFFFFE, 0x12E2E09E, 0x00001818, 0x81800000, 0x12E2E081, 0xFFFF984F,
    0x7E278A7F, 0x17E53329, 0x18DE73AC, 0xF7F461F7, 0x3147675F, 0x1AFF19F3, 0x87F9E0BF,
    0x9E0FDBF1, 0xDEF7BDFF, 0xCA5F897F, 0x13C5F94C, 0x9FFFFFE6, 0x2E2E09E2, 0x00018181,
    0x18000000, 0x2E2E0818, 0xFFF984F1, 0xE278A7FF, 0x7E533297, 0xC61DEE21, 0x644C81BD,
    0x61FFFE22, 0x0001FFFC, 0xF7BDFF9E, 0x5F897FDE, 0xC5F94CCA, 0xFFFFE613, 0x2E09E29F,
    0x0181812E, 0x00000000, 0x2E081818, 0xF984F12E, 0x78A7FFFF, 0x533297E2, 0xFDFF817E,
    0xF0273303, 0xFF30FFFB, 0xFFFFFFFF, 0xCCC8CFFF, 0xF758CCCC, 0x5DEF7BDE, 0xFFFBF000,
    0x00139980, 0xEF3C0173, 0xDEF7FEA5, 0x2F8BF9FB, 0x78BF0665, 0x93FFFCC2, 0xC67AE0A8,
    0x3E378600, 0x0778E612, 0x00B97E30, 0x4600FE5F, 0xFC0C834E, 0xFC13C4B8, 0x9E29FFFE,
    0xFCA66458, 0xF7BDE542, 0xEFC97FDE, 0x39EBE005, 0xFBBD6B00, 0xEFFFF04E, 0xF1C813AF,
    0x77B8C2AC, 0x0077BDE1, 0x00000000, 0x00000000, 0x7F040000, 0xFFE7A640, 0x87782FFF,
    0x31800CCC, 0xEEF303FB, 0xFD902D77, 0xD41FFFED, 0xDC62467A, 0x3BDEF0BB, 0x00000000,
    0x00000000, 0x82000000, 0xF3D3203F, 0xBC17FFFF, 0xF0066643, 0xC17DFFDE, 0xEB3FEB5B,
    0xDEDFF785, 0xC6000BFF, 0xBDEF0BBD, 0x00000003, 0x00000000, 0x20000000, 0x3D3203F8,
    0xC17FFFFF, 0x4066643B, 0x7B8C3BDC, 0x44C89903, 0xF8C3FFFC, 0xC60003FF, 0xBDEF0BBD,
    0x00000003, 0x00000000, 0x20000000, 0x3D3203F8, 0xC17FFFFF, 0x0066643B, 0x981FD98C,
    0x816BBF77, 0xFFFF6FEC, 0x1233D6A0, 0xDF82EF7D, 0x446C7F7D, 0x4150C6F9, 0x7147E1C9,
    0xCA5C3C3D, 0x454A1C8F, 0xFD44FC0E, 0x2FF0F03D, 0x6661C83F, 0x07C3F00E, 0x1C80783C,
    0x1F960246, 0xF803CB20, 0x7E3C048C, 0x780F4A80, 0x00005DEE, 0xE8000000, 0x03DDEF7B,
    0x038D3322, 0x7FFFFFEF, 0x01FC00E4, 0x000004C0, 0x04C00000, 0xFFFDE01C, 0x440C53FF,
    0xF41F1A66, 0x02EEF7BD, 0x00000000, 0x61DEE200, 0x44C81BDC, 0x1FFFE226, 0x001FFFC6,
    0xF82EF7D0, 0x46C7F7DD, 0x150C6F94, 0x147E1C94, 0xA5C3C3D7, 0x54A1C8FC, 0xD44FC0E4,
    0xFF0F03DF, 0x661C83F2, 0x7C3F00E6, 0xC80783C0, 0xF9602461, 0x803CB201, 0xE3C048CF,
    0x00F4A807
EW_END_OF_FONT_RES( ApplicationNumbersG )

/* Table with links to derived variants of the font resource : 'Application::NumbersG' */
EW_RES_WITHOUT_VARIANTS( ApplicationNumbersG )

/* Initializer for the class 'Application::Fasores' */
void ApplicationFasores__Init( ApplicationFasores _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->grid, &_this->_XObject, 0 );
  ViewsText__Init( &_this->label0, &_this->_XObject, 0 );
  ViewsText__Init( &_this->label180, &_this->_XObject, 0 );
  ViewsText__Init( &_this->label90, &_this->_XObject, 0 );
  ViewsText__Init( &_this->label270, &_this->_XObject, 0 );
  ViewsText__Init( &_this->label300, &_this->_XObject, 0 );
  ViewsText__Init( &_this->label240, &_this->_XObject, 0 );
  ViewsText__Init( &_this->label210, &_this->_XObject, 0 );
  ViewsText__Init( &_this->label120, &_this->_XObject, 0 );
  ViewsText__Init( &_this->label60, &_this->_XObject, 0 );
  ViewsText__Init( &_this->label330, &_this->_XObject, 0 );
  ViewsText__Init( &_this->label30, &_this->_XObject, 0 );
  ViewsText__Init( &_this->label150, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelMag, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelAng, &_this->_XObject, 0 );
  ViewsText__Init( &_this->fTverm_mag, &_this->_XObject, 0 );
  ViewsText__Init( &_this->fTverm_ang, &_this->_XObject, 0 );
  ViewsText__Init( &_this->fSamarelo_mag, &_this->_XObject, 0 );
  ViewsText__Init( &_this->fSamarelo_ang, &_this->_XObject, 0 );
  ViewsText__Init( &_this->fRverde_mag, &_this->_XObject, 0 );
  ViewsText__Init( &_this->fRverde_ang, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->Line, &_this->_XObject, 0 );
  CoreTimer__Init( &_this->Timer, &_this->_XObject, 0 );
  ViewsWarpImage__Init( &_this->fasor_T, &_this->_XObject, 0 );
  ViewsWarpImage__Init( &_this->fasor_S, &_this->_XObject, 0 );
  ViewsWarpImage__Init( &_this->fasor_R, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationFasores );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0008 );
  _this->angulo = 0.000000f;
  _this->amplitude = 1.000000f;
  _this->centro = _Const0013;
  CoreRectView__OnSetBounds( &_this->grid, _Const0014 );
  ViewsImage_OnSetColor( &_this->grid, _Const0015 );
  CoreRectView__OnSetBounds( &_this->label0, _Const0016 );
  ViewsText_OnSetAutoSize( &_this->label0, 0 );
  ViewsText_OnSetString( &_this->label0, EwLoadString( &_Const0017 ));
  ViewsText_OnSetColor( &_this->label0, _Const0015 );
  CoreRectView__OnSetBounds( &_this->label180, _Const0018 );
  ViewsText_OnSetAutoSize( &_this->label180, 0 );
  ViewsText_OnSetString( &_this->label180, EwLoadString( &_Const0019 ));
  ViewsText_OnSetColor( &_this->label180, _Const0015 );
  CoreRectView__OnSetBounds( &_this->label90, _Const001A );
  ViewsText_OnSetAutoSize( &_this->label90, 0 );
  ViewsText_OnSetString( &_this->label90, EwLoadString( &_Const001B ));
  ViewsText_OnSetColor( &_this->label90, _Const0015 );
  CoreRectView__OnSetBounds( &_this->label270, _Const001C );
  ViewsText_OnSetAutoSize( &_this->label270, 0 );
  ViewsText_OnSetString( &_this->label270, EwLoadString( &_Const001D ));
  ViewsText_OnSetColor( &_this->label270, _Const0015 );
  CoreRectView__OnSetBounds( &_this->label300, _Const001E );
  ViewsText_OnSetAutoSize( &_this->label300, 1 );
  ViewsText_OnSetString( &_this->label300, EwLoadString( &_Const001F ));
  ViewsText_OnSetColor( &_this->label300, _Const0015 );
  CoreRectView__OnSetBounds( &_this->label240, _Const0020 );
  ViewsText_OnSetAutoSize( &_this->label240, 1 );
  ViewsText_OnSetString( &_this->label240, EwLoadString( &_Const0021 ));
  ViewsText_OnSetColor( &_this->label240, _Const0015 );
  CoreRectView__OnSetBounds( &_this->label210, _Const0022 );
  ViewsText_OnSetAutoSize( &_this->label210, 1 );
  ViewsText_OnSetString( &_this->label210, EwLoadString( &_Const0023 ));
  ViewsText_OnSetColor( &_this->label210, _Const0015 );
  CoreRectView__OnSetBounds( &_this->label120, _Const0024 );
  ViewsText_OnSetAutoSize( &_this->label120, 1 );
  ViewsText_OnSetString( &_this->label120, EwLoadString( &_Const0025 ));
  ViewsText_OnSetColor( &_this->label120, _Const0015 );
  CoreRectView__OnSetBounds( &_this->label60, _Const0026 );
  ViewsText_OnSetAutoSize( &_this->label60, 1 );
  ViewsText_OnSetString( &_this->label60, EwLoadString( &_Const0027 ));
  ViewsText_OnSetColor( &_this->label60, _Const0015 );
  CoreRectView__OnSetBounds( &_this->label330, _Const0028 );
  ViewsText_OnSetAutoSize( &_this->label330, 1 );
  ViewsText_OnSetString( &_this->label330, EwLoadString( &_Const0029 ));
  ViewsText_OnSetColor( &_this->label330, _Const0015 );
  CoreRectView__OnSetBounds( &_this->label30, _Const002A );
  ViewsText_OnSetAutoSize( &_this->label30, 1 );
  ViewsText_OnSetString( &_this->label30, EwLoadString( &_Const002B ));
  ViewsText_OnSetColor( &_this->label30, _Const0015 );
  CoreRectView__OnSetBounds( &_this->label150, _Const002C );
  ViewsText_OnSetAutoSize( &_this->label150, 1 );
  ViewsText_OnSetString( &_this->label150, EwLoadString( &_Const002D ));
  ViewsText_OnSetColor( &_this->label150, _Const0015 );
  CoreRectView__OnSetBounds( &_this->labelMag, _Const002E );
  ViewsText_OnSetAutoSize( &_this->labelMag, 1 );
  ViewsText_OnSetAlignment( &_this->labelMag, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelMag, EwLoadString( &_Const002F ));
  CoreRectView__OnSetBounds( &_this->labelAng, _Const0030 );
  ViewsText_OnSetAutoSize( &_this->labelAng, 1 );
  ViewsText_OnSetString( &_this->labelAng, EwLoadString( &_Const0031 ));
  CoreRectView__OnSetBounds( &_this->fTverm_mag, _Const0032 );
  ViewsText_OnSetAutoSize( &_this->fTverm_mag, 1 );
  ViewsText_OnSetAlignment( &_this->fTverm_mag, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->fTverm_mag, EwLoadString( &_Const0017 ));
  ViewsText_OnSetColor( &_this->fTverm_mag, Applicationcor_T );
  CoreRectView__OnSetBounds( &_this->fTverm_ang, _Const0033 );
  ViewsText_OnSetAutoSize( &_this->fTverm_ang, 1 );
  ViewsText_OnSetAlignment( &_this->fTverm_ang, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->fTverm_ang, EwLoadString( &_Const0017 ));
  ViewsText_OnSetColor( &_this->fTverm_ang, Applicationcor_T );
  CoreRectView__OnSetBounds( &_this->fSamarelo_mag, _Const0034 );
  ViewsText_OnSetAutoSize( &_this->fSamarelo_mag, 1 );
  ViewsText_OnSetAlignment( &_this->fSamarelo_mag, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->fSamarelo_mag, EwLoadString( &_Const0017 ));
  ViewsText_OnSetColor( &_this->fSamarelo_mag, Applicationcor_S );
  CoreRectView__OnSetBounds( &_this->fSamarelo_ang, _Const0035 );
  ViewsText_OnSetAutoSize( &_this->fSamarelo_ang, 1 );
  ViewsText_OnSetAlignment( &_this->fSamarelo_ang, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->fSamarelo_ang, EwLoadString( &_Const0017 ));
  ViewsText_OnSetColor( &_this->fSamarelo_ang, Applicationcor_S );
  CoreRectView__OnSetBounds( &_this->fRverde_mag, _Const0036 );
  ViewsText_OnSetAutoSize( &_this->fRverde_mag, 1 );
  ViewsText_OnSetAlignment( &_this->fRverde_mag, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->fRverde_mag, EwLoadString( &_Const0017 ));
  ViewsText_OnSetColor( &_this->fRverde_mag, Applicationcor_R );
  CoreRectView__OnSetBounds( &_this->fRverde_ang, _Const0037 );
  ViewsText_OnSetAutoSize( &_this->fRverde_ang, 1 );
  ViewsText_OnSetAlignment( &_this->fRverde_ang, ViewsTextAlignmentAlignHorzRight 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->fRverde_ang, EwLoadString( &_Const0017 ));
  ViewsText_OnSetColor( &_this->fRverde_ang, Applicationcor_R );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const0038 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const0039 );
  ViewsLine_OnSetColor( &_this->Line, _Const0015 );
  CoreTimer_OnSetPeriod( &_this->Timer, 1000 );
  CoreTimer_OnSetEnabled( &_this->Timer, 1 );
  CoreQuadView__OnSetPoint4( &_this->fasor_T, _Const003A );
  CoreQuadView__OnSetPoint3( &_this->fasor_T, _Const003B );
  CoreQuadView__OnSetPoint2( &_this->fasor_T, _Const003C );
  CoreQuadView__OnSetPoint1( &_this->fasor_T, _Const003D );
  ViewsWarpView_OnSetSourceAnchor((ViewsWarpView)&_this->fasor_T, _Const003E );
  ViewsWarpImage_OnSetColor1( &_this->fasor_T, _Const0015 );
  ViewsWarpImage_OnSetColor( &_this->fasor_T, Applicationcor_T );
  CoreQuadView__OnSetPoint4( &_this->fasor_S, _Const003F );
  CoreQuadView__OnSetPoint3( &_this->fasor_S, _Const0040 );
  CoreQuadView__OnSetPoint2( &_this->fasor_S, _Const0041 );
  CoreQuadView__OnSetPoint1( &_this->fasor_S, _Const0042 );
  ViewsWarpView_OnSetSourceAnchor((ViewsWarpView)&_this->fasor_S, _Const003E );
  ViewsWarpImage_OnSetColor1( &_this->fasor_S, _Const0015 );
  ViewsWarpImage_OnSetColor( &_this->fasor_S, Applicationcor_S );
  CoreQuadView__OnSetPoint4( &_this->fasor_R, _Const0043 );
  CoreQuadView__OnSetPoint3( &_this->fasor_R, _Const0044 );
  CoreQuadView__OnSetPoint2( &_this->fasor_R, _Const0045 );
  CoreQuadView__OnSetPoint1( &_this->fasor_R, _Const0046 );
  ViewsWarpView_OnSetSourceAnchor((ViewsWarpView)&_this->fasor_R, _Const003E );
  ViewsWarpImage_OnSetColor1( &_this->fasor_R, _Const0015 );
  ViewsWarpImage_OnSetColor( &_this->fasor_R, Applicationcor_R );
  CoreGroup__Add( _this, ((CoreView)&_this->grid ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label0 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label180 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label90 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label270 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label300 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label240 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label210 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label120 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label60 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label330 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label30 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->label150 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelMag ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelAng ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->fTverm_mag ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->fTverm_ang ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->fSamarelo_mag ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->fSamarelo_ang ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->fRverde_mag ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->fRverde_ang ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Line ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->fasor_T ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->fasor_S ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->fasor_R ), 0 );
  ViewsImage_OnSetBitmap( &_this->grid, EwLoadResource( &Applicationgrid, ResourcesBitmap 
  ));
  ViewsText_OnSetFont( &_this->label0, EwLoadResource( &OldResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label180, EwLoadResource( &OldResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label90, EwLoadResource( &OldResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label270, EwLoadResource( &OldResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label300, EwLoadResource( &OldResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label240, EwLoadResource( &OldResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label210, EwLoadResource( &OldResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label120, EwLoadResource( &OldResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label60, EwLoadResource( &OldResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label330, EwLoadResource( &OldResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label30, EwLoadResource( &OldResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label150, EwLoadResource( &OldResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->labelMag, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->labelAng, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->fTverm_mag, EwLoadResource( &ApplicationNumbersM, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->fTverm_ang, EwLoadResource( &ApplicationNumbersM, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->fSamarelo_mag, EwLoadResource( &ApplicationNumbersM, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->fSamarelo_ang, EwLoadResource( &ApplicationNumbersM, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->fRverde_mag, EwLoadResource( &ApplicationNumbersM, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->fRverde_ang, EwLoadResource( &ApplicationNumbersM, 
  ResourcesFont ));
  _this->Timer.OnTrigger = EwNewSlot( _this, ApplicationFasores_roda );
  ViewsWarpImage_OnSetBitmap( &_this->fasor_T, EwLoadResource( &Applicationflecha, 
  ResourcesBitmap ));
  ViewsWarpImage_OnSetBitmap( &_this->fasor_S, EwLoadResource( &Applicationflecha, 
  ResourcesBitmap ));
  ViewsWarpImage_OnSetBitmap( &_this->fasor_R, EwLoadResource( &Applicationflecha, 
  ResourcesBitmap ));
  _this->device = EwGetAutoObject( &ApplicationAutoobjeto, ApplicationClasse );

  /* Call the user defined constructor */
  ApplicationFasores_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Fasores' */
void ApplicationFasores__ReInit( ApplicationFasores _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->grid );
  ViewsText__ReInit( &_this->label0 );
  ViewsText__ReInit( &_this->label180 );
  ViewsText__ReInit( &_this->label90 );
  ViewsText__ReInit( &_this->label270 );
  ViewsText__ReInit( &_this->label300 );
  ViewsText__ReInit( &_this->label240 );
  ViewsText__ReInit( &_this->label210 );
  ViewsText__ReInit( &_this->label120 );
  ViewsText__ReInit( &_this->label60 );
  ViewsText__ReInit( &_this->label330 );
  ViewsText__ReInit( &_this->label30 );
  ViewsText__ReInit( &_this->label150 );
  ViewsText__ReInit( &_this->labelMag );
  ViewsText__ReInit( &_this->labelAng );
  ViewsText__ReInit( &_this->fTverm_mag );
  ViewsText__ReInit( &_this->fTverm_ang );
  ViewsText__ReInit( &_this->fSamarelo_mag );
  ViewsText__ReInit( &_this->fSamarelo_ang );
  ViewsText__ReInit( &_this->fRverde_mag );
  ViewsText__ReInit( &_this->fRverde_ang );
  ViewsLine__ReInit( &_this->Line );
  CoreTimer__ReInit( &_this->Timer );
  ViewsWarpImage__ReInit( &_this->fasor_T );
  ViewsWarpImage__ReInit( &_this->fasor_S );
  ViewsWarpImage__ReInit( &_this->fasor_R );
}

/* Finalizer method for the class 'Application::Fasores' */
void ApplicationFasores__Done( ApplicationFasores _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationFasores );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->grid );
  ViewsText__Done( &_this->label0 );
  ViewsText__Done( &_this->label180 );
  ViewsText__Done( &_this->label90 );
  ViewsText__Done( &_this->label270 );
  ViewsText__Done( &_this->label300 );
  ViewsText__Done( &_this->label240 );
  ViewsText__Done( &_this->label210 );
  ViewsText__Done( &_this->label120 );
  ViewsText__Done( &_this->label60 );
  ViewsText__Done( &_this->label330 );
  ViewsText__Done( &_this->label30 );
  ViewsText__Done( &_this->label150 );
  ViewsText__Done( &_this->labelMag );
  ViewsText__Done( &_this->labelAng );
  ViewsText__Done( &_this->fTverm_mag );
  ViewsText__Done( &_this->fTverm_ang );
  ViewsText__Done( &_this->fSamarelo_mag );
  ViewsText__Done( &_this->fSamarelo_ang );
  ViewsText__Done( &_this->fRverde_mag );
  ViewsText__Done( &_this->fRverde_ang );
  ViewsLine__Done( &_this->Line );
  CoreTimer__Done( &_this->Timer );
  ViewsWarpImage__Done( &_this->fasor_T );
  ViewsWarpImage__Done( &_this->fasor_S );
  ViewsWarpImage__Done( &_this->fasor_R );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Fasores' */
void ApplicationFasores__Mark( ApplicationFasores _this )
{
  EwMarkObject( &_this->grid );
  EwMarkObject( &_this->label0 );
  EwMarkObject( &_this->label180 );
  EwMarkObject( &_this->label90 );
  EwMarkObject( &_this->label270 );
  EwMarkObject( &_this->label300 );
  EwMarkObject( &_this->label240 );
  EwMarkObject( &_this->label210 );
  EwMarkObject( &_this->label120 );
  EwMarkObject( &_this->label60 );
  EwMarkObject( &_this->label330 );
  EwMarkObject( &_this->label30 );
  EwMarkObject( &_this->label150 );
  EwMarkObject( &_this->labelMag );
  EwMarkObject( &_this->labelAng );
  EwMarkObject( &_this->fTverm_mag );
  EwMarkObject( &_this->fTverm_ang );
  EwMarkObject( &_this->fSamarelo_mag );
  EwMarkObject( &_this->fSamarelo_ang );
  EwMarkObject( &_this->fRverde_mag );
  EwMarkObject( &_this->fRverde_ang );
  EwMarkObject( &_this->Line );
  EwMarkObject( &_this->Timer );
  EwMarkObject( &_this->fasor_T );
  EwMarkObject( &_this->fasor_S );
  EwMarkObject( &_this->fasor_R );
  EwMarkObject( _this->device );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationFasores_UpdateLayout( ApplicationFasores _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationFasores_UpdateViewState( ApplicationFasores _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationFasores_Init( ApplicationFasores _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ViewsWarpView_RotateAndScale((ViewsWarpView)&_this->fasor_R, _this->centro, 0.000000f, 
  _this->amplitude, 1.000000f );
  ViewsWarpView_RotateAndScale((ViewsWarpView)&_this->fasor_S, _this->centro, 0.000000f, 
  _this->amplitude, 1.000000f );
  ViewsWarpView_RotateAndScale((ViewsWarpView)&_this->fasor_T, _this->centro, 0.000000f, 
  _this->amplitude, 1.000000f );
  _this->angulo = EwMathRandFloat( 0.000000f, 90.000000f ) + EwMathRandFloat( -5.000000f, 
  5.000000f );
}

/* 'C' function for method : 'Application::Fasores.roda()' */
void ApplicationFasores_roda( ApplicationFasores _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsWarpView_RotateAndScale((ViewsWarpView)&_this->fasor_R, _this->centro, ApplicationClasse_getFaseR( 
  _this->device ), _this->amplitude, 1.000000f );
  ViewsText_OnSetString( &_this->fRverde_mag, ApplicationFasores_float2String( _this, 
  ApplicationClasse_getMagR( _this->device )));
  ViewsText_OnSetString( &_this->fRverde_ang, ApplicationFasores_float2String( _this, 
  ApplicationClasse_getFaseR( _this->device )));
  ViewsWarpView_RotateAndScale((ViewsWarpView)&_this->fasor_S, _this->centro, ApplicationClasse_getFaseS( 
  _this->device ), _this->amplitude, 1.000000f );
  ViewsText_OnSetString( &_this->fSamarelo_mag, ApplicationFasores_float2String( 
  _this, ApplicationClasse_getMagS( _this->device )));
  ViewsText_OnSetString( &_this->fSamarelo_ang, ApplicationFasores_float2String( 
  _this, ApplicationClasse_getFaseS( _this->device )));
  ViewsWarpView_RotateAndScale((ViewsWarpView)&_this->fasor_T, _this->centro, ApplicationClasse_getFaseT( 
  _this->device ), _this->amplitude, 1.000000f );
  ViewsText_OnSetString( &_this->fTverm_mag, ApplicationFasores_float2String( _this, 
  ApplicationClasse_getMagT( _this->device )));
  ViewsText_OnSetString( &_this->fTverm_ang, ApplicationFasores_float2String( _this, 
  ApplicationClasse_getFaseT( _this->device )));
}

/* 'C' function for method : 'Application::Fasores.float2String()' */
XString ApplicationFasores_float2String( ApplicationFasores _this, XFloat arg1 )
{
  XString valor;
  XString valor2;
  XInt32 inteiro;
  XFloat dec;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  valor = 0;

  if ( arg1 < 0.000000f )
  {
    valor = EwLoadString( &_Const0047 );
    inteiro = (XInt32)-arg1;
    dec = ( arg1 + (XFloat)inteiro ) * -100.000000f;
  }
  else
  {
    inteiro = (XInt32)arg1;
    dec = ( arg1 - (XFloat)inteiro ) * 100.000000f;
  }

  valor = EwConcatString( valor, EwNewStringInt( inteiro, 0, 10 ));
  valor2 = EwNewStringInt((XInt32)dec, 2, 10 );
  return EwConcatString( EwConcatString( valor, EwLoadString( &_Const0048 )), valor2 
    );
}

/* Variants derived from the class : 'Application::Fasores' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFasores )
EW_END_OF_CLASS_VARIANTS( ApplicationFasores )

/* Virtual Method Table (VMT) for the class : 'Application::Fasores' */
EW_DEFINE_CLASS( ApplicationFasores, CoreGroup, "Application::Fasores" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
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
  ApplicationFasores_UpdateLayout,
  ApplicationFasores_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationFasores )

/* Initializer for the class 'Application::Freq' */
void ApplicationFreq__Init( ApplicationFreq _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsText__Init( &_this->val_fr_0, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_fr_1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_fr_2, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_0, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_2, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_3, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_4, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelFreq, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_freq, &_this->_XObject, 0 );
  CoreTimer__Init( &_this->intervalo, &_this->_XObject, 0 );
  ApplicationModIconButton__Init( &_this->IconButton, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->fadeIn, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->fadeOut, &_this->_XObject, 0 );
  ApplicationPlotterGraph__Init( &_this->grafico, &_this->_XObject, 0 );
  ApplicationConfigScreen__Init( &_this->config, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationFreq );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0008 );
  CoreRectView__OnSetBounds( &_this->val_fr_0, _Const0049 );
  ViewsText_OnSetAlignment( &_this->val_fr_0, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_fr_0, EwLoadString( &_Const004A ));
  ViewsText_OnSetColor( &_this->val_fr_0, _Const004B );
  CoreRectView__OnSetBounds( &_this->val_fr_1, _Const004C );
  ViewsText_OnSetAlignment( &_this->val_fr_1, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_fr_1, EwLoadString( &_Const004D ));
  ViewsText_OnSetColor( &_this->val_fr_1, _Const004E );
  CoreRectView__OnSetBounds( &_this->val_fr_2, _Const004F );
  ViewsText_OnSetAlignment( &_this->val_fr_2, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_fr_2, EwLoadString( &_Const0050 ));
  ViewsText_OnSetColor( &_this->val_fr_2, _Const004B );
  CoreRectView__OnSetBounds( &_this->val_t_0, _Const0051 );
  ViewsText_OnSetString( &_this->val_t_0, EwLoadString( &_Const0052 ));
  CoreRectView__OnSetBounds( &_this->val_t_1, _Const0053 );
  ViewsText_OnSetString( &_this->val_t_1, EwLoadString( &_Const0054 ));
  CoreRectView__OnSetBounds( &_this->val_t_2, _Const0055 );
  ViewsText_OnSetString( &_this->val_t_2, EwLoadString( &_Const0056 ));
  CoreRectView__OnSetBounds( &_this->val_t_3, _Const0057 );
  ViewsText_OnSetString( &_this->val_t_3, EwLoadString( &_Const0058 ));
  CoreRectView__OnSetBounds( &_this->val_t_4, _Const0059 );
  ViewsText_OnSetAlignment( &_this->val_t_4, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_t_4, EwLoadString( &_Const005A ));
  CoreRectView__OnSetBounds( &_this->labelFreq, _Const005B );
  ViewsText_OnSetAutoSize( &_this->labelFreq, 0 );
  ViewsText_OnSetAlignment( &_this->labelFreq, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelFreq, EwLoadString( &_Const005C ));
  CoreView_OnSetLayout((CoreView)&_this->val_freq, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_freq, _Const005D );
  ViewsText_OnSetAlignment( &_this->val_freq, ViewsTextAlignmentAlignHorzRight | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_freq, EwLoadString( &_Const0017 ));
  CoreTimer_OnSetPeriod( &_this->intervalo, 500 );
  CoreTimer_OnSetEnabled( &_this->intervalo, 1 );
  _this->valorMeio = 60.000000f;
  CoreRectView__OnSetBounds( &_this->IconButton, _Const005E );
  ApplicationModIconButton_OnSetIconIndex( &_this->IconButton, 7 );
  _this->freqV[ 0 ] = 1;
  _this->freqV[ 1 ] = 2;
  _this->freqV[ 2 ] = 5;
  _this->freqV[ 3 ] = 10;
  _this->freqV[ 4 ] = 20;
  _this->freqV[ 5 ] = 30;
  _this->freqIdx = 3;
  _this->unitsV[ 0 ] = 0.005000f;
  _this->unitsV[ 1 ] = 0.010000f;
  _this->unitsV[ 2 ] = 0.100000f;
  _this->unitsV[ 3 ] = 0.200000f;
  _this->unitsV[ 4 ] = 0.500000f;
  _this->unitsV[ 5 ] = 1.000000f;
  _this->unitsV[ 6 ] = 2.000000f;
  _this->unitsV[ 7 ] = 5.000000f;
  _this->unitsIdx = 3;
  EffectsEffect_OnSetOscillations((EffectsEffect)&_this->fadeIn, 0 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->fadeIn, EffectsTimingLinear );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->fadeIn, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->fadeIn, 500 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->fadeOut, EffectsTimingLinear 
  );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->fadeOut, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->fadeOut, 500 );
  _this->fadeOut.Value2 = 0;
  _this->fadeOut.Value1 = 255;
  CoreRectView__OnSetBounds( &_this->grafico, _Const005F );
  ApplicationPlotterGraph_OnSetStrokeColor( &_this->grafico, Applicationcor_S );
  CoreRectView__OnSetBounds( &_this->config, _Const005F );
  CoreGroup__OnSetOpacity( &_this->config, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_fr_0 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_fr_1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_fr_2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_0 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelFreq ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_freq ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->grafico ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->config ), 0 );
  ViewsText_OnSetFont( &_this->val_fr_0, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_fr_1, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_fr_2, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_t_0, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_t_1, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_t_2, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_t_3, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_t_4, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->labelFreq, EwLoadResource( &ApplicationNumbersG, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->val_freq, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  _this->intervalo.OnTrigger = EwNewSlot( _this, ApplicationFreq_plotar );
  _this->device = EwGetAutoObject( &ApplicationAutoobjeto, ApplicationClasse );
  _this->IconButton.OnAction = EwNewSlot( _this, ApplicationFreq_mostraConfig );
  ApplicationModIconButton_OnSetIcon( &_this->IconButton, EwLoadResource( &ResourcesSymbolIconsMedium, 
  ResourcesBitmap ));
  _this->fadeIn.Super1.OnFinished = EwNewSlot( _this, ApplicationFreq_mostraConfig 
  );
  _this->fadeIn.Outlet = EwNewRef( &_this->config, CoreGroup_OnGetOpacity, CoreGroup__OnSetOpacity 
  );
  _this->fadeOut.Super1.OnFinished = EwNewSlot( _this, ApplicationFreq_sairConfig 
  );
  _this->fadeOut.Outlet = EwNewRef( &_this->config, CoreGroup_OnGetOpacity, CoreGroup__OnSetOpacity 
  );

  /* Call the user defined constructor */
  ApplicationFreq_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Freq' */
void ApplicationFreq__ReInit( ApplicationFreq _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsText__ReInit( &_this->val_fr_0 );
  ViewsText__ReInit( &_this->val_fr_1 );
  ViewsText__ReInit( &_this->val_fr_2 );
  ViewsText__ReInit( &_this->val_t_0 );
  ViewsText__ReInit( &_this->val_t_1 );
  ViewsText__ReInit( &_this->val_t_2 );
  ViewsText__ReInit( &_this->val_t_3 );
  ViewsText__ReInit( &_this->val_t_4 );
  ViewsText__ReInit( &_this->labelFreq );
  ViewsText__ReInit( &_this->val_freq );
  CoreTimer__ReInit( &_this->intervalo );
  ApplicationModIconButton__ReInit( &_this->IconButton );
  EffectsInt32Effect__ReInit( &_this->fadeIn );
  EffectsInt32Effect__ReInit( &_this->fadeOut );
  ApplicationPlotterGraph__ReInit( &_this->grafico );
  ApplicationConfigScreen__ReInit( &_this->config );
}

/* Finalizer method for the class 'Application::Freq' */
void ApplicationFreq__Done( ApplicationFreq _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationFreq );

  /* Finalize all embedded objects */
  ViewsText__Done( &_this->val_fr_0 );
  ViewsText__Done( &_this->val_fr_1 );
  ViewsText__Done( &_this->val_fr_2 );
  ViewsText__Done( &_this->val_t_0 );
  ViewsText__Done( &_this->val_t_1 );
  ViewsText__Done( &_this->val_t_2 );
  ViewsText__Done( &_this->val_t_3 );
  ViewsText__Done( &_this->val_t_4 );
  ViewsText__Done( &_this->labelFreq );
  ViewsText__Done( &_this->val_freq );
  CoreTimer__Done( &_this->intervalo );
  ApplicationModIconButton__Done( &_this->IconButton );
  EffectsInt32Effect__Done( &_this->fadeIn );
  EffectsInt32Effect__Done( &_this->fadeOut );
  ApplicationPlotterGraph__Done( &_this->grafico );
  ApplicationConfigScreen__Done( &_this->config );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Freq' */
void ApplicationFreq__Mark( ApplicationFreq _this )
{
  EwMarkObject( &_this->val_fr_0 );
  EwMarkObject( &_this->val_fr_1 );
  EwMarkObject( &_this->val_fr_2 );
  EwMarkObject( &_this->val_t_0 );
  EwMarkObject( &_this->val_t_1 );
  EwMarkObject( &_this->val_t_2 );
  EwMarkObject( &_this->val_t_3 );
  EwMarkObject( &_this->val_t_4 );
  EwMarkObject( &_this->labelFreq );
  EwMarkObject( &_this->val_freq );
  EwMarkObject( &_this->intervalo );
  EwMarkObject( _this->device );
  EwMarkObject( &_this->IconButton );
  EwMarkObject( &_this->fadeIn );
  EwMarkObject( &_this->fadeOut );
  EwMarkObject( &_this->grafico );
  EwMarkObject( &_this->config );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationFreq_UpdateLayout( ApplicationFreq _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationFreq_UpdateViewState( ApplicationFreq _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationFreq_Init( ApplicationFreq _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreTimer_OnSetPeriod( &_this->intervalo, 1000 / _this->freqV[ EwCheckIndex( _this->freqIdx, 
  6 )]);
  ApplicationFreq_atualizaX( _this );
  ApplicationFreq_atualizaY( _this );
  _this->config.Sair.OnAction = EwNewSlot( _this, ApplicationFreq_sairConfig );
  _this->config.SupMenos.OnAction = EwNewSlot( _this, ApplicationFreq_trocaEscala 
  );
  _this->config.SupMais.OnAction = EwNewSlot( _this, ApplicationFreq_trocaEscala 
  );
  _this->config.InfMenos.OnAction = EwNewSlot( _this, ApplicationFreq_trocaEscala 
  );
  _this->config.InfMais.OnAction = EwNewSlot( _this, ApplicationFreq_trocaEscala 
  );
  EwSignal( EwNewSlot( _this, ApplicationFreq_trocaEscala ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Freq.plotar()' */
void ApplicationFreq_plotar( ApplicationFreq _this, XObject sender )
{
  XFloat v;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  v = ApplicationClasse_getFreq( _this->device );
  ViewsText_OnSetString( &_this->val_freq, EwConcatString( ApplicationFreq_float2String( 
  _this, v, 3 ), EwLoadString( &_Const0060 )));
  v = v - _this->valorMeio;
  ApplicationPlotterGraph_AddData( &_this->grafico, -v );
}

/* 'C' function for method : 'Application::Freq.float2String()' */
XString ApplicationFreq_float2String( ApplicationFreq _this, XFloat numero, XInt32 
  casas )
{
  XString valor;
  XString valor2;
  XInt32 inteiro;
  XFloat dec;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  valor = 0;

  if ( numero < 0.000000f )
  {
    valor = EwLoadString( &_Const0047 );
    inteiro = (XInt32)-numero;
    dec = ( numero + (XFloat)inteiro ) * ( -1.000000f * EwMathPow( 10.000000f, (XFloat)casas 
    ));
  }
  else
  {
    inteiro = (XInt32)numero;
    dec = ( numero - (XFloat)inteiro ) * EwMathPow( 10.000000f, (XFloat)casas );
  }

  dec = EwMathRound( dec );

  if ( dec >= EwMathPow( 10.000000f, (XFloat)casas ))
    dec = dec - 1.000000f;

  valor = EwConcatString( valor, EwNewStringInt( inteiro, 0, 10 ));
  valor2 = EwNewStringInt((XInt32)dec, casas, 10 );
  return EwConcatString( EwConcatString( valor, EwLoadString( &_Const0048 )), valor2 
    );
}

/* 'C' function for method : 'Application::Freq.mostraConfig()' */
void ApplicationFreq_mostraConfig( ApplicationFreq _this, XObject sender )
{
  if ( _this->fadeOut.Super1.Enabled )
    return;

  if ( sender == ((XObject)&_this->fadeIn ))
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->fadeIn, 0 );

  if ( sender == ((XObject)&_this->IconButton ))
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->fadeIn, 1 );
}

/* 'C' function for method : 'Application::Freq.sairConfig()' */
void ApplicationFreq_sairConfig( ApplicationFreq _this, XObject sender )
{
  if ( _this->fadeIn.Super1.Enabled )
    return;

  if ( sender == ((XObject)&_this->fadeOut ))
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->fadeOut, 0 );

  if ( sender == ((XObject)&_this->config.Sair ))
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->fadeOut, 1 );
}

/* 'C' function for method : 'Application::Freq.trocaEscala()' */
void ApplicationFreq_trocaEscala( ApplicationFreq _this, XObject sender )
{
  if ( sender == ((XObject)&_this->config.SupMenos ))
  {
    if ( _this->unitsIdx > 0 )
    {
      _this->unitsIdx = _this->unitsIdx - 1;
      ApplicationFreq_atualizaY( _this );
    }
  }
  else
    if ( sender == ((XObject)&_this->config.SupMais ))
    {
      if ( _this->unitsIdx < 7 )
      {
        _this->unitsIdx = _this->unitsIdx + 1;
        ApplicationFreq_atualizaY( _this );
      }
    }
    else
      if ( sender == ((XObject)&_this->config.InfMenos ))
      {
        if ( _this->freqIdx > 0 )
        {
          _this->freqIdx = _this->freqIdx - 1;
          CoreTimer_OnSetPeriod( &_this->intervalo, 1000 / _this->freqV[ EwCheckIndex( 
          _this->freqIdx, 6 )]);
          ApplicationFreq_atualizaX( _this );
          ApplicationPlotterGraph_ClearPath( &_this->grafico );
        }
      }
      else
        if ( sender == ((XObject)&_this->config.InfMais ))
        {
          if ( _this->freqIdx < 5 )
          {
            _this->freqIdx = _this->freqIdx + 1;
            CoreTimer_OnSetPeriod( &_this->intervalo, 1000 / _this->freqV[ EwCheckIndex( 
            _this->freqIdx, 6 )]);
            ApplicationFreq_atualizaX( _this );
            ApplicationPlotterGraph_ClearPath( &_this->grafico );
          }
        }

  if ( _this->unitsIdx == 0 )
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupMenos, 0 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupMais, 1 );
  }
  else
    if ( _this->unitsIdx == 7 )
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupMenos, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupMais, 0 );
    }
    else
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupMenos, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupMais, 1 );
    }

  if ( _this->freqIdx == 0 )
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMenos, 0 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMais, 1 );
  }
  else
    if ( _this->freqIdx == 5 )
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMenos, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMais, 0 );
    }
    else
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMenos, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMais, 1 );
    }

  ViewsText_OnSetString( &_this->config.SupVal, EwConcatString( EwConcatString( 
  EwConcatString( ApplicationFreq_float2String( _this, _this->valorMeio - _this->unitsV[ 
  EwCheckIndex( _this->unitsIdx, 8 )], 3 ), EwLoadString( &_Const0061 )), ApplicationFreq_float2String( 
  _this, _this->valorMeio + _this->unitsV[ EwCheckIndex( _this->unitsIdx, 8 )], 
  3 )), EwLoadString( &_Const0060 )));
  ViewsText_OnSetString( &_this->config.InfVal, EwConcatString( EwConcatString( 
  EwConcatString( EwNewStringInt( _this->freqV[ EwCheckIndex( _this->freqIdx, 6 
  )], 0, 10 ), EwLoadString( &_Const0062 )), EwNewStringInt( 1000 / _this->freqV[ 
  EwCheckIndex( _this->freqIdx, 6 )], 0, 10 )), EwLoadString( &_Const0063 )));
}

/* Atualiza os rótulos do eixo vertical do gráfico e a proporção de plotagem. */
void ApplicationFreq_atualizaY( ApplicationFreq _this )
{
  ApplicationPlotterGraph_OnSetVerticalRatio( &_this->grafico, (XFloat)( EwGetRectH( 
  _this->grafico.Super2.Bounds ) / 3 ) / _this->unitsV[ EwCheckIndex( _this->unitsIdx, 
  8 )]);
  ViewsText_OnSetString( &_this->val_fr_1, EwConcatString( ApplicationFreq_float2String( 
  _this, _this->valorMeio, 3 ), EwLoadString( &_Const0060 )));
  ViewsText_OnSetString( &_this->val_fr_0, EwConcatString( ApplicationFreq_float2String( 
  _this, _this->valorMeio - _this->unitsV[ EwCheckIndex( _this->unitsIdx, 8 )], 
  3 ), EwLoadString( &_Const0060 )));
  ViewsText_OnSetString( &_this->val_fr_2, EwConcatString( ApplicationFreq_float2String( 
  _this, _this->valorMeio + _this->unitsV[ EwCheckIndex( _this->unitsIdx, 8 )], 
  3 ), EwLoadString( &_Const0060 )));
}

/* Atualiza os rótulos do eixo X no gráfico. */
void ApplicationFreq_atualizaX( ApplicationFreq _this )
{
  ViewsText_OnSetString( &_this->val_t_1, EwConcatString( ApplicationFreq_float2String( 
  _this, ((XFloat)( EwGetRectW( _this->grafico.Super2.Bounds ) / 4 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 2.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_2, EwConcatString( ApplicationFreq_float2String( 
  _this, ((XFloat)( EwGetRectW( _this->grafico.Super2.Bounds ) / 2 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 2.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_3, EwConcatString( ApplicationFreq_float2String( 
  _this, ((XFloat)(( 3 * EwGetRectW( _this->grafico.Super2.Bounds )) / 4 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 2.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_4, EwConcatString( ApplicationFreq_float2String( 
  _this, ((XFloat)EwGetRectW( _this->grafico.Super2.Bounds ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 2.000000f, 1 ), EwLoadString( &_Const0064 )));
}

/* Variants derived from the class : 'Application::Freq' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFreq )
EW_END_OF_CLASS_VARIANTS( ApplicationFreq )

/* Virtual Method Table (VMT) for the class : 'Application::Freq' */
EW_DEFINE_CLASS( ApplicationFreq, CoreGroup, "Application::Freq" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
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
  ApplicationFreq_UpdateLayout,
  ApplicationFreq_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationFreq )

/* Initializer for the class 'Application::Mag' */
void ApplicationMag__Init( ApplicationMag _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->intervalo, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_m_inf, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_m_meio, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_m_sup, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_ini, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_2, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_3, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_4, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_T, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_S, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_R, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelUnidades, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->fadeIn, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->fadeOut, &_this->_XObject, 0 );
  ApplicationModIconButton__Init( &_this->IconButton, &_this->_XObject, 0 );
  ApplicationPlotterTripleGraph__Init( &_this->grafico, &_this->_XObject, 0 );
  ApplicationConfigScreen__Init( &_this->config, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationMag );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0008 );
  CoreTimer_OnSetPeriod( &_this->intervalo, 1000 );
  CoreTimer_OnSetEnabled( &_this->intervalo, 1 );
  CoreRectView__OnSetBounds( &_this->val_m_inf, _Const0065 );
  ViewsText_OnSetAlignment( &_this->val_m_inf, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_inf, EwLoadString( &_Const0066 ));
  ViewsText_OnSetColor( &_this->val_m_inf, _Const0015 );
  CoreRectView__OnSetBounds( &_this->val_m_meio, _Const0067 );
  ViewsText_OnSetAlignment( &_this->val_m_meio, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_meio, EwLoadString( &_Const0068 ));
  ViewsText_OnSetColor( &_this->val_m_meio, _Const0015 );
  CoreRectView__OnSetBounds( &_this->val_m_sup, _Const0069 );
  ViewsText_OnSetAlignment( &_this->val_m_sup, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_sup, EwLoadString( &_Const006A ));
  ViewsText_OnSetColor( &_this->val_m_sup, _Const0015 );
  CoreRectView__OnSetBounds( &_this->val_t_ini, _Const0051 );
  ViewsText_OnSetString( &_this->val_t_ini, EwLoadString( &_Const0052 ));
  CoreRectView__OnSetBounds( &_this->val_t_1, _Const0053 );
  ViewsText_OnSetString( &_this->val_t_1, EwLoadString( &_Const0054 ));
  CoreRectView__OnSetBounds( &_this->val_t_2, _Const0055 );
  ViewsText_OnSetString( &_this->val_t_2, EwLoadString( &_Const0056 ));
  CoreRectView__OnSetBounds( &_this->val_t_3, _Const0057 );
  ViewsText_OnSetString( &_this->val_t_3, EwLoadString( &_Const0058 ));
  CoreRectView__OnSetBounds( &_this->val_t_4, _Const006B );
  ViewsText_OnSetAlignment( &_this->val_t_4, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_t_4, EwLoadString( &_Const005A ));
  CoreView_OnSetLayout((CoreView)&_this->val_T, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_T, _Const006C );
  ViewsText_OnSetAlignment( &_this->val_T, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_T, EwLoadString( &_Const006D ));
  ViewsText_OnSetColor( &_this->val_T, Applicationcor_T );
  CoreView_OnSetLayout((CoreView)&_this->val_S, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_S, _Const006E );
  ViewsText_OnSetAlignment( &_this->val_S, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_S, EwLoadString( &_Const006D ));
  ViewsText_OnSetColor( &_this->val_S, Applicationcor_S );
  CoreView_OnSetLayout((CoreView)&_this->val_R, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_R, _Const006F );
  ViewsText_OnSetAlignment( &_this->val_R, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_R, EwLoadString( &_Const006D ));
  ViewsText_OnSetColor( &_this->val_R, Applicationcor_R );
  CoreRectView__OnSetBounds( &_this->labelUnidades, _Const0070 );
  ViewsText_OnSetAutoSize( &_this->labelUnidades, 0 );
  ViewsText_OnSetAlignment( &_this->labelUnidades, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelUnidades, EwLoadString( &_Const0071 ));
  _this->valorMeio = 120.000000f;
  _this->freqV[ 0 ] = 1;
  _this->freqV[ 1 ] = 2;
  _this->freqV[ 2 ] = 5;
  _this->freqV[ 3 ] = 10;
  _this->freqV[ 4 ] = 20;
  _this->freqV[ 5 ] = 30;
  _this->freqIdx = 3;
  _this->unitsV[ 0 ] = 1.000000f;
  _this->unitsV[ 1 ] = 2.000000f;
  _this->unitsV[ 2 ] = 5.000000f;
  _this->unitsV[ 3 ] = 10.000000f;
  _this->unitsV[ 4 ] = 15.000000f;
  _this->unitsV[ 5 ] = 20.000000f;
  EffectsEffect_OnSetOscillations((EffectsEffect)&_this->fadeIn, 0 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->fadeIn, EffectsTimingLinear );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->fadeIn, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->fadeIn, 500 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->fadeOut, EffectsTimingLinear 
  );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->fadeOut, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->fadeOut, 500 );
  _this->fadeOut.Value2 = 0;
  _this->fadeOut.Value1 = 255;
  CoreRectView__OnSetBounds( &_this->IconButton, _Const005E );
  ApplicationModIconButton_OnSetIconIndex( &_this->IconButton, 7 );
  CoreRectView__OnSetBounds( &_this->grafico, _Const005F );
  ApplicationPlotterTripleGraph_OnSetStrokeColorR( &_this->grafico, Applicationcor_R 
  );
  ApplicationPlotterTripleGraph_OnSetStrokeColorS( &_this->grafico, Applicationcor_S 
  );
  ApplicationPlotterTripleGraph_OnSetStrokeColorT( &_this->grafico, Applicationcor_T 
  );
  CoreRectView__OnSetBounds( &_this->config, _Const005F );
  CoreGroup__OnSetOpacity( &_this->config, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_m_inf ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_m_meio ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_m_sup ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_ini ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_T ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_S ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_R ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelUnidades ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->grafico ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->config ), 0 );
  _this->intervalo.OnTrigger = EwNewSlot( _this, ApplicationMag_plotar );
  ViewsText_OnSetFont( &_this->val_m_inf, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->val_m_meio, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->val_m_sup, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->val_t_ini, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->val_t_1, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_t_2, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_t_3, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_t_4, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_T, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_S, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_R, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->labelUnidades, EwLoadResource( &ApplicationNumbersG, 
  ResourcesFont ));
  _this->device = EwGetAutoObject( &ApplicationAutoobjeto, ApplicationClasse );
  _this->fadeIn.Super1.OnFinished = EwNewSlot( _this, ApplicationMag_mostraConfig 
  );
  _this->fadeIn.Outlet = EwNewRef( &_this->config, CoreGroup_OnGetOpacity, CoreGroup__OnSetOpacity 
  );
  _this->fadeOut.Super1.OnFinished = EwNewSlot( _this, ApplicationMag_sairConfig 
  );
  _this->fadeOut.Outlet = EwNewRef( &_this->config, CoreGroup_OnGetOpacity, CoreGroup__OnSetOpacity 
  );
  _this->IconButton.OnAction = EwNewSlot( _this, ApplicationMag_mostraConfig );
  ApplicationModIconButton_OnSetIcon( &_this->IconButton, EwLoadResource( &ResourcesSymbolIconsMedium, 
  ResourcesBitmap ));

  /* Call the user defined constructor */
  ApplicationMag_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Mag' */
void ApplicationMag__ReInit( ApplicationMag _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->intervalo );
  ViewsText__ReInit( &_this->val_m_inf );
  ViewsText__ReInit( &_this->val_m_meio );
  ViewsText__ReInit( &_this->val_m_sup );
  ViewsText__ReInit( &_this->val_t_ini );
  ViewsText__ReInit( &_this->val_t_1 );
  ViewsText__ReInit( &_this->val_t_2 );
  ViewsText__ReInit( &_this->val_t_3 );
  ViewsText__ReInit( &_this->val_t_4 );
  ViewsText__ReInit( &_this->val_T );
  ViewsText__ReInit( &_this->val_S );
  ViewsText__ReInit( &_this->val_R );
  ViewsText__ReInit( &_this->labelUnidades );
  EffectsInt32Effect__ReInit( &_this->fadeIn );
  EffectsInt32Effect__ReInit( &_this->fadeOut );
  ApplicationModIconButton__ReInit( &_this->IconButton );
  ApplicationPlotterTripleGraph__ReInit( &_this->grafico );
  ApplicationConfigScreen__ReInit( &_this->config );
}

/* Finalizer method for the class 'Application::Mag' */
void ApplicationMag__Done( ApplicationMag _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationMag );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->intervalo );
  ViewsText__Done( &_this->val_m_inf );
  ViewsText__Done( &_this->val_m_meio );
  ViewsText__Done( &_this->val_m_sup );
  ViewsText__Done( &_this->val_t_ini );
  ViewsText__Done( &_this->val_t_1 );
  ViewsText__Done( &_this->val_t_2 );
  ViewsText__Done( &_this->val_t_3 );
  ViewsText__Done( &_this->val_t_4 );
  ViewsText__Done( &_this->val_T );
  ViewsText__Done( &_this->val_S );
  ViewsText__Done( &_this->val_R );
  ViewsText__Done( &_this->labelUnidades );
  EffectsInt32Effect__Done( &_this->fadeIn );
  EffectsInt32Effect__Done( &_this->fadeOut );
  ApplicationModIconButton__Done( &_this->IconButton );
  ApplicationPlotterTripleGraph__Done( &_this->grafico );
  ApplicationConfigScreen__Done( &_this->config );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Mag' */
void ApplicationMag__Mark( ApplicationMag _this )
{
  EwMarkObject( &_this->intervalo );
  EwMarkObject( &_this->val_m_inf );
  EwMarkObject( &_this->val_m_meio );
  EwMarkObject( &_this->val_m_sup );
  EwMarkObject( &_this->val_t_ini );
  EwMarkObject( &_this->val_t_1 );
  EwMarkObject( &_this->val_t_2 );
  EwMarkObject( &_this->val_t_3 );
  EwMarkObject( &_this->val_t_4 );
  EwMarkObject( &_this->val_T );
  EwMarkObject( &_this->val_S );
  EwMarkObject( &_this->val_R );
  EwMarkObject( &_this->labelUnidades );
  EwMarkObject( _this->device );
  EwMarkObject( &_this->fadeIn );
  EwMarkObject( &_this->fadeOut );
  EwMarkObject( &_this->IconButton );
  EwMarkObject( &_this->grafico );
  EwMarkObject( &_this->config );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationMag_UpdateLayout( ApplicationMag _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationMag_UpdateViewState( ApplicationMag _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationMag_Init( ApplicationMag _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreTimer_OnSetPeriod( &_this->intervalo, 1000 / _this->freqV[ EwCheckIndex( _this->freqIdx, 
  6 )]);
  ApplicationMag_atualizaX( _this );
  ApplicationMag_atualizaY( _this );
  _this->config.Sair.OnAction = EwNewSlot( _this, ApplicationMag_sairConfig );
  _this->config.SupMenos.OnAction = EwNewSlot( _this, ApplicationMag_trocaEscala 
  );
  _this->config.SupMais.OnAction = EwNewSlot( _this, ApplicationMag_trocaEscala 
  );
  _this->config.InfMenos.OnAction = EwNewSlot( _this, ApplicationMag_trocaEscala 
  );
  _this->config.InfMais.OnAction = EwNewSlot( _this, ApplicationMag_trocaEscala 
  );
  EwSignal( EwNewSlot( _this, ApplicationMag_trocaEscala ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Mag.plotar()' */
void ApplicationMag_plotar( ApplicationMag _this, XObject sender )
{
  XFloat valor_R;
  XFloat valor_S;
  XFloat valor_T;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  valor_R = ApplicationClasse_getMagR( _this->device );
  valor_S = ApplicationClasse_getMagS( _this->device );
  valor_T = ApplicationClasse_getMagT( _this->device );
  ViewsText_OnSetString( &_this->val_R, ApplicationMag_float2String( _this, valor_R, 
  1 ));
  ViewsText_OnSetString( &_this->val_S, ApplicationMag_float2String( _this, valor_S, 
  1 ));
  ViewsText_OnSetString( &_this->val_T, ApplicationMag_float2String( _this, valor_T, 
  1 ));
  valor_R = valor_R - _this->valorMeio;
  valor_S = valor_S - _this->valorMeio;
  valor_T = valor_T - _this->valorMeio;
  ApplicationPlotterTripleGraph_AddData( &_this->grafico, -valor_R, -valor_S, -valor_T 
  );
}

/* 'C' function for method : 'Application::Mag.float2String()' */
XString ApplicationMag_float2String( ApplicationMag _this, XFloat numero, XInt32 
  casas )
{
  XString valor;
  XString valor2;
  XInt32 inteiro;
  XFloat dec;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  valor = 0;

  if ( numero < 0.000000f )
  {
    valor = EwLoadString( &_Const0047 );
    inteiro = (XInt32)-numero;
    dec = ( numero + (XFloat)inteiro ) * ( -1.000000f * EwMathPow( 10.000000f, (XFloat)casas 
    ));
  }
  else
  {
    inteiro = (XInt32)numero;
    dec = ( numero - (XFloat)inteiro ) * EwMathPow( 10.000000f, (XFloat)casas );
  }

  dec = EwMathRound( dec );

  if ( dec >= EwMathPow( 10.000000f, (XFloat)casas ))
    dec = dec - 1.000000f;

  valor = EwConcatString( valor, EwNewStringInt( inteiro, 0, 10 ));
  valor2 = EwNewStringInt((XInt32)dec, casas, 10 );
  return EwConcatString( EwConcatString( valor, EwLoadString( &_Const0048 )), valor2 
    );
}

/* 'C' function for method : 'Application::Mag.mostraConfig()' */
void ApplicationMag_mostraConfig( ApplicationMag _this, XObject sender )
{
  if ( _this->fadeOut.Super1.Enabled )
    return;

  if ( sender == ((XObject)&_this->fadeIn ))
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->fadeIn, 0 );

  if ( sender == ((XObject)&_this->IconButton ))
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->fadeIn, 1 );
}

/* 'C' function for method : 'Application::Mag.sairConfig()' */
void ApplicationMag_sairConfig( ApplicationMag _this, XObject sender )
{
  if ( _this->fadeIn.Super1.Enabled )
    return;

  if ( sender == ((XObject)&_this->fadeOut ))
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->fadeOut, 0 );

  if ( sender == ((XObject)&_this->config.Sair ))
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->fadeOut, 1 );
}

/* 'C' function for method : 'Application::Mag.trocaEscala()' */
void ApplicationMag_trocaEscala( ApplicationMag _this, XObject sender )
{
  if ( sender == ((XObject)&_this->config.SupMenos ))
  {
    if ( _this->unitsIdx > 0 )
    {
      _this->unitsIdx = _this->unitsIdx - 1;
      ApplicationMag_atualizaY( _this );
    }
  }
  else
    if ( sender == ((XObject)&_this->config.SupMais ))
    {
      if ( _this->unitsIdx < 5 )
      {
        _this->unitsIdx = _this->unitsIdx + 1;
        ApplicationMag_atualizaY( _this );
      }
    }
    else
      if ( sender == ((XObject)&_this->config.InfMenos ))
      {
        if ( _this->freqIdx > 0 )
        {
          _this->freqIdx = _this->freqIdx - 1;
          CoreTimer_OnSetPeriod( &_this->intervalo, 1000 / _this->freqV[ EwCheckIndex( 
          _this->freqIdx, 6 )]);
          ApplicationMag_atualizaX( _this );
          ApplicationPlotterTripleGraph_ClearPath( &_this->grafico );
        }
      }
      else
        if ( sender == ((XObject)&_this->config.InfMais ))
        {
          if ( _this->freqIdx < 5 )
          {
            _this->freqIdx = _this->freqIdx + 1;
            CoreTimer_OnSetPeriod( &_this->intervalo, 1000 / _this->freqV[ EwCheckIndex( 
            _this->freqIdx, 6 )]);
            ApplicationMag_atualizaX( _this );
            ApplicationPlotterTripleGraph_ClearPath( &_this->grafico );
          }
        }

  if ( _this->unitsIdx == 0 )
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupMenos, 0 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupMais, 1 );
  }
  else
    if ( _this->unitsIdx == 5 )
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupMenos, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupMais, 0 );
    }
    else
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupMenos, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupMais, 1 );
    }

  if ( _this->freqIdx == 0 )
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMenos, 0 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMais, 1 );
  }
  else
    if ( _this->freqIdx == 5 )
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMenos, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMais, 0 );
    }
    else
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMenos, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMais, 1 );
    }

  ViewsText_OnSetString( &_this->config.SupVal, EwConcatString( EwConcatString( 
  EwConcatString( ApplicationMag_float2String( _this, _this->valorMeio - _this->unitsV[ 
  EwCheckIndex( _this->unitsIdx, 6 )], 1 ), EwLoadString( &_Const0061 )), ApplicationMag_float2String( 
  _this, _this->valorMeio + _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )], 
  1 )), EwLoadString( &_Const0072 )));
  ViewsText_OnSetString( &_this->config.InfVal, EwConcatString( EwConcatString( 
  EwConcatString( EwNewStringInt( _this->freqV[ EwCheckIndex( _this->freqIdx, 6 
  )], 0, 10 ), EwLoadString( &_Const0062 )), EwNewStringInt( 1000 / _this->freqV[ 
  EwCheckIndex( _this->freqIdx, 6 )], 0, 10 )), EwLoadString( &_Const0063 )));
}

/* Atualiza os rótulos do eixo vertical do gráfico e a proporção de plotagem. */
void ApplicationMag_atualizaY( ApplicationMag _this )
{
  ApplicationPlotterTripleGraph_OnSetVerticalRatio( &_this->grafico, 60.000000f 
  / _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )]);
  ViewsText_OnSetString( &_this->val_m_meio, EwConcatString( ApplicationMag_float2String( 
  _this, _this->valorMeio, 1 ), EwLoadString( &_Const0072 )));
  ViewsText_OnSetString( &_this->val_m_inf, EwConcatString( ApplicationMag_float2String( 
  _this, _this->valorMeio - _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )], 
  1 ), EwLoadString( &_Const0072 )));
  ViewsText_OnSetString( &_this->val_m_sup, EwConcatString( ApplicationMag_float2String( 
  _this, _this->valorMeio + _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )], 
  1 ), EwLoadString( &_Const0072 )));
}

/* Atualiza os rótulos do eixo X no gráfico. */
void ApplicationMag_atualizaX( ApplicationMag _this )
{
  ViewsText_OnSetString( &_this->val_t_1, EwConcatString( ApplicationMag_float2String( 
  _this, ((XFloat)( EwGetRectW( _this->grafico.Super2.Bounds ) / 4 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 2.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_2, EwConcatString( ApplicationMag_float2String( 
  _this, ((XFloat)( EwGetRectW( _this->grafico.Super2.Bounds ) / 2 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 2.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_3, EwConcatString( ApplicationMag_float2String( 
  _this, ((XFloat)(( 3 * EwGetRectW( _this->grafico.Super2.Bounds )) / 4 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 2.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_4, EwConcatString( ApplicationMag_float2String( 
  _this, ((XFloat)EwGetRectW( _this->grafico.Super2.Bounds ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 2.000000f, 1 ), EwLoadString( &_Const0064 )));
}

/* Variants derived from the class : 'Application::Mag' */
EW_DEFINE_CLASS_VARIANTS( ApplicationMag )
EW_END_OF_CLASS_VARIANTS( ApplicationMag )

/* Virtual Method Table (VMT) for the class : 'Application::Mag' */
EW_DEFINE_CLASS( ApplicationMag, CoreGroup, "Application::Mag" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
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
  ApplicationMag_UpdateLayout,
  ApplicationMag_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationMag )

/* Initializer for the class 'Application::Fase' */
void ApplicationFase__Init( ApplicationFase _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreTimer__Init( &_this->intervalo, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelFaseInf, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelFaseMeio, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelFaseSup, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_ini, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_2, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_3, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_4, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_T, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_S, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_R, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelUni, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->fadeIn, &_this->_XObject, 0 );
  EffectsInt32Effect__Init( &_this->fadeOut, &_this->_XObject, 0 );
  ApplicationPlotterTripleGraph__Init( &_this->grafico, &_this->_XObject, 0 );
  ApplicationConfigScreen__Init( &_this->config, &_this->_XObject, 0 );
  ApplicationModIconButton__Init( &_this->IconButton, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationFase );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0008 );
  CoreTimer_OnSetPeriod( &_this->intervalo, 1000 );
  CoreTimer_OnSetEnabled( &_this->intervalo, 1 );
  CoreRectView__OnSetBounds( &_this->labelFaseInf, _Const0049 );
  ViewsText_OnSetAlignment( &_this->labelFaseInf, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelFaseInf, EwLoadString( &_Const0073 ));
  ViewsText_OnSetColor( &_this->labelFaseInf, _Const0015 );
  CoreRectView__OnSetBounds( &_this->labelFaseMeio, _Const004C );
  ViewsText_OnSetAlignment( &_this->labelFaseMeio, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelFaseMeio, EwLoadString( &_Const0074 ));
  ViewsText_OnSetColor( &_this->labelFaseMeio, _Const0015 );
  CoreRectView__OnSetBounds( &_this->labelFaseSup, _Const004F );
  ViewsText_OnSetAlignment( &_this->labelFaseSup, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelFaseSup, EwLoadString( &_Const0075 ));
  ViewsText_OnSetColor( &_this->labelFaseSup, _Const0015 );
  CoreRectView__OnSetBounds( &_this->val_t_ini, _Const0051 );
  ViewsText_OnSetString( &_this->val_t_ini, EwLoadString( &_Const0052 ));
  CoreRectView__OnSetBounds( &_this->val_t_1, _Const0053 );
  ViewsText_OnSetString( &_this->val_t_1, EwLoadString( &_Const0054 ));
  CoreRectView__OnSetBounds( &_this->val_t_2, _Const0055 );
  ViewsText_OnSetString( &_this->val_t_2, EwLoadString( &_Const0056 ));
  CoreRectView__OnSetBounds( &_this->val_t_3, _Const0057 );
  ViewsText_OnSetString( &_this->val_t_3, EwLoadString( &_Const0058 ));
  CoreRectView__OnSetBounds( &_this->val_t_4, _Const0076 );
  ViewsText_OnSetString( &_this->val_t_4, EwLoadString( &_Const005A ));
  CoreView_OnSetLayout((CoreView)&_this->val_T, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_T, _Const006C );
  ViewsText_OnSetAlignment( &_this->val_T, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_T, EwLoadString( &_Const006D ));
  ViewsText_OnSetColor( &_this->val_T, Applicationcor_T );
  CoreView_OnSetLayout((CoreView)&_this->val_S, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_S, _Const006E );
  ViewsText_OnSetAlignment( &_this->val_S, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_S, EwLoadString( &_Const006D ));
  ViewsText_OnSetColor( &_this->val_S, Applicationcor_S );
  CoreView_OnSetLayout((CoreView)&_this->val_R, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_R, _Const006F );
  ViewsText_OnSetAlignment( &_this->val_R, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_R, EwLoadString( &_Const006D ));
  ViewsText_OnSetColor( &_this->val_R, Applicationcor_R );
  CoreRectView__OnSetBounds( &_this->labelUni, _Const0070 );
  ViewsText_OnSetAutoSize( &_this->labelUni, 0 );
  ViewsText_OnSetAlignment( &_this->labelUni, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelUni, EwLoadString( &_Const0077 ));
  _this->freqV[ 0 ] = 1;
  _this->freqV[ 1 ] = 2;
  _this->freqV[ 2 ] = 5;
  _this->freqV[ 3 ] = 10;
  _this->freqV[ 4 ] = 20;
  _this->freqV[ 5 ] = 30;
  _this->freqIdx = 3;
  EffectsEffect_OnSetOscillations((EffectsEffect)&_this->fadeIn, 0 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->fadeIn, EffectsTimingLinear );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->fadeIn, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->fadeIn, 500 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->fadeOut, EffectsTimingLinear 
  );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->fadeOut, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->fadeOut, 500 );
  _this->fadeOut.Value2 = 0;
  _this->fadeOut.Value1 = 255;
  CoreRectView__OnSetBounds( &_this->grafico, _Const005F );
  ApplicationPlotterTripleGraph_OnSetVerticalRatio( &_this->grafico, 0.500000f );
  ApplicationPlotterTripleGraph_OnSetStrokeColorR( &_this->grafico, Applicationcor_R 
  );
  ApplicationPlotterTripleGraph_OnSetStrokeColorS( &_this->grafico, Applicationcor_S 
  );
  ApplicationPlotterTripleGraph_OnSetStrokeColorT( &_this->grafico, Applicationcor_T 
  );
  CoreRectView__OnSetBounds( &_this->config, _Const005F );
  CoreGroup__OnSetOpacity( &_this->config, 0 );
  CoreRectView__OnSetBounds( &_this->IconButton, _Const005E );
  ApplicationModIconButton_OnSetIconIndex( &_this->IconButton, 7 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelFaseInf ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelFaseMeio ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelFaseSup ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_ini ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_T ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_S ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_R ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelUni ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->grafico ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->config ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->IconButton ), 0 );
  _this->intervalo.OnTrigger = EwNewSlot( _this, ApplicationFase_plotar );
  ViewsText_OnSetFont( &_this->labelFaseInf, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->labelFaseMeio, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->labelFaseSup, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->val_t_ini, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->val_t_1, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_t_2, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_t_3, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_t_4, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_T, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_S, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_R, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->labelUni, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  _this->device = EwGetAutoObject( &ApplicationAutoobjeto, ApplicationClasse );
  _this->fadeIn.Super1.OnFinished = EwNewSlot( _this, ApplicationFase_mostraConfig 
  );
  _this->fadeIn.Outlet = EwNewRef( &_this->config, CoreGroup_OnGetOpacity, CoreGroup__OnSetOpacity 
  );
  _this->fadeOut.Super1.OnFinished = EwNewSlot( _this, ApplicationFase_sairConfig 
  );
  _this->fadeOut.Outlet = EwNewRef( &_this->config, CoreGroup_OnGetOpacity, CoreGroup__OnSetOpacity 
  );
  _this->IconButton.OnAction = EwNewSlot( _this, ApplicationFase_mostraConfig );
  ApplicationModIconButton_OnSetIcon( &_this->IconButton, EwLoadResource( &ResourcesSymbolIconsMedium, 
  ResourcesBitmap ));

  /* Call the user defined constructor */
  ApplicationFase_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Fase' */
void ApplicationFase__ReInit( ApplicationFase _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreTimer__ReInit( &_this->intervalo );
  ViewsText__ReInit( &_this->labelFaseInf );
  ViewsText__ReInit( &_this->labelFaseMeio );
  ViewsText__ReInit( &_this->labelFaseSup );
  ViewsText__ReInit( &_this->val_t_ini );
  ViewsText__ReInit( &_this->val_t_1 );
  ViewsText__ReInit( &_this->val_t_2 );
  ViewsText__ReInit( &_this->val_t_3 );
  ViewsText__ReInit( &_this->val_t_4 );
  ViewsText__ReInit( &_this->val_T );
  ViewsText__ReInit( &_this->val_S );
  ViewsText__ReInit( &_this->val_R );
  ViewsText__ReInit( &_this->labelUni );
  EffectsInt32Effect__ReInit( &_this->fadeIn );
  EffectsInt32Effect__ReInit( &_this->fadeOut );
  ApplicationPlotterTripleGraph__ReInit( &_this->grafico );
  ApplicationConfigScreen__ReInit( &_this->config );
  ApplicationModIconButton__ReInit( &_this->IconButton );
}

/* Finalizer method for the class 'Application::Fase' */
void ApplicationFase__Done( ApplicationFase _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationFase );

  /* Finalize all embedded objects */
  CoreTimer__Done( &_this->intervalo );
  ViewsText__Done( &_this->labelFaseInf );
  ViewsText__Done( &_this->labelFaseMeio );
  ViewsText__Done( &_this->labelFaseSup );
  ViewsText__Done( &_this->val_t_ini );
  ViewsText__Done( &_this->val_t_1 );
  ViewsText__Done( &_this->val_t_2 );
  ViewsText__Done( &_this->val_t_3 );
  ViewsText__Done( &_this->val_t_4 );
  ViewsText__Done( &_this->val_T );
  ViewsText__Done( &_this->val_S );
  ViewsText__Done( &_this->val_R );
  ViewsText__Done( &_this->labelUni );
  EffectsInt32Effect__Done( &_this->fadeIn );
  EffectsInt32Effect__Done( &_this->fadeOut );
  ApplicationPlotterTripleGraph__Done( &_this->grafico );
  ApplicationConfigScreen__Done( &_this->config );
  ApplicationModIconButton__Done( &_this->IconButton );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Fase' */
void ApplicationFase__Mark( ApplicationFase _this )
{
  EwMarkObject( &_this->intervalo );
  EwMarkObject( &_this->labelFaseInf );
  EwMarkObject( &_this->labelFaseMeio );
  EwMarkObject( &_this->labelFaseSup );
  EwMarkObject( &_this->val_t_ini );
  EwMarkObject( &_this->val_t_1 );
  EwMarkObject( &_this->val_t_2 );
  EwMarkObject( &_this->val_t_3 );
  EwMarkObject( &_this->val_t_4 );
  EwMarkObject( &_this->val_T );
  EwMarkObject( &_this->val_S );
  EwMarkObject( &_this->val_R );
  EwMarkObject( &_this->labelUni );
  EwMarkObject( _this->device );
  EwMarkObject( &_this->fadeIn );
  EwMarkObject( &_this->fadeOut );
  EwMarkObject( &_this->grafico );
  EwMarkObject( &_this->config );
  EwMarkObject( &_this->IconButton );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationFase_UpdateLayout( ApplicationFase _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationFase_UpdateViewState( ApplicationFase _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationFase_Init( ApplicationFase _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreTimer_OnSetPeriod( &_this->intervalo, 1000 / _this->freqV[ EwCheckIndex( _this->freqIdx, 
  6 )]);
  ApplicationFase_atualizaX( _this );
  ApplicationFase_setConfigScreen( _this );
  EwSignal( EwNewSlot( _this, ApplicationFase_trocaEscala ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Fase.plotar()' */
void ApplicationFase_plotar( ApplicationFase _this, XObject sender )
{
  XFloat valor_R;
  XFloat valor_S;
  XFloat valor_T;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  valor_R = ApplicationClasse_getFaseR( _this->device );
  valor_S = ApplicationClasse_getFaseS( _this->device );
  valor_T = ApplicationClasse_getFaseT( _this->device );
  ViewsText_OnSetString( &_this->val_R, ApplicationFase_float2String( _this, valor_R, 
  1 ));
  ViewsText_OnSetString( &_this->val_S, ApplicationFase_float2String( _this, valor_S, 
  1 ));
  ViewsText_OnSetString( &_this->val_T, ApplicationFase_float2String( _this, valor_T, 
  1 ));
  ApplicationPlotterTripleGraph_AddData( &_this->grafico, -valor_R, -valor_S, -valor_T 
  );
}

/* 'C' function for method : 'Application::Fase.float2String()' */
XString ApplicationFase_float2String( ApplicationFase _this, XFloat numero, XInt32 
  casas )
{
  XString valor;
  XString valor2;
  XInt32 inteiro;
  XFloat dec;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  valor = 0;

  if ( numero < 0.000000f )
  {
    valor = EwLoadString( &_Const0047 );
    inteiro = (XInt32)-numero;
    dec = ( numero + (XFloat)inteiro ) * ( -1.000000f * EwMathPow( 10.000000f, (XFloat)casas 
    ));
  }
  else
  {
    inteiro = (XInt32)numero;
    dec = ( numero - (XFloat)inteiro ) * EwMathPow( 10.000000f, (XFloat)casas );
  }

  dec = EwMathRound( dec );

  if ( dec >= EwMathPow( 10.000000f, (XFloat)casas ))
    dec = dec - 1.000000f;

  valor = EwConcatString( valor, EwNewStringInt( inteiro, 0, 10 ));
  valor2 = EwNewStringInt((XInt32)dec, casas, 10 );
  return EwConcatString( EwConcatString( valor, EwLoadString( &_Const0048 )), valor2 
    );
}

/* 'C' function for method : 'Application::Fase.mostraConfig()' */
void ApplicationFase_mostraConfig( ApplicationFase _this, XObject sender )
{
  if ( _this->fadeOut.Super1.Enabled )
    return;

  if ( sender == ((XObject)&_this->fadeIn ))
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->fadeIn, 0 );

  if ( sender == ((XObject)&_this->IconButton ))
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->fadeIn, 1 );
}

/* 'C' function for method : 'Application::Fase.sairConfig()' */
void ApplicationFase_sairConfig( ApplicationFase _this, XObject sender )
{
  if ( _this->fadeIn.Super1.Enabled )
    return;

  if ( sender == ((XObject)&_this->fadeOut ))
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->fadeOut, 0 );

  if ( sender == ((XObject)&_this->config.Sair ))
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->fadeOut, 1 );
}

/* 'C' function for method : 'Application::Fase.trocaEscala()' */
void ApplicationFase_trocaEscala( ApplicationFase _this, XObject sender )
{
  if ( sender == ((XObject)&_this->config.InfMenos ))
  {
    if ( _this->freqIdx > 0 )
    {
      _this->freqIdx = _this->freqIdx - 1;
      CoreTimer_OnSetPeriod( &_this->intervalo, 1000 / _this->freqV[ EwCheckIndex( 
      _this->freqIdx, 6 )]);
      ApplicationFase_atualizaX( _this );
      ApplicationPlotterTripleGraph_ClearPath( &_this->grafico );
    }
  }
  else
    if ( sender == ((XObject)&_this->config.InfMais ))
    {
      if ( _this->freqIdx < 5 )
      {
        _this->freqIdx = _this->freqIdx + 1;
        CoreTimer_OnSetPeriod( &_this->intervalo, 1000 / _this->freqV[ EwCheckIndex( 
        _this->freqIdx, 6 )]);
        ApplicationFase_atualizaX( _this );
        ApplicationPlotterTripleGraph_ClearPath( &_this->grafico );
      }
    }

  if ( _this->freqIdx == 0 )
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMenos, 0 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMais, 1 );
  }
  else
    if ( _this->freqIdx == 5 )
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMenos, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMais, 0 );
    }
    else
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMenos, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMais, 1 );
    }

  ViewsText_OnSetString( &_this->config.InfVal, EwConcatString( EwConcatString( 
  EwConcatString( EwNewStringInt( _this->freqV[ EwCheckIndex( _this->freqIdx, 6 
  )], 0, 10 ), EwLoadString( &_Const0062 )), EwNewStringInt( 1000 / _this->freqV[ 
  EwCheckIndex( _this->freqIdx, 6 )], 0, 10 )), EwLoadString( &_Const0063 )));
}

/* 'C' function for method : 'Application::Fase.setConfigScreen()' */
void ApplicationFase_setConfigScreen( ApplicationFase _this )
{
  _this->config.Sair.OnAction = EwNewSlot( _this, ApplicationFase_sairConfig );
  _this->config.SupMenos.OnAction = EwNewSlot( _this, ApplicationFase_trocaEscala 
  );
  _this->config.SupMais.OnAction = EwNewSlot( _this, ApplicationFase_trocaEscala 
  );
  _this->config.InfMenos.OnAction = EwNewSlot( _this, ApplicationFase_trocaEscala 
  );
  _this->config.InfMais.OnAction = EwNewSlot( _this, ApplicationFase_trocaEscala 
  );
  ViewsText_OnSetVisible( &_this->config.labelSup, 0 );
  ViewsText_OnSetVisible( &_this->config.SupVal, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->config.SupMais, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->config.SupMenos, 0 );
}

/* Atualiza os rótulos do eixo X no gráfico. */
void ApplicationFase_atualizaX( ApplicationFase _this )
{
  ViewsText_OnSetString( &_this->val_t_1, EwConcatString( ApplicationFase_float2String( 
  _this, ((XFloat)( EwGetRectW( _this->grafico.Super2.Bounds ) / 4 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 2.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_2, EwConcatString( ApplicationFase_float2String( 
  _this, ((XFloat)( EwGetRectW( _this->grafico.Super2.Bounds ) / 2 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 2.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_3, EwConcatString( ApplicationFase_float2String( 
  _this, ((XFloat)(( 3 * EwGetRectW( _this->grafico.Super2.Bounds )) / 4 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 2.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_4, EwConcatString( ApplicationFase_float2String( 
  _this, ((XFloat)EwGetRectW( _this->grafico.Super2.Bounds ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 2.000000f, 1 ), EwLoadString( &_Const0064 )));
}

/* Variants derived from the class : 'Application::Fase' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFase )
EW_END_OF_CLASS_VARIANTS( ApplicationFase )

/* Virtual Method Table (VMT) for the class : 'Application::Fase' */
EW_DEFINE_CLASS( ApplicationFase, CoreGroup, "Application::Fase" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
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
  ApplicationFase_UpdateLayout,
  ApplicationFase_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationFase )

/* Initializer for the class 'Application::FFT' */
void ApplicationFFT__Init( ApplicationFFT _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsLine__Init( &_this->linha_h_10, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_h_20, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_h_30, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_h_40, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_m_25, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_m_50, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_m_75, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_h_10, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_h_20, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_h_30, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_h_40, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_m_25, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_m_50, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_m_75, &_this->_XObject, 0 );
  ChartsGraph__Init( &_this->graf_FFT, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->borda, &_this->_XObject, 0 );
  CoreTimer__Init( &_this->intervalo, &_this->_XObject, 0 );
  ApplicationModifiedButton__Init( &_this->botao_R, &_this->_XObject, 0 );
  ApplicationModifiedButton__Init( &_this->botao_S, &_this->_XObject, 0 );
  ApplicationModifiedButton__Init( &_this->botao_T, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationFFT );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0008 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_10, _Const0078 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_10, _Const0079 );
  ViewsLine_OnSetWidth( &_this->linha_h_10, 1 );
  ViewsLine_OnSetColor( &_this->linha_h_10, _Const007A );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_20, _Const007B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_20, _Const007C );
  ViewsLine_OnSetWidth( &_this->linha_h_20, 1 );
  ViewsLine_OnSetColor( &_this->linha_h_20, _Const007A );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_30, _Const007D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_30, _Const007E );
  ViewsLine_OnSetWidth( &_this->linha_h_30, 1 );
  ViewsLine_OnSetColor( &_this->linha_h_30, _Const007A );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_40, _Const007F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_40, _Const0080 );
  ViewsLine_OnSetWidth( &_this->linha_h_40, 1 );
  ViewsLine_OnSetColor( &_this->linha_h_40, _Const007A );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_25, _Const0081 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_25, _Const0082 );
  ViewsLine_OnSetWidth( &_this->linha_m_25, 1 );
  ViewsLine_OnSetColor( &_this->linha_m_25, _Const007A );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_50, _Const0083 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_50, _Const0084 );
  ViewsLine_OnSetWidth( &_this->linha_m_50, 1 );
  ViewsLine_OnSetColor( &_this->linha_m_50, _Const007A );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_75, _Const0085 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_75, _Const0086 );
  ViewsLine_OnSetWidth( &_this->linha_m_75, 1 );
  ViewsLine_OnSetColor( &_this->linha_m_75, _Const007A );
  CoreRectView__OnSetBounds( &_this->val_h_10, _Const0087 );
  ViewsText_OnSetString( &_this->val_h_10, EwLoadString( &_Const0088 ));
  CoreRectView__OnSetBounds( &_this->val_h_20, _Const0089 );
  ViewsText_OnSetString( &_this->val_h_20, EwLoadString( &_Const008A ));
  CoreRectView__OnSetBounds( &_this->val_h_30, _Const008B );
  ViewsText_OnSetString( &_this->val_h_30, EwLoadString( &_Const002B ));
  CoreRectView__OnSetBounds( &_this->val_h_40, _Const008C );
  ViewsText_OnSetString( &_this->val_h_40, EwLoadString( &_Const008D ));
  CoreRectView__OnSetBounds( &_this->val_m_25, _Const008E );
  ViewsText_OnSetAlignment( &_this->val_m_25, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_25, EwLoadString( &_Const008F ));
  CoreRectView__OnSetBounds( &_this->val_m_50, _Const0090 );
  ViewsText_OnSetAlignment( &_this->val_m_50, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_50, EwLoadString( &_Const0091 ));
  CoreRectView__OnSetBounds( &_this->val_m_75, _Const0092 );
  ViewsText_OnSetAlignment( &_this->val_m_75, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_75, EwLoadString( &_Const0093 ));
  CoreRectView__OnSetBounds( &_this->graf_FFT, _Const0094 );
  CoreGroup__OnSetOpacity( &_this->graf_FFT, 255 );
  ChartsGraph_OnSetLineColor( &_this->graf_FFT, Applicationcor_R );
  ChartsGraph_OnSetDotColor( &_this->graf_FFT, _Const004B );
  ChartsGraph_OnSetDotWidth( &_this->graf_FFT, 0.000000f );
  ChartsGraph_OnSetCoordOrigin( &_this->graf_FFT, _Const0095 );
  ChartsGraph_OnSetPixelPerUnit( &_this->graf_FFT, _Const0096 );
  ChartsGraph_OnSetBackColor( &_this->graf_FFT, _Const0097 );
  ChartsGraph_OnSetHorzGridColor( &_this->graf_FFT, _Const0098 );
  ChartsGraph_OnSetVertGridColor( &_this->graf_FFT, _Const0098 );
  CoreRectView__OnSetBounds( &_this->borda, _Const0094 );
  ViewsBorder_OnSetColor( &_this->borda, _Const0015 );
  CoreTimer_OnSetEnabled( &_this->intervalo, 1 );
  CoreRectView__OnSetBounds( &_this->botao_R, _Const0099 );
  ApplicationModifiedButton_OnSetCaption( &_this->botao_R, EwLoadString( &_Const009A 
  ));
  ApplicationModifiedButton_OnSetItemColor( &_this->botao_R, FlatColorOfTouch );
  ApplicationModifiedButton_OnSetItemColorActive( &_this->botao_R, Applicationcor_R 
  );
  CoreRectView__OnSetBounds( &_this->botao_S, _Const009B );
  ApplicationModifiedButton_OnSetCaption( &_this->botao_S, EwLoadString( &_Const009C 
  ));
  ApplicationModifiedButton_OnSetItemColor( &_this->botao_S, FlatColorOfDisabled 
  );
  ApplicationModifiedButton_OnSetItemColorActive( &_this->botao_S, Applicationcor_S 
  );
  CoreRectView__OnSetBounds( &_this->botao_T, _Const009D );
  ApplicationModifiedButton_OnSetCaption( &_this->botao_T, EwLoadString( &_Const009E 
  ));
  ApplicationModifiedButton_OnSetItemColor( &_this->botao_T, FlatColorOfDisabled 
  );
  ApplicationModifiedButton_OnSetItemColorActive( &_this->botao_T, Applicationcor_T 
  );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_h_10 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_h_20 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_h_30 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_h_40 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_m_25 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_m_50 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_m_75 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_h_10 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_h_20 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_h_30 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_h_40 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_m_25 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_m_50 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_m_75 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->graf_FFT ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->borda ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->botao_R ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->botao_S ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->botao_T ), 0 );
  _this->device = EwGetAutoObject( &ApplicationAutoobjeto, ApplicationClasse );
  ViewsText_OnSetFont( &_this->val_h_10, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_h_20, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_h_30, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_h_40, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_m_25, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_m_50, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_m_75, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  _this->intervalo.OnTrigger = EwNewSlot( _this, ApplicationFFT_atualizaFFT );
  _this->botao_R.OnAction = EwNewSlot( _this, ApplicationFFT_acaoBotao );
  _this->botao_S.OnAction = EwNewSlot( _this, ApplicationFFT_acaoBotao );
  _this->botao_T.OnAction = EwNewSlot( _this, ApplicationFFT_acaoBotao );

  /* Call the user defined constructor */
  ApplicationFFT_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::FFT' */
void ApplicationFFT__ReInit( ApplicationFFT _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsLine__ReInit( &_this->linha_h_10 );
  ViewsLine__ReInit( &_this->linha_h_20 );
  ViewsLine__ReInit( &_this->linha_h_30 );
  ViewsLine__ReInit( &_this->linha_h_40 );
  ViewsLine__ReInit( &_this->linha_m_25 );
  ViewsLine__ReInit( &_this->linha_m_50 );
  ViewsLine__ReInit( &_this->linha_m_75 );
  ViewsText__ReInit( &_this->val_h_10 );
  ViewsText__ReInit( &_this->val_h_20 );
  ViewsText__ReInit( &_this->val_h_30 );
  ViewsText__ReInit( &_this->val_h_40 );
  ViewsText__ReInit( &_this->val_m_25 );
  ViewsText__ReInit( &_this->val_m_50 );
  ViewsText__ReInit( &_this->val_m_75 );
  ChartsGraph__ReInit( &_this->graf_FFT );
  ViewsBorder__ReInit( &_this->borda );
  CoreTimer__ReInit( &_this->intervalo );
  ApplicationModifiedButton__ReInit( &_this->botao_R );
  ApplicationModifiedButton__ReInit( &_this->botao_S );
  ApplicationModifiedButton__ReInit( &_this->botao_T );
}

/* Finalizer method for the class 'Application::FFT' */
void ApplicationFFT__Done( ApplicationFFT _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationFFT );

  /* Finalize all embedded objects */
  ViewsLine__Done( &_this->linha_h_10 );
  ViewsLine__Done( &_this->linha_h_20 );
  ViewsLine__Done( &_this->linha_h_30 );
  ViewsLine__Done( &_this->linha_h_40 );
  ViewsLine__Done( &_this->linha_m_25 );
  ViewsLine__Done( &_this->linha_m_50 );
  ViewsLine__Done( &_this->linha_m_75 );
  ViewsText__Done( &_this->val_h_10 );
  ViewsText__Done( &_this->val_h_20 );
  ViewsText__Done( &_this->val_h_30 );
  ViewsText__Done( &_this->val_h_40 );
  ViewsText__Done( &_this->val_m_25 );
  ViewsText__Done( &_this->val_m_50 );
  ViewsText__Done( &_this->val_m_75 );
  ChartsGraph__Done( &_this->graf_FFT );
  ViewsBorder__Done( &_this->borda );
  CoreTimer__Done( &_this->intervalo );
  ApplicationModifiedButton__Done( &_this->botao_R );
  ApplicationModifiedButton__Done( &_this->botao_S );
  ApplicationModifiedButton__Done( &_this->botao_T );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::FFT' */
void ApplicationFFT__Mark( ApplicationFFT _this )
{
  EwMarkObject( _this->device );
  EwMarkObject( &_this->linha_h_10 );
  EwMarkObject( &_this->linha_h_20 );
  EwMarkObject( &_this->linha_h_30 );
  EwMarkObject( &_this->linha_h_40 );
  EwMarkObject( &_this->linha_m_25 );
  EwMarkObject( &_this->linha_m_50 );
  EwMarkObject( &_this->linha_m_75 );
  EwMarkObject( &_this->val_h_10 );
  EwMarkObject( &_this->val_h_20 );
  EwMarkObject( &_this->val_h_30 );
  EwMarkObject( &_this->val_h_40 );
  EwMarkObject( &_this->val_m_25 );
  EwMarkObject( &_this->val_m_50 );
  EwMarkObject( &_this->val_m_75 );
  EwMarkObject( &_this->graf_FFT );
  EwMarkObject( &_this->borda );
  EwMarkObject( &_this->intervalo );
  EwMarkObject( &_this->botao_R );
  EwMarkObject( &_this->botao_S );
  EwMarkObject( &_this->botao_T );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationFFT_UpdateLayout( ApplicationFFT _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationFFT_UpdateViewState( ApplicationFFT _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationFFT_Init( ApplicationFFT _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* 'C' function for method : 'Application::FFT.atualizaFFT()' */
void ApplicationFFT_atualizaFFT( ApplicationFFT _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( _this->faseAtual == 0 )
  {
    ChartsGraph_OnSetCoordinates( &_this->graf_FFT, ApplicationClasse_getFFT_R( 
    _this->device ));
  }
  else
    if ( _this->faseAtual == 1 )
    {
      ChartsGraph_OnSetCoordinates( &_this->graf_FFT, ApplicationClasse_getFFT_S( 
      _this->device ));
    }
    else
      if ( _this->faseAtual == 2 )
      {
        ChartsGraph_OnSetCoordinates( &_this->graf_FFT, ApplicationClasse_getFFT_T( 
        _this->device ));
      }
}

/* 'C' function for method : 'Application::FFT.acaoBotao()' */
void ApplicationFFT_acaoBotao( ApplicationFFT _this, XObject sender )
{
  if ( sender == ((XObject)&_this->botao_R ))
  {
    if ( _this->faseAtual == 0 )
      return;

    CoreTimer_OnSetEnabled( &_this->intervalo, 0 );
    _this->faseAtual = 0;
    ApplicationModifiedButton_OnSetItemColor( &_this->botao_R, FlatColorOfTouch 
    );
    ApplicationModifiedButton_OnSetItemColor( &_this->botao_S, FlatColorOfDisabled 
    );
    ApplicationModifiedButton_OnSetItemColor( &_this->botao_T, FlatColorOfDisabled 
    );
    ChartsGraph_OnSetLineColor( &_this->graf_FFT, Applicationcor_R );
    ChartsGraph_OnSetCoordinates( &_this->graf_FFT, ApplicationClasse_getFFT_R( 
    _this->device ));
  }
  else
    if ( sender == ((XObject)&_this->botao_S ))
    {
      if ( _this->faseAtual == 1 )
        return;

      CoreTimer_OnSetEnabled( &_this->intervalo, 0 );
      _this->faseAtual = 1;
      ApplicationModifiedButton_OnSetItemColor( &_this->botao_S, FlatColorOfTouch 
      );
      ApplicationModifiedButton_OnSetItemColor( &_this->botao_R, FlatColorOfDisabled 
      );
      ApplicationModifiedButton_OnSetItemColor( &_this->botao_T, FlatColorOfDisabled 
      );
      ChartsGraph_OnSetLineColor( &_this->graf_FFT, Applicationcor_S );
      ChartsGraph_OnSetCoordinates( &_this->graf_FFT, ApplicationClasse_getFFT_S( 
      _this->device ));
    }
    else
      if ( sender == ((XObject)&_this->botao_T ))
      {
        if ( _this->faseAtual == 2 )
          return;

        CoreTimer_OnSetEnabled( &_this->intervalo, 0 );
        _this->faseAtual = 2;
        ApplicationModifiedButton_OnSetItemColor( &_this->botao_T, FlatColorOfTouch 
        );
        ApplicationModifiedButton_OnSetItemColor( &_this->botao_S, FlatColorOfDisabled 
        );
        ApplicationModifiedButton_OnSetItemColor( &_this->botao_R, FlatColorOfDisabled 
        );
        ChartsGraph_OnSetLineColor( &_this->graf_FFT, Applicationcor_T );
        ChartsGraph_OnSetCoordinates( &_this->graf_FFT, ApplicationClasse_getFFT_T( 
        _this->device ));
      }

  CoreTimer_OnSetEnabled( &_this->intervalo, 1 );
}

/* Variants derived from the class : 'Application::FFT' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFFT )
EW_END_OF_CLASS_VARIANTS( ApplicationFFT )

/* Virtual Method Table (VMT) for the class : 'Application::FFT' */
EW_DEFINE_CLASS( ApplicationFFT, CoreGroup, "Application::FFT" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
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
  ApplicationFFT_UpdateLayout,
  ApplicationFFT_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationFFT )

/* Initializer for the class 'Application::PDC' */
void ApplicationPDC__Init( ApplicationPDC _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsText__Init( &_this->Message, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->LogMessageHandler, &_this->_XObject, 0 );
  ApplicationModifiedButton__Init( &_this->BStart, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelMsg, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelState, &_this->_XObject, 0 );
  ViewsText__Init( &_this->Status, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->StatusChangedHandler, &_this->_XObject, 0 );
  ApplicationModifiedButton__Init( &_this->BStop, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_this->ButtonChangedHandler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationPDC );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const009F );
  CoreRectView__OnSetBounds( &_this->Message, _Const00A0 );
  ViewsText_OnSetString( &_this->Message, EwLoadString( &_Const00A1 ));
  ViewsText_OnSetColor( &_this->Message, _Const0015 );
  CoreRectView__OnSetBounds( &_this->BStart, _Const00A2 );
  ApplicationModifiedButton_OnSetCaption( &_this->BStart, EwLoadString( &_Const00A3 
  ));
  CoreRectView__OnSetBounds( &_this->labelMsg, _Const00A4 );
  ViewsText_OnSetAlignment( &_this->labelMsg, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelMsg, EwLoadString( &_Const00A5 ));
  CoreRectView__OnSetBounds( &_this->labelState, _Const00A6 );
  ViewsText_OnSetAlignment( &_this->labelState, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelState, EwLoadString( &_Const00A7 ));
  CoreRectView__OnSetBounds( &_this->Status, _Const00A8 );
  ViewsText_OnSetString( &_this->Status, EwLoadString( &_Const00A9 ));
  ViewsText_OnSetColor( &_this->Status, _Const0015 );
  CoreRectView__OnSetBounds( &_this->BStop, _Const00AA );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->BStop, 0 );
  ApplicationModifiedButton_OnSetCaption( &_this->BStop, EwLoadString( &_Const00AB 
  ));
  CoreGroup__Add( _this, ((CoreView)&_this->Message ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BStart ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelMsg ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelState ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Status ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BStop ), 0 );
  ViewsText_OnSetFont( &_this->Message, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  _this->LogMessageHandler.OnEvent = EwNewSlot( _this, ApplicationPDC_LogMessage 
  );
  CoreSystemEventHandler_OnSetEvent( &_this->LogMessageHandler, &EwGetAutoObject( 
  &ApplicationAutoobjeto, ApplicationClasse )->LogMessageEvent );
  _this->BStart.OnAction = EwNewSlot( _this, ApplicationPDC_startVNC );
  _this->device = EwGetAutoObject( &ApplicationAutoobjeto, ApplicationClasse );
  ViewsText_OnSetFont( &_this->labelMsg, EwLoadResource( &OldResourcesFontVerdana20, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->labelState, EwLoadResource( &OldResourcesFontVerdana20, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Status, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  _this->StatusChangedHandler.OnEvent = EwNewSlot( _this, ApplicationPDC_StatusChange 
  );
  CoreSystemEventHandler_OnSetEvent( &_this->StatusChangedHandler, &EwGetAutoObject( 
  &ApplicationAutoobjeto, ApplicationClasse )->StatusChangedEvent );
  _this->BStop.OnAction = EwNewSlot( _this, ApplicationPDC_stopVNC );
  _this->ButtonChangedHandler.OnEvent = EwNewSlot( _this, ApplicationPDC_ButtonStateChange 
  );
  CoreSystemEventHandler_OnSetEvent( &_this->ButtonChangedHandler, &EwGetAutoObject( 
  &ApplicationAutoobjeto, ApplicationClasse )->ButtonStateEvent );
}

/* Re-Initializer for the class 'Application::PDC' */
void ApplicationPDC__ReInit( ApplicationPDC _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsText__ReInit( &_this->Message );
  CoreSystemEventHandler__ReInit( &_this->LogMessageHandler );
  ApplicationModifiedButton__ReInit( &_this->BStart );
  ViewsText__ReInit( &_this->labelMsg );
  ViewsText__ReInit( &_this->labelState );
  ViewsText__ReInit( &_this->Status );
  CoreSystemEventHandler__ReInit( &_this->StatusChangedHandler );
  ApplicationModifiedButton__ReInit( &_this->BStop );
  CoreSystemEventHandler__ReInit( &_this->ButtonChangedHandler );
}

/* Finalizer method for the class 'Application::PDC' */
void ApplicationPDC__Done( ApplicationPDC _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationPDC );

  /* Finalize all embedded objects */
  ViewsText__Done( &_this->Message );
  CoreSystemEventHandler__Done( &_this->LogMessageHandler );
  ApplicationModifiedButton__Done( &_this->BStart );
  ViewsText__Done( &_this->labelMsg );
  ViewsText__Done( &_this->labelState );
  ViewsText__Done( &_this->Status );
  CoreSystemEventHandler__Done( &_this->StatusChangedHandler );
  ApplicationModifiedButton__Done( &_this->BStop );
  CoreSystemEventHandler__Done( &_this->ButtonChangedHandler );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::PDC' */
void ApplicationPDC__Mark( ApplicationPDC _this )
{
  EwMarkObject( &_this->Message );
  EwMarkObject( &_this->LogMessageHandler );
  EwMarkObject( &_this->BStart );
  EwMarkObject( _this->device );
  EwMarkObject( &_this->labelMsg );
  EwMarkObject( &_this->labelState );
  EwMarkObject( &_this->Status );
  EwMarkObject( &_this->StatusChangedHandler );
  EwMarkObject( &_this->BStop );
  EwMarkObject( &_this->ButtonChangedHandler );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationPDC_UpdateLayout( ApplicationPDC _this, XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationPDC_UpdateViewState( ApplicationPDC _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void ApplicationPDC_LogMessage( ApplicationPDC _this, XObject sender )
{
  ApplicationPDCMessage ctxRecebido;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ctxRecebido = EwCastObject( _this->LogMessageHandler.Context, ApplicationPDCMessage 
  );
  ViewsText_OnSetString( &_this->Message, ctxRecebido->message );
}

/* 'C' function for method : 'Application::PDC.startVNC()' */
void ApplicationPDC_startVNC( ApplicationPDC _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationClasse_startVNC( _this->device );
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void ApplicationPDC_StatusChange( ApplicationPDC _this, XObject sender )
{
  ApplicationPDCStatus ctxRecebido;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ctxRecebido = EwCastObject( _this->StatusChangedHandler.Context, ApplicationPDCStatus 
  );
  ViewsText_OnSetString( &_this->Status, ctxRecebido->Status );
}

/* 'C' function for method : 'Application::PDC.stopVNC()' */
void ApplicationPDC_stopVNC( ApplicationPDC _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationClasse_stopVNC( _this->device );
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void ApplicationPDC_ButtonStateChange( ApplicationPDC _this, XObject sender )
{
  ApplicationPDCButtonState recebido;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  recebido = EwCastObject( _this->ButtonChangedHandler.Context, ApplicationPDCButtonState 
  );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->BStart, recebido->Iniciar );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->BStop, recebido->Parar );
}

/* Variants derived from the class : 'Application::PDC' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPDC )
EW_END_OF_CLASS_VARIANTS( ApplicationPDC )

/* Virtual Method Table (VMT) for the class : 'Application::PDC' */
EW_DEFINE_CLASS( ApplicationPDC, CoreGroup, "Application::PDC" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
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
  ApplicationPDC_UpdateLayout,
  ApplicationPDC_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationPDC )

/* Initializer for the class 'Application::ModifiedButton' */
void ApplicationModifiedButton__Init( ApplicationModifiedButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_XObject, 0 );
  ViewsFrame__Init( &_this->Frame, &_this->_XObject, 0 );
  ViewsText__Init( &_this->CaptionText, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationModifiedButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00AC );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00AD );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00AE );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00AF );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0001 );
  CoreView_OnSetLayout((CoreView)&_this->Frame, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Frame, _Const00AC );
  ViewsFrame_OnSetColor( &_this->Frame, FlatColorOfTouch );
  CoreView_OnSetLayout((CoreView)&_this->CaptionText, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->CaptionText, _Const00AC );
  ViewsText_OnSetString( &_this->CaptionText, EwLoadString( &_Const00B0 ));
  ViewsText_OnSetColor( &_this->CaptionText, FlatColorOfBackground );
  EwRetainString( &_this->Caption, EwLoadString( &_Const00B0 ));
  _this->ItemColor = FlatColorOfTouch;
  _this->TextColor = FlatColorOfBackground;
  _this->ItemColorActive = FlatColorOfTheme;
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CaptionText ), 0 );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationModifiedButton_enterLeaveSlot 
  );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationModifiedButton_enterLeaveSlot 
  );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationModifiedButton_pressReleaseSlot 
  );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationModifiedButton_pressReleaseSlot 
  );
  ViewsFrame_OnSetBitmap( &_this->Frame, EwLoadResource( &FlatFlatFrame, ResourcesBitmap 
  ));
  ViewsText_OnSetFont( &_this->CaptionText, EwLoadResource( &ApplicationNumbersG, 
  ResourcesFont ));
}

/* Re-Initializer for the class 'Application::ModifiedButton' */
void ApplicationModifiedButton__ReInit( ApplicationModifiedButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsFrame__ReInit( &_this->Frame );
  ViewsText__ReInit( &_this->CaptionText );
}

/* Finalizer method for the class 'Application::ModifiedButton' */
void ApplicationModifiedButton__Done( ApplicationModifiedButton _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationModifiedButton );

  /* Finalize all embedded objects */
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsFrame__Done( &_this->Frame );
  ViewsText__Done( &_this->CaptionText );

  /* Release all used strings */
  EwReleaseString( &_this->Caption );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::ModifiedButton' */
void ApplicationModifiedButton__Mark( ApplicationModifiedButton _this )
{
  EwMarkSlot( _this->OnAction );
  EwMarkObject( &_this->TouchHandler );
  EwMarkObject( &_this->Frame );
  EwMarkObject( &_this->CaptionText );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationModifiedButton_UpdateViewState( ApplicationModifiedButton _this, 
  XSet aState )
{
  if ((( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
  {
    if ( _this->TouchHandler.Down && _this->TouchHandler.Inside )
      ViewsFrame_OnSetColor( &_this->Frame, _this->ItemColorActive );
    else
      ViewsFrame_OnSetColor( &_this->Frame, _this->ItemColor );
  }
  else
    ViewsFrame_OnSetColor( &_this->Frame, FlatColorOfDisabled );
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ApplicationModifiedButton_enterLeaveSlot( ApplicationModifiedButton _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ApplicationModifiedButton_pressReleaseSlot( ApplicationModifiedButton _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Down && _this->TouchHandler.Inside )
  {
    EwIdleSignal( _this->OnAction, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::ModifiedButton.OnSetCaption()' */
void ApplicationModifiedButton_OnSetCaption( ApplicationModifiedButton _this, XString 
  value )
{
  EwRetainString( &_this->Caption, value );
  ViewsText_OnSetString( &_this->CaptionText, value );
}

/* 'C' function for method : 'Application::ModifiedButton.OnSetItemColor()' */
void ApplicationModifiedButton_OnSetItemColor( ApplicationModifiedButton _this, 
  XColor value )
{
  _this->ItemColor = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::ModifiedButton.OnSetItemColorActive()' */
void ApplicationModifiedButton_OnSetItemColorActive( ApplicationModifiedButton _this, 
  XColor value )
{
  _this->ItemColorActive = value;
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* Variants derived from the class : 'Application::ModifiedButton' */
EW_DEFINE_CLASS_VARIANTS( ApplicationModifiedButton )
EW_END_OF_CLASS_VARIANTS( ApplicationModifiedButton )

/* Virtual Method Table (VMT) for the class : 'Application::ModifiedButton' */
EW_DEFINE_CLASS( ApplicationModifiedButton, CoreGroup, "Application::ModifiedButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
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
  ApplicationModifiedButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationModifiedButton )

/* User defined inline code: 'Application::Inline' */
#include "vnc_app.h"

extern float Freq_final;

extern float Mag_R_final;
extern float Mag_S_final;
extern float Mag_T_final;

extern float Fase_R_final;
extern float Fase_S_final;
extern float Fase_T_final;

extern float FasesAC_mod_R[50];
extern float FasesAC_mod_S[50];
extern float FasesAC_mod_T[50];

/* Initializer for the class 'Application::Classe' */
void ApplicationClasse__Init( ApplicationClasse _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesDeviceClass__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreSystemEvent__Init( &_this->LogMessageEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->StatusChangedEvent, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->ButtonStateEvent, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationClasse );
}

/* Re-Initializer for the class 'Application::Classe' */
void ApplicationClasse__ReInit( ApplicationClasse _this )
{
  /* At first re-initialize the super class ... */
  TemplatesDeviceClass__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreSystemEvent__ReInit( &_this->LogMessageEvent );
  CoreSystemEvent__ReInit( &_this->StatusChangedEvent );
  CoreSystemEvent__ReInit( &_this->ButtonStateEvent );
}

/* Finalizer method for the class 'Application::Classe' */
void ApplicationClasse__Done( ApplicationClasse _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationClasse );

  /* Finalize all embedded objects */
  CoreSystemEvent__Done( &_this->LogMessageEvent );
  CoreSystemEvent__Done( &_this->StatusChangedEvent );
  CoreSystemEvent__Done( &_this->ButtonStateEvent );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Classe' */
void ApplicationClasse__Mark( ApplicationClasse _this )
{
  EwMarkObject( &_this->LogMessageEvent );
  EwMarkObject( &_this->StatusChangedEvent );
  EwMarkObject( &_this->ButtonStateEvent );

  /* Give the super class a chance to mark its objects and references */
  TemplatesDeviceClass__Mark( &_this->_Super );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationClasse_LogMessageTrigger( ApplicationClasse _this, XString message )
{
  ApplicationPDCMessage contexto = EwNewObject( ApplicationPDCMessage, 0 );

  ApplicationPDCMessage_OnSetmessage( contexto, message );
  CoreSystemEvent_Trigger( &_this->LogMessageEvent, ((XObject)contexto ), 0 );
}

/* Wrapper function for the non virtual method : 'Application::Classe.LogMessageTrigger()' */
void ApplicationClasse__LogMessageTrigger( void* _this, XString message )
{
  ApplicationClasse_LogMessageTrigger((ApplicationClasse)_this, message );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationClasse_startVNC( ApplicationClasse _this )
{
  VNC_SERVER_Start();
}

/* Wrapper function for the non virtual method : 'Application::Classe.startVNC()' */
void ApplicationClasse__startVNC( void* _this )
{
  ApplicationClasse_startVNC((ApplicationClasse)_this );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationClasse_StatusTrigger( ApplicationClasse _this, XString status )
{
  ApplicationPDCStatus contexto = EwNewObject( ApplicationPDCStatus, 0 );

  ApplicationPDCStatus_OnSetStatus( contexto, status );
  CoreSystemEvent_Trigger( &_this->StatusChangedEvent, ((XObject)contexto ), 0 );
}

/* Wrapper function for the non virtual method : 'Application::Classe.StatusTrigger()' */
void ApplicationClasse__StatusTrigger( void* _this, XString status )
{
  ApplicationClasse_StatusTrigger((ApplicationClasse)_this, status );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationClasse_stopVNC( ApplicationClasse _this )
{
  VNC_SERVER_Stop();
}

/* Wrapper function for the non virtual method : 'Application::Classe.stopVNC()' */
void ApplicationClasse__stopVNC( void* _this )
{
  ApplicationClasse_stopVNC((ApplicationClasse)_this );
}

/* 'C' function for method : 'Application::Classe.getFreq()' */
XFloat ApplicationClasse_getFreq( ApplicationClasse _this )
{
  XFloat frequencia;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  frequencia = 0.000000f;
  frequencia = (XFloat)Freq_final;
  return frequencia;
}

/* 'C' function for method : 'Application::Classe.getMagR()' */
XFloat ApplicationClasse_getMagR( ApplicationClasse _this )
{
  XFloat magR;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  magR = 0.000000f;
  magR = (XFloat)Mag_R_final;
  return magR;
}

/* 'C' function for method : 'Application::Classe.getMagT()' */
XFloat ApplicationClasse_getMagT( ApplicationClasse _this )
{
  XFloat magT;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  magT = 0.000000f;
  magT = (XFloat)Mag_T_final;
  return magT;
}

/* 'C' function for method : 'Application::Classe.getMagS()' */
XFloat ApplicationClasse_getMagS( ApplicationClasse _this )
{
  XFloat magS;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  magS = 0.000000f;
  magS = (XFloat)Mag_S_final;
  return magS;
}

/* 'C' function for method : 'Application::Classe.getFaseR()' */
XFloat ApplicationClasse_getFaseR( ApplicationClasse _this )
{
  XFloat faseR;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  faseR = 0.000000f;
  faseR = (XFloat)Fase_R_final;
  return faseR;
}

/* 'C' function for method : 'Application::Classe.getFaseT()' */
XFloat ApplicationClasse_getFaseT( ApplicationClasse _this )
{
  XFloat faseT;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  faseT = 0.000000f;
  faseT = (XFloat)Fase_T_final;
  return faseT;
}

/* 'C' function for method : 'Application::Classe.getFaseS()' */
XFloat ApplicationClasse_getFaseS( ApplicationClasse _this )
{
  XFloat faseS;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  faseS = 0.000000f;
  faseS = (XFloat)Fase_S_final;
  return faseS;
}

/* 'C' function for method : 'Application::Classe.getFFT_R()' */
ChartsCoordList ApplicationClasse_getFFT_R( ApplicationClasse _this )
{
  XFloat aFFT[ 50 ];
  XInt32 j;
  ChartsCoordList cordFFT;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  cordFFT = EwNewObject( ChartsCoordList, 0 );

  for ( j = 0; j < 50; j = j + 1 )
    aFFT[ EwCheckIndex( j, 50 )] = 0.000000f;

  {
    int i;

    for (i = 0; i < 50; i++) {
      aFFT[i] = FasesAC_mod_R[i]/422.4; //256*1.65
    }
  }
  ChartsCoordList_OnSetMaxNoOfItems( cordFFT, 50 );
  ChartsCoordList_ClearList( cordFFT );

  for ( j = 0; j < 50; j = j + 1 )
  {
    ChartsCoordList_AddCoord( cordFFT, (XFloat)( j + 1 ), -aFFT[ EwCheckIndex( j, 
    50 )]);
  }

  return cordFFT;
}

/* 'C' function for method : 'Application::Classe.getFFT_S()' */
ChartsCoordList ApplicationClasse_getFFT_S( ApplicationClasse _this )
{
  XFloat aFFT[ 50 ];
  XInt32 j;
  ChartsCoordList cordFFT;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  cordFFT = EwNewObject( ChartsCoordList, 0 );

  for ( j = 0; j < 50; j = j + 1 )
    aFFT[ EwCheckIndex( j, 50 )] = 0.000000f;

  {
    int i;

    for (i = 0; i < 50; i++) {
      aFFT[i] = FasesAC_mod_S[i]/256.0;
    }
  }
  ChartsCoordList_OnSetMaxNoOfItems( cordFFT, 50 );
  ChartsCoordList_ClearList( cordFFT );

  for ( j = 0; j < 50; j = j + 1 )
  {
    ChartsCoordList_AddCoord( cordFFT, (XFloat)( j + 1 ), -aFFT[ EwCheckIndex( j, 
    50 )]);
  }

  return cordFFT;
}

/* 'C' function for method : 'Application::Classe.getFFT_T()' */
ChartsCoordList ApplicationClasse_getFFT_T( ApplicationClasse _this )
{
  XFloat aFFT[ 50 ];
  XInt32 j;
  ChartsCoordList cordFFT;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  cordFFT = EwNewObject( ChartsCoordList, 0 );

  for ( j = 0; j < 50; j = j + 1 )
    aFFT[ EwCheckIndex( j, 50 )] = 0.000000f;

  {
    int i;

    for (i = 0; i < 50; i++) {
      aFFT[i] = FasesAC_mod_T[i]/256.0;
    }
  }
  ChartsCoordList_OnSetMaxNoOfItems( cordFFT, 50 );
  ChartsCoordList_ClearList( cordFFT );

  for ( j = 0; j < 50; j = j + 1 )
  {
    ChartsCoordList_AddCoord( cordFFT, (XFloat)( j + 1 ), -aFFT[ EwCheckIndex( j, 
    50 )]);
  }

  return cordFFT;
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationClasse_ChangeBtnState( ApplicationClasse _this, XInt32 IniState, 
  XInt32 PararState )
{
  ApplicationPDCButtonState contexto_botao = EwNewObject( ApplicationPDCButtonState, 
    0 );

  if ( IniState == 0 )
    ApplicationPDCButtonState_OnSetIniciar( contexto_botao, 0 );
  else
    ApplicationPDCButtonState_OnSetIniciar( contexto_botao, 1 );

  if ( PararState == 0 )
    ApplicationPDCButtonState_OnSetParar( contexto_botao, 0 );
  else
    ApplicationPDCButtonState_OnSetParar( contexto_botao, 1 );

  CoreSystemEvent_Trigger( &_this->ButtonStateEvent, ((XObject)contexto_botao ), 
  0 );
}

/* Wrapper function for the non virtual method : 'Application::Classe.ChangeBtnState()' */
void ApplicationClasse__ChangeBtnState( void* _this, XInt32 IniState, XInt32 PararState )
{
  ApplicationClasse_ChangeBtnState((ApplicationClasse)_this, IniState, PararState );
}

/* Variants derived from the class : 'Application::Classe' */
EW_DEFINE_CLASS_VARIANTS( ApplicationClasse )
EW_END_OF_CLASS_VARIANTS( ApplicationClasse )

/* Virtual Method Table (VMT) for the class : 'Application::Classe' */
EW_DEFINE_CLASS( ApplicationClasse, TemplatesDeviceClass, "Application::Classe" )
EW_END_OF_CLASS( ApplicationClasse )

/* User defined auto object: 'Application::Autoobjeto' */
EW_DEFINE_AUTOOBJECT( ApplicationAutoobjeto, ApplicationClasse )

/* Initializer for the auto object 'Application::Autoobjeto' */
void ApplicationAutoobjeto__Init( ApplicationClasse _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::Autoobjeto' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationAutoobjeto )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationAutoobjeto )

/* Initializer for the class 'Application::PDCMessage' */
void ApplicationPDCMessage__Init( ApplicationPDCMessage _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationPDCMessage );

  /* ... and initialize objects, variables, properties, etc. */
  EwRetainString( &_this->message, EwLoadString( &_Const0017 ));
}

/* Re-Initializer for the class 'Application::PDCMessage' */
void ApplicationPDCMessage__ReInit( ApplicationPDCMessage _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Application::PDCMessage' */
void ApplicationPDCMessage__Done( ApplicationPDCMessage _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationPDCMessage );

  /* Release all used strings */
  EwReleaseString( &_this->message );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::PDCMessage' */
void ApplicationPDCMessage__Mark( ApplicationPDCMessage _this )
{
  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* 'C' function for method : 'Application::PDCMessage.OnSetmessage()' */
void ApplicationPDCMessage_OnSetmessage( ApplicationPDCMessage _this, XString value )
{
  if ( !EwCompString( _this->message, value ))
    return;

  EwRetainString( &_this->message, value );
}

/* Variants derived from the class : 'Application::PDCMessage' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPDCMessage )
EW_END_OF_CLASS_VARIANTS( ApplicationPDCMessage )

/* Virtual Method Table (VMT) for the class : 'Application::PDCMessage' */
EW_DEFINE_CLASS( ApplicationPDCMessage, XObject, "Application::PDCMessage" )
EW_END_OF_CLASS( ApplicationPDCMessage )

/* Initializer for the class 'Application::PDCStatus' */
void ApplicationPDCStatus__Init( ApplicationPDCStatus _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationPDCStatus );

  /* ... and initialize objects, variables, properties, etc. */
  EwRetainString( &_this->Status, EwLoadString( &_Const0017 ));
}

/* Re-Initializer for the class 'Application::PDCStatus' */
void ApplicationPDCStatus__ReInit( ApplicationPDCStatus _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Application::PDCStatus' */
void ApplicationPDCStatus__Done( ApplicationPDCStatus _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationPDCStatus );

  /* Release all used strings */
  EwReleaseString( &_this->Status );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::PDCStatus' */
void ApplicationPDCStatus__Mark( ApplicationPDCStatus _this )
{
  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* 'C' function for method : 'Application::PDCStatus.OnSetStatus()' */
void ApplicationPDCStatus_OnSetStatus( ApplicationPDCStatus _this, XString value )
{
  if ( !EwCompString( _this->Status, value ))
    return;

  EwRetainString( &_this->Status, value );
}

/* Variants derived from the class : 'Application::PDCStatus' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPDCStatus )
EW_END_OF_CLASS_VARIANTS( ApplicationPDCStatus )

/* Virtual Method Table (VMT) for the class : 'Application::PDCStatus' */
EW_DEFINE_CLASS( ApplicationPDCStatus, XObject, "Application::PDCStatus" )
EW_END_OF_CLASS( ApplicationPDCStatus )

/* User defined constant: 'Application::cor_R' */
const XColor Applicationcor_R = { 0x00, 0xFF, 0x00, 0xFF };

/* User defined constant: 'Application::cor_S' */
const XColor Applicationcor_S = { 0xFF, 0xFF, 0x00, 0xFF };

/* User defined constant: 'Application::cor_T' */
const XColor Applicationcor_T = { 0xFF, 0x00, 0x00, 0xFF };

/* Initializer for the class 'Application::ModIconButton' */
void ApplicationModIconButton__Init( ApplicationModIconButton _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  CoreSimpleTouchHandler__Init( &_this->TouchHandler, &_this->_XObject, 0 );
  ViewsFrame__Init( &_this->Frame, &_this->_XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationModIconButton );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00B1 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00AD );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00B2 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00B3 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Frame, _Const00B1 );
  ViewsFrame_OnSetColor( &_this->Frame, FlatColorOfTouch );
  CoreRectView__OnSetBounds( &_this->Image, _Const00B1 );
  ViewsImage_OnSetColor( &_this->Image, FlatColorOfBackground );
  ViewsImage_OnSetFrameNumber( &_this->Image, 19 );
  _this->IconIndex = 19;
  _this->IconColor = FlatColorOfBackground;
  _this->ItemColor = FlatColorOfTouch;
  _this->TextColor = FlatColorOfTouch;
  _this->ItemColorActive = FlatColorOfTheme;
  CoreGroup__Add( _this, ((CoreView)&_this->TouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Frame ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  _this->TouchHandler.OnLeave = EwNewSlot( _this, ApplicationModIconButton_enterLeaveSlot 
  );
  _this->TouchHandler.OnEnter = EwNewSlot( _this, ApplicationModIconButton_enterLeaveSlot 
  );
  _this->TouchHandler.OnRelease = EwNewSlot( _this, ApplicationModIconButton_pressReleaseSlot 
  );
  _this->TouchHandler.OnPress = EwNewSlot( _this, ApplicationModIconButton_pressReleaseSlot 
  );
  ViewsFrame_OnSetBitmap( &_this->Frame, EwLoadResource( &FlatFlatFrame, ResourcesBitmap 
  ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &FlatFlatDemoIcons, ResourcesBitmap 
  ));
  _this->Icon = EwLoadResource( &FlatFlatDemoIcons, ResourcesBitmap );
}

/* Re-Initializer for the class 'Application::ModIconButton' */
void ApplicationModIconButton__ReInit( ApplicationModIconButton _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  CoreSimpleTouchHandler__ReInit( &_this->TouchHandler );
  ViewsFrame__ReInit( &_this->Frame );
  ViewsImage__ReInit( &_this->Image );
}

/* Finalizer method for the class 'Application::ModIconButton' */
void ApplicationModIconButton__Done( ApplicationModIconButton _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationModIconButton );

  /* Finalize all embedded objects */
  CoreSimpleTouchHandler__Done( &_this->TouchHandler );
  ViewsFrame__Done( &_this->Frame );
  ViewsImage__Done( &_this->Image );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::ModIconButton' */
void ApplicationModIconButton__Mark( ApplicationModIconButton _this )
{
  EwMarkSlot( _this->OnAction );
  EwMarkObject( &_this->TouchHandler );
  EwMarkObject( &_this->Frame );
  EwMarkObject( &_this->Image );
  EwMarkObject( _this->Icon );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationModIconButton_UpdateLayout( ApplicationModIconButton _this, XPoint 
  aSize )
{
  XInt32 s;

  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
  s = aSize.Y;
  CoreRectView__OnSetBounds( &_this->Frame, EwNewRect( 0, 0, s, s ));
  CoreRectView__OnSetBounds( &_this->Image, _this->Frame.Super1.Bounds );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationModIconButton_UpdateViewState( ApplicationModIconButton _this, XSet 
  aState )
{
  if ((( aState & CoreViewStateEnabled ) == CoreViewStateEnabled ))
  {
    if ( _this->TouchHandler.Down && _this->TouchHandler.Inside )
      ViewsFrame_OnSetColor( &_this->Frame, _this->ItemColorActive );
    else
      ViewsFrame_OnSetColor( &_this->Frame, _this->ItemColor );
  }
  else
  {
    ViewsFrame_OnSetColor( &_this->Frame, FlatColorOfDisabled );
  }
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ApplicationModIconButton_enterLeaveSlot( ApplicationModIconButton _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* This internal slot method is used to receive the corresponding signals form the 
   touch handler. */
void ApplicationModIconButton_pressReleaseSlot( ApplicationModIconButton _this, 
  XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !_this->TouchHandler.Down && _this->TouchHandler.Inside )
  {
    EwIdleSignal( _this->OnAction, ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::ModIconButton.OnSetIcon()' */
void ApplicationModIconButton_OnSetIcon( ApplicationModIconButton _this, ResourcesBitmap 
  value )
{
  _this->Icon = value;
  ViewsImage_OnSetBitmap( &_this->Image, value );
}

/* 'C' function for method : 'Application::ModIconButton.OnSetIconIndex()' */
void ApplicationModIconButton_OnSetIconIndex( ApplicationModIconButton _this, XInt32 
  value )
{
  _this->IconIndex = value;
  ViewsImage_OnSetFrameNumber( &_this->Image, value );
}

/* Variants derived from the class : 'Application::ModIconButton' */
EW_DEFINE_CLASS_VARIANTS( ApplicationModIconButton )
EW_END_OF_CLASS_VARIANTS( ApplicationModIconButton )

/* Virtual Method Table (VMT) for the class : 'Application::ModIconButton' */
EW_DEFINE_CLASS( ApplicationModIconButton, CoreGroup, "Application::ModIconButton" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
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
  ApplicationModIconButton_UpdateLayout,
  ApplicationModIconButton_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationModIconButton )

/* Initializer for the class 'Application::ConfigScreen' */
void ApplicationConfigScreen__Init( ApplicationConfigScreen _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->bg, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelSup, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelInf, &_this->_XObject, 0 );
  ApplicationModIconButton__Init( &_this->SupMenos, &_this->_XObject, 0 );
  ApplicationModIconButton__Init( &_this->SupMais, &_this->_XObject, 0 );
  ApplicationModIconButton__Init( &_this->InfMenos, &_this->_XObject, 0 );
  ApplicationModIconButton__Init( &_this->InfMais, &_this->_XObject, 0 );
  ViewsText__Init( &_this->SupVal, &_this->_XObject, 0 );
  ViewsText__Init( &_this->InfVal, &_this->_XObject, 0 );
  ApplicationModIconButton__Init( &_this->Sair, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationConfigScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00B4 );
  CoreRectView__OnSetBounds( &_this->bg, _Const00B4 );
  ViewsRectangle_OnSetColor( &_this->bg, _Const00B5 );
  CoreRectView__OnSetBounds( &_this->Border, _Const00B4 );
  ViewsBorder_OnSetWidth( &_this->Border, 3 );
  CoreRectView__OnSetBounds( &_this->labelSup, _Const00B6 );
  ViewsText_OnSetAlignment( &_this->labelSup, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelSup, EwLoadString( &_Const00B7 ));
  CoreRectView__OnSetBounds( &_this->labelInf, _Const00B8 );
  ViewsText_OnSetAlignment( &_this->labelInf, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelInf, EwLoadString( &_Const00B9 ));
  CoreRectView__OnSetBounds( &_this->SupMenos, _Const00BA );
  ApplicationModIconButton_OnSetIconIndex( &_this->SupMenos, 2 );
  CoreRectView__OnSetBounds( &_this->SupMais, _Const00BB );
  ApplicationModIconButton_OnSetIconIndex( &_this->SupMais, 3 );
  CoreRectView__OnSetBounds( &_this->InfMenos, _Const00BC );
  ApplicationModIconButton_OnSetIconIndex( &_this->InfMenos, 2 );
  CoreRectView__OnSetBounds( &_this->InfMais, _Const00BD );
  ApplicationModIconButton_OnSetIconIndex( &_this->InfMais, 3 );
  CoreRectView__OnSetBounds( &_this->SupVal, _Const00BE );
  ViewsText_OnSetString( &_this->SupVal, EwLoadString( &_Const00BF ));
  CoreRectView__OnSetBounds( &_this->InfVal, _Const00C0 );
  ViewsText_OnSetString( &_this->InfVal, EwLoadString( &_Const00C1 ));
  CoreRectView__OnSetBounds( &_this->Sair, _Const00C2 );
  ApplicationModIconButton_OnSetIconIndex( &_this->Sair, 9 );
  CoreGroup__Add( _this, ((CoreView)&_this->bg ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelSup ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelInf ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SupMenos ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SupMais ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->InfMenos ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->InfMais ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SupVal ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->InfVal ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Sair ), 0 );
  ViewsText_OnSetFont( &_this->labelSup, EwLoadResource( &ApplicationNumbersM, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->labelInf, EwLoadResource( &ApplicationNumbersM, ResourcesFont 
  ));
  ApplicationModIconButton_OnSetIcon( &_this->SupMenos, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  ApplicationModIconButton_OnSetIcon( &_this->SupMais, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  ApplicationModIconButton_OnSetIcon( &_this->InfMenos, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  ApplicationModIconButton_OnSetIcon( &_this->InfMais, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->SupVal, EwLoadResource( &ApplicationNumbersM, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->InfVal, EwLoadResource( &ApplicationNumbersM, ResourcesFont 
  ));
  ApplicationModIconButton_OnSetIcon( &_this->Sair, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
}

/* Re-Initializer for the class 'Application::ConfigScreen' */
void ApplicationConfigScreen__ReInit( ApplicationConfigScreen _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->bg );
  ViewsBorder__ReInit( &_this->Border );
  ViewsText__ReInit( &_this->labelSup );
  ViewsText__ReInit( &_this->labelInf );
  ApplicationModIconButton__ReInit( &_this->SupMenos );
  ApplicationModIconButton__ReInit( &_this->SupMais );
  ApplicationModIconButton__ReInit( &_this->InfMenos );
  ApplicationModIconButton__ReInit( &_this->InfMais );
  ViewsText__ReInit( &_this->SupVal );
  ViewsText__ReInit( &_this->InfVal );
  ApplicationModIconButton__ReInit( &_this->Sair );
}

/* Finalizer method for the class 'Application::ConfigScreen' */
void ApplicationConfigScreen__Done( ApplicationConfigScreen _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationConfigScreen );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->bg );
  ViewsBorder__Done( &_this->Border );
  ViewsText__Done( &_this->labelSup );
  ViewsText__Done( &_this->labelInf );
  ApplicationModIconButton__Done( &_this->SupMenos );
  ApplicationModIconButton__Done( &_this->SupMais );
  ApplicationModIconButton__Done( &_this->InfMenos );
  ApplicationModIconButton__Done( &_this->InfMais );
  ViewsText__Done( &_this->SupVal );
  ViewsText__Done( &_this->InfVal );
  ApplicationModIconButton__Done( &_this->Sair );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::ConfigScreen' */
void ApplicationConfigScreen__Mark( ApplicationConfigScreen _this )
{
  EwMarkObject( &_this->bg );
  EwMarkObject( &_this->Border );
  EwMarkObject( &_this->labelSup );
  EwMarkObject( &_this->labelInf );
  EwMarkObject( &_this->SupMenos );
  EwMarkObject( &_this->SupMais );
  EwMarkObject( &_this->InfMenos );
  EwMarkObject( &_this->InfMais );
  EwMarkObject( &_this->SupVal );
  EwMarkObject( &_this->InfVal );
  EwMarkObject( &_this->Sair );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationConfigScreen_UpdateLayout( ApplicationConfigScreen _this, XPoint 
  aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationConfigScreen_UpdateViewState( ApplicationConfigScreen _this, XSet 
  aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* Variants derived from the class : 'Application::ConfigScreen' */
EW_DEFINE_CLASS_VARIANTS( ApplicationConfigScreen )
EW_END_OF_CLASS_VARIANTS( ApplicationConfigScreen )

/* Virtual Method Table (VMT) for the class : 'Application::ConfigScreen' */
EW_DEFINE_CLASS( ApplicationConfigScreen, CoreGroup, "Application::ConfigScreen" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
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
  ApplicationConfigScreen_UpdateLayout,
  ApplicationConfigScreen_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationConfigScreen )

/* Initializer for the class 'Application::PlotterGraph' */
void ApplicationPlotterGraph__Init( ApplicationPlotterGraph _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsLine__Init( &_this->VLine3, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->VLine2, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->VLine1, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->HLine1, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->HLine2, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->HLine3, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->HLine4, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->HLine5, &_this->_XObject, 0 );
  ViewsStrokePath__Init( &_this->PlotterPath, &_this->_XObject, 0 );
  GraphicsPath__Init( &_this->PathData, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationPlotterGraph );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00B4 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine3, _Const00C3 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine3, _Const00C4 );
  ViewsLine_OnSetColor( &_this->VLine3, _Const00C5 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine2, _Const00C6 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine2, _Const00C7 );
  ViewsLine_OnSetColor( &_this->VLine2, _Const00C5 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine1, _Const00C8 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine1, _Const00C9 );
  ViewsLine_OnSetColor( &_this->VLine1, _Const00C5 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine1, _Const00CA );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine1, _Const00AD );
  ViewsLine_OnSetColor( &_this->HLine1, _Const004B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine2, _Const00CB );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine2, _Const00CC );
  ViewsLine_OnSetColor( &_this->HLine2, _Const00C5 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine3, _Const00CD );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine3, _Const00CE );
  ViewsLine_OnSetColor( &_this->HLine3, _Const004E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine4, _Const00CF );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine4, _Const00D0 );
  ViewsLine_OnSetColor( &_this->HLine4, _Const00C5 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine5, _Const00D1 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine5, _Const00D2 );
  ViewsLine_OnSetColor( &_this->HLine5, _Const004B );
  CoreRectView__OnSetBounds( &_this->PlotterPath, _Const00B4 );
  ViewsStrokePath_OnSetFlipY( &_this->PlotterPath, 0 );
  ViewsStrokePath_OnSetWidth( &_this->PlotterPath, 2.000000f );
  CoreRectView__OnSetBounds( &_this->Border, _Const00B4 );
  _this->VerticalRatio = 1.000000f;
  _this->StrokeColor = _Const0015;
  CoreGroup__Add( _this, ((CoreView)&_this->VLine3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VLine2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HLine2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HLine3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HLine4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HLine5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PlotterPath ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  ViewsStrokePath_OnSetPath( &_this->PlotterPath, &_this->PathData );

  /* Call the user defined constructor */
  ApplicationPlotterGraph_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::PlotterGraph' */
void ApplicationPlotterGraph__ReInit( ApplicationPlotterGraph _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsLine__ReInit( &_this->VLine3 );
  ViewsLine__ReInit( &_this->VLine2 );
  ViewsLine__ReInit( &_this->VLine1 );
  ViewsLine__ReInit( &_this->HLine1 );
  ViewsLine__ReInit( &_this->HLine2 );
  ViewsLine__ReInit( &_this->HLine3 );
  ViewsLine__ReInit( &_this->HLine4 );
  ViewsLine__ReInit( &_this->HLine5 );
  ViewsStrokePath__ReInit( &_this->PlotterPath );
  GraphicsPath__ReInit( &_this->PathData );
  ViewsBorder__ReInit( &_this->Border );
}

/* Finalizer method for the class 'Application::PlotterGraph' */
void ApplicationPlotterGraph__Done( ApplicationPlotterGraph _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationPlotterGraph );

  /* Finalize all embedded objects */
  ViewsLine__Done( &_this->VLine3 );
  ViewsLine__Done( &_this->VLine2 );
  ViewsLine__Done( &_this->VLine1 );
  ViewsLine__Done( &_this->HLine1 );
  ViewsLine__Done( &_this->HLine2 );
  ViewsLine__Done( &_this->HLine3 );
  ViewsLine__Done( &_this->HLine4 );
  ViewsLine__Done( &_this->HLine5 );
  ViewsStrokePath__Done( &_this->PlotterPath );
  GraphicsPath__Done( &_this->PathData );
  ViewsBorder__Done( &_this->Border );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::PlotterGraph' */
void ApplicationPlotterGraph__Mark( ApplicationPlotterGraph _this )
{
  EwMarkObject( &_this->VLine3 );
  EwMarkObject( &_this->VLine2 );
  EwMarkObject( &_this->VLine1 );
  EwMarkObject( &_this->HLine1 );
  EwMarkObject( &_this->HLine2 );
  EwMarkObject( &_this->HLine3 );
  EwMarkObject( &_this->HLine4 );
  EwMarkObject( &_this->HLine5 );
  EwMarkObject( &_this->PlotterPath );
  EwMarkObject( &_this->PathData );
  EwMarkObject( &_this->Border );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationPlotterGraph_UpdateLayout( ApplicationPlotterGraph _this, XPoint 
  aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationPlotterGraph_UpdateViewState( ApplicationPlotterGraph _this, XSet 
  aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationPlotterGraph_Init( ApplicationPlotterGraph _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ViewsStrokePath_OnSetOffset( &_this->PlotterPath, EwSetPointX( _this->PlotterPath.Offset, 
  EwGetRectW( _this->PlotterPath.Super1.Bounds ) - 2 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPath, EwSetPointY( _this->PlotterPath.Offset, 
  EwGetRectH( _this->PlotterPath.Super1.Bounds ) / 2 ));
  GraphicsPath_SetMaxNoOfSubPaths( &_this->PathData, 1 );
  GraphicsPath_InitSubPath( &_this->PathData, 0, EwGetRectW( _this->PlotterPath.Super1.Bounds 
  ) / 2 );
}

/* 'C' function for method : 'Application::PlotterGraph.AddData()' */
void ApplicationPlotterGraph_AddData( ApplicationPlotterGraph _this, XFloat dataPoint )
{
  if ( _this->PlotterPath.Offset.X > 0 )
    ViewsStrokePath_OnSetOffset( &_this->PlotterPath, EwSetPointX( _this->PlotterPath.Offset, 
    _this->PlotterPath.Offset.X - 2 ));

  if ( GraphicsPath_GetNoOfFreeEdges( &_this->PathData, 0 ) == 0 )
    GraphicsPath_ShiftNodes( &_this->PathData, 0, 1, -2.000000f, 0.000000f );

  if ( GraphicsPath_GetNoOfEdges( &_this->PathData, 0 ) == 0 )
  {
    GraphicsPath_Begin( &_this->PathData, 0, GraphicsPath_GetNodeX( &_this->PathData, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathData, 0 )) + 2.000000f, dataPoint 
    );
    GraphicsPath_AddLine( &_this->PathData, 0, GraphicsPath_GetNodeX( &_this->PathData, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathData, 0 )) + 2.000000f, dataPoint 
    );
  }
  else
  {
    GraphicsPath_AddLine( &_this->PathData, 0, GraphicsPath_GetNodeX( &_this->PathData, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathData, 0 )) + 2.000000f, dataPoint 
    );
  }
}

/* 'C' function for method : 'Application::PlotterGraph.OnSetVerticalRatio()' */
void ApplicationPlotterGraph_OnSetVerticalRatio( ApplicationPlotterGraph _this, 
  XFloat value )
{
  XFloat OldRatio = _this->VerticalRatio;
  XFloat NewToOldRatio;

  if ( value < 1.000000f )
    value = 1.000000f;

  if ( _this->VerticalRatio == value )
    return;

  _this->VerticalRatio = value;
  NewToOldRatio = _this->VerticalRatio / OldRatio;

  if ( GraphicsPath_GetNoOfEdges( &_this->PathData, 0 ) > 0 )
  {
    XInt32 i;
    GraphicsPath_PopMatrix( &_this->PathData );
    GraphicsPath_InitMatrix( &_this->PathData );

    for ( i = 0; i <= GraphicsPath_GetNoOfEdges( &_this->PathData, 0 ); i = i + 
         1 )
    {
      GraphicsPath_SetNode( &_this->PathData, 0, i, GraphicsPath_GetNodeX( &_this->PathData, 
      0, i ), GraphicsPath_GetNodeY( &_this->PathData, 0, i ) * NewToOldRatio );
    }

    GraphicsPath_PushMatrix( &_this->PathData );
  }

  GraphicsPath_Scale( &_this->PathData, 1.000000f, _this->VerticalRatio );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::PlotterGraph.OnSetStrokeColor()' */
void ApplicationPlotterGraph_OnSetStrokeColor( ApplicationPlotterGraph _this, XColor 
  value )
{
  if ( !EwCompColor( _this->StrokeColor, value ))
    return;

  _this->StrokeColor = value;
  ViewsStrokePath_OnSetColor( &_this->PlotterPath, _this->StrokeColor );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::PlotterGraph.ClearPath()' */
void ApplicationPlotterGraph_ClearPath( ApplicationPlotterGraph _this )
{
  ViewsStrokePath_OnSetOffset( &_this->PlotterPath, EwSetPointX( _this->PlotterPath.Offset, 
  EwGetRectW( _this->PlotterPath.Super1.Bounds ) - 2 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPath, EwSetPointY( _this->PlotterPath.Offset, 
  EwGetRectH( _this->PlotterPath.Super1.Bounds ) / 2 ));
  GraphicsPath_Begin( &_this->PathData, 0, 0.000000f, 0.000000f );
}

/* Variants derived from the class : 'Application::PlotterGraph' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPlotterGraph )
EW_END_OF_CLASS_VARIANTS( ApplicationPlotterGraph )

/* Virtual Method Table (VMT) for the class : 'Application::PlotterGraph' */
EW_DEFINE_CLASS( ApplicationPlotterGraph, CoreGroup, "Application::PlotterGraph" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
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
  ApplicationPlotterGraph_UpdateLayout,
  ApplicationPlotterGraph_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationPlotterGraph )

/* Initializer for the class 'Application::PlotterTripleGraph' */
void ApplicationPlotterTripleGraph__Init( ApplicationPlotterTripleGraph _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_Super, aLink, aArg );

  /* ... then construct all embedded objects */
  ViewsLine__Init( &_this->VLine3, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->VLine2, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->VLine1, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->HLine1, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->HLine2, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->HLine3, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->HLine4, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->HLine5, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->Border, &_this->_XObject, 0 );
  ViewsStrokePath__Init( &_this->PlotterPathR, &_this->_XObject, 0 );
  GraphicsPath__Init( &_this->PathDataR, &_this->_XObject, 0 );
  ViewsStrokePath__Init( &_this->PlotterPathS, &_this->_XObject, 0 );
  GraphicsPath__Init( &_this->PathDataS, &_this->_XObject, 0 );
  ViewsStrokePath__Init( &_this->PlotterPathT, &_this->_XObject, 0 );
  GraphicsPath__Init( &_this->PathDataT, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationPlotterTripleGraph );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00B4 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine3, _Const00C3 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine3, _Const00C4 );
  ViewsLine_OnSetColor( &_this->VLine3, _Const00C5 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine2, _Const00C6 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine2, _Const00C7 );
  ViewsLine_OnSetColor( &_this->VLine2, _Const00C5 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine1, _Const00C8 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine1, _Const00C9 );
  ViewsLine_OnSetColor( &_this->VLine1, _Const00C5 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine1, _Const00CA );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine1, _Const00AD );
  ViewsLine_OnSetColor( &_this->HLine1, _Const00C5 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine2, _Const00CB );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine2, _Const00CC );
  ViewsLine_OnSetColor( &_this->HLine2, _Const00C5 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine3, _Const00CD );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine3, _Const00CE );
  ViewsLine_OnSetColor( &_this->HLine3, _Const0015 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine4, _Const00CF );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine4, _Const00D0 );
  ViewsLine_OnSetColor( &_this->HLine4, _Const00C5 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine5, _Const00D1 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine5, _Const00D2 );
  ViewsLine_OnSetColor( &_this->HLine5, _Const00C5 );
  CoreRectView__OnSetBounds( &_this->Border, _Const00B4 );
  _this->VerticalRatio = 1.000000f;
  _this->StrokeColorR = _Const0015;
  _this->StrokeColorS = _Const0015;
  _this->StrokeColorT = _Const0015;
  CoreRectView__OnSetBounds( &_this->PlotterPathR, _Const00B4 );
  ViewsStrokePath_OnSetFlipY( &_this->PlotterPathR, 0 );
  ViewsStrokePath_OnSetWidth( &_this->PlotterPathR, 2.000000f );
  CoreRectView__OnSetBounds( &_this->PlotterPathS, _Const00B4 );
  ViewsStrokePath_OnSetFlipY( &_this->PlotterPathS, 0 );
  ViewsStrokePath_OnSetWidth( &_this->PlotterPathS, 2.000000f );
  CoreRectView__OnSetBounds( &_this->PlotterPathT, _Const00B4 );
  ViewsStrokePath_OnSetFlipY( &_this->PlotterPathT, 0 );
  ViewsStrokePath_OnSetWidth( &_this->PlotterPathT, 2.000000f );
  CoreGroup__Add( _this, ((CoreView)&_this->VLine3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VLine2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HLine1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HLine2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HLine3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HLine4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HLine5 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Border ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PlotterPathR ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PlotterPathS ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PlotterPathT ), 0 );
  ViewsStrokePath_OnSetPath( &_this->PlotterPathR, &_this->PathDataR );
  ViewsStrokePath_OnSetPath( &_this->PlotterPathS, &_this->PathDataS );
  ViewsStrokePath_OnSetPath( &_this->PlotterPathT, &_this->PathDataT );

  /* Call the user defined constructor */
  ApplicationPlotterTripleGraph_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::PlotterTripleGraph' */
void ApplicationPlotterTripleGraph__ReInit( ApplicationPlotterTripleGraph _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ViewsLine__ReInit( &_this->VLine3 );
  ViewsLine__ReInit( &_this->VLine2 );
  ViewsLine__ReInit( &_this->VLine1 );
  ViewsLine__ReInit( &_this->HLine1 );
  ViewsLine__ReInit( &_this->HLine2 );
  ViewsLine__ReInit( &_this->HLine3 );
  ViewsLine__ReInit( &_this->HLine4 );
  ViewsLine__ReInit( &_this->HLine5 );
  ViewsBorder__ReInit( &_this->Border );
  ViewsStrokePath__ReInit( &_this->PlotterPathR );
  GraphicsPath__ReInit( &_this->PathDataR );
  ViewsStrokePath__ReInit( &_this->PlotterPathS );
  GraphicsPath__ReInit( &_this->PathDataS );
  ViewsStrokePath__ReInit( &_this->PlotterPathT );
  GraphicsPath__ReInit( &_this->PathDataT );
}

/* Finalizer method for the class 'Application::PlotterTripleGraph' */
void ApplicationPlotterTripleGraph__Done( ApplicationPlotterTripleGraph _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationPlotterTripleGraph );

  /* Finalize all embedded objects */
  ViewsLine__Done( &_this->VLine3 );
  ViewsLine__Done( &_this->VLine2 );
  ViewsLine__Done( &_this->VLine1 );
  ViewsLine__Done( &_this->HLine1 );
  ViewsLine__Done( &_this->HLine2 );
  ViewsLine__Done( &_this->HLine3 );
  ViewsLine__Done( &_this->HLine4 );
  ViewsLine__Done( &_this->HLine5 );
  ViewsBorder__Done( &_this->Border );
  ViewsStrokePath__Done( &_this->PlotterPathR );
  GraphicsPath__Done( &_this->PathDataR );
  ViewsStrokePath__Done( &_this->PlotterPathS );
  GraphicsPath__Done( &_this->PathDataS );
  ViewsStrokePath__Done( &_this->PlotterPathT );
  GraphicsPath__Done( &_this->PathDataT );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::PlotterTripleGraph' */
void ApplicationPlotterTripleGraph__Mark( ApplicationPlotterTripleGraph _this )
{
  EwMarkObject( &_this->VLine3 );
  EwMarkObject( &_this->VLine2 );
  EwMarkObject( &_this->VLine1 );
  EwMarkObject( &_this->HLine1 );
  EwMarkObject( &_this->HLine2 );
  EwMarkObject( &_this->HLine3 );
  EwMarkObject( &_this->HLine4 );
  EwMarkObject( &_this->HLine5 );
  EwMarkObject( &_this->Border );
  EwMarkObject( &_this->PlotterPathR );
  EwMarkObject( &_this->PathDataR );
  EwMarkObject( &_this->PlotterPathS );
  EwMarkObject( &_this->PathDataS );
  EwMarkObject( &_this->PlotterPathT );
  EwMarkObject( &_this->PathDataT );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );
}

/* The method UpdateLayout() is invoked automatically after the size of the component 
   has been changed. This method can be overridden and filled with logic to perform 
   a sophisticated arrangement calculation for one or more enclosed views. In this 
   case the parameter aSize can be used. It contains the current size of the component. 
   Usually, all enclosed views are arranged automatically accordingly to their @Layout 
   property. UpdateLayout() gives the derived components a chance to extend this 
   automatism by a user defined algorithm. */
void ApplicationPlotterTripleGraph_UpdateLayout( ApplicationPlotterTripleGraph _this, 
  XPoint aSize )
{
  CoreGroup_UpdateLayout((CoreGroup)_this, aSize );
}

/* The method UpdateViewState() is invoked automatically after the state of the 
   component has been changed. This method can be overridden and filled with logic 
   to ensure the visual aspect of the component does reflect its current state. 
   For example, the 'enabled' state of the component can affect its colors (disabled 
   components may appear pale). In this case the logic of the method should modify 
   the respective color properties accordingly to the current 'enabled' state. 
   The current state of the component is passed as a set in the parameter aState. 
   It reflects the very basic component state like its visibility or the ability 
   to react to user inputs. Beside this common state, the method can also involve 
   any other variables used in the component as long as they reflect its current 
   state. For example, the toggle switch component can take in account its toggle 
   state 'on' or 'off' and change accordingly the location of the slider, etc.
   Usually, this method will be invoked automatically by the framework. Optionally 
   you can request its invocation by using the method @InvalidateViewState(). */
void ApplicationPlotterTripleGraph_UpdateViewState( ApplicationPlotterTripleGraph _this, 
  XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationPlotterTripleGraph_Init( ApplicationPlotterTripleGraph _this, XHandle 
  aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ViewsStrokePath_OnSetOffset( &_this->PlotterPathR, EwSetPointX( _this->PlotterPathR.Offset, 
  EwGetRectW( _this->PlotterPathR.Super1.Bounds ) - 2 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPathS, EwSetPointX( _this->PlotterPathS.Offset, 
  EwGetRectW( _this->PlotterPathS.Super1.Bounds ) - 2 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPathT, EwSetPointX( _this->PlotterPathT.Offset, 
  EwGetRectW( _this->PlotterPathT.Super1.Bounds ) - 2 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPathR, EwSetPointY( _this->PlotterPathR.Offset, 
  EwGetRectH( _this->PlotterPathR.Super1.Bounds ) / 2 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPathS, EwSetPointY( _this->PlotterPathS.Offset, 
  EwGetRectH( _this->PlotterPathS.Super1.Bounds ) / 2 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPathT, EwSetPointY( _this->PlotterPathT.Offset, 
  EwGetRectH( _this->PlotterPathT.Super1.Bounds ) / 2 ));
  GraphicsPath_SetMaxNoOfSubPaths( &_this->PathDataR, 1 );
  GraphicsPath_SetMaxNoOfSubPaths( &_this->PathDataS, 1 );
  GraphicsPath_SetMaxNoOfSubPaths( &_this->PathDataS, 1 );
  GraphicsPath_InitSubPath( &_this->PathDataR, 0, EwGetRectW( _this->PlotterPathR.Super1.Bounds 
  ) / 2 );
  GraphicsPath_InitSubPath( &_this->PathDataS, 0, EwGetRectW( _this->PlotterPathS.Super1.Bounds 
  ) / 2 );
  GraphicsPath_InitSubPath( &_this->PathDataT, 0, EwGetRectW( _this->PlotterPathT.Super1.Bounds 
  ) / 2 );
}

/* 'C' function for method : 'Application::PlotterTripleGraph.AddData()' */
void ApplicationPlotterTripleGraph_AddData( ApplicationPlotterTripleGraph _this, 
  XFloat dataPointR, XFloat dataPointS, XFloat dataPointT )
{
  if ( _this->PlotterPathR.Offset.X > 0 )
    ViewsStrokePath_OnSetOffset( &_this->PlotterPathR, EwSetPointX( _this->PlotterPathR.Offset, 
    _this->PlotterPathR.Offset.X - 2 ));

  if ( _this->PlotterPathS.Offset.X > 0 )
    ViewsStrokePath_OnSetOffset( &_this->PlotterPathS, EwSetPointX( _this->PlotterPathS.Offset, 
    _this->PlotterPathS.Offset.X - 2 ));

  if ( _this->PlotterPathT.Offset.X > 0 )
    ViewsStrokePath_OnSetOffset( &_this->PlotterPathT, EwSetPointX( _this->PlotterPathT.Offset, 
    _this->PlotterPathT.Offset.X - 2 ));

  if ( GraphicsPath_GetNoOfFreeEdges( &_this->PathDataR, 0 ) == 0 )
    GraphicsPath_ShiftNodes( &_this->PathDataR, 0, 1, -2.000000f, 0.000000f );

  if ( GraphicsPath_GetNoOfFreeEdges( &_this->PathDataS, 0 ) == 0 )
    GraphicsPath_ShiftNodes( &_this->PathDataS, 0, 1, -2.000000f, 0.000000f );

  if ( GraphicsPath_GetNoOfFreeEdges( &_this->PathDataT, 0 ) == 0 )
    GraphicsPath_ShiftNodes( &_this->PathDataT, 0, 1, -2.000000f, 0.000000f );

  if ( GraphicsPath_GetNoOfEdges( &_this->PathDataR, 0 ) == 0 )
  {
    GraphicsPath_Begin( &_this->PathDataR, 0, GraphicsPath_GetNodeX( &_this->PathDataR, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataR, 0 )) + 2.000000f, dataPointR 
    );
    GraphicsPath_AddLine( &_this->PathDataR, 0, GraphicsPath_GetNodeX( &_this->PathDataR, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataR, 0 )) + 2.000000f, dataPointR 
    );
  }
  else
  {
    GraphicsPath_AddLine( &_this->PathDataR, 0, GraphicsPath_GetNodeX( &_this->PathDataR, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataR, 0 )) + 2.000000f, dataPointR 
    );
  }

  if ( GraphicsPath_GetNoOfEdges( &_this->PathDataS, 0 ) == 0 )
  {
    GraphicsPath_Begin( &_this->PathDataS, 0, GraphicsPath_GetNodeX( &_this->PathDataS, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataS, 0 )) + 2.000000f, dataPointS 
    );
    GraphicsPath_AddLine( &_this->PathDataS, 0, GraphicsPath_GetNodeX( &_this->PathDataS, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataS, 0 )) + 2.000000f, dataPointS 
    );
  }
  else
  {
    GraphicsPath_AddLine( &_this->PathDataS, 0, GraphicsPath_GetNodeX( &_this->PathDataS, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataS, 0 )) + 2.000000f, dataPointS 
    );
  }

  if ( GraphicsPath_GetNoOfEdges( &_this->PathDataT, 0 ) == 0 )
  {
    GraphicsPath_Begin( &_this->PathDataT, 0, GraphicsPath_GetNodeX( &_this->PathDataT, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataT, 0 )) + 2.000000f, dataPointT 
    );
    GraphicsPath_AddLine( &_this->PathDataT, 0, GraphicsPath_GetNodeX( &_this->PathDataT, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataT, 0 )) + 2.000000f, dataPointT 
    );
  }
  else
  {
    GraphicsPath_AddLine( &_this->PathDataT, 0, GraphicsPath_GetNodeX( &_this->PathDataT, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataT, 0 )) + 2.000000f, dataPointT 
    );
  }
}

/* 'C' function for method : 'Application::PlotterTripleGraph.OnSetVerticalRatio()' */
void ApplicationPlotterTripleGraph_OnSetVerticalRatio( ApplicationPlotterTripleGraph _this, 
  XFloat value )
{
  XFloat OldRatio = _this->VerticalRatio;
  XFloat NewToOldRatio;
  XInt32 i;

  if ( value < 0.100000f )
    value = 0.100000f;

  if ( _this->VerticalRatio == value )
    return;

  _this->VerticalRatio = value;
  NewToOldRatio = _this->VerticalRatio / OldRatio;

  if ( GraphicsPath_GetNoOfEdges( &_this->PathDataR, 0 ) > 0 )
  {
    GraphicsPath_PopMatrix( &_this->PathDataR );
    GraphicsPath_InitMatrix( &_this->PathDataR );

    for ( i = 0; i <= GraphicsPath_GetNoOfEdges( &_this->PathDataR, 0 ); i = i + 
         1 )
    {
      GraphicsPath_SetNode( &_this->PathDataR, 0, i, GraphicsPath_GetNodeX( &_this->PathDataR, 
      0, i ), GraphicsPath_GetNodeY( &_this->PathDataR, 0, i ) * NewToOldRatio );
    }

    GraphicsPath_PushMatrix( &_this->PathDataR );
  }

  if ( GraphicsPath_GetNoOfEdges( &_this->PathDataS, 0 ) > 0 )
  {
    GraphicsPath_PopMatrix( &_this->PathDataS );
    GraphicsPath_InitMatrix( &_this->PathDataS );

    for ( i = 0; i <= GraphicsPath_GetNoOfEdges( &_this->PathDataS, 0 ); i = i + 
         1 )
    {
      GraphicsPath_SetNode( &_this->PathDataS, 0, i, GraphicsPath_GetNodeX( &_this->PathDataS, 
      0, i ), GraphicsPath_GetNodeY( &_this->PathDataS, 0, i ) * NewToOldRatio );
    }

    GraphicsPath_PushMatrix( &_this->PathDataS );
  }

  if ( GraphicsPath_GetNoOfEdges( &_this->PathDataT, 0 ) > 0 )
  {
    GraphicsPath_PopMatrix( &_this->PathDataT );
    GraphicsPath_InitMatrix( &_this->PathDataT );

    for ( i = 0; i <= GraphicsPath_GetNoOfEdges( &_this->PathDataT, 0 ); i = i + 
         1 )
    {
      GraphicsPath_SetNode( &_this->PathDataT, 0, i, GraphicsPath_GetNodeX( &_this->PathDataT, 
      0, i ), GraphicsPath_GetNodeY( &_this->PathDataT, 0, i ) * NewToOldRatio );
    }

    GraphicsPath_PushMatrix( &_this->PathDataT );
  }

  GraphicsPath_Scale( &_this->PathDataR, 1.000000f, _this->VerticalRatio );
  GraphicsPath_Scale( &_this->PathDataS, 1.000000f, _this->VerticalRatio );
  GraphicsPath_Scale( &_this->PathDataT, 1.000000f, _this->VerticalRatio );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::PlotterTripleGraph.OnSetStrokeColorR()' */
void ApplicationPlotterTripleGraph_OnSetStrokeColorR( ApplicationPlotterTripleGraph _this, 
  XColor value )
{
  if ( !EwCompColor( _this->StrokeColorR, value ))
    return;

  _this->StrokeColorR = value;
  ViewsStrokePath_OnSetColor( &_this->PlotterPathR, _this->StrokeColorR );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::PlotterTripleGraph.OnSetStrokeColorS()' */
void ApplicationPlotterTripleGraph_OnSetStrokeColorS( ApplicationPlotterTripleGraph _this, 
  XColor value )
{
  if ( !EwCompColor( _this->StrokeColorS, value ))
    return;

  _this->StrokeColorS = value;
  ViewsStrokePath_OnSetColor( &_this->PlotterPathS, _this->StrokeColorS );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::PlotterTripleGraph.OnSetStrokeColorT()' */
void ApplicationPlotterTripleGraph_OnSetStrokeColorT( ApplicationPlotterTripleGraph _this, 
  XColor value )
{
  if ( !EwCompColor( _this->StrokeColorT, value ))
    return;

  _this->StrokeColorT = value;
  ViewsStrokePath_OnSetColor( &_this->PlotterPathT, _this->StrokeColorT );
  CoreGroup_InvalidateViewState((CoreGroup)_this );
}

/* 'C' function for method : 'Application::PlotterTripleGraph.ClearPath()' */
void ApplicationPlotterTripleGraph_ClearPath( ApplicationPlotterTripleGraph _this )
{
  ViewsStrokePath_OnSetOffset( &_this->PlotterPathR, EwSetPointX( _this->PlotterPathR.Offset, 
  EwGetRectW( _this->PlotterPathR.Super1.Bounds ) - 2 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPathS, EwSetPointX( _this->PlotterPathS.Offset, 
  EwGetRectW( _this->PlotterPathS.Super1.Bounds ) - 2 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPathT, EwSetPointX( _this->PlotterPathT.Offset, 
  EwGetRectW( _this->PlotterPathT.Super1.Bounds ) - 2 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPathR, EwSetPointY( _this->PlotterPathR.Offset, 
  EwGetRectH( _this->PlotterPathR.Super1.Bounds ) / 2 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPathS, EwSetPointY( _this->PlotterPathS.Offset, 
  EwGetRectH( _this->PlotterPathS.Super1.Bounds ) / 2 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPathT, EwSetPointY( _this->PlotterPathT.Offset, 
  EwGetRectH( _this->PlotterPathT.Super1.Bounds ) / 2 ));
  GraphicsPath_Begin( &_this->PathDataR, 0, 0.000000f, 0.000000f );
  GraphicsPath_Begin( &_this->PathDataS, 0, 0.000000f, 0.000000f );
  GraphicsPath_Begin( &_this->PathDataT, 0, 0.000000f, 0.000000f );
}

/* Variants derived from the class : 'Application::PlotterTripleGraph' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPlotterTripleGraph )
EW_END_OF_CLASS_VARIANTS( ApplicationPlotterTripleGraph )

/* Virtual Method Table (VMT) for the class : 'Application::PlotterTripleGraph' */
EW_DEFINE_CLASS( ApplicationPlotterTripleGraph, CoreGroup, "Application::PlotterTripleGraph" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
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
  ApplicationPlotterTripleGraph_UpdateLayout,
  ApplicationPlotterTripleGraph_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationPlotterTripleGraph )

/* Initializer for the class 'Application::PDCButtonState' */
void ApplicationPDCButtonState__Init( ApplicationPDCButtonState _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationPDCButtonState );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Iniciar = 1;
}

/* Re-Initializer for the class 'Application::PDCButtonState' */
void ApplicationPDCButtonState__ReInit( ApplicationPDCButtonState _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Application::PDCButtonState' */
void ApplicationPDCButtonState__Done( ApplicationPDCButtonState _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationPDCButtonState );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::PDCButtonState' */
void ApplicationPDCButtonState__Mark( ApplicationPDCButtonState _this )
{
  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* 'C' function for method : 'Application::PDCButtonState.OnSetIniciar()' */
void ApplicationPDCButtonState_OnSetIniciar( ApplicationPDCButtonState _this, XBool 
  value )
{
  if ( _this->Iniciar == value )
    return;

  _this->Iniciar = value;
}

/* 'C' function for method : 'Application::PDCButtonState.OnSetParar()' */
void ApplicationPDCButtonState_OnSetParar( ApplicationPDCButtonState _this, XBool 
  value )
{
  if ( _this->Parar == value )
    return;

  _this->Parar = value;
}

/* Variants derived from the class : 'Application::PDCButtonState' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPDCButtonState )
EW_END_OF_CLASS_VARIANTS( ApplicationPDCButtonState )

/* Virtual Method Table (VMT) for the class : 'Application::PDCButtonState' */
EW_DEFINE_CLASS( ApplicationPDCButtonState, XObject, "Application::PDCButtonState" )
EW_END_OF_CLASS( ApplicationPDCButtonState )

/* Embedded Wizard */
