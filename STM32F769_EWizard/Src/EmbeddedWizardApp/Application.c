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

#include "ewlocale.h"
#include "_ApplicationAplic.h"
#include "_ApplicationAplic769.h"
#include "_ApplicationClasse.h"
#include "_ApplicationConfigScreen.h"
#include "_ApplicationConfigScreen769.h"
#include "_ApplicationFFT.h"
#include "_ApplicationFFT769.h"
#include "_ApplicationFase.h"
#include "_ApplicationFase769.h"
#include "_ApplicationFasores.h"
#include "_ApplicationFasores769.h"
#include "_ApplicationFreq.h"
#include "_ApplicationFreq769.h"
#include "_ApplicationMag.h"
#include "_ApplicationMag769.h"
#include "_ApplicationModIconButton.h"
#include "_ApplicationModifiedButton.h"
#include "_ApplicationPDC.h"
#include "_ApplicationPDC769.h"
#include "_ApplicationPDCButtonState.h"
#include "_ApplicationPDCMessage.h"
#include "_ApplicationPDCStatus.h"
#include "_ApplicationPlotterGraph.h"
#include "_ApplicationPlotterGraph769.h"
#include "_ApplicationPlotterTripleGraph.h"
#include "_ApplicationPlotterTripleGraph769.h"
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
  0x000001AA, /* ratio 59.15 % */
  0xB8002D00, 0x80000452, 0xD0007382, 0x00061001, 0x006F0019, 0x50C87080, 0x10218022,
  0x5001B801, 0x001E0006, 0x30EA32E3, 0xC0C2E008, 0x24010782, 0x61F0D85C, 0x2D2E89C4,
  0x4008E14E, 0x003B000E, 0x688C50D2, 0x0841A473, 0xA1120D27, 0xC64C7099, 0x1A68688D,
  0x60D319D5, 0xA000A082, 0xD0D9B454, 0x500541A6, 0xA3A80085, 0x8DC46BB0, 0x34120506,
  0xCB6BB088, 0x4E2B308C, 0xE695FA34, 0x7D1190C7, 0x163A0002, 0x458ED0C0, 0xBB352A8F,
  0xBAC4E493, 0xED763449, 0x43671368, 0x36296836, 0xE8D6589C, 0xAC00B561, 0x50B9B4D0,
  0x880063A7, 0x6A80760D, 0x38CD26A4, 0x13A8015B, 0xC3F214BC, 0x7483138E, 0xA758FAE5,
  0x40E78A9E, 0x00E83466, 0x39000D6A, 0x68B0B62C, 0x8B0C4003, 0x36BC0048, 0xEFEA0128,
  0x4F5FC189, 0x001BE144, 0x27D0E70C, 0x200951B6, 0x01EBC905, 0x00000001, 0x00000000
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
static const XRect _Const00B1 = {{ 0, 0 }, { 800, 480 }};
static const XRect _Const00B2 = {{ 0, 8 }, { 800, 488 }};
static const XRect _Const00B3 = {{ 0, 438 }, { 800, 488 }};
static const XRect _Const00B4 = {{ 30, 438 }, { 770, 480 }};
static const XRect _Const00B5 = {{ 0, 8 }, { 800, 438 }};
static const XRect _Const00B6 = {{ 800, 8 }, { 1600, 438 }};
static const XRect _Const00B7 = {{ 1600, 8 }, { 2400, 438 }};
static const XRect _Const00B8 = {{ 2400, 8 }, { 3200, 438 }};
static const XRect _Const00B9 = {{ 3200, 8 }, { 4000, 438 }};
static const XRect _Const00BA = {{ 4000, 8 }, { 4800, 438 }};
static const XRect _Const00BB = {{ 0, 0 }, { 800, 430 }};
static const XPoint _Const00BC = { 225, 215 };
static const XRect _Const00BD = {{ 30, 20 }, { 420, 410 }};
static const XRect _Const00BE = {{ 410, 205 }, { 460, 225 }};
static const XRect _Const00BF = {{ -11, 205 }, { 39, 225 }};
static const XRect _Const00C0 = {{ 200, 0 }, { 250, 20 }};
static const XRect _Const00C1 = {{ 200, 410 }, { 250, 430 }};
static const XRect _Const00C2 = {{ 318, 385 }, { 348, 406 }};
static const XRect _Const00C3 = {{ 99, 383 }, { 129, 404 }};
static const XRect _Const00C4 = {{ 23, 308 }, { 53, 329 }};
static const XRect _Const00C5 = {{ 105, 24 }, { 135, 45 }};
static const XRect _Const00C6 = {{ 322, 24 }, { 342, 45 }};
static const XRect _Const00C7 = {{ 398, 307 }, { 428, 328 }};
static const XRect _Const00C8 = {{ 400, 100 }, { 420, 121 }};
static const XRect _Const00C9 = {{ 20, 100 }, { 50, 121 }};
static const XRect _Const00CA = {{ 450, 20 }, { 632, 48 }};
static const XRect _Const00CB = {{ 673, 20 }, { 785, 48 }};
static const XRect _Const00CC = {{ 610, 150 }, { 626, 182 }};
static const XRect _Const00CD = {{ 760, 150 }, { 776, 182 }};
static const XRect _Const00CE = {{ 610, 110 }, { 626, 142 }};
static const XRect _Const00CF = {{ 760, 110 }, { 776, 142 }};
static const XRect _Const00D0 = {{ 610, 70 }, { 626, 102 }};
static const XRect _Const00D1 = {{ 760, 70 }, { 776, 102 }};
static const XPoint _Const00D2 = { 790, 60 };
static const XPoint _Const00D3 = { 440, 60 };
static const XPoint _Const00D4 = { 225, 227 };
static const XPoint _Const00D5 = { 420, 227 };
static const XPoint _Const00D6 = { 420, 211 };
static const XPoint _Const00D7 = { 225, 211 };
static const XPoint _Const00D8 = { 2, 7 };
static const XRect _Const00D9 = {{ 640, 310 }, { 800, 340 }};
static const XRect _Const00DA = {{ 640, 200 }, { 800, 230 }};
static const XRect _Const00DB = {{ 640, 90 }, { 800, 120 }};
static const XRect _Const00DC = {{ 600, 390 }, { 680, 420 }};
static const XRect _Const00DD = {{ 450, 390 }, { 530, 420 }};
static const XRect _Const00DE = {{ 290, 390 }, { 380, 420 }};
static const XRect _Const00DF = {{ 140, 390 }, { 230, 420 }};
static const XRect _Const00E0 = {{ 10, 390 }, { 100, 420 }};
static const XRect _Const00E1 = {{ 40, 0 }, { 280, 50 }};
static const XRect _Const00E2 = {{ 280, 0 }, { 530, 50 }};
static const XRect _Const00E3 = {{ 720, 350 }, { 790, 420 }};
static const XRect _Const00E4 = {{ 40, 50 }, { 640, 380 }};
static const XRect _Const00E5 = {{ 660, 310 }, { 770, 340 }};
static const XRect _Const00E6 = {{ 660, 200 }, { 770, 230 }};
static const XRect _Const00E7 = {{ 660, 90 }, { 770, 120 }};
static const XRect _Const00E8 = {{ 300, 390 }, { 380, 420 }};
static const XRect _Const00E9 = {{ 150, 390 }, { 230, 420 }};
static const XRect _Const00EA = {{ 10, 390 }, { 90, 420 }};
static const XRect _Const00EB = {{ 590, 5 }, { 720, 45 }};
static const XRect _Const00EC = {{ 460, 5 }, { 590, 45 }};
static const XRect _Const00ED = {{ 330, 5 }, { 460, 45 }};
static const XRect _Const00EE = {{ 40, 5 }, { 350, 45 }};
static const XRect _Const00EF = {{ 0, 390 }, { 80, 420 }};
static const XRect _Const00F0 = {{ 40, 5 }, { 250, 45 }};
static const XPoint _Const00F1 = { 120, 399 };
static const XPoint _Const00F2 = { 120, 20 };
static const XPoint _Const00F3 = { 219, 399 };
static const XPoint _Const00F4 = { 219, 20 };
static const XPoint _Const00F5 = { 320, 399 };
static const XPoint _Const00F6 = { 320, 20 };
static const XPoint _Const00F7 = { 420, 399 };
static const XPoint _Const00F8 = { 420, 20 };
static const XPoint _Const00F9 = { 519, 304 };
static const XPoint _Const00FA = { 20, 304 };
static const XPoint _Const00FB = { 519, 209 };
static const XPoint _Const00FC = { 20, 209 };
static const XPoint _Const00FD = { 519, 115 };
static const XPoint _Const00FE = { 20, 115 };
static const XRect _Const00FF = {{ 90, 400 }, { 150, 430 }};
static const XRect _Const0100 = {{ 190, 400 }, { 250, 430 }};
static const XRect _Const0101 = {{ 290, 400 }, { 350, 430 }};
static const XRect _Const0102 = {{ 390, 400 }, { 450, 430 }};
static const XRect _Const0103 = {{ 530, 290 }, { 600, 320 }};
static const XRect _Const0104 = {{ 530, 195 }, { 600, 225 }};
static const XRect _Const0105 = {{ 530, 100 }, { 600, 130 }};
static const XRect _Const0106 = {{ 20, 20 }, { 520, 400 }};
static const XPoint _Const0107 = { 0, 380 };
static const XPoint _Const0108 = { 10, 380 };
static const XRect _Const0109 = {{ 610, 60 }, { 780, 130 }};
static const XRect _Const010A = {{ 610, 180 }, { 780, 250 }};
static const XRect _Const010B = {{ 610, 300 }, { 780, 370 }};
static const XRect _Const010C = {{ 10, 80 }, { 790, 130 }};
static const XRect _Const010D = {{ 120, 320 }, { 360, 380 }};
static const XRect _Const010E = {{ 10, 10 }, { 430, 60 }};
static const XStringRes _Const010F = { _StringsDefault1, 0x0053 };
static const XRect _Const0110 = {{ 10, 170 }, { 370, 220 }};
static const XRect _Const0111 = {{ 10, 220 }, { 780, 280 }};
static const XStringRes _Const0112 = { _StringsDefault1, 0x0069 };
static const XRect _Const0113 = {{ 440, 320 }, { 680, 380 }};
static const XRect _Const0114 = {{ 0, 0 }, { 30, 30 }};
static const XPoint _Const0115 = { 30, 30 };
static const XPoint _Const0116 = { 30, 0 };
static const XRect _Const0117 = {{ 0, 0 }, { 380, 180 }};
static const XColor _Const0118 = { 0x00, 0x00, 0x00, 0x80 };
static const XRect _Const0119 = {{ 10, 10 }, { 350, 50 }};
static const XStringRes _Const011A = { _StringsDefault1, 0x0079 };
static const XRect _Const011B = {{ 10, 90 }, { 370, 130 }};
static const XStringRes _Const011C = { _StringsDefault1, 0x0099 };
static const XRect _Const011D = {{ 60, 45 }, { 100, 85 }};
static const XRect _Const011E = {{ 280, 45 }, { 320, 85 }};
static const XRect _Const011F = {{ 60, 125 }, { 100, 165 }};
static const XRect _Const0120 = {{ 280, 125 }, { 320, 165 }};
static const XRect _Const0121 = {{ 90, 45 }, { 290, 85 }};
static const XStringRes _Const0122 = { _StringsDefault1, 0x00B6 };
static const XRect _Const0123 = {{ 90, 125 }, { 290, 165 }};
static const XStringRes _Const0124 = { _StringsDefault1, 0x00C4 };
static const XRect _Const0125 = {{ 340, 0 }, { 380, 40 }};
static const XRect _Const0126 = {{ 329, 45 }, { 369, 85 }};
static const XRect _Const0127 = {{ 11, 45 }, { 51, 85 }};
static const XRect _Const0128 = {{ 0, 0 }, { 600, 330 }};
static const XRect _Const0129 = {{ 20, 20 }, { 550, 70 }};
static const XRect _Const012A = {{ 20, 170 }, { 580, 220 }};
static const XRect _Const012B = {{ 100, 70 }, { 160, 130 }};
static const XRect _Const012C = {{ 440, 70 }, { 500, 130 }};
static const XRect _Const012D = {{ 100, 230 }, { 160, 290 }};
static const XRect _Const012E = {{ 440, 230 }, { 500, 290 }};
static const XRect _Const012F = {{ 150, 70 }, { 450, 130 }};
static const XRect _Const0130 = {{ 150, 230 }, { 450, 290 }};
static const XRect _Const0131 = {{ 540, 0 }, { 600, 60 }};
static const XRect _Const0132 = {{ 518, 70 }, { 578, 130 }};
static const XRect _Const0133 = {{ 22, 70 }, { 82, 130 }};
static const XPoint _Const0134 = { 285, 180 };
static const XPoint _Const0135 = { 285, 0 };
static const XColor _Const0136 = { 0xFF, 0xFF, 0xFF, 0x40 };
static const XPoint _Const0137 = { 190, 180 };
static const XPoint _Const0138 = { 190, 0 };
static const XPoint _Const0139 = { 95, 180 };
static const XPoint _Const013A = { 95, 0 };
static const XPoint _Const013B = { 380, 30 };
static const XPoint _Const013C = { 380, 60 };
static const XPoint _Const013D = { 0, 60 };
static const XPoint _Const013E = { 380, 90 };
static const XPoint _Const013F = { 0, 90 };
static const XPoint _Const0140 = { 380, 120 };
static const XPoint _Const0141 = { 0, 120 };
static const XPoint _Const0142 = { 380, 150 };
static const XPoint _Const0143 = { 0, 150 };
static const XPoint _Const0144 = { 449, 328 };
static const XPoint _Const0145 = { 449, 0 };
static const XPoint _Const0146 = { 299, 328 };
static const XPoint _Const0147 = { 299, 0 };
static const XPoint _Const0148 = { 150, 328 };
static const XPoint _Const0149 = { 150, 0 };
static const XPoint _Const014A = { 598, 55 };
static const XPoint _Const014B = { 0, 55 };
static const XPoint _Const014C = { 598, 109 };
static const XPoint _Const014D = { 0, 109 };
static const XPoint _Const014E = { 598, 164 };
static const XPoint _Const014F = { 0, 164 };
static const XPoint _Const0150 = { 598, 219 };
static const XPoint _Const0151 = { 0, 219 };
static const XPoint _Const0152 = { 598, 273 };
static const XPoint _Const0153 = { 0, 273 };
static const XRect _Const0154 = {{ 0, 0 }, { 598, 328 }};

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

  /* Create and initialize the suitable class variant */
  EwAttachObjectVariant( &_this->_XObject, aLink, aArg );
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

  /* Reinitialize the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_ReInit( &_this->_XObject );
}

/* Finalizer method for the class 'Application::Aplic' */
void ApplicationAplic__Done( ApplicationAplic _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationAplic );

  /* Deinitialize the variant */
  EwDetachObjectVariant( &_this->_XObject );

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

  /* Don't forget the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_Mark( &_this->_XObject );
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
  EW_STATIC_CLASS_VARIANT( ApplicationAplic769 ),
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
  EW_BITMAP_FRAMES( Applicationflecha, Default, EW_DRIVER_VARIANT_ALPHA8, 195, 14, 0 )
    EW_BITMAP_FRAME( 1, 5, 189, 4, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( Applicationflecha, Default )                 /* ratio 9.08 % */
    0x1C080100, 0xC1A0B048, 0x2A130883, 0xA1B0C85C, 0x231087C3, 0x2948344A, 0x18898990,
    0xC8DC6A33, 0x8647A3B1, 0xEBEDFE71, 0xC7C2E625, 0xAA532893, 0x4070C95C, 0xDF307FB4,
    0x807242A1, 0x389BCDA5, 0x02EC3273, 0x6EBFE7B3, 0xA41C668B, 0xD1A8A9F4, 0x2A9348A3,
    0xA9B4CA5D, 0xA350A7D3, 0xB54A9D4A, 0x3E58D26A, 0xE3A32AB3, 0xACBE6081, 0x1D8AC360,
    0xD9ACB64B, 0xAAD368B3, 0xEDB6CB5D, 0xAEB17AD8, 0xCED0003C, 0x78BBDDAD, 0xCBDDEAF3,
    0x4F3C27D7, 0x1E0AFB75, 0x61B0B84C, 0xECFED6B1, 0xB1B8CC3B, 0xC563C7E3, 0x1021CA49,
    0x98CBA290, 0xCCDE6B33, 0xCFE7B3B9, 0x1E8B43A0, 0xE9B4BA4D, 0x89439BD3, 0xCA8AE79D,
    0x63B09D02, 0x2638E6CB, 0x6A623FAB, 0xCDDECC38, 0x03C2B7BB, 0x436A7ADA, 0xF1B7C2E4,
    0xFD0DBEE3, 0x8889F753, 0xA3D0E401, 0x4613C6C3, 0x0080C3C2, 0x00000000

  EW_BITMAPS_TABLE( Applicationflecha )
    EW_BITMAP( Applicationflecha, Default )
EW_END_OF_BITMAP_RES( Applicationflecha )

/* Table with links to derived variants of the bitmap resource : 'Application::flecha' */
EW_RES_WITHOUT_VARIANTS( Applicationflecha )

/* Bitmap resource : 'Application::grid' */
EW_DEFINE_BITMAP_RES( Applicationgrid )
  EW_BITMAP_FRAMES( Applicationgrid, Default, EW_DRIVER_VARIANT_ALPHA8, 390, 390, 0 )
    EW_BITMAP_FRAME( 194, 1, 2, 27, 0x00000000, 0x00000000 )

  EW_BITMAP_PIXEL( Applicationgrid, Default )                   /* ratio 8.92 % */
    0x1C080100, 0xC1A0B048, 0x2A130883, 0xA1B0C85C, 0x231087C3, 0x80581C4A, 0x3E1808C2,
    0x2399889E, 0x56A7D248, 0x9B3186B8, 0xB91C0DA6, 0x95CEE772, 0x9B2DE71B, 0x6CC16534,
    0xE904E2AD, 0x4C2F9C0F, 0x1108BC76, 0x9FC4C081, 0x1D0A8340, 0xD1A8B44A, 0x2A9348A3,
    0xC1001875, 0xB84B1C06, 0xCB04A1D8, 0xF3723558, 0xCADD69FE, 0xAFD7ABB5, 0x1BC5FB5D,
    0xAB58AD27, 0x28B47147, 0xC0E181A9, 0xE370B7D2, 0xB74B9DCA, 0x03815DAE, 0x7300F440,
    0x77B4D5C8, 0xE57EC0FD, 0x399DAF57, 0x49ACDA70, 0x6B4E766B, 0xB6D691B8, 0xCEF73B85,
    0x5EC13F9E, 0x8673B1FB, 0x1C96506A, 0x1E8AEE1A, 0xE9B4BA4D, 0xBC1B08D3, 0x5347E2F0,
    0x04F76FB1, 0x6DA76BDF, 0x884AAA58, 0x5349D0FC, 0x188E48C5, 0xE0804A2B, 0x8442A180,
    0x40C95A43, 0x438190B0, 0x642C1308, 0x457240EC, 0x8A401D8D, 0xE63AB930, 0xC13E1E0D,
    0xA2FDB4F4, 0x89CAE784, 0xABD3A805, 0xBDBECF5F, 0x841B00C0, 0x6D9531D0, 0xE67C581F,
    0x048AC194, 0x0D8D4A47, 0x88044808, 0xB4485A56, 0x5C390800, 0xB5254751, 0x3E4EA340,
    0x4D13DD60, 0x40EC6927, 0x66187B81, 0x1186E1A8, 0x17423021, 0x0DD3209C, 0x23D55D84,
    0x908E2ECE, 0x240C4401, 0x20D44040, 0x5431795A, 0x20981400, 0x586A1103, 0xB1398C32,
    0x360F3575, 0x052248C2, 0x68713E07, 0x9A4891E4, 0x8311C206, 0x57559300, 0x1E336CF4,
    0xA8B83719, 0xC8FF8C14, 0x3E0554A8, 0x3109B1AC, 0x95C890DF, 0xF1E4B53B, 0xA64906C3,
    0x439AE6A9, 0x1F833031, 0x4FA388C3, 0x3328EE57, 0x6C2B15C9, 0x585C8090, 0x0317096A,
    0x0610BC1D, 0x53C4D327, 0xC0B937E2, 0x6C804291, 0xA3E8EA36, 0x4801301D, 0x55719732,
    0x849A2F4E, 0x77004291, 0x015779F5, 0x4A11A832, 0xA574EE30, 0x14772F4F, 0xACA3E171,
    0x05618AB6, 0x8E329053, 0x73D95B7D, 0x784F260D, 0x9E6927B0, 0x0940B692, 0xCDD28C5C,
    0xE3E15B9C, 0x444625CD, 0xCCB2EAE0, 0x1881A5DE, 0x15D3649D, 0x21BCA639, 0xF5A7AEC4,
    0x4B03DA7A, 0xA94B01DC, 0xC953415C, 0x6B340F15, 0x3D45B9EE, 0xE32683F0, 0x390FD570,
    0x41C160A7, 0x37A6DA7B, 0xD4630840, 0xD9574E82, 0x02831230, 0x302C06E8, 0x42343943,
    0x28DB5729, 0x190744F2, 0x099ECBD6, 0x0E626456, 0x0300F857, 0x67030AC8, 0x5407F03C,
    0x56A4F2D8, 0xC522ACDC, 0xEC3A1AAA, 0x86F9069E, 0x4929A633, 0xCBF1A064, 0x4940DEAE,
    0xA3D55C39, 0x2013148A, 0x1C867269, 0xAD0B8180, 0x8853655A, 0x9D17300A, 0xA45405A6,
    0xF756CF42, 0x0A882308, 0x87E9269C, 0x69A45856, 0x308F0E00, 0xEE3FE953, 0x03848264,
    0x218D8746, 0xC34C7305, 0x049E3C95, 0x0386B511, 0x06811028, 0x42909420, 0x9568970A,
    0x94290A07, 0x100601F0, 0x87002024, 0x0AE13009, 0x13215AB1, 0x27627A06, 0x860D5A6E,
    0x3115C378, 0x5E909C76, 0x108C1100, 0xD0611143, 0x9622C801, 0x310B7290, 0x0E5374D1,
    0x33C4F03B, 0xE6C43CCF, 0xF13C8F23, 0x390EA3BC, 0xCC2338DA, 0x9250A12C, 0x70711F88,
    0x200BC431, 0x009A8D80, 0x0CF21433, 0x21E4D257, 0xD3C8E2B9, 0x1F268335, 0x144B53F3,
    0xC0669406, 0x91583204, 0x34B926C7, 0x983D8E43, 0x8FBDEF75, 0x4B4324E0, 0xD1447425,
    0x94050442, 0xC71840F6, 0x224E7D6C, 0xBF2F2424, 0xC2C84352, 0x2CE456BD, 0x76DFC2E2,
    0x0FC21015, 0x3004B069, 0x1E8E81AE, 0xF21FA609, 0xA6374738, 0xE8620CB1, 0x00A81602,
    0xA1262685, 0x82F0AD0C, 0x85089C12, 0x8BC1622A, 0x1AA33062, 0x3D0748DE, 0x7B1606B6,
    0xBA1A6398, 0x72180470, 0x1CBBAF30, 0x78A00740, 0x11DA56C7, 0xEFCC198A, 0xC1E14286,
    0x8E04C42A, 0x2EA09846, 0x0C80C803, 0x600920C0, 0x5C848380, 0x623A47D1, 0x0C4E0B87,
    0x08540DC2, 0xD0500D82, 0xCDF80981, 0x0AD07B20, 0x80420C15, 0x03E05405, 0x1101C02B,
    0x4386F0AE, 0xD017C284, 0x803B06E0, 0xE86D2A66, 0x70551142, 0x26D60501, 0x826C1917,
    0x87795B1D, 0xC3805C25, 0x07A43E3E, 0x355A00B5, 0xB92560DC, 0x860A208C, 0x083B4618,
    0xF11F95C7, 0x78751302, 0x60151C82, 0x643DFE00, 0x80190A67, 0x81801601, 0x0F415819,
    0x370618A0, 0x7C95C80C, 0x7D1743A0, 0xE6C30230, 0x884081D2, 0x08F92B63, 0x48FC0B45,
    0x80F883CB, 0x0AD8F514, 0x8170DE33, 0x040008B8, 0x2DC4205A, 0x7E15D654, 0x9317839C,
    0x6815C3E0, 0x023A01A0, 0x29119305, 0xC0700780, 0x82603F85, 0xE240EC18, 0x0AD1B63F,
    0x65C1443F, 0x1F812171, 0x7595B1B8, 0xB505E238, 0x3609A5AC, 0x60AD1811, 0x7B000CC3,
    0x206C018B, 0xC3C85C07, 0x8690F82B, 0x8400E82A, 0x28B33809, 0x008A0CD0, 0x3E048034,
    0xFC1B02C0, 0x563A8AF0, 0xC23E0671, 0xA07C02A5, 0x11E45699, 0xF3A40C08, 0x04381C86,
    0x8D72B639, 0x29668435, 0x2642C014, 0xAE4F718A, 0x811843BC, 0x2A0DC2D0, 0xC918A7C0,
    0xF83D0345, 0xF1982302, 0xC3ACAD31, 0x42509117, 0x025296B9, 0x682C4C3F, 0x45DDF076,
    0x300086C5, 0xE72B4E38, 0x960483F8, 0x64270152, 0xD15BA242, 0x11423507, 0xCA741106,
    0x001175A5, 0x8AB0D20B, 0x1B71206E, 0x5082188E, 0x4A81F291, 0xC92B4A18, 0xC350C258,
    0x6C6284C6, 0x28851E25, 0xA0225281, 0xA3605705, 0x8578EB2B, 0xCBD06618, 0x2E1404D1,
    0x1C01C01D, 0xAD567176, 0xA21A63E4, 0x94030268, 0x904E02C2, 0xC0B21F68, 0xD6355AC1,
    0x65704C82, 0x8A483016, 0x08D08E04, 0x1A257272, 0x2AC310A7, 0xE488A34D, 0x6E0506A0,
    0xBA368580, 0xFC3F8D02, 0x21475180, 0x32B631C2, 0x607C418F, 0x4042E8B2, 0x15D1D41D,
    0x04E52039, 0x2306B882, 0x218941C5, 0x51350C90, 0x762784F8, 0x3C0D1EB0, 0xA8E91481,
    0x30E63299, 0x9658A2DA, 0xC2F0DF2B, 0xA8EB713F, 0x2B62FC22, 0xF704A0D4, 0xA142D1CE,
    0xA30B6050, 0xB4570780, 0x1C2E89D1, 0x501DB717, 0xAA7E2983, 0x02547315, 0xE1CB880A,
    0x8971CC9C, 0x15456A8D, 0xAB2EE037, 0xEF892024, 0x981EA3FC, 0xB4262960, 0x88A10902,
    0xDAD20FA0, 0xA1763C0A, 0xD80A7005, 0x03502020, 0x15A97232, 0x0D63387F, 0x00C9FD7D,
    0x3895A16A, 0xAE04E000, 0xE03FE848, 0x5EFC8761, 0xA05C4938, 0xF17C56C6, 0xA0688183,
    0xC218F631, 0x8A60924F, 0x19257075, 0x8BE1B073, 0x1F002215, 0x5C1AE1F8, 0x9826C6F1,
    0x5C32913B, 0x8AD818A6, 0x42B63402, 0xF90C220C, 0x84C81B48, 0x8771D78A, 0x10440E78,
    0x76C5795A, 0x26812213, 0xEB7082EC, 0xC61385A0, 0x5485657A, 0x50C30BE0, 0xC1E656AF,
    0xF62C1E8A, 0x6D580F21, 0x9050AE3F, 0xA4A24809, 0x2143F8F5, 0x2D9EDCDB, 0xA81FF678,
    0x1C4198C0, 0xF87F8CD0, 0xA10DCF83, 0xC1A21C80, 0x41EC6C15, 0x487E84D1, 0x88C06C00,
    0x18656D7D, 0x42ED805F, 0x5615A0F8, 0x3920CFA4, 0x812E8620, 0x58F5E990, 0x1CED1200,
    0x748A1B87, 0xC65C2790, 0x08552C1A, 0x6480D207, 0x0DC326C3, 0x44B56EB9, 0x6A87F044,
    0x5A188D6C, 0x6041AF78, 0xCC76DBC0, 0x080C2112, 0xA1E8B804, 0x9B0B3B87, 0xB1904734,
    0x82315A56, 0x17800885, 0x4243B15A, 0x62080028, 0x4716656A, 0x27B5E4B0, 0xA82980B2,
    0x50D22B7A, 0x62105B83, 0x8244AD0A, 0xC6183321, 0xE4218256, 0x0205D775, 0x39112082,
    0x84EEA0D4, 0xE5BD40D4, 0x36416B90, 0xFF5E87A0, 0x18A01DA3, 0x0DFDAD02, 0xE1440514,
    0x46540615, 0x905A961A, 0x1B66C420, 0x0408681E, 0x76E720FA, 0x14DE61A0, 0xDE090B87,
    0x285E8FFD, 0xD08F21DC, 0x720829CA, 0xD6AC3600, 0x4190A2B0, 0x0B2B63CA, 0x8B6334AE,
    0x31806903, 0x880622B4, 0x5ACA60F8, 0x76CE4531, 0xB43214AE, 0xC0F11FEB, 0x3220F443,
    0x23E4C682, 0x00500008, 0x513D1A19, 0xE980D84A, 0x11401948, 0x7F2B4152, 0x7F09C2F0,
    0x98568363, 0x4C872D81, 0xA2C41260, 0x6EC01146, 0xA22C0694, 0xC1E8D39D, 0x15A0DA4F,
    0x1761205A, 0x0E854D51, 0x2494BEE8, 0xA32B82E8, 0xFE354200, 0xFC248FB1, 0x853F0B24,
    0x2F081C07, 0x63001494, 0xF650962B, 0x0B300843, 0x15ED00AD, 0x52FCA75F, 0x60847008,
    0x8F2B5544, 0x3A088A08, 0x8B10F32F, 0x784B21FE, 0x1F263B7A, 0x22940914, 0x42A0C4AA,
    0x948F5FC1, 0x1A81A405, 0x2007FE2A, 0x06112EDA, 0xCB588230, 0x1BEF3008, 0x655A07F2,
    0xC941B243, 0xBD4BCDC2, 0x8030B9FC, 0x47E95B19, 0x141C6A32, 0x1E3A782A, 0x41BEAA7E,
    0xAD89A030, 0x12BAA2A0, 0xDA290161, 0xA4D88F19, 0x7FE29D03, 0xF696130B, 0x43FDA58E,
    0x7F408E1E, 0xF9705E44, 0xF863D87F, 0x221047F1, 0x078C5B30, 0x10F7BB08, 0xED075006,
    0xE0B315B0, 0x5FF09002, 0x0B14A801, 0x40FF6940, 0x7D803C06, 0x4035518E, 0xB09E00D1,
    0x74B0AB15, 0xDF0477F1, 0x10553F80, 0x0C204514, 0x6E0566F0, 0x62D20161, 0x8110480F,
    0x9706C148, 0x227B0BC1, 0x18D06A01, 0xAF0FC0FF, 0x51400290, 0x3F707000, 0xF102C0CA,
    0xF43205D7, 0x73A0D60F, 0x7700E13F, 0x70F93F70, 0x00061609, 0x2E76B05F, 0xE1418306,
    0x0F42FB01, 0x2A103783, 0x215B0AF0, 0x0030620E, 0x1204E140, 0xC7DC0DC5, 0x2B407E7B,
    0x3F2680AD, 0xA74303B1, 0x0420C315, 0xC800A106, 0x406615A0, 0x09614485, 0xCE0A315A,
    0x30520044, 0x3C70B17D, 0xC902C113, 0xF0F015A0, 0x0097AF05, 0xFD0FF878, 0x16D60950,
    0x07600E11, 0x860EB24F, 0x210800D0, 0x0DC1B104, 0x3F87686A, 0x980B0351, 0x10572F0E,
    0xB409A021, 0x005E0E02, 0x02011386, 0x7961D0B1, 0x06EB6630, 0x61D0AB01, 0x25140077,
    0xB15A7870, 0x1097A10C, 0xA50FF375, 0xA89A8AC0, 0x41500910, 0x0B06E0FF, 0xF6870551,
    0x11271C09, 0x5A7E5006, 0x98BC0921, 0x7FD02069, 0x4005D0EF, 0x74C405F1, 0x6830840F,
    0xF502B108, 0x30780E70, 0x10E8BD71, 0xF808C011, 0xB2CA0DA0, 0x81D01E10, 0x8E0CF15A,
    0xA07813F7, 0x8D80A162, 0xD202A6D7, 0xF04D5360, 0x09501113, 0x730DA295, 0x005310E7,
    0x1138DF7F, 0x0E82F045, 0xE47805E1, 0x6A707A7F, 0x24068112, 0xB53B0B72, 0x6BD0376E,
    0x118B70DC, 0xA8830381, 0x5B709915, 0x2E2188FF, 0x50FF7AC0, 0x11343F0B, 0xC02E0053,
    0x96EB0210, 0x0CC53F03, 0x04110698, 0xA90505D0, 0x9198C20E, 0x8400921A, 0x60D73F70,
    0x51290065, 0x999180C9, 0xF5D104A6, 0x8990C30F, 0x9C008110, 0x20C815B0, 0x21C93084,
    0xFA611043, 0x113F07C0, 0x0D873703, 0x4566D946, 0xA91D80B0, 0x02710C79, 0x960FB7AC,
    0xC9478E50, 0x73D02321, 0x5C09D15A, 0xA8F21109, 0x6CF0D115, 0x67049643, 0xD8F00B05,
    0x54704110, 0x5D7450F3, 0x30032489, 0x95156820, 0x5C020110, 0xF83C0E27, 0x93D04B62,
    0x0E8530AC, 0xE61C0661, 0x9738FB0C, 0x1205A249, 0x28F50E25, 0x87302311, 0xFD0D20FF,
    0x70435B86, 0x88D0A756, 0x8B00310E, 0xF0BB15B0, 0x24898884, 0xFF3C3031, 0x30690F80,
    0x80401911, 0x4389F0E1, 0xF5BC04B5, 0x7C40A60F, 0xAF01710D, 0x808915A8, 0x26999F72,
    0x5B0A7014, 0xE6A20911, 0x82801C10, 0x6B599846, 0xE9050375, 0x10D9980A, 0xFE6FA01C,
    0xD9B75BE7, 0x73100728, 0x0D09F15A, 0x201910F9, 0x7210D29A, 0x4F037517, 0x51129C67,
    0x0E761103, 0xAC9CD04C, 0x624F0692, 0x10C7FA0C, 0xCE818020, 0xA4B451F0, 0x15A0DB02,
    0x0B96D0B8, 0x24C40491, 0x9E29C20D, 0x1204C28F, 0x08480CD5, 0x6DA02111, 0xC89560BB,
    0xF8F301D3, 0x6C10C20F, 0xF704F10F, 0x893A0C33, 0x03228F9F, 0xDE15A0DD, 0xB10F9FD0,
    0x0B654702, 0x123F365E, 0xE0FF7A60, 0x1115160C, 0xAD67206B, 0xFA0E7AE0, 0x6EF02928,
    0x1156A0E4, 0xF53F0341, 0x38A8DE09, 0x120AE00A, 0x8111344A, 0x0A115B06, 0xAEA25753,
    0xC6EF0172, 0x1109020E, 0x8C672044, 0xB8894370, 0x1120350E, 0x8A15A7CD, 0xFA3A9820,
    0x0AA01828, 0x11205884, 0xD2100581, 0x3C87B40F, 0xED15A07D, 0x479BA2A0, 0x08B88A6A,
    0x0D2E7A4D, 0xC0F59B30, 0x06911205, 0x590FD1DF, 0xA05A3C80, 0x10E7E162, 0x61625660,
    0x90072E8A, 0x8D20F98B, 0xEEA71111, 0x73890390, 0x0FB43204, 0x7192A8B1, 0x30790F8A,
    0x008301A7, 0x720F78B9, 0xB00210F9, 0x0DB15A09, 0x2434597D, 0x70FF8230, 0x45911209,
    0x8606D15A, 0x4002302A, 0x05658609, 0xCA00B111, 0x366C0C29, 0x8C001630, 0x108940AC,
    0x815A07F1, 0xA9BA9A0F, 0x9B005302, 0x105B7FE9, 0x81801D11, 0xE8A2F0AD, 0xA09D0012,
    0x9400D515, 0x8106710D, 0x0A850FE1, 0x002303AB, 0x3F88409F, 0x503610EA, 0x3199CC84,
    0xE80FF353, 0xB10E8FE0, 0xA57AC306, 0x93AB1AC6, 0xF9368840, 0x3DC04C10, 0x03AB50F9,
    0xC1F604A3, 0x1110520F, 0x607F6050, 0x931AAD9A, 0x0FFA3200, 0x0D9120DF, 0x90FFA591,
    0x2E78800E, 0x805FE027, 0x60461110, 0xAEC08A7F, 0x60009330, 0xB6DD0E59, 0x8B50A379,
    0x0D2CD820, 0xA0FF56E0, 0x10E8A60A, 0x5A0E0037, 0x09B60A11, 0x019303B0, 0xCA15A0BE,
    0x110F9240, 0x0A075C01, 0xB326C8CD, 0xEA1F0DAA, 0x54701A10, 0x16B150AF, 0x5015303B,
    0xA390BEA0, 0x5A89C10D, 0x22E60651, 0x0EC18106, 0x1810FA47, 0x60C27FD0, 0x346B2B01,
    0xA361102E, 0x510AB2A0, 0x03C67305, 0x3F0222CC, 0x210CAD85, 0x0D6AEF00, 0x30B3F5E5,
    0x49540333, 0x8CA11108, 0x6A9F20C8, 0x86EF00F2, 0x104B2109, 0x140E6AB3, 0x0330B52A,
    0x0FD1B105, 0x0A10F9A5, 0xF0A38B40, 0xA7128EB0, 0x0C9630D8, 0x715A0651, 0xB6404A0F,
    0x5A06F389, 0xF8700F41, 0x2E002F10, 0x4628FA6B, 0xC0F43DC0, 0x04210E64, 0x78B4C525,
    0x0ADB345B, 0x10B9AAAF, 0xE7509060, 0x528E0280, 0x07861101, 0x4F025110, 0xBB5F08B7,
    0x00A2E7B8, 0xA586E0B0, 0x7001109A, 0x0B40FFB0, 0x92269B30, 0xD0BE15A0, 0x0B88BE9B,
    0x440BB15A, 0xC32FB9EB, 0x09661101, 0x1B108807, 0xC06C59E0, 0x1F605B26, 0x4C3F10E0,
    0x00FFA8E1, 0xBB4B250D, 0xAD031362, 0x210F6E29, 0x0F215904, 0x1A249859, 0x00684C40,
    0x67305A11, 0xC8BC86AC, 0x15090663, 0x10E7CA0F, 0xA90BD889, 0xF94321CB, 0xBE30AB0F,
    0x0B037109, 0xAA8B0FD8, 0x08438ABD, 0x0BA0D4EE, 0xA0CB0111, 0x248B9815, 0xE418105B,
    0x56780200, 0x0990FFBF, 0x0A3F2BEE, 0xA9AE5DF0, 0x03E108AB, 0xF20F2210, 0x1010219A,
    0x11006A61, 0xC70FF60B, 0x2C01B720, 0xB1202436, 0x100740FF, 0x677D0911, 0xB8D1ECC0,
    0x0C9080A8, 0xC15A0601, 0xC15A340E, 0x0904E3C9, 0xCBD10F35, 0x8C001110, 0x431EDB8A,
    0xF0ED1810, 0x02210D91, 0x28C0F5FE, 0x89D03F3C, 0x10B9D30C, 0xE719704D, 0x81ECBF20,
    0xBCC9CA00, 0xE000E10D, 0xB09A0FF6, 0xC03437C3, 0xC4110916, 0x521A09DB, 0x0BF15A07,
    0x76109BAE, 0x00DD15A0, 0x38AC4EAC, 0xFA43203A, 0xA10F0470, 0x0FD4E401, 0x29218051,
    0x60FC2860, 0x159304B8, 0x38C5FB7C, 0x215A0614, 0x109C440E, 0xD415A067, 0xA1A7A4C0,
    0x10EB5E8C, 0x8599000C, 0x1438C720, 0x0FF8A900, 0x0710E87A, 0x30FD7870, 0x04A1ED07,
    0x09C14C7A, 0xE15A0771, 0xC84C3F0C, 0x130203C8, 0xE8250FB3, 0x80B02C10, 0xA8A910F0,
    0xD9900071, 0x04310E60, 0x98B384B9, 0x705947DC, 0xC360E219, 0xB900410B, 0xB09E15A0,
    0x2950601E, 0xFC09A0F2, 0xC00610BB, 0xCAB086B0, 0xAC00747D, 0x110D09B7, 0xB7B38303,
    0x1C1A8B48, 0x615C4AF0, 0xB5A0830E, 0x81074000, 0x0AAA0C61, 0x021437CC, 0x4E0F9B12,
    0x701E10A0, 0x15B67209, 0xA4A190C6, 0x26E70881, 0x0FF5FE07, 0x07C690CB, 0x75EA0291,
    0xCD68650F, 0xFFB74437, 0x4CD50D80, 0x06200810, 0x6D0D4687, 0x581A9A20, 0x3340241A,
    0x1D3180F0, 0xD3F708E0, 0x7D00BA0F, 0xBA001103, 0xECF0BFF9, 0xC4B00847, 0x4F10607D,
    0xB0FF8C00, 0x22E07B0E, 0xCE18104D, 0x41A2CF50, 0x103B56BC, 0x2B9B3042, 0x7C3608E6,
    0x0D51DF05, 0x7DD0DB3E, 0xF63E02F4, 0x0388B70E, 0xF64ED09E, 0xCAD409C0, 0x0750FF85,
    0x8103B1A5, 0x1BF20EA1, 0x0D605800, 0x700E715B, 0x800E0060, 0xD2AAE7C1, 0xBE97647E,
    0x60110000, 0x0C558508, 0x43104B7D, 0x90EB2730, 0x7B71A2D2, 0x0807F0FF, 0xF0760161,
    0x0B60FF74, 0xE291DA50, 0x63F2D48C, 0x0FB78B01, 0x91915094, 0x0D630639, 0x0A200400,
    0x3C1A3BF6, 0x70D94B90, 0x026104C9, 0x5A6060A5, 0x4BC20EF1, 0x04847DD6, 0x8F0EF46C,
    0x7106A080, 0x0E443202, 0x02176556, 0xCBD58B40, 0x0B004110, 0x2408FCB8, 0xA3C8D7EA,
    0x2B40A302, 0x6309C0F9, 0xD8CA108B, 0x03917708, 0xC70D9197, 0xA03F10AB, 0x063846D7,
    0x46D94D1C, 0x80740183, 0xDA354883, 0xF702E109, 0x0D930E64, 0x8759B317, 0xE000910D,
    0xD0AB0FD6, 0x0C80FF93, 0x62DAA046, 0xAD4005D3, 0x0B70DA15, 0x8C10F961, 0x4CBF15A0,
    0x1DF04317, 0x089B00CD, 0x615A0621, 0x0320000C, 0xF92240A7, 0x29680960, 0x03D303DC,
    0x9670FD61, 0xC01501C0, 0xC2D0F85B, 0xE72A5CDC, 0x4170CA20, 0xAAF0FF62, 0x4800510C,
    0x90007407, 0x0EFD6A04, 0x01DDEC9D, 0x62620743, 0x1030340B, 0xA515A07A, 0x3BC410F0,
    0x03017308, 0xB50D53DC, 0xF77C107D, 0xB6E0AF0F, 0xD206600B, 0xAAD40EB2, 0x04C2E6DF,
    0x550C91F6, 0x80116EA0, 0x8EB0FA7D, 0x0B02B10C, 0x6A020DD8, 0xDEFABD14, 0x8E01B10E,
    0x0D9B0F93, 0x09D01B00, 0xE8E16C48, 0x308A09A2, 0x15A05DBA, 0x07D6D0C1, 0x10FFA9E1,
    0x03514AE3, 0xA30E24F7, 0xDE01107B, 0xB9D10AB0, 0xB926CE32, 0x200C000B, 0x10BE209A,
    0xDF509032, 0x4147DB00, 0xA430FFCE, 0xD201210D, 0x9A7C0F12, 0x0564B4E4, 0x4B0B9181,
    0x0002104E, 0x14BAA096, 0xE9B12012, 0xC10CB1C0, 0x0960FFAA, 0x034B5E5E, 0xCAE27FD0,
    0x1B103F10, 0x41E630C4, 0xB15A0741, 0x01B10CAE, 0x71E2C2ED, 0xFE374B5E, 0x10DC580F,
    0xFE8A9004, 0x414A0500, 0x0FE57701, 0x6910BC27, 0x3E488790, 0x006330E8, 0x580FC873,
    0x7E8510D7, 0x142BE80B, 0xB615A053, 0x3104C1E0, 0x0EC2D201, 0x7DE969F7, 0xA1F604F4,
    0x664B6E0B, 0x780F2577, 0x90AC1459, 0x10E04F83, 0xAAB13073, 0x50054B5E, 0x98D0FCBF,
    0x5A07210C, 0x5147E061, 0x0C44B903, 0x0F105E9F, 0x90FD78B0, 0x47EEBBBD, 0x26688A36,
    0x40E632AB, 0x095140E5, 0x0DD3815A, 0xFC1D04B1, 0x00F4B4EC, 0xDD0F1D40, 0xA0A810AD,
    0x143ACF15, 0xF25D101C, 0xF499D7D0, 0x9870F85D, 0x6A47DEDE, 0xDCC415A0, 0xC5704410,
    0x46112BB3, 0xDCB50FFB, 0x27304A10, 0xF1C220CB, 0xE5D1CD7E, 0x108DEC0E, 0xF36FA005,
    0x8113E2D0, 0x10DCEEDC, 0x2F15AD0A, 0x947EF039, 0x10CBF788, 0xF718105F, 0xC0371436,
    0xF020C23D, 0x0B021108, 0x4D840DC8, 0x02A3F3F1, 0x7C0CF286, 0x401C105C, 0x99E0E433,
    0x5A08E113, 0x410E0821, 0xF2607BAF, 0x5A0A14B5, 0xD10CE671, 0x06315A0A, 0xD800B142,
    0xCB940F47, 0x4E401610, 0x38AF70EF, 0xFEA1437F, 0xEA40C10F, 0x79048103, 0x903E1428,
    0xB5F0A950, 0xB515A05B, 0x2EDFF4B0, 0xEA90F263, 0xCE00A109, 0x50EA0FF0, 0x94313FB0,
    0xA610EAE6, 0x8F5CA5CB, 0x0FFEC243, 0x5610D94C, 0x1EE70FFC, 0x51B01A11, 0x03CD00DD,
    0xA5EA0271, 0xF6D9C70C, 0x3401D3C9, 0xA8C70DA3, 0x34B03910, 0x0BEF90C9, 0xC1970641,
    0xEE6A700A, 0xC94B4F80, 0xBB810FFA, 0xF6300810, 0x12E5D0F6, 0xCE8C8E81, 0x64801210,
    0x91F600F4, 0x105A3F2F, 0x10E0B818, 0x12A72078, 0xD9EF0141, 0x109F850D, 0xBC1F6045,
    0x6FA3E7A0, 0x0FF67934, 0x069E70E5, 0x234B0281, 0xF4D112BB, 0xCB10E089, 0x5CFD0FFD,
    0x976437FB, 0x0310BB69, 0x20FA8A90, 0x9BA10CFA, 0x0AEC00FB, 0xC38E0121, 0xFC6ED60D,
    0xB9030389, 0xAAF3B2F4, 0x110D5A15, 0xE631301D, 0x7107C5E0, 0xC540FFBD, 0x0B438FD8,
    0xB0FD8830, 0x03C107C0, 0x950CA3DC, 0xDED2E18E, 0x0FFBA110, 0x38FE9A66, 0xD07EA714,
    0x88300510, 0x046E8100, 0x0D058200, 0xE820041E, 0x082B3FDF, 0xF6D84E1D, 0x87041C6F,
    0xC45E2D15, 0x46E35198, 0x7E3D1D8E, 0xE4521904, 0x4D259248, 0xEF51849E, 0x1A012E5F,
    0xC2FC2D01, 0x7FB30171, 0x846836E4, 0xA51FEFB2, 0xFE7D3D93, 0xE8541A04, 0x4F45A250,
    0xEFF5D006, 0x338D0C1D, 0x153BFDF4, 0x7E0CE360, 0xCCB54AFF, 0x3F1FE9C8, 0x7EBD4621,
    0xEC561B05, 0xCD1DB258, 0x91A3A42C, 0x19744D01, 0xE859FA36, 0x73852346, 0x2845A6FF,
    0x5EEF579B, 0x16FD7DBE, 0xDFEF716C, 0x411A0331, 0xB1986C2D, 0xF87FB100, 0xB2C46880,
    0xBFD494D0, 0xC65F2D95, 0x03A2F99C, 0x6698FB9A, 0x9330B32C, 0xFEE50FC6, 0x71A04B59,
    0x9A3142D3, 0x1D86BF5D, 0x85A1EC1B, 0x608E3463, 0xE5186FF7, 0xFDF2468B, 0x8111A4B3,
    0x6EEB7FB1, 0x5C9E46CA, 0x3C8D72F9, 0xD8DA929E, 0x133A5FEB, 0x742D0719, 0xBC86B1A2,
    0x7F98AE7F, 0x763E1F07, 0xBCFF6881, 0x0768D069, 0xC2034626, 0xA0EB95FE, 0x3042CE51,
    0xC7DFEDE2, 0xBFD1F7AF, 0xE234507E, 0x4E9FE7F0, 0x9E812230, 0x20397A7F, 0xF97000A3,
    0xF2199F47, 0x09423083, 0xA1630A81, 0xE7534848, 0xB81E6C9F, 0x34858BC8, 0xEE0408D1,
    0x4260B1AC, 0x71444F13, 0xF9E21623, 0x32051AE7, 0x7F97603A, 0x22E1C1FC, 0x2FAC664F,
    0x02162DA3, 0x7F1F4525, 0x600131FC, 0x2341441A, 0xC37A1642, 0xF9920122, 0x8C139E07,
    0x29480F5C, 0x90B084A7, 0x68D0A685, 0xB1269D09, 0xFE6F0348, 0x8BAB0651, 0x49A5B806,
    0x3344A810, 0xE888EFCD, 0x2C8D3807, 0x02186D30, 0x9F020A2A, 0x28D1247F, 0x11FE7184,
    0xFF3F4D46, 0x7101ED84, 0xC5E649FE, 0x873A928C, 0x58E88A84, 0x169C0AA8, 0x49500402,
    0x968CAD27, 0x4191E47F, 0x8C663EA3, 0x4E00A1C2, 0x151E67F9, 0x1FEDA234, 0x3545282D,
    0x5920B255, 0xAA8D0C28, 0x87104858, 0x9FE6D01A, 0x48C2DC6D, 0xB9F0C600, 0x7F5F5541,
    0x858AEA25, 0xCDAFF938, 0xE840065B, 0x497E9D05, 0xDA0CA30D, 0x60026BB1, 0x24D6A5A7,
    0x85F5A015, 0x79BB2EB7, 0xBE84028F, 0x8CCB8858, 0x9529D064, 0xD745CF6A, 0xF99004A3,
    0x32071C27, 0xFE16A022, 0xD3684058, 0xC8CB6C7F, 0x4AD27FC3, 0x2B7F5FB7, 0x1CAB64CA,
    0xA1644A34, 0xCD5A1023, 0xA2341B1E, 0xFE1FBF84, 0xD0E23885, 0x234369FE, 0xB7E4022D,
    0x698A0220, 0x86F65DF7, 0x88DA473C, 0x86374E47, 0xC8CC7ADF, 0x39470305, 0xFE7003E8,
    0x70C425D9, 0xE6B92660, 0xF3D81D73, 0x522F6698, 0x0A654BE0, 0x3B07C82B, 0x87E8D11B,
    0x39B4F136, 0xA0075FE9, 0x33279CE9, 0x819C5792, 0x9FF0AA0A, 0x634232D6, 0xE6943E21,
    0xF855D55A, 0xFDA3422B, 0x20AC79F2, 0x387A1644, 0xEB104B23, 0xF749EDBA, 0x3C235240,
    0x80282B58, 0x0CFB1A57, 0x79E721A3, 0xD5BF6DD0, 0x45A16284, 0x9157D234, 0xE6981282,
    0xBEA6739F, 0xFE6B00C8, 0xBFD706C1, 0x06329727, 0x48D14316, 0xA15F3687, 0x9716038C,
    0x0A2310E1, 0x1787F9D0, 0xDD472964, 0x371E0BC7, 0x468ADB46, 0x0499EBA8, 0x4021C801,
    0x73B29A58, 0x3F77D4B4, 0x145E0051, 0x08A2F917, 0x1BE7F99A, 0xE858998F, 0xDD848D11,
    0x27E77797, 0x4C9F380C, 0xD2C00A31, 0x62E57076, 0xD2343821, 0x9E27A163, 0x3ABF3F07,
    0x92A8D51A, 0x8189F67F, 0x91FCF520, 0x5B06B542, 0xF17E3F08, 0x8EA858AC, 0xC827BCF4,
    0xC8687BFC, 0xD3060048, 0x04FC96F1, 0x2C221CB8, 0xD1193824, 0x0000DC42, 0x83B87F8B,
    0x80891903, 0x8DA1FE33, 0x82D00D9D, 0x5541A9B0, 0x1E91A166, 0x0570C53C, 0x1104C638,
    0x90119190, 0x28CD1FE3, 0xF85505C0, 0x08B00F1A, 0x08C80D19, 0x0A63B809, 0x71E05000,
    0x0C48D0C3, 0x5C0FF1EC, 0x3F856988, 0xB802CCAC, 0xC46E0FF1, 0x30102307, 0x6046B661,
    0xC465731A, 0x6202C308, 0x80432B14, 0x5E852861, 0x335C79EC, 0x03031012, 0x55234255,
    0xC5149593, 0x345417C8, 0x23D47F88, 0xD02836DE, 0x42250083, 0x07FBE323, 0xC738C61B,
    0x216244BC, 0x1548D03D, 0x2781F1D3, 0x1A0FC42C, 0xE895C409, 0xC0B14838, 0xD0481FED,
    0x61FE2CC8, 0x018C148F, 0x04591A2D, 0x4840827F, 0x0CE57A4A, 0x4682B90B, 0x39A3446E,
    0xE50CE42C, 0x2A0D54BB, 0x44A1CA39, 0xCC722161, 0x82162308, 0xC3FCEB84, 0x85211951,
    0x4A4052E2, 0x0824FE5A, 0x465ADA6D, 0x2B8FF7BA, 0x61216248, 0x8A9948CB, 0x9A624B58,
    0xF8F306E4, 0xB2342387, 0xE1908586, 0x5818FC30, 0x0D363846, 0x9AD31409, 0x86416122,
    0x2438413E, 0xF51FE2B5, 0x06461F48, 0x54659E50, 0xBCE79AF0, 0xF15AA0CD, 0x21F47FA8,
    0xC768FF17, 0xADC67915, 0x9D10F861, 0x3652ECF7, 0x22919668, 0x5511042C, 0x30754734,
    0xE4D30122, 0xBD079F02, 0x471204C8, 0xA0EC8D0C, 0x09A0934D, 0x1184CE38, 0x76E6E40D,
    0x41E8C508, 0x663C4018, 0x3521CEB8, 0xA8270DF8, 0x6207C131, 0xF8F00404, 0xBA322A07,
    0x801C8252, 0x2148D449, 0x12A06246, 0x1ACAD452, 0x0988C818, 0x963283B8, 0x1C007462,
    0x1D3986DB, 0xA91602E2, 0x90FF1BE2, 0x92320546, 0xA8826402, 0x460D19A7, 0x919018F1,
    0x15E3FD6B, 0xA186627B, 0x7FC3222E, 0x18A9E85C, 0x4E38132D, 0x90109177, 0x50E6166E,
    0x20FE225C, 0xD5B6B608, 0xC4C07FAD, 0x07C19453, 0x10B5B2B7, 0x1D2AFA9D, 0xBA8840C9,
    0x43102206, 0x02224794, 0xFABAD751, 0xAA061281, 0xB2165D45, 0xD636C658, 0x4E858EB1,
    0x9348E75E, 0xB2D656C7, 0x6285B10B, 0xC659BB2F, 0x63B24E62, 0x45671764, 0x985B0FFB,
    0xD0681C26, 0xBB541742, 0x4166D65A, 0x45D9BF0F, 0x5AAB5815, 0xB3F34431, 0x18423452,
    0x2E05CB66, 0x671DCE24, 0x676CC2D8, 0xB03A858B, 0x6A7B16A8, 0x222EECC6, 0xE2426402,
    0x1064F7B6, 0x10E9EC38, 0x1FE3A40F, 0x34EA38B3, 0x14918A94, 0xCF136770, 0xBC7BA745,
    0xAC8C80B1, 0xD1DD1DC0, 0x672435A7, 0x48B01291, 0x26BDE014, 0x8DA38801, 0xA8846211,
    0x348548FF, 0x8BC4656C, 0xFF1DE07C, 0xAD7C0550, 0x49260089, 0x91184E63, 0xA1444A81,
    0x2085768C, 0xC7581923, 0xE021623F, 0xA3803662, 0x268A79DA, 0xA78E8AA2, 0xFB89045D,
    0x292D30A4, 0x661C5230, 0xB21607A4, 0x87E05285, 0xA4440491, 0x710D6318, 0x11103925,
    0x08E4685C, 0xD7C4310B, 0x8BBD31EC, 0xCC824008, 0x478C6F20, 0x053D8259, 0x58522338,
    0xC13A1EC8, 0xC4681E1F, 0xA008D53D, 0x82E92990, 0x232B10DC, 0x7EC36B55, 0xF348990E,
    0x95CA407C, 0x064A81C4, 0xB0371197, 0xC90B0FE6, 0x31424682, 0x997C159D, 0x50084392,
    0x10B5341E, 0x2161C02A, 0x24C8D06A, 0x5E8F41FE, 0xB09079B9, 0xC41A07FA, 0x2C304BF6,
    0x9B040EC4, 0x3CFC1111, 0x32083548, 0x4FE0A323, 0x8FF7900D, 0x2E046548, 0xA2C2C0FF,
    0x7FE678E9, 0x0C234118, 0x1C09C79A, 0x63318FFA, 0xD3DA0E24, 0xE61B1CF4, 0x534B268F,
    0x2FB81D71, 0xBD923426, 0xD522207F, 0x2B800C62, 0x338F91FE, 0xD98258F6, 0x06080090,
    0x088C9DE5, 0xBD9E2161, 0xC0091035, 0x12CC762E, 0xE7D00723, 0x01100E32, 0x23431EFD,
    0x2F50302F, 0x0BEC9C60, 0xD865E036, 0xEAE88F40, 0x9A2A5062, 0x0117C827, 0x019ECBC1,
    0x50AB6E34, 0x862A0604, 0x02822D56, 0x158CA264, 0x0388CA66, 0x790DCC18, 0x38807BB7,
    0x31B10AA8, 0x189D0432, 0xC1FB2082, 0x64140E87, 0xD4E07629, 0xF1BC17DF, 0x1197943F,
    0x0D23FD70, 0x2F353904, 0x1E0FC941, 0x09805C3F, 0x74F6C7FC, 0x102510B9, 0xD3F50B24,
    0xE218A308, 0x61F20B71, 0x4AC9D946, 0x8498AE83, 0x23317885, 0x1E900851, 0xC3C03E58,
    0x169E43D8, 0xD53BC019, 0xD0002251, 0x98B54DA0, 0xB058422E, 0x1CEE9E43, 0xAA88057C,
    0x91763C38, 0x1BA7940A, 0x05C00553, 0xE08D0372, 0xA6022459, 0x9D4C4611, 0xFF19BCFE,
    0x311A17E3, 0xD67EB401, 0x43ADE252, 0xC02117A0, 0x81E1BB48, 0x06CF83B1, 0x4632B12A,
    0x54201080, 0x65002650, 0x92469074, 0xD51A8F72, 0xF99179DD, 0x423421C7, 0xC20C8586,
    0x87FC8120, 0xE5A233A2, 0x79DE182E, 0x467414AD, 0x8305C90C, 0x19CF1E20, 0x2DA53429,
    0x2800BBBF, 0xCC781F72, 0xA1ECF988, 0xA0E082F0, 0xC1C91A8B, 0x7A3D646F, 0x1A0011D4,
    0x088710FF, 0x6F1D2234, 0x1920BDD0, 0x33432218, 0x108881B2, 0xEFB4A3C3, 0x12EA049A,
    0x045BB10C, 0x06227B02, 0x8BE0038C, 0xBB63987F, 0x3B277E3D, 0xBF7C8DC2, 0x972740E9,
    0x760D88D0, 0x348354E8, 0xD03E1F0C, 0x84662288, 0xEDFBEE48, 0x88D4CD0D, 0x06B21618,
    0x94E1E484, 0x1FD00AAF, 0x4836EFDB, 0x1A05E3E7, 0x287FA3B1, 0x9E60831B, 0x1688CAEF,
    0xDB098A78, 0x0071AEBF, 0x8CAA0A09, 0xD1190030, 0x08392287, 0x6313B013, 0x988C2180,
    0x95B9D200, 0x189AE405, 0xCA832640, 0x8D301008, 0x831D086E, 0x02FD0048, 0x88B8E387,
    0x7DA77800, 0x4C0F3F40, 0x13BBF91A, 0x56900A0E, 0xB91BBA48, 0x08B9BC87, 0x1C87FB97,
    0xC19AC191, 0xA041B604, 0x8A83C085, 0x707FB468, 0x82388C95, 0x208460AA, 0x591919B4,
    0x88C36707, 0xF607D1B3, 0x301D0843, 0x08C90190, 0x6616E00D, 0x44283A48, 0x2EB00A97,
    0x8BB76061, 0xE07122A8, 0x009883AF, 0xE506A27D, 0xF00088B2, 0x33687AA6, 0x27988431,
    0xC9C31008, 0x30880F88, 0x0043085D, 0x0879A2A8, 0x17B08C27, 0x7FC3B3FA, 0x287F9561,
    0x82A88CB9, 0x8B1A2136, 0x307FB3D0, 0x9C088C44, 0x4385587F, 0x600697F4, 0xBDD07BB0,
    0x8BA4F3C9, 0x78858298, 0x80B88CAF, 0x1606F308, 0x116AC4C4, 0x86587FBF, 0x0608AC33,
    0x707D18E0, 0x80E08B81, 0xA10612FF, 0xEB7B8872, 0xC54B3E87, 0x42C2496A, 0x7A9413C8,
    0x883B7E86, 0x12A06978, 0x118988D0, 0x16A45EB9, 0xC907C8AD, 0x7085B81B, 0x83B88C2E,
    0xAA153885, 0x605E0DCA, 0x00596A46, 0x6A86A96E, 0xF08508CA, 0x31302A07, 0x0188D29A,
    0xE8788E90, 0x15546DB0, 0x038AA825, 0x11262712, 0x08BA9287, 0x6F19780D, 0xF08C8BC0,
    0xC76390A5, 0x2DC4895F, 0x601688D0, 0x88D85E91, 0x8D025C17, 0xFB0939A0, 0x934C7EC3,
    0x4586B80A, 0x988CC642, 0xC6987F8F, 0x7FB3B08C, 0x708D03B8, 0x06E08880, 0x49C86387,
    0xC09D01A9, 0x94F36D85, 0x2487FA32, 0xB01408D8, 0x30385893, 0xEC04688C, 0x514A48F8,
    0xA4F87F8F, 0x9180808C, 0x847C86FA, 0x076BEA11, 0x2108B9C6, 0x8A1A0C10, 0x00214049,
    0xA2944926, 0x384D1369, 0x49988ABE, 0x6A8B5032, 0x1C540E28, 0xA0E9344A, 0x4708D8EE,
    0xE12C0AD8, 0x93B02208, 0x83CA585B, 0x9BFB8510, 0x800934CA, 0xA783947D, 0xCAF58894,
    0x12F80A08, 0x8C488876, 0x38858258, 0x134CB185, 0x461C4808, 0x00A7C842, 0x84B88F86,
    0x8C0C4919, 0x3AFD0058, 0xCBA32F07, 0x8081D929, 0x28834AFB, 0x88F0B915, 0xD987FA7E,
    0xB97B08CB, 0x1294C2B8, 0x3487EA5F, 0x887FC9DB, 0x08E3B787, 0xB6BDB807, 0x68C10E68,
    0x11FCCA45, 0x6FAB400C, 0xA08B3AE8, 0x05687F8A, 0xBA186492, 0x580588C9, 0x3568C686,
    0x349144D2, 0xCA268858, 0x87FBF508, 0x2B890832, 0x931A9368, 0x03F8858F, 0x009144DB,
    0x40858550, 0x00788CC9, 0xFF94B86C, 0xD0070903, 0x3ED871A7, 0x6D0BAC5A, 0x8CE349D0,
    0x1302EE90, 0x20887462, 0xDCD72D80, 0xC1FA4888, 0x7F9F308D, 0x9CED02F0, 0x07F92B10,
    0xD80EB4C6, 0xD818090C, 0xC9685DA1, 0x7FC3C08B, 0x84F53178, 0x19780C90, 0x0808D4B7,
    0x507096E0, 0x00388F4B, 0x5E07D0F7, 0x780688BC, 0x1BEB3D86, 0xD08FBCFD, 0xFC22A8BB,
    0x091B9B07, 0x8C48ABC8, 0x7447C248, 0x0018F150, 0x6007FA06, 0x591908CA, 0x81389239,
    0x37AACAFF, 0x98741979, 0x8F050DA8, 0x5E8A781D, 0x308C2FA8, 0x06CB0881, 0x5009288A,
    0xD82687D9, 0x3D10D588, 0xBF8EFD16, 0xB88DBF9B, 0x092BFD48, 0x858594C7, 0xD81B882C,
    0x45C06BA1, 0x810D851F, 0xB4EA8894, 0xCA800588, 0x924B7876, 0x916E00B8, 0x26F08D9E,
    0x274BF87E, 0x32430E45, 0x9FA08D38, 0xFA85A07F, 0xF9238924, 0x08D84207, 0x6407FBEF,
    0x7D304380, 0x0BA80C8D, 0x8BC35874, 0x887F9328, 0x81389E89, 0x1B068AF3, 0xF98E4C05,
    0x5392BC07, 0xF217B0D8, 0xA81388C3, 0xBA986C0B, 0x2884D093, 0x508597C9, 0x8D7542C0,
    0x7CCE7005, 0x508D81D8, 0x89EC65D3, 0x65136823, 0x388BD188, 0x87B0E200, 0xD754A021,
    0x60AA8330, 0x80E88D19, 0x9F0750BA, 0x9806093C, 0xD0407FCD, 0x5B9E608B, 0xF553D340,
    0xA6FCE68B, 0x3608BB8E, 0x10540858, 0xBD08924F, 0x82CC4850, 0xF4A80098, 0x55D55307,
    0x7FA4E8CB, 0x35618580, 0x22A80408, 0xA0D4C87C, 0xC2FD0050, 0x4DC08D94, 0xCAD66B00,
    0x035DB0B0, 0x82988C51, 0xA20578AA, 0xF07F9B98, 0x80308D84, 0xE587DCD9, 0x00BE56FC,
    0x4A107FD6, 0x7F8E2408, 0x50A19838, 0xBED07FD4, 0x7F8B388D, 0x343085F0, 0x578D4680,
    0x30809892, 0xD99980BC, 0xB62BD607, 0x13868085, 0xF9828A14, 0x08CA3087, 0x7FD05809,
    0xB883D660, 0xD0D06081, 0x01091D82, 0x585605B0, 0xB8C88351, 0xBAD69057, 0x30DA8531,
    0x3EAAFF0A, 0x2A08D307, 0xC8618AA8, 0x81088240, 0x67AF3849, 0x609258F4, 0x87007FBC,
    0x0F4EC83F, 0x187912F8, 0x01F08C44, 0xEF067095, 0xFCB08A04, 0x88CD2207, 0xC988585F,
    0xD8368084, 0x86B88593, 0x90D9CC45, 0x59978320, 0x82C06A08, 0xAF47D9D9, 0xFB5D08D2,
    0x8AF4B387, 0x6F294018, 0x988CC700, 0x80586BB4, 0x85A09027, 0x48388738, 0x88FDABCD,
    0x1D84480F, 0xB060085A, 0x09501201, 0x8BB9F877, 0xEA1D8168, 0x8A252906, 0x8DA769B5,
    0xFA588008, 0x93B06607, 0x5185126F, 0xE0935BA1, 0x10085A01, 0x7F291A78, 0x188D8408,
    0x87FB3580, 0x148B0124, 0x707489D0, 0x81D88CD9, 0x5D2C58DF, 0x35C8CDA8, 0x02780109,
    0x722C59E2, 0xA88CBA20, 0xB7395B13, 0xA65CE0AF, 0x600508AD, 0x885BDB83, 0x50830876,
    0x8893DD55, 0x8A783C80, 0x2B0608AD, 0xF0005240, 0x42387FA6, 0xC526C8B1, 0x2883CA91,
    0x2C60C602, 0xE0985879, 0x282D0A05, 0x859AC5DE, 0x1C88B459, 0x986B8C10, 0xC448AF5B,
    0x173A484B, 0xE5D30518, 0xBC804887, 0xEC588067, 0x4014892D, 0x83187BAB, 0x772C5854,
    0x3BDF0488, 0x8A480488, 0x160B24F2, 0xA87A1030, 0x008082C3, 0x859D203D, 0x2C838648,
    0x3CCACA00, 0xC30935F8, 0x08021735, 0x88588883, 0x7303286F, 0xE90082A2, 0x8B0D8206,
    0x82D75097, 0x80328010, 0x86D885CA, 0x1E19D831, 0xA074A640, 0x891E0740, 0x718C1023,
    0xA8004C20, 0xB0883B00, 0xEF863885, 0xE0028821, 0xBCA87F18, 0x7D00B0BC, 0xEA4987CA,
    0xAC585901, 0x3B848877, 0x8C448005, 0x6165E485, 0x8B80A88B, 0x6883CDF5, 0x8C105181,
    0x7A04FB5D, 0x705C1899, 0xB950B1C5, 0x9D04D065, 0x18568858, 0x00C8835A, 0xF687FA13,
    0xF0906269, 0x3E6862C1, 0x2A821083, 0xB878885A, 0x3C8AA384, 0xCA0080BE, 0xD862AC5A,
    0x02B56902, 0x9186D89D, 0xF9CCE34D, 0x55A8762F, 0xC4835A8D, 0xC8562C61, 0x8248B255,
    0x38870DC6, 0x8883D268, 0xE40A2805, 0x8589988D, 0xA88CD360, 0x16804500, 0xBD475A78,
    0xAA450010, 0x01388DC1, 0x3407C213, 0xB08C64AE, 0xDB49303F, 0xCAB1C5A6, 0x1A6401A8,
    0x88C4CE07, 0x7A0703D0, 0xB887654C, 0x07990301, 0x2188D3D4, 0x88710950, 0xBC80BDDE,
    0x87645859, 0xFE220010, 0x65CBA687, 0x7B805883, 0x888D43D5, 0x87E1C480, 0x0D8CB34C,
    0x207F1978, 0x941A18D4, 0x66E1E87E, 0x634E0836, 0xB4B54006, 0xBDE63DBC, 0x887F91D8,
    0x91D32886, 0xC8076085, 0x78006705, 0x0780A782, 0x1408C41E, 0xB07C3088, 0x0010CB2D,
    0x8E09DDFB, 0x584F8030, 0xDA405A88, 0xE700CE26, 0xE03D87FC, 0xD3C80408, 0xCB0CD4E2,
    0xF642A6F9, 0xC606443A, 0x7F002666, 0xBE36858E, 0x86D41A08, 0x380CADF1, 0x6599862A,
    0x87BA1DC2, 0x6664AD8C, 0xE08107FA, 0x99980F08, 0xCCE6D87E, 0x757B8048, 0x24308E3C,
    0x1655806D, 0xC29401D6, 0x88DA4C87, 0x75E7F002, 0xD8218D8D, 0x67B07921, 0xD214B3B8,
    0x180B64AA, 0x08EB5AA9, 0xE4596CE0, 0x2062B4B8, 0x68451967, 0x8F563841, 0xFD948045,
    0x4EC86007, 0x2181188C, 0x43CE07C2, 0xDDE0058E, 0x1F88E5CC, 0xC07F1008, 0x5356074C,
    0x8E145072, 0x52955B10, 0x26401F0E, 0x8DC18877, 0xF0712430, 0x0275C8D5, 0x5787C095,
    0xD02E08DA, 0x64F87009, 0xD3C6A8D9, 0x114F68F0, 0x5EC6C468, 0x7FAF3817, 0x608E3390,
    0x0FF6C781, 0x218058E6, 0x988ED099, 0x855AD080, 0x0A566E48, 0xD053DD70, 0x00408B68,
    0xE63BCD11, 0xDAEB0178, 0x08D6B587, 0x64999815, 0x1003DC8A, 0xE568645B, 0xD88BB672,
    0x2A4B8EFD, 0x88C6400E, 0xC9DBC024, 0xFCAC59CC, 0x52B87507, 0x7C900A7E, 0x30F065F0,
    0x53315000, 0x85D6E3AC, 0xC82607B0, 0x936839D9, 0x8E51D078, 0x15DE00E0, 0x0D862604,
    0x27E11808, 0x440088EC, 0x56FCE807, 0x7F8AA827, 0x088E8330, 0x85853C80, 0x220E46AB,
    0xEEBF8EE0, 0x11B80408, 0x42DBFA22, 0xFAFF8265, 0xD9383E07, 0x6F238083, 0x78FB65A0,
    0xB158E2BF, 0x2600608D, 0x96DC1421, 0xE3301453, 0x2788E555, 0x807C8C10, 0x0018FCD7,
    0x8EE90C93, 0xFB0600F0, 0x70506207, 0x5A816D1F, 0xCE9144B1, 0xDA981108, 0x0B10964C,
    0x184FACA0, 0x81788B6D, 0xA9B0012F, 0x980FD0DE, 0x6C4865D5, 0xEA009087, 0xB682C4B3,
    0x2054100F, 0xD301908E, 0xE85607F8, 0x00C4C2EF, 0xFD06670D, 0x9C2188DD, 0x9096DAA0,
    0x7A0C102E, 0x508E6CA8, 0x04BE1A82, 0x0CCC2F1D, 0xA10D3148, 0x085D2142, 0x149B4875,
    0xBE948851, 0x02388C6F, 0xF74C7895, 0x9007498E, 0x5EF0F30E, 0x2FDCAF29, 0x48059145,
    0xE18DC5CE, 0x0302D08D, 0x9E7389D9, 0x64980B4A, 0xA6E7DBDC, 0x935B6D78, 0xF0400912,
    0x8CDE0059, 0x65C682E0, 0xCB1E2D84, 0x74665007, 0xF08DD860, 0x2FC1C780, 0x17014934,
    0x2F3404E7, 0xE2A82E08, 0x5EEEE04F, 0x2F1C00C4, 0x88D6E487, 0x379DF807, 0xF129BEBD,
    0x07F8EE01, 0x3008F39D, 0xE04AF330, 0x00C48FE0, 0x2FE94979, 0x9B4869EF, 0x929EE2A0,
    0x7D10082E, 0xC08EC9A8, 0x857E2A82, 0x1047EF43, 0xF8712CA0, 0x085BF4F3, 0x34752077,
    0x207C6C39, 0x82C88F47, 0x01857EC7, 0x0815C6DD, 0xD6B86FAD, 0xE8A3808E, 0x08019496,
    0x0AE877C0, 0x1602388F, 0x206087F9, 0x81645EDC, 0x01916A21, 0x303008E6, 0x9404F75D,
    0x9A8C3801, 0xA2276BD8, 0x67806863, 0xD7825466, 0x27318676, 0x25CDBC57, 0x0600714A,
    0x806E87F9, 0x81908DF7, 0xC286DED7, 0xD028C5EB, 0x6240646F, 0x4CEFD27E, 0x8934F3D0,
    0x07FDA700, 0x5273A86A, 0x7875D59E, 0x83A43169, 0x0E856EF3, 0xDE1AB137, 0x129F4F84,
    0xC5A10810, 0xF88EEB7D, 0xA6FA7780, 0x02443838, 0xF9368470, 0x6E705107, 0x3301F08E,
    0x4F11056E, 0xF7700E95, 0x67F6C065, 0xF509DA53, 0x80C3D1EC, 0x906FDDE5, 0xE2B40178,
    0x9497A5A1, 0x6358B816, 0x508C78A8, 0xF20D3500, 0x1A3EE78F, 0x387AF040, 0x882F4D03,
    0x5AF1701C, 0x716A48F0, 0x062885ED, 0x3408E65C, 0x1916A640, 0x826BDA63, 0x9809A90C,
    0x701808F3, 0x6AE86371, 0x66E447B5, 0x208D7AF0, 0x6E196E02, 0x01BD1EE0, 0x2F3C0410,
    0x08EE1586, 0x5AAC501F, 0x89747548, 0x866F7701, 0x1408D69B, 0x28858F70, 0x39DFA104,
    0xA86AD00C, 0xE08CF940, 0x863ED781, 0x1296AFD0, 0x106A6840, 0x80688C78, 0x5F085986,
    0xE38F75E0, 0x07D64401, 0x8C71583D, 0xB6C78230, 0x17EF1805, 0x6E58B817, 0xB8902510,
    0x06F6C783, 0x35B9DE1C, 0x8070E4E8, 0x82908E73, 0x7585BE4E, 0xA00E97F7, 0x42C0742C,
    0x4A01D08F, 0xA04887D7, 0x80CB2FFA, 0x0085FFCF, 0x683088DF, 0xFED8565C, 0x1100F973,
    0xFE6B077D, 0x85281088, 0x6785F2C5, 0x582734D7, 0x84487DEA, 0x3A08BF1A, 0x784DE300,
    0x00899ADF, 0xCF87D651, 0x02000803, 0x382C1207, 0x791CC030, 0x1BC5FEFF, 0xC420C053,
    0x0C9C7400, 0x22F16880, 0x371A8CC6, 0xF1E8EC72, 0x078E4823, 0xD8E194C8, 0x85BF1000,
    0x0484B4E7, 0xC2D12040, 0xB402997F, 0x26F369AC, 0x3C0C8ECE, 0x4837D42D, 0xC41DCB40,
    0xA12AC662, 0x7E3F0791, 0x6CE61E9F, 0xD429F4EA, 0xFD6C14A6, 0xA341974B, 0x6131628E,
    0x410968A1, 0x403ECC54, 0x6B2D92A3, 0x7EA2C076, 0x6841390B, 0xBD52E0D9, 0x1CBAE485,
    0xD5A038B8, 0xCD6345C2, 0xD7EBEDF2, 0x0B5701A6, 0xA0746111, 0x7642DE67, 0xF4B4087B,
    0xBCA16BA0, 0x53277F37, 0xE52718FE, 0x6A1E613F, 0x7316F91A, 0x5C885196, 0x505B2616,
    0xD3EA34F9, 0xC3FDC61E, 0x0EE2C3A7, 0xC9933164, 0xDB0349A8, 0x524F76C2, 0x200DEEF3,
    0x36D23B0B, 0xA4F8866A, 0x34385FF6, 0xC8560A09, 0xEF8A50B6, 0xFE73D2E8, 0x318B7859,
    0xE07D0A41, 0x28879C2D, 0x9E274D42, 0x31FB6DFF, 0x1C5FBCFD, 0x63BDFFCE, 0xF8CAD362,
    0x1066BC7F, 0x5710B39C, 0xF7FAF445, 0x3B807C5F, 0x2904139F, 0xC74C4CF1, 0x1C135798,
    0x8C542CFA, 0xF839FC08, 0x2CC20A94, 0xD8200F84, 0x26025485, 0x8EB42CF9, 0x90A15720,
    0x3C317B0E, 0x5583A238, 0x048D2828, 0xC930A400, 0xD20DB93E, 0x600F4B56, 0x17299312,
    0x4DA37890, 0x9312A80E, 0xF4D81328, 0x553134C4, 0x0B29C513, 0x92238259, 0xCC0015D2,
    0x61747E42, 0x0CC14C4E, 0xBD099357, 0x858884C4, 0x91B96A49, 0xF8686F00, 0xD838328F,
    0xED1EC104, 0x3610B4C4, 0xE6B96C1A, 0x87043269, 0x94DF3FD9, 0x514B54C1, 0x15989384,
    0x11A9EA6C, 0x5624E717, 0xE4384DC5, 0xB53FE5F2, 0xA227B9A8, 0x4D209965, 0x129CF54C,
    0xDD084D82, 0x413550B3, 0x41A97A24, 0x9313282A, 0x24D9A626, 0xF4E999C9, 0xA5A61E01,
    0x24C1F4B6, 0xC6699CF4, 0x12D01A4D, 0x98162A93, 0x9F052B3A, 0x6D4BB4C4, 0xCC70492D,
    0xB9F8FB3F, 0x305F3310, 0x19B12B30, 0x37470065, 0x50B39531, 0x9485F92A, 0xF10B3444,
    0xC5028863, 0x77064ACE, 0x4633B0FF, 0xD42C864B, 0xE09B08C9, 0x58335313, 0x40AE7B58,
    0x6C91B00C, 0x306C8062, 0x84603FD4, 0xC71FC064, 0xBA1EE37D, 0x90B50AA6, 0xF070A13F,
    0xC10A0D11, 0x3A002223, 0x42E2D28C, 0x5CB17CBF, 0x304298BE, 0xCD313307, 0x020B4913,
    0x3790B151, 0x03147C14, 0x42B5312E, 0x46B3C342, 0xD94C4A00, 0xC911E110, 0xD05240FF,
    0x499CBE12, 0x865913CC, 0x6503A5AC, 0x3F931350, 0x10294CAE, 0x942CB301, 0xAC5C4787,
    0x823E50B3, 0x00EC4CCC, 0x8FF94059, 0xA8A4923C, 0x56E31311, 0x094163E3, 0x4C4B512C,
    0x069328FC, 0xB8DF478C, 0xC4D61EC1, 0x3C294F94, 0x0A5035EC, 0xB153BA66, 0x82AC2346,
    0x78403430, 0xB20AEC5D, 0xA58C84C4, 0xCCE02518, 0xA4606242, 0x4E672F05, 0x73C806B3,
    0x1EC317F3, 0xCAF84DAC, 0xB2411811, 0x5D1A29D0, 0x9BBF0DA1, 0xB138655C, 0xCF11B806,
    0xF244F642, 0x2C6245C0, 0x08464088, 0xC20B7108, 0x095398FF, 0x374B980B, 0x98A50F00,
    0xA23D50B9, 0x443670D8, 0x8FF3781E, 0x2442073D, 0x2CFE2942, 0xAEA00DF4, 0x2E43CB5B,
    0x5066EDB3, 0x43FCE007, 0x351D0F8F, 0x90E70A71, 0xE8055285, 0x018657C6, 0x69C0B018,
    0x73D126CE, 0x0D82C604, 0x18807418, 0xCFE3FFBB, 0x6F695D29, 0x547801ED, 0x1B264FCF,
    0x3FE33414, 0x42F4809D, 0x44C74326, 0xF03E1CCD, 0x80ACBEBE, 0x885BEA10, 0x82010E38,
    0x19601C8F, 0x4143490B, 0x85B58052, 0x030BE394, 0x7C0DD7CC, 0xA06D10B6, 0x610200C1,
    0xC1DA4281, 0xE0AC9036, 0xD653110E, 0xB5D0B427, 0x0324E20B, 0xF5454068, 0x358BC216,
    0x4D242BFC, 0x64355498, 0xF8098005, 0xF3EB4401, 0x98580984, 0x61C0022F, 0x4181F759,
    0x0FF30402, 0x01E4DC3D, 0x3B85F057, 0x408D94CE, 0x4201C0C0, 0x7404C90C, 0x2E230920,
    0x38AE1D04, 0x926CE902, 0x802C44B2, 0x13420408, 0xB218AE15, 0x26227011, 0x4A45F0F1,
    0x9C3D91AA, 0x620FC0CC, 0x8E3DC98B, 0xA81A0811, 0xF8032351, 0x719E2441, 0xC31C859C,
    0x89C3EE0D, 0x8F28A20A, 0x35A82860, 0x1F61D07F, 0x6805261B, 0x6B1FE99C, 0xB4048A80,
    0x9C710B50, 0x48BB1E69, 0xE8560B83, 0x8318321B, 0x8F384818, 0x07606A05, 0x4CE3D864,
    0x12C540DC, 0x5014E53C, 0xE2178CE1, 0x1ACCE48B, 0x02288730, 0x01640A0B, 0x31761A01,
    0xC328D6C8, 0xA0F03F10, 0x10B1106F, 0x0186F96E, 0x3504984B, 0x560F6986, 0x5046C16C,
    0x2818C029, 0x382CBC37, 0x5B47970B, 0xF3102681, 0xC2B47E8F, 0x80316408, 0x0B90FC0D,
    0x1A284E5E, 0x0B031091, 0x419A78C2, 0xA90BC42C, 0xD40D8071, 0xC06D89C0, 0x98B07549,
    0x97700A83, 0x415C0413, 0x47510B42, 0x4DE03A21, 0xA0C0F1E3, 0xEB4503EB, 0x3A8332CA,
    0x3191A310, 0x0C300781, 0xF6510451, 0xB0FF9E85, 0x102E6527, 0x63204785, 0xC7B2675C,
    0x0270D02D, 0x7920F4B3, 0x08C56131, 0x04BAEA17, 0x3119A164, 0x60264779, 0xC0039660,
    0xD8A30C80, 0x21F72546, 0xE23C5A0E, 0x65902B0A, 0x520A3C59, 0x06003CB3, 0x2F04B860,
    0x98BC21D0, 0x971A83F4, 0x640982E0, 0xA82094F6, 0x39F75262, 0x3A644D02, 0x61D40840,
    0x0770FF69, 0x97C41A23, 0x1221380D, 0x99E930D5, 0x4C8C61D8, 0x0F064198, 0x945366E8,
    0x4C02151A, 0x186F0760, 0x521432C5, 0xA32C7B49, 0x9AA04410, 0x09F06259, 0x0BC36142,
    0x0B2B14C8, 0xE7076031, 0x9A1DC42D, 0x145F2888, 0x54298270, 0x1C311922, 0xB19838DB,
    0x41443E0A, 0xAB081806, 0x937AF44D, 0x06C07002, 0x2C841058, 0xD48E719E, 0xC31D24C5,
    0x4612C448, 0xFCB358F0, 0xA1711540, 0x07CC1894, 0x808A3ED9, 0xC7FB8A11, 0x8351283A,
    0x068028C9, 0x2F84D861, 0x375B41C2, 0x9A17835A, 0x8A1583B0, 0x280F0350, 0x0918AB40,
    0xE0B842C4, 0x40340291, 0x82383804, 0x89F0F616, 0xB7E36860, 0x36C7CC95, 0xA3092172,
    0x062F89D2, 0x5A294220, 0x583BA689, 0xCCB8B873, 0xB8B82100, 0x8DC8588F, 0x80700232,
    0x89F0DA0E, 0x92AAFC63, 0x3C47DAFC, 0x548C31B8, 0x660F6248, 0x6E104288, 0x681182C0,
    0x380C0260, 0xB1007E40, 0x80049610, 0x00680800, 0x02403605, 0x0860E417, 0x1F835054,
    0x640AD126, 0xFD1E8380, 0xC23F64AC, 0x944C0C11, 0x400A0601, 0x40105FAD, 0xF54C6205,
    0x8378D81F, 0x532BFD70, 0xA8020814, 0x18059344, 0xCD195548, 0x8A0DE116, 0xCE314500,
    0x9F0755E1, 0x50F41FA9, 0x31B43847, 0x8324668D, 0x05C8C018, 0x8B91A8BB, 0x19231460,
    0x36C6A0CE, 0x7A8EC1C6, 0xEBCB9914, 0x8238C7B3, 0xA44389D1, 0xA82207C1, 0xC03C64EF,
    0xC42D7806, 0x94387319, 0x814B8792, 0x52936839, 0x004DF401, 0x29831026, 0xB312A1D4,
    0xDE36C640, 0x733B5161, 0xCA67D3BA, 0x41B23B47, 0x0238578C, 0xC1604F0E, 0x8293791C,
    0x1FF17042, 0x520320CD, 0x0DDFED13, 0x83182158, 0x8C29C6FC, 0x34E99750, 0xA82C0380,
    0x70900F41, 0xC1F03585, 0x85689E11, 0x0CC1862E, 0x1BE3686A, 0x3BAC10E1, 0x6D0DF1C0,
    0xC3198348, 0x382AC5C8, 0xA03C88B1, 0xE0460A61, 0xB0540CC1, 0x874D6A81, 0x45A85601,
    0x8AF1F183, 0xD6594824, 0x14000EEE, 0x85CE216C, 0x0B0C4304, 0x0A005244, 0x28060090,
    0x390B1140, 0x90180203, 0x99000280, 0x43802944, 0x8A8B6AB4, 0xE1BBBA5B, 0x0B001903,
    0x338E4106, 0x4B158385, 0xC0969618, 0x6C2D8FFB, 0xD05A0229, 0x71FF8345, 0xC684398D,
    0xC82F26E1, 0xDEE17AB1, 0x0EC3307F, 0x8927903B, 0x07A37B54, 0x8D10810C, 0x683B47FE,
    0x9F5485F1, 0x4103E7BC, 0xC11E0CC0, 0xC3C898C9, 0x01507919, 0x7323F75E, 0x06A02107,
    0x5C06C08A, 0x1387EC8D, 0x56E7DD24, 0xC4068817, 0xD1FF0A20, 0xF07D160E, 0xB3A57781,
    0x202CF474, 0x45E88609, 0x0981C13F, 0xEAF4702C, 0x0908276E, 0x798C70E2, 0x7B192F3F,
    0xC67479E4, 0xFC099D1E, 0x20D41180, 0x31767B14, 0xBDBDFB06, 0xC02118F0, 0x0B90E00E,
    0x1963EEDA, 0xC94320A0, 0xD4F7A37D, 0xA80E00B8, 0x5B275208, 0x73C35751, 0xF53C237E,
    0x7ACC3203, 0x21D85F50, 0x79802007, 0x17FF2665, 0xE6A08806, 0x022760C7, 0x1386F17D,
    0xB6F3B408, 0xBC0908BF, 0x2F568A70, 0x30BB1D24, 0x3BFA1344, 0x059BD519, 0x04705604,
    0x90BF6031, 0x0A826C6E, 0xF43DBF84, 0x2B01923D, 0x21184264, 0x743955EF, 0xE02B87E1,
    0x7F550380, 0x629BF10A, 0x60F41000, 0x8618880B, 0x8E1C1C3A, 0x0942405E, 0xFC3E8B1A,
    0x2F02825B, 0x761AE270, 0x122D06F6, 0x601785A1, 0xAFE12A1C, 0x80D80409, 0x2E424018,
    0xF1839C4C, 0x02483383, 0xFC466C15, 0x404DE035, 0x81B80E00, 0x01830824, 0x743C9256,
    0x02402D83, 0x0E817C1E, 0xB5BB4090, 0x8469FFC4, 0x0A005400, 0xEC18C0FC, 0xC2EC2501,
    0xB49CAC38, 0x342E437C, 0x9FF01982, 0x53A0CE03, 0x40094004, 0xC2D42041, 0xCE18DC38,
    0xD033039C, 0xC1D82582, 0x0780F816, 0x61C1401A, 0x842C1F84, 0x008470B9, 0xA005001C,
    0xC17C1080, 0x2DC2681E, 0xD8704344, 0x03703ED9, 0x1201E42B, 0x7E0D2030, 0x000C5461,
    0x1200B005, 0x282881CC, 0xDE003883, 0x3903C97B, 0x1033035C, 0x827C2D03, 0x1B01F023,
    0x1413C178, 0x40D00EC1, 0x0AC0B80C, 0x2C24C0A0, 0x009C1CC4, 0x0C80B80B, 0x4811DB00,
    0x41B81841, 0x28823C1F, 0x383102DC, 0xC39C3643, 0x60DA6C3C, 0x6C310379, 0x41001B02,
    0x11C0380A, 0x9E27A182, 0x80FC08D3, 0x2B822418, 0xB037C338, 0x9A760F03, 0x3D43E43F,
    0xA43B43C0, 0x0D30AA83, 0x3C43B83A, 0xD43E43D4, 0x83FDA799, 0x3783AC3E, 0x0C2A032C,
    0x80F01742, 0x27E27407, 0x045FE316, 0x003401C0, 0x1400C406, 0xF8295958, 0x436C3302,
    0x2E59D03A, 0xCD552356, 0xC36839C3, 0x2882E832, 0xB01299F0, 0x987C05C0, 0x83E38E31,
    0x7C050024, 0x00E00A40, 0x19015812, 0x201F41BC, 0x026C2482, 0x2B82A429, 0xD82D42CC,
    0x82D42D82, 0x2A42B82C, 0x44268288, 0x41EC2182, 0x1501881B, 0x7409D768, 0x1EA004C0,
    0x40453639, 0x00000000, 0x00000000

  EW_BITMAPS_TABLE( Applicationgrid )
    EW_BITMAP( Applicationgrid, Default )
EW_END_OF_BITMAP_RES( Applicationgrid )

/* Table with links to derived variants of the bitmap resource : 'Application::grid' */
EW_RES_WITHOUT_VARIANTS( Applicationgrid )

/* Font resource : 'Application::NumbersM' */
EW_DEFINE_FONT_RES( ApplicationNumbersM, 26, 6, 0, 16, 0x0016, 0x00BE )
  EW_GLYPH( 0x0016, 0, -25, 16, 31, 16, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 16, 0x00000475 ),               /* ' ' */
  EW_GLYPH( 0x0021, 6, -21, 5, 21, 16, 0x00000475 ),            /* '!' */
  EW_GLYPH( 0x0022, 4, -22, 8, 7, 16, 0x0000051D ),             /* '"' */
  EW_GLYPH( 0x0023, 1, -21, 14, 21, 16, 0x00000574 ),           /* '#' */
  EW_GLYPH( 0x0024, 0, -21, 16, 21, 16, 0x000007D2 ),           /* '$' */
  EW_GLYPH( 0x0025, 0, -21, 16, 21, 16, 0x00000B42 ),           /* '%' */
  EW_GLYPH( 0x0026, 1, -21, 15, 21, 16, 0x00000EBA ),           /* '&' */
  EW_GLYPH( 0x0027, 7, -22, 3, 7, 16, 0x000011CA ),             /* ''' */
  EW_GLYPH( 0x0028, 3, -26, 10, 32, 16, 0x000011EB ),           /* '(' */
  EW_GLYPH( 0x0029, 3, -26, 10, 32, 16, 0x00001414 ),           /* ')' */
  EW_GLYPH( 0x002A, 2, -22, 13, 13, 16, 0x00001643 ),           /* '*' */
  EW_GLYPH( 0x002B, 2, -17, 13, 11, 16, 0x00001842 ),           /* '+' */
  EW_GLYPH( 0x002C, 6, -3, 5, 8, 16, 0x00001976 ),              /* ',' */
  EW_GLYPH( 0x002D, 1, -11, 15, 2, 16, 0x000019D2 ),            /* '-' */
  EW_GLYPH( 0x002E, 6, -3, 5, 3, 16, 0x00001A6F ),              /* '.' */
  EW_GLYPH( 0x002F, 1, -21, 15, 21, 16, 0x00001A92 ),           /* '/' */
  EW_GLYPH( 0x0030, 0, -21, 16, 21, 16, 0x00001CD8 ),           /* '0' */
  EW_GLYPH( 0x0031, 1, -21, 15, 21, 16, 0x0000201E ),           /* '1' */
  EW_GLYPH( 0x0032, 1, -21, 15, 21, 16, 0x00002205 ),           /* '2' */
  EW_GLYPH( 0x0033, 1, -21, 15, 21, 16, 0x00002509 ),           /* '3' */
  EW_GLYPH( 0x0034, 0, -21, 16, 21, 16, 0x0000282B ),           /* '4' */
  EW_GLYPH( 0x0035, 0, -21, 16, 21, 16, 0x00002AE0 ),           /* '5' */
  EW_GLYPH( 0x0036, 0, -21, 16, 21, 16, 0x00002E0A ),           /* '6' */
  EW_GLYPH( 0x0037, 0, -21, 16, 21, 16, 0x00003113 ),           /* '7' */
  EW_GLYPH( 0x0038, 1, -21, 15, 21, 16, 0x000033F4 ),           /* '8' */
  EW_GLYPH( 0x0039, 1, -21, 15, 21, 16, 0x00003762 ),           /* '9' */
  EW_GLYPH( 0x003A, 6, -12, 5, 12, 16, 0x00003A56 ),            /* ':' */
  EW_GLYPH( 0x003B, 6, -12, 5, 17, 16, 0x00003AD7 ),            /* ';' */
  EW_GLYPH( 0x003C, 3, -20, 11, 17, 16, 0x00003B8E ),           /* '<' */
  EW_GLYPH( 0x003D, 2, -16, 12, 8, 16, 0x00003D70 ),            /* '=' */
  EW_GLYPH( 0x003E, 3, -20, 11, 17, 16, 0x00003ED3 ),           /* '>' */
  EW_GLYPH( 0x003F, 1, -21, 15, 21, 16, 0x000040AE ),           /* '?' */
  EW_GLYPH( 0x0040, 1, -17, 14, 22, 16, 0x0000437C ),           /* '@' */
  EW_GLYPH( 0x0041, 0, -21, 16, 21, 16, 0x0000468B ),           /* 'A' */
  EW_GLYPH( 0x0042, 0, -21, 16, 21, 16, 0x00004981 ),           /* 'B' */
  EW_GLYPH( 0x0043, 1, -21, 14, 21, 16, 0x00004C9C ),           /* 'C' */
  EW_GLYPH( 0x0044, 1, -21, 15, 21, 16, 0x00004EF3 ),           /* 'D' */
  EW_GLYPH( 0x0045, 1, -21, 15, 21, 16, 0x0000513D ),           /* 'E' */
  EW_GLYPH( 0x0046, 1, -21, 15, 21, 16, 0x000053D4 ),           /* 'F' */
  EW_GLYPH( 0x0047, 1, -21, 15, 21, 16, 0x00005614 ),           /* 'G' */
  EW_GLYPH( 0x0048, 0, -21, 16, 21, 16, 0x000058D2 ),           /* 'H' */
  EW_GLYPH( 0x0049, 1, -21, 15, 21, 16, 0x00005AAC ),           /* 'I' */
  EW_GLYPH( 0x004A, 1, -21, 15, 21, 16, 0x00005CE5 ),           /* 'J' */
  EW_GLYPH( 0x004B, 1, -21, 15, 21, 16, 0x00005F0E ),           /* 'K' */
  EW_GLYPH( 0x004C, 1, -21, 15, 21, 16, 0x000061A0 ),           /* 'L' */
  EW_GLYPH( 0x004D, 1, -21, 15, 21, 16, 0x00006357 ),           /* 'M' */
  EW_GLYPH( 0x004E, 1, -21, 15, 21, 16, 0x000065DD ),           /* 'N' */
  EW_GLYPH( 0x004F, 0, -21, 16, 21, 16, 0x0000680A ),           /* 'O' */
  EW_GLYPH( 0x0050, 1, -21, 15, 21, 16, 0x00006AB5 ),           /* 'P' */
  EW_GLYPH( 0x0051, 0, -21, 16, 25, 16, 0x00006D3C ),           /* 'Q' */
  EW_GLYPH( 0x0052, 1, -21, 15, 21, 16, 0x0000707D ),           /* 'R' */
  EW_GLYPH( 0x0053, 1, -21, 15, 21, 16, 0x00007310 ),           /* 'S' */
  EW_GLYPH( 0x0054, 1, -21, 14, 21, 16, 0x0000764F ),           /* 'T' */
  EW_GLYPH( 0x0055, 0, -21, 16, 21, 16, 0x0000780D ),           /* 'U' */
  EW_GLYPH( 0x0056, 0, -21, 16, 21, 16, 0x00007A17 ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -21, 17, 21, 16, 0x00007CEB ),           /* 'W' */
  EW_GLYPH( 0x0058, 1, -21, 15, 21, 16, 0x0000802F ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -21, 16, 21, 16, 0x0000832E ),           /* 'Y' */
  EW_GLYPH( 0x005A, 1, -21, 15, 21, 16, 0x000085B4 ),           /* 'Z' */
  EW_GLYPH( 0x005B, 3, -26, 10, 32, 16, 0x000088D1 ),           /* '[' */
  EW_GLYPH( 0x005C, 1, -21, 15, 21, 16, 0x00008AB3 ),           /* '\' */
  EW_GLYPH( 0x005D, 3, -26, 10, 32, 16, 0x00008CF0 ),           /* ']' */
  EW_GLYPH( 0x005E, 0, -22, 17, 10, 16, 0x00008ED2 ),           /* '^' */
  EW_GLYPH( 0x005F, 0, 4, 17, 2, 16, 0x00009086 ),              /* '_' */
  EW_GLYPH( 0x0060, 4, -21, 7, 4, 16, 0x00009140 ),             /* '`' */
  EW_GLYPH( 0x0061, 0, -17, 16, 17, 16, 0x000091C5 ),           /* 'a' */
  EW_GLYPH( 0x0062, 1, -22, 15, 22, 16, 0x00009472 ),           /* 'b' */
  EW_GLYPH( 0x0063, 1, -17, 15, 17, 16, 0x000096C3 ),           /* 'c' */
  EW_GLYPH( 0x0064, 1, -22, 15, 22, 16, 0x000098F8 ),           /* 'd' */
  EW_GLYPH( 0x0065, 1, -17, 15, 17, 16, 0x00009B51 ),           /* 'e' */
  EW_GLYPH( 0x0066, 1, -22, 15, 22, 16, 0x00009E17 ),           /* 'f' */
  EW_GLYPH( 0x0067, 1, -17, 15, 23, 16, 0x0000A05A ),           /* 'g' */
  EW_GLYPH( 0x0068, 1, -22, 15, 22, 16, 0x0000A34A ),           /* 'h' */
  EW_GLYPH( 0x0069, 1, -22, 15, 22, 16, 0x0000A53A ),           /* 'i' */
  EW_GLYPH( 0x006A, 3, -22, 11, 28, 16, 0x0000A76F ),           /* 'j' */
  EW_GLYPH( 0x006B, 1, -22, 15, 22, 16, 0x0000A98E ),           /* 'k' */
  EW_GLYPH( 0x006C, 1, -22, 15, 22, 16, 0x0000AC00 ),           /* 'l' */
  EW_GLYPH( 0x006D, 0, -17, 16, 17, 16, 0x0000AE05 ),           /* 'm' */
  EW_GLYPH( 0x006E, 1, -17, 15, 17, 16, 0x0000AFAE ),           /* 'n' */
  EW_GLYPH( 0x006F, 0, -17, 16, 17, 16, 0x0000B148 ),           /* 'o' */
  EW_GLYPH( 0x0070, 0, -17, 16, 23, 16, 0x0000B3BE ),           /* 'p' */
  EW_GLYPH( 0x0071, 1, -17, 15, 23, 16, 0x0000B66D ),           /* 'q' */
  EW_GLYPH( 0x0072, 1, -17, 14, 17, 16, 0x0000B8F8 ),           /* 'r' */
  EW_GLYPH( 0x0073, 0, -17, 16, 17, 16, 0x0000BA8F ),           /* 's' */
  EW_GLYPH( 0x0074, 1, -21, 15, 21, 16, 0x0000BDA8 ),           /* 't' */
  EW_GLYPH( 0x0075, 1, -17, 15, 17, 16, 0x0000BFCA ),           /* 'u' */
  EW_GLYPH( 0x0076, 0, -17, 16, 17, 16, 0x0000C157 ),           /* 'v' */
  EW_GLYPH( 0x0077, 0, -17, 17, 17, 16, 0x0000C3B2 ),           /* 'w' */
  EW_GLYPH( 0x0078, 0, -17, 16, 17, 16, 0x0000C671 ),           /* 'x' */
  EW_GLYPH( 0x0079, 0, -17, 17, 23, 16, 0x0000C932 ),           /* 'y' */
  EW_GLYPH( 0x007A, 1, -17, 14, 17, 16, 0x0000CC55 ),           /* 'z' */
  EW_GLYPH( 0x007B, 3, -26, 11, 32, 16, 0x0000CF0D ),           /* '{' */
  EW_GLYPH( 0x007C, 6, -26, 4, 32, 16, 0x0000D190 ),            /* '|' */
  EW_GLYPH( 0x007D, 3, -26, 11, 32, 16, 0x0000D220 ),           /* '}' */
  EW_GLYPH( 0x007E, 2, -13, 13, 4, 16, 0x0000D4C4 ),            /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 16, 0x0000D58B ),
  EW_GLYPH( 0x00A1, 6, -15, 5, 21, 16, 0x0000D58B ),
  EW_GLYPH( 0x00A2, 3, -21, 11, 21, 16, 0x0000D636 ),
  EW_GLYPH( 0x00A3, 1, -21, 15, 21, 16, 0x0000D834 ),
  EW_GLYPH( 0x00A5, 0, -21, 16, 21, 16, 0x0000DAB8 ),
  EW_GLYPH( 0x00A6, 6, -26, 4, 32, 16, 0x0000DE07 ),
  EW_GLYPH( 0x00A7, 1, -21, 14, 25, 16, 0x0000DEB7 ),
  EW_GLYPH( 0x00A8, 2, -21, 12, 3, 16, 0x0000E2C3 ),
  EW_GLYPH( 0x00A9, 0, -22, 16, 23, 16, 0x0000E329 ),
  EW_GLYPH( 0x00AA, 3, -21, 11, 11, 16, 0x0000E70B ),
  EW_GLYPH( 0x00AB, 2, -15, 13, 11, 16, 0x0000E88C ),
  EW_GLYPH( 0x00AC, 2, -13, 13, 7, 16, 0x0000EA71 ),
  EW_GLYPH( 0x00AD, 1, -11, 15, 2, 16, 0x0000EB73 ),
  EW_GLYPH( 0x00AE, 1, -22, 15, 14, 16, 0x0000EC10 ),
  EW_GLYPH( 0x00AF, 2, -21, 13, 3, 16, 0x0000EEE0 ),
  EW_GLYPH( 0x00B0, 3, -22, 11, 12, 16, 0x0000EF72 ),
  EW_GLYPH( 0x00B1, 2, -17, 13, 17, 16, 0x0000F0D8 ),
  EW_GLYPH( 0x00B2, 4, -21, 8, 11, 16, 0x0000F2D9 ),
  EW_GLYPH( 0x00B3, 4, -21, 8, 11, 16, 0x0000F410 ),
  EW_GLYPH( 0x00B4, 6, -21, 7, 4, 16, 0x0000F542 ),
  EW_GLYPH( 0x00B6, 1, -21, 15, 27, 16, 0x0000F5C7 ),
  EW_GLYPH( 0x00B7, 6, -12, 5, 3, 16, 0x0000F80E ),
  EW_GLYPH( 0x00B8, 6, 1, 4, 5, 16, 0x0000F831 ),
  EW_GLYPH( 0x00B9, 5, -21, 6, 11, 16, 0x0000F867 ),
  EW_GLYPH( 0x00BA, 3, -21, 11, 12, 16, 0x0000F8FD ),
  EW_GLYPH( 0x00BB, 2, -15, 13, 11, 16, 0x0000FA4C ),
  EW_GLYPH( 0x00BC, 0, -21, 16, 21, 16, 0x0000FC33 ),
  EW_GLYPH( 0x00BD, 0, -21, 16, 21, 16, 0x0000FF80 ),
  EW_GLYPH( 0x00BE, 0, -21, 16, 21, 16, 0x00010329 ),
  EW_GLYPH( 0x00BF, 1, -15, 15, 21, 16, 0x00010709 ),
  EW_GLYPH( 0x00C0, 0, -26, 16, 26, 16, 0x000109B2 ),
  EW_GLYPH( 0x00C1, 0, -26, 16, 26, 16, 0x00010D6A ),
  EW_GLYPH( 0x00C2, 0, -26, 16, 26, 16, 0x00011122 ),
  EW_GLYPH( 0x00C3, 0, -26, 16, 26, 16, 0x00011505 ),
  EW_GLYPH( 0x00C4, 0, -26, 16, 26, 16, 0x000118F6 ),
  EW_GLYPH( 0x00C5, 0, -26, 16, 26, 16, 0x00011CAE ),
  EW_GLYPH( 0x00C6, 0, -21, 16, 21, 16, 0x0001204C ),
  EW_GLYPH( 0x00C7, 1, -21, 14, 27, 16, 0x0001233E ),
  EW_GLYPH( 0x00C8, 1, -26, 15, 26, 16, 0x0001263F ),
  EW_GLYPH( 0x00C9, 1, -26, 15, 26, 16, 0x00012993 ),
  EW_GLYPH( 0x00CA, 1, -26, 15, 26, 16, 0x00012CE7 ),
  EW_GLYPH( 0x00CB, 1, -26, 15, 26, 16, 0x00013066 ),
  EW_GLYPH( 0x00CC, 1, -26, 15, 26, 16, 0x000133BA ),
  EW_GLYPH( 0x00CD, 1, -26, 15, 26, 16, 0x000136B0 ),
  EW_GLYPH( 0x00CE, 1, -26, 15, 26, 16, 0x000139A6 ),
  EW_GLYPH( 0x00CF, 1, -26, 15, 26, 16, 0x00013CC7 ),
  EW_GLYPH( 0x00D0, 0, -21, 16, 21, 16, 0x00013FBD ),
  EW_GLYPH( 0x00D1, 1, -26, 15, 26, 16, 0x0001425C ),
  EW_GLYPH( 0x00D2, 0, -26, 16, 26, 16, 0x0001457F ),
  EW_GLYPH( 0x00D3, 0, -26, 16, 26, 16, 0x000148EC ),
  EW_GLYPH( 0x00D4, 0, -26, 16, 26, 16, 0x00014C59 ),
  EW_GLYPH( 0x00D5, 0, -26, 16, 26, 16, 0x00014FF1 ),
  EW_GLYPH( 0x00D6, 0, -26, 16, 26, 16, 0x00015397 ),
  EW_GLYPH( 0x00D7, 3, -17, 11, 11, 16, 0x00015704 ),
  EW_GLYPH( 0x00D8, 0, -22, 17, 24, 16, 0x000158A1 ),
  EW_GLYPH( 0x00D9, 0, -26, 16, 26, 16, 0x00015C73 ),
  EW_GLYPH( 0x00DA, 0, -26, 16, 26, 16, 0x00015F3F ),
  EW_GLYPH( 0x00DB, 0, -26, 16, 26, 16, 0x0001620B ),
  EW_GLYPH( 0x00DC, 0, -26, 16, 26, 16, 0x00016502 ),
  EW_GLYPH( 0x00DD, 0, -26, 16, 26, 16, 0x000167CE ),
  EW_GLYPH( 0x00DE, 1, -21, 15, 21, 16, 0x00016B16 ),
  EW_GLYPH( 0x00DF, 0, -22, 16, 22, 16, 0x00016DA1 ),
  EW_GLYPH( 0x00E0, 0, -22, 16, 22, 16, 0x000170C5 ),
  EW_GLYPH( 0x00E1, 0, -22, 16, 22, 16, 0x00017435 ),
  EW_GLYPH( 0x00E2, 0, -22, 16, 22, 16, 0x0001779C ),
  EW_GLYPH( 0x00E3, 0, -22, 16, 22, 16, 0x00017B39 ),
  EW_GLYPH( 0x00E4, 0, -22, 16, 22, 16, 0x00017EE9 ),
  EW_GLYPH( 0x00E5, 0, -23, 16, 23, 16, 0x00018258 ),
  EW_GLYPH( 0x00E6, 0, -17, 17, 17, 16, 0x000185E7 ),
  EW_GLYPH( 0x00E7, 1, -17, 15, 23, 16, 0x000188E3 ),
  EW_GLYPH( 0x00E8, 1, -22, 15, 22, 16, 0x00018BCD ),
  EW_GLYPH( 0x00E9, 1, -22, 15, 22, 16, 0x00018F51 ),
  EW_GLYPH( 0x00EA, 1, -22, 15, 22, 16, 0x000192CC ),
  EW_GLYPH( 0x00EB, 1, -22, 15, 22, 16, 0x0001967D ),
  EW_GLYPH( 0x00EC, 1, -22, 15, 22, 16, 0x00019A00 ),
  EW_GLYPH( 0x00ED, 1, -22, 15, 22, 16, 0x00019C7A ),
  EW_GLYPH( 0x00EE, 1, -22, 15, 22, 16, 0x00019EEB ),
  EW_GLYPH( 0x00EF, 1, -22, 15, 22, 16, 0x0001A192 ),
  EW_GLYPH( 0x00F0, 0, -22, 16, 22, 16, 0x0001A40B ),
  EW_GLYPH( 0x00F1, 1, -22, 15, 22, 16, 0x0001A712 ),
  EW_GLYPH( 0x00F2, 0, -22, 16, 22, 16, 0x0001A9AA ),
  EW_GLYPH( 0x00F3, 0, -22, 16, 22, 16, 0x0001ACE4 ),
  EW_GLYPH( 0x00F4, 0, -22, 16, 22, 16, 0x0001B015 ),
  EW_GLYPH( 0x00F5, 0, -22, 16, 22, 16, 0x0001B37C ),
  EW_GLYPH( 0x00F6, 0, -22, 16, 22, 16, 0x0001B6F6 ),
  EW_GLYPH( 0x00F7, 2, -18, 13, 12, 16, 0x0001BA2F ),
  EW_GLYPH( 0x00F8, 0, -20, 16, 22, 16, 0x0001BBD2 ),
  EW_GLYPH( 0x00F9, 1, -22, 15, 22, 16, 0x0001BF54 ),
  EW_GLYPH( 0x00FA, 1, -22, 15, 22, 16, 0x0001C19F ),
  EW_GLYPH( 0x00FB, 1, -22, 15, 22, 16, 0x0001C3E1 ),
  EW_GLYPH( 0x00FC, 1, -22, 15, 22, 16, 0x0001C659 ),
  EW_GLYPH( 0x00FD, 0, -22, 17, 28, 16, 0x0001C8A3 ),
  EW_GLYPH( 0x00FE, 0, -22, 16, 28, 16, 0x0001CC85 ),
  EW_GLYPH( 0x00FF, 0, -22, 17, 28, 16, 0x0001CF88 ),

  EW_FONT_PIXEL( ApplicationNumbersM, 0x0001D372 )              /* ratio 54.65 % */
    0x9E79E78C, 0xE79E79E7, 0xBFB7E0A9, 0xEFBEFBEF, 0x77EFBEFB, 0x1000519F, 0x00000007,
    0x39CE7380, 0x27B39CE7, 0xB78C4400, 0xCE739CE1, 0x1AC1FF39, 0x07C1E400, 0x001E2C80,
    0x30001248, 0x0261E000, 0x101B06A0, 0x2623EB55, 0xAFDF9CF0, 0x7D402F83, 0xFFD5AE62,
    0x6FBCAE02, 0xE3C04AF7, 0x14300017, 0x00092800, 0x440007FA, 0xDDD18001, 0xAD678009,
    0x00000135, 0x2CF3CF90, 0x7DF7D400, 0x60000003, 0xF1C40014, 0xFBEFBFDB, 0xBEFBEFBE,
    0xBDE7DF6F, 0x000006F7, 0x00000000, 0xDEF00000, 0xFF80037B, 0xE001F7BD, 0xF7BC37B9,
    0x0000000F, 0xDF800000, 0x05DEF07D, 0x00000000, 0x00000000, 0xEF96F710, 0x5DF53BDE,
    0xAAA8C2AA, 0xFBF19594, 0xEFDFDE3D, 0x03DFBE57, 0x00000000, 0x00000000, 0xBBE5BDC4,
    0x977D4EF7, 0x2AAA30AA, 0x7EFC6565, 0xFBF7F78F, 0x00F7EF95, 0x00000000, 0xDE000000,
    0xA000000B, 0x57EFDFBE, 0xEFDFBF7E, 0x9EFCF0F7, 0x55554AAA, 0xDEF33495, 0xEF7BDEE9,
    0x000FC992, 0x04000481, 0x00131200, 0xBFFFF451, 0xFFFFFFFC, 0x86645C97, 0x50E7CCCC,
    0x1E30025F, 0x77BDFF9E, 0x6C9FF7BA, 0x0247E400, 0x06000240, 0x7F1F0001, 0xFDFBF7EB,
    0xFBF7E57E, 0x5538F10F, 0x52AA9555, 0xF7BDE97E, 0x7BDD3BDE, 0x0000BFEF, 0xF7BDCF78,
    0x721FDE43, 0xC53C5546, 0xFCF08FE3, 0x59F0537E, 0xB2317060, 0x0E7E0002, 0x80A27800,
    0x13E465C1, 0x6FDF9E90, 0x3101CF8A, 0xAA9E2AA3, 0xDCF78078, 0x02CABF7B, 0x00177F00,
    0x222278AC, 0xCF589E00, 0x019CE739, 0x7F57FF5C, 0xB2A03E2B, 0x093E7AC2, 0x0030289E,
    0xF10007C7, 0x158000E4, 0xDFC0900F, 0x8EFF698F, 0x6E0E5444, 0xD1FCCA8E, 0xBDEF7BFF,
    0x95BF01F7, 0xA02AAAB2, 0x7EFFFE8A, 0x9FC15FBF, 0x1E4800B1, 0x06000000, 0xD42F8009,
    0xDF364003, 0xBF7EFDFE, 0x7BF7EFDF, 0xAAAA3064, 0xBF32AAAA, 0x0F7B9CF0, 0x84F5DEFB,
    0xA6C002F8, 0x03F93000, 0x00000000, 0xB001FC98, 0x213C0029, 0x65F2005E, 0x8FBF7FFE,
    0x563DFBFB, 0x462AACA7, 0x00BBDE55, 0x3BF98000, 0xFF18FEF7, 0xC86AB2B7, 0xFF6FC67F,
    0x5D0DED7E, 0xC904C4A0, 0x00000403, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x80000000, 0x46910164, 0x00DF2F00, 0xB3ED45F5, 0xBB73CD7F, 0xEE31A8C6,
    0x1137FFBD, 0x5EE63555, 0x3BF7EFE4, 0xBE02F44F, 0x7C7C09D4, 0x02009240, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xB0060010, 0x1A6B10D9,
    0xFF7EFE4F, 0xAA2FEAD3, 0x5FBF98C6, 0x3C004600, 0x880ECFFC, 0x2B0CABFD, 0x1F7C47A0,
    0x4EF0637F, 0xFDFFD8B1, 0x549E0BA1, 0x1814FFE6, 0x102467F3, 0xD1953BEF, 0x116F8843,
    0xBCF4CF67, 0x30A8417C, 0x101BCAE6, 0x4EF5FC4F, 0x0879DF50, 0x001DDF80, 0x00000000,
    0xBF7EFEF0, 0x7EFEE3DF, 0x55565FBF, 0x55551855, 0xDEF7BFF1, 0x77BDEFB2, 0x00000000,
    0xFFC00000, 0x20F05BDE, 0x1C240F02, 0xEFF53018, 0x7EFDFBF7, 0xF7EFDFBF, 0x5462FDFB,
    0x55555555, 0xDEF79555, 0x6000001B, 0x680013DC, 0x54F0006F, 0x06B4002E, 0x00F1CAC0,
    0x800BAF10, 0x9000678E, 0xAF001A33, 0xC5540099, 0x01D6800B, 0x02631CC0, 0xF001AD10,
    0x39001546, 0xE63A0035, 0xD13C6000, 0x00DEB800, 0x00B919E0, 0xE8007ED0, 0xC400131C,
    0xF7BDEE7B, 0xFE0BBBDE, 0x2AAAA233, 0x1CC3DF8C, 0xBF7EFF72, 0x3F8FC0DF, 0x4293C4BF,
    0x57058794, 0x88104316, 0x04E7F3C7, 0xC001F260, 0x950012A7, 0x17F000FE, 0x2CB10013,
    0x03E15800, 0x000E4F80, 0x8003E18C, 0x3010131F, 0x1980013D, 0xA28E1C2E, 0xF0C503E5,
    0x29D03C27, 0x7E781CCA, 0xF17FDFBF, 0xAC867FC3, 0x07BE34AA, 0xBDEF7BFF, 0x6AAA0077,
    0xFDFDE000, 0x0000005E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xFBF7EFEF, 0xDFBFB8BD, 0x555557EF, 0xAAAA3035, 0xF7BDDF82,
    0x2EEF7BDE, 0x55555518, 0xFE857C61, 0xDFBF7EFD, 0x0068A6EF, 0x000C65E2, 0x10000F0A,
    0x50004000, 0x93440078, 0xFDFBF983, 0x1DDFBF7E, 0xAAB7BF34, 0xDF8C2AAA, 0xBDD629E3,
    0x8BBBDEF7, 0x0F003643, 0x00E08005, 0x00000000, 0x00000000, 0xBF7EFDF0, 0xFBF7EFDF,
    0x590B7EFD, 0x55555555, 0xDEF77E75, 0xF7BDEF7B, 0xAAA8C97C, 0x9E21AAAA, 0xFBF7FA1B,
    0xDFBF7EFD, 0x006C85FE, 0xF000B16A, 0x85801227, 0x01216000, 0xC8006418, 0xEFE40797,
    0x50EDFBF7, 0x2AAAA20D, 0xEF7B8C00, 0xC005A97D, 0xF800BC9C, 0xC0C00188, 0x30000004,
    0x51140010, 0x794BC600, 0xEFDFBF7F, 0xFEFDFBF7, 0xAAAA7E21, 0xA22AAAAA, 0xDFF80076,
    0x98006F7B, 0x3CFC0009, 0x5E333000, 0x0999F800, 0x02F19580, 0x00066BC0, 0x000BC456,
    0x580019AF, 0xBC001F11, 0x45600256, 0xB5E000FC, 0xE22B0012, 0x95AF0007, 0xEF908800,
    0x0FEFBEFB, 0xCD41F7BF, 0xF07CE739, 0xDEF71DCC, 0x07BDEF7B, 0x0000BEE7, 0x00000000,
    0xF7BDEF71, 0xBDEF7BDE, 0x5554603F, 0xE00D5555, 0xBF7EFDFD, 0x6BF7EFDF, 0x00000000,
    0x00000000, 0xFDE00000, 0xDFBF7EFD, 0x8C015BEF, 0xA7AAAAAA, 0xDEF710EF, 0xF7BDEF7B,
    0x2002E25F, 0x3000319B, 0x06000782, 0x00100007, 0x49000380, 0x0050A000, 0xFC654BE4,
    0xEFDFBF7E, 0x9DEDFBF7, 0xAAAAA5E2, 0x3C446AAA, 0xB9F7313B, 0xEF7BDEF7, 0x223BE60F,
    0x06AAAAAA, 0xF7FFC47C, 0xBF7EFDFB, 0x0033C186, 0x00400480, 0x00000000, 0xBF7EA000,
    0xFBF7EFDF, 0x559016FD, 0xBD555555, 0xDEF7BCC1, 0x00A3277B, 0xC000C3F0, 0x000001C0,
    0x08000000, 0x81202000, 0x067835C4, 0xC47C3178, 0xFDFBF7FF, 0xF99643CE, 0xAAAA888E,
    0xF71AF390, 0xBDEF7BDE, 0x6F7BDEF7, 0x55555547, 0xDE20D555, 0xBF7EFDFC, 0xFBF7EFDF,
    0x00547EFD, 0xC005E5E0, 0xF000350C, 0x49E002E3, 0xF9780059, 0x310C6001, 0x0132F001,
    0x00F88F90, 0x8012A3F0, 0x9800BC58, 0x5E0006A1, 0xC866000E, 0x1F1F0007, 0x05886A00,
    0xC004CB80, 0xBC003E28, 0xFAC0093C, 0xBDEF7BDF, 0x4EAC4BE7, 0x9E223559, 0xFFACBC1D,
    0x8877B7EF, 0x90BC42A9, 0x01182D93, 0x0B001336, 0x45849800, 0x723CD826, 0x12E626F2,
    0xFD47DE3F, 0xC46FBDEF, 0x5187E93F, 0xAA4E2155, 0xBF7FB7C5, 0x38F21DDF, 0x19A2078C,
    0xC1E02939, 0x00102E0A, 0x102E0800, 0xC1E02930, 0xD1058CDC, 0xDE8398E4, 0x0EEFDFBF,
    0xA34CFF9A, 0x7BEA22AA, 0x7BDCFB98, 0xFFF7BDEF, 0x888EF9A5, 0xCF94AAAA, 0xF7FB11F5,
    0x0FFEFDFB, 0xC12B24F9, 0x900E0C8B, 0x00000038, 0x00000000, 0xA4800380, 0xFF91F000,
    0xFBF7EFDF, 0xCA56B07D, 0xD02AAAAA, 0xBDEF7BFF, 0x00001EF7, 0x18000000, 0x01C4C000,
    0xBFBD22E0, 0xFBF7EFDF, 0x3E45FEFD, 0xAAAAAAAA, 0xFFD73E52, 0xF000FBDE, 0x003EF7BF,
    0xF7FE0000, 0xFF8007DE, 0xE001F7BD, 0x007DEF7F, 0xEFFC0000, 0x220F05BD, 0x81C240F0,
    0x00001301, 0xFC8017E2, 0x31EC6017, 0x7EBFCC03, 0x05BEBF41, 0x20BB95BE, 0x613B53F6,
    0x00BF51EC, 0xC01E7963, 0x805BE2B7, 0xC03FA2FE, 0x0767CFF3, 0x3D8D7630, 0xFCCDF880,
    0x017DE007, 0xFBF57F98, 0xDFBF7EFD, 0xBDFBF7EF, 0x55555551, 0xBDCF5555, 0xEF7BDEF7,
    0x00007FBD, 0xDFA80000, 0xFDFBF7EF, 0xEFDFBF7E, 0xAAAAAA8D, 0xC002AAAA, 0x2DF000FB,
    0x03FB2F80, 0x5F9E3D8C, 0xDA9FB100, 0xFE75F003, 0xBF3EB00B, 0xFD3E7805, 0x06C57102,
    0x03F72BB9, 0xC276B3B5, 0x02FD62FA, 0xE835F6DE, 0x8807FF99, 0xFFF003DA, 0xDEEFC005,
    0xF7BDEF7B, 0x55192F9E, 0xC4355555, 0x7EFF4373, 0xF7EFDFBF, 0x03643BDB, 0x000B2630,
    0x1600489B, 0x00858002, 0x60091360, 0xDF50264C, 0xBE43B7EF, 0x2A9EFD60, 0x6C80DCF1,
    0xF3DEFFCF, 0x97E47825, 0x000F5C00, 0x98007F1C, 0xDF0004CF, 0x20000000, 0x002FBDEE,
    0xA0000000, 0xDEF7BDF6, 0x45F9EF7B, 0x5555597C, 0x57AA3555, 0xF7EFDFAC, 0xBF7EFDFB,
    0x1801C2A3, 0x000000F2, 0xF7BED400, 0x12B2F802, 0x15FCC540, 0x000FE180, 0x40002000,
    0x9CA800DA, 0x7017BA77, 0xAAAAAA9F, 0x7EFDF902, 0xF7EFDFBF, 0x80000003, 0x1FD70000,
    0xF73C4F00, 0xBDEF7BDE, 0xCFFCDEF7, 0xAAAAAAAA, 0xBDCF02AA, 0xFE006EF7, 0x31400184,
    0x6C690029, 0xE7854036, 0x6E0C0061, 0xF36007A4, 0x1E006258, 0x1180A486, 0xF03F9B06,
    0xB0149930, 0x048864D9, 0x050F078B, 0x2E0C0C99, 0x0A6C062C, 0xFDFBF936, 0x1E064D7E,
    0xA06AAAA2, 0xDEEFC188, 0xE7F16F7B, 0xC50603C1, 0x061C0226, 0x50780783, 0x3030061E,
    0xEF7BDEE2, 0xF3DEF7BD, 0x5556401B, 0x07FD4455, 0xDFBF7EF8, 0x3443B7EF, 0x02A5F200,
    0x00078500, 0x62400089, 0x0188A002, 0xD04CBD40, 0x7F7BDEF7, 0x55641AA1, 0x00CF0555,
    0xFBF7EFDF, 0x0710EEFD, 0x0164D100, 0x000D82A0, 0x00000083, 0x4001C180, 0x34400505,
    0xFBF7C063, 0x3BBF7EFD, 0xAAAC8344, 0xC2BE30AA, 0xEF7BDDF8, 0xBFDEF7BD, 0xAAA897FC,
    0x86F2AAAA, 0xEFDFBFD8, 0xDEFDFBF7, 0x1E013A28, 0x02408014, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x02408000, 0xA2005078, 0x21D004E8, 0xFBF7EFF6, 0xD7BF7EFD,
    0xAAA897F8, 0xDFFAAAAA, 0xF7BDEF7B, 0x201BFBDE, 0xD42AAAAB, 0x7EFD407F, 0xA76FDFBF,
    0x336400B8, 0x02C28012, 0x00009020, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00100000, 0x6400783C, 0xF7EA0633, 0x3B7EFDFB, 0xAAAC85C5, 0xE1FF50AA, 0x7BDEF7BD,
    0xDEF7BDEF, 0x5555501B, 0x7E055555, 0xF7EFDFBF, 0xBF7EFDFB, 0x00000000, 0x00000000,
    0x00000000, 0xEFDFBF7E, 0xA015FBF7, 0x02AAAAAA, 0xF7BDEF70, 0x000007DE, 0x00000000,
    0x00000000, 0xE0000000, 0x7EFDFBF7, 0xF7EFDFBF, 0xAAAAA80B, 0xBBF2AAAA, 0xEF7BDEF7,
    0x3BDEF7BD, 0xAAAAAAA0, 0xF7E02AAA, 0xBF7EFDFB, 0x4BF7EFDF, 0x00000000, 0x00000000,
    0x00000000, 0xBDEF7000, 0xA805DEF7, 0x04AAAAAA, 0xDFBF7EFC, 0x007BF7EF, 0x00000000,
    0x00000000, 0x00000000, 0xFCC00000, 0xBDEF7BDF, 0xEB3FDEF7, 0x5555594D, 0x9E5F2555,
    0xFBF7EFFF, 0xD7BF7EFD, 0xC007E213, 0x0800279F, 0x00000000, 0x00000000, 0xEFDFBF7E,
    0xA025FBF7, 0x02AAAAAA, 0x00BDEF70, 0x00000000, 0x01000000, 0x0279FC00, 0x0FC42780,
    0xCE797C80, 0xFDFBF7EF, 0x54537AC0, 0xBDC41555, 0xBDEE0177, 0x0000002F, 0x00000000,
    0x00000000, 0x00000000, 0xDFBF7C00, 0xFDFBF7EF, 0xAAAAB200, 0xDEFA00AA, 0x00BDEF7B,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x7BDEF000, 0xDEF7BDEF, 0x538DEF7B,
    0xAAA89555, 0xFBF7EB2A, 0xEFDF0AFD, 0x0005FBF7, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x7EFDFAC0, 0xFBF7C2BF, 0xAA717EFD,
    0x555512AA, 0xF7BDC605, 0x0DEF7BDE, 0x1AAAAA88, 0xFDFBF900, 0x0017BF7E, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x08000000, 0xB0000600, 0x879E0029,
    0xFDFBF5BF, 0x6FDFBF7E, 0x54E98C7F, 0x10D55555, 0xDEFFCFF3, 0x7BDEF01F, 0x7C9CC012,
    0x2ACD9009, 0x068C2700, 0x00710EF0, 0x025F933C, 0x00F58FE4, 0x80346138, 0x7800E21E,
    0x1004BF16, 0x78AA0008, 0xE4378003, 0x797C800F, 0xE0D6001E, 0x10DC0017, 0xE4C6003F,
    0xE4E80079, 0xE21C0017, 0x6A4C6003, 0x9D26F002, 0x007F7BFF, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFCF00000,
    0xEFDFBF7E, 0x7EFDFBF7, 0xAAAAA885, 0x7B8AAAAA, 0xDDF04DEF, 0xB02C177B, 0x0910FE00,
    0x16009090, 0x7090803C, 0x60611804, 0xE0F1E048, 0x21C300F1, 0xC18E05C3, 0x4C780394,
    0x32180586, 0xD201FDFC, 0x4B001A63, 0xDFC0261A, 0x4300914D, 0xE9800F2E, 0x19004BF9,
    0x8F002E51, 0x606001E1, 0xE0487000, 0x78137BDE, 0x03F05DEE, 0x80005600, 0x07C00098,
    0x001F2080, 0xC005E49E, 0xCC00518F, 0xA5E002E0, 0xFC198012, 0x0AC98800, 0x1310DE00,
    0x007C5880, 0x801391F8, 0xF000F87C, 0xA3002E32, 0x025C0028, 0x80003500, 0xB9EF1017,
    0xEF7BDEF7, 0xC33FE07E, 0xBE30AAA8, 0xF6F83587, 0xC53BF7EF, 0x80F98F8F, 0x36489E26,
    0x4C3F9230, 0x000024C0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x01600000,
    0x1FC91126, 0x61EFE4C8, 0x1E25E03D, 0xBFDBE29D, 0x8D14EFDF, 0x555184FD, 0x7FE9BF21,
    0xDEF7BDEF, 0x412FEF7B, 0xA8555554, 0x7EFCF01B, 0x1FEFDFBF, 0x2F1801B2, 0x510F000B,
    0x00122400, 0x00200008, 0x7E004818, 0x26780144, 0x7BDEEA0B, 0x434617EF, 0xD5555554,
    0xBF3C07FA, 0xFBF7EFDF, 0x00003AFD, 0x00000000, 0x00000000, 0x40000000, 0x7BDEE7BC,
    0x81FBBDEF, 0xAAA30CFF, 0xD61EF8C2, 0xDFBFDBE0, 0x7E3F16EF, 0x13440F3C, 0x4606C18F,
    0x003C0FF2, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x2001E040,
    0xC9181B24, 0x40F3C7DF, 0x8358F134, 0xBF7EFF6F, 0x7FF0FC5B, 0x30AAA8C2, 0x9DF107BE,
    0xBBDE5F7B, 0xFC33001F, 0x0F94C000, 0xE0DDBC00, 0xBDEF7BDE, 0x1BFBDEF7, 0x2AAAAB20,
    0xFD407FD4, 0xEFDFBF7E, 0x3002E21F, 0xE000C65E, 0x40C003C1, 0x00903000, 0x6C801614,
    0xBF7EA266, 0x43B7EFDF, 0x555590BD, 0xF7982415, 0x399B7BDE, 0x0FC55801, 0x01327F00,
    0x03000428, 0x00000013, 0x00000000, 0x3DE20000, 0xEF7BDEF7, 0xCFF837BD, 0xAAAAAA88,
    0xFB10E62A, 0x7EFDFBF7, 0xFC2FDFBF, 0xE4C00959, 0x00192002, 0xB24000C0, 0x5678B001,
    0x73E83800, 0x37FFBDEF, 0x739005A9, 0x327BFA0F, 0xF1710333, 0xFFFFFF7C, 0x18C5FE7F,
    0x03C5F200, 0x00002240, 0x50024000, 0x4F2E0028, 0xFBF7EFE4, 0xDFBF7EFD, 0x5513F929,
    0x11555555, 0xEF758773, 0x7BDEF7BD, 0xAB37BDEF, 0x555512AA, 0xBF7EFCF5, 0xF7EF87DF,
    0x0000FDFB, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xBDEE2000, 0xEF7FE00F, 0x0000000B, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000010, 0x06C51C18, 0x59FC3046, 0x73289A05,
    0xFDFEDF88, 0xE1F8A77E, 0xAAA8C33F, 0xE70F7E30, 0x7BDC06DE, 0x0C018797, 0x7807830C,
    0xE0913650, 0xC1307832, 0x01831143, 0xFE1E3F92, 0x66C28230, 0x160643C1, 0x64143819,
    0xB05C1892, 0x6050F078, 0x0910C973, 0x05161E1E, 0xF3F8308C, 0x830C3C07, 0x8F1E6C02,
    0xC9C18018, 0x185400F0, 0x3D200193, 0xC4A00D83, 0x13F8014B, 0xFBDFF806, 0x6F7B8C01,
    0x5600024D, 0xF2260132, 0x91106000, 0x26904024, 0x2E2DDF82, 0x418F0053, 0x84522430,
    0x96487243, 0x24C90487, 0x49930F24, 0x0C221C32, 0xCA184392, 0xEB920823, 0xC4832D89,
    0xE19E2224, 0x7C82260C, 0x448234E4, 0x17349D22, 0x863CD207, 0x34C24991, 0x4CDA6986,
    0xA948F148, 0xF2443808, 0x16242417, 0xEF798913, 0xDEE7102D, 0xDE039331, 0x278FC350,
    0xC1997261, 0xE1461987, 0x61A3E265, 0x30D47885, 0x971CBC0A, 0x66A19817, 0x93100F19,
    0x0DE01797, 0x1E20078C, 0x98518014, 0x0B149A00, 0x1F364A30, 0x949EF9A0, 0xD3128C13,
    0x159A07C7, 0x5183C61E, 0xA2F1647C, 0x51870319, 0x93C2F146, 0xE03E4D5C, 0x7B9C46A1,
    0x6F73807F, 0x7804F147, 0x2C4BCF82, 0x18D27870, 0x838A21FC, 0x464C0A8F, 0x3F130661,
    0x91F9303E, 0x31F04C43, 0xB204C7D2, 0x05E23C78, 0x55237E1C, 0x2E349E00, 0x618F802F,
    0xF033000C, 0x1E0F1002, 0x00000000, 0x00000000, 0x00000000, 0xBFF00000, 0xEF7BDEF7,
    0xFBDEF7BD, 0x55555554, 0x7F780D55, 0xF7EFDFBF, 0x0F7EFDFB, 0x8B1800F9, 0x550E8017,
    0x2F129E00, 0x004CCD00, 0xE401B29D, 0x1BC007E4, 0x14F004C6, 0x0E668017, 0x01A29D00,
    0x000DE4E4, 0xE005C86F, 0x9A005E29, 0xC52B002A, 0x665F200B, 0xFC60E802, 0xEFDFBF7E,
    0x6AFDFBF7, 0xAAAAAAA1, 0xBDC62AAA, 0xEF7BDEF7, 0x5555510F, 0xF7EFCF03, 0x001AFDFB,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xFDFBF3C0, 0x5446BF7E, 0xFBE8D555, 0x2ACE8003, 0x0069F800, 0x004C6398,
    0x55000D68, 0xC6F000D1, 0x8AE4004C, 0x678E8006, 0x175E2000, 0x078E5600, 0xC0035A00,
    0xC0017233, 0xC60006F5, 0x1D000D13, 0xA7200073, 0x7A8E8006, 0x0035A000, 0x000B91CC,
    0xDEE31BDA, 0xF7BDEF7B, 0x35555517, 0xEFDFBF90, 0x00017BF7, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFBF7EFE4,
    0x55445EFD, 0xA2000D55, 0x37DF0000, 0x715BC000, 0xE6730002, 0xD5003FCC, 0x3E39DE71,
    0x37E2FC80, 0x1034F5BC, 0x97C1FA27, 0xCC6F826B, 0x07A37105, 0xC817AADE, 0xCE69FE2F,
    0xE3AA00FC, 0xFBF7EFC4, 0xDFBF7EFD, 0xFDFBF7EF, 0xAADFBF7E, 0xAAAAAAAA, 0x3AAAAAAA,
    0x31899DFB, 0x8DF9FFDF, 0xE6A22359, 0xFEE7DBFB, 0xEF7BFF0B, 0xFFDEF7BD, 0xAAAAA037,
    0xFF3E52AA, 0xFDFBFBC0, 0xBFDFBF7E, 0x85800589, 0x0000000B, 0xD6000048, 0xEF7BDEFF,
    0x4ECC17BD, 0x0AAAAA31, 0xFF7718FC, 0x0FDFBF7E, 0x0002F922, 0x00300078, 0x000F0300,
    0x0005F062, 0xFDFDC63E, 0x0FDFBF7E, 0x554537CC, 0x7BDC1555, 0x0000005F, 0x00000000,
    0xBDE60000, 0xF77BDEF7, 0x55555902, 0xFD437461, 0xEFDFBF7E, 0xB8003314, 0xC4C003C4,
    0x00006000, 0x00000000, 0x00000000, 0x0C000000, 0x00626000, 0xF5078970, 0xBF7EFDFB,
    0x5903317F, 0x74695555, 0xDEFFEF93, 0xF7BDEF7B, 0xCA6770DE, 0x2AAAAAAA, 0xBFFF324F,
    0xFBF7EFDF, 0xC7F17EFD, 0x0244800F, 0x00000010, 0x00000000, 0x00000000, 0x00010000,
    0x3F801224, 0xC93C003A, 0xDFBFFE73, 0xFDFBF7EF, 0xAC927DC2, 0x002AAAAA, 0x0177BDC4,
    0x00000000, 0xFC800000, 0xDEF7BDCE, 0x13F6207B, 0xC1555546, 0xF7FB7C1B, 0x183EFDFB,
    0xC980078C, 0x00060004, 0x00000000, 0x00000000, 0x00048000, 0x19260016, 0x07E26C00,
    0xB39E0CC0, 0x07DFBF7F, 0xA3109FB1, 0xEFD40AAA, 0xBDEF7BDC, 0x7C617CF7, 0x55554615,
    0x06F7F3C4, 0xBF7EFF7B, 0x2C634DDF, 0xA878806A, 0x0B970124, 0xE1C00000, 0x85163002,
    0xF7BDEF79, 0x640CF0EE, 0x55555555, 0xDFBF507F, 0xFDFBF7EF, 0x00000B7E, 0x00492000,
    0x70006A2C, 0xF7EFF7B0, 0x2F7EFDFB, 0xAA30ABF5, 0x600AAAAA, 0xBDEF7BED, 0x87B78077,
    0xC80AAAA8, 0xEFDF9D49, 0x38584BF7, 0xF0162400, 0xFE36F7BB, 0x5187DEF7, 0xAAAA8955,
    0xDFBF7FA0, 0xFBF7EF87, 0x00000015, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x18000000, 0xBDEF73BF, 0xEF7BDEF7, 0x510AFF1A, 0x05F05555, 0x7EFDF9DF,
    0xEA1E0FBF, 0x00492001, 0x00000004, 0x00000000, 0x00000000, 0x00004000, 0xE1E00249,
    0x217C0019, 0x7EFDFEF6, 0xBFC60FBF, 0x2AAAA8C2, 0xDEE77E30, 0x003DEF7B, 0x91200000,
    0xC2C5E200, 0x7EFDFBFB, 0x8950F3FF, 0x724AAAAA, 0x5F7BDCFD, 0x00000000, 0x00000000,
    0xF7BDE600, 0x5FFF7BDE, 0x55555642, 0xFD42E7CA, 0xEFDFBF7E, 0xC00590FF, 0xC0C0018B,
    0x00020005, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x80000000, 0x01F7BDFF,
    0x00000000, 0x1F7BDFF8, 0xDDF80000, 0xF7BDEF7B, 0x55551806, 0xBF7FA009, 0x0000AFDF,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x7EFF4000, 0xFBE15FBF,
    0x1CBF7EFD, 0xAA895555, 0xDD600AAA, 0x00007F7B, 0xBDEEB000, 0xEFFC003F, 0x7BDEF7BD,
    0x555553EF, 0xFDFDE035, 0x05DFBF7E, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x02600000, 0xDFDEB070, 0x514FB7EF, 0x42355559, 0xF7BDCFCE, 0x00000005,
    0x00000000, 0xE7180000, 0xFE3006DE, 0xFD403561, 0xFA806AC3, 0xF9806AC2, 0xF300D585,
    0xD601AB0D, 0x41006ACB, 0x0FC80036, 0x0B3C5980, 0x02E92F80, 0x12F83710, 0x0388FE40,
    0x1F8CD3C0, 0x1AA1EB00, 0x1EB06F80, 0x1BF04E00, 0xBDEF7BBF, 0x54605EF7, 0xFE802555,
    0x02BF7EFD, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xF7EFDFE8, 0xBF7EFC2B, 0x55472FDF, 0xAAAAA255, 0xEF7BDC62,
    0x7BDEF7BD, 0xA8C037CF, 0xF3C52A21, 0xD77F780F, 0x589BFDF8, 0x00B85800, 0x24000090,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF7BDC000, 0xBDEF7BDE,
    0x6406FFF7, 0x9CA55555, 0xEFDFA87F, 0x27FDFBF7, 0x30F800A3, 0x00001800, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xEF7DAC00, 0x7BDEF7BD, 0x10F741BE,
    0x3C435555, 0xFBC934FF, 0xFB7EFDFB, 0x7C119E25, 0x17B06601, 0x81592006, 0x00045805,
    0x00000000, 0x00000000, 0x60400000, 0x90B11602, 0xE08D6480, 0x6D83300B, 0x7EFF7792,
    0x3C4BFFBF, 0x551887BA, 0xE7F9E295, 0x7BDEF7B8, 0xFEF7BDEF, 0xAAA300DF, 0x7F9C846A,
    0xBF7EFEF0, 0xF1933EDF, 0x07F1A000, 0x00012040, 0x00000001, 0x00000000, 0x00000000,
    0x00080000, 0x5E000604, 0xBF7F786C, 0x5FF7EFDF, 0xAAA303E4, 0x173E52AA, 0x7BDEF77C,
    0x097FFDEF, 0x00000000, 0x00000000, 0x9DF8C000, 0xF7BDEF7B, 0xFE577BDE, 0x5555442B,
    0xCF782FC1, 0x7DFBF7EF, 0x002630F0, 0x060004C1, 0x00000000, 0x00000000, 0x00000000,
    0x304000C0, 0x0630F001, 0xF7B05F00, 0x7DFBF7EF, 0xA30ABE30, 0xFD40AAAA, 0xDEF7BDCE,
    0x0000007B, 0x00000000, 0x58000000, 0xBDEF73BF, 0xFF2BDEF7, 0x5555465D, 0xCEA93955,
    0xBF7EFDFE, 0x0637EFDF, 0x04C4C007, 0x00000090, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xDF9E0000, 0x7BDEF7BD, 0xE78BBDEF, 0xAAAAA8AB, 0xE9A4AAAA, 0xFBF7EFDF,
    0xDFBF7EFD, 0x80099223, 0x19000124, 0x00BC4800, 0x7BDD6288, 0x7CF7BDEF, 0x78800741,
    0x93FF8CFE, 0xC9999999, 0xFFEF8C98, 0xFFFFFFFF, 0x00D8BFFF, 0x58000970, 0x00498000,
    0xBF5B61C0, 0xFBF7EFDF, 0x7FBF7EFD, 0x5554E9C9, 0x46555555, 0x7BDCF01D, 0x00000007,
    0x7E000000, 0xFB0FDEF7, 0x18EF7BDE, 0xAA303555, 0xF7FA2AAA, 0xBFB8BDFB, 0x4BF7EFDF,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x02000000, 0x03858013, 0xECEA48C0,
    0x62953806, 0x177BDC0C, 0x17DEF710, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x482002E0, 0x02543C00, 0xEFF627F0, 0x3EFDFBF7, 0xA888EF98, 0xBA82AAAA,
    0x7D803EF7, 0x0360AEEF, 0x0A29F831, 0x992E3C28, 0x50A99360, 0xC510F160, 0x6C6C1186,
    0x3C288A0A, 0x20A6C0C4, 0x0B878507, 0x14153F8A, 0x2A6C51F8, 0x143108C0, 0x18A8B01B,
    0x2ECD803C, 0xF09E0246, 0x23C00A5C, 0x3F801F8A, 0xF77C0621, 0xEF75801E, 0x80113FCD,
    0x400C4C8B, 0x404C2C32, 0x67822530, 0x833F9305, 0x24917BA4, 0x023A4393, 0xA4186493,
    0x34CFE0C4, 0x49892659, 0xB0691BF8, 0xE4A94830, 0x35892121, 0x607256FE, 0x329CE4F1,
    0x32D92078, 0x870927FD, 0x8A662272, 0x3D218780, 0xA61203C9, 0x7BEC060C, 0xDEFFC03F,
    0x814F0DC7, 0x98C79E95, 0x7E2BE434, 0xBC4C61E8, 0xE97017E1, 0x01E794F0, 0x168E8963,
    0xF5A7403F, 0xBC005FA5, 0x800F3CA2, 0x46001C2A, 0x187002E1, 0x9A74026A, 0x63007437,
    0x7C531E8A, 0x3A1D0DC0, 0x186B03D5, 0xC82FCD13, 0x894F0B97, 0x03986F1F, 0x7BCD4F34,
    0xEFFC036F, 0xC01E0CDF, 0x1C8B0F48, 0x87C7C7C0, 0x192A580F, 0x0E150283, 0x2380E47C,
    0x07C1581E, 0x0A288165, 0x4380F84F, 0x4018C716, 0xF8F17F25, 0x15963E00, 0x886600B1,
    0x440054FA, 0xC0038771, 0x500164A1, 0x3E000F89, 0x7878004C, 0x17160002, 0x00F91C00,
    0x000F28C0, 0x2000F978, 0xBC00254A, 0xDD600FE1, 0xF7BDEF7B, 0xCDEF7BDE, 0xAAAAAAAA,
    0xFDF9E20A, 0xEFDFBF7E, 0x0341BBF7, 0x0133CBC4, 0x007E297E, 0x002FC3CF, 0x0079E3F1,
    0x803F10BE, 0x9002FC59, 0xBC00F3CD, 0xAB007E21, 0x5F2005F8, 0x84E0079E, 0xE0F401FC,
    0xC498C00D, 0xBF7EFDFD, 0xABF7EFDF, 0xAAAAAA20, 0x7E780AAA, 0xFDC82EE7, 0x1DC25655,
    0xD07BFDDE, 0xF2604D69, 0x02008202, 0x00000000, 0x00000000, 0x00B0F002, 0x3DC8346D,
    0xA5601FEA, 0xB3B3C01D, 0x67B6403F, 0x800F8A01, 0x00000004, 0x00000000, 0x28001000,
    0x01A1D002, 0xF6798BE3, 0xEF3A81EF, 0xEF719513, 0x0000000B, 0x00000000, 0x00000000,
    0x00000000, 0xA04EEEF7, 0xE09ED72A, 0xDE23BBF7, 0x743FC409, 0x02C4B100, 0x0000021C,
    0x00000000, 0x70400000, 0x400C2B01, 0xF3007AB4, 0x5404DF8D, 0xF6300EC6, 0xFE202FE8,
    0x42B01631, 0x000B8201, 0x00000000, 0x00000000, 0x6A028700, 0xBF7E0679, 0x0F9E2FFF,
    0x3FB589EA, 0xF77B9D60, 0x1D91BDC0, 0x50FF8C63, 0xF7B51E32, 0xF3EFFF8A, 0x2B74FE39,
    0x7BDFF973, 0xF7FE001F, 0xF78007DE, 0x00001BDE, 0x00000000, 0x78000000, 0xCF00007F,
    0xF3D5FBF7, 0xBEB2FDFB, 0xAAA32AA7, 0x677BCFE2, 0x8A477BDD, 0x00006009, 0x00000000,
    0x00000000, 0x11840000, 0xAEEE2D80, 0xE5FBF7E7, 0xA323115C, 0x7B9F42AA, 0x077BDD67,
    0xF1000000, 0xBDEF7B9E, 0x33FE07F7, 0x01AAAA8C, 0xDFEDF06B, 0xF86BF7EF, 0x0C003CF1,
    0x01810036, 0x00000000, 0x7BDE0000, 0x7F7BDDF0, 0xAA30AA70, 0x7DFAC06A, 0x5FBF7F78,
    0x00000003, 0x00000000, 0x00000000, 0xFDE00000, 0xDFBF7EFD, 0xA8C017EF, 0x712AAAAA,
    0xBC80FDEE, 0x051476F7, 0xC4BCF87C, 0x349E1E03, 0x72460706, 0x7E04F1F0, 0x510CC28C,
    0xE4C0F878, 0xF04C5230, 0x131F84F1, 0x11E512C8, 0x4670E02F, 0xE93C00AA, 0x7C017979,
    0x800631E2, 0x88017819, 0xEFC00F07, 0xF7BDC2DE, 0x03DEEF01, 0x3902EF7B, 0x2318C2C6,
    0x0F7EFF40, 0x815FBF7E, 0xAAA81551, 0x0B7BBF00, 0x0007DEF7, 0x05F7B880, 0x00000000,
    0x005F7B88, 0x88000000, 0x00005F7B, 0xFA000000, 0xBDEF7BDC, 0x2B7CBEF7, 0xAAAAAAA2,
    0xFFF87C8E, 0xEFDFBF7E, 0x63165BF7, 0x00164800, 0x21E004C1, 0x78318027, 0xDEF7BDEF,
    0x3001383D, 0x9109E1FE, 0x8CC49999, 0xFFFFFF97, 0xBB27FFFF, 0xC7E018C2, 0x8C90164C,
    0x7C830260, 0x3C7C07C8, 0x7BDDF063, 0xA7E29DEF, 0xEA93C003, 0x9999995F, 0xFEFC64D4,
    0xFFFFFFFF, 0xF801FC9F, 0x06480131, 0xA0048300, 0xBDEFFC79, 0x4B7BDEF7, 0x555554FC,
    0xFF3D5555, 0x07DEF71C, 0x007F7BFF, 0x33033320, 0xFFBD9133, 0x37FF9EF7, 0xA86BDCC1,
    0x1BBCF1CA, 0xFFCEB1D9, 0x97E7DBF7, 0xD989E5E3, 0x62C6EA01, 0x315C806B, 0xDF630ACC,
    0x537F2F7B, 0xBDF46726, 0x18E0C797, 0x08840B19, 0x0C480181, 0x8000B800, 0x00000000,
    0x061C0000, 0x61086006, 0x88202C64, 0xEF7D19C3, 0x187C8525, 0x597BDEFB, 0x80063986,
    0x601AD96B, 0xD666993C, 0xFEB902AF, 0xDFAC9C3E, 0x3BFEF7B9, 0x7FF8C2E6, 0xF66AAAAB,
    0xBDEE317E, 0x445DDEF7, 0x1F195555, 0x7EFDFBF9, 0xC00C47BF, 0xBDEE7580, 0xA23AA277,
    0xBE7F12AA, 0x4857EFDF, 0x8092401E, 0xFBF7E73F, 0xAB23AA15, 0xAC1A012A, 0xBE07EE40,
    0x1163B8C6, 0xFE6119FB, 0x1EC67F47, 0xF8EF5B73, 0xBE3FE32F, 0x3307A397, 0x7E5F83E6,
    0x17EB53CD, 0xD3B5AEE4, 0xE22ED66F, 0xEDE1C737, 0x0EDE05FC, 0x75805FAC, 0xDFDEFEA0,
    0xFDFBF7EF, 0xEFDFBF7E, 0x55555597, 0xF1555555, 0x7BDEF7BF, 0x000DBDEF, 0x00000000,
    0xDFECEA80, 0xFDFBF7EF, 0xEFDFBF7E, 0xA8C5FBF7, 0xAAAAAAAA, 0x7F302AAA, 0x04DFFEE7,
    0xB9EFFF72, 0xBC86ECF7, 0xED722BF5, 0x7BD6F17A, 0x37F7BDEF, 0x34F52ACE, 0xCD5FDEF3,
    0x015DAF7C, 0x8C54F1CA, 0x94AE503F, 0x1BFBDE60, 0x798FF213, 0x294C6FEF, 0x5CA015FF,
    0x0FE5454F, 0xA9CBDF20, 0xFFB0FF77, 0x7FF91567, 0xD5F5927A, 0xBFFFE30B, 0x1BB3DEE7,
    0xBDEF7BBF, 0xEF7BDEF7, 0x39DF0000, 0xCE739CE7, 0xCF786739, 0x5DDEF7BD, 0x955554D6,
    0xDFCDB3E3, 0xA2DBF7EF, 0x0A443FA6, 0x00000000, 0xF4C00000, 0xADB14887, 0xDBF7EFDF,
    0xAA8CD6A2, 0xE07F1CAA, 0x00000777, 0xBC000000, 0xF7EFDFBF, 0xEFDFBFB8, 0x15555597,
    0xFC555546, 0xECB7BDEF, 0x001DEF7B, 0x00000000, 0x777E0000, 0x00000000, 0xFBFBC000,
    0xDFBF7EFD, 0xFDFBF7EF, 0xAAAAAAB2, 0xE22AAAAA, 0x47EF7BDE, 0x333C5555, 0xAFDFBF7E,
    0xE21C705D, 0xAA1635DE, 0xDFBF1022, 0x0BA4139B, 0xEF7B88B6, 0xAAAA7E9D, 0xBDC61DEA,
    0x55447EF7, 0xDFC8F3C5, 0x0836D7EF, 0xB6DEE73C, 0xAD5462FD, 0xEFF72227, 0x0004D2D7,
    0xFEF7BDD4, 0x6AAAAAA2, 0xEEBEB510, 0x13F5F9FF, 0xF67ACA4F, 0xFBFFF73D, 0xDEFFD61E,
    0xF7BDEF7B, 0x613BA5DE, 0x01720554, 0xF81BF7F7, 0x00018000, 0x0000004C, 0x03C00010,
    0xE0006C00, 0x2BE00029, 0xFFBF1000, 0x6390001E, 0x00000001, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0xEF7BC000, 0x7B9E000D, 0x28D8187F, 0x1DEF7186,
    0x7BF902A2, 0x00000000, 0x71EFCF00, 0xCA30ACDF, 0xF7BDEE7B, 0x4466B2EE, 0x9B3E30D5,
    0x4BB7EFFF, 0x049124D4, 0x00000000, 0xB1600000, 0xEF3730F0, 0x31C877BD, 0xAAAAA7DF,
    0xAA12B5E6, 0xF885D9C0, 0x4DF1B82D, 0xF98BF466, 0xEC6BEF1B, 0xED417F31, 0xABDC9F9A,
    0x163788FE, 0x6CF046BA, 0x19AEC63F, 0xCD37CFDE, 0x9DEBF67F, 0xF5E79763, 0x913FD42D,
    0x05FFF0BB, 0x7B884ED6, 0x77D003EF, 0x663004AA, 0x8015F8CD, 0x6B3000D6, 0x6744000E,
    0x03474003, 0x00F598C0, 0xF50BC740, 0x598FEF2B, 0x8D2A2133, 0x9E0D9D12, 0x3ABDEF7B,
    0xACC6001A, 0x80FF7D87, 0x00CF2F1B, 0xEF266358, 0x6CDE2048, 0xA3A0346A, 0x98C055D1,
    0x01A350F5, 0x0D745E37, 0x18998D60, 0x15E66F75, 0xBDEC366F, 0xD17EDCB7, 0x18318C60,
    0x00FBDEE3, 0x4A89F7BC, 0x93D66300, 0xE37002BF, 0xDE358005, 0xB9BC4004, 0x01A3A000,
    0x007ACC60, 0xCF0BC6E0, 0x6B2FBCAF, 0x695909BC, 0x81737894, 0x7FBDEF75, 0xF7F7E8BF,
    0x7A80BDFB, 0x9AAAA9EA, 0xFEBC740D, 0x5814FEF7, 0x01284DE3, 0x6502E6F9, 0x38CBC742,
    0xA2E2FEF7, 0x78E8A79E, 0x3785BEF7, 0x231AD31A, 0x004DF2B0, 0xF80B9BE4, 0xCFDFBF7E,
    0xAAA02F1B, 0x7BDEE2AA, 0x677E04CF, 0x0D11AAA8, 0x7E239A9E, 0x311EDFBF, 0x9081B3A0,
    0xF7586CE8, 0xD6630766, 0x41C35903, 0xF6FCF06B, 0x1CD66998, 0x36744400, 0xDBF7EFC4,
    0x03474623, 0xC7A23555, 0xBDC407AC, 0xA3799EF7, 0x398E6001, 0x102FB9C4, 0xA00BCD9D,
    0x00B989A3, 0xEBC3D663, 0x62F1B807, 0x98D604CE, 0xF102F2C9, 0x037DE366, 0xA22345F8,
    0xEA7F35EF, 0xF7B107A9, 0x8EAF3D7E, 0x1E318C17, 0xEF710123, 0x0000017D, 0xDEE20000,
    0x000002FB, 0xA80027A0, 0x0CC8001F, 0x0088CC00, 0xCC0569E0, 0x8BF7BDFF, 0xA6F581FC,
    0x203B5AA8, 0xFBF39E5E, 0xE2158075, 0x09E5C007, 0x48001200, 0x190E0016, 0x1F10CC00,
    0xE752F100, 0x7EFDFBF7, 0xAD2FDFBF, 0x55554537, 0x05405555, 0xFF3BF000, 0xC8000E6F,
    0x800FDDE7, 0x3D77BFB3, 0x33C62001, 0x9E002BFB, 0x00DDEF7B, 0x800309FC, 0xD2005262,
    0x0A806CD8, 0x1800C3CF, 0xC00F48DC, 0x00C4B1E6, 0x01490C3C, 0x7F360C23, 0x293261E0,
    0x10C9B360, 0x1E0F1609, 0x1819320A, 0xD80C585C, 0xF7F26C14, 0x0C9AFDFB, 0xD555443C,
    0xDF831140, 0xE2DEF7BD, 0x0C0783CF, 0x38044D8A, 0xF00F060C, 0x600C3CA0, 0x0C600060,
    0xEFF4F900, 0xFDC00FEC, 0x6A000556, 0x37FBFBF6, 0xB35DF780, 0x7B9E0032, 0xFC00DDEF,
    0x62800309, 0xD8D20052, 0xCF0A806C, 0xDC1800C3, 0xE6C00F48, 0x3C00C4B1, 0x2301490C,
    0xE07F360C, 0x60293261, 0x0910C9B3, 0x0A1E0F16, 0x5C181932, 0x14D80C58, 0xFBF7F26C,
    0x3C0C9AFD, 0x40D55544, 0xBDDF8311, 0xCFE2DEF7, 0x8A0C0783, 0x0C38044D, 0xA0F00F06,
    0x60600C3C, 0xDEF73A80, 0xC5F1801F, 0xE403EA58, 0xCBDFF23F, 0xF6F502F3, 0x49F6FD0D,
    0xCC4AD730, 0xDCF012B5, 0xE006EF7B, 0x1400184F, 0xC6900293, 0x78540366, 0xE0C0061E,
    0x36007A46, 0xE006258F, 0x180A4861, 0x03F9B061, 0x0149930F, 0x48864D9B, 0x50F078B0,
    0xE0C0C990, 0xA6C062C2, 0xDFBF9360, 0xE064D7EF, 0x06AAAA21, 0xEEFC188A, 0x7F16F7BD,
    0x50603C1E, 0x61C0226C, 0x07807830, 0x030061E5, 0xBBDF6B03, 0x07BCC47B, 0xAE556756,
    0xA868DE7D, 0x9DFBFFEF, 0x67DBEFFF, 0xB20678C2, 0x0000019E, 0xDEF7B9E0, 0x309FC00D,
    0x05262800, 0x06CD8D20, 0x0C3CF0A8, 0xF48DC180, 0x4B1E6C00, 0x90C3C00C, 0x60C23014,
    0x261E07F3, 0x9B360293, 0xF160910C, 0x9320A1E0, 0xC585C181, 0x26C14D80, 0xAFDFBF7F,
    0x5443C0C9, 0x31140D55, 0xEF7BDDF8, 0x783CFE2D, 0x44D8A0C0, 0xF060C380, 0xC3CA0F00,
    0xE3060600, 0x7FE0FBDE, 0x00000FEF, 0x66606664, 0xFFFF8C26, 0xFFFDF85F, 0xE000002F,
    0x0DDEF7B9, 0x00309FC0, 0x20052628, 0xA806CD8D, 0x800C3CF0, 0x00F48DC1, 0x0C4B1E6C,
    0x1490C3C0, 0xF360C230, 0x93261E07, 0x0C9B3602, 0xE0F16091, 0x819320A1, 0x80C585C1,
    0x7F26C14D, 0xC9AFDFBF, 0x555443C0, 0xF831140D, 0x2DEF7BDD, 0xC0783CFE, 0x8044D8A0,
    0x00F060C3, 0x00C3CA0F, 0x73E80606, 0x8027FDEF, 0x7CEDEE39, 0x00120400, 0x1CC00201,
    0x800B1FE1, 0x00457738, 0xE0050418, 0x46003261, 0xC03F9B18, 0x0050F3C3, 0x12291B9B,
    0x0A2C78B0, 0x2E486488, 0x0F360C50, 0x193267F0, 0x419360C0, 0x0F078781, 0x30304603,
    0x6030F0D8, 0x7F26C0F3, 0x89AFDFBF, 0xAAAA22C4, 0x7E4C8A06, 0x8B7BDEF7, 0x0603C2CB,
    0x70089FC5, 0xC03C50C8, 0x80324783, 0xBDDF8D81, 0xEF7BDEF7, 0x298FF7BD, 0xAAAA306B,
    0xBDFBE90A, 0xEFDFBFBC, 0x000492F7, 0x9200124C, 0x00C10009, 0x00022380, 0x69800252,
    0x00948001, 0x98001C90, 0x97BF7EFC, 0x246BF7F7, 0xAA306AA3, 0xDEE70E06, 0x1FDEEF8F,
    0x90800092, 0x0131E000, 0x48004840, 0x7EFEF00E, 0x093BDFBF, 0x15555460, 0xBDEF77E3,
    0xFF7BDEF7, 0xAAA25FF2, 0x1BCAAAAA, 0xBF7EFF62, 0x7BF7EFDF, 0x7804E8A3, 0x09020050,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x09020000, 0x880141E0, 0x874013A2,
    0xEFDFBFD8, 0x5EFDFBF7, 0xAAA25FE3, 0xF18AAAAA, 0x7BDEF7BB, 0xF07FBDEF, 0x0003FBDC,
    0x006C0003, 0x00300050, 0xDF800054, 0x00737FF9, 0x3F779F20, 0xEF7F6700, 0xC620027A,
    0xF02BFB33, 0xBDEF7BDE, 0xEF7BDEF7, 0xAAAAA80D, 0xBF02AAAA, 0xFBF7EFDF, 0x5FBF7EFD,
    0x00000000, 0x00000000, 0x00000000, 0xF7EFDFBF, 0x500AFDFB, 0x01555555, 0x7BDEF7B8,
    0x000003EF, 0x00000000, 0x00000000, 0xF0000000, 0xBF7EFDFB, 0xFBF7EFDF, 0x55555405,
    0x60015555, 0xFA7C800C, 0x7007F677, 0x400155BF, 0xFF7F7ECD, 0x35DF7806, 0xBDEF032B,
    0xEF7BDEF7, 0x80DEF7BD, 0xAAAAAAAA, 0xFDFBF02A, 0xEFDFBF7E, 0x0005FBF7, 0x00000000,
    0x00000000, 0xFBF00000, 0xDFBF7EFD, 0x555500AF, 0x7B801555, 0x3EF7BDEF, 0x00000000,
    0x00000000, 0x00000000, 0xDFBF0000, 0xFDFBF7EF, 0x405FBF7E, 0x55555555, 0xEF73A815,
    0x2F8C01FD, 0x901F52C6, 0x2F7FC8FF, 0xEDEA0BCF, 0x93EDFA1B, 0xCC4AD730, 0xDEF792B5,
    0xF7BDEF7B, 0x406F7BDE, 0x55555555, 0x7EFDF815, 0xF7EFDFBF, 0x0002FDFB, 0x00000000,
    0x00000000, 0xFDF80000, 0xEFDFBF7E, 0xAAAA8057, 0xBDC00AAA, 0x1F7BDEF7, 0x00000000,
    0x00000000, 0x00000000, 0xEFDF8000, 0x7EFDFBF7, 0xA02FDFBF, 0xAAAAAAAA, 0x7DEF718A,
    0x07F7BFF0, 0x0CCC8000, 0xF8C4CCCC, 0xDF85FFFF, 0x0002FFFF, 0xF7BDEF78, 0xBDEF7BDE,
    0x555406F7, 0x81555555, 0xFBF7EFDF, 0xDFBF7EFD, 0x0000002F, 0x00000000, 0x00000000,
    0xF7EFDF80, 0x057EFDFB, 0xAAAAAAA8, 0xEF7BDC00, 0x0001F7BD, 0x00000000, 0x00000000,
    0x00000000, 0xBF7EFDF8, 0xFBF7EFDF, 0xAAAA02FD, 0xA0AAAAAA, 0xCEFC0002, 0x00039BFF,
    0x01FBBCF9, 0xD77BFB38, 0x9E310013, 0xF7815FD9, 0xBDEF7BDE, 0x6F7BDEF7, 0x44AAAA9C,
    0xBF595555, 0xF857EFDF, 0x2FDFBF7E, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0xEFD60000, 0xBE15FBF7, 0x8BF7EFDF, 0xA8955553,
    0x8C002AAA, 0xFF4F9001, 0xEE00FECE, 0xA8002AB7, 0xDFEFEFD9, 0x66BBEF00, 0xF7BDE065,
    0xBDEF7BDE, 0xA71BDEF7, 0x55512AAA, 0xF7EFD655, 0xDFBE15FB, 0x000BF7EF, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFDFBF580,
    0xF7EF857E, 0x54E2FDFB, 0xAAAA2555, 0xF7B9D40A, 0x17C600FE, 0xC80FA963, 0x97BFE47F,
    0xF6F505E7, 0x49F6FD0D, 0xE6256B98, 0xEF7BC95A, 0x7BDEF7BD, 0x4E37BDEF, 0xAAA25555,
    0xEFDFACAA, 0xBF7C2BF7, 0x0017EFDF, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0xFBF7EB00, 0xEFDF0AFD, 0xA9C5FBF7, 0x55544AAA,
    0xFBDEE315, 0x0FEF7FE0, 0x19990000, 0xF1899998, 0xBF0BFFFF, 0x0005FFFF, 0xEF7BDEF0,
    0x7BDEF7BD, 0x55538DEF, 0x2AAAA895, 0xFDFBF7EB, 0xF7EFDF0A, 0x000005FB, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xC0000000, 0xBF7EFDFA,
    0xFDFBF7C2, 0xAAAA717E, 0xC5555512, 0xF7BDEF7B, 0x7FEF7BDE, 0x2AAAAA01, 0xFBF03765,
    0xFFBF7EFD, 0x7C004AC3, 0xC50007C1, 0x04C18000, 0x00000000, 0xEE267800, 0x89100BBD,
    0x15404AAA, 0x03DFBF7E, 0x00000000, 0x00000000, 0x04C18000, 0xE0006280, 0xF7E07E0B,
    0xFF7EFDFB, 0x55403587, 0xC6ECA555, 0x1EEEF7DA, 0xEAC1EF31, 0xCFB5CAAC, 0xFEFA8D1B,
    0xFFF9DFBF, 0xC6267DBE, 0x0CF59033, 0x7BDC0000, 0xBDCF026F, 0xC0007E0B, 0x1310000A,
    0x1000F800, 0x93C003E4, 0x31F800BC, 0x5C19800A, 0x0254BC00, 0x001F8330, 0xC0015931,
    0x1002621B, 0x3F000F8B, 0x0F900272, 0xC65E001F, 0x05146005, 0xA0004B80, 0x02F00006,
    0x7E0000A8, 0x01CDFFE7, 0xFBBCF900, 0xF7F67001, 0xC40027AE, 0x057F6678, 0x7BDCF788,
    0x3F77BDEF, 0x54619FF0, 0xC3DF1855, 0xF7FB7C1A, 0xC7E29DFB, 0x13407CC7, 0x181B244F,
    0x60261FC9, 0x00000012, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x9300B000,
    0x640FE488, 0x1EB0F7F2, 0x4E8F12F0, 0xEFDFEDF1, 0x7EC68A77, 0x90AAA8C2, 0x318004DF,
    0xBFD3E400, 0xF7003FB3, 0xA800155B, 0xDFEFEFD9, 0xCD77DE00, 0x9EF100CA, 0xF7BDEF7B,
    0x33FE07EE, 0xE30AAA8C, 0x6F83587B, 0x53BF7EFF, 0x0F98F8FC, 0x6489E268, 0xC3F92303,
    0x00024C04, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x16000000, 0xFC911260,
    0x1EFE4C81, 0xE25E03D6, 0xFDBE29D1, 0xD14EFDFB, 0x55184FD8, 0x409BF215, 0x0FEF7B9D,
    0x2C62F8C0, 0x1FF201F5, 0x79E5EFF9, 0x86FB7A81, 0x9824FB7E, 0x5AE6256B, 0x7B9EF109,
    0xEEF7BDEF, 0x8C33FE07, 0x7BE30AAA, 0xFF6F8358, 0xFC53BF7E, 0x680F98F8, 0x036489E2,
    0x04C3F923, 0x0000024C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x60160000,
    0x81FC9112, 0xD61EFE4C, 0xD1E25E03, 0xFBFDBE29, 0xD8D14EFD, 0x1555184F, 0xF6B09BF2,
    0xCC47BBBD, 0x5675607B, 0x8DE7DAE5, 0xBFFEFA86, 0xBEFFF9DF, 0x678C267D, 0x0019EB20,
    0xE7BC4000, 0xBDEF7BDE, 0x0CFF81FB, 0xF8C2AAA3, 0xDBE0D61E, 0x14EFDFBF, 0x03E63E3F,
    0xD922789A, 0x30FE48C0, 0x00009301, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x05800000, 0x7F244498, 0x87BF9320, 0x789780F5, 0xFF6F8A74, 0x3453BF7E, 0x554613F6,
    0xC626FC85, 0xFFC1F7BD, 0x00001FDE, 0xCCC0CCC8, 0xFFFF184C, 0xFFFBF0BF, 0x8800005F,
    0xEF7BDCF7, 0xF03F77BD, 0x5554619F, 0x1AC3DF18, 0xFBF7FB7C, 0xC7C7E29D, 0x4F13407C,
    0xC9181B24, 0x1260261F, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x889300B0, 0xF2640FE4, 0xF01EB0F7, 0xF14E8F12, 0x77EFDFED, 0xC27EC68A, 0xDF90AAA8,
    0xB3C90064, 0xA9FEC61B, 0xC7FA9AB1, 0xBEB1FF10, 0xC4D58BE7, 0xAC5F3C7F, 0x0D18F886,
    0x60F8C5AA, 0x7ADD62FE, 0x76F5EA3E, 0xD4F9EAFC, 0x6AFC4EF3, 0x9BF04DF3, 0x1BBAC000,
    0xBDEF73DE, 0xEBFFDEF7, 0xA8C337E2, 0x0CF194AA, 0xEFF7A29E, 0x1517FBF7, 0xC4016A5C,
    0x29E0D8A4, 0xB41209FC, 0x39580020, 0xABC40016, 0x53C74001, 0x34663000, 0x01336800,
    0x001A2AA0, 0x6B0006B4, 0xF900098C, 0x45F0006A, 0xC6410015, 0xC1E0920B, 0x3F87884A,
    0x0BF01C7F, 0xDE8330F1, 0xFFEFDFBF, 0x222B26F0, 0xD94AAA8C, 0xCEFD788B, 0x7BDEF7BD,
    0xBEF90BFF, 0x0A80000F, 0xFE77E000, 0x90001CDF, 0x001FBBCF, 0x7AEF7F67, 0x678C4002,
    0xEE2057F6, 0x7FE00FBD, 0x00000BEF, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00001000, 0xC51C1800, 0xFC304606, 0x289A0559, 0xFEDF8873,
    0xF8A77EFD, 0xA8C33FE1, 0x0F7E30AA, 0x20018C00, 0xFD9DFE9F, 0xAADFB801, 0x7ECD4000,
    0xF006FF7F, 0x06566BBE, 0x00FBDEE2, 0x00BEF7FE, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x01000000, 0xC1800000, 0x04606C51, 0xA0559FC3,
    0xF8873289, 0x77EFDFED, 0x33FE1F8A, 0xE30AAA8C, 0xEE7500F7, 0xE3003FBD, 0x07D4B18B,
    0xBFE47FC8, 0xEA05E797, 0xEDFA1BED, 0x95AE6093, 0x71256B98, 0xFF007DEF, 0x00005F7B,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00008000,
    0x28E0C000, 0xE1823036, 0x44D02ACF, 0xF6FC4399, 0xC53BF7EF, 0x4619FF0F, 0x7BF18555,
    0x0FBDEE30, 0x00FEF7FE, 0x06664000, 0xF8C26666, 0xDF85FFFF, 0x0002FFFF, 0x07DEF710,
    0x05F7BFF0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x08000000, 0x0C000000, 0x2303628E, 0x02ACFE18, 0xC439944D, 0xBF7EFF6F, 0x9FF0FC53,
    0x18555461, 0xC60007BF, 0xFF4F9000, 0xDC00FECE, 0xA000556F, 0x7FBFBF66, 0x35DF7803,
    0xEE71032B, 0xBDCE01FD, 0xE013C51D, 0xB12F3E09, 0x6349E1C0, 0x0E2887F0, 0x19302A3E,
    0xFC4C1985, 0x47E4C0F8, 0xC7C1310E, 0xC8131F48, 0x1788F1E2, 0x548DF870, 0xB8D27801,
    0x863E00BC, 0xC0CC0031, 0x783C400B, 0x00000000, 0x00000000, 0x00000000, 0xFFC00000,
    0x00001FDE, 0x00000000, 0x7BDEEA00, 0x04BFBDEF, 0xA1555551, 0xFBF3C06E, 0x1DBF7EFD,
    0x97C801B2, 0x28878005, 0x00091200, 0x00100004, 0x3F00240C, 0x933C00A2, 0xBDEF7509,
    0x85E30BF7, 0xAAAAAAA8, 0x7E780FF5, 0xF7EFDFBF, 0x000075FB, 0x00000000, 0x7BFF7E78,
    0xFCF7BDEF, 0x34ABEB0A, 0x7EA22AAA, 0xF7B11F0F, 0xC9BBF7EF, 0x406B264F, 0xB813C47C,
    0x030FE240, 0x85800098, 0x0281800B, 0x00318FC0, 0x0FFBF7EB, 0x554E0179, 0xBDE00332,
    0x017A94F7, 0x02A85F10, 0x001B1440, 0x00000CFE, 0x8000B800, 0x07200062, 0x8C38801B,
    0xF7EFD602, 0xC05C43BB, 0xFF50AAA9, 0x127EEC01, 0xFEFAC600, 0x66001BE7, 0x0133C465,
    0x39FFBFBC, 0x910002FF, 0x7BDFF801, 0xFEF7BDEF, 0x555501BF, 0xF9F29555, 0xEFDFDE07,
    0xFEFDFBF7, 0x2C002C4D, 0x0000005C, 0xB0000240, 0x7BDEF7FE, 0x7660BDEF, 0x5555518A,
    0xFBB8C7E0, 0x7EFDFBF7, 0x0017C910, 0x018003C0, 0x00781800, 0x002F8310, 0xEFEE31F0,
    0x7EFDFBF7, 0xAA29BE60, 0x8000AAAA, 0xD006BEB1, 0x027EEEFB, 0x78E433C0, 0xEE738036,
    0x800F7F7F, 0xEFFC0011, 0x7BDEF7BD, 0xAA80DFFF, 0xF94AAAAA, 0xEFEF03FC, 0x7EFDFBF7,
    0x001626FF, 0x00002E16, 0x00012000, 0xEF7BFF58, 0x305EF7BD, 0xAAA8C53B, 0xDC63F02A,
    0x7EFDFBFD, 0x0BE4883F, 0xC001E000, 0x3C0C0000, 0x17C18800, 0xF718F800, 0x7EFDFBF7,
    0x14DF303F, 0x00555555, 0xFEF7B9D4, 0xF517D400, 0xF500FD46, 0x17E6FD45, 0x7FD603F5,
    0x3BBDA8FF, 0x720318C0, 0xBDFF808C, 0xEF7BDEF7, 0x55501BFF, 0x9F295555, 0xFDFDE07F,
    0xEFDFBF7E, 0xC002C4DF, 0x000005C2, 0x00002400, 0xBDEF7FEB, 0x660BDEF7, 0x555518A7,
    0xBB8C7E05, 0xEFDFBF7F, 0x017C9107, 0x18003C00, 0x07818000, 0x02F83100, 0xFEE31F00,
    0xEFDFBF7E, 0xA29BE607, 0x600AAAAA, 0x0AF77BEE, 0xE781BDCF, 0x9F64631D, 0xAC8199FB,
    0x53F6FBDE, 0xFAC2FBCF, 0xBF7D622D, 0x8000026F, 0xDEF7BDFF, 0x1BFFEF7B, 0x55555550,
    0xE07F9F29, 0xBF7EFDFD, 0xC4DFEFDF, 0x05C2C002, 0x24000000, 0x7FEB0000, 0xDEF7BDEF,
    0x18A7660B, 0x7E055555, 0xBF7FBB8C, 0x9107EFDF, 0x3C00017C, 0x80001800, 0x31000781,
    0x1F0002F8, 0xBF7EFEE3, 0xE607EFDF, 0xAAAAA29B, 0xBDEE300A, 0xFEF7FE0F, 0x66400000,
    0xC2666606, 0x85FFFFF8, 0x02FFFFDF, 0xDEFFC000, 0xF7BDEF7B, 0xAAA80DFF, 0xCF94AAAA,
    0x7EFEF03F, 0xF7EFDFBF, 0x6001626F, 0x000002E1, 0x80001200, 0xDEF7BFF5, 0xB305EF7B,
    0xAAAA8C53, 0xDDC63F02, 0xF7EFDFBF, 0x00BE4883, 0x0C001E00, 0x03C0C000, 0x017C1880,
    0x7F718F80, 0xF7EFDFBF, 0x514DF303, 0x40055555, 0x3FEF7B9F, 0xEF71CC01, 0xC0800F9B,
    0x908C4000, 0xDB9D7800, 0xE75800F9, 0xE04FFBDE, 0xF7BDEF7F, 0x06FFFBDE, 0x55555554,
    0x781FE7CA, 0xEFDFBF7F, 0xB137FBF7, 0x0170B000, 0x09000000, 0xDFFAC000, 0xF7BDEF7B,
    0x4629D982, 0x1F815555, 0xEFDFEEE3, 0x2441FBF7, 0x0F00005F, 0x60000600, 0x0C4001E0,
    0xC7C000BE, 0xEFDFBFB8, 0xF981FBF7, 0xAAAAA8A6, 0xDEF77E02, 0xBDCF7FFB, 0xAA307EF7,
    0xD446722A, 0xF7FA34F0, 0xFFF0FDFB, 0x3C01E5ED, 0x0127E0E4, 0x00024898, 0x4980000C,
    0xF7BDFFA8, 0xA5F24702, 0xBDEEA2AC, 0xF5854F8F, 0xAA88FDFF, 0x1F065EAA, 0xDFBF7E78,
    0x0004816F, 0x60900000, 0xC80F0602, 0xFDE85401, 0xFBFFE1FB, 0x697C5EFD, 0xAAAA2154,
    0xDEFFEF90, 0xF7BDEF7B, 0xCA6770DE, 0x2AAAAAAA, 0xBFFF324F, 0xFBF7EFDF, 0xC7F17EFD,
    0x0244800F, 0x00000010, 0x00000000, 0x00000000, 0x00010000, 0x3F801224, 0xC93C003A,
    0xDFBFFE73, 0xFDFBF7EF, 0xAC927DC2, 0xF22AAAAA, 0xEF7BDFFB, 0x1BDEF7BD, 0x0FEF73C0,
    0xC0001800, 0x000A0006, 0x9FBB000C, 0xDF58C004, 0x60037CFF, 0x133C4656, 0xCFFDFDE0,
    0x440017F9, 0x73BF5006, 0xDEF7BDEF, 0x55F185F3, 0x11555518, 0xEC1BDFCF, 0x7EFDFBFD,
    0xA8B18D37, 0x92A1E201, 0x002E5C04, 0x0B870000, 0xE61458C0, 0xBBDEF7BD, 0x559033C3,
    0xFD555555, 0xBF7EFD41, 0xFBF7EFDF, 0x0000002D, 0xB0012480, 0xC1C001A8, 0xEFDFBFDE,
    0xD4BDFBF7, 0xAAA8C2AF, 0xC6002AAA, 0xF7A01AFA, 0xC004FDDD, 0x3678E433, 0xBFF739C0,
    0x046007BF, 0x7B9DFA80, 0x9EF7BDEF, 0xC2AF8C2F, 0x788AAAA8, 0xEF60DEFE, 0xBBF7EFDF,
    0x0D458C69, 0x24950F10, 0x000172E0, 0x005C3800, 0xEF30A2C6, 0x1DDEF7BD, 0xAAAC819E,
    0x0FEAAAAA, 0xFDFBF7EA, 0x6FDFBF7E, 0x00000001, 0x45800924, 0xF60E000D, 0xBF7EFDFE,
    0x7EA5EFDF, 0x55554615, 0xEE750155, 0xFA803FBD, 0x1FA8DEA2, 0x6FD45F50, 0xB03F517E,
    0xED47FBFE, 0x0C6301DD, 0xF50231C8, 0x7BDEF73B, 0x185F3DEF, 0x5551855F, 0xBDFCF115,
    0xDFBFDEC1, 0x18D377EF, 0x1E201A8B, 0xE5C0492A, 0x70000002, 0x458C00B8, 0xEF7BDE61,
    0x033C3BBD, 0x55555559, 0xEFD41FD5, 0x7EFDFBF7, 0x0002DFBF, 0x12480000, 0x001A8B00,
    0xFBFDEC1C, 0xDFBF7EFD, 0x8C2AFD4B, 0xC2AAAAAA, 0xF83EF7B8, 0x0003FBDF, 0x66066640,
    0xFFFC6266, 0xFFEFC2FF, 0xA800017F, 0xDEF7B9DF, 0xC2F9EF7B, 0xAA8C2AF8, 0xEFE788AA,
    0xFDFEF60D, 0xC69BBF7E, 0xF100D458, 0x2E024950, 0x80000017, 0x2C6005C3, 0x7BDEF30A,
    0x19E1DDEF, 0xAAAAAAC8, 0x7EA0FEAA, 0xF7EFDFBF, 0x0016FDFB, 0x92400000, 0x00D45800,
    0xDFEF60E0, 0xFDFBF7EF, 0x6157EA5E, 0x15555554, 0x0024FDD8, 0xE7FEFAC6, 0x32B3001B,
    0xEF0099E2, 0xBFCE7FEF, 0xC0322000, 0xEF7BDEEF, 0xA8C037BD, 0xFD004AAA, 0x057EFDFB,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFA000000, 0x0AFDFBF7,
    0xFBF7EFDF, 0x4AAAA8E5, 0x00555554, 0x4035F58C, 0x09FBBBEF, 0xF1C86780, 0xEE73806C,
    0xC00F7F7F, 0xBDDF8008, 0x6F7BDEF7, 0x95555180, 0xFBF7FA00, 0x00000AFD, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF7EFF400, 0xDFBE15FB, 0x51CBF7EF,
    0xAAA89555, 0xF73A80AA, 0x7D401FDE, 0x0FD46F51, 0x37EA2FA8, 0x581FA8BF, 0xF6A3FDFF,
    0x063180EE, 0xEFC118E4, 0xBDEF7BDE, 0xAAA8C037, 0xFBFD004A, 0x00057EFD, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF7FA0000, 0xDF0AFDFB, 0xE5FBF7EF,
    0x544AAAA8, 0xF7185555, 0x7BFF07DE, 0xC800007F, 0x4CCCC0CC, 0x5FFFFF8C, 0x2FFFFDF8,
    0xBDDF8000, 0x6F7BDEF7, 0x95555180, 0xFBF7FA00, 0x00000AFD, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0xF7EFF400, 0xDFBE15FB, 0x51CBF7EF, 0xAAA89555,
    0xF7B8C0AA, 0xFDEF7BDE, 0x555109BF, 0x5E729555, 0xF7EFDFC8, 0x8BFEFDFB, 0x187C002C,
    0xAC381800, 0xDEF7BDFF, 0x9D980F7B, 0x0AAAAAB2, 0xEFFFC8FC, 0x3EFDFBF7, 0x02001490,
    0x00000000, 0x00000000, 0x00000000, 0x10000000, 0x01800C00, 0x1A831C4C, 0x88F862E0,
    0xFBF7EFFF, 0x7CCB229D, 0x55554447, 0xF73179C8, 0xE7857BBD, 0xC779E0DE, 0x7EE7D918,
    0x7BD59066, 0x79EA7EDF, 0x22DFAC5F, 0x26FBF7D6, 0xDEF70000, 0xF7BDEF7B, 0x901BFFDE,
    0x72955555, 0xBF7EA1FE, 0x9FF7EFDF, 0xC3E0028C, 0x00006000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x27EEC000, 0xEFAC6001, 0x6001BE7F, 0x133C4656,
    0x9FFBFBC0, 0x10002FF3, 0xEFB58019, 0x7BDEF7BD, 0x1EE837CF, 0x886AAAA2, 0x79261FE7,
    0x6FDFBF7F, 0xC11CC4BF, 0xFF066017, 0x66480185, 0x01160160, 0x00000000, 0x00000000,
    0x10000000, 0x2C458098, 0x23592024, 0x60CC02F8, 0xBFDDE49B, 0x12FFEFDF, 0x4621EE8F,
    0xFE78A555, 0xAFAC6009, 0xBBBEF401, 0x0CF0009F, 0xE00D9E39, 0xDFDFFB9C, 0x00046003,
    0xEF7BDF6B, 0x6F9EF7BD, 0x55443DD0, 0x3FCF10D5, 0x7EFEF24C, 0x897EDFBF, 0xC02F8239,
    0x030BFE0C, 0x02C0CC90, 0x0000022C, 0x00000000, 0x00000000, 0x01302000, 0x4048588B,
    0x05F046B2, 0xC936C198, 0xDFBF7FBB, 0xDD1E25FF, 0x4AAA8C43, 0xD413FCF1, 0x00FEF7B9,
    0x46F517D4, 0x45F500FD, 0xF517E6FD, 0xFF7FD603, 0xC03BBDA8, 0x8C720318, 0xBDEFB580,
    0xCF7BDEF7, 0xA21EE837, 0xE7886AAA, 0x7F79261F, 0xBF6FDFBF, 0x17C11CC4, 0x85FF0660,
    0x60664801, 0x00011601, 0x00000000, 0x00000000, 0x98100000, 0x242C4580, 0xF8235920,
    0x9B60CC02, 0xDFBFDDE4, 0x8F12FFEF, 0x554621EE, 0x89FE78A5, 0x2BDDEFB9, 0x9E06F73C,
    0x7D918C77, 0xB20667EE, 0x4FDBEF7A, 0xEB0BEF3D, 0xFDF588B7, 0x000009BE, 0xDEF7BED6,
    0xDF3DEF7B, 0xAA887BA0, 0x7F9E21AA, 0xFDFDE498, 0x12FDBF7E, 0x805F0473, 0x0617FC19,
    0x05819920, 0x00000458, 0x00000000, 0x00000000, 0x02604000, 0x8090B116, 0x0BE08D64,
    0x926D8330, 0xBF7EFF77, 0xBA3C4BFF, 0x95551887, 0xE327F9E2, 0x7FE0FBDE, 0x00000FEF,
    0x66606664, 0xFFFF8C26, 0xFFFDF85F, 0xAC00002F, 0xF7BDEF7D, 0x41BE7BDE, 0x555510F7,
    0x30FF3C43, 0xFDFBFBC9, 0xE625FB7E, 0x3300BE08, 0x400C2FF8, 0xB00B0332, 0x00000008,
    0x00000000, 0x00000000, 0x2C04C080, 0xC9012162, 0x6017C11A, 0xEF24DB06, 0xFF7EFDFE,
    0x0F747897, 0xC52AAA31, 0xBF584FF3, 0x4E002FDF, 0xEF780155, 0x000001BD, 0xBDEFFC00,
    0xEF7BDEF7, 0xAAAAA3BD, 0x2AAAAAAA, 0xF7EFDFDE, 0xBF7EFDFB, 0x0097EFDF, 0xFAC00000,
    0x70017EFD, 0x80000AAA, 0xE4001567, 0xFC0027AF, 0xDF6B2662, 0xF7BDEF7B, 0x87BA7F4E,
    0xF81AAAA8, 0xDF9C64C2, 0xC46BF7EF, 0x340FC11C, 0xCF0185EC, 0x58158318, 0x00117AD0,
    0x1000AB2B, 0x378006AF, 0x9C80019E, 0xB1D000D1, 0x89E30012, 0xF69E0406, 0xF0B11606,
    0xAC9058AB, 0x1986A411, 0xBF7E136C, 0x12FFEFDF, 0xAAC85E8F, 0x13FCF14A, 0xEF7BDEEA,
    0x8C1BE7BD, 0xDD8001A9, 0xAC60024F, 0x01BE7FEF, 0x9E232B30, 0xFEFEF009, 0x000BFCE7,
    0x7BDC0322, 0xDEF71017, 0x00000017, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x2002E000, 0x543C0048, 0xF627F002, 0xFDFBF7EF, 0x88EF983E, 0x02AAAAA8, 0x06BEB180,
    0x3F777DE8, 0x390CF001, 0xCE700D9E, 0x01EFEFFD, 0xEF700118, 0x7BDC405D, 0x0000005F,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x800B8000, 0x50F00120, 0xD89FC009,
    0xF7EFDFBF, 0x23BE60FB, 0x0AAAAAA2, 0xF7BDCEA0, 0xD45F5007, 0xEA03F51B, 0x2FCDFA8B,
    0x7FD607EA, 0x3BBDA8FF, 0x39018C60, 0x5DEF7046, 0x5F7BDC40, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x20800B80, 0x0950F001, 0xBFD89FC0, 0xFBF7EFDF,
    0xA223BE60, 0x8C0AAAAA, 0xFF83EF7B, 0x00003FBD, 0x66606664, 0xFFFFC626, 0xFFFEFC2F,
    0xBDC00017, 0xEF710177, 0x0000017D, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x002E0000, 0x43C00482, 0x627F0025, 0xDFBF7EFF, 0x8EF983EF, 0x2AAAAA88, 0xD7D63000,
    0xBBBEF400, 0x19E0009F, 0x801B3C72, 0x7F7FEE73, 0x0023000F, 0x036F7BCC, 0x0CDFEFFC,
    0x0F48C01E, 0xC7C01C8B, 0x580F87C7, 0x0283192A, 0xE47C0E15, 0x581E2380, 0x816507C1,
    0xF84F0A28, 0xC7164380, 0x7F254018, 0x3E00F8F1, 0x00B11596, 0x54FA8866, 0x87714400,
    0x64A1C003, 0x0F895001, 0x004C3E00, 0x00027878, 0x1C001716, 0x28C000F9, 0xF978000F,
    0x254A2000, 0x0FE1BC00, 0x1F7BDC60, 0x00000000, 0x00000000, 0xEF77C000, 0xFFDEF7BD,
    0x5554601B, 0x0FF3908D, 0xF7EFDFDE, 0x1E3267DB, 0x00FE3400, 0x20002408, 0x00000000,
    0x00000000, 0x00000000, 0x80010000, 0xC4C000C0, 0xFBF7F786, 0x26FF7EFD, 0x5555181F,
    0xE0B9F295, 0x7BDEF7BB, 0x004BFFEF, 0x00000000, 0x00000000, 0xEF7B8C00, 0x3FBDFF83,
    0x66400000, 0x82666606, 0x0BFFFFF1, 0x05FFFFBF, 0xEF798000, 0xFDFF806D, 0x1803C19B,
    0x039161E9, 0xF0F8F8F8, 0x63254B01, 0x81C2A050, 0xC4701C8F, 0xA0F82B03, 0xE145102C,
    0xC8701F09, 0xA80318E2, 0x1F1E2FE4, 0x22B2C7C0, 0x510CC016, 0x28800A9F, 0x380070EE,
    0x2A002C94, 0x87C001F1, 0x4F0F0009, 0x02E2C000, 0x001F2380, 0x0001E518, 0x44001F2F,
    0x378004A9, 0x000001FC
EW_END_OF_FONT_RES( ApplicationNumbersM )

/* Table with links to derived variants of the font resource : 'Application::NumbersM' */
EW_RES_WITHOUT_VARIANTS( ApplicationNumbersM )

/* Font resource : 'Application::NumbersP' */
EW_DEFINE_FONT_RES( ApplicationNumbersP, 22, 6, 0, 16, 0x0016, 0x00BE )
  EW_GLYPH( 0x0016, 0, -22, 14, 27, 14, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 14, 0x000003C7 ),               /* ' ' */
  EW_GLYPH( 0x0021, 5, -19, 4, 19, 14, 0x000003C7 ),            /* '!' */
  EW_GLYPH( 0x0022, 3, -20, 8, 6, 14, 0x00000459 ),             /* '"' */
  EW_GLYPH( 0x0023, 1, -19, 12, 19, 14, 0x000004A2 ),           /* '#' */
  EW_GLYPH( 0x0024, 0, -19, 14, 19, 14, 0x000006A4 ),           /* '$' */
  EW_GLYPH( 0x0025, 0, -19, 14, 19, 14, 0x000009A7 ),           /* '%' */
  EW_GLYPH( 0x0026, 0, -19, 14, 19, 14, 0x00000C8F ),           /* '&' */
  EW_GLYPH( 0x0027, 5, -20, 4, 6, 14, 0x00000F29 ),             /* ''' */
  EW_GLYPH( 0x0028, 3, -22, 8, 28, 14, 0x00000F4F ),            /* '(' */
  EW_GLYPH( 0x0029, 3, -22, 8, 28, 14, 0x000010EE ),            /* ')' */
  EW_GLYPH( 0x002A, 2, -19, 10, 11, 14, 0x00001293 ),           /* '*' */
  EW_GLYPH( 0x002B, 1, -15, 12, 10, 14, 0x00001418 ),           /* '+' */
  EW_GLYPH( 0x002C, 5, -3, 4, 7, 14, 0x00001524 ),              /* ',' */
  EW_GLYPH( 0x002D, 1, -10, 12, 2, 14, 0x0000156C ),            /* '-' */
  EW_GLYPH( 0x002E, 5, -3, 4, 3, 14, 0x000015EE ),              /* '.' */
  EW_GLYPH( 0x002F, 1, -19, 13, 19, 14, 0x00001619 ),           /* '/' */
  EW_GLYPH( 0x0030, 0, -19, 14, 19, 14, 0x00001803 ),           /* '0' */
  EW_GLYPH( 0x0031, 1, -19, 13, 19, 14, 0x00001ABF ),           /* '1' */
  EW_GLYPH( 0x0032, 0, -19, 14, 19, 14, 0x00001C4F ),           /* '2' */
  EW_GLYPH( 0x0033, 0, -19, 14, 19, 14, 0x00001EF0 ),           /* '3' */
  EW_GLYPH( 0x0034, 0, -19, 14, 19, 14, 0x00002199 ),           /* '4' */
  EW_GLYPH( 0x0035, 0, -19, 14, 19, 14, 0x00002407 ),           /* '5' */
  EW_GLYPH( 0x0036, 0, -19, 14, 19, 14, 0x000026AB ),           /* '6' */
  EW_GLYPH( 0x0037, 0, -19, 14, 19, 14, 0x00002926 ),           /* '7' */
  EW_GLYPH( 0x0038, 0, -19, 14, 19, 14, 0x00002B87 ),           /* '8' */
  EW_GLYPH( 0x0039, 0, -19, 14, 19, 14, 0x00002E7C ),           /* '9' */
  EW_GLYPH( 0x003A, 5, -11, 4, 11, 14, 0x0000310A ),            /* ':' */
  EW_GLYPH( 0x003B, 5, -11, 4, 15, 14, 0x00003192 ),            /* ';' */
  EW_GLYPH( 0x003C, 2, -17, 10, 15, 14, 0x00003232 ),           /* '<' */
  EW_GLYPH( 0x003D, 2, -14, 10, 7, 14, 0x000033B8 ),            /* '=' */
  EW_GLYPH( 0x003E, 2, -17, 10, 15, 14, 0x000034DA ),           /* '>' */
  EW_GLYPH( 0x003F, 1, -19, 12, 19, 14, 0x00003663 ),           /* '?' */
  EW_GLYPH( 0x0040, 1, -15, 12, 19, 14, 0x0000389A ),           /* '@' */
  EW_GLYPH( 0x0041, 0, -19, 14, 19, 14, 0x00003B07 ),           /* 'A' */
  EW_GLYPH( 0x0042, 0, -19, 14, 19, 14, 0x00003D92 ),           /* 'B' */
  EW_GLYPH( 0x0043, 1, -19, 12, 19, 14, 0x00004027 ),           /* 'C' */
  EW_GLYPH( 0x0044, 0, -19, 14, 19, 14, 0x0000421D ),           /* 'D' */
  EW_GLYPH( 0x0045, 1, -19, 12, 19, 14, 0x00004411 ),           /* 'E' */
  EW_GLYPH( 0x0046, 1, -19, 12, 19, 14, 0x00004625 ),           /* 'F' */
  EW_GLYPH( 0x0047, 1, -19, 12, 19, 14, 0x000047E8 ),           /* 'G' */
  EW_GLYPH( 0x0048, 0, -19, 14, 19, 14, 0x00004A07 ),           /* 'H' */
  EW_GLYPH( 0x0049, 1, -19, 12, 19, 14, 0x00004B98 ),           /* 'I' */
  EW_GLYPH( 0x004A, 1, -19, 12, 19, 14, 0x00004D62 ),           /* 'J' */
  EW_GLYPH( 0x004B, 0, -19, 14, 19, 14, 0x00004F07 ),           /* 'K' */
  EW_GLYPH( 0x004C, 0, -19, 14, 19, 14, 0x00005122 ),           /* 'L' */
  EW_GLYPH( 0x004D, 0, -19, 14, 19, 14, 0x0000528F ),           /* 'M' */
  EW_GLYPH( 0x004E, 0, -19, 14, 19, 14, 0x000054B6 ),           /* 'N' */
  EW_GLYPH( 0x004F, 0, -19, 14, 19, 14, 0x00005691 ),           /* 'O' */
  EW_GLYPH( 0x0050, 0, -19, 14, 19, 14, 0x000058D0 ),           /* 'P' */
  EW_GLYPH( 0x0051, 0, -19, 14, 22, 14, 0x00005AE8 ),           /* 'Q' */
  EW_GLYPH( 0x0052, 0, -19, 14, 19, 14, 0x00005D94 ),           /* 'R' */
  EW_GLYPH( 0x0053, 0, -19, 14, 19, 14, 0x00005FBB ),           /* 'S' */
  EW_GLYPH( 0x0054, 1, -19, 12, 19, 14, 0x00006273 ),           /* 'T' */
  EW_GLYPH( 0x0055, 0, -19, 14, 19, 14, 0x000063E1 ),           /* 'U' */
  EW_GLYPH( 0x0056, 0, -19, 14, 19, 14, 0x0000658C ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -19, 14, 19, 14, 0x000067F9 ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -19, 14, 19, 14, 0x00006A93 ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -19, 14, 19, 14, 0x00006D38 ),           /* 'Y' */
  EW_GLYPH( 0x005A, 0, -19, 14, 19, 14, 0x00006F56 ),           /* 'Z' */
  EW_GLYPH( 0x005B, 3, -22, 8, 28, 14, 0x000071F8 ),            /* '[' */
  EW_GLYPH( 0x005C, 1, -19, 13, 19, 14, 0x00007362 ),           /* '\' */
  EW_GLYPH( 0x005D, 3, -22, 8, 28, 14, 0x0000753E ),            /* ']' */
  EW_GLYPH( 0x005E, 0, -20, 14, 9, 14, 0x000076A8 ),            /* '^' */
  EW_GLYPH( 0x005F, 0, 4, 15, 2, 14, 0x00007800 ),              /* '_' */
  EW_GLYPH( 0x0060, 3, -19, 6, 4, 14, 0x0000789F ),             /* '`' */
  EW_GLYPH( 0x0061, 0, -15, 14, 15, 14, 0x00007909 ),           /* 'a' */
  EW_GLYPH( 0x0062, 0, -20, 14, 20, 14, 0x00007B4A ),           /* 'b' */
  EW_GLYPH( 0x0063, 1, -15, 12, 15, 14, 0x00007D3F ),           /* 'c' */
  EW_GLYPH( 0x0064, 0, -20, 14, 20, 14, 0x00007EFB ),           /* 'd' */
  EW_GLYPH( 0x0065, 0, -15, 14, 15, 14, 0x000080F9 ),           /* 'e' */
  EW_GLYPH( 0x0066, 1, -20, 12, 20, 14, 0x00008344 ),           /* 'f' */
  EW_GLYPH( 0x0067, 0, -15, 14, 21, 14, 0x0000850C ),           /* 'g' */
  EW_GLYPH( 0x0068, 0, -20, 14, 20, 14, 0x00008790 ),           /* 'h' */
  EW_GLYPH( 0x0069, 1, -20, 12, 20, 14, 0x0000892B ),           /* 'i' */
  EW_GLYPH( 0x006A, 2, -20, 10, 26, 14, 0x00008AFD ),           /* 'j' */
  EW_GLYPH( 0x006B, 0, -20, 14, 20, 14, 0x00008CF7 ),           /* 'k' */
  EW_GLYPH( 0x006C, 1, -20, 12, 20, 14, 0x00008F05 ),           /* 'l' */
  EW_GLYPH( 0x006D, 0, -15, 14, 15, 14, 0x0000909D ),           /* 'm' */
  EW_GLYPH( 0x006E, 0, -15, 14, 15, 14, 0x00009200 ),           /* 'n' */
  EW_GLYPH( 0x006F, 0, -15, 14, 15, 14, 0x0000935C ),           /* 'o' */
  EW_GLYPH( 0x0070, 0, -15, 14, 21, 14, 0x00009552 ),           /* 'p' */
  EW_GLYPH( 0x0071, 0, -15, 14, 21, 14, 0x00009791 ),           /* 'q' */
  EW_GLYPH( 0x0072, 1, -15, 12, 15, 14, 0x000099B8 ),           /* 'r' */
  EW_GLYPH( 0x0073, 0, -15, 14, 15, 14, 0x00009B05 ),           /* 's' */
  EW_GLYPH( 0x0074, 1, -19, 12, 19, 14, 0x00009D90 ),           /* 't' */
  EW_GLYPH( 0x0075, 0, -15, 14, 15, 14, 0x00009F34 ),           /* 'u' */
  EW_GLYPH( 0x0076, 0, -15, 14, 15, 14, 0x0000A07E ),           /* 'v' */
  EW_GLYPH( 0x0077, 0, -15, 14, 15, 14, 0x0000A272 ),           /* 'w' */
  EW_GLYPH( 0x0078, 0, -15, 14, 15, 14, 0x0000A4B7 ),           /* 'x' */
  EW_GLYPH( 0x0079, 0, -15, 14, 21, 14, 0x0000A6FA ),           /* 'y' */
  EW_GLYPH( 0x007A, 1, -15, 12, 15, 14, 0x0000A997 ),           /* 'z' */
  EW_GLYPH( 0x007B, 2, -22, 10, 28, 14, 0x0000ABC0 ),           /* '{' */
  EW_GLYPH( 0x007C, 5, -22, 4, 28, 14, 0x0000ADDB ),            /* '|' */
  EW_GLYPH( 0x007D, 2, -22, 10, 28, 14, 0x0000AE59 ),           /* '}' */
  EW_GLYPH( 0x007E, 2, -12, 10, 4, 14, 0x0000B06D ),            /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 14, 0x0000B120 ),
  EW_GLYPH( 0x00A1, 5, -13, 4, 19, 14, 0x0000B120 ),
  EW_GLYPH( 0x00A2, 2, -19, 10, 19, 14, 0x0000B1B5 ),
  EW_GLYPH( 0x00A3, 1, -19, 12, 19, 14, 0x0000B364 ),
  EW_GLYPH( 0x00A5, 0, -19, 14, 19, 14, 0x0000B562 ),
  EW_GLYPH( 0x00A6, 5, -22, 4, 27, 14, 0x0000B83A ),
  EW_GLYPH( 0x00A7, 1, -19, 12, 22, 14, 0x0000B8D3 ),
  EW_GLYPH( 0x00A8, 2, -19, 10, 3, 14, 0x0000BC06 ),
  EW_GLYPH( 0x00A9, 0, -20, 14, 21, 14, 0x0000BC69 ),
  EW_GLYPH( 0x00AA, 2, -19, 10, 11, 14, 0x0000BFB9 ),
  EW_GLYPH( 0x00AB, 2, -14, 10, 11, 14, 0x0000C114 ),
  EW_GLYPH( 0x00AC, 1, -12, 12, 6, 14, 0x0000C29D ),
  EW_GLYPH( 0x00AD, 1, -10, 12, 2, 14, 0x0000C36D ),
  EW_GLYPH( 0x00AE, 1, -20, 12, 14, 14, 0x0000C3EF ),
  EW_GLYPH( 0x00AF, 1, -19, 12, 2, 14, 0x0000C698 ),
  EW_GLYPH( 0x00B0, 2, -20, 10, 11, 14, 0x0000C706 ),
  EW_GLYPH( 0x00B1, 1, -15, 12, 15, 14, 0x0000C83D ),
  EW_GLYPH( 0x00B2, 4, -19, 6, 10, 14, 0x0000C9F1 ),
  EW_GLYPH( 0x00B3, 4, -19, 6, 10, 14, 0x0000CAE2 ),
  EW_GLYPH( 0x00B4, 5, -19, 6, 4, 14, 0x0000CBDC ),
  EW_GLYPH( 0x00B6, 0, -19, 14, 25, 14, 0x0000CC40 ),
  EW_GLYPH( 0x00B7, 5, -11, 4, 3, 14, 0x0000CE44 ),
  EW_GLYPH( 0x00B8, 5, 1, 4, 5, 14, 0x0000CE6F ),
  EW_GLYPH( 0x00B9, 4, -19, 6, 10, 14, 0x0000CEA8 ),
  EW_GLYPH( 0x00BA, 2, -19, 10, 11, 14, 0x0000CF36 ),
  EW_GLYPH( 0x00BB, 2, -14, 10, 11, 14, 0x0000D064 ),
  EW_GLYPH( 0x00BC, 0, -19, 14, 19, 14, 0x0000D1F4 ),
  EW_GLYPH( 0x00BD, 0, -19, 14, 19, 14, 0x0000D4CC ),
  EW_GLYPH( 0x00BE, 0, -19, 14, 19, 14, 0x0000D7C7 ),
  EW_GLYPH( 0x00BF, 1, -13, 12, 19, 14, 0x0000DB07 ),
  EW_GLYPH( 0x00C0, 0, -22, 14, 23, 14, 0x0000DD1B ),
  EW_GLYPH( 0x00C1, 0, -22, 14, 23, 14, 0x0000E03E ),
  EW_GLYPH( 0x00C2, 0, -22, 14, 22, 14, 0x0000E362 ),
  EW_GLYPH( 0x00C3, 0, -22, 14, 22, 14, 0x0000E689 ),
  EW_GLYPH( 0x00C4, 0, -22, 14, 22, 14, 0x0000E9BB ),
  EW_GLYPH( 0x00C5, 0, -22, 14, 22, 14, 0x0000ECC1 ),
  EW_GLYPH( 0x00C6, 0, -19, 14, 19, 14, 0x0000EFB8 ),
  EW_GLYPH( 0x00C7, 1, -19, 12, 25, 14, 0x0000F23A ),
  EW_GLYPH( 0x00C8, 1, -22, 12, 23, 14, 0x0000F4C8 ),
  EW_GLYPH( 0x00C9, 1, -22, 12, 23, 14, 0x0000F76C ),
  EW_GLYPH( 0x00CA, 1, -22, 12, 22, 14, 0x0000FA11 ),
  EW_GLYPH( 0x00CB, 1, -22, 12, 22, 14, 0x0000FCB1 ),
  EW_GLYPH( 0x00CC, 1, -22, 12, 23, 14, 0x0000FF2E ),
  EW_GLYPH( 0x00CD, 1, -22, 12, 23, 14, 0x00010188 ),
  EW_GLYPH( 0x00CE, 1, -22, 12, 22, 14, 0x000103E3 ),
  EW_GLYPH( 0x00CF, 1, -22, 12, 22, 14, 0x00010639 ),
  EW_GLYPH( 0x00D0, 0, -19, 14, 19, 14, 0x0001086C ),
  EW_GLYPH( 0x00D1, 0, -22, 14, 22, 14, 0x00010AAA ),
  EW_GLYPH( 0x00D2, 0, -22, 14, 23, 14, 0x00010D33 ),
  EW_GLYPH( 0x00D3, 0, -22, 14, 23, 14, 0x0001100A ),
  EW_GLYPH( 0x00D4, 0, -22, 14, 22, 14, 0x000112E2 ),
  EW_GLYPH( 0x00D5, 0, -22, 14, 22, 14, 0x000115AD ),
  EW_GLYPH( 0x00D6, 0, -22, 14, 22, 14, 0x0001188C ),
  EW_GLYPH( 0x00D7, 2, -15, 10, 9, 14, 0x00011B34 ),
  EW_GLYPH( 0x00D8, 0, -20, 14, 22, 14, 0x00011C78 ),
  EW_GLYPH( 0x00D9, 0, -22, 14, 23, 14, 0x00011FA9 ),
  EW_GLYPH( 0x00DA, 0, -22, 14, 23, 14, 0x000121EF ),
  EW_GLYPH( 0x00DB, 0, -22, 14, 22, 14, 0x00012436 ),
  EW_GLYPH( 0x00DC, 0, -22, 14, 22, 14, 0x0001267E ),
  EW_GLYPH( 0x00DD, 0, -22, 14, 23, 14, 0x0001289B ),
  EW_GLYPH( 0x00DE, 0, -19, 14, 19, 14, 0x00012B55 ),
  EW_GLYPH( 0x00DF, 0, -20, 14, 20, 14, 0x00012D6C ),
  EW_GLYPH( 0x00E0, 0, -20, 14, 20, 14, 0x00013008 ),
  EW_GLYPH( 0x00E1, 0, -20, 14, 20, 14, 0x000132E4 ),
  EW_GLYPH( 0x00E2, 0, -20, 14, 20, 14, 0x000135BF ),
  EW_GLYPH( 0x00E3, 0, -20, 14, 20, 14, 0x000138D0 ),
  EW_GLYPH( 0x00E4, 0, -20, 14, 20, 14, 0x00013BEC ),
  EW_GLYPH( 0x00E5, 0, -21, 14, 21, 14, 0x00013ECA ),
  EW_GLYPH( 0x00E6, 0, -15, 14, 15, 14, 0x000141E4 ),
  EW_GLYPH( 0x00E7, 1, -15, 12, 21, 14, 0x0001446A ),
  EW_GLYPH( 0x00E8, 0, -20, 14, 20, 14, 0x000146BF ),
  EW_GLYPH( 0x00E9, 0, -20, 14, 20, 14, 0x000149A3 ),
  EW_GLYPH( 0x00EA, 0, -20, 14, 20, 14, 0x00014C86 ),
  EW_GLYPH( 0x00EB, 0, -20, 14, 20, 14, 0x00014F9F ),
  EW_GLYPH( 0x00EC, 1, -20, 12, 20, 14, 0x00015285 ),
  EW_GLYPH( 0x00ED, 1, -20, 12, 20, 14, 0x00015474 ),
  EW_GLYPH( 0x00EE, 1, -20, 12, 20, 14, 0x00015662 ),
  EW_GLYPH( 0x00EF, 1, -20, 12, 20, 14, 0x00015886 ),
  EW_GLYPH( 0x00F0, 0, -20, 14, 20, 14, 0x00015A77 ),
  EW_GLYPH( 0x00F1, 0, -20, 14, 20, 14, 0x00015D08 ),
  EW_GLYPH( 0x00F2, 0, -20, 14, 20, 14, 0x00015F3F ),
  EW_GLYPH( 0x00F3, 0, -20, 14, 20, 14, 0x000161D0 ),
  EW_GLYPH( 0x00F4, 0, -20, 14, 20, 14, 0x00016460 ),
  EW_GLYPH( 0x00F5, 0, -20, 14, 20, 14, 0x00016726 ),
  EW_GLYPH( 0x00F6, 0, -20, 14, 20, 14, 0x000169F7 ),
  EW_GLYPH( 0x00F7, 1, -16, 12, 11, 14, 0x00016C8A ),
  EW_GLYPH( 0x00F8, 0, -17, 14, 19, 14, 0x00016DF1 ),
  EW_GLYPH( 0x00F9, 0, -20, 14, 20, 14, 0x000170C1 ),
  EW_GLYPH( 0x00FA, 0, -20, 14, 20, 14, 0x000172A6 ),
  EW_GLYPH( 0x00FB, 0, -20, 14, 20, 14, 0x0001748A ),
  EW_GLYPH( 0x00FC, 0, -20, 14, 20, 14, 0x000176A4 ),
  EW_GLYPH( 0x00FD, 0, -20, 14, 26, 14, 0x0001788B ),
  EW_GLYPH( 0x00FE, 0, -20, 14, 26, 14, 0x00017BC2 ),
  EW_GLYPH( 0x00FF, 0, -20, 14, 26, 14, 0x00017E4D ),

  EW_FONT_PIXEL( ApplicationNumbersP, 0x00018187 )              /* ratio 57.80 % */
    0xAD6B59F2, 0x299AD6B5, 0xDDDDD7F6, 0x51EEFDDD, 0x00144001, 0xBBBBBB20, 0xB5CC07BB,
    0xAD6B5AD6, 0xFFF9E0FD, 0xBFFFFFFF, 0xCCC892F9, 0x0F0F5CCC, 0x003F9700, 0x01820001,
    0xC402E5C0, 0xEC60587C, 0x80BE5E7B, 0x6B5C8FF8, 0xC8AC07ED, 0x3803DDDD, 0xF5C0017E,
    0x008E6000, 0xC004EC40, 0xF0006733, 0x0001DF7B, 0xDF7BF000, 0x6733C001, 0x8C002600,
    0xCE739BF1, 0xF39CE739, 0x0BEF75AD, 0x00000000, 0xDEEB0000, 0xFFFFDE17, 0xE2139997,
    0x006F70DE, 0x00000000, 0xB887DCF0, 0x0000002F, 0x00000000, 0x77CFDCF0, 0x33EF31EF,
    0x1F39A967, 0x1EF1CE63, 0x9E7F7DE7, 0x00000077, 0x8F78C000, 0xCF3FBEF3, 0x352CE63B,
    0xF9CC63E7, 0xEF77CFDC, 0x0003EF31, 0x00000000, 0x005EFC00, 0xF7E9E000, 0xBEFBCF9D,
    0x6B7D60EF, 0xCE731CCE, 0xDC6BC539, 0x7BDEF35B, 0x01F84F1F, 0xC1002410, 0x3C27801F,
    0x20444619, 0x7A9FFC96, 0x78A739CE, 0xF178801F, 0xDE6B7BDD, 0x7000725B, 0x122C0099,
    0x70024580, 0xDEF7FE59, 0xF2DEF35B, 0x39CE67A4, 0xDF39CC73, 0xF7DF7E8F, 0xBEFBCF9D,
    0xEF7BBF13, 0xA8C7FD87, 0x7219E39A, 0xFBEE983C, 0x2C0FCA9A, 0x4001CFF0, 0xE58003D4,
    0xFC434C07, 0xDDF2C073, 0xC8155637, 0x9BEB9ADF, 0xEDFAA03E, 0x8800313A, 0xA8011167,
    0x39EEFFF8, 0xAAC4E07F, 0xF01F3BB9, 0x0328F62C, 0xC040D89E, 0x5500078D, 0x5713C080,
    0x7036DF78, 0x98CF91E3, 0xBEC61E35, 0x03FBDEF7, 0x399E1FF9, 0xE85F06E7, 0x05DF7DEF,
    0xC840098A, 0x58000000, 0xBC380132, 0x3AA6A001, 0xEF7BDEF7, 0x99E2510D, 0xE939A873,
    0x3EFBDFD4, 0x1286FBCE, 0x00348013, 0x00100008, 0x400190C0, 0x86F002F1, 0xE3EFBDF5,
    0xFF886FBC, 0xD439CCF0, 0x00DEE29C, 0xF7A20000, 0x2EE37FBD, 0x8FF13E73, 0xCF6FBF67,
    0x196C1F88, 0x000002C0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x4E4F8269,
    0xFBBC6F18, 0xCBDCDB7D, 0xDEEFCF9A, 0xD39EC1DD, 0xDF7AC3BA, 0xE03FC4FD, 0x3C42F117,
    0x00026006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x9E134C02, 0xEEFBD674,
    0x73DADE2F, 0xBF027B9A, 0x1CFF1895, 0xE7F893D5, 0xD111592D, 0xFBBE2D91, 0x89E30B5A,
    0x754267DA, 0xACD6043F, 0x151FFF7F, 0x51AD4763, 0xA6415B4E, 0xE30FBF35, 0xE00F4FFF,
    0x000007FF, 0xEF100000, 0xBC63BEFB, 0x3986FBEF, 0x73988CE7, 0xBDEF714E, 0x1BDEF799,
    0x00000000, 0x87F7BBF0, 0x24C48381, 0xFBEFD492, 0xBEFBEFBE, 0x9CCFDBEF, 0xE739CE73,
    0xFFFCCF9C, 0x0003323B, 0x7400D9E4, 0xA9E3005C, 0x8035A001, 0xE80067AA, 0x58CF0068,
    0x1F8DE009, 0x02663980, 0x600BC5F8, 0xDE001BE5, 0x34560058, 0x02737880, 0x2007E378,
    0x7E0098E7, 0x39C802F1, 0x01AD001E, 0x7BDFF9E0, 0x07FFBDEF, 0x739CCBE3, 0x168AFC96,
    0x81DF7DF7, 0x23C4ACA6, 0x462E088D, 0x064C8FC6, 0xB0006B3E, 0x227801FC, 0x01EB800B,
    0x800FCA20, 0xF0006315, 0xCB2003F7, 0x12A3C003, 0x0FE7C608, 0x858CBE48, 0x150CA93F,
    0x634234C4, 0xC3BBEFBE, 0x98D2F8CB, 0x0F7E6673, 0xDEF7BDCF, 0x2CE7301F, 0x0F7DE300,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF0000000, 0x987BEFBE,
    0x31BEFBEF, 0xCE459CE7, 0xBDC62739, 0xFF7BDEF7, 0x9CE73105, 0x06FC89F3, 0xF7DF7DF2,
    0x00345AFD, 0x1E001433, 0x00040012, 0x49E00193, 0xBEFD9885, 0x12E3FBEF, 0xCE735DFB,
    0x9D15F919, 0xBDEF7B9E, 0x068B07FF, 0x00132110, 0x00000000, 0xC6000000, 0xFBEFBEFB,
    0x889BEFBE, 0x739CE739, 0xF7FE19CE, 0xBDEF7BDE, 0xCE6781BF, 0xF52CE739, 0xDF7DFA0F,
    0x537F7DF7, 0x147C00BC, 0x00048300, 0x80120800, 0xFBC40FC9, 0x0B1B5FBE, 0x4C3E7398,
    0x67BDEE20, 0x71001E78, 0xF08C0039, 0x00886000, 0x8A440000, 0xC4B2F000, 0xFBEFBEFB,
    0xCD12DFBE, 0x39CE739C, 0x801FE31F, 0x01DEF7BC, 0xE40013F0, 0x17C005CA, 0x6331001F,
    0x0CC6F002, 0x007C6600, 0xE004A8AC, 0xA33002F5, 0x173F0006, 0x00A39980, 0x8C00BCF8,
    0x62222B11, 0x3FF10330, 0xEF879CE7, 0xEFBEFC8C, 0xE8AFBEFB, 0x9E79E32F, 0xA49E79E7,
    0x0000009E, 0xBDEF7180, 0xEF7BDEF7, 0x739CE40F, 0x983739CE, 0xEFBEFBEF, 0x00002EFB,
    0x00000000, 0xF7DF3000, 0x00F5DF7D, 0xB39CE739, 0xF7187FBF, 0xBDEF7BDE, 0xAC007F2D,
    0x22980054, 0x00024801, 0x00092000, 0x6600911E, 0xEFBEF928, 0xD7EFBEFB, 0x739CC5A2,
    0xA89F39CE, 0xB9DF127F, 0xFF7BDEF7, 0x73113DF0, 0x281F39CE, 0xBEFBEFFE, 0x0030236F,
    0x00000924, 0x00000000, 0xBDEF7BC8, 0x6212FEF7, 0xA96739CE, 0xDF7DE303, 0x9185FDF7,
    0x00020C00, 0x80000000, 0xC4100064, 0x71524C80, 0x2F7DF7DE, 0xE44F7C23, 0x3C66739C,
    0xBDEF73C7, 0xEF7BDEF7, 0x39CE63BD, 0x4E739CE7, 0xFBEF18C6, 0xBEFBEFBE, 0x23800F9B,
    0x26518026, 0x801F1F00, 0x30049E58, 0x93E001C3, 0x07D2A005, 0x401315C0, 0x7E001596,
    0x632C007C, 0x03E19800, 0x802627E0, 0xCB80134A, 0x93CB2007, 0xEF77F200, 0x06FEF7BD,
    0xF9CCF2DC, 0xA4F07FA8, 0xD7EFBDF5, 0x07E7F162, 0x2120970F, 0x04100049, 0xE3F24909,
    0xE8CD8F83, 0xFDF7BF98, 0x6A5C2E96, 0xB58387CE, 0x9EF739E2, 0xFC7E6CC7, 0x8785F882,
    0x65220321, 0x00858004, 0x1E00C200, 0x3C2623C2, 0xF7F4B8A1, 0x438FEFBE, 0x399E237D,
    0x21F78C67, 0xBDEF73BE, 0xF92F9EF7, 0xE739C89E, 0xC50E78CC, 0x3DF7DF79, 0xC072088C,
    0x01801208, 0x00000000, 0x64000000, 0xFFE28800, 0x0EFBEFBE, 0x7398CB78, 0xBF9019CE,
    0xF7BDEF7B, 0x00000026, 0x00018000, 0xBEF94823, 0xEFBEFBEF, 0x39CC42A1, 0xE3339CE7,
    0xFDEEFD79, 0xF7CE6643, 0x0001FFFF, 0x2FFFFFBC, 0xEEFC2733, 0xCE6643FD, 0x01FFFFF7,
    0xFDEEFC00, 0x3120E061, 0xCC012489, 0xF80BF400, 0xBF1013D6, 0xFF907D67, 0x37186DE7,
    0xB7F509BF, 0xE003FC0B, 0x5803BCED, 0xF017F8DF, 0x016FC7FC, 0x206E8F63, 0xF002B3F6,
    0xEB158035, 0x7DF7DF7D, 0x9CF7B7DF, 0xE739CE73, 0xDEF7BBF3, 0x03FDEF7B, 0xDF7AC000,
    0xF7DF7DF7, 0x9CE73DED, 0xC4F9CE73, 0x202FD002, 0x6F00FCE6, 0xF5803B3F, 0xF9E04EE5,
    0xD8C05D8F, 0x11807BE3, 0xB1EE4171, 0xBE3DA83E, 0xFF8DF986, 0x1DE6FD03, 0x0276AB10,
    0x068807EB, 0xEF7BDFF8, 0x86FEF7BD, 0xE739CE67, 0x7E8FF52C, 0xDF7DF7DF, 0xC02F14DF,
    0x1248028F, 0x04920000, 0x5C83F1F8, 0x89CA6FEF, 0x9D4B3DDA, 0xDEEB1BC0, 0x39181BFB,
    0x801F801A, 0x7EC00991, 0xFA000800, 0x91009FFF, 0xF8000019, 0xDEF7BDCE, 0x53D67F7B,
    0x6739CE73, 0xDEFBFAD5, 0xF7DF7DF7, 0x00000767, 0xEF7FEA00, 0x0262F803, 0x805F788C,
    0x00080269, 0x88C0132C, 0xE05E75F7, 0x5026A9CB, 0xEF7BDEE7, 0x0000000F, 0x7DEF8600,
    0xDF7DF7DF, 0xCD4FBD77, 0x739CE739, 0xEF7BC86E, 0xC225001D, 0xD9657003, 0x2D278F00,
    0x65FEE180, 0x0A2E4500, 0x1FC93C18, 0x030C32D8, 0x07A64C78, 0xC5FC1864, 0xF061C580,
    0xB261E6C0, 0x619061E1, 0xFBEF10C1, 0xC45064BE, 0xC506739C, 0xF7BDEFA0, 0x019FCFE5,
    0x81E2830F, 0x064323C1, 0x7B8C6218, 0xDEF7BDEF, 0x9CC40BBB, 0x97C63E73, 0x7DF7DE30,
    0x007E25BF, 0x22002CBC, 0x80000005, 0x162C0014, 0xDF7DF78C, 0x310D95EF, 0x984F9CE7,
    0xBDEF7901, 0x002F51F7, 0x7800585F, 0x012000C4, 0x8B0000C0, 0x0AA4F004, 0xDF7DF78C,
    0xCC4347F7, 0xFC8CE739, 0xEF73DE06, 0x9FDEF7BD, 0x39CE4677, 0xA73B9CE7, 0xBEFBEFDC,
    0x2F8ABBEF, 0x80019700, 0x00000005, 0x00000000, 0x00000000, 0x70058000, 0x5F0F0018,
    0xFB91F200, 0x7DF7DF7D, 0xCE466F97, 0x3B9CE739, 0xDEF7BDEE, 0x80BFEF7B, 0x227CE739,
    0xF7DE01BF, 0x2F16BF7D, 0x00143300, 0x0000111E, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xC00223C0, 0xDF780F0C, 0x345AFDF7, 0x27CE7398, 0xF7FE1BF2, 0xBDEF7BDE,
    0xCCF1FEF7, 0xF39CE739, 0xEFBEFBC1, 0x036FBEFB, 0x00000000, 0x00000000, 0xEF7BDF60,
    0x7399E05D, 0xFBC039CE, 0x16FBEFBE, 0x00000000, 0x80000000, 0xF7DF7DF7, 0x33C6DF7D,
    0xCE739CE7, 0xEF7BDEE7, 0x7BDEF7BD, 0xE739CCF1, 0x7DE2739C, 0xDF7DF7DF, 0x000005F7,
    0x00000000, 0xBEC00000, 0x82FBDEF7, 0xE739CE67, 0xBEFBEF06, 0x0000FBEF, 0x00000000,
    0x00000000, 0xEF77F200, 0xFBDEF7BD, 0xCE6A5B8B, 0x33DCE739, 0x7DF7BF3D, 0x9B5DF7DF,
    0x00326017, 0x00000012, 0xE2000000, 0x05EF7BDE, 0x88019CE6, 0x00077DF7, 0x80090000,
    0xBCD800C9, 0xBF3D2B00, 0x81DF7DF7, 0x39CE6A5B, 0x1FEF7183, 0x00FBDFF8, 0x00000000,
    0x00000000, 0x00000000, 0xBDEF2000, 0x6204DEF7, 0x0CE739CE, 0xFBEFBC60, 0x0000EFBE,
    0x00000000, 0x00000000, 0xFF000000, 0xF7BDEF7B, 0xCFFF7BDE, 0xE630739C, 0xEFBF4F9C,
    0xDF79E3FB, 0x000001B7, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x7DFA0000,
    0xFBCF1FDF, 0x39CCFDBE, 0xF9CE6307, 0xF7BDEE20, 0x3987FBDE, 0x78807CE7, 0x01FDF7DF,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xC9001000, 0x7AF66804, 0xDF7DF7DF,
    0xCF73195F, 0xA59CE739, 0x82F7B88E, 0x801FDEE7, 0xC01789F8, 0x66013A17, 0xB6402679,
    0xE13801FC, 0x561E800D, 0x34658C01, 0x000E2380, 0xBC5A0009, 0x26A1AC00, 0x000E9700,
    0x001F8A63, 0x10029E1D, 0x1CC00BCD, 0xCCB801B2, 0x714C6001, 0x0017BDC5, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x7DF7DF78,
    0x037DF7DF, 0xCE739CE6, 0xF7B8A739, 0xDEF7984E, 0xC00E0701, 0xB0980480, 0x80903200,
    0x98121921, 0xF80B1E1E, 0xA4091C3B, 0xE6601D24, 0x9803C562, 0xC3003E49, 0x98E01218,
    0xF8F00B8F, 0x3290091F, 0x6B91003D, 0x99580045, 0x00C9000F, 0xDC4070E0, 0xF718277B,
    0xC000F80E, 0x05E00018, 0xA4001500, 0xF8FC0098, 0x3E4A7800, 0x000E5C00, 0xF8012A95,
    0x866003F1, 0x26298005, 0x003F1F00, 0x003F91F2, 0x35000F0E, 0x003E0024, 0xFE780330,
    0xEF7BDEF7, 0x8CBEA27F, 0x7C8CE739, 0x7DEF9A1F, 0xC5A3F7DF, 0xC86A0A30, 0x21E01E4C,
    0x0004C000, 0x00000000, 0x00000000, 0x00000000, 0x79330000, 0x61888780, 0xD3218C14,
    0xEFBEF7CB, 0xBE79A7FB, 0x8CE7398C, 0xEF711F7C, 0x7BDEF7BD, 0x9CE600F7, 0x01FE31F3,
    0xBF7DF7DE, 0x5E005E25, 0x6522001E, 0x00013000, 0x00093000, 0xD1000D23, 0x7BDEE07C,
    0xE609A94F, 0xF7AE739C, 0xFBEFBC07, 0x00013DBE, 0x00000000, 0x00000000, 0x7BFF3C00,
    0x3FF7BDEF, 0x9CC65F51, 0x0FBE4673, 0xBEFBDF97, 0x928B47EF, 0x9990D40F, 0x3021E02C,
    0x00004C00, 0x00000000, 0x00000000, 0x00000000, 0x07933000, 0x46188878, 0x9A990D41,
    0xF7DF7DEF, 0x632FA9A3, 0xDF2339CE, 0xDEFFCF07, 0x027FEF25, 0x000F91BC, 0xF710BCB1,
    0xBDEF7BDE, 0xCE600F77, 0x27F8CB39, 0xFDF7DF78, 0xFC00D14D, 0x45320028, 0x0C000000,
    0x0308C002, 0xDC1A5C40, 0xBA19EF7B, 0x16739CC0, 0x7DF7805F, 0x2F94DFDF, 0x800A3F00,
    0x0300030C, 0x00002000, 0xE0000000, 0xEF7BDFF9, 0xBEA2F7BD, 0x9CE739CC, 0xDE72E273,
    0xF7DF7DF7, 0x40031945, 0x000000B0, 0x43000782, 0xD6680074, 0xDF9EF7B9, 0xA201BD40,
    0x9CF303FE, 0x12BFFE73, 0xEB22220D, 0x0F000A17, 0x00020009, 0x088F0024, 0xD4584F00,
    0xFBEFBEFB, 0x8CD13FBE, 0x739CE739, 0xDDF8767A, 0xF7BDEF7B, 0x73DBFBDE, 0x39CC62CE,
    0xF7DF7AF7, 0xBBEFBCF0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xE03FBDC6, 0x000077BD, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x20600100, 0x9524C059, 0x08C35051, 0xEFBEF7CD, 0x2F8CD1FB, 0x2339CE63,
    0xFEF792BF, 0xC8EF7D81, 0x0C520190, 0x87864245, 0x062C0F3F, 0xFE7F0B83, 0x61490914,
    0xC0C96078, 0x0B489223, 0x0D879336, 0x40F2418B, 0x0C573F86, 0x1E3C98F0, 0x01A41B60,
    0x3F86460C, 0x0145CC50, 0x065FFF86, 0x02D231E0, 0x01B29EB8, 0xFE07844A, 0xF71026F7,
    0x0C0127FE, 0x2080B266, 0x79160082, 0x92704018, 0xC6487FE0, 0x301192E4, 0x87492107,
    0x1E2C308C, 0x47242908, 0x4FE5A64A, 0x99843262, 0x23929963, 0x43899AE5, 0x237F9192,
    0xD2729305, 0xCF5C9243, 0x65045972, 0x329122A4, 0x93022919, 0xDEF124C5, 0x0F7FE0DB,
    0xF4A81E3F, 0x470B2592, 0x7C87344C, 0x9E18C0CC, 0x9781F1F0, 0x3C127A69, 0x05E19BE9,
    0x01AB64FC, 0x005C2198, 0xF900510F, 0x17E01310, 0x2C403E91, 0x780A33EB, 0xC0B937C3,
    0x4A944634, 0xF0E3E158, 0x9E2C4F83, 0x569982B0, 0xC7C98960, 0xE33E7F07, 0xDF6013DE,
    0x0510C63B, 0xE3E18C39, 0x0CC7C3C0, 0xC4C4FC0F, 0x2C390F12, 0x7C3CB8F8, 0xA7E28630,
    0x2789F806, 0xC3303F87, 0xA204C47D, 0x1C0267D4, 0x4A803E91, 0x1B14012A, 0x00000000,
    0x00000000, 0xDC400000, 0xF7BDEF7B, 0x986F7BDE, 0xE739CE73, 0xFBC4449C, 0xBEFBEFBE,
    0xD00265EF, 0x687401A2, 0x04E53900, 0x8C01A1D0, 0x340078C7, 0x6A53C017, 0x005E6800,
    0x8804CD2B, 0x37803457, 0x29C800CC, 0x0687401A, 0x02631E30, 0xF7DF78B8, 0x8DF7DF7D,
    0xE7398C18, 0xBF4E739C, 0xF7BDEF7B, 0xE739CE4F, 0xF7DF7CC3, 0x0000006D, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x6FBEFBE6, 0xF9CE7393, 0x6801377C,
    0xD4F9002F, 0x02E3A000, 0x00146B90, 0xCC400D1D, 0x46F000F1, 0x2E6F1003, 0x00BE5600,
    0x6002C5F8, 0x74001BE6, 0x58CF0034, 0x03474009, 0x0049E350, 0x518017AE, 0xD7680035,
    0xEF7BDEEF, 0xE739EFFD, 0xBEFBD64C, 0x000004EF, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xFBEFBD60, 0x739CF64E, 0xF0000026, 0xCF5800BD, 0x1E9E005C,
    0xFC600FD5, 0xDF8DFFF2, 0x88DC7100, 0xE37C04E3, 0x3E3FF24B, 0x8C16F5BC, 0x9CD67D5F,
    0x59FA780B, 0xEFBEFBEF, 0xFBEFBEFB, 0x731BEFBE, 0x9CE739CE, 0xA739CE73, 0xE7DBE031,
    0x6A3275D7, 0xCF7FEBBD, 0xDEF7197E, 0xBF3DEF7B, 0xCE739881, 0x41D44739, 0xBEFBEFBE,
    0x00390EEF, 0x00009878, 0xE77E2000, 0x2DEF7BDE, 0xCE722AF8, 0x4A226739, 0xDF7DF7EC,
    0x00A92277, 0x06000180, 0x10014900, 0xBEFBF625, 0x7BE13BEF, 0xE739CC62, 0x17BDC44C,
    0x00000000, 0x00000000, 0x7BDEF7B8, 0x39CC0DFF, 0x0D5CCCE7, 0xDF7DF7DE, 0x08C003C3,
    0x120C0019, 0x00000000, 0x00000000, 0x18000000, 0x22118024, 0xF7DF7DE0, 0xE7304C3D,
    0x3573339C, 0xEF7BDF73, 0x9FFEF7BD, 0x9CE67877, 0xB2E7CE73, 0xDF7DF7BE, 0x06C9EDF7,
    0x00001608, 0x00000000, 0x40000000, 0x7F2600B0, 0xEFDCCB80, 0xDBEFBEFB, 0x398C3BCF,
    0x01F39CE7, 0x006F7FE0, 0x00000000, 0xFEB00000, 0x6F7BDEF7, 0x398CEAC2, 0x3F019CE7,
    0xBEFBEF7E, 0x03C180EF, 0x00000020, 0x00000000, 0x00000000, 0x00060400, 0x8F800F83,
    0xF7DF7BF9, 0xD53B301D, 0xE806739C, 0xDEF7BDFF, 0xBBC17E7B, 0xF39CE632, 0xF8B1FA89,
    0xBF7DF7DE, 0x0A0889E9, 0x0000126C, 0xFC400060, 0xEF7B80C5, 0x60BCA7BD, 0xECE739CE,
    0xFBEF02DF, 0x0ABBEFBE, 0x88000000, 0x7C5800A0, 0xEFBEFBEF, 0xC66778DB, 0xF9CE739C,
    0xEF7FFA00, 0x657A17BD, 0x4C2739CC, 0x5F7DF7BE, 0x4005108C, 0x66EF7B82, 0x731F7BDC,
    0x9CE722CE, 0x87BEFBD3, 0x00EFBEF9, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xEFFF4000, 0x7BDEF7BD, 0xE32BD0EF, 0x80CE7399, 0xEFBDF7C9, 0x50440EFB, 0x00000000,
    0x00000000, 0x00000000, 0x22000000, 0xFE4C0018, 0xEFBEFBEF, 0x73195E80, 0xF40339CE,
    0xEF7BDEFF, 0x0000004D, 0x8540120C, 0xBEFBD408, 0x60B1F7EF, 0x13E739CC, 0xEF715F39,
    0x00000005, 0x00000000, 0xF7BDEE00, 0x9825F3DE, 0xF199CE73, 0xDF7DE0BC, 0x0054BDF7,
    0x000124C8, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xBDDF8000, 0xC800007F,
    0xFEF009CC, 0x80003FFF, 0xF7BDEF7B, 0x9CE730BE, 0xEFBEF003, 0x000003FB, 0x00000000,
    0x00000000, 0x00000000, 0xFBEFBC00, 0xF7DE78FE, 0x739CE77D, 0x139CE630, 0x02FBDFF8,
    0x00CCCC00, 0x037FFF7E, 0xEF7BDCF0, 0x39AEF7BD, 0x60739CE7, 0xBEFBEFBC, 0x0000000F,
    0x00000000, 0x00000000, 0x00000000, 0x40100000, 0x18878032, 0xFFBEFBEF, 0x9CE73590,
    0xB88EA333, 0x000002F7, 0x00000000, 0x77E00000, 0x95F8014F, 0xBCAF802E, 0xAC7BE013,
    0xD98FD009, 0x2F3CBD00, 0x007C6580, 0x16800390, 0x47AC0027, 0x437C007E, 0x309C00BD,
    0xD1FC8027, 0xC4B3C003, 0xF25D0009, 0xEF7BDEEF, 0x9CE60BBD, 0xF7DE0073, 0x00001F7D,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFBEFBC00, 0xF7DEFC3E,
    0x739CE77D, 0xF39CE630, 0x7BDEF7B9, 0x37E7BDEF, 0xCC63E720, 0xBE607511, 0x0FFBDFAF,
    0xC3C40039, 0x00012004, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF7BDEF71,
    0x17CF7BDE, 0x39CE7310, 0xC60F9E33, 0x7BEFBEFB, 0x499000A9, 0x00000002, 0x00000000,
    0x00000000, 0x00000000, 0x20000000, 0xBDEF73BF, 0xE0DF9EF7, 0x9CE6313C, 0x631D4473,
    0xEFBEFD88, 0xE4D653BB, 0x04891601, 0x00000106, 0x00000000, 0x00000000, 0x93106048,
    0xC722C027, 0xDF7DFB10, 0xE72CA777, 0xCE739C89, 0xF73C7511, 0xBDEF7BDE, 0x39017CF7,
    0xE2339CE7, 0xEFBE60F9, 0x5437BEFB, 0x05878802, 0x00000000, 0x00000000, 0x00000000,
    0x1E200000, 0xBEFBE616, 0x230FFBEF, 0x39CE7391, 0xEA073C47, 0x3DEF7BDE, 0x0000025F,
    0x00000000, 0xFFE80000, 0x7BDEF7BD, 0x656B0DEF, 0x19CE733C, 0xDEFBF1F0, 0x24077DF7,
    0x0000800F, 0x00000000, 0x00000000, 0x00100000, 0x3C005240, 0xBEFBEF7C, 0x195E80EF,
    0x0339CE73, 0x7BDEFFF4, 0x00004DEF, 0x00000000, 0x3C000000, 0xBDEF73BF, 0x5F7CFEF7,
    0x39CE733D, 0xFD47AEE7, 0xDF7DF7DE, 0x40366D77, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xDEE77C40, 0xF7BDEF7B, 0x39CC7BE1, 0x4E739CE7, 0xBEFBE659, 0xEFBEFBEF,
    0x8003F8B0, 0x0FE4C001, 0xEF7528C0, 0x2F9EF7BD, 0x9E200778, 0x9CE7DC8F, 0xD4BFCE73,
    0x44444440, 0x24801336, 0x00241801, 0xEFBF530F, 0xFBEFBEFB, 0xCCF0C6BE, 0x739CE739,
    0x7B881D46, 0x000000FF, 0xBDEE0000, 0xDEF7BC87, 0x887CE73B, 0xEF9CE739, 0xEF18FEFB,
    0x002FBEFB, 0x00000000, 0x00000000, 0x00000000, 0x48801900, 0xA9C0DBF6, 0xF710F9C8,
    0xBDFF81FE, 0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x80000000, 0xC5000720,
    0x7DF7DF79, 0xE44F7C07, 0xC0CE739C, 0x780FEF73, 0x03C59DEF, 0x06251514, 0x53691A64,
    0x86C51450, 0x1E918FCD, 0x62503128, 0x9FC14230, 0x6150B8A2, 0x78F029B3, 0x7F008C78,
    0x80FC2A31, 0xE40506A2, 0x801CB7B0, 0xF80294F2, 0xF77C3609, 0xEF73C03E, 0x3060492F,
    0x9C38170E, 0x4C820487, 0x9921FF82, 0x61192611, 0x8348F48A, 0x4C492434, 0x4393089E,
    0xFC19E466, 0x33FFAC19, 0x624C9273, 0x9260AE66, 0x9939C721, 0x872DA40C, 0xCC7A612D,
    0x2FE131E9, 0xFF030A64, 0xEEFC027B, 0x7868AF09, 0x63D42FCA, 0xF07AB40E, 0x7C674D0B,
    0x319EAD10, 0xBA598075, 0x8DE026A3, 0xF20178AC, 0x518049E1, 0x8D7003D4, 0xB86B01A1,
    0xD7883657, 0x0E63C633, 0x1D3445F8, 0x331E78D1, 0x2D26A9C9, 0xAC753A1B, 0x7D80FF7B,
    0xE403927B, 0x07E28BF0, 0x1438631E, 0x84F1F9F8, 0x6261C891, 0x8151E0F1, 0x1CFC3F3F,
    0x8E5234A8, 0xE3C3C078, 0xF6C7C051, 0xAA1C8073, 0xE3E01646, 0x90AC00F5, 0x8C51007E,
    0x03F0E001, 0xF000F160, 0xF4C00953, 0x5889E007, 0x00151C00, 0xDF803946, 0x7BDEF7BD,
    0x3DBFBDEF, 0xCE739CE7, 0xBEFBD724, 0x86FEFBEF, 0x3A1BC068, 0x026A5980, 0x7C05E2D1,
    0x659813A1, 0x1C5A204C, 0x09BC2FC0, 0x80B18F3C, 0xBF0171F8, 0x3CF006B0, 0xEFBEFBE4,
    0x6783AEFB, 0xDCE739CE, 0x5DFFDF20, 0x739CF730, 0xDFAC7460, 0x1B23785B, 0x00900A58,
    0x00000000, 0x17040000, 0x7A098D78, 0x88441FD5, 0xE7AEF100, 0x04D57807, 0x00000B82,
    0x00000000, 0x01A40020, 0xE600ACF8, 0x05BEFDCA, 0x88E6ABBD, 0x0000037B, 0x00000000,
    0x00000000, 0xD6000000, 0xC609BFFD, 0xA84F739C, 0x0EF1D7F7, 0x9406A560, 0x00004007,
    0x00000000, 0x009FC002, 0xAF80D29E, 0x12440BE6, 0x1BE737E0, 0x360694F0, 0x00000001,
    0x00000000, 0xF2880300, 0xE6F7DEA1, 0xD6B3189C, 0xFB7CC17E, 0x3BD77AC1, 0xEB7CD7D7,
    0xFAD4FB17, 0x678E72FD, 0xD55557C4, 0xCBFFFFEF, 0x7BBF09CC, 0x7DEEB0FF, 0x00000001,
    0xFC000000, 0xB3100007, 0x6FBEF1DF, 0xE335DEFA, 0xBCA23399, 0x23BDF737, 0x00000099,
    0x00000000, 0x40000000, 0xBE5100F2, 0xE1DEFB9B, 0x678CD77B, 0xDFB310CE, 0x026FBEF1,
    0xF7B9EF00, 0xCDF0BBDE, 0x39CE7318, 0xEFDC8F18, 0xF145BEFB, 0x003C3803, 0x00000000,
    0x7DE1F7AC, 0x0E7B17DF, 0x7E27399E, 0xBDEFB277, 0x00000000, 0x00000000, 0xFBEF0000,
    0xE0DBEFBE, 0xF9CE7399, 0x700F7B8C, 0x88631DEE, 0xF0C61182, 0x3F1F87F1, 0xC4782856,
    0x460E4A24, 0x47E1C0AA, 0xF152A071, 0x231E0593, 0x8F80F873, 0xB204C4A7, 0xC00ABFEC,
    0x3003955F, 0xC5002C83, 0x3EF71803, 0x181F7BAC, 0x73AC3CE7, 0xB831101E, 0x3BDC6011,
    0x881F7BE9, 0xCE630739, 0x0FBEF909, 0xC41DF7BF, 0x000003BD, 0x1DEE2000, 0x00000000,
    0x0000EF71, 0xFF500000, 0xF7BDEF7B, 0x9CCBF2BE, 0xB739CE73, 0xFBEFBC27, 0x38FBEFBE,
    0xE0120014, 0xB4CC01F0, 0xFEF7BDEE, 0xFC807C4B, 0x7FE7B462, 0xF9897FCE, 0x3B2233A3,
    0x430483FC, 0xF9710120, 0x619ED2A0, 0xCFEF7BDD, 0x0801FE98, 0x9CE739C6, 0x111392FF,
    0x02E1D911, 0x01001218, 0xDE3FD230, 0xF7DF7DF7, 0x9CE63C3D, 0xF999CE73, 0xE2EF7BE6,
    0x4007F7B9, 0xCE78B39F, 0xE77EB0F9, 0xD817B3DE, 0x8ACE6B3D, 0xFD6358DE, 0xFEFDF7BF,
    0xD97E2C6B, 0xF91F8F40, 0xC4437C01, 0xFBDEFB90, 0x3BD30478, 0x1A539CC6, 0xBF627869,
    0x108210EF, 0x00000003, 0x00000000, 0x20031080, 0xF7EC4F0D, 0xBD30421D, 0xA539CC63,
    0xBEE43111, 0x784A3EF7, 0x60DF803E, 0x7E3D0367, 0xDFFEB1AC, 0x35FF7EFB, 0xCD477616,
    0xB87FD159, 0x267BDEF7, 0xA2B39CE6, 0xDF7DF783, 0x8C240916, 0xC0F7BDFF, 0x41F39CCD,
    0x5F7DE70E, 0x0B240104, 0x77BBE988, 0x39CEFBC3, 0x00019CE7, 0xF1F887C6, 0x65DC83FC,
    0x7B1AF97D, 0x9DCF6F7C, 0xCCFDCFF5, 0x7F8FF97A, 0xC6F8FAEA, 0xFEAFAD3F, 0xD3D8EC63,
    0x3B968DF3, 0xB1276A5F, 0x2FC2F90B, 0xDF7DF7DE, 0x37DF7DF7, 0x9CE739CC, 0xEE29CE73,
    0x7BDEF7BD, 0x0000003F, 0xF7DFA000, 0x7DF7DF7D, 0x399FB7DF, 0xCE739CE7, 0xBF3C1F39,
    0x780F7E73, 0xFAD6B5BF, 0xF6FAF43E, 0xBD5FEEFB, 0xEF7D7D72, 0x7C6BFE3D, 0x8E73194F,
    0x8757E63B, 0xE9BF7DE7, 0x7F80F157, 0xF79834C8, 0x62CC4D3E, 0xE54719CC, 0xBEF3C7FF,
    0xA6FEF2EF, 0x3AB21D6F, 0x3062B7A7, 0xBEA17E73, 0xCF77BBF9, 0xAFFF50AF, 0x7117FBFB,
    0xDEF7BDEF, 0x73986F7B, 0x9CE739CE, 0xF7BFF993, 0x8F44B3DE, 0x99D4E739, 0x7DF7DEB1,
    0x03813597, 0x10000000, 0x184965C0, 0xF7BA8C62, 0xEFF2CADE, 0x0DEAE735, 0x0000FFFC,
    0xE2000000, 0x8C77DF7D, 0x30DF7DF7, 0x73119CE7, 0xBDEE29CE, 0x7BDEF337, 0x00000003,
    0x0FFFC000, 0xE2000000, 0x7DF7DF7D, 0xC37DF7DF, 0x39CE739C, 0xF7FE9CE7, 0x399E33DE,
    0xBEFDBC67, 0xC5302E6F, 0x3399A3BD, 0xFE6FBC4A, 0x37BDFF80, 0x767399EB, 0x0CF7BDC7,
    0xE378CE73, 0x305ADF7D, 0xF37B9C63, 0xDFB398E9, 0xB177DE39, 0xF7DF7CC0, 0x09CE7395,
    0xCEFF46A3, 0x722ABDBE, 0xDFF73EF4, 0xBDEF7D8C, 0x437BDEF7, 0x7398819C, 0xEF184CC0,
    0x000FC0FB, 0x0008000C, 0x00400010, 0x2F000280, 0x006F1800, 0x01FBBCC0, 0x00018C40,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x8EFFFF30, 0xDEE780CC,
    0x1E488B07, 0x1FEF716C, 0x04EF1133, 0x30000000, 0x9CDE39DE, 0xF9866333, 0xFFDEF7BF,
    0xCE639D14, 0xB8666F91, 0x93587BEF, 0x00000064, 0xB0060800, 0xE9188A28, 0x6593F7BD,
    0xF5739AF7, 0x740EC006, 0xBE24EC61, 0x43D8DF87, 0x3752DF3F, 0x56FC4FFF, 0x0E3FE2BF,
    0x8FFCA73D, 0xB3E73BC3, 0x9EE4FFE3, 0x87797EFD, 0xFD4B7E5F, 0xFC3FF893, 0xEE303D02,
    0x44FA01FD, 0x6F9C804C, 0x8EF00BE4, 0x03554005, 0x6001EBA0, 0xFA20068E, 0x1ABC0019,
    0x723755D6, 0xCE6309BE, 0x8163BD39, 0x7DF7DF7A, 0x5F77C7EA, 0x4F94C7A0, 0x7E5C7300,
    0x67E880F5, 0xABC0D5C8, 0xE4033DF9, 0x0BD7299C, 0xFF159ABC, 0xD555F35B, 0x9E39CE78,
    0x444263D6, 0xFBDCF118, 0xE627BC03, 0x8DF31804, 0x2E7402F1, 0x006A9E00, 0xAC003D74,
    0x9DE2006C, 0xB0D68003, 0x7CC6BAAE, 0x5BBBAA03, 0xB7DF78E7, 0x7AD6B58C, 0xF9CE63AA,
    0x3CF5D04B, 0xB03CFEF7, 0xF101E1B2, 0x811E033E, 0xFEE7BCD6, 0x4DEB9272, 0x7F39D739,
    0x4E1163BC, 0xFC1AAA04, 0xF47DF7DE, 0x7398C078, 0x3DEF71EE, 0x62FEFC13, 0x9E1A39CE,
    0xEFBEF96A, 0x07AE8117, 0xD95823FC, 0x4BCFBFF0, 0x33C073BC, 0xF41AD373, 0xF98C55FB,
    0xE74FE006, 0x7DEF7182, 0x620D53C6, 0x8F4EB9CE, 0xBEFBE407, 0xBECB8CFD, 0x0CFBC40B,
    0xF35A024F, 0x4CD7204E, 0x8EF02F95, 0xAA8067A6, 0xD02F951F, 0x5CE23263, 0xB1A358FD,
    0x13D6D9CE, 0x911053EF, 0xF7B9E02E, 0x91000007, 0xFFF50099, 0x002400BF, 0x464003B5,
    0xB003F802, 0x77F2062A, 0xE0F8EDEF, 0x0BBD9A96, 0x77BF3D33, 0x805E6C25, 0x800000C5,
    0xBCD800C9, 0xBF3D2B00, 0xF7DF7DF7, 0x7352DD7D, 0xC4E739CE, 0xFB001333, 0x026F9FFD,
    0xE78C67EC, 0xFB7CF007, 0xBC80377F, 0x50019EF7, 0x57003C22, 0x78F00D96, 0xEE1802D2,
    0xE450065F, 0x93C180A2, 0xC32D81FC, 0x64C78030, 0xC186407A, 0x1C580C5F, 0x1E6C0F06,
    0x061E1B26, 0xF10C1619, 0x064BEFBE, 0x6739CC45, 0xDEFA0C50, 0xFCFE5F7B, 0x2830F019,
    0x323C181E, 0x06218064, 0xE0133E40, 0xFBFFCEF9, 0x8C679C03, 0xF77C0367, 0xC805BFBF,
    0x001DEF73, 0x7003C225, 0x8F00D965, 0xE1802D27, 0x450065FE, 0x3C180A2E, 0x32D81FC9,
    0x4C78030C, 0x186407A6, 0xC580C5FC, 0xE6C0F061, 0x61E1B261, 0x10C16190, 0x64BEFBEF,
    0x739CC450, 0xEFA0C506, 0xCFE5F7BD, 0x830F019F, 0x23C181E2, 0x62180643, 0x39CE73C0,
    0xF8DFD013, 0x82FBC7FF, 0xC63DEDF8, 0x8C405FDE, 0x231EF738, 0x01E11280, 0x806CB2B8,
    0xC01693C7, 0x8032FF70, 0x0C051722, 0x6C0FE49E, 0x3C018619, 0x3203D326, 0xC062FE0C,
    0x607830E2, 0xF0D930F3, 0x60B0C830, 0x5F7DF788, 0xCE622832, 0xD0628339, 0xF2FBDEF7,
    0x8780CFE7, 0xE0C0F141, 0x0C032191, 0x73BF1831, 0x1CF2337F, 0xBD735538, 0xB383EFE7,
    0xBD9F77BF, 0x7918C14F, 0x4A00D9EF, 0xCAE00784, 0x4F1E01B2, 0xFDC3005A, 0x5C8A00CB,
    0x92783014, 0x1865B03F, 0x4C98F006, 0xF830C80F, 0xC38B018B, 0xC3CD81E0, 0x20C3C364,
    0xDE2182C3, 0xA0C97DF7, 0x0CE73988, 0x7BDF418A, 0x3F9FCBEF, 0xC5061E03, 0x86478303,
    0xE0C4300C, 0xDCF177BD, 0xA00003FB, 0xE73C59CF, 0xEE31107C, 0x802337BD, 0xB801E112,
    0xC7806CB2, 0x70C01693, 0x228032FF, 0x9E0C0517, 0x196C0FE4, 0x263C0186, 0x0C3203D3,
    0xE2C062FE, 0xF3607830, 0x30F0D930, 0x8860B0C8, 0x325F7DF7, 0x39CE6228, 0xF7D06283,
    0xE7F2FBDE, 0x418780CF, 0x91E0C0F1, 0x310C0321, 0xCF7B9E60, 0x739BF802, 0x7DE3006C,
    0xF79D8027, 0x221800D6, 0x2CB601FC, 0x49E1807F, 0x7FB8F005, 0x2E423003, 0x9278780A,
    0x86196C01, 0xE9932C0D, 0x7F069101, 0x061C5091, 0x261E7F05, 0x0C830617, 0xDF788F05,
    0x118325F7, 0x8339CE62, 0xBDEFA287, 0x67F365F7, 0x78A0C3C0, 0x90C8F060, 0x8C188601,
    0xF7BDEF7B, 0x53177BDE, 0x9CE621CE, 0xFBD69073, 0x7DF7DE33, 0x9001238B, 0x0496002E,
    0x44009A40, 0x04920008, 0xA4000960, 0xFBC38001, 0x5DF78CFE, 0x10E73948, 0x7D4C6E73,
    0x7F7BCB6F, 0x34800908, 0x80024801, 0xDF78C249, 0x2094ADF7, 0xF0739CE6, 0xBDEF7B9E,
    0x33BCFEF7, 0xE739CE72, 0x7EE539DC, 0xDF7DF7DF, 0xB8017C55, 0x002C000C, 0x00000000,
    0x00000000, 0x00000000, 0x00C3802C, 0x9002F878, 0xFBEFDC8F, 0x7CBBEFBE, 0x39CE7233,
    0xE7BCDCE7, 0xBDEF7BDE, 0x7DEE783F, 0x8800B000, 0xC001E004, 0x01333C06, 0xBE7FF7EC,
    0x8C67EC09, 0xDF3C07E7, 0xFF0DDFFE, 0xF7BDEF7B, 0x78FF7BDC, 0xCE739CE6, 0xDF7DE0F9,
    0xB7DF7DF7, 0x00000001, 0x00000000, 0xBDEFB000, 0xCCF02EF7, 0xE01CE739, 0x7DF7DF7D,
    0x0000000B, 0x00000000, 0xEFBEFBC0, 0xE36FBEFB, 0x39CE7399, 0x67C803E7, 0xFE77CF02,
    0xCF381FDF, 0xBE06CF18, 0xE2DFDFFB, 0xF73DEF7F, 0x1FEF7BDE, 0xCE739CCF, 0xEFBC1F39,
    0xFBEFBEFB, 0x00000036, 0x00000000, 0xBDF60000, 0x9E05DEF7, 0x039CE739, 0xBEFBEFBC,
    0x0000016F, 0x00000000, 0xF7DF7800, 0x6DF7DF7D, 0x39CE733C, 0x9CF07CE7, 0xFD04CE73,
    0xBC7FFF8D, 0xF7B7E22F, 0xE17F7B18, 0xF73EF67F, 0x1FCFBD9E, 0xCE739CCF, 0xEFBC1F39,
    0xFBEFBEFB, 0x00000036, 0x00000000, 0xBDF60000, 0x9E05DEF7, 0x039CE739, 0xBEFBEFBC,
    0x0000016F, 0x00000000, 0xF7DF7800, 0x6DF7DF7D, 0x39CE733C, 0xF7BC7CE7, 0x7F7B9E2E,
    0xB39F4000, 0xFCF9CE78, 0xDEF739CF, 0xE3F9CE7B, 0x39CE7399, 0x7DF783E7, 0xDF7DF7DF,
    0x00000006, 0x00000000, 0xF7BEC000, 0x33C0BBDE, 0x80739CE7, 0xF7DF7DF7, 0x0000002D,
    0x00000000, 0xBEFBEF00, 0x8DBEFBEF, 0xE739CE67, 0x4CCF0F9C, 0x9FFDFB00, 0x19FB026F,
    0xCF01F9E3, 0xC377FFB7, 0xEF7BDEFF, 0xFFDEF73D, 0x8C1CE733, 0xEFD3E739, 0xDE78FEFB,
    0x00006DF7, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x7E800000, 0xF3C7F7DF,
    0x733F6FBE, 0x7398C1CE, 0x267C803E, 0xFFE77CF0, 0x8CF381FD, 0xBBE06CF1, 0xFE2DFDFF,
    0xEF73DEF7, 0x9FFEF7BD, 0xCC60E739, 0xDF7E9F39, 0xBEF3C7F7, 0x0000036F, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0xFBF40000, 0xF79E3FBE, 0x7399FB7D, 0xF39CC60E,
    0x39CE73C1, 0xFE37F413, 0x88BEF1FF, 0xEC63DEDF, 0xD9FF85FD, 0xF67BDCFB, 0xCE67FF3E,
    0xCE731839, 0xFDF7DFA7, 0xDBEFBCF1, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xEFBEFD00, 0xDF7DE78F, 0x839CE67E, 0xBC7CE731, 0x7B9E2EF7, 0x9F40007F,
    0xF9CE78B3, 0xF739CFFC, 0xF9CE7BDE, 0xC1CE733F, 0xFD3E7398, 0xE78FEFBE, 0x0006DF7D,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xE8000000, 0x3C7F7DF7, 0x33F6FBEF,
    0x398C1CE7, 0xEF77E3E7, 0x7BDEF7BD, 0x39CCF016, 0xF02F4667, 0xDEFBEFBE, 0x4B9002F0,
    0x01870014, 0x00000000, 0xEFBC98C0, 0x9E4CC09B, 0x8A780339, 0x0000EF7D, 0x00000000,
    0x38000000, 0xC4B9000C, 0xBEFBEF03, 0xC06F0DEF, 0x199CE733, 0xE77E30BD, 0x39E466FE,
    0x7AE6AA70, 0x6707DFCF, 0x7B3EEF7F, 0xDEEE229F, 0xDC631893, 0x0003E03B, 0x17800063,
    0x90005400, 0xE3F00262, 0xF929E003, 0x00397000, 0xE004AA54, 0x19800FC7, 0x98A60016,
    0x00FC7C00, 0x00FE47C8, 0xD4003C38, 0x00F80090, 0x33C00CC0, 0xFDFB0013, 0xEC026F9F,
    0x07E78C67, 0x7FFB7CF0, 0xDFF9E037, 0xFFB9EF7B, 0xE632FA89, 0x7DF2339C, 0x7DF7BE68,
    0xC3168FDF, 0x3321A828, 0x00878079, 0x00001300, 0x00000000, 0x00000000, 0x00000000,
    0x01E4CC00, 0x5186221E, 0x2F4C8630, 0xEFBEFBDF, 0x32F9E69F, 0xF2339CE6, 0x33E4007D,
    0xFCEF9E01, 0x79C03FBF, 0xC03678C6, 0x5BFBFF77, 0x73DFF9E0, 0x89FFBDEF, 0x9CE632FA,
    0x687DF233, 0xDF7DF7BE, 0x28C3168F, 0x793321A8, 0x00008780, 0x00000013, 0x00000000,
    0x00000000, 0x00000000, 0x1E01E4CC, 0x30518622, 0xDF2F4C86, 0x9FEFBEFB, 0xE632F9E6,
    0x7DF2339C, 0x39CE73C0, 0xF8DFD013, 0x82FBC7FF, 0xC63DEDF8, 0x9D405FDE, 0xFB3DEE7D,
    0x3197D42C, 0xEF919CE7, 0xEFBDF343, 0x18B47EFB, 0x990D4146, 0x043C03C9, 0x00009800,
    0x00000000, 0x00000000, 0x00000000, 0x0F266000, 0x8C3110F0, 0x7A643182, 0x7DF7DEF9,
    0x97CF34FF, 0x919CE731, 0x3BF183EF, 0xCF2337F7, 0xD7355381, 0x383EFE7B, 0xD9F77BFB,
    0x73CC14FB, 0xFF7B3DEF, 0x98CBEA27, 0xF7C8CE73, 0xF7DEF9A1, 0x0C5A3F7D, 0xCC86A0A3,
    0x021E01E4, 0x00004C00, 0x00000000, 0x00000000, 0x00000000, 0x07933000, 0x46188878,
    0xBD3218C1, 0xBEFBEF7C, 0xCBE79A7F, 0xC8CE7398, 0xEF7BC1F7, 0x07F7B9E2, 0xB39F4000,
    0xA0F9CE78, 0xDEF7B9F6, 0xCBEA17B3, 0xC8CE7398, 0xDEF9A1F7, 0x5A3F7DF7, 0x86A0A30C,
    0x1E01E4CC, 0x004C0002, 0x00000000, 0x00000000, 0x00000000, 0x93300000, 0x18887807,
    0x3218C146, 0xFBEF7CBD, 0xE79A7FBE, 0xCE7398CB, 0x0321F7C8, 0x20FFB922, 0xFF3797FE,
    0xA3F1FF11, 0x47FFFCBE, 0xB18F544F, 0x0547C416, 0x2FD63FE2, 0xEAC6F8FF, 0xDD1F8DFA,
    0x000EF3CD, 0xFF517758, 0xF7BDEF7B, 0x2F8CB9BC, 0x467399E3, 0xFA1BC3C4, 0xC7F7DF7B,
    0x4B84C4A4, 0xF2078454, 0x8ABC0041, 0x0DAA8C04, 0xAA006B40, 0x4740019E, 0x958CF003,
    0x00FC7400, 0xC0133998, 0xC00BC5FA, 0x8C8037C8, 0x09FC1720, 0x89640F0F, 0xFBDF9872,
    0x6CBC3BBE, 0x339CCF19, 0xE35C97A2, 0xF7BDEF7F, 0x2F7CC59E, 0x04CCF000, 0xE7FF7EC0,
    0x19FB009B, 0x3C01F9E3, 0x0DDFFEDF, 0x083FBDC6, 0x0003BDEF, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x03000800, 0xA92602C9, 0x461A828C, 0x7DF7BE68,
    0x7C668FDF, 0x19CE7319, 0x7C8015F9, 0x9DF3C026, 0x3807F7FF, 0x06CF18CF, 0x7F7FEEF8,
    0x9FDEE30B, 0x01DEF780, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x80040000, 0x93016481, 0x0D414654, 0xFBDF3423, 0x3347EFBE, 0xE7398CBE, 0x3C0AFC8C,
    0x01339CE7, 0x7FFF8DFD, 0xDF882FBC, 0xFDEC63DE, 0x1E9EE305, 0xDCEF8C41, 0x00000001,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x04000000, 0x01648180, 0x41465493,
    0xDF34230D, 0x47EFBEFB, 0x398CBE33, 0x0AFC8CE7, 0xE78BBDEF, 0x00001FDE, 0x39E2CE7D,
    0xF3DC63E7, 0x3B9F4405, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00800000, 0x602C9030, 0xA828CA92, 0x7BE68461, 0x68FDF7DF, 0xE73197C6, 0x015F919C,
    0x3C0267C8, 0x7F7FF9DF, 0xF18CF380, 0xFEEF806C, 0xEE30B7F7, 0xEFB0113D, 0x8288631D,
    0x71F0C61C, 0x8663E1E0, 0x62627E07, 0x161C8789, 0x3E1E5C7C, 0x53F14318, 0x93C4FC03,
    0xE1981FC3, 0x5102623E, 0x8E0133EA, 0x25401F48, 0x0D8A0095, 0x00000000, 0x00000000,
    0xEE200000, 0x000000BD, 0x00000000, 0xEF7BDEF7, 0x739CC01E, 0xC03FC63E, 0xD7EFBEFB,
    0xF26005E2, 0x06431000, 0x00000B00, 0x30009300, 0xE6880152, 0xF7BDEE0F, 0xCE609A94,
    0x7F7AE739, 0xEFBEFBC0, 0x000013DB, 0xFFDE2000, 0xBBDEF7BD, 0x98CCDF0B, 0xBF18CE73,
    0x7DFFC592, 0x4DA5F7DF, 0x118780C6, 0x048902C1, 0x02040000, 0xE0099240, 0xEEFC01E5,
    0xD80D3C7D, 0xC02AA673, 0xD11DDF7A, 0x0632C400, 0x00099B00, 0x01248012, 0xA3002CD8,
    0xFBCF048C, 0x81717FBE, 0xF18CE73D, 0x0003180D, 0x17767DBE, 0x7AC619C0, 0xF73ED601,
    0x0720007F, 0xEF7BDC60, 0x12FCF7BD, 0x739CE731, 0x7C83A88E, 0xDF7DF7DF, 0xE000C61D,
    0x00000261, 0x7B9DF880, 0xE0B7BDEF, 0xE739C8AB, 0xB128899C, 0xDF7DF7DF, 0x0002A489,
    0x00180006, 0x94400524, 0xBEFBEFD8, 0x89EF84EF, 0x339CE731, 0x40146001, 0x0BECEFF5,
    0x03195770, 0xECE7FFA0, 0x00191806, 0xEF7BDEE3, 0x8897E7BD, 0x739CE739, 0xFBE41D44,
    0xEEFBEFBE, 0x0F000630, 0x00000013, 0x7BDCEFC4, 0x5F05BDEF, 0xE739CE45, 0xFD89444C,
    0x4EFBEFBE, 0x30001524, 0x2000C000, 0xC4A20029, 0x7DF7DF7E, 0x8C4F7C27, 0x099CE739,
    0x33DEE718, 0xAD627900, 0x9B8827F8, 0x3713F74F, 0xF8F9F621, 0x02201ECE, 0xBDC60222,
    0xCF7BDEF7, 0xCE73112F, 0x3A88E739, 0xDF7DF7C8, 0x0C61DDF7, 0x00261E00, 0xDF880000,
    0x7BDEF7B9, 0x9C8ABE0B, 0x8899CE73, 0xDF7DFB12, 0x2A489DF7, 0x80006000, 0x00524001,
    0xBEFD8944, 0xF84EFBEF, 0xCE73189E, 0xEFE41339, 0xCE23DF9C, 0xCD6AB781, 0x21789EEF,
    0xBFFEF7E7, 0xF782DFEE, 0x0156B3C5, 0x7BDC6000, 0xFCF7BDEF, 0x9CE73112, 0x83A88E73,
    0x7DF7DF7C, 0x00C61DDF, 0x000261E0, 0x9DF88000, 0xB7BDEF7B, 0x39C8ABE0, 0x28899CE7,
    0x7DF7DFB1, 0x02A489DF, 0x18000600, 0x40052400, 0xFBEFD894, 0xEF84EFBE, 0x9CE73189,
    0xEF7BC133, 0x07F7B9E2, 0xB39F4000, 0x20F9CE78, 0x00222022, 0xDEF71800, 0xBF3DEF7B,
    0xE739CC44, 0x20EA239C, 0xDF7DF7DF, 0x00318777, 0x00009878, 0xE77E2000, 0x2DEF7BDE,
    0xCE722AF8, 0x4A226739, 0xDF7DF7EC, 0x00A92277, 0x06000180, 0x10014900, 0xBEFBF625,
    0x7BE13BEF, 0xE739CC62, 0xEE73C04C, 0x9AE0133D, 0x6201FC73, 0x1004EFBC, 0x001F7DE3,
    0x00FE9CD7, 0x4CF7B9CF, 0xEF7BDC60, 0x12FCF7BD, 0x739CE731, 0x7C83A88E, 0xDF7DF7DF,
    0xE000C61D, 0x00000261, 0x7B9DF880, 0xE0B7BDEF, 0xE739C8AB, 0xB128899C, 0xDF7DF7DF,
    0x0002A489, 0x00180006, 0x94400524, 0xBEFBEFD8, 0x89EF84EF, 0x339CE731, 0xF7BDEE21,
    0xDEF7BBFF, 0xCCCE7317, 0x3E63398A, 0xC3DF7DE2, 0x07F6DF7C, 0x018F3F83, 0x08000130,
    0xC17BDCEB, 0x6A3A3FE7, 0x33BDF64E, 0xEF7E329E, 0xFAE733CB, 0xF780F1E7, 0x00E07B7D,
    0xB8260380, 0x6507F01E, 0xF997DEFC, 0x3B23EFBE, 0xCE624E6A, 0xDEFB99B9, 0xF7BDEF7B,
    0xCCF0EF5F, 0xCF9CE739, 0xFBEF7D61, 0x93DBEFBE, 0x002C100D, 0x00000000, 0x00000000,
    0x4C016080, 0xB99700FE, 0xDF7DF7DF, 0x18779FB7, 0xE739CE73, 0xEF7BEE63, 0x3FDEF7BD,
    0x007DEE78, 0x048800B0, 0x06C001E0, 0xDF00018C, 0xE00BBB3E, 0x00BD630C, 0x3FFB9F6B,
    0xD0039000, 0xBDEF7BFF, 0x5E82FCF7, 0xF9CE7319, 0x7C98FD44, 0xDFBEFBEF, 0x050444F4,
    0x00000936, 0xFE200030, 0xF7BDC062, 0x305E53DE, 0xF6739CE7, 0x7DF7816F, 0x055DF7DF,
    0x44000000, 0xBE2C0050, 0xF7DF7DF7, 0x6333BC6D, 0x7CE739CE, 0xA00A3000, 0x05F677FA,
    0x018CABB8, 0x7673FFD0, 0x800C8C03, 0xEF7BDFFE, 0xF417E7BD, 0xCE7398CA, 0xE4C7EA27,
    0xFDF7DF7B, 0x282227A6, 0x000049B0, 0xF1000180, 0xBDEE0317, 0x82F29EF7, 0xB39CE739,
    0xEFBC0B7F, 0x2AEFBEFB, 0x20000000, 0xF1600282, 0xBEFBEFBD, 0x199DE36F, 0xE739CE73,
    0xEF738C03, 0xB13C8019, 0xC413FC56, 0x89FBA7CD, 0x7CFB109B, 0x100F677C, 0xFD011101,
    0x7BDEF7BF, 0x95E82FCF, 0x4F9CE731, 0xF7C98FD4, 0x4DFBEFBE, 0x6050444F, 0x00000093,
    0x2FE20003, 0xEF7BDC06, 0x7305E53D, 0xFF6739CE, 0xF7DF7816, 0x0055DF7D, 0x04400000,
    0x7BE2C005, 0xDF7DF7DF, 0xE6333BC6, 0x07CE739C, 0xCF177BDE, 0x00003FBD, 0x73C59CFA,
    0x011107CE, 0x40000111, 0xF7BDEFFF, 0x7A0BF3DE, 0xE739CC65, 0xF263F513, 0x7EFBEFBD,
    0x141113D3, 0x000024D8, 0xF88000C0, 0xDEF7018B, 0xC1794F7B, 0xD9CE739C, 0xF7DE05BF,
    0x1577DF7D, 0x10000000, 0xF8B00141, 0xDF7DF7DE, 0x8CCEF1B7, 0xF39CE739, 0xF8003181,
    0xC05DD9F6, 0x817AC619, 0x1FFDCFB5, 0xBDC07200, 0x5F7BDEF7, 0x01CE7398, 0xFDF7DF78,
    0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x7F7DF7DE, 0xBEFBEF3C, 0x1839CE73,
    0x3009CE73, 0x9DFEA80A, 0xCABB817D, 0xCFFF4018, 0x0C8C0DD9, 0xF7BDEF70, 0x9CE617DE,
    0xF7DE0073, 0x00007F7D, 0x00000000, 0x00000000, 0x00000000, 0x7DF78000, 0xFBCF1FDF,
    0x739CEFBE, 0x739CC60E, 0xCF7B9C62, 0xAD627900, 0xE6E227F8, 0x4DC4FDD3, 0xEF8F9F62,
    0x880881EC, 0x7BDEF708, 0xCE617DEF, 0x7DE00739, 0x0007F7DF, 0x00000000, 0x00000000,
    0x00000000, 0xDF780000, 0xBCF1FDF7, 0x39CEFBEF, 0x39CC60E7, 0xC5DEF7A7, 0x000FEF73,
    0xCF1673E8, 0x01111F39, 0xEE000111, 0xFBDEF7BD, 0x0E739CC2, 0xEFBEFBC0, 0x0000000F,
    0x00000000, 0x00000000, 0x00000000, 0xFBEFBEF0, 0xF7DF79E3, 0xC1CE739D, 0xFC4E7398,
    0xDEF7BDEF, 0x733C05F3, 0x9E3339CE, 0xDF7DFA0F, 0x0054BDF7, 0x000124C8, 0xDEF7BBF1,
    0x57C26F7B, 0xCE739CC6, 0xF7FF1440, 0x6077DF7D, 0x00200190, 0x00000000, 0x00000000,
    0x24000000, 0x62081803, 0xF15208C0, 0x3DF7DF7F, 0x889EF854, 0x78CCE739, 0x9CEFE43E,
    0x81CE23DF, 0xEFCD6AB7, 0xE721789E, 0xEEBFFEF7, 0xC5F782DF, 0x000156B3, 0xBDEF7B88,
    0xBE7BDEF7, 0xCE739880, 0x307CF199, 0xDF7DF7DE, 0x4C80054B, 0x00000012, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0xDF00018C, 0xE00BBB3E, 0x00BD630C, 0x3FFB9F6B,
    0xC8039000, 0xEF7BDCEF, 0x3837E7BD, 0xE7398C4F, 0x18C7511C, 0xFBEFBF62, 0x793594EE,
    0x81224580, 0x00000041, 0x00000000, 0x00000000, 0xE4C41812, 0x31C8B009, 0xF7DF7EC4,
    0x79CB29DD, 0x739CE722, 0x46001D44, 0xCEFF5401, 0x957700BE, 0x7FFA0031, 0x91806ECE,
    0xDCEFC801, 0xE7BDEF7B, 0x8C4F3837, 0x511CE739, 0xBF6218C7, 0x94EEFBEF, 0x45807935,
    0x00418122, 0x00000000, 0x00000000, 0x18120000, 0xB009E4C4, 0x7EC431C8, 0x29DDF7DF,
    0xE72279CB, 0x1D44739C, 0x67BDCE30, 0x5AC4F200, 0x37104FF1, 0x6E27EE9F, 0xF1F3EC42,
    0x04403D9D, 0x3BF20444, 0xEF7BDEF7, 0x13CE0DF9, 0x4739CE63, 0xD88631D4, 0x3BBEFBEF,
    0x601E4D65, 0x10604891, 0x00000000, 0x00000000, 0x04800000, 0x02793106, 0xB10C722C,
    0x777DF7DF, 0xC89E72CA, 0x511CE739, 0xE73BF907, 0xE07388F7, 0xBBF35AAD, 0xF9C85E27,
    0xFBAFFFBD, 0xF17DE0B7, 0x000055AC, 0xBDEE77E4, 0x1BF3DEF7, 0x9CC6279C, 0x63A88E73,
    0xF7DFB10C, 0x9ACA777D, 0x9122C03C, 0x000020C0, 0x00000000, 0x00000000, 0x620C0900,
    0xE45804F2, 0xEFBF6218, 0xE594EEFB, 0xCE73913C, 0xDE0EA239, 0xBDCF177B, 0xFA00003F,
    0xCE73C59C, 0x11011107, 0xBF200001, 0xF7BDEF73, 0x3CE0DF9E, 0x739CE631, 0x88631D44,
    0xBBEFBEFD, 0x01E4D653, 0x06048916, 0x00000001, 0x00000000, 0x48000000, 0x27931060,
    0x10C722C0, 0x77DF7DFB, 0x89E72CA7, 0x11CE739C, 0xEFBD4075, 0xDCE63003, 0x17DEEB00,
    0xE2000000, 0xBDEF7BDE, 0xE730DEF7, 0x39CE739C, 0xF7DF78A7, 0x7DF7DF7D, 0xA80000DF,
    0xC6007DF7, 0xB0001B9C, 0x8CF0004F, 0xEE77E437, 0x4FDEF7BD, 0x73189E71, 0x631C99CE,
    0x6FBEFD88, 0x0F26B20F, 0x122411BC, 0x4008B331, 0xC8006FC7, 0x1D002635, 0x19E3002F,
    0x01AD000F, 0x0055518C, 0x4C40D5D6, 0x2281CC72, 0xF7DF2247, 0x1DCB29DD, 0x44739CD4,
    0xDCE2321D, 0xBF3DEF7B, 0x0019CCC1, 0x7C000630, 0x802EECFB, 0x02F58C33, 0xFFEE7DAC,
    0x100E4000, 0xFF81FEF7, 0x000003BD, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00072080, 0xF7DF79C5, 0x4F7C077D, 0xCE739CE4, 0x00518000, 0x2FB3BFD5, 0x0C655DC0,
    0xB39FFE80, 0x0064601B, 0xF81FEF71, 0x00003BDF, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00720800, 0x7DF79C50, 0xF7C077DF, 0xE739CE44, 0xF738C00C, 0x13C8019E,
    0x413FC56B, 0x9FBA7CDC, 0xCFB109B8, 0x00F677C7, 0xC4111011, 0x7FE07FBD, 0x000000EF,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x4001C820, 0x7DF7DE71, 0x13DF01DF,
    0x339CE739, 0xE2EF7BC0, 0x0007F7B9, 0x78B39F40, 0x2220F9CE, 0x00002220, 0xF03FDEE2,
    0x000077BF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00E41000, 0xFBEF38A0,
    0xEF80EFBE, 0xCE739C89, 0x0A300019, 0xF677FAA0, 0x8CABB805, 0x73FFD001, 0x0C8C0376,
    0x07FBDD60, 0x1C93DBEC, 0x145F8720, 0xC318F03F, 0x8FCFC0A1, 0x0E448C27, 0x8F078B13,
    0xE1F9FC0A, 0x91A540E7, 0x1E03C472, 0x3E028F1E, 0xE4039FB6, 0x00B23550, 0x6007AF1F,
    0x8803F485, 0x87000C62, 0x078B001F, 0x004A9F80, 0x4F003FA6, 0xA8E002C4, 0x01CA3000,
    0x00FEF73C, 0x00000000, 0x40000000, 0xBDEF7BDD, 0x39C80BE7, 0x9E227CE7, 0xBEFBE60F,
    0x254377EF, 0x00587880, 0x00000000, 0x00000000, 0x00000000, 0x61E20000, 0xFBEFBE61,
    0x1230FFBE, 0x739CE739, 0xEEA073C4, 0xF3DEF7BD, 0x00000025, 0x00000000, 0xDEF78000,
    0x0FEF73C5, 0x673E8000, 0x41F39CF1, 0x00444044, 0xFF7BAC00, 0x927B7D80, 0x8BF0E403,
    0x631E07E2, 0xF9F81438, 0xC89184F1, 0xE0F16261, 0x3F3F8151, 0x34A81CFC, 0xC0788E52,
    0xC051E3C3, 0x8073F6C7, 0x1646AA1C, 0x00F5E3E0, 0x007E90AC, 0xE0018C51, 0xF16003F0,
    0x0953F000, 0xE007F4C0, 0x1C005889, 0x39460015, 0x00000000
EW_END_OF_FONT_RES( ApplicationNumbersP )

/* Table with links to derived variants of the font resource : 'Application::NumbersP' */
EW_RES_WITHOUT_VARIANTS( ApplicationNumbersP )

/* Font resource : 'Application::NumbersG' */
EW_DEFINE_FONT_RES( ApplicationNumbersG, 30, 7, 0, 16, 0x0016, 0x00BE )
  EW_GLYPH( 0x0016, 0, -29, 19, 36, 19, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 19, 0x0000059E ),               /* ' ' */
  EW_GLYPH( 0x0021, 7, -25, 5, 25, 19, 0x0000059E ),            /* '!' */
  EW_GLYPH( 0x0022, 5, -26, 9, 8, 19, 0x0000065D ),             /* '"' */
  EW_GLYPH( 0x0023, 2, -25, 15, 25, 19, 0x000006C8 ),           /* '#' */
  EW_GLYPH( 0x0024, 0, -25, 19, 25, 19, 0x00000960 ),           /* '$' */
  EW_GLYPH( 0x0025, 0, -25, 19, 25, 19, 0x00000D66 ),           /* '%' */
  EW_GLYPH( 0x0026, 1, -25, 17, 25, 19, 0x000011B8 ),           /* '&' */
  EW_GLYPH( 0x0027, 8, -26, 3, 8, 19, 0x0000154E ),             /* ''' */
  EW_GLYPH( 0x0028, 4, -30, 11, 38, 19, 0x00001572 ),           /* '(' */
  EW_GLYPH( 0x0029, 4, -30, 11, 38, 19, 0x00001823 ),           /* ')' */
  EW_GLYPH( 0x002A, 2, -26, 15, 15, 19, 0x00001AD3 ),           /* '*' */
  EW_GLYPH( 0x002B, 2, -20, 15, 13, 19, 0x00001D46 ),           /* '+' */
  EW_GLYPH( 0x002C, 7, -3, 5, 9, 19, 0x00001EAB ),              /* ',' */
  EW_GLYPH( 0x002D, 1, -14, 17, 3, 19, 0x00001F10 ),            /* '-' */
  EW_GLYPH( 0x002E, 7, -4, 5, 4, 19, 0x00001FB5 ),              /* '.' */
  EW_GLYPH( 0x002F, 1, -25, 17, 25, 19, 0x00001FDF ),           /* '/' */
  EW_GLYPH( 0x0030, 1, -25, 17, 25, 19, 0x000022BB ),           /* '0' */
  EW_GLYPH( 0x0031, 1, -25, 17, 25, 19, 0x0000269E ),           /* '1' */
  EW_GLYPH( 0x0032, 1, -25, 17, 25, 19, 0x000028ED ),           /* '2' */
  EW_GLYPH( 0x0033, 1, -25, 17, 25, 19, 0x00002C84 ),           /* '3' */
  EW_GLYPH( 0x0034, 1, -25, 17, 25, 19, 0x00003038 ),           /* '4' */
  EW_GLYPH( 0x0035, 1, -25, 17, 25, 19, 0x00003338 ),           /* '5' */
  EW_GLYPH( 0x0036, 1, -25, 17, 25, 19, 0x000036BC ),           /* '6' */
  EW_GLYPH( 0x0037, 0, -25, 19, 25, 19, 0x00003A2F ),           /* '7' */
  EW_GLYPH( 0x0038, 1, -25, 17, 25, 19, 0x00003DC3 ),           /* '8' */
  EW_GLYPH( 0x0039, 1, -25, 17, 25, 19, 0x0000421B ),           /* '9' */
  EW_GLYPH( 0x003A, 7, -15, 5, 15, 19, 0x000045AD ),            /* ':' */
  EW_GLYPH( 0x003B, 7, -15, 5, 21, 19, 0x0000463A ),            /* ';' */
  EW_GLYPH( 0x003C, 3, -23, 12, 20, 19, 0x00004707 ),           /* '<' */
  EW_GLYPH( 0x003D, 3, -19, 13, 9, 19, 0x0000495C ),            /* '=' */
  EW_GLYPH( 0x003E, 3, -23, 12, 20, 19, 0x00004ABB ),           /* '>' */
  EW_GLYPH( 0x003F, 1, -25, 17, 25, 19, 0x00004D1E ),           /* '?' */
  EW_GLYPH( 0x0040, 1, -20, 17, 26, 19, 0x0000506C ),           /* '@' */
  EW_GLYPH( 0x0041, 1, -25, 17, 25, 19, 0x00005440 ),           /* 'A' */
  EW_GLYPH( 0x0042, 1, -25, 17, 25, 19, 0x000057D1 ),           /* 'B' */
  EW_GLYPH( 0x0043, 1, -25, 17, 25, 19, 0x00005B64 ),           /* 'C' */
  EW_GLYPH( 0x0044, 1, -25, 17, 25, 19, 0x00005E47 ),           /* 'D' */
  EW_GLYPH( 0x0045, 1, -25, 17, 25, 19, 0x0000611C ),           /* 'E' */
  EW_GLYPH( 0x0046, 1, -25, 17, 25, 19, 0x00006419 ),           /* 'F' */
  EW_GLYPH( 0x0047, 1, -25, 17, 25, 19, 0x000066D0 ),           /* 'G' */
  EW_GLYPH( 0x0048, 1, -25, 17, 25, 19, 0x00006A03 ),           /* 'H' */
  EW_GLYPH( 0x0049, 1, -25, 17, 25, 19, 0x00006C3B ),           /* 'I' */
  EW_GLYPH( 0x004A, 1, -25, 17, 25, 19, 0x00006EEE ),           /* 'J' */
  EW_GLYPH( 0x004B, 1, -25, 17, 25, 19, 0x0000718A ),           /* 'K' */
  EW_GLYPH( 0x004C, 1, -25, 17, 25, 19, 0x000074BC ),           /* 'L' */
  EW_GLYPH( 0x004D, 1, -25, 17, 25, 19, 0x000076D8 ),           /* 'M' */
  EW_GLYPH( 0x004E, 1, -25, 17, 25, 19, 0x00007A09 ),           /* 'N' */
  EW_GLYPH( 0x004F, 1, -25, 17, 25, 19, 0x00007CC0 ),           /* 'O' */
  EW_GLYPH( 0x0050, 1, -25, 17, 25, 19, 0x00007FE7 ),           /* 'P' */
  EW_GLYPH( 0x0051, 1, -25, 17, 29, 19, 0x000082F2 ),           /* 'Q' */
  EW_GLYPH( 0x0052, 1, -25, 17, 25, 19, 0x000086BD ),           /* 'R' */
  EW_GLYPH( 0x0053, 1, -25, 17, 25, 19, 0x000089DB ),           /* 'S' */
  EW_GLYPH( 0x0054, 1, -25, 17, 25, 19, 0x00008D9F ),           /* 'T' */
  EW_GLYPH( 0x0055, 1, -25, 17, 25, 19, 0x00008FEB ),           /* 'U' */
  EW_GLYPH( 0x0056, 1, -25, 17, 25, 19, 0x0000925B ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -25, 19, 25, 19, 0x000095CE ),           /* 'W' */
  EW_GLYPH( 0x0058, 1, -25, 17, 25, 19, 0x000099C5 ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -25, 19, 25, 19, 0x00009D91 ),           /* 'Y' */
  EW_GLYPH( 0x005A, 1, -25, 17, 25, 19, 0x0000A0CF ),           /* 'Z' */
  EW_GLYPH( 0x005B, 4, -30, 11, 38, 19, 0x0000A46E ),           /* '[' */
  EW_GLYPH( 0x005C, 1, -25, 17, 25, 19, 0x0000A6A4 ),           /* '\' */
  EW_GLYPH( 0x005D, 4, -30, 11, 38, 19, 0x0000A98D ),           /* ']' */
  EW_GLYPH( 0x005E, 0, -26, 19, 12, 19, 0x0000ABC3 ),           /* '^' */
  EW_GLYPH( 0x005F, -1, 5, 20, 3, 19, 0x0000ADDF ),             /* '_' */
  EW_GLYPH( 0x0060, 4, -25, 8, 5, 19, 0x0000AEA3 ),             /* '`' */
  EW_GLYPH( 0x0061, 0, -20, 18, 20, 19, 0x0000AF49 ),           /* 'a' */
  EW_GLYPH( 0x0062, 1, -26, 17, 26, 19, 0x0000B270 ),           /* 'b' */
  EW_GLYPH( 0x0063, 1, -20, 17, 20, 19, 0x0000B542 ),           /* 'c' */
  EW_GLYPH( 0x0064, 1, -26, 17, 26, 19, 0x0000B7D4 ),           /* 'd' */
  EW_GLYPH( 0x0065, 1, -20, 17, 20, 19, 0x0000BAB3 ),           /* 'e' */
  EW_GLYPH( 0x0066, 1, -26, 17, 26, 19, 0x0000BDF6 ),           /* 'f' */
  EW_GLYPH( 0x0067, 1, -20, 17, 28, 19, 0x0000C0C0 ),           /* 'g' */
  EW_GLYPH( 0x0068, 1, -26, 17, 26, 19, 0x0000C458 ),           /* 'h' */
  EW_GLYPH( 0x0069, 1, -26, 17, 26, 19, 0x0000C6C5 ),           /* 'i' */
  EW_GLYPH( 0x006A, 3, -26, 13, 34, 19, 0x0000C96D ),           /* 'j' */
  EW_GLYPH( 0x006B, 1, -26, 17, 26, 19, 0x0000CC26 ),           /* 'k' */
  EW_GLYPH( 0x006C, 1, -26, 17, 26, 19, 0x0000CF5D ),           /* 'l' */
  EW_GLYPH( 0x006D, 0, -20, 18, 20, 19, 0x0000D1CB ),           /* 'm' */
  EW_GLYPH( 0x006E, 1, -20, 17, 20, 19, 0x0000D3D8 ),           /* 'n' */
  EW_GLYPH( 0x006F, 0, -20, 19, 20, 19, 0x0000D5D9 ),           /* 'o' */
  EW_GLYPH( 0x0070, 0, -20, 18, 28, 19, 0x0000D8D4 ),           /* 'p' */
  EW_GLYPH( 0x0071, 1, -20, 17, 28, 19, 0x0000DC1A ),           /* 'q' */
  EW_GLYPH( 0x0072, 1, -20, 17, 20, 19, 0x0000DF3C ),           /* 'r' */
  EW_GLYPH( 0x0073, 0, -20, 19, 20, 19, 0x0000E14E ),           /* 's' */
  EW_GLYPH( 0x0074, 1, -25, 17, 25, 19, 0x0000E4C9 ),           /* 't' */
  EW_GLYPH( 0x0075, 1, -20, 17, 20, 19, 0x0000E762 ),           /* 'u' */
  EW_GLYPH( 0x0076, 0, -20, 19, 20, 19, 0x0000E950 ),           /* 'v' */
  EW_GLYPH( 0x0077, 0, -20, 19, 20, 19, 0x0000EC43 ),           /* 'w' */
  EW_GLYPH( 0x0078, 1, -20, 17, 20, 19, 0x0000EF9B ),           /* 'x' */
  EW_GLYPH( 0x0079, 0, -20, 19, 28, 19, 0x0000F2F7 ),           /* 'y' */
  EW_GLYPH( 0x007A, 1, -20, 17, 20, 19, 0x0000F70B ),           /* 'z' */
  EW_GLYPH( 0x007B, 3, -30, 13, 38, 19, 0x0000FA1F ),           /* '{' */
  EW_GLYPH( 0x007C, 8, -30, 3, 38, 19, 0x0000FD6A ),            /* '|' */
  EW_GLYPH( 0x007D, 3, -30, 13, 38, 19, 0x0000FDE8 ),           /* '}' */
  EW_GLYPH( 0x007E, 2, -15, 15, 5, 19, 0x00010136 ),            /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 19, 0x00010245 ),
  EW_GLYPH( 0x00A1, 7, -17, 5, 25, 19, 0x00010245 ),
  EW_GLYPH( 0x00A2, 3, -25, 13, 25, 19, 0x00010304 ),
  EW_GLYPH( 0x00A3, 1, -25, 17, 25, 19, 0x00010556 ),
  EW_GLYPH( 0x00A5, 0, -25, 19, 25, 19, 0x00010843 ),
  EW_GLYPH( 0x00A6, 7, -30, 5, 37, 19, 0x00010C80 ),
  EW_GLYPH( 0x00A7, 1, -25, 17, 30, 19, 0x00010D6F ),
  EW_GLYPH( 0x00A8, 3, -24, 13, 3, 19, 0x00011231 ),
  EW_GLYPH( 0x00A9, 1, -26, 17, 27, 19, 0x00011285 ),
  EW_GLYPH( 0x00AA, 3, -25, 13, 14, 19, 0x0001174A ),
  EW_GLYPH( 0x00AB, 2, -18, 15, 13, 19, 0x00011902 ),
  EW_GLYPH( 0x00AC, 2, -16, 15, 8, 19, 0x00011B56 ),
  EW_GLYPH( 0x00AD, 1, -14, 17, 3, 19, 0x00011C65 ),
  EW_GLYPH( 0x00AE, 1, -26, 17, 17, 19, 0x00011D0A ),
  EW_GLYPH( 0x00AF, 2, -25, 15, 3, 19, 0x000120D0 ),
  EW_GLYPH( 0x00B0, 3, -26, 13, 15, 19, 0x0001217E ),
  EW_GLYPH( 0x00B1, 2, -20, 15, 20, 19, 0x00012353 ),
  EW_GLYPH( 0x00B2, 5, -25, 9, 14, 19, 0x00012594 ),
  EW_GLYPH( 0x00B3, 5, -25, 9, 12, 19, 0x0001270D ),
  EW_GLYPH( 0x00B4, 7, -25, 8, 5, 19, 0x00012859 ),
  EW_GLYPH( 0x00B6, 1, -25, 17, 33, 19, 0x000128FE ),
  EW_GLYPH( 0x00B7, 7, -14, 5, 4, 19, 0x00012C00 ),
  EW_GLYPH( 0x00B8, 7, 2, 5, 6, 19, 0x00012C2A ),
  EW_GLYPH( 0x00B9, 6, -25, 7, 14, 19, 0x00012C72 ),
  EW_GLYPH( 0x00BA, 3, -25, 13, 14, 19, 0x00012D33 ),
  EW_GLYPH( 0x00BB, 2, -18, 15, 13, 19, 0x00012EC1 ),
  EW_GLYPH( 0x00BC, 0, -25, 19, 25, 19, 0x00013112 ),
  EW_GLYPH( 0x00BD, 0, -25, 19, 25, 19, 0x00013541 ),
  EW_GLYPH( 0x00BE, 0, -25, 18, 25, 19, 0x000139A7 ),
  EW_GLYPH( 0x00BF, 1, -17, 17, 25, 19, 0x00013E54 ),
  EW_GLYPH( 0x00C0, 1, -30, 17, 30, 19, 0x0001417F ),
  EW_GLYPH( 0x00C1, 1, -30, 17, 30, 19, 0x000145DD ),
  EW_GLYPH( 0x00C2, 1, -30, 17, 30, 19, 0x00014A38 ),
  EW_GLYPH( 0x00C3, 1, -30, 17, 30, 19, 0x00014ED5 ),
  EW_GLYPH( 0x00C4, 1, -30, 17, 30, 19, 0x00015396 ),
  EW_GLYPH( 0x00C5, 1, -30, 17, 30, 19, 0x000157D6 ),
  EW_GLYPH( 0x00C6, 0, -25, 19, 25, 19, 0x00015C15 ),
  EW_GLYPH( 0x00C7, 1, -25, 17, 33, 19, 0x00015F90 ),
  EW_GLYPH( 0x00C8, 1, -30, 17, 30, 19, 0x0001635C ),
  EW_GLYPH( 0x00C9, 1, -30, 17, 30, 19, 0x00016726 ),
  EW_GLYPH( 0x00CA, 1, -30, 17, 30, 19, 0x00016AED ),
  EW_GLYPH( 0x00CB, 1, -30, 17, 30, 19, 0x00016EE4 ),
  EW_GLYPH( 0x00CC, 1, -30, 17, 30, 19, 0x00017290 ),
  EW_GLYPH( 0x00CD, 1, -30, 17, 30, 19, 0x00017610 ),
  EW_GLYPH( 0x00CE, 1, -30, 17, 30, 19, 0x0001798D ),
  EW_GLYPH( 0x00CF, 1, -30, 17, 30, 19, 0x00017D3A ),
  EW_GLYPH( 0x00D0, 0, -25, 19, 25, 19, 0x0001809C ),
  EW_GLYPH( 0x00D1, 1, -30, 17, 30, 19, 0x000183D6 ),
  EW_GLYPH( 0x00D2, 1, -30, 17, 30, 19, 0x000187BD ),
  EW_GLYPH( 0x00D3, 1, -30, 17, 30, 19, 0x00018BAF ),
  EW_GLYPH( 0x00D4, 1, -30, 17, 30, 19, 0x00018F9E ),
  EW_GLYPH( 0x00D5, 1, -30, 17, 30, 19, 0x000193BC ),
  EW_GLYPH( 0x00D6, 1, -30, 17, 30, 19, 0x00019811 ),
  EW_GLYPH( 0x00D7, 3, -20, 13, 12, 19, 0x00019BE5 ),
  EW_GLYPH( 0x00D8, 0, -26, 19, 28, 19, 0x00019DEA ),
  EW_GLYPH( 0x00D9, 1, -30, 17, 30, 19, 0x0001A284 ),
  EW_GLYPH( 0x00DA, 1, -30, 17, 30, 19, 0x0001A5C6 ),
  EW_GLYPH( 0x00DB, 1, -30, 17, 30, 19, 0x0001A905 ),
  EW_GLYPH( 0x00DC, 1, -30, 17, 30, 19, 0x0001AC75 ),
  EW_GLYPH( 0x00DD, 0, -30, 19, 30, 19, 0x0001AF94 ),
  EW_GLYPH( 0x00DE, 1, -25, 17, 25, 19, 0x0001B3AB ),
  EW_GLYPH( 0x00DF, 0, -26, 19, 26, 19, 0x0001B6BE ),
  EW_GLYPH( 0x00E0, 0, -27, 18, 27, 19, 0x0001BA99 ),
  EW_GLYPH( 0x00E1, 0, -27, 18, 27, 19, 0x0001BEBE ),
  EW_GLYPH( 0x00E2, 0, -26, 18, 26, 19, 0x0001C2E1 ),
  EW_GLYPH( 0x00E3, 0, -26, 18, 26, 19, 0x0001C725 ),
  EW_GLYPH( 0x00E4, 0, -26, 18, 26, 19, 0x0001CB7F ),
  EW_GLYPH( 0x00E5, 0, -27, 18, 27, 19, 0x0001CF6C ),
  EW_GLYPH( 0x00E6, 0, -20, 19, 20, 19, 0x0001D3A5 ),
  EW_GLYPH( 0x00E7, 1, -20, 17, 28, 19, 0x0001D723 ),
  EW_GLYPH( 0x00E8, 1, -27, 17, 27, 19, 0x0001DAA7 ),
  EW_GLYPH( 0x00E9, 1, -27, 17, 27, 19, 0x0001DEE1 ),
  EW_GLYPH( 0x00EA, 1, -26, 17, 26, 19, 0x0001E319 ),
  EW_GLYPH( 0x00EB, 1, -26, 17, 26, 19, 0x0001E773 ),
  EW_GLYPH( 0x00EC, 1, -27, 17, 27, 19, 0x0001EB76 ),
  EW_GLYPH( 0x00ED, 1, -27, 17, 27, 19, 0x0001EE83 ),
  EW_GLYPH( 0x00EE, 1, -26, 17, 26, 19, 0x0001F18E ),
  EW_GLYPH( 0x00EF, 1, -26, 17, 26, 19, 0x0001F4BB ),
  EW_GLYPH( 0x00F0, 1, -26, 17, 26, 19, 0x0001F791 ),
  EW_GLYPH( 0x00F1, 1, -26, 17, 26, 19, 0x0001FB15 ),
  EW_GLYPH( 0x00F2, 0, -27, 19, 27, 19, 0x0001FE43 ),
  EW_GLYPH( 0x00F3, 0, -27, 19, 27, 19, 0x00020243 ),
  EW_GLYPH( 0x00F4, 0, -26, 19, 26, 19, 0x00020641 ),
  EW_GLYPH( 0x00F5, 0, -26, 19, 26, 19, 0x00020A5F ),
  EW_GLYPH( 0x00F6, 0, -26, 19, 26, 19, 0x00020E93 ),
  EW_GLYPH( 0x00F7, 2, -21, 15, 14, 19, 0x0002125A ),
  EW_GLYPH( 0x00F8, 0, -23, 19, 26, 19, 0x00021431 ),
  EW_GLYPH( 0x00F9, 1, -27, 17, 27, 19, 0x00021882 ),
  EW_GLYPH( 0x00FA, 1, -27, 17, 27, 19, 0x00021B67 ),
  EW_GLYPH( 0x00FB, 1, -26, 17, 26, 19, 0x00021E4A ),
  EW_GLYPH( 0x00FC, 1, -26, 17, 26, 19, 0x0002214F ),
  EW_GLYPH( 0x00FD, 0, -27, 19, 35, 19, 0x000223FD ),
  EW_GLYPH( 0x00FE, 0, -26, 18, 34, 19, 0x00022914 ),
  EW_GLYPH( 0x00FF, 0, -26, 19, 34, 19, 0x00022CC9 ),

  EW_FONT_PIXEL( ApplicationNumbersG, 0x000231A9 )              /* ratio 49.17 % */
    0xEFBEFD3C, 0xFBEFBEFB, 0xF83F6FBE, 0x9CE735BE, 0xE739CE73, 0x1E27DF5C, 0x0013C000,
    0x00000000, 0x739CE735, 0x00E739CE, 0xDF7DF79C, 0xF7DF7DF7, 0x3900BFDD, 0x8C6318C6,
    0xDE83FA81, 0xF7BDEF7B, 0x003C61FE, 0x000E16A0, 0x8000A1F0, 0x0000040C, 0x24080003,
    0x00481800, 0x400143E0, 0x3007C4F6, 0x85FFBDF6, 0x03DA801E, 0x5E00BBE4, 0xFDEF7D9E,
    0xC691804F, 0xA2C00037, 0x00780001, 0x00088F00, 0x000BBC40, 0x00017CC0, 0xEDF00000,
    0x500007BD, 0x00058C63, 0x23200000, 0xCFB00002, 0x00000539, 0x00002200, 0x40003A11,
    0xBDECF334, 0xEF7BDEF7, 0xD33EF7BD, 0x017DEF7B, 0x00000000, 0x00000000, 0xEF7BC000,
    0xF7B8017D, 0xE0003FDE, 0xEE30EF77, 0x0000017D, 0x00000000, 0x03BDC400, 0x0003EF71,
    0x00000000, 0x00000000, 0x7BBF0000, 0xC3DEF7D8, 0xC0005F77, 0x39DF3677, 0x8E9EF367,
    0x24446648, 0x00000223, 0x00000000, 0xBF000000, 0xDEF7D87B, 0x005F77C3, 0xDF3677C0,
    0x9EF36739, 0x4466488E, 0x00022324, 0x00000000, 0x00000000, 0x007DEF00, 0x22000000,
    0x11111862, 0x9EFB5011, 0x39EF1E73, 0xF8C69CE7, 0x1BC00006, 0xDF4EF77C, 0x17DEF7BD,
    0x400078C5, 0x00000F04, 0x03C08000, 0x078C1800, 0xBBE1F800, 0xBDEEFA77, 0x01AC0F77,
    0xBFC0E300, 0xE2172000, 0xD3BDEF77, 0x1F8BEF77, 0x018B3000, 0x0008D800, 0x00000000,
    0x1064D800, 0x8C311111, 0xEB145588, 0x79CE739C, 0xF134E7BC, 0x2FC80003, 0x7BDEF759,
    0x7BDDF4EF, 0x0000BFEF, 0xEF7FE780, 0xFDF42F3D, 0x1CC44E81, 0xF4881C78, 0x462A7F9D,
    0xC89E0146, 0x004F3F09, 0x00071E00, 0x000A3230, 0x0004F3F0, 0x0C0071E0, 0x80A32326,
    0x34DEFB48, 0x74009E7E, 0x038F53C0, 0xCE739CF0, 0x014646FD, 0x3CFC1110, 0x1C780001,
    0xA8C8C000, 0xFF7BDCEF, 0x3CF3F005, 0xBE65544F, 0xD4338F00, 0x602477EF, 0x12491464,
    0x0013CFC0, 0x0001C780, 0x00028C8C, 0x00013CFC, 0x32781C78, 0x5191808A, 0x3E7FE30C,
    0x413CFC03, 0xE46C813D, 0xF7BDEE77, 0xFD8C0BDE, 0x41B80004, 0x39CE73ED, 0x6FC60C60,
    0x28044444, 0xA2E000FC, 0xC0000000, 0xC28004C1, 0xA87C8001, 0xA0DF0005, 0xDEF7BDEF,
    0x09FDEF7B, 0xF06F8000, 0xC539CFFC, 0x62CBE739, 0x8811197C, 0x03F07888, 0x00018380,
    0x30000989, 0x00060000, 0x38004C0C, 0x0AC003F8, 0x16200056, 0x81111FF1, 0x8C9D0888,
    0xCE29CE7D, 0x4FD89F39, 0x17BDC000, 0xBD400000, 0x4BEF7BFF, 0x41337EFC, 0x39F632EC,
    0xEC697DA7, 0x8A311111, 0xE0288A06, 0x00000030, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0CFE0008, 0x016213C0,
    0x93DFD0BE, 0xE9FEA111, 0x34E7FEF9, 0x11CDFFE3, 0xFFBDEF78, 0xDCE40077, 0xF39CFA1F,
    0x2226CF4B, 0x2F1A76A2, 0xE04CCD10, 0x38300A09, 0x00000400, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00648807,
    0x9111592F, 0xA3896FCF, 0x657FF9CF, 0x98C407FC, 0x04003DBF, 0xBFFBF000, 0x31FBE00F,
    0xEF81FE73, 0x07E0D7A9, 0xC63F3162, 0x1EC455C8, 0xFEFFD83C, 0x3180F623, 0x33BFD128,
    0x5622B900, 0xFFE75005, 0xD4044185, 0x3BE7BF0B, 0xB0FAC183, 0xFF2467BE, 0x231F0041,
    0x203F59FE, 0x0FEE23D2, 0x47FFFFD0, 0x2FBBF002, 0x00000000, 0x00000000, 0x6F7BDEEB,
    0x7BDEF799, 0x3AC0001F, 0x9E539CE7, 0x8F39CE73, 0x44608888, 0x00000444, 0x00000000,
    0xDEF7B800, 0x181C241F, 0x84891130, 0x22227F09, 0x22222222, 0xE73AC222, 0x39CE739C,
    0xCE739CE7, 0xBDE00003, 0x0000BEF7, 0x3EF75000, 0x03D5A000, 0x00D0CF00, 0x00033DA0,
    0x88006A56, 0x78004CD7, 0x72001A23, 0xBF00019A, 0x31800688, 0xE5A000BD, 0x0D2A8002,
    0x0078DA00, 0x001A19E0, 0x58002AB4, 0xEBC001A9, 0x11D00019, 0xAD39000D, 0x445F8004,
    0x6F4E4003, 0x162BC000, 0x00695400, 0xC00272D0, 0x60003433, 0xF7BDEEFC, 0x6FCF7BDE,
    0x1005FEA0, 0x10BE2FF5, 0x34E739DF, 0xDF8335E2, 0x87F11113, 0x40F9367C, 0x64EE0894,
    0xC3D61581, 0xF3F8060C, 0x25900125, 0x7C3C0007, 0x01E3E000, 0x00954A80, 0x000FE7F0,
    0xF0005896, 0x38000A84, 0x12C8001C, 0x130F0005, 0x00FC7C00, 0x0031A460, 0x207E3E30,
    0x4C5AC589, 0x193730F0, 0x7705602A, 0x8888EC06, 0x2F8F92F9, 0xF39CE7D0, 0x7FA97886,
    0x0BFD4401, 0xEF7BDEEB, 0x00003FBD, 0xF39CEB00, 0x18888002, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x10000000, 0x20311111, 0xCFA22222, 0xA8BCE739, 0x0D39CE73, 0xDEE78000, 0xF7BDEF7B,
    0x80012F9E, 0x73C0F678, 0x9CE739CE, 0x8885C45D, 0xBF188888, 0xF8000C64, 0x0F0007E1,
    0x00240006, 0x3C000240, 0xB0F80048, 0x906F8801, 0xF7BBF50F, 0x43CF7BDE, 0x02BF3CBC,
    0x3F12BE30, 0xE739FFAC, 0x158BBB9C, 0x8888CE8C, 0x001F1B00, 0x10003C4C, 0x00000000,
    0x00000000, 0x33000000, 0x22222222, 0x73BE0222, 0x9CE739CE, 0x0006CE73, 0xF7BDEEB0,
    0xBDEF7BDE, 0x20000DE7, 0xCE759FE6, 0x739CE739, 0x2268C97E, 0xA2222222, 0x8C00260E,
    0x0C000622, 0x48B8004C, 0x80048000, 0xA200263F, 0x7C400188, 0xF73C0BC1, 0xB98A7BDE,
    0x78090000, 0x0F6739CE, 0x111101AA, 0x003304E3, 0x00288B90, 0xC003F8B8, 0x00000083,
    0x00020F00, 0xC800FE36, 0x22222A22, 0x9C622222, 0xCE77C560, 0x739CE739, 0x003460F6,
    0x000FF988, 0xDEF7BDDF, 0x000F9000, 0xC80029A0, 0xD00093C7, 0xE3E40034, 0x5E680049,
    0x0D47C800, 0x002E6800, 0x00051964, 0x9000D0BF, 0xF80028CB, 0x72001785, 0xFC000F19,
    0xB90007C2, 0x5F8004E4, 0x258001F8, 0x71080026, 0xDEF7BDEF, 0x00FF7389, 0xF7BDEE00,
    0x9DEF7BDE, 0x000FF738, 0x00000000, 0xF7000000, 0xBDEF7BDE, 0xEF7BDEF7, 0x7000001F,
    0x9CE739CE, 0x2206CE73, 0x22222222, 0x00000002, 0x00000000, 0x00000000, 0x11111111,
    0xE739CE00, 0x37CE739C, 0xF6788000, 0xEF7BDEE3, 0xFBDEF7BD, 0xC000BF06, 0x8002C49C,
    0x2400361F, 0x02040026, 0x04000000, 0x13120002, 0x007F0A00, 0x2222A1F8, 0xC6222222,
    0x9CE3506F, 0xE739CE73, 0x07E45D9C, 0x20EE7200, 0xF7BDFFDF, 0x7DEF7BDE, 0x00267711,
    0xE7BC4998, 0x69CE739C, 0x1119AC6C, 0x89811111, 0x0130000D, 0x00000000, 0x30000000,
    0x22222223, 0xCE73BE00, 0xFB9CE739, 0xFA80001B, 0xEF7BEC07, 0xC49FF7BD, 0x50FC800B,
    0x00089000, 0x00000000, 0x00000000, 0x30130000, 0xB01B1310, 0x8CD63731, 0xE0F5C888,
    0xCF78933F, 0xC8DFE739, 0x80267715, 0xF7B8B731, 0xBDEF7BDE, 0xEF7BDEF7, 0xF00003FD,
    0x39CE7389, 0xCE739CE7, 0x44498879, 0x44444444, 0x80005628, 0x8000FC19, 0xF0004A8F,
    0x78001724, 0x630002C9, 0x2F0001F0, 0x3E400131, 0x1F0000AC, 0x5260003E, 0xE0CC0003,
    0xF23F0000, 0x7C950001, 0x2625C000, 0x0562C800, 0x03E1F800, 0x01A8B100, 0x00706600,
    0x007C8F80, 0x007C93C0, 0x004C4BC0, 0x002B0630, 0xBDFFDE20, 0xFF7BDEF7, 0x267FC06F,
    0x6B1FE720, 0xB39CFB50, 0x11F16307, 0x718888DF, 0x2A489F82, 0x030C3E40, 0xE0444809,
    0x2E040E02, 0x090640E0, 0x15142248, 0x378A1F20, 0xA222BFC4, 0xFC66884E, 0x739DF8C3,
    0x24EE437E, 0x93C8004F, 0x7B9D649C, 0x578C99EF, 0xF103AA0D, 0x1C6C6A0E, 0x4C4A87C0,
    0x1204E240, 0x000090B0, 0x88580902, 0xC81803C4, 0x1F80FE3F, 0x9BD413F6, 0x20DF9111,
    0xFF982FCB, 0x21FFCE73, 0x057F9E5E, 0x917F9E20, 0x7BDEFFEF, 0xEEF7BDEF, 0x099DC437,
    0x331DCC60, 0x739CF789, 0x1B9C8DFE, 0xE4444673, 0xD89FF07A, 0x2C263F80, 0x00002240,
    0x00000000, 0x00000000, 0x08002C00, 0x7C28000C, 0x62222223, 0x3EE417C0, 0x5E739CE7,
    0x00057FC8, 0xDEE77E30, 0xF7BDEF7B, 0x00000003, 0x00000000, 0xC00040C0, 0x111114C6,
    0x1EB91111, 0xE739F5FC, 0xBFCE739C, 0x8C001391, 0x7BDEE3B9, 0x7B8000FF, 0x0003FDEF,
    0xDEF70000, 0xDC0007FB, 0x001FEF7B, 0x7FBDEF70, 0x00000000, 0x0FEF7BDC, 0x980C0E12,
    0x84C24488, 0x000C003F, 0xF5803F9E, 0x26DBC005, 0x0BF537E0, 0x0B7C5762, 0xFFF23D8C,
    0xD8E7FA80, 0x6A2FCC03, 0xEA37E807, 0xA787F807, 0xE33FCF00, 0x47B1809B, 0xFD880DBC,
    0xD7C01F58, 0xF5801D9E, 0xF003D8C5, 0x00FF33FC, 0x10008F63, 0x77C001FB, 0xDEF7BDEF,
    0x17BDEF7B, 0xCE739C00, 0x739CE739, 0x888889CE, 0x08888888, 0x22000000, 0x22222222,
    0x739CE222, 0x9CE739CE, 0x88000E73, 0x017F8001, 0x8804DF10, 0xF806DE27, 0xD600FADA,
    0xC00ECF17, 0x13B18FF3, 0x5DC8F630, 0x7C57FC80, 0x11BF1013, 0x149E036F, 0x917D607F,
    0xADBC07FF, 0x69BF00F6, 0x977202FE, 0x23B8C17E, 0x9FE205BE, 0x51007FF9, 0x5FCC007B,
    0xC00BC400, 0x7BDEF7BA, 0x9EF7BDEF, 0x98800037, 0xE739D67F, 0xF9CE739C, 0x8889A325,
    0x3A888888, 0x8A300098, 0x48D80028, 0x00008000, 0xE3F80008, 0x31164001, 0x98271800,
    0x77BFF580, 0x5F03460F, 0x07F3C427, 0xE77F23E6, 0xF005F39C, 0x0222B717, 0x0012B4C0,
    0x94000B84, 0x4EE80007, 0x000AC000, 0xDD600000, 0x00007F7B, 0x00000000, 0xEE7BC000,
    0x7BDEF7BD, 0x6F82F9EF, 0x7E788006, 0x739EF1E2, 0x9CE739CE, 0x88CC3CA5, 0xF8888888,
    0x180008C4, 0x10000000, 0xFA800111, 0x801A739F, 0x580012F8, 0xC0037751, 0x018001B5,
    0x60000000, 0x3F5C0000, 0xB8C56000, 0x2007BCDB, 0xD40000BE, 0x739CE739, 0x110019CE,
    0x00111111, 0x00000000, 0x00293000, 0xDEEFD230, 0xF7BDEF7B, 0x5B877BDE, 0xDDFC8000,
    0xE739CE73, 0x19CE739C, 0xEF7BDD60, 0xC1FC009D, 0x0A08A005, 0x0C930640, 0x0F0F8580,
    0xC9919FC0, 0xC5A62806, 0x7F6C1800, 0x31E1401E, 0x0C0C0188, 0x0CD80A0F, 0x0F03F922,
    0x32058B13, 0x0993F8D8, 0x0B030785, 0xFC1E062E, 0x922121E1, 0x58160C42, 0xEE783C0C,
    0x283EF7BD, 0x0C180036, 0x39CE73EC, 0x1C879B1B, 0x82311111, 0xE02608C7, 0x00C1F221,
    0x01C6D40C, 0x0785DC1C, 0xBDEEA0F0, 0xEF7BDEF7, 0x017CF7BD, 0x03B3C400, 0x39CE73EC,
    0x903F907B, 0x4E311111, 0xB20024F0, 0x71B00050, 0x00206000, 0xFE000200, 0xA0F00038,
    0x992FC800, 0x7BDEE709, 0x5EA1FFEF, 0xB04CC000, 0xFCE739CF, 0x8C80F21F, 0x06FC8888,
    0x0F8001E3, 0x0B0A0017, 0x00031200, 0x12240000, 0x000F0A00, 0x1190D87C, 0x60DF9111,
    0x39CFB03C, 0xE21FFCE7, 0xFFA88002, 0x7BDF6780, 0xDEF7BDEF, 0x0DF5837B, 0xFA2F9000,
    0x39CE739C, 0xB05F84E7, 0x44444456, 0x01785044, 0x00064910, 0x00000260, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x088004C0, 0xE1600032,
    0x6B0F8005, 0x44444445, 0xCFA16304, 0x739CE739, 0x00EFD04E, 0xF7BDDF80, 0xBDEF7BDE,
    0x00097CF7, 0xBC13B3C4, 0x76739CE7, 0x11182F11, 0x497E3111, 0x50F8000D, 0x07F03000,
    0x00008580, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00085800, 0xF8004818, 0x111183F0, 0x8C97E311, 0xE739EF01, 0x01C45D9C, 0xF4ECF100,
    0xBDEF7BDC, 0xEF7BDEF7, 0x0001F7BD, 0x39CE7500, 0xCE739CE7, 0x44444079, 0x00444444,
    0x00000000, 0x00000000, 0x00000000, 0xDD400000, 0xF7BDEF7B, 0x40000006, 0x39CE739D,
    0x444004E7, 0x00044444, 0x00000000, 0x00000000, 0x00000000, 0x44400000, 0x44444444,
    0x9CE73A80, 0xE739CE73, 0xDE00003C, 0xF7BDEF7B, 0xBDEF7BDE, 0x00002EF7, 0xCE739CF0,
    0x739CE739, 0x88888C16, 0x00888888, 0x00000000, 0x00000000, 0x00000000, 0x11800000,
    0x01111111, 0xCE739CF0, 0x003CE739, 0xDEF30000, 0xF7BDEF7B, 0x00000001, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x7BC40000, 0xDEF7BDEE, 0x21BDEF7B, 0x400033FE,
    0x739F720F, 0x9CE739CE, 0x11DC4588, 0x11111111, 0x4004A82A, 0x07000FE2, 0x00000009,
    0x00000000, 0xF0000000, 0x7BDEF7BB, 0x000002EF, 0x3E739DF0, 0x98888800, 0x00000000,
    0x00000000, 0x00030700, 0x2A001B12, 0x2C4004A8, 0x444456E2, 0xF20EF04C, 0xE739CE77,
    0x000CF603, 0x01DEF7B8, 0x0BDEF718, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xEF7BEC00, 0x006EF7BD, 0x39DF0000, 0x3E739CE7, 0x11111980, 0x00001311,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x78000000, 0xDEF7BDEE, 0xF7BDEF7B,
    0x0000FBDE, 0xE739CE78, 0x39CE783C, 0x22223CE7, 0x44446062, 0x00000004, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x44000000, 0x88C0C444, 0x39CF0888, 0xCF079CE7, 0x079CE739, 0xEE780000, 0x7BDEF7BD,
    0x00001DEF, 0x39CE73C0, 0x44003CE7, 0x000C4444, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x580000C0, 0xC93C0048,
    0x11111108, 0xF0FCF111, 0xE739CE7A, 0x17CE739C, 0x640007CC, 0xBDEEFCBF, 0x7BDF600F,
    0x83BC001F, 0x935000F9, 0x8F88017C, 0x82F80038, 0x8AB00077, 0x978C005A, 0x827000F8,
    0x9378002F, 0x933C0055, 0x8FE400D1, 0xA0E80038, 0x00700013, 0x006B0560, 0x02E2FFE0,
    0x068C1AC0, 0x00398B80, 0x01712630, 0x00B183A0, 0x09BC3F10, 0x1788A780, 0x26A0DE00,
    0x2745F200, 0x5E20D600, 0xF9A8B800, 0x003EF7BB, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x44446000, 0x44444444, 0x39CE7BC0, 0xCE739CE7, 0xFF000069, 0xDC01EF7B,
    0x220FEF7B, 0x01E000C0, 0x7F048013, 0x00480E00, 0xE1005806, 0x47802901, 0x0C090604,
    0xC03C3C1E, 0x01C47121, 0x0F483A46, 0x0CB032C0, 0x4887BF80, 0x48452007, 0xE3C5801E,
    0xA4320121, 0xBA400323, 0x23C00586, 0xE380123D, 0x6007F089, 0xE004C588, 0x2000CFE1,
    0xC00063C2, 0x18004C23, 0xC1C003F8, 0xDEF7FE00, 0xF7BAC03F, 0x00005907, 0x12A00017,
    0x0007E000, 0x100002B0, 0x1F0A0013, 0x0B249C00, 0x005C3E00, 0x00254158, 0xE000FC4C,
    0x2000560B, 0xF000988B, 0x518003E2, 0xC5C00164, 0x6A4A8005, 0x1F0FC000, 0x5D60CC00,
    0x04C49800, 0x00083780, 0xF0000588, 0x028C0001, 0x7BDEEFD4, 0xFEF7BDEF, 0x015F9E06,
    0x1F897FA8, 0xF39CFFE6, 0x066BC49F, 0x91119BCF, 0xE373916F, 0x87EC5C05, 0x0AC28018,
    0x00240006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x32000304, 0xE6140489, 0xD8B80D0F, 0x233A7833, 0x5622DF22, 0x9CFFD634, 0xC7C49FF3,
    0xFA8015FC, 0xF7BDDF97, 0xBDEF7BDE, 0x0001BCF7, 0xEF03FCC4, 0x3D9CE739, 0x11182F18,
    0xB04E3111, 0x88B90002, 0x3F8B8002, 0x00183C00, 0x00000000, 0xC00244C0, 0x2C4005C6,
    0x1111182C, 0x13C1FE31, 0xCE739EF0, 0x01FC83D9, 0x80767880, 0xEF7BDEEF, 0x000BE7BD,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xBF500000, 0xF7BDEF7B, 0x781BFBDE,
    0xFEA0057E, 0x7FF30FC5, 0xC43FF9CE, 0x9BCF0567, 0x115F9111, 0x1C05E373, 0x280189EC,
    0x020124AC, 0x00000009, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x02410000, 0x00C1F204, 0x2F1B983C, 0x833FE2E0, 0xC888CDE7, 0x3F1988AF, 0xE739FFCC,
    0xCF1F10FF, 0xBFD400AF, 0xEF7BBF50, 0x1BFBDE47, 0x13949E00, 0x00F8FC00, 0xE0A30CC0,
    0xF7BDEF7F, 0x3DEF7BDE, 0x3100006F, 0x9CEF8077, 0xF24ECE73, 0x22223303, 0x002541C6,
    0x8001E146, 0x24003F8D, 0x00000002, 0x6C00240C, 0x1164005C, 0x4444660B, 0xC074138C,
    0x6739CE77, 0x00027A0F, 0xF7BEC0FE, 0x3C1FFBDE, 0x98BC800D, 0xC4518001, 0x031B0003,
    0x00071200, 0x00000000, 0x00000000, 0x60000000, 0xF7BDCEFC, 0xBDEF7BDE, 0x0057FA83,
    0x7BC42F80, 0x9CE739CE, 0x98278673, 0x22222233, 0x01F8D822, 0xC0006240, 0x00000004,
    0x90009130, 0xE3600078, 0x33C0015D, 0xDEF73E88, 0x6E07767B, 0x3B58C400, 0x80267719,
    0x7FF7883C, 0xBFF7BDEF, 0xEC800A30, 0x7F000D89, 0x0098000C, 0x02000000, 0xFE0F0001,
    0x11E1F000, 0x11111111, 0xDA660EF9, 0xCE739CE7, 0x68C9FF39, 0x877A3000, 0xF7BDEF71,
    0xBDEF7BDE, 0x0001DEF7, 0xCE739C60, 0x39CE7859, 0x11110CE7, 0x22223171, 0x00000002,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x7BDFF800, 0xFBDEE201, 0x00000007, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00616206, 0x07C6E616, 0x9833B838, 0xDF22232B, 0xD05F1F22, 0x7FCE73FF,
    0x2FF52F12, 0xF97FA880, 0x60077BDF, 0x0BFF7BDC, 0x6D41E00F, 0x7DC5C05C, 0x35078090,
    0x88300782, 0x060910F4, 0x7816061E, 0x83F8D9B0, 0x0183C18B, 0x9831141E, 0x90F01920,
    0x2E0A0C81, 0xA1FC2C1E, 0x82C7F030, 0x6418FE0C, 0x87898782, 0x19066C05, 0x618181FC,
    0x63C280A2, 0xB8300313, 0x48A00792, 0xE7F0018B, 0x2C036489, 0xC801E262, 0x400325E0,
    0x7F001411, 0xDEFFC170, 0xBDD4003B, 0x00B137F7, 0x00113204, 0x0120E712, 0x38002440,
    0x0001C0C8, 0x44800273, 0xFDDF1226, 0x65812080, 0x264C9262, 0x1260C0D2, 0x2092060C,
    0x29898249, 0x7F083970, 0x4824900C, 0x0B2625FC, 0x904C7969, 0x9A574824, 0x43982208,
    0x4241C894, 0x348CA632, 0x48930983, 0x092E34D3, 0x1BFBFDC9, 0x8970104E, 0xE0CF1D29,
    0xF2C39240, 0x526120C8, 0x82C514A4, 0x24044184, 0x883C4C04, 0x4F7BDC60, 0xEDEF7500,
    0x0E02C451, 0x81F8BAF1, 0x06A1587C, 0x87E1F059, 0x4F260717, 0x982A49E2, 0xC47E0BC1,
    0x9806A3E4, 0x1706A7C1, 0x187592F0, 0x7DC19805, 0x52620178, 0x1BC0078C, 0x091001F0,
    0xF80D4005, 0x0260B800, 0x1622C518, 0xF83D9340, 0x7E7C5900, 0x313403E4, 0x1F20BC4D,
    0x28C3C42A, 0x5C5C1C68, 0x27859164, 0x7C17E4A8, 0x1727E260, 0x2B0FC131, 0x180560BE,
    0x7B9D7883, 0x7BC803EF, 0x03899FEF, 0xC3F1F0F8, 0x4C43C013, 0x46051146, 0x0E3F8152,
    0x0CC2F0F8, 0x0318A02A, 0xF2542C4C, 0xF1FC3F01, 0x8A302627, 0xE013160A, 0x3E09E58F,
    0x5DFC1980, 0x2A4C012A, 0x0FC00B8B, 0x30016427, 0x0007C18A, 0x0009887F, 0x0002B033,
    0x0000D83C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xBDDF8000, 0xEF7BDEF7,
    0x7BDEF7BD, 0xDF00005F, 0x739CE739, 0xB0A739CE, 0x22222223, 0x7A8B2222, 0x0068D000,
    0x0033C53C, 0x600344D0, 0x88013325, 0xFC006897, 0x78C00682, 0x17001318, 0x5067800D,
    0x03468005, 0x00732560, 0x00D12F90, 0x000DE0E8, 0x002E43C6, 0x9E00345C, 0xD00078C1,
    0xE4AC0068, 0xC5F20029, 0x88888889, 0xE05F8888, 0xE739CE77, 0x274E739C, 0xEF7BC000,
    0x7BDEF7BD, 0xCF20005F, 0x869CE739, 0x00888888, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x11100000, 0x73C81111, 0x01A739CE, 0x003BDCF0, 0x003433C0, 0x4000AAD0, 0xDA000695,
    0x3C600098, 0x4740007E, 0xD390002E, 0x8DE0001B, 0xAF100068, 0x65600095, 0xF3F00034,
    0x8730000C, 0x555E0006, 0x1A19E000, 0x04C6B800, 0x03F1E300, 0x002E5A00, 0x001BD390,
    0x00D117E0, 0x0095A720, 0x001A23A0, 0x00033D78, 0x4000D4AC, 0xF7BDE7AB, 0xBDEF7BDE,
    0x9CFA002F, 0x4449CE73, 0x00044444, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x88888000,
    0xE73E8088, 0x0012739C, 0xC0000000, 0x200007F8, 0x0001FE4E, 0x003E34FF, 0xF1588EF0,
    0xE9AC002C, 0x001FADD7, 0x9731FAD5, 0xE7E400DF, 0x138AE859, 0x0F8C6E20, 0xC1FE46FC,
    0x9C07F997, 0x8ADE1F1C, 0xF13C8013, 0x0DFA732C, 0x1FA7E300, 0x11111111, 0x11111111,
    0x9CE71111, 0xE739CE73, 0x39CE739C, 0x00001CE7, 0xBC6099A8, 0x0AEBF3FF, 0x79DFAD44,
    0x21959EDE, 0xFF7F7AE7, 0x7BDCF073, 0xDEF7BDEF, 0x0012FFFB, 0x3C4ECF90, 0xCE739CE7,
    0x3E24BF39, 0x88888888, 0x000A1FA8, 0x9000483C, 0x00000008, 0x73BF2000, 0xDEF7BDEF,
    0x27EC407B, 0xC8378000, 0x39CE7FEF, 0xFBC28367, 0x24444464, 0x4000A248, 0x00000030,
    0x00018200, 0xE0005124, 0x2222B787, 0x24CC1222, 0x739CE77F, 0x9F7106CE, 0x7BFF0000,
    0x000003EF, 0x00000000, 0x00000000, 0x7BBE0000, 0x9EF7BDEF, 0xA20004DF, 0xE7BC17DE,
    0x8DFE739C, 0x22223099, 0x01E15722, 0x003F8D80, 0x00000224, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x02240000, 0x30FE3600, 0x56222222, 0x9CF781E1, 0xAC69CE73,
    0xB7A88004, 0xBDCEFCF1, 0xEF7BDEF7, 0xBF31F7BD, 0xA8D0000A, 0xE739CE7D, 0x0A9E739C,
    0x2222237C, 0x46242222, 0x00B02000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x40000000, 0x62400160, 0x702A0024, 0x88888C9E, 0xBE31A088, 0x9CE739FF, 0x7E63CE73,
    0x00000015, 0x07F7BDCF, 0x00000000, 0x00000000, 0xBF980000, 0xF7BDEF73, 0x6FBC0FDE,
    0x44E40005, 0xE739CFFF, 0x56A0F0BC, 0x80C44446, 0x89000D83, 0x00000004, 0x00000000,
    0x00000000, 0x00000000, 0x80000C00, 0x1FC48000, 0x002A2E00, 0x657F8850, 0x6C80C444,
    0x9CFFDF8C, 0xDEB05E73, 0xF7A0000A, 0x7BDEF7BD, 0xF06F3DEF, 0xCC40035B, 0xFFD0A7BF,
    0x4FF9CE73, 0xACF1B3C6, 0x37C8888C, 0xB00D89D9, 0xC0062678, 0x00026020, 0x00041800,
    0x11984C58, 0xC9D91111, 0x739CEF85, 0xC62FF9CE, 0xFE620003, 0xDEF7BEC1, 0x6F3DEF7B,
    0x0B000000, 0x00010200, 0x2E001B13, 0x8888CCD6, 0x419E0888, 0xCE73FFBC, 0xEC1CE739,
    0xE0000035, 0xEF7B9DF9, 0xEB0177BD, 0x788000AB, 0x39CFFCF1, 0xE4158167, 0xC0111197,
    0xE0400141, 0xEF7BDE00, 0xEF7BE89D, 0xE800001D, 0xB079CE73, 0x106739CE, 0x37031111,
    0x00000222, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xBDEE7DAC, 0xEF7BDEF7, 0x1EBF3FBD, 0x98550001, 0xCE739CFB,
    0x3BCF1B0B, 0xC0622222, 0x858006C0, 0x02C08004, 0x00000000, 0x00000000, 0x00000000,
    0x40000000, 0x42C00160, 0x05C0C002, 0x32B98D80, 0x54062222, 0x9CE7FFA1, 0xEBF05E73,
    0xDAC00011, 0xEF7BDEE7, 0x00001FBD, 0x00000000, 0x8D800089, 0xC8888884, 0x187E15FA,
    0xFE739CE7, 0x000D42BF, 0xFF3FD188, 0x0000EF7B, 0x00000000, 0x00000000, 0xFB000000,
    0xBDEF7BDE, 0x0006FFF7, 0xEF837390, 0x79CE739C, 0x23305C83, 0xC2E62222, 0x262E001F,
    0x00083C00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xDEF7B800, 0x0000003F, 0xEF700000, 0x00007FBD, 0xF7800000, 0xBDEF7BDE,
    0x0000BEF7, 0x9CE73E80, 0x111000F3, 0x00003111, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x11000000, 0x23031111, 0x39F42222, 0xCF079CE7,
    0x059CE739, 0xF7100000, 0x0003FBDE, 0xF7100000, 0x0003FBDE, 0x7BDD6000, 0xDEF7BDEF,
    0xB0001F7B, 0x9CE739CE, 0x22222053, 0x00000022, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x20026000, 0x44445312, 0xD6310F8C,
    0x5D9CE739, 0xBD440178, 0x3BDEFFCB, 0x00000000, 0x00000000, 0x00000000, 0x7BDE6000,
    0x5E78007F, 0xFA800FC6, 0x8C00FE31, 0x0009E42F, 0x26E21FE3, 0xFE213C80, 0x8A6F2009,
    0x2798006F, 0x1BE002E9, 0xE20004F4, 0x0DC40001, 0x7E497C00, 0xA8279800, 0x87E30017,
    0x2CF000B9, 0x7E8005BC, 0xF0012F88, 0x0006E20D, 0x001F904E, 0x0BD41FF2, 0xEB98D180,
    0x7BDEF7BD, 0x000BBDEF, 0x9CE7D000, 0x88800A73, 0x00000888, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x20000000, 0x6E022222, 0x73E84444, 0x758539CE, 0x016739CE, 0xEF7B8800, 0x7BDEF7BD,
    0x2FFFBDEF, 0xECF90001, 0xEC7CE704, 0x03F105F3, 0xE78C9311, 0x0A0003C5, 0x01120009,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xFF000000, 0xF7BDEF7B, 0xDDEF7BDE, 0x58C0001D, 0x739DF07F, 0x306F39CE, 0x8888CC26,
    0x01B0B988, 0xE00022E0, 0x000004C1, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x18000000, 0x7BDEFFDF, 0xFEF7BDEF, 0x3FF8C4BF, 0x9D9F2009,
    0xCEFE41BC, 0x92FCE739, 0x456F0A68, 0x4A354444, 0x88500A04, 0xC0400448, 0x02000180,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x910000C0, 0x11808008, 0x88500781,
    0x2227E850, 0xF1469E22, 0x739DF906, 0x6892F9CE, 0x0049FFC6, 0xF714ECF9, 0xBDEF7BDE,
    0x777BDEF7, 0xAC600007, 0x39CFB03F, 0xC60EECE7, 0x11111902, 0x00D8BD63, 0x8000F0A0,
    0x01800040, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00001800, 0x0C000226,
    0x8888C824, 0x8145E788, 0xE739CE7D, 0x00BE417C, 0xE01DCE40, 0xBDEF7BDC, 0x00DFFEF7,
    0x00000000, 0x00000000, 0x00000000, 0xB0000000, 0xDEF7B9F6, 0xF7BDEF7B, 0x023D7CFE,
    0x6783C600, 0x79CE739F, 0x88DF50A1, 0x7F018888, 0x302001FC, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x40006040, 0x0FC00362, 0x8888CACF, 0xFD0A3018,
    0xF39CE73F, 0x011ADF82, 0xF73EF400, 0xFDEF7BDE, 0x00000000, 0x00000000, 0x00000000,
    0x80000000, 0xBDFFBF58, 0xEF7BDEF7, 0x95DB9E0D, 0x8C2FA800, 0x9CE739DF, 0x1709CE73,
    0x1111115D, 0x01E14111, 0x20004240, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0xFEF10000, 0xDEF7BDEF, 0x2FBDEF7B, 0x0004CF62,
    0xCE7BC9BC, 0x739CE739, 0x66A1E34E, 0x44444444, 0x06C91044, 0x00000000, 0xA488001B,
    0xC1E0001E, 0xF7BDEF77, 0xA17FFBDE, 0x6E720007, 0xC000CFF8, 0xDCF78858, 0xF7BDEF7B,
    0x001F82FE, 0x00019350, 0x000023F8, 0x040C0000, 0x2067F000, 0x22222222, 0xAC515622,
    0xE739CE73, 0x934E739C, 0x9E20002F, 0xF7BAC01B, 0x000000BE, 0x00000000, 0xEF780000,
    0xEF31B7BD, 0x05DEF7BD, 0x39CFA000, 0xE739E167, 0x4456739C, 0x888C5C44, 0x00000888,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00300000, 0x20013020,
    0x0111DE31, 0x4FB98950, 0x0073B803, 0x03BDEFFC, 0xFF7BDCF0, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x01604000, 0x8006C4C0,
    0x888CE63F, 0x93301888, 0xE739CF78, 0xCEE2179C, 0xDEE30004, 0x7B9C007B, 0x06248E6F,
    0x854C82A0, 0xFC3C6C02, 0x4D8501B1, 0x83100F05, 0xA0511428, 0xC031B050, 0x3616171F,
    0x83105078, 0x01192207, 0xF0A1447E, 0x1B1B0A03, 0x50A48C05, 0x831400E4, 0xA3600A4C,
    0x4F00FE14, 0x00A26DB0, 0x01E2943C, 0xF82A3360, 0x51A0F003, 0x3060E400, 0x0A050012,
    0x0DBDEF78, 0xF6F7BDE0, 0x38180041, 0x22600903, 0xC0802627, 0x92001893, 0x7CC08308,
    0x89878127, 0x127F9BE4, 0x0F482249, 0xA63F8713, 0x0606110C, 0x1D226913, 0x21AE064C,
    0x2489023C, 0x0648E51D, 0xD2DA424C, 0x7A60C264, 0x70906594, 0xC8CC88C8, 0xCA240E0C,
    0x781E1694, 0x2369A5B0, 0xA4728221, 0xA43C0322, 0x48132474, 0xF8181E98, 0x200FBDEE,
    0x2FDFBDCE, 0xC42FC068, 0xA05C9A2F, 0x16617E1E, 0xF3CBC06F, 0xC3F10DE0, 0x7C83F14A,
    0xF97C8679, 0xEB835805, 0xB803CF0D, 0x1F895F8C, 0x1D1458C0, 0x13513A00, 0x02781880,
    0x7E205F80, 0xE1E1EA00, 0xFA978029, 0x53A02F06, 0x60D92EBC, 0x0F1A664C, 0xD10DC073,
    0x398D10E8, 0x9A97C868, 0xAC1319A2, 0x5C17E3A4, 0xE7BF1340, 0x80077BDE, 0x13CFBDFF,
    0xE2918028, 0xF803F0B1, 0x09187C58, 0xE2463E28, 0x81CA4601, 0xE3E03F0F, 0x41230783,
    0x1E1640F1, 0x1C12A918, 0x0FE3E0FC, 0x9448C13C, 0xA2858058, 0x8FE00552, 0x400E7F3F,
    0x2C961525, 0x85561F00, 0xFF078007, 0xB2003F3F, 0x00319678, 0x0FC227F0, 0x04C05600,
    0x00542880, 0x00038380, 0x0003C43C, 0xE000164C, 0x54000FE3, 0x0E0002CA, 0x0F10000F,
    0x1930001F, 0xFC7C0009, 0xDEF71800, 0xF7BDEF7B, 0x1DEF7BDE, 0x39C60000, 0xCE739CE7,
    0x44350B39, 0xC4444444, 0x800BC498, 0xC009BC13, 0x40058C1C, 0xF0017136, 0x30007306,
    0x6400D18B, 0x0DE002E3, 0x166000D6, 0xE36400D9, 0xCC1BC005, 0xF9166002, 0x178D9002,
    0x14F06F00, 0x3788B300, 0x22222222, 0x39F62344, 0xCE739CE7, 0x00001919, 0xEE7DAC40,
    0x11EDE602, 0xF446F580, 0xE6A82CFF, 0xA5C032B7, 0x7F14401E, 0x20078180, 0x00000000,
    0x00000000, 0x00000000, 0x80489300, 0x2CC00CC3, 0x3D7E80D5, 0x1B26403F, 0x7DE5BF20,
    0x0B997401, 0x800DE1C0, 0x00002449, 0x00000000, 0x00000000, 0x40000000, 0x90440162,
    0x401B2600, 0x088F4F0F, 0x9F6B4F60, 0xDFF780B3, 0x017BDC15, 0x00000000, 0x00000000,
    0x00000000, 0xBF3DEF00, 0x9F544005, 0x5FF3E807, 0x22209BE2, 0xB001E9BB, 0xFC017886,
    0x04490028, 0x00000000, 0x00000000, 0x00000000, 0x0242C000, 0xF003E4E4, 0xFC00B30E,
    0x6200B7CB, 0xBE007F8B, 0xF4017EF6, 0x4C404E63, 0x120A803E, 0x00000000, 0x00000000,
    0x00000000, 0x20020000, 0x1F9B0049, 0x4AFD4444, 0x7E73E84D, 0xC807EB15, 0xBF00DDEA,
    0xC81EEF7B, 0x30B7877B, 0x2D22C9FE, 0xEE23DFF5, 0x08C557C8, 0x723FC737, 0xF16B87FF,
    0xBC41FF10, 0xFF7BDEE5, 0xEF7B8000, 0xDEF003FD, 0x00005F7B, 0x00000000, 0x00000000,
    0x00373C00, 0xF1000000, 0xE73F7B9D, 0x27BE1BDE, 0xE7D14400, 0x9139CFB5, 0x23218AE4,
    0x00002602, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x003CF240, 0x9FBBE251,
    0x6F0DEF73, 0xF77F2001, 0xE73ED79C, 0x190C4404, 0xF0000011, 0xBDEF7B9E, 0x3D81FEF7,
    0x83BC0003, 0xCE739DFC, 0xB71160D9, 0xA0222222, 0x30012782, 0x000001B0, 0x00000000,
    0x88800000, 0x01111B8B, 0xD616739E, 0x002CE739, 0xDBDCF000, 0x5DEF7BE8, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x11B80000, 0x00111111, 0xCE739CEB, 0x00006739,
    0x0FBDEE70, 0xFF7BDE60, 0x1FC05C4C, 0x10143F1F, 0x4519310F, 0x02A0A814, 0xC1C1FC7F,
    0x882C1981, 0x11605187, 0xE03E0A85, 0x58971FC3, 0x8A1418C0, 0x1C8F8015, 0x5803E09E,
    0x06A5CFC1, 0xC51E2C40, 0x3B23E001, 0x18C003C4, 0xFC00264C, 0x98003E08, 0x22004A81,
    0x0111D83C, 0x429CE718, 0x201E739F, 0x981BEFBF, 0x202DF7DF, 0xD859E79E, 0x0024F3CF,
    0xEF718000, 0xDEF77C2D, 0x9CE71807, 0x79CE7BC2, 0x23011100, 0x00000022, 0x000DEF71,
    0x00000000, 0x7B880000, 0x0000006F, 0x10000000, 0x0000DEF7, 0x00000000, 0xEFC60000,
    0xBDEF7BDC, 0xC61FDEF7, 0x740002BF, 0xCE739DF0, 0x287CE739, 0x2222279E, 0xF8182222,
    0x80000003, 0x22001FC4, 0x1F8002A9, 0xDEF7BBF1, 0x302FCF7B, 0x7F51001F, 0x98C002C4,
    0xF7BBF274, 0xFE0BFBDE, 0x2D40AA2C, 0xC06C191E, 0x30002226, 0x21300021, 0x227F01B1,
    0x9880F514, 0xBDDF0714, 0xE213DEF7, 0x3C0029E5, 0x0019BF03, 0xEE7BC26A, 0x1DDEF7BD,
    0x5E30007C, 0x08180006, 0xB0000000, 0x49A80011, 0xF7BDEEB1, 0x2FEF7BDE, 0x7E4000B8,
    0x9CE73AC5, 0xE739CE73, 0xF7FE1FFC, 0xDEEB07DE, 0x000003FB, 0xFFEEF500, 0xBBBFF7BD,
    0x4737EFC0, 0x7DFAC722, 0xFBBD4B78, 0xE1DFB39C, 0xDFAD3169, 0xE631111C, 0xA32C665E,
    0x5D467401, 0xFF3E001F, 0xEF7D8C54, 0x96252FBD, 0xEF31FF14, 0x46432FBD, 0x101A22B2,
    0x8011AE4C, 0x98001331, 0x00000000, 0x00000000, 0x00400000, 0x1C98D300, 0x9834C003,
    0xCD202F11, 0x798DF148, 0x22197DEF, 0xBDEFB515, 0xF5E4A5F7, 0x5FE7E001, 0x23D002C6,
    0x2AFEA72A, 0x2B2DF590, 0x9DF9E5BC, 0xF7FFEF7B, 0xEFBF17A8, 0xF7CF9049, 0xBFF7CF03,
    0xFFFBDCF7, 0xBDEEB01E, 0x05F3DEF7, 0x587CF100, 0x5E739CE7, 0x1111102A, 0xE800090B,
    0x07BDEF73, 0xBC0015AC, 0x1B39FFAC, 0x9119D046, 0xC0000000, 0x48889E08, 0x739DF2F0,
    0x002B5836, 0x00C80300, 0x0D8C1FCF, 0xFCF017D6, 0x60F6DE03, 0x7E21517D, 0xAF8FDE33,
    0xCAEC4FF5, 0xE4F7E4FF, 0xFF99916F, 0x885D8A81, 0xF1902FC8, 0xB3E77205, 0x16EABB07,
    0x97FE5772, 0x6BF13DF8, 0xC689EFC4, 0x6F80ACB7, 0xE8037E81, 0x888FCC17, 0x88888888,
    0x39CEB088, 0xCE739CE7, 0x003CE739, 0xBDEF7580, 0xEF7BDEF7, 0x0000002D, 0x00000000,
    0x44444440, 0x44444444, 0x739CE758, 0x9CE739CE, 0x0079CE73, 0x77E78000, 0x801EF9EE,
    0x3FFDBFDC, 0x13B7FFDF, 0x1AEF3D8C, 0x3DCEEB51, 0xE7B9E710, 0xFACF7BDE, 0x1F1E839E,
    0x8EC9EF7D, 0x6F58B46F, 0xC545F880, 0x003C553B, 0x1232A278, 0x8C945F88, 0xBDF40671,
    0x9C307467, 0xC9EF7D01, 0x008C860E, 0x3191E2A2, 0x5080262A, 0x003EB151, 0xDE3D26FC,
    0xAF7F85D5, 0xEB7C4BD7, 0xBEB5035B, 0x7FF50275, 0xD9E213F6, 0xFF1807B5, 0xEF7BDCEF,
    0xFFF513BB, 0xFFFFFFFF, 0xFFFFFFFF, 0xCC8AFFFF, 0xCCCCCCCC, 0x80000CCC, 0xF7BDCEFC,
    0xE725F3DE, 0x6BCF1009, 0x739CF30C, 0xF272A3CE, 0x61C44445, 0x00005801, 0x00000000,
    0x60000000, 0x3F81F261, 0xDEF30C6B, 0xD234EF7B, 0xF21D4029, 0xE739CF77, 0x7E025FDC,
    0x000005F7, 0x80000000, 0x44608888, 0xCE758444, 0xE73CA739, 0x001E739C, 0xDEF7BAC0,
    0xF7BDE65B, 0x000007DE, 0x00000000, 0xC0000000, 0x0000BEEF, 0x00000000, 0x11111110,
    0xD6111111, 0x739CE739, 0x9CE739CE, 0xDCF00007, 0x17FDEF7B, 0x39CF3F20, 0x10C4FCE7,
    0x304C5111, 0xDBBDC458, 0x9C46C04C, 0xC441F9F3, 0xC0200A23, 0xDEF73E60, 0xE200E5BB,
    0xCE739CF5, 0xEF73C539, 0xC401E7BD, 0x9CE73C2F, 0x8888789F, 0x5872014A, 0x1FF7B9D6,
    0x73EDB32B, 0x44632B4E, 0x88800104, 0x739E4088, 0xC00059CE, 0x7FAA2398, 0xFCF3BF67,
    0xD6440556, 0xF39D77EC, 0x266BBDFF, 0xEF7B9DF1, 0x7BDEF7BD, 0x27EC4FEF, 0xF0274000,
    0x1620739C, 0x54044460, 0x00FE0000, 0x00000300, 0x80000000, 0x00B80004, 0x20000B00,
    0xDF80001E, 0x7FC40000, 0x88000C8D, 0x0007FFDE, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x05F7BDEF,
    0xEF7BAC00, 0x14240C40, 0xF73CA1FC, 0x73C017DE, 0x0003101E, 0x00000000, 0x9A77BC00,
    0x9CFA0177, 0xDF92CE73, 0x7BDEF7B9, 0x013CE0BE, 0xC18CF9E2, 0x2A69CE7B, 0x4C446627,
    0x0000802C, 0x00000000, 0x00000000, 0x22331301, 0xBC18D626, 0xA4669CE7, 0x39E20153,
    0xC4018132, 0x405FE01D, 0x9BE20BFE, 0x137E2390, 0xD88DBC4F, 0x1D7CDBCB, 0x62FE83EB,
    0x3E7FAC7D, 0x3C76783F, 0x902B3B18, 0x97E2246F, 0xD8D76781, 0x0EE4FD8C, 0xC3B3C5FD,
    0x69D8E7FA, 0xC743EB2C, 0x36F103B3, 0x26F81F58, 0xF7B81B78, 0xFDD6005E, 0x8DF20001,
    0xA001F397, 0x01312663, 0x001B27A8, 0x80007ED0, 0x0004C635, 0x000175E2, 0x0000731D,
    0x31034663, 0x037B4089, 0x3671F38C, 0x0002E54F, 0x7B8C06B4, 0x9D7FBDEF, 0x390000F5,
    0x17B9C5E3, 0x564CC740, 0xBC4F5000, 0xB4013378, 0x8034560E, 0x3BC4C635, 0x5D78801E,
    0x1D0068AC, 0x055BC0CF, 0x56346630, 0xDA02089C, 0x73BE389B, 0x953C19D2, 0xEF7B7E0B,
    0x0D683D8F, 0x0C518C72, 0x0001EB3A, 0x017BDEE2, 0x0007EF78, 0x9C5A2B18, 0x6F1D000F,
    0xA7801312, 0x5A000172, 0xD6560003, 0xABE40003, 0x731D0001, 0x89E30000, 0x81126206,
    0x9CF00DEB, 0xC731F38F, 0xB4400058, 0xDEF73C06, 0x9E3A7F7B, 0x8AC60002, 0xFBDEF75E,
    0x998E802F, 0x53C05F20, 0xE739D6D9, 0x1AD00727, 0x2B005111, 0x3C4441EB, 0xF1ABE424,
    0x567CE73B, 0x541CC740, 0xBB7DFBC5, 0x18D13C61, 0x033CF99E, 0x00006F5C, 0x88058C73,
    0x35A20888, 0xE739CEA0, 0x00AA3A3C, 0x7BDEF700, 0xDDF805FF, 0x3C0BE405, 0xE739CB95,
    0xAD00E4FC, 0xC0288889, 0x24807ACA, 0xC4346F10, 0xF12B7FBD, 0x1C00358B, 0xC41A278C,
    0x5C1D3F39, 0x8944401D, 0x2098C734, 0xAD10A222, 0xF9CE7381, 0x53C6F189, 0x672FC800,
    0x7BDEE034, 0x78DEBFEF, 0x953C0013, 0x0FEF718B, 0x801A35A0, 0x6A30F595, 0xD1ABE400,
    0x731D00D1, 0x803D6A30, 0xA3A344F1, 0x1837AE01, 0x8E6006F5, 0x44F1D0B1, 0x986B4412,
    0x1D5B3FF1, 0xECE0AA3A, 0xC6D8DBBD, 0x318C178A, 0xC7435A46, 0xE000004C, 0x005DEF77,
    0x00000000, 0xDF800000, 0x000177BD, 0x00B10000, 0x00374F00, 0xD8000A90, 0x99640002,
    0x6EA22200, 0xE77C4038, 0xCF4BF39C, 0x013F6203, 0x9BC07EF9, 0x7FEF7D8C, 0x06712602,
    0x02541500, 0x000FE060, 0x09000090, 0x001B0300, 0x0001A82A, 0x2222A70B, 0x77822222,
    0xCE73BF90, 0xB39CE739, 0x0000CFF8, 0xA800018C, 0x093F767D, 0xF7D63100, 0x3E6A003F,
    0xE3000823, 0xFFB9F6FD, 0xEF75800D, 0xC009EFFD, 0x8A005C1F, 0x306400A0, 0xF85800C9,
    0x19FC00F0, 0x62806C99, 0xC1800C5A, 0x1401E7F6, 0xC018831E, 0x80A0F0C0, 0x3F9220CD,
    0x58B130F0, 0x3F8D8320, 0x30785099, 0xE062E0B0, 0x121E1FC1, 0x60C42922, 0x83C0C581,
    0xEF7BDEE7, 0x80036283, 0xE73EC0C1, 0x79B1B39C, 0x111111C8, 0x608C7823, 0x1F221E02,
    0x6D40C00C, 0x5DC1C01C, 0x0A0F0078, 0x90024600, 0x17BBEF4F, 0xD6FFF380, 0xC6208000,
    0xFD801733, 0x6F7F67BF, 0xBFFDAC02, 0xFE004EF7, 0x045002E0, 0x49832005, 0x87C2C006,
    0xC8CFE007, 0xD3140364, 0xB60C0062, 0xF0A00F3F, 0x0600C418, 0x6C050786, 0x81FC9106,
    0x02C58987, 0xC9FC6C19, 0x8183C284, 0x0F031705, 0x1090F0FE, 0x0B062149, 0x3C1E062C,
    0x1F7BDEF7, 0x0C001B14, 0xE739F606, 0x43CD8D9C, 0x1888888E, 0x130463C1, 0x60F910F0,
    0xE36A0600, 0xC2EE0E00, 0xA0507803, 0x14F7BDCE, 0x4785F180, 0xFE30037C, 0xF896FDE1,
    0xD613C827, 0x80DC53D4, 0xBC69CFB1, 0x11106CE7, 0xEF7BDEF3, 0x1FC0088A, 0xA08A005C,
    0xC9306400, 0xF0F85800, 0x9919FC00, 0x5A62806C, 0xF6C1800C, 0x1E1401E7, 0xC0C01883,
    0xCD80A0F0, 0xF03F9220, 0x2058B130, 0x993F8D83, 0xB0307850, 0xC1E062E0, 0x22121E1F,
    0x8160C429, 0xE783C0C5, 0x83EF7BDE, 0xC1800362, 0x9CE73EC0, 0xC879B1B3, 0x23111111,
    0x02608C78, 0x0C1F221E, 0x1C6D40C0, 0x785DC1C0, 0x6B0A0F00, 0xE625F3DF, 0x87AF89BD,
    0x2FE2F678, 0xFF3C7C93, 0x2B7BEB7F, 0x993AA85E, 0xFAD576EB, 0x2BF7F217, 0x7AFDFAC4,
    0xEF7BAC00, 0x3F8013BD, 0x411400B8, 0x9260C801, 0xE1F0B001, 0x3233F801, 0xB4C500D9,
    0xED830018, 0x3C2803CF, 0x81803106, 0x9B0141E1, 0xE07F2441, 0x40B16261, 0x327F1B06,
    0x6060F0A1, 0x83C0C5C1, 0x44243C3F, 0x02C18852, 0xCF07818B, 0x07DEF7BD, 0x830006C5,
    0x39CE7D81, 0x90F36367, 0x46222223, 0x04C118F0, 0x183E443C, 0x38DA8180, 0xF0BB8380,
    0xFF141E00, 0x7583EF7B, 0x0001FDEF, 0xFF000000, 0x7583EF7B, 0x0001FDEF, 0xEF7BAC00,
    0x3F8013BD, 0x411400B8, 0x9260C801, 0xE1F0B001, 0x3233F801, 0xB4C500D9, 0xED830018,
    0x3C2803CF, 0x81803106, 0x9B0141E1, 0xE07F2441, 0x40B16261, 0x327F1B06, 0x6060F0A1,
    0x83C0C5C1, 0x44243C3F, 0x02C18852, 0xCF07818B, 0x07DEF7BD, 0x830006C5, 0x39CE7D81,
    0x90F36367, 0x46222223, 0x04C118F0, 0x183E443C, 0x38DA8180, 0xF0BB8380, 0xF8141E00,
    0xBCF7BDCE, 0xEE33C600, 0x0003313D, 0x00000004, 0x045211A4, 0xF738CC40, 0x2090026F,
    0x0A087801, 0x912608C0, 0x143E0F00, 0x726466C0, 0xE2D31601, 0xFDB24401, 0x8F078019,
    0x86360281, 0x0C180307, 0xC3C0D922, 0x2301E2C4, 0x0913F8D8, 0x140C1E0F, 0xB83C0C6C,
    0xE48848B0, 0x2C0B2441, 0xEE785046, 0x783EF7BD, 0xC18003F8, 0x9CE73EC0, 0xC879B1B3,
    0x23111111, 0x02608C78, 0x0C1F221E, 0x1C6D40C0, 0x785DC1C0, 0x750A0F00, 0xDEF7BDEF,
    0xF7BDEF7B, 0x0000240E, 0xE70F9F41, 0xC0CE739C, 0x4444C461, 0x13240444, 0x00193000,
    0x00011480, 0x10000324, 0x24C0004C, 0x00490001, 0x00070E00, 0xC0000C90, 0x12000264,
    0x11111311, 0x7CE7D810, 0x486CE738, 0x75260000, 0xF7B8DDEF, 0x004921FE, 0x0000E1C0,
    0x2C000492, 0x09200026, 0x84444440, 0xCE701208, 0x248CE739, 0xF6780001, 0x7BDEF7BD,
    0x5837BDEF, 0xF90000DF, 0xE739CFA2, 0xF84E739C, 0x44456B05, 0x85044444, 0x64910017,
    0x00260000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x004C0000, 0x00032088, 0xF8005E16, 0x444456B0, 0x1A304444, 0xE739CE7D, 0xF582739C,
    0xDCC0000E, 0xEF7BDEF7, 0x00DEF7BD, 0x7BAC0000, 0xC40000EF, 0x00240000, 0xFC000140,
    0x800A0001, 0xB5000031, 0x0127EECF, 0xFEFAC620, 0x67CD4007, 0xBC600104, 0xBFF73EDF,
    0x7BDEE781, 0xBFF7BDEF, 0x3EF7BDEF, 0xCEA00000, 0x739CE739, 0x880F39CE, 0x88888888,
    0x00000008, 0x00000000, 0x00000000, 0x00000000, 0xBDEF7BA8, 0x0000DEF7, 0xCE73A800,
    0x009CE739, 0x88888888, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x88888888,
    0xE7500888, 0x39CE739C, 0x00079CE7, 0x048C0000, 0x77DE9F20, 0xFFE7002F, 0x410001AD,
    0x002E678C, 0xFECF7FFB, 0xEF73C4DE, 0xEFFF77BD, 0x7BDEF7BD, 0x5000001F, 0xCE739CE7,
    0x079CE739, 0x44444444, 0x00000444, 0x00000000, 0x00000000, 0x00000000, 0xF7BDD400,
    0x006F7BDE, 0x39D40000, 0x4E739CE7, 0x44444400, 0x00000044, 0x00000000, 0x00000000,
    0x00000000, 0x44444400, 0xA8044444, 0xE739CE73, 0x03CE739C, 0xB9D40000, 0x30029EF7,
    0x6F88F0BE, 0xBC3FC600, 0x04FF12DF, 0x7A9AC279, 0xF6301B8A, 0x9CF78D39, 0x739EE78D,
    0xDEF7BDCE, 0x0FB9CE73, 0x73A80000, 0x9CE739CE, 0x2203CE73, 0x22222222, 0x00000002,
    0x00000000, 0x00000000, 0x00000000, 0xEF7BDEEA, 0x000037BD, 0x739CEA00, 0x002739CE,
    0x22222222, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x22222222, 0x39D40222,
    0xCE739CE7, 0x0001E739, 0xFBDEFFC0, 0x7F7BDD60, 0x00000000, 0xFBDEFFC0, 0x7F7BDD60,
    0xEE780000, 0x7BDEF7BD, 0xDEF7BDEF, 0x800000FB, 0x739CE73A, 0x3CE739CE, 0x22222220,
    0x00002222, 0x00000000, 0x00000000, 0x00000000, 0xBDEEA000, 0x037BDEF7, 0xCEA00000,
    0x739CE739, 0x22222002, 0x00000222, 0x00000000, 0x00000000, 0x00000000, 0x22222000,
    0x40222222, 0x39CE739D, 0x1E739CE7, 0x03180000, 0xECFB5000, 0x6200127E, 0x007FEFAC,
    0x10467CD4, 0xEDFBC600, 0x781BFF73, 0xDEF7BDEE, 0xDEFBFF7B, 0x0003EF7B, 0x9CE739E0,
    0xE739E0F3, 0x8888F39C, 0x11118188, 0x00000011, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x10000000, 0x23031111,
    0xE73C2222, 0x3C1E739C, 0x1E739CE7, 0x30000000, 0x7A7C8012, 0x9C00BDDF, 0x0006B7FF,
    0xB99E3104, 0x3DFFEC00, 0xCF137BFB, 0xFDDEF7BD, 0x7BDEF7BF, 0x00007DEF, 0x739CE73C,
    0x9CE73C1E, 0x11111E73, 0x22223031, 0x00000002, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x22000000, 0x44606222,
    0x9CE78444, 0xE783CE73, 0x03CE739C, 0xB9D40000, 0x30029EF7, 0x6F88F0BE, 0xBC3FC600,
    0x04FF12DF, 0x7A9AC279, 0xF6301B8A, 0x9CF78D39, 0x739EE78D, 0xDEF7BDCE, 0x0FB9CE73,
    0x9CE78000, 0xE783CE73, 0x23CE739C, 0x46062222, 0x00004444, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x0C444440, 0xF088888C, 0x79CE739C, 0xCE739CF0, 0xF0000079, 0x583EF7BF, 0x001FDEF7,
    0xF0000000, 0x583EF7BF, 0x001FDEF7, 0xEF7B9E00, 0x7BDEF7BD, 0x3EF7BDEF, 0x739E0000,
    0x9E0F39CE, 0x8F39CE73, 0x18188888, 0x00011111, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x31111100,
    0xC2222230, 0xE739CE73, 0x39CE73C1, 0xE00001E7, 0x7BDEF7B9, 0xDEF7BDEF, 0x8C00013D,
    0x9CEA0177, 0x7469CE73, 0x22222202, 0x000FC2D6, 0x8000B178, 0x00004418, 0x0000000B,
    0x00000000, 0x01111018, 0x73A8BC60, 0x000007CE, 0xDD43E300, 0x00007F7B, 0x00000000,
    0x00000000, 0x00000000, 0x100002C0, 0xF0000883, 0x111100A2, 0x05E16B91, 0xCE739CEA,
    0x0003D1BF, 0xD605BE30, 0xCC4BE7BE, 0x0F5F137B, 0x5FC5ECF1, 0xFE78F926, 0x56F7D6FF,
    0x327550BC, 0xF5AAEDD7, 0x57EFE42F, 0xF5FBF588, 0xFBDEFFC0, 0xFEF75807, 0xE0000B20,
    0x02540002, 0x0000FC00, 0x62000056, 0x03E14002, 0x01649380, 0x000B87C0, 0x8004A82B,
    0x7C001F89, 0x64000AC1, 0x5E001311, 0x8A30007C, 0xB8B8002C, 0x0D495000, 0x03E1F800,
    0x0BAC1980, 0x00989300, 0x000106F0, 0x3E0000B1, 0x00518000, 0x6A000063, 0x024FDD9F,
    0xFDF58C40, 0xCF9A800F, 0x78C00208, 0x7FEE7DBF, 0xDEEFD403, 0xDF7FEF7B, 0x7E781BFB,
    0x25FEA005, 0x73FF587E, 0xAF127FCE, 0x119D3C19, 0x73916F91, 0xEC5C05E3, 0xC2801887,
    0x2400060A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00030400, 0x14048932, 0xB80D0FE6, 0x3A7833D8, 0x22DF2223, 0xFFD63456, 0xC49FF39C,
    0x8015FCC7, 0x180017FA, 0xBD3E4009, 0xCE005EEF, 0x00035BFF, 0x5CCF1882, 0x9EFFF600,
    0xEA09BDFD, 0xDFFEEF77, 0x0DFDEF7B, 0x5002BF3C, 0xAC3F12FF, 0x3FE739FF, 0x9E0CD789,
    0xB7C888CE, 0x02F1B9C8, 0x0C43F62E, 0x03056140, 0x00001200, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x82000000, 0x44990001, 0x87F30A02, 0x19EC5C06,
    0x91119D3C, 0x1A2B116F, 0xF9CE7FEB, 0xFE63E24F, 0x0BFD400A, 0x3DEF73A8, 0xE17C6005,
    0x8C00DF11, 0x25BF787F, 0x84F209FE, 0x3714F535, 0x1A73EC60, 0x3C1B39EF, 0xDEF739DF,
    0x12F9CF7B, 0xD400AFCF, 0xEB0FC4BF, 0x4FF9CE7F, 0xA78335E2, 0x2DF22233, 0x80BC6E72,
    0x0310FD8B, 0x00C15850, 0x00000480, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x60800000, 0x91264000, 0xA1FCC280, 0x067B1701, 0xE444674F, 0xC68AC45B,
    0xFE739FFA, 0xBF98F893, 0x82FF5002, 0x12F9EFB5, 0xD7C4DEF3, 0xF17B3C43, 0x9E3E4997,
    0xBDF5BFFF, 0x9D542F15, 0x6ABB75CC, 0xFBF90BFD, 0x7EFD6215, 0xEEFD403D, 0x7BDEF7BD,
    0xF9E06FEF, 0x97FA8015, 0xCFFD61F8, 0xBC49FF39, 0x4674F066, 0xCE45BE44, 0xB170178D,
    0x0A00621F, 0x9000182B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x000C1000, 0x501224C8, 0xE0343F98, 0xE9E0CF62, 0x8B7C888C, 0xFF58D158,
    0x127FCE73, 0x0057F31F, 0xDFF85FEA, 0x7BAC1F7B, 0x00000FEF, 0xDFF80000, 0x7BAC1F7B,
    0x00000FEF, 0x7BDEEFD4, 0xFEF7BDEF, 0x015F9E06, 0x1F897FA8, 0xF39CFFD6, 0x066BC49F,
    0xE444674F, 0x78DCE45B, 0x21FB1701, 0x82B0A006, 0x00090001, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x4C8000C1, 0xF9850122, 0xF62E0343,
    0x88CE9E0C, 0x1588B7C8, 0xE73FF58D, 0x31F127FC, 0xFEA0057F, 0x7A240485, 0x327B500F,
    0x5F503FE2, 0xFE2AFC7C, 0xFE317D43, 0xD7FC55F8, 0xF01FE317, 0xFF18E8AB, 0x803A0E00,
    0x00DF09FA, 0x15D8C5F5, 0x62FA81FF, 0xF157F3FC, 0x7F8C6E4F, 0xF978ABF0, 0xEFC07FCD,
    0xE60000F9, 0x77E3033D, 0xDEF7BDEE, 0x839B777B, 0x1800AFF1, 0x3C1B8D91, 0x7FCE73FF,
    0x60CF2461, 0xD911197C, 0xBC6C7C49, 0x487893C0, 0x3242F014, 0x810E6011, 0x33CFC000,
    0xD1958000, 0x56BC4000, 0xD11D0002, 0x332E4000, 0x688E8000, 0x1A3C6000, 0x0272D000,
    0x00694F00, 0x003C6BC0, 0x002E1CC0, 0x0006A7E0, 0x2005E902, 0x3209984C, 0x80FC2E49,
    0xE893C50F, 0x8B5C888C, 0xF9E161F8, 0x8DFE739F, 0x0C8F1937, 0xB42DF180, 0xEF7B9FFC,
    0xFDDEF7BD, 0x000FCAA0, 0x00003180, 0x27EECFB5, 0xFAC62001, 0xCD4007FE, 0x60010467,
    0xF73EDFBC, 0xBDFF81BF, 0xF710E417, 0x00003FDE, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0B103000,
    0x3730B003, 0x9DC1C03E, 0x11195CC1, 0xF8F916F9, 0x739FFE82, 0xA97893FE, 0xFD44017F,
    0x048C000B, 0x77DE9F20, 0xFFE7002F, 0x410001AD, 0x002E678C, 0xFECF7FFB, 0xDEFFC4DE,
    0x7B8848CB, 0x00001FEF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x85881800, 0x1B985801, 0xCEE0E01F,
    0x888CAE60, 0x7C7C8B7C, 0x39CFFF41, 0xD4BC49FF, 0xFEA200BF, 0xF7B9D405, 0xBE30029E,
    0x006F88F0, 0xDFBC3FC6, 0x7904FF12, 0x8A7A9AC2, 0x39F6301B, 0x8D9CF78D, 0x02273DFF,
    0x1FEE7384, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x18000000, 0x58018588, 0xE01F1B98, 0xAE60CEE0,
    0x8B7C888C, 0xFF417C7C, 0x49FF39CF, 0x00BFD4BC, 0xFF85FEA2, 0xBAC1F7BD, 0x0000FEF7,
    0xFF800000, 0xBAC1F7BD, 0x0000FEF7, 0x02F7BFF0, 0x0FF7BDC4, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x0C000000, 0x2C00C2C4, 0x700F8DCC, 0x57306770, 0x45BE4446, 0xFFA0BE3E, 0x24FF9CE7,
    0x005FEA5E, 0x0002FF51, 0x3E400246, 0x005EEFBD, 0x0D6FFF38, 0xF1882000, 0xFD8005CC,
    0x6F7F67BF, 0x7DEF7382, 0xF7BC848C, 0x803899FE, 0x3C3F1F0F, 0x64C43C01, 0x24605114,
    0x80E3F815, 0xA0CC2F0F, 0xC0318A02, 0x1F2542C4, 0x7F1FC3F0, 0xA8A30262, 0xFE013160,
    0x03E09E58, 0xA5DFC198, 0xB2A4C012, 0x70FC00B8, 0xA3001642, 0xF0007C18, 0x30009887,
    0xC0002B03, 0x00000D83, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x7BDDF800,
    0x0000001F, 0x00000000, 0xF8000000, 0xDEF7BDEE, 0x0000DE7B, 0xF781FE62, 0x1ECE739C,
    0x888C178C, 0x60FF1888, 0x11620005, 0x7F170005, 0x00307800, 0x00000000, 0x80048980,
    0x58800B8D, 0x0BF20028, 0xDEEF849E, 0x88BFEF7B, 0x3B50001F, 0x39CE7BC0, 0x4BFB9CE7,
    0x44444460, 0x00000004, 0x00000000, 0x7BDCFBD1, 0x7CF7BDEF, 0x08D7B109, 0xD0BB3C40,
    0x73FFBC49, 0xBE21FFCE, 0x466730A0, 0x4C417E44, 0x0A01F891, 0x0301207F, 0x038000CB,
    0x022E0002, 0x003C4800, 0x0006C2C0, 0xC0078C9D, 0xEA2EF7BA, 0x00580000, 0x379CE758,
    0x88800B8C, 0x01392F98, 0x01FC1580, 0x000F0F00, 0x00008920, 0x00300000, 0x00222800,
    0x00050540, 0x88801C5C, 0x2A8AFC88, 0xF39CEF80, 0x0017C87F, 0x404ECF10, 0x180001CD,
    0x7EBF3EEF, 0xAD440012, 0xF3C00FEF, 0x0011ACF5, 0xBFBD67C8, 0x00002E7D, 0x3C000000,
    0xEF7BDEF7, 0xBFFEF7BD, 0xB3E40004, 0xE739CF13, 0x2FCE739C, 0x22220F89, 0x87EA2222,
    0x120F0002, 0x00022400, 0xC8000000, 0xEF7BDCEF, 0x101EF7BD, 0xE00009FB, 0x9FFBF20D,
    0xA0D9CE73, 0x11193EF0, 0x28920911, 0x000C1000, 0x60800000, 0x14490000, 0xADE1F800,
    0x04888888, 0x39DFC933, 0x41B39CE7, 0x000027DC, 0x00731800, 0xB3EF4F90, 0xFFC009DF,
    0x8000235B, 0x2BFB3518, 0xBFD9EE00, 0x00013D77, 0xE0000000, 0x7BDEF7B9, 0xFFF7BDEF,
    0x9F200025, 0x39CE789D, 0x7E739CE7, 0x11107C49, 0x3F511111, 0x90780014, 0x00112000,
    0x40000000, 0x7BDEE77E, 0x80F7BDEF, 0x00004FD8, 0xFFDF906F, 0x06CE739C, 0x88C9F785,
    0x44904888, 0x00608001, 0x04000000, 0xA2480003, 0x6F0FC000, 0x24444445, 0xCEFE4998,
    0x0D9CE739, 0x00013EE2, 0x7BDEF300, 0x5FA004CF, 0x1B78CBE3, 0xFFEA5BE0, 0x407D61EC,
    0x42FF7BBC, 0x00DFBDEC, 0x6300C631, 0x0000008C, 0xBDEF7B9E, 0xFF7BDEF7, 0xF200025F,
    0x9CE789D9, 0xE739CE73, 0x1107C497, 0xF5111111, 0x07800143, 0x01120009, 0x00000000,
    0xBDEE77E4, 0x0F7BDEF7, 0x0004FD88, 0xFDF906F0, 0x6CE739CF, 0x8C9F7850, 0x49048888,
    0x06080014, 0x40000000, 0x24800030, 0xF0FC000A, 0x44444456, 0xEFE49982, 0xD9CE739C,
    0x0013EE20, 0xDFFDE200, 0xF7D07BBB, 0x3267FC26, 0xA977BED6, 0x39D618C4, 0xFCC413DF,
    0x11D39C60, 0x39EE77CF, 0x4008806F, 0x78000000, 0xDEF7BDEE, 0x7FFDEF7B, 0x67C80009,
    0xCE739E27, 0x5F9CE739, 0x44441F12, 0x0FD44444, 0x241E0005, 0x00044800, 0x90000000,
    0xDEF7B9DF, 0x203DEF7B, 0xC00013F6, 0x3FF7E41B, 0x41B39CE7, 0x22327DE1, 0x51241222,
    0x00182000, 0xC1000000, 0x28920000, 0x5BC3F000, 0x09111111, 0x73BF9266, 0x836739CE,
    0x00004FB8, 0x1F7BDFF8, 0x0FEF7BAC, 0x00000000, 0xFBDEFFC0, 0x7F7BDD60, 0x00000000,
    0xF7BDCF00, 0xBDEF7BDE, 0x00012FFF, 0x73C4ECF9, 0x9CE739CE, 0x83E24BF3, 0x88888888,
    0xC000A1FA, 0x89000483, 0x00000000, 0xF73BF200, 0xBDEF7BDE, 0x027EC407, 0xFC837800,
    0x739CE7FE, 0x4FBC2836, 0x82444446, 0x04000A24, 0x00000003, 0x40001820, 0x7E000512,
    0x22222B78, 0xF24CC122, 0xE739CE77, 0x09F7106C, 0xCF780000, 0x00BCF7BD, 0x35EF74E4,
    0x18184013, 0x00000002, 0x0218A461, 0x7BFF4E40, 0x3DE004CC, 0x02F3DEF7, 0xBDEF7B9E,
    0xFF7BDEF7, 0xF200025F, 0x9CE789D9, 0xE739CE73, 0x1107C497, 0xF5111111, 0x07800143,
    0x01120009, 0x00000000, 0xBDEE77E4, 0x0F7BDEF7, 0x0004FD88, 0xFDF906F0, 0x6CE739CF,
    0x8C9F7850, 0x49048888, 0x06080014, 0x40000000, 0x24800030, 0xF0FC000A, 0x44444456,
    0xEFE49982, 0xD9CE739C, 0x0013EE20, 0xBDEF7580, 0x7BEEFFF7, 0x00BFBDEF, 0xFA807390,
    0xFE739D61, 0xFF9F720F, 0x222204F0, 0xE446F87F, 0x0302014B, 0xC2C0048B, 0x00000000,
    0x77E20300, 0x3017BDEF, 0xCC015F49, 0x28ACBC88, 0xBE0E7FFA, 0xF2A5FE73, 0x004656A1,
    0x80D927D4, 0xBFBDEF7D, 0x00000010, 0x00002000, 0x01E03648, 0x088AD43C, 0x044446FC,
    0x1CE7D0F1, 0x9CE73EE4, 0x000157E0, 0x7B9DF9E0, 0xDEF7BDEF, 0x7E63EF7B, 0x51A00015,
    0xCE739CFB, 0x153CE739, 0x444446F8, 0x8C484444, 0x01604000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x80000000, 0xC48002C0, 0xE0540048, 0x1111193C, 0x7C634111,
    0x39CE73FF, 0xFCC79CE7, 0xE780002A, 0xF7BDEE77, 0xBDEF7BDE, 0xC000000F, 0x000EF7BA,
    0x40000C40, 0x00140002, 0xA0001FC0, 0x001CD400, 0xF9F778C0, 0x100093F5, 0x803FBEB5,
    0x2359EBE7, 0xBD67C800, 0x002E7DBF, 0x00000000, 0xF7BDEFBD, 0x79EF7BDE, 0x001ADF83,
    0x853DFE62, 0xCE739FFE, 0x8D9E327F, 0x44446567, 0x6C4EC9BE, 0x3133C580, 0x13010600,
    0x20C00000, 0xC262C000, 0xC888888C, 0xE77C2E4E, 0x7FCE739C, 0x10001E31, 0xBDF60FF3,
    0xEF7BDEF7, 0x00000379, 0x08100058, 0x00D89800, 0x4666B170, 0xF0444444, 0x9FFDE20C,
    0xE739CE73, 0x0001AF60, 0x00E63000, 0xB3EF4F90, 0xFFE009DF, 0x200011AD, 0x0AFECD46,
    0xF7FB3DC0, 0x000027AE, 0xBD000000, 0xDEF7BDEF, 0x8379EF7B, 0x62001ADF, 0xFE853DFE,
    0x7FCE739F, 0x678D9E32, 0xBE444465, 0x806C4EC9, 0x003133C5, 0x00130106, 0x0020C000,
    0x8CC262C0, 0x4EC88888, 0x9CE77C2E, 0x317FCE73, 0xF310001E, 0xF7BDF60F, 0x79EF7BDE,
    0x58000003, 0x00081000, 0x7000D898, 0x444666B1, 0x0CF04444, 0x739FFDE2, 0x60E739CE,
    0xC00001AF, 0x33DEF7BC, 0x7C6BF401, 0xBE036F19, 0x1ECFFEA5, 0xDDE207D6, 0xEF6217FB,
    0x18C406FD, 0x02318C03, 0xBEF40000, 0xEF7BDEF7, 0x7E0DE7BD, 0xF988006B, 0x7FFA14F7,
    0xC9FF39CE, 0x959E3678, 0x26F91111, 0x1601B13B, 0x1800C4CF, 0x00004C04, 0x00008300,
    0x2233098B, 0xB93B2222, 0xCE739DF0, 0x78C5FF39, 0x3FCC4000, 0x7BDEF7D8, 0x0DE7BDEF,
    0x01600000, 0x60002040, 0xC5C00362, 0x1111199A, 0x8833C111, 0x39CE7FF7, 0xBD839CE7,
    0x7FE00006, 0xEEB07DEF, 0x00003FBD, 0x7FE00000, 0xEEB07DEF, 0x00003FBD, 0xF7A00000,
    0x7BDEF7BD, 0xF06F3DEF, 0xCC40035B, 0xFFD0A7BF, 0x4FF9CE73, 0xACF1B3C6, 0x37C8888C,
    0xB00D89D9, 0xC0062678, 0x00026020, 0x00041800, 0x11984C58, 0xC9D91111, 0x739CEF85,
    0xC62FF9CE, 0xFE620003, 0xDEF7BEC1, 0x6F3DEF7B, 0x0B000000, 0x00010200, 0x2E001B13,
    0x8888CCD6, 0x419E0888, 0xCE73FFBC, 0xEC1CE739, 0x6A000035, 0xBC60000E, 0x49FAFCFB,
    0xDF5A8800, 0xF5F3C01F, 0xE40011AC, 0x3EDFDEB3, 0x00000017, 0xF7BDE000, 0xBDEF7BDE,
    0xA000002F, 0x3CE739CF, 0x44444400, 0x0000000C, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x44444000, 0x8888C0C4, 0x39CE7D08, 0xCE73C1E7,
    0x00016739, 0x0398C000, 0xCFBD3E40, 0xFF80277E, 0x800046B7, 0x2BFB3518, 0xDFECF700,
    0x00009EBB, 0xEF000000, 0x7BDEF7BD, 0x00017DEF, 0x39CE7D00, 0x222001E7, 0x00006222,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x22000000,
    0x46062222, 0x73E84444, 0x9E0F39CE, 0x0B39CE73, 0xF7980000, 0x80267BDE, 0xE32F8D7E,
    0xD4B7C06D, 0xFAC3D9FF, 0xFF7BBC40, 0xDFBDEC42, 0x80631880, 0x00004631, 0xDEF7BDE0,
    0x2FBDEF7B, 0xCFA00000, 0x003CE739, 0x0C444444, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xC4444440, 0x088888C0, 0xE739CE7D,
    0x39CE73C1, 0xE0000167, 0xB07DEF7F, 0x003FBDEE, 0xE0000000, 0xB07DEF7F, 0x003FBDEE,
    0x78000000, 0xDEF7BDEF, 0x000BEF7B, 0xCE73E800, 0x11000F39, 0x00031111, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x10000000, 0x30311111,
    0x9F422222, 0xF079CE73, 0x59CE739C, 0xBBF00000, 0xEF7BDEF7, 0x000DFBBD, 0xDF0DCC60,
    0x739CE739, 0x221720DE, 0xE6222222, 0xFE001FC4, 0x21000098, 0xBDEF73BF, 0x41FBDEF7,
    0xC00027EC, 0x39FF8C1B, 0x42F39CE7, 0x8888CBE1, 0x07810188, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x05800000, 0x1FC4C448, 0xD63731B0, 0x55C8888C,
    0xDE24CFF8, 0x37F9CE73, 0x099DC572, 0x788DCC60, 0x1EEEF7FF, 0xFF89BDF4, 0xF7DAC64C,
    0x618C952E, 0x413DF39D, 0x9CE30FCC, 0x73BE788E, 0x220379CF, 0x00000100, 0xF7BDEFFC,
    0xBDEF7BDE, 0x00007777, 0x77C1FD63, 0xBCE739CE, 0x233098C1, 0xC2E62222, 0x008B8006,
    0x00130780, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00039A80, 0xFCFBBC60, 0x200049FA, 0x007F7D6A, 0x1ACF5F3C, 0xACF90001,
    0x05CFB7F7, 0x00000000, 0x7FEF8C00, 0xDEF7BDEF, 0x625FFF7B, 0x90049FFC, 0x20DE4ECF,
    0x739CE77F, 0x8534497E, 0xA22222B7, 0x0502251A, 0x02244428, 0x00C06020, 0x00000100,
    0x00000000, 0x00000000, 0x00000000, 0x00600000, 0x40044880, 0x03C088C0, 0xF4284428,
    0x4F111113, 0xFC8378A3, 0x7CE739CE, 0xFFE33449, 0x767C8024, 0x07318002, 0x7DE9F200,
    0xF0013BF6, 0x0008D6FF, 0xFD9A8C40, 0xD9EE0015, 0x013D77BF, 0x00000000, 0xDFFBE300,
    0xF7BDEF7B, 0x1897FFDE, 0xE40127FF, 0xC83793B3, 0x9CE739DF, 0xE14D125F, 0xA88888AD,
    0x01408946, 0x0089110A, 0x00301808, 0x00000040, 0x00000000, 0x00000000, 0x00000000,
    0x00180000, 0x10011220, 0x00F02230, 0xFD0A110A, 0xD3C44444, 0xBF20DE28, 0x5F39CE73,
    0x3FF8CD12, 0x9D9F2009, 0xBDEF7980, 0x5FA00267, 0x1B78CBE3, 0xFFD4B7C0, 0x00FAC3D9,
    0x0BFDEEF1, 0x037EF7B1, 0x18063188, 0x00000463, 0xF7FEF8C0, 0xBDEF7BDE, 0xC625FFF7,
    0xF90049FF, 0xF20DE4EC, 0xE739CE77, 0x78534497, 0xAA22222B, 0x80502251, 0x00224442,
    0x000C0602, 0x00000010, 0x00000000, 0x00000000, 0x00000000, 0x00060000, 0x04004488,
    0x803C088C, 0x3F428442, 0x34F11111, 0xEFC8378A, 0x97CE739C, 0x4FFE3344, 0x2767C802,
    0x77BFFBC4, 0x4DEFA0F7, 0x58C99FF0, 0x12A5DEFB, 0xF9CEB0C6, 0x07E6209E, 0xF11D39C6,
    0xF39EE77C, 0x08011006, 0x8C000000, 0xBDEF7FEF, 0xFF7BDEF7, 0x9FFC625F, 0x4ECF9004,
    0xE77F20DE, 0x497E739C, 0x22B78534, 0x251AA222, 0x44280502, 0x60200224, 0x010000C0,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x48800060, 0x88C04004, 0x442803C0,
    0x1113F428, 0x78A34F11, 0x39CEFC83, 0x34497CE7, 0x8024FFE3, 0xFFC2767C, 0xDD60FBDE,
    0x00007F7B, 0xF0000000, 0x583EF7BF, 0x001FDEF7, 0x00000000, 0xF7BFF7C6, 0xBDEF7BDE,
    0xFE312FFF, 0x67C8024F, 0xBF906F27, 0xBF39CE73, 0x5BC29A24, 0x8D511111, 0x14028112,
    0x10011222, 0x80006030, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x40003000,
    0x60200224, 0x1401E044, 0x89FA1422, 0x51A78888, 0xE77E41BC, 0x24BE739C, 0x127FF19A,
    0x813B3E40, 0x02FBDEF7, 0xCC880000, 0xFFFA000C, 0x000037FF, 0x88888888, 0xEB088888,
    0x39CE739C, 0xCE739CE7, 0xF7580003, 0xBDEF7BDE, 0x1F7BDEF7, 0x00000000, 0x6FFFFFF4,
    0x03332200, 0x00000000, 0x80009ACF, 0x80006BF1, 0xBE31318E, 0xDEF7BDFF, 0x1F2DEF7B,
    0x0049FFC6, 0xE306F274, 0x6739CE77, 0x57429A22, 0x282C4444, 0x01D02811, 0x31008911,
    0x4030903D, 0x90003447, 0xA0004CCB, 0x60005E23, 0x0000DE3C, 0xA0002E5A, 0xD0000FCA,
    0x9E0004C6, 0x7A4001A1, 0xC2440155, 0x8C043437, 0x019E3C08, 0xE03C220F, 0x2F3C4446,
    0xCEF80E8A, 0xA24BE739, 0x2004FF19, 0x61889D9F, 0xBDEF7BDD, 0x84BFFEF7, 0x0001788E,
    0x0002FEFF, 0x0000E6A0, 0xAFCFBBC6, 0xA880049F, 0x3C01FDF5, 0x011ACF5F, 0xFDEB3E40,
    0x000173ED, 0xFE000000, 0x7801DEF7, 0x007FBDEE, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x6000B020, 0x1FC00362, 0x44444673,
    0xBC49980C, 0xCE739CE7, 0x0267710B, 0x398C0000, 0xFBD3E400, 0xF80277EC, 0x00046B7F,
    0xBFB35188, 0xFECF7002, 0x0009EBBD, 0xF0000000, 0xC00EF7BF, 0x03FDEF73, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00058100,
    0xFE001B13, 0x22223398, 0xE24CC062, 0x739CE73D, 0x133B885E, 0xEF798000, 0xE80267BD,
    0xDE32F8D7, 0xFD4B7C06, 0x0FAC3D9F, 0x2FF7BBC4, 0x0DFBDEC4, 0x18063188, 0x00000463,
    0x01DEF7FE, 0x7FBDEE78, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00B02000, 0xC0036260, 0x4446731F, 0x49980C44, 0x739CE7BC,
    0x67710BCE, 0xF7FE0002, 0xDEEB07DE, 0x000003FB, 0xF7FE0000, 0xDEEB07DE, 0x000003FB,
    0xBDFF8000, 0x7B9E0077, 0x00001FEF, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x08000000, 0xD898002C, 0x9CC7F000, 0x03111111, 0x39EF1266,
    0x42F39CE7, 0x000099DC, 0x001CC600, 0xD9F7A7C8, 0xFFC004EF, 0x0000235B, 0x57F66A31,
    0xFF67B800, 0x0004F5DE, 0x00000000, 0x0EF7BDCF, 0x9F7BFF00, 0x23005027, 0x07E163C5,
    0x30F8B1F0, 0x8C7C5012, 0x948C03C4, 0xC07E1F03, 0x460F07C7, 0x2C81E282, 0x2552303C,
    0xC7C1F838, 0x9182781F, 0x0B00B128, 0xC00AA545, 0x1CFE7F1F, 0x2C2A4A80, 0xAC3E0059,
    0x0F000F0A, 0x007E7FFE, 0x632CF164, 0x844FE000, 0x80AC001F, 0xA8510009, 0x07070000,
    0x07887800, 0x002C9800, 0x001FC7C0, 0x000594A8, 0x20001E1C, 0x60003E1E, 0xF8001232,
    0xF71001F8, 0x00001BDE, 0x00000000, 0x00000000, 0x38000000, 0xEF7BDEF7, 0x0003BBBD,
    0xD81FD630, 0x76739CE7, 0x8C816307, 0x5EB18888, 0x7850006C, 0x00204000, 0x000000C0,
    0x00000000, 0x00000000, 0x00000000, 0x0C000000, 0x01130000, 0x64120600, 0xF3C44444,
    0xE73EC0A2, 0x20BE739C, 0xE720005F, 0xBDEE700E, 0xFF7BDEF7, 0x0000006F, 0x00000000,
    0x00000000, 0x00000000, 0xF7BFF000, 0xDEF7583E, 0x0000001F, 0xEFFC0000, 0xBDD60FBD,
    0x000007F7, 0xB9E00000, 0xE001DEF7, 0x04F3EF7F, 0x78A4600A, 0x3E00FC2C, 0x02461F16,
    0x78918F8A, 0xE0729180, 0xF8F80FC3, 0x5048C1E0, 0x0785903C, 0x0704AA46, 0x03F8F83F,
    0x2512304F, 0xA8A16016, 0xE3F80154, 0x50039FCF, 0x0B258549, 0xE15587C0, 0xFFC1E001,
    0x2C800FCF, 0x000C659E, 0x03F089FC, 0x01301580, 0x00150A20, 0x0000E0E0, 0x0000F10F,
    0xF8000593, 0x950003F8, 0xC38000B2, 0xC3C40003, 0x464C0007, 0x3F1F0002, 0x00000000
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

  /* Create and initialize the suitable class variant */
  EwAttachObjectVariant( &_this->_XObject, aLink, aArg );
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

  /* Reinitialize the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_ReInit( &_this->_XObject );
}

/* Finalizer method for the class 'Application::Fasores' */
void ApplicationFasores__Done( ApplicationFasores _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationFasores );

  /* Deinitialize the variant */
  EwDetachObjectVariant( &_this->_XObject );

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

  /* Don't forget the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_Mark( &_this->_XObject );
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
  EW_STATIC_CLASS_VARIANT( ApplicationFasores769 ),
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
  _this->freqV[ 5 ] = 25;
  _this->freqV[ 6 ] = 30;
  _this->freqIdx = 5;
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

  /* Create and initialize the suitable class variant */
  EwAttachObjectVariant( &_this->_XObject, aLink, aArg );
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

  /* Reinitialize the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_ReInit( &_this->_XObject );
}

/* Finalizer method for the class 'Application::Freq' */
void ApplicationFreq__Done( ApplicationFreq _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationFreq );

  /* Deinitialize the variant */
  EwDetachObjectVariant( &_this->_XObject );

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

  /* Don't forget the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_Mark( &_this->_XObject );
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
  7 )]);
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
  _this->config.SupSignMais.OnAction = EwNewSlot( _this, ApplicationFreq_trocaEscala 
  );
  _this->config.SupSignMenos.OnAction = EwNewSlot( _this, ApplicationFreq_trocaEscala 
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
          _this->freqIdx, 7 )]);
          ApplicationFreq_atualizaX( _this );
          ApplicationPlotterGraph_ClearPath( &_this->grafico );
        }
      }
      else
        if ( sender == ((XObject)&_this->config.InfMais ))
        {
          if ( _this->freqIdx < 6 )
          {
            _this->freqIdx = _this->freqIdx + 1;
            CoreTimer_OnSetPeriod( &_this->intervalo, 1000 / _this->freqV[ EwCheckIndex( 
            _this->freqIdx, 7 )]);
            ApplicationFreq_atualizaX( _this );
            ApplicationPlotterGraph_ClearPath( &_this->grafico );
          }
        }
        else
          if ( sender == ((XObject)&_this->config.SupSignMais ))
          {
            if ( _this->valorMeio < 60.000000f )
            {
              _this->valorMeio = _this->valorMeio + 5.000000f;
              ApplicationFreq_atualizaY( _this );
              ApplicationPlotterGraph_ClearPath( &_this->grafico );
            }
          }
          else
            if ( sender == ((XObject)&_this->config.SupSignMenos ))
            {
              if ( _this->valorMeio > 50.000000f )
              {
                _this->valorMeio = _this->valorMeio - 5.000000f;
                ApplicationFreq_atualizaY( _this );
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
    if ( _this->freqIdx == 6 )
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMenos, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMais, 0 );
    }
    else
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMenos, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.InfMais, 1 );
    }

  if ( _this->valorMeio >= 60.000000f )
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupSignMais, 0 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupSignMenos, 1 );
  }
  else
    if ( _this->valorMeio <= 50.000000f )
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupSignMais, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupSignMenos, 0 );
    }
    else
    {
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupSignMais, 1 );
      CoreGroup_OnSetEnabled((CoreGroup)&_this->config.SupSignMenos, 1 );
    }

  ViewsText_OnSetString( &_this->config.SupVal, EwConcatString( EwConcatString( 
  EwConcatString( ApplicationFreq_float2String( _this, _this->valorMeio - _this->unitsV[ 
  EwCheckIndex( _this->unitsIdx, 8 )], 3 ), EwLoadString( &_Const0061 )), ApplicationFreq_float2String( 
  _this, _this->valorMeio + _this->unitsV[ EwCheckIndex( _this->unitsIdx, 8 )], 
  3 )), EwLoadString( &_Const0060 )));
  ViewsText_OnSetString( &_this->config.InfVal, EwConcatString( EwConcatString( 
  EwConcatString( EwNewStringInt( _this->freqV[ EwCheckIndex( _this->freqIdx, 7 
  )], 0, 10 ), EwLoadString( &_Const0062 )), EwNewStringInt( 1000 / _this->freqV[ 
  EwCheckIndex( _this->freqIdx, 7 )], 0, 10 )), EwLoadString( &_Const0063 )));
}

/* Atualiza os r�tulos do eixo vertical do gr�fico e a propor��o de plotagem.
   Please note, this function serves as the dispatcher to the methods overriden 
   in the derived class variants. */
void ApplicationFreq_atualizaY( ApplicationFreq _this )
{
  register XObjectVariant _vthis = _this->_vthis;

  if ( _vthis )
    ((const struct _dmt_ApplicationFreq*)(_vthis->_VMT))->atualizaY( _this );
  else
    ApplicationFreq___atualizaY( _this );
}

/* Implementation of the method : 'Application::Freq.atualizaY()'. The implementation 
   has been moved here, because the origin function ApplicationFreq_atualizaY() 
   does serve as the dispatcher to the derived class variants only. */
void ApplicationFreq___atualizaY( ApplicationFreq _this )
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

/* Atualiza os r�tulos do eixo X no gr�fico.
   Please note, this function serves as the dispatcher to the methods overriden 
   in the derived class variants. */
void ApplicationFreq_atualizaX( ApplicationFreq _this )
{
  register XObjectVariant _vthis = _this->_vthis;

  if ( _vthis )
    ((const struct _dmt_ApplicationFreq*)(_vthis->_VMT))->atualizaX( _this );
  else
    ApplicationFreq___atualizaX( _this );
}

/* Implementation of the method : 'Application::Freq.atualizaX()'. The implementation 
   has been moved here, because the origin function ApplicationFreq_atualizaX() 
   does serve as the dispatcher to the derived class variants only. */
void ApplicationFreq___atualizaX( ApplicationFreq _this )
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
  EW_STATIC_CLASS_VARIANT( ApplicationFreq769 ),
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
  _this->valorMeio = 220.000000f;
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

  /* Create and initialize the suitable class variant */
  EwAttachObjectVariant( &_this->_XObject, aLink, aArg );
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

  /* Reinitialize the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_ReInit( &_this->_XObject );
}

/* Finalizer method for the class 'Application::Mag' */
void ApplicationMag__Done( ApplicationMag _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationMag );

  /* Deinitialize the variant */
  EwDetachObjectVariant( &_this->_XObject );

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

  /* Don't forget the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_Mark( &_this->_XObject );
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
  CoreGroup_OnSetVisible((CoreGroup)&_this->config.SupSignMais, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->config.SupSignMenos, 0 );
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

/* Atualiza os r�tulos do eixo vertical do gr�fico e a propor��o de plotagem.
   Please note, this function serves as the dispatcher to the methods overriden 
   in the derived class variants. */
void ApplicationMag_atualizaY( ApplicationMag _this )
{
  register XObjectVariant _vthis = _this->_vthis;

  if ( _vthis )
    ((const struct _dmt_ApplicationMag*)(_vthis->_VMT))->atualizaY( _this );
  else
    ApplicationMag___atualizaY( _this );
}

/* Implementation of the method : 'Application::Mag.atualizaY()'. The implementation 
   has been moved here, because the origin function ApplicationMag_atualizaY() does 
   serve as the dispatcher to the derived class variants only. */
void ApplicationMag___atualizaY( ApplicationMag _this )
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

/* Atualiza os r�tulos do eixo X no gr�fico.
   Please note, this function serves as the dispatcher to the methods overriden 
   in the derived class variants. */
void ApplicationMag_atualizaX( ApplicationMag _this )
{
  register XObjectVariant _vthis = _this->_vthis;

  if ( _vthis )
    ((const struct _dmt_ApplicationMag*)(_vthis->_VMT))->atualizaX( _this );
  else
    ApplicationMag___atualizaX( _this );
}

/* Implementation of the method : 'Application::Mag.atualizaX()'. The implementation 
   has been moved here, because the origin function ApplicationMag_atualizaX() does 
   serve as the dispatcher to the derived class variants only. */
void ApplicationMag___atualizaX( ApplicationMag _this )
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
  EW_STATIC_CLASS_VARIANT( ApplicationMag769 ),
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

  /* Create and initialize the suitable class variant */
  EwAttachObjectVariant( &_this->_XObject, aLink, aArg );
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

  /* Reinitialize the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_ReInit( &_this->_XObject );
}

/* Finalizer method for the class 'Application::Fase' */
void ApplicationFase__Done( ApplicationFase _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationFase );

  /* Deinitialize the variant */
  EwDetachObjectVariant( &_this->_XObject );

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

  /* Don't forget the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_Mark( &_this->_XObject );
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
  CoreGroup_OnSetVisible((CoreGroup)&_this->config.SupSignMais, 0 );
  CoreGroup_OnSetVisible((CoreGroup)&_this->config.SupSignMenos, 0 );
}

/* Atualiza os r�tulos do eixo X no gr�fico.
   Please note, this function serves as the dispatcher to the methods overriden 
   in the derived class variants. */
void ApplicationFase_atualizaX( ApplicationFase _this )
{
  register XObjectVariant _vthis = _this->_vthis;

  if ( _vthis )
    ((const struct _dmt_ApplicationFase*)(_vthis->_VMT))->atualizaX( _this );
  else
    ApplicationFase___atualizaX( _this );
}

/* Implementation of the method : 'Application::Fase.atualizaX()'. The implementation 
   has been moved here, because the origin function ApplicationFase_atualizaX() 
   does serve as the dispatcher to the derived class variants only. */
void ApplicationFase___atualizaX( ApplicationFase _this )
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
  EW_STATIC_CLASS_VARIANT( ApplicationFase769 ),
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

  /* Create and initialize the suitable class variant */
  EwAttachObjectVariant( &_this->_XObject, aLink, aArg );
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

  /* Reinitialize the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_ReInit( &_this->_XObject );
}

/* Finalizer method for the class 'Application::FFT' */
void ApplicationFFT__Done( ApplicationFFT _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationFFT );

  /* Deinitialize the variant */
  EwDetachObjectVariant( &_this->_XObject );

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

  /* Don't forget the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_Mark( &_this->_XObject );
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
  EW_STATIC_CLASS_VARIANT( ApplicationFFT769 ),
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

  /* Create and initialize the suitable class variant */
  EwAttachObjectVariant( &_this->_XObject, aLink, aArg );
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

  /* Reinitialize the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_ReInit( &_this->_XObject );
}

/* Finalizer method for the class 'Application::PDC' */
void ApplicationPDC__Done( ApplicationPDC _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationPDC );

  /* Deinitialize the variant */
  EwDetachObjectVariant( &_this->_XObject );

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

  /* Don't forget the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_Mark( &_this->_XObject );
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
  EW_STATIC_CLASS_VARIANT( ApplicationPDC769 ),
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
      aFFT[i] = FasesAC_mod_R[i];
    }
    aFFT[0] = 0;
  }
  ChartsCoordList_OnSetMaxNoOfItems( cordFFT, 50 );
  ChartsCoordList_ClearList( cordFFT );

  for ( j = 0; j < 50; j = j + 1 )
  {
    ChartsCoordList_AddCoord( cordFFT, (XFloat)( j ), -aFFT[ EwCheckIndex( j,
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
      aFFT[i] = FasesAC_mod_S[i];
    }
    aFFT[0] = 0;
  }
  ChartsCoordList_OnSetMaxNoOfItems( cordFFT, 50 );
  ChartsCoordList_ClearList( cordFFT );

  for ( j = 0; j < 50; j = j + 1 )
  {
    ChartsCoordList_AddCoord( cordFFT, (XFloat)( j ), -aFFT[ EwCheckIndex( j,
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
      aFFT[i] = FasesAC_mod_T[i];
    }
    aFFT[0] = 0;
  }
  ChartsCoordList_OnSetMaxNoOfItems( cordFFT, 50 );
  ChartsCoordList_ClearList( cordFFT );

  for ( j = 0; j < 50; j = j + 1 )
  {
    ChartsCoordList_AddCoord( cordFFT, (XFloat)( j ), -aFFT[ EwCheckIndex( j,
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

/* Initializer for the class variant 'Application::Aplic769' */
void ApplicationAplic769__Init( ApplicationAplic _this, XObject aLink, XHandle aArg )
{
  register ApplicationAplic769 _vthis = (ApplicationAplic769)_this->_vthis;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aLink );
  EW_UNUSED_ARG( aArg );

  /* Setup the VMT pointer */
  _vthis->_VMT = EW_VCLASS( ApplicationAplic769 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00B1 );
  CoreRectView__OnSetBounds( &_this->WipeTouchHandler, _Const00B2 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const00B2 );
  CoreRectView__OnSetBounds( &_this->Rectangle1, _Const00B3 );
  CoreRectView__OnSetBounds( &_this->Title, _Const00B4 );
  CoreRectView__OnSetBounds( &_this->Janela, _Const00B5 );
  CoreRectView__OnSetBounds( &_this->TFasores, _Const00B5 );
  CoreRectView__OnSetBounds( &_this->TFreq, _Const00B6 );
  CoreRectView__OnSetBounds( &_this->TMag, _Const00B7 );
  CoreRectView__OnSetBounds( &_this->TFase, _Const00B8 );
  CoreRectView__OnSetBounds( &_this->TFFT, _Const00B9 );
  CoreRectView__OnSetBounds( &_this->TVNC, _Const00BA );
  CoreGroup__Restack( _this, ((CoreView)&_this->WipeTouchHandler ), -3 );
}

/* Re-Initializer for the class variant 'Application::Aplic769' */
void ApplicationAplic769__ReInit( ApplicationAplic _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Finalizer method for the class variant 'Application::Aplic769' */
void ApplicationAplic769__Done( ApplicationAplic _this )
{
  register ApplicationAplic769 _vthis = (ApplicationAplic769)_this->_vthis;

  /* Finalize this class */
  _vthis->_VMT = EW_VCLASS( ApplicationAplic769 );
}

/* Garbage Collector method for the class variant 'Application::Aplic769' */
void ApplicationAplic769__Mark( ApplicationAplic _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Variants derived from the class : 'Application::Aplic769' */
EW_DEFINE_CLASS_VARIANTS( ApplicationAplic769 )
EW_END_OF_CLASS_VARIANTS( ApplicationAplic769 )

/* Virtual Method Table (VMT) for the class variant : 'Application::Aplic769' */
EW_DEFINE_VCLASS( ApplicationAplic769, XObjectVariant, ApplicationAplic, "Application::Aplic769" )
EW_END_OF_VCLASS( ApplicationAplic769 )

/* Initializer for the class variant 'Application::Fasores769' */
void ApplicationFasores769__Init( ApplicationFasores _this, XObject aLink, XHandle aArg )
{
  register ApplicationFasores769 _vthis = (ApplicationFasores769)_this->_vthis;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aLink );
  EW_UNUSED_ARG( aArg );

  /* Setup the VMT pointer */
  _vthis->_VMT = EW_VCLASS( ApplicationFasores769 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00BB );
  _this->centro = _Const00BC;
  CoreRectView__OnSetBounds( &_this->grid, _Const00BD );
  CoreRectView__OnSetBounds( &_this->label0, _Const00BE );
  CoreRectView__OnSetBounds( &_this->label180, _Const00BF );
  CoreRectView__OnSetBounds( &_this->label90, _Const00C0 );
  CoreRectView__OnSetBounds( &_this->label270, _Const00C1 );
  CoreRectView__OnSetBounds( &_this->label300, _Const00C2 );
  ViewsText_OnSetAutoSize( &_this->label300, 1 );
  CoreRectView__OnSetBounds( &_this->label240, _Const00C3 );
  ViewsText_OnSetAutoSize( &_this->label240, 1 );
  CoreRectView__OnSetBounds( &_this->label210, _Const00C4 );
  CoreRectView__OnSetBounds( &_this->label120, _Const00C5 );
  CoreRectView__OnSetBounds( &_this->label60, _Const00C6 );
  CoreRectView__OnSetBounds( &_this->label330, _Const00C7 );
  CoreRectView__OnSetBounds( &_this->label30, _Const00C8 );
  CoreRectView__OnSetBounds( &_this->label150, _Const00C9 );
  CoreRectView__OnSetBounds( &_this->labelMag, _Const00CA );
  CoreRectView__OnSetBounds( &_this->labelAng, _Const00CB );
  CoreRectView__OnSetBounds( &_this->fTverm_mag, _Const00CC );
  CoreRectView__OnSetBounds( &_this->fTverm_ang, _Const00CD );
  CoreRectView__OnSetBounds( &_this->fSamarelo_mag, _Const00CE );
  CoreRectView__OnSetBounds( &_this->fSamarelo_ang, _Const00CF );
  CoreRectView__OnSetBounds( &_this->fRverde_mag, _Const00D0 );
  CoreRectView__OnSetBounds( &_this->fRverde_ang, _Const00D1 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const00D2 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const00D3 );
  CoreQuadView__OnSetPoint4( &_this->fasor_T, _Const00D4 );
  CoreQuadView__OnSetPoint3( &_this->fasor_T, _Const00D5 );
  CoreQuadView__OnSetPoint2( &_this->fasor_T, _Const00D6 );
  CoreQuadView__OnSetPoint1( &_this->fasor_T, _Const00D7 );
  ViewsWarpView_OnSetSourceAnchor((ViewsWarpView)&_this->fasor_T, _Const00D8 );
  CoreQuadView__OnSetPoint4( &_this->fasor_S, _Const00D4 );
  CoreQuadView__OnSetPoint3( &_this->fasor_S, _Const00D5 );
  CoreQuadView__OnSetPoint2( &_this->fasor_S, _Const00D6 );
  CoreQuadView__OnSetPoint1( &_this->fasor_S, _Const00D7 );
  ViewsWarpView_OnSetSourceAnchor((ViewsWarpView)&_this->fasor_S, _Const00D8 );
  CoreQuadView__OnSetPoint4( &_this->fasor_R, _Const00D4 );
  CoreQuadView__OnSetPoint3( &_this->fasor_R, _Const00D5 );
  CoreQuadView__OnSetPoint2( &_this->fasor_R, _Const00D6 );
  CoreQuadView__OnSetPoint1( &_this->fasor_R, _Const00D7 );
  ViewsWarpView_OnSetSourceAnchor((ViewsWarpView)&_this->fasor_R, _Const00D8 );
  ViewsText_OnSetFont( &_this->label0, EwLoadResource( &ApplicationArial21, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label180, EwLoadResource( &ApplicationArial21, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label90, EwLoadResource( &ApplicationArial21, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label270, EwLoadResource( &ApplicationArial21, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label300, EwLoadResource( &ApplicationArial21, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label240, EwLoadResource( &ApplicationArial21, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label210, EwLoadResource( &ApplicationArial21, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label120, EwLoadResource( &ApplicationArial21, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label60, EwLoadResource( &ApplicationArial21, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label330, EwLoadResource( &ApplicationArial21, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label30, EwLoadResource( &ApplicationArial21, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label150, EwLoadResource( &ApplicationArial21, ResourcesFont 
  ));
}

/* Re-Initializer for the class variant 'Application::Fasores769' */
void ApplicationFasores769__ReInit( ApplicationFasores _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Finalizer method for the class variant 'Application::Fasores769' */
void ApplicationFasores769__Done( ApplicationFasores _this )
{
  register ApplicationFasores769 _vthis = (ApplicationFasores769)_this->_vthis;

  /* Finalize this class */
  _vthis->_VMT = EW_VCLASS( ApplicationFasores769 );
}

/* Garbage Collector method for the class variant 'Application::Fasores769' */
void ApplicationFasores769__Mark( ApplicationFasores _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Variants derived from the class : 'Application::Fasores769' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFasores769 )
EW_END_OF_CLASS_VARIANTS( ApplicationFasores769 )

/* Virtual Method Table (VMT) for the class variant : 'Application::Fasores769' */
EW_DEFINE_VCLASS( ApplicationFasores769, XObjectVariant, ApplicationFasores, "Application::Fasores769" )
EW_END_OF_VCLASS( ApplicationFasores769 )

/* Initializer for the class variant 'Application::Freq769' */
void ApplicationFreq769__Init( ApplicationFreq _this, XObject aLink, XHandle aArg )
{
  register ApplicationFreq769 _vthis = (ApplicationFreq769)_this->_vthis;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aLink );

  /* Setup the VMT pointer */
  _vthis->_VMT = EW_VCLASS( ApplicationFreq769 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00BB );
  CoreRectView__OnSetBounds( &_this->val_fr_0, _Const00D9 );
  CoreRectView__OnSetBounds( &_this->val_fr_1, _Const00DA );
  CoreRectView__OnSetBounds( &_this->val_fr_2, _Const00DB );
  CoreRectView__OnSetBounds( &_this->val_t_0, _Const00DC );
  CoreRectView__OnSetBounds( &_this->val_t_1, _Const00DD );
  CoreRectView__OnSetBounds( &_this->val_t_2, _Const00DE );
  CoreRectView__OnSetBounds( &_this->val_t_3, _Const00DF );
  CoreRectView__OnSetBounds( &_this->val_t_4, _Const00E0 );
  CoreRectView__OnSetBounds( &_this->labelFreq, _Const00E1 );
  CoreRectView__OnSetBounds( &_this->val_freq, _Const00E2 );
  CoreRectView__OnSetBounds( &_this->IconButton, _Const00E3 );
  ApplicationModIconButton_OnSetIconIndex( &_this->IconButton, 7 );
  CoreRectView__OnSetBounds( &_this->grafico, _Const00E4 );
  ApplicationPlotterGraph_OnSetVerticalRatio( &_this->grafico, 1.100000f );
  ApplicationPlotterGraph_OnSetStrokeWidth( &_this->grafico, 4.000000f );
  CoreRectView__OnSetBounds( &_this->config, _Const00E4 );
  ApplicationModIconButton_OnSetIcon( &_this->IconButton, EwLoadResource( &ResourcesSymbolIconsLarge, 
  ResourcesBitmap ));

  /* Call the user defined constructor */
  ApplicationFreq769_Init( _this, aArg );
}

/* Re-Initializer for the class variant 'Application::Freq769' */
void ApplicationFreq769__ReInit( ApplicationFreq _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Finalizer method for the class variant 'Application::Freq769' */
void ApplicationFreq769__Done( ApplicationFreq _this )
{
  register ApplicationFreq769 _vthis = (ApplicationFreq769)_this->_vthis;

  /* Finalize this class */
  _vthis->_VMT = EW_VCLASS( ApplicationFreq769 );
}

/* Garbage Collector method for the class variant 'Application::Freq769' */
void ApplicationFreq769__Mark( ApplicationFreq _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationFreq769_Init( ApplicationFreq _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreTimer_OnSetPeriod( &_this->intervalo, 1000 / _this->freqV[ EwCheckIndex( _this->freqIdx, 
  7 )]);
  GraphicsPath_InitMatrix( &_this->grafico.PathData );
  ApplicationFreq_atualizaX((ApplicationFreq)_this );
  ApplicationFreq_atualizaY((ApplicationFreq)_this );
  _this->config.Sair.OnAction = EwNewSlot( _this, ApplicationFreq_sairConfig );
  _this->config.SupMenos.OnAction = EwNewSlot( _this, ApplicationFreq_trocaEscala 
  );
  _this->config.SupMais.OnAction = EwNewSlot( _this, ApplicationFreq_trocaEscala 
  );
  _this->config.InfMenos.OnAction = EwNewSlot( _this, ApplicationFreq_trocaEscala 
  );
  _this->config.InfMais.OnAction = EwNewSlot( _this, ApplicationFreq_trocaEscala 
  );
  _this->config.SupSignMais.OnAction = EwNewSlot( _this, ApplicationFreq_trocaEscala 
  );
  _this->config.SupSignMenos.OnAction = EwNewSlot( _this, ApplicationFreq_trocaEscala 
  );
  EwSignal( EwNewSlot( _this, ApplicationFreq_trocaEscala ), ((XObject)_this ));
}

/* Atualiza os r�tulos do eixo vertical do gr�fico e a propor��o de plotagem. */
void ApplicationFreq769_atualizaY( ApplicationFreq _this )
{
  ApplicationPlotterGraph_OnSetVerticalRatio( &_this->grafico, (XFloat)( EwGetRectH( 
  _this->grafico.Super2.Bounds ) / 3 ) / _this->unitsV[ EwCheckIndex( _this->unitsIdx, 
  8 )]);
  ViewsText_OnSetString( &_this->val_fr_1, EwConcatString( ApplicationFreq_float2String((ApplicationFreq)_this, 
  _this->valorMeio, 3 ), EwLoadString( &_Const0060 )));
  ViewsText_OnSetString( &_this->val_fr_0, EwConcatString( ApplicationFreq_float2String((ApplicationFreq)_this, 
  _this->valorMeio - _this->unitsV[ EwCheckIndex( _this->unitsIdx, 8 )], 3 ), EwLoadString( 
  &_Const0060 )));
  ViewsText_OnSetString( &_this->val_fr_2, EwConcatString( ApplicationFreq_float2String((ApplicationFreq)_this, 
  _this->valorMeio + _this->unitsV[ EwCheckIndex( _this->unitsIdx, 8 )], 3 ), EwLoadString( 
  &_Const0060 )));
}

/* Atualiza os r�tulos do eixo X no gr�fico. */
void ApplicationFreq769_atualizaX( ApplicationFreq _this )
{
  ViewsText_OnSetString( &_this->val_t_1, EwConcatString( ApplicationFreq_float2String((ApplicationFreq)_this, 
  ((XFloat)( EwGetRectW( _this->grafico.Super2.Bounds ) / 4 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 3.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_2, EwConcatString( ApplicationFreq_float2String((ApplicationFreq)_this, 
  ((XFloat)( EwGetRectW( _this->grafico.Super2.Bounds ) / 2 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 3.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_3, EwConcatString( ApplicationFreq_float2String((ApplicationFreq)_this, 
  ((XFloat)(( 3 * EwGetRectW( _this->grafico.Super2.Bounds )) / 4 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 3.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_4, EwConcatString( ApplicationFreq_float2String((ApplicationFreq)_this, 
  ((XFloat)EwGetRectW( _this->grafico.Super2.Bounds ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 3.000000f, 1 ), EwLoadString( &_Const0064 )));
}

/* Variants derived from the class : 'Application::Freq769' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFreq769 )
EW_END_OF_CLASS_VARIANTS( ApplicationFreq769 )

/* Virtual Method Table (VMT) for the class variant : 'Application::Freq769' */
EW_DEFINE_VCLASS( ApplicationFreq769, XObjectVariant, ApplicationFreq, "Application::Freq769" )
  ApplicationFreq769_atualizaY,
  ApplicationFreq769_atualizaX,
EW_END_OF_VCLASS( ApplicationFreq769 )

/* Initializer for the class variant 'Application::Mag769' */
void ApplicationMag769__Init( ApplicationMag _this, XObject aLink, XHandle aArg )
{
  register ApplicationMag769 _vthis = (ApplicationMag769)_this->_vthis;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aLink );

  /* Setup the VMT pointer */
  _vthis->_VMT = EW_VCLASS( ApplicationMag769 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00BB );
  CoreRectView__OnSetBounds( &_this->val_m_inf, _Const00E5 );
  CoreRectView__OnSetBounds( &_this->val_m_meio, _Const00E6 );
  CoreRectView__OnSetBounds( &_this->val_m_sup, _Const00E7 );
  CoreRectView__OnSetBounds( &_this->val_t_ini, _Const00DC );
  CoreRectView__OnSetBounds( &_this->val_t_1, _Const00DD );
  CoreRectView__OnSetBounds( &_this->val_t_2, _Const00E8 );
  CoreRectView__OnSetBounds( &_this->val_t_3, _Const00E9 );
  CoreRectView__OnSetBounds( &_this->val_t_4, _Const00EA );
  CoreRectView__OnSetBounds( &_this->val_T, _Const00EB );
  CoreRectView__OnSetBounds( &_this->val_S, _Const00EC );
  CoreRectView__OnSetBounds( &_this->val_R, _Const00ED );
  CoreRectView__OnSetBounds( &_this->labelUnidades, _Const00EE );
  CoreRectView__OnSetBounds( &_this->IconButton, _Const00E3 );
  ApplicationModIconButton_OnSetIconIndex( &_this->IconButton, 7 );
  CoreRectView__OnSetBounds( &_this->grafico, _Const00E4 );
  ApplicationPlotterTripleGraph_OnSetStrokeWidth( &_this->grafico, 4.000000f );
  CoreRectView__OnSetBounds( &_this->config, _Const00E4 );
  ApplicationModIconButton_OnSetIcon( &_this->IconButton, EwLoadResource( &ResourcesSymbolIconsLarge, 
  ResourcesBitmap ));

  /* Call the user defined constructor */
  ApplicationMag769_Init( _this, aArg );
}

/* Re-Initializer for the class variant 'Application::Mag769' */
void ApplicationMag769__ReInit( ApplicationMag _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Finalizer method for the class variant 'Application::Mag769' */
void ApplicationMag769__Done( ApplicationMag _this )
{
  register ApplicationMag769 _vthis = (ApplicationMag769)_this->_vthis;

  /* Finalize this class */
  _vthis->_VMT = EW_VCLASS( ApplicationMag769 );
}

/* Garbage Collector method for the class variant 'Application::Mag769' */
void ApplicationMag769__Mark( ApplicationMag _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationMag769_Init( ApplicationMag _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreTimer_OnSetPeriod( &_this->intervalo, 1000 / _this->freqV[ EwCheckIndex( _this->freqIdx, 
  6 )]);
  ApplicationMag_atualizaX((ApplicationMag)_this );
  ApplicationMag_atualizaY((ApplicationMag)_this );
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

/* Atualiza os r�tulos do eixo vertical do gr�fico e a propor��o de plotagem. */
void ApplicationMag769_atualizaY( ApplicationMag _this )
{
  GraphicsPath_InitMatrix( &_this->grafico.PathDataR );
  GraphicsPath_InitMatrix( &_this->grafico.PathDataS );
  GraphicsPath_InitMatrix( &_this->grafico.PathDataT );
  ApplicationPlotterTripleGraph_OnSetVerticalRatio( &_this->grafico, (XFloat)( EwGetRectH( 
  _this->grafico.Super2.Bounds ) / 3 ) / _this->unitsV[ EwCheckIndex( _this->unitsIdx, 
  6 )]);
  ViewsText_OnSetString( &_this->val_m_meio, EwConcatString( ApplicationMag_float2String((ApplicationMag)_this, 
  _this->valorMeio, 1 ), EwLoadString( &_Const0072 )));
  ViewsText_OnSetString( &_this->val_m_inf, EwConcatString( ApplicationMag_float2String((ApplicationMag)_this, 
  _this->valorMeio - _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )], 1 ), EwLoadString( 
  &_Const0072 )));
  ViewsText_OnSetString( &_this->val_m_sup, EwConcatString( ApplicationMag_float2String((ApplicationMag)_this, 
  _this->valorMeio + _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )], 1 ), EwLoadString( 
  &_Const0072 )));
}

/* Atualiza os r�tulos do eixo X no gr�fico. */
void ApplicationMag769_atualizaX( ApplicationMag _this )
{
  ViewsText_OnSetString( &_this->val_t_1, EwConcatString( ApplicationMag_float2String((ApplicationMag)_this, 
  ((XFloat)( EwGetRectW( _this->grafico.Super2.Bounds ) / 4 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 3.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_2, EwConcatString( ApplicationMag_float2String((ApplicationMag)_this, 
  ((XFloat)( EwGetRectW( _this->grafico.Super2.Bounds ) / 2 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 3.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_3, EwConcatString( ApplicationMag_float2String((ApplicationMag)_this, 
  ((XFloat)(( 3 * EwGetRectW( _this->grafico.Super2.Bounds )) / 4 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 3.000000f, 1 ), EwLoadString( &_Const0064 )));
  ViewsText_OnSetString( &_this->val_t_4, EwConcatString( ApplicationMag_float2String((ApplicationMag)_this, 
  ((XFloat)EwGetRectW( _this->grafico.Super2.Bounds ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / 3.000000f, 1 ), EwLoadString( &_Const0064 )));
}

/* Variants derived from the class : 'Application::Mag769' */
EW_DEFINE_CLASS_VARIANTS( ApplicationMag769 )
EW_END_OF_CLASS_VARIANTS( ApplicationMag769 )

/* Virtual Method Table (VMT) for the class variant : 'Application::Mag769' */
EW_DEFINE_VCLASS( ApplicationMag769, XObjectVariant, ApplicationMag, "Application::Mag769" )
  ApplicationMag769_atualizaY,
  ApplicationMag769_atualizaX,
EW_END_OF_VCLASS( ApplicationMag769 )

/* Initializer for the class variant 'Application::Fase769' */
void ApplicationFase769__Init( ApplicationFase _this, XObject aLink, XHandle aArg )
{
  register ApplicationFase769 _vthis = (ApplicationFase769)_this->_vthis;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aLink );

  /* Setup the VMT pointer */
  _vthis->_VMT = EW_VCLASS( ApplicationFase769 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00BB );
  CoreRectView__OnSetBounds( &_this->labelFaseInf, _Const00E5 );
  CoreRectView__OnSetBounds( &_this->labelFaseMeio, _Const00E6 );
  CoreRectView__OnSetBounds( &_this->labelFaseSup, _Const00E7 );
  CoreRectView__OnSetBounds( &_this->val_t_ini, _Const00DC );
  CoreRectView__OnSetBounds( &_this->val_t_1, _Const00DD );
  CoreRectView__OnSetBounds( &_this->val_t_2, _Const00E8 );
  CoreRectView__OnSetBounds( &_this->val_t_3, _Const00E9 );
  CoreRectView__OnSetBounds( &_this->val_t_4, _Const00EF );
  CoreRectView__OnSetBounds( &_this->val_T, _Const00EB );
  CoreRectView__OnSetBounds( &_this->val_S, _Const00EC );
  CoreRectView__OnSetBounds( &_this->val_R, _Const00ED );
  CoreRectView__OnSetBounds( &_this->labelUni, _Const00F0 );
  CoreRectView__OnSetBounds( &_this->grafico, _Const00E4 );
  ApplicationPlotterTripleGraph_OnSetStrokeWidth( &_this->grafico, 4.000000f );
  CoreRectView__OnSetBounds( &_this->config, _Const00E4 );
  CoreRectView__OnSetBounds( &_this->IconButton, _Const00E3 );
  ApplicationModIconButton_OnSetIconIndex( &_this->IconButton, 7 );
  ApplicationModIconButton_OnSetIcon( &_this->IconButton, EwLoadResource( &ResourcesSymbolIconsLarge, 
  ResourcesBitmap ));

  /* Call the user defined constructor */
  ApplicationFase769_Init( _this, aArg );
}

/* Re-Initializer for the class variant 'Application::Fase769' */
void ApplicationFase769__ReInit( ApplicationFase _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Finalizer method for the class variant 'Application::Fase769' */
void ApplicationFase769__Done( ApplicationFase _this )
{
  register ApplicationFase769 _vthis = (ApplicationFase769)_this->_vthis;

  /* Finalize this class */
  _vthis->_VMT = EW_VCLASS( ApplicationFase769 );
}

/* Garbage Collector method for the class variant 'Application::Fase769' */
void ApplicationFase769__Mark( ApplicationFase _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationFase769_Init( ApplicationFase _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreTimer_OnSetPeriod( &_this->intervalo, 1000 / _this->freqV[ EwCheckIndex( _this->freqIdx, 
  6 )]);
  ApplicationFase_atualizaX((ApplicationFase)_this );
  GraphicsPath_InitMatrix( &_this->grafico.PathDataR );
  GraphicsPath_InitMatrix( &_this->grafico.PathDataS );
  GraphicsPath_InitMatrix( &_this->grafico.PathDataT );
  ApplicationPlotterTripleGraph_OnSetVerticalRatio( &_this->grafico, (XFloat)( EwGetRectH( 
  _this->grafico.Super2.Bounds ) / 3 ) / 120.000000f );
  ApplicationFase_setConfigScreen((ApplicationFase)_this );
  EwSignal( EwNewSlot( _this, ApplicationFase_trocaEscala ), ((XObject)_this ));
}

/* Atualiza os r�tulos do eixo X no gr�fico. */
void ApplicationFase769_atualizaX( ApplicationFase _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Variants derived from the class : 'Application::Fase769' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFase769 )
EW_END_OF_CLASS_VARIANTS( ApplicationFase769 )

/* Virtual Method Table (VMT) for the class variant : 'Application::Fase769' */
EW_DEFINE_VCLASS( ApplicationFase769, XObjectVariant, ApplicationFase, "Application::Fase769" )
  ApplicationFase769_atualizaX,
EW_END_OF_VCLASS( ApplicationFase769 )

/* Initializer for the class variant 'Application::FFT769' */
void ApplicationFFT769__Init( ApplicationFFT _this, XObject aLink, XHandle aArg )
{
  register ApplicationFFT769 _vthis = (ApplicationFFT769)_this->_vthis;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aLink );
  EW_UNUSED_ARG( aArg );

  /* Setup the VMT pointer */
  _vthis->_VMT = EW_VCLASS( ApplicationFFT769 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00BB );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_10, _Const00F1 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_10, _Const00F2 );
  ViewsLine_OnSetWidth( &_this->linha_h_10, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_20, _Const00F3 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_20, _Const00F4 );
  ViewsLine_OnSetWidth( &_this->linha_h_20, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_30, _Const00F5 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_30, _Const00F6 );
  ViewsLine_OnSetWidth( &_this->linha_h_30, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_40, _Const00F7 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_40, _Const00F8 );
  ViewsLine_OnSetWidth( &_this->linha_h_40, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_25, _Const00F9 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_25, _Const00FA );
  ViewsLine_OnSetWidth( &_this->linha_m_25, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_50, _Const00FB );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_50, _Const00FC );
  ViewsLine_OnSetWidth( &_this->linha_m_50, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_75, _Const00FD );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_75, _Const00FE );
  ViewsLine_OnSetWidth( &_this->linha_m_75, 2 );
  CoreRectView__OnSetBounds( &_this->val_h_10, _Const00FF );
  CoreRectView__OnSetBounds( &_this->val_h_20, _Const0100 );
  CoreRectView__OnSetBounds( &_this->val_h_30, _Const0101 );
  CoreRectView__OnSetBounds( &_this->val_h_40, _Const0102 );
  CoreRectView__OnSetBounds( &_this->val_m_25, _Const0103 );
  CoreRectView__OnSetBounds( &_this->val_m_50, _Const0104 );
  CoreRectView__OnSetBounds( &_this->val_m_75, _Const0105 );
  CoreRectView__OnSetBounds( &_this->graf_FFT, _Const0106 );
  ChartsGraph_OnSetLineWidth( &_this->graf_FFT, 6.000000f );
  ChartsGraph_OnSetCoordOrigin( &_this->graf_FFT, _Const0107 );
  ChartsGraph_OnSetPixelPerUnit( &_this->graf_FFT, _Const0108 );
  CoreRectView__OnSetBounds( &_this->borda, _Const0106 );
  ViewsBorder_OnSetWidth( &_this->borda, 2 );
  CoreRectView__OnSetBounds( &_this->botao_R, _Const0109 );
  CoreRectView__OnSetBounds( &_this->botao_S, _Const010A );
  CoreRectView__OnSetBounds( &_this->botao_T, _Const010B );
}

/* Re-Initializer for the class variant 'Application::FFT769' */
void ApplicationFFT769__ReInit( ApplicationFFT _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Finalizer method for the class variant 'Application::FFT769' */
void ApplicationFFT769__Done( ApplicationFFT _this )
{
  register ApplicationFFT769 _vthis = (ApplicationFFT769)_this->_vthis;

  /* Finalize this class */
  _vthis->_VMT = EW_VCLASS( ApplicationFFT769 );
}

/* Garbage Collector method for the class variant 'Application::FFT769' */
void ApplicationFFT769__Mark( ApplicationFFT _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Variants derived from the class : 'Application::FFT769' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFFT769 )
EW_END_OF_CLASS_VARIANTS( ApplicationFFT769 )

/* Virtual Method Table (VMT) for the class variant : 'Application::FFT769' */
EW_DEFINE_VCLASS( ApplicationFFT769, XObjectVariant, ApplicationFFT, "Application::FFT769" )
EW_END_OF_VCLASS( ApplicationFFT769 )

/* Initializer for the class variant 'Application::PDC769' */
void ApplicationPDC769__Init( ApplicationPDC _this, XObject aLink, XHandle aArg )
{
  register ApplicationPDC769 _vthis = (ApplicationPDC769)_this->_vthis;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aLink );
  EW_UNUSED_ARG( aArg );

  /* Setup the VMT pointer */
  _vthis->_VMT = EW_VCLASS( ApplicationPDC769 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00BB );
  CoreRectView__OnSetBounds( &_this->Message, _Const010C );
  CoreRectView__OnSetBounds( &_this->BStart, _Const010D );
  CoreRectView__OnSetBounds( &_this->labelMsg, _Const010E );
  ViewsText_OnSetAlignment( &_this->labelMsg, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelMsg, EwLoadString( &_Const010F ));
  CoreRectView__OnSetBounds( &_this->labelState, _Const0110 );
  ViewsText_OnSetAlignment( &_this->labelState, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelState, EwLoadString( &_Const00A7 ));
  CoreRectView__OnSetBounds( &_this->Status, _Const0111 );
  ViewsText_OnSetString( &_this->Status, EwLoadString( &_Const0112 ));
  CoreRectView__OnSetBounds( &_this->BStop, _Const0113 );
  ViewsText_OnSetFont( &_this->labelMsg, EwLoadResource( &FlatFontL, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->labelState, EwLoadResource( &FlatFontL, ResourcesFont 
  ));
}

/* Re-Initializer for the class variant 'Application::PDC769' */
void ApplicationPDC769__ReInit( ApplicationPDC _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Finalizer method for the class variant 'Application::PDC769' */
void ApplicationPDC769__Done( ApplicationPDC _this )
{
  register ApplicationPDC769 _vthis = (ApplicationPDC769)_this->_vthis;

  /* Finalize this class */
  _vthis->_VMT = EW_VCLASS( ApplicationPDC769 );
}

/* Garbage Collector method for the class variant 'Application::PDC769' */
void ApplicationPDC769__Mark( ApplicationPDC _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Variants derived from the class : 'Application::PDC769' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPDC769 )
EW_END_OF_CLASS_VARIANTS( ApplicationPDC769 )

/* Virtual Method Table (VMT) for the class variant : 'Application::PDC769' */
EW_DEFINE_VCLASS( ApplicationPDC769, XObjectVariant, ApplicationPDC, "Application::PDC769" )
EW_END_OF_VCLASS( ApplicationPDC769 )

/* Font resource : 'Application::Arial21' */
EW_DEFINE_FONT_RES( ApplicationArial21, 17, 4, 1, 16, 0x001F, 0x00C0 )
  EW_GLYPH( 0x001F, 2, -12, 10, 12, 14, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 5, 0x000000E0 ),                /* ' ' */
  EW_GLYPH( 0x0021, 2, -13, 2, 13, 6, 0x000000E0 ),             /* '!' */
  EW_GLYPH( 0x0022, 1, -13, 5, 5, 6, 0x00000112 ),              /* '"' */
  EW_GLYPH( 0x0023, 0, -13, 11, 13, 10, 0x00000169 ),           /* '#' */
  EW_GLYPH( 0x0024, 1, -14, 9, 16, 10, 0x00000314 ),            /* '$' */
  EW_GLYPH( 0x0025, 1, -13, 14, 13, 16, 0x000004F3 ),           /* '%' */
  EW_GLYPH( 0x0026, 1, -13, 11, 13, 12, 0x0000074F ),           /* '&' */
  EW_GLYPH( 0x0027, 0, -13, 2, 5, 3, 0x00000920 ),              /* ''' */
  EW_GLYPH( 0x0028, 1, -13, 5, 17, 6, 0x00000948 ),             /* '(' */
  EW_GLYPH( 0x0029, 0, -13, 5, 17, 6, 0x00000A3D ),             /* ')' */
  EW_GLYPH( 0x002A, 1, -13, 5, 5, 7, 0x00000B34 ),              /* '*' */
  EW_GLYPH( 0x002B, 1, -11, 10, 10, 11, 0x00000B97 ),           /* '+' */
  EW_GLYPH( 0x002C, 2, -2, 2, 4, 5, 0x00000C43 ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -6, 5, 2, 6, 0x00000C63 ),               /* '-' */
  EW_GLYPH( 0x002E, 2, -2, 2, 2, 5, 0x00000C81 ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -13, 6, 13, 5, 0x00000C8D ),             /* '/' */
  EW_GLYPH( 0x0030, 0, -13, 9, 13, 10, 0x00000D5D ),            /* '0' */
  EW_GLYPH( 0x0031, 2, -13, 5, 13, 10, 0x00000EC8 ),            /* '1' */
  EW_GLYPH( 0x0032, 1, -13, 8, 13, 10, 0x00000F44 ),            /* '2' */
  EW_GLYPH( 0x0033, 1, -13, 8, 13, 10, 0x0000109D ),            /* '3' */
  EW_GLYPH( 0x0034, 0, -13, 9, 13, 10, 0x000011FD ),            /* '4' */
  EW_GLYPH( 0x0035, 1, -13, 8, 13, 10, 0x000012F8 ),            /* '5' */
  EW_GLYPH( 0x0036, 1, -13, 8, 13, 10, 0x00001454 ),            /* '6' */
  EW_GLYPH( 0x0037, 1, -13, 8, 13, 10, 0x000015E6 ),            /* '7' */
  EW_GLYPH( 0x0038, 1, -13, 8, 13, 10, 0x000016FC ),            /* '8' */
  EW_GLYPH( 0x0039, 1, -13, 8, 13, 10, 0x00001891 ),            /* '9' */
  EW_GLYPH( 0x003A, 2, -10, 2, 10, 5, 0x00001A17 ),             /* ':' */
  EW_GLYPH( 0x003B, 2, -10, 2, 12, 5, 0x00001A43 ),             /* ';' */
  EW_GLYPH( 0x003C, 1, -11, 9, 9, 11, 0x00001A83 ),             /* '<' */
  EW_GLYPH( 0x003D, 1, -10, 9, 6, 11, 0x00001BB3 ),             /* '=' */
  EW_GLYPH( 0x003E, 1, -11, 9, 9, 11, 0x00001C55 ),             /* '>' */
  EW_GLYPH( 0x003F, 1, -13, 8, 13, 10, 0x00001D85 ),            /* '?' */
  EW_GLYPH( 0x0040, 1, -13, 17, 17, 18, 0x00001EC9 ),           /* '@' */
  EW_GLYPH( 0x0041, -1, -13, 13, 13, 11, 0x00002316 ),          /* 'A' */
  EW_GLYPH( 0x0042, 1, -13, 10, 13, 12, 0x000024C1 ),           /* 'B' */
  EW_GLYPH( 0x0043, 1, -13, 11, 13, 13, 0x0000263B ),           /* 'C' */
  EW_GLYPH( 0x0044, 1, -13, 11, 13, 13, 0x0000280B ),           /* 'D' */
  EW_GLYPH( 0x0045, 1, -13, 10, 13, 12, 0x00002978 ),           /* 'E' */
  EW_GLYPH( 0x0046, 1, -13, 9, 13, 11, 0x00002A9A ),            /* 'F' */
  EW_GLYPH( 0x0047, 1, -13, 12, 13, 14, 0x00002B7F ),           /* 'G' */
  EW_GLYPH( 0x0048, 1, -13, 11, 13, 13, 0x00002D92 ),           /* 'H' */
  EW_GLYPH( 0x0049, 1, -13, 2, 13, 4, 0x00002E69 ),             /* 'I' */
  EW_GLYPH( 0x004A, 1, -13, 7, 13, 9, 0x00002E8B ),             /* 'J' */
  EW_GLYPH( 0x004B, 1, -13, 11, 13, 12, 0x00002F34 ),           /* 'K' */
  EW_GLYPH( 0x004C, 1, -13, 8, 13, 10, 0x000030BD ),            /* 'L' */
  EW_GLYPH( 0x004D, 1, -13, 13, 13, 15, 0x00003145 ),           /* 'M' */
  EW_GLYPH( 0x004E, 1, -13, 11, 13, 13, 0x000032F5 ),           /* 'N' */
  EW_GLYPH( 0x004F, 1, -13, 12, 13, 14, 0x00003416 ),           /* 'O' */
  EW_GLYPH( 0x0050, 1, -13, 10, 13, 12, 0x0000360F ),           /* 'P' */
  EW_GLYPH( 0x0051, 1, -13, 12, 14, 14, 0x00003756 ),           /* 'Q' */
  EW_GLYPH( 0x0052, 1, -13, 12, 13, 13, 0x0000398B ),           /* 'R' */
  EW_GLYPH( 0x0053, 1, -13, 10, 13, 12, 0x00003B2F ),           /* 'S' */
  EW_GLYPH( 0x0054, 1, -13, 10, 13, 12, 0x00003D3E ),           /* 'T' */
  EW_GLYPH( 0x0055, 1, -13, 11, 13, 13, 0x00003E08 ),           /* 'U' */
  EW_GLYPH( 0x0056, -1, -13, 13, 13, 11, 0x00003F2E ),          /* 'V' */
  EW_GLYPH( 0x0057, 0, -13, 17, 13, 17, 0x000040F5 ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -13, 11, 13, 11, 0x00004389 ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -13, 12, 13, 12, 0x00004547 ),           /* 'Y' */
  EW_GLYPH( 0x005A, 0, -13, 10, 13, 11, 0x000046C3 ),           /* 'Z' */
  EW_GLYPH( 0x005B, 1, -13, 4, 17, 5, 0x0000482D ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -13, 6, 13, 5, 0x00004891 ),             /* '\' */
  EW_GLYPH( 0x005D, 0, -13, 4, 17, 5, 0x00004961 ),             /* ']' */
  EW_GLYPH( 0x005E, 0, -13, 7, 7, 7, 0x000049C5 ),              /* '^' */
  EW_GLYPH( 0x005F, 0, 2, 10, 2, 10, 0x00004A6E ),              /* '_' */
  EW_GLYPH( 0x0060, 1, -13, 3, 2, 6, 0x00004AAA ),              /* '`' */
  EW_GLYPH( 0x0061, 1, -10, 8, 10, 10, 0x00004AC5 ),            /* 'a' */
  EW_GLYPH( 0x0062, 1, -13, 8, 13, 10, 0x00004C01 ),            /* 'b' */
  EW_GLYPH( 0x0063, 1, -10, 8, 10, 9, 0x00004D0F ),             /* 'c' */
  EW_GLYPH( 0x0064, 1, -13, 8, 13, 10, 0x00004E0D ),            /* 'd' */
  EW_GLYPH( 0x0065, 1, -10, 8, 10, 10, 0x00004F1A ),            /* 'e' */
  EW_GLYPH( 0x0066, 0, -13, 6, 13, 5, 0x00005066 ),             /* 'f' */
  EW_GLYPH( 0x0067, 1, -10, 8, 14, 10, 0x00005103 ),            /* 'g' */
  EW_GLYPH( 0x0068, 1, -13, 8, 13, 10, 0x0000528A ),            /* 'h' */
  EW_GLYPH( 0x0069, 1, -13, 2, 13, 4, 0x00005345 ),             /* 'i' */
  EW_GLYPH( 0x006A, -1, -13, 4, 17, 4, 0x00005377 ),            /* 'j' */
  EW_GLYPH( 0x006B, 1, -13, 8, 13, 9, 0x000053F3 ),             /* 'k' */
  EW_GLYPH( 0x006C, 1, -13, 2, 13, 4, 0x000054F5 ),             /* 'l' */
  EW_GLYPH( 0x006D, 1, -10, 12, 10, 14, 0x00005517 ),           /* 'm' */
  EW_GLYPH( 0x006E, 1, -10, 8, 10, 10, 0x00005617 ),            /* 'n' */
  EW_GLYPH( 0x006F, 1, -10, 8, 10, 10, 0x000056C5 ),            /* 'o' */
  EW_GLYPH( 0x0070, 1, -10, 8, 14, 10, 0x000057EB ),            /* 'p' */
  EW_GLYPH( 0x0071, 1, -10, 8, 14, 10, 0x0000591C ),            /* 'q' */
  EW_GLYPH( 0x0072, 1, -10, 5, 10, 6, 0x00005A48 ),             /* 'r' */
  EW_GLYPH( 0x0073, 1, -10, 7, 10, 9, 0x00005AAE ),             /* 's' */
  EW_GLYPH( 0x0074, 0, -14, 4, 14, 5, 0x00005BE1 ),             /* 't' */
  EW_GLYPH( 0x0075, 1, -10, 8, 10, 10, 0x00005C46 ),            /* 'u' */
  EW_GLYPH( 0x0076, -1, -10, 11, 10, 9, 0x00005CE3 ),           /* 'v' */
  EW_GLYPH( 0x0077, -1, -10, 15, 10, 13, 0x00005E21 ),          /* 'w' */
  EW_GLYPH( 0x0078, 0, -10, 9, 10, 8, 0x0000600C ),             /* 'x' */
  EW_GLYPH( 0x0079, -1, -10, 10, 14, 9, 0x00006129 ),           /* 'y' */
  EW_GLYPH( 0x007A, 0, -10, 8, 10, 8, 0x000062B9 ),             /* 'z' */
  EW_GLYPH( 0x007B, 0, -13, 6, 17, 6, 0x000063C7 ),             /* '{' */
  EW_GLYPH( 0x007C, 2, -13, 2, 17, 6, 0x000064BA ),             /* '|' */
  EW_GLYPH( 0x007D, 0, -13, 6, 17, 6, 0x000064E4 ),             /* '}' */
  EW_GLYPH( 0x007E, 0, -8, 10, 4, 11, 0x000065DC ),             /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 5, 0x00006693 ),
  EW_GLYPH( 0x00A1, 2, -10, 2, 14, 6, 0x00006693 ),
  EW_GLYPH( 0x00A2, 1, -13, 8, 17, 10, 0x000066C7 ),
  EW_GLYPH( 0x00A3, 0, -13, 9, 13, 10, 0x00006888 ),
  EW_GLYPH( 0x00A4, 0, -10, 9, 7, 10, 0x00006A0C ),
  EW_GLYPH( 0x00A5, 0, -13, 10, 13, 10, 0x00006B05 ),
  EW_GLYPH( 0x00A6, 2, -13, 2, 17, 6, 0x00006C7F ),
  EW_GLYPH( 0x00A7, 1, -13, 8, 17, 10, 0x00006CB9 ),
  EW_GLYPH( 0x00A8, 0, -13, 6, 2, 6, 0x00006EC0 ),
  EW_GLYPH( 0x00A9, 0, -13, 13, 13, 13, 0x00006EDC ),
  EW_GLYPH( 0x00AA, 0, -13, 6, 7, 6, 0x0000717B ),
  EW_GLYPH( 0x00AB, 1, -9, 9, 8, 10, 0x0000722B ),
  EW_GLYPH( 0x00AC, 1, -9, 9, 5, 11, 0x0000733F ),
  EW_GLYPH( 0x00AD, 0, -6, 5, 2, 6, 0x000073AC ),
  EW_GLYPH( 0x00AE, 0, -13, 13, 13, 13, 0x000073CA ),
  EW_GLYPH( 0x00AF, -1, -16, 11, 2, 10, 0x00007634 ),
  EW_GLYPH( 0x00B0, 1, -13, 5, 5, 7, 0x00007676 ),
  EW_GLYPH( 0x00B1, 0, -11, 10, 11, 10, 0x000076ED ),
  EW_GLYPH( 0x00B2, 0, -13, 5, 7, 6, 0x000077C3 ),
  EW_GLYPH( 0x00B3, 0, -13, 5, 7, 6, 0x00007861 ),
  EW_GLYPH( 0x00B4, 2, -13, 3, 2, 6, 0x0000790F ),
  EW_GLYPH( 0x00B5, 1, -10, 8, 14, 10, 0x0000792A ),
  EW_GLYPH( 0x00B6, 0, -13, 10, 16, 10, 0x000079F8 ),
  EW_GLYPH( 0x00B7, 2, -8, 2, 2, 6, 0x00007AFD ),
  EW_GLYPH( 0x00B8, 1, 0, 3, 4, 6, 0x00007B09 ),
  EW_GLYPH( 0x00B9, 1, -13, 4, 7, 6, 0x00007B41 ),
  EW_GLYPH( 0x00BA, 0, -13, 7, 7, 7, 0x00007B8E ),
  EW_GLYPH( 0x00BB, 0, -9, 9, 8, 10, 0x00007C54 ),
  EW_GLYPH( 0x00BC, 1, -13, 14, 13, 15, 0x00007D68 ),
  EW_GLYPH( 0x00BD, 1, -13, 14, 13, 15, 0x00007F5B ),
  EW_GLYPH( 0x00BE, 0, -13, 15, 13, 15, 0x00008182 ),
  EW_GLYPH( 0x00BF, 1, -10, 9, 14, 11, 0x000083F0 ),
  EW_GLYPH( 0x00C0, -1, -16, 13, 16, 12, 0x0000852E ),
  EW_GLYPH( 0x00C1, -1, -16, 13, 16, 12, 0x0000871E ),
  EW_GLYPH( 0x00C2, -1, -16, 13, 16, 12, 0x0000890E ),
  EW_GLYPH( 0x00C3, -1, -17, 13, 17, 12, 0x00008B3A ),
  EW_GLYPH( 0x00C4, -1, -16, 13, 16, 12, 0x00008D6B ),
  EW_GLYPH( 0x00C5, -1, -15, 13, 15, 12, 0x00008F5D ),
  EW_GLYPH( 0x00C6, -1, -13, 18, 13, 18, 0x00009137 ),
  EW_GLYPH( 0x00C7, 1, -13, 11, 17, 13, 0x00009362 ),
  EW_GLYPH( 0x00C8, 1, -16, 10, 16, 12, 0x0000959D ),
  EW_GLYPH( 0x00C9, 1, -16, 10, 16, 12, 0x000096FB ),
  EW_GLYPH( 0x00CA, 1, -16, 10, 16, 12, 0x00009859 ),
  EW_GLYPH( 0x00CB, 1, -16, 10, 16, 12, 0x000099F3 ),
  EW_GLYPH( 0x00CC, 0, -16, 3, 16, 5, 0x00009B53 ),
  EW_GLYPH( 0x00CD, 1, -16, 3, 16, 5, 0x00009BA9 ),
  EW_GLYPH( 0x00CE, -2, -16, 8, 16, 5, 0x00009BFF ),
  EW_GLYPH( 0x00CF, -1, -16, 6, 16, 5, 0x00009CE1 ),
  EW_GLYPH( 0x00D0, 0, -13, 12, 13, 13, 0x00009D69 ),
  EW_GLYPH( 0x00D1, 1, -17, 11, 17, 13, 0x00009F0A ),
  EW_GLYPH( 0x00D2, 1, -16, 12, 16, 14, 0x0000A0A9 ),
  EW_GLYPH( 0x00D3, 1, -16, 12, 16, 14, 0x0000A2E4 ),
  EW_GLYPH( 0x00D4, 1, -16, 12, 16, 14, 0x0000A51F ),
  EW_GLYPH( 0x00D5, 1, -17, 12, 17, 14, 0x0000A796 ),
  EW_GLYPH( 0x00D6, 1, -16, 12, 16, 14, 0x0000AA11 ),
  EW_GLYPH( 0x00D7, 2, -10, 7, 7, 11, 0x0000AC4E ),
  EW_GLYPH( 0x00D8, 1, -14, 13, 15, 14, 0x0000ACFF ),
  EW_GLYPH( 0x00D9, 1, -16, 11, 16, 13, 0x0000AF89 ),
  EW_GLYPH( 0x00DA, 1, -16, 11, 16, 13, 0x0000B0EE ),
  EW_GLYPH( 0x00DB, 1, -16, 11, 16, 13, 0x0000B253 ),
  EW_GLYPH( 0x00DC, 1, -16, 11, 16, 13, 0x0000B3F4 ),
  EW_GLYPH( 0x00DD, 0, -16, 12, 16, 12, 0x0000B55B ),
  EW_GLYPH( 0x00DE, 1, -13, 10, 13, 12, 0x0000B719 ),
  EW_GLYPH( 0x00DF, 1, -13, 9, 13, 11, 0x0000B85A ),
  EW_GLYPH( 0x00E0, 1, -13, 8, 13, 10, 0x0000B9C2 ),
  EW_GLYPH( 0x00E1, 1, -13, 8, 13, 10, 0x0000BB34 ),
  EW_GLYPH( 0x00E2, 1, -13, 8, 13, 10, 0x0000BCA6 ),
  EW_GLYPH( 0x00E3, 1, -14, 8, 14, 10, 0x0000BE54 ),
  EW_GLYPH( 0x00E4, 1, -13, 8, 13, 10, 0x0000C002 ),
  EW_GLYPH( 0x00E5, 1, -14, 8, 14, 10, 0x0000C176 ),
  EW_GLYPH( 0x00E6, 1, -10, 15, 10, 16, 0x0000C302 ),
  EW_GLYPH( 0x00E7, 1, -10, 8, 14, 9, 0x0000C579 ),
  EW_GLYPH( 0x00E8, 1, -13, 8, 13, 10, 0x0000C6D5 ),
  EW_GLYPH( 0x00E9, 1, -13, 8, 13, 10, 0x0000C857 ),
  EW_GLYPH( 0x00EA, 1, -13, 8, 13, 10, 0x0000C9D9 ),
  EW_GLYPH( 0x00EB, 1, -13, 8, 13, 10, 0x0000CB97 ),
  EW_GLYPH( 0x00EC, 1, -13, 3, 13, 5, 0x0000CD1B ),
  EW_GLYPH( 0x00ED, 2, -13, 3, 13, 5, 0x0000CD68 ),
  EW_GLYPH( 0x00EE, -1, -13, 8, 13, 5, 0x0000CDB5 ),
  EW_GLYPH( 0x00EF, 0, -13, 6, 13, 5, 0x0000CE7F ),
  EW_GLYPH( 0x00F0, 1, -13, 8, 13, 10, 0x0000CEF5 ),
  EW_GLYPH( 0x00F1, 1, -14, 8, 14, 10, 0x0000D071 ),
  EW_GLYPH( 0x00F2, 1, -13, 8, 13, 10, 0x0000D191 ),
  EW_GLYPH( 0x00F3, 1, -13, 8, 13, 10, 0x0000D2ED ),
  EW_GLYPH( 0x00F4, 1, -13, 8, 13, 10, 0x0000D449 ),
  EW_GLYPH( 0x00F5, 1, -14, 8, 14, 10, 0x0000D5E1 ),
  EW_GLYPH( 0x00F6, 1, -13, 8, 13, 10, 0x0000D779 ),
  EW_GLYPH( 0x00F7, 0, -10, 10, 8, 10, 0x0000D8D7 ),
  EW_GLYPH( 0x00F8, 0, -11, 9, 11, 10, 0x0000D98F ),
  EW_GLYPH( 0x00F9, 1, -13, 8, 13, 10, 0x0000DAF3 ),
  EW_GLYPH( 0x00FA, 1, -13, 8, 13, 10, 0x0000DBC6 ),
  EW_GLYPH( 0x00FB, 1, -13, 8, 13, 10, 0x0000DC99 ),
  EW_GLYPH( 0x00FC, 1, -13, 8, 13, 10, 0x0000DDA8 ),
  EW_GLYPH( 0x00FD, -1, -13, 10, 17, 9, 0x0000DE7D ),
  EW_GLYPH( 0x00FE, 1, -13, 8, 17, 10, 0x0000E049 ),
  EW_GLYPH( 0x00FF, -1, -13, 10, 17, 9, 0x0000E19B ),

  EW_FONT_PIXEL( ApplicationArial21, 0x0000E369 )               /* ratio 70.64 % */
    0xEF7BDEF7, 0xF7BAF7BD, 0x05EF7BDE, 0x00000000, 0x00000000, 0x7B800000, 0x5EF7BDEF,
    0x700002F7, 0xEBDCBDEF, 0xE221105E, 0x1E33CF49, 0x2FF71123, 0x52CA1FEE, 0xBFB6FE0A,
    0xBCBBDEEB, 0x002F7977, 0xFBA9FDEE, 0xB0CBDCF3, 0x1BF87F0D, 0x8FBDC1B6, 0x7BBF2DDF,
    0xEB5F7001, 0xD7BDD6BE, 0xA1FDB7F5, 0x1700A594, 0xBF38EFD4, 0x8855F9E1, 0xEBEB57FA,
    0xC2C3D1BE, 0x0BB1FBBC, 0xBA7E357C, 0xB1EFDF88, 0xCFA83B7E, 0xB7A0D18A, 0x50626E75,
    0xD53F10DE, 0xA279C751, 0xCF14CF73, 0x9DFEF94E, 0x9EF0012F, 0xD1BBC8D3, 0xCD5BF7F3,
    0xF3C78BCF, 0x07CAC478, 0x1F8DE909, 0x98CC6424, 0xCF1E78F0, 0xFCF4178C, 0x31BF56FD,
    0xF79A73DF, 0xDF319E9C, 0x06ADFBF9, 0xCF1F78BF, 0x572781E3, 0x7EBC2424, 0x9E351212,
    0x0F1E78F4, 0xBF9E97AE, 0x39F46ADF, 0x4577805F, 0xECB03F3C, 0x252300AD, 0x2E3FD658,
    0x03B9FAD8, 0x980837D6, 0x4F9CF6BD, 0xEBCFCF9C, 0x120EBF1D, 0x957A63FE, 0x8E84E42F,
    0x8F57773A, 0x457F8D7F, 0xDAED6FD4, 0xCF9112F7, 0xD51F9893, 0x6875F13F, 0x63C5CE53,
    0x491E2DB3, 0xD923C040, 0x725C4F16, 0xF126D055, 0xEFF541BD, 0x1175F89B, 0x8D2C17EF,
    0x61ED9335, 0x0207A4D9, 0x6CB0F482, 0x56A23C6E, 0x5FBC5A9A, 0xE1C175F8, 0xD7BFD9D7,
    0xCACD66F0, 0xB80CEF98, 0x00000017, 0xE5EF7B80, 0xB8017BDE, 0xBDEE5EF7, 0x00000017,
    0xF79D97B8, 0x0BDEF7BD, 0xFF7905EE, 0x7ED83C78, 0x14A0E544, 0x8A2A3FAE, 0x8DBF858A,
    0x0F91878A, 0x814FC1CA, 0x2BF39DFA, 0xFA88ABF2, 0xE73C4F0D, 0x37B67E3C, 0x494C35E2,
    0x1210529A, 0x21040000, 0x1E9A490D, 0xFB6BC46F, 0xE279CE79, 0xD4455F91, 0xFD2EF897,
    0xD7727788, 0x0745BCC7, 0x00000000, 0xF9CEFC60, 0x88AFF195, 0xF31BD5FA, 0x1BCBA9DC,
    0x905CE35E, 0x7B20FA60, 0x3FCDE42C, 0xB07F8DC6, 0x7541DCF6, 0x7BAAE0FD, 0xC00FBDEF,
    0x64FFDFFC, 0xE5DF29BE, 0xCFAFBBE7, 0x01A63EFF, 0x5BDF05A6, 0xE0FAC82F, 0x82F3F7FB,
    0x601B9D65, 0x8BF52C99, 0x73A3B7BE, 0x13B3C457, 0x00F40BEC, 0x401C04C6, 0x355A8367,
    0xF81F1BC1, 0xF1E017F2, 0x00BDCBDD, 0x72F7BDEE, 0x7100002F, 0x4AF7BDEF, 0xBDEF34C0,
    0xF0E0BA57, 0xB7A4BBBB, 0xBE3C6F8C, 0xCF78DF7B, 0x100A987D, 0x328C06E7, 0xEFA3AA99,
    0x5FF3B37D, 0xFAC6CF11, 0xEBE4FFDF, 0x67AAEF94, 0xFBE7EFFC, 0xFEE7A5FB, 0xBE480F1F,
    0xF3847FF3, 0xCF0F7E44, 0xDE93AFB9, 0x1014D530, 0x7354CD7F, 0x78DF7BCC, 0xFD4467FD,
    0xDEF7BDC7, 0xEE202F7B, 0x1A7EF7BD, 0x742637E2, 0x051AC434, 0x89E07C6F, 0x809F2305,
    0x00DFC1B2, 0xE12904CB, 0x2BF39DF9, 0xF51157CF, 0xEF77DA7B, 0xC78787A7, 0xFA8F0F28,
    0xDFDEEFE6, 0x188322FC, 0xFB7BDEBA, 0xB2C99779, 0xE9931E00, 0x7DEF78E9, 0x22BFC7A3,
    0xDF8C3FEA, 0xFF1A5F39, 0x7676788A, 0xFC6FBDF4, 0x01E98B1E, 0x8AF263E4, 0xE1F7BDE3,
    0x08EA32F9, 0x48FCFFCF, 0xFBFF3CB0, 0xF9FFE3C8, 0xAD66BFEE, 0x7BAFD94E, 0x7B8017B9,
    0x017B97B9, 0xF79D97B8, 0xCC0FD405, 0x3E88AFFF, 0xEF8FFEAF, 0x2BFFB5CE, 0x3BCEB3F7,
    0xDE759FB0, 0xB9DDF181, 0xD1257FF6, 0x307FD5E7, 0xF7BABFFF, 0xBDEF7BDE, 0xF7BDEE00,
    0x802F7BDE, 0xF7BDEF7B, 0x57E00BDE, 0x27FDFA80, 0x74F7B7F8, 0xD7BFEB90, 0x78C0DFBC,
    0xC6367ACF, 0x73B3D67B, 0xF79AF7FD, 0x9EF6FF1B, 0x9FF7EA0E, 0xF39DF8C0, 0x115FF21B,
    0xCF17EBB5, 0x7E5E8F39, 0xDCE33F11, 0x6E301860, 0x7C7FD634, 0x85BCECC5, 0x06901B9F,
    0x17B817B8, 0xFDF3C000, 0x26FFFDEF, 0x93DFFEA0, 0x82FFBD64, 0xFEF1CBF9, 0x23BFFDEF,
    0xF5A30F7F, 0x78F4F71E, 0xA370BF2D, 0xD632FAD7, 0x6F13F55F, 0x8DF2B18D, 0x7B61AEEF,
    0x8BE7DFD5, 0x865168F9, 0x07E528F1, 0x8690C40F, 0x3C79B0C1, 0xA253F010, 0x6D1E94DD,
    0x673B592E, 0xEEB1C795, 0xCE5F9C2F, 0xCF1BDFD7, 0x446FBA8A, 0xE2AA5EFD, 0xB97E7D9F,
    0xDF55F9CE, 0x7EC637CF, 0x7FD6312B, 0x33FE27D5, 0xEF7FEFE6, 0x0FD63DDD, 0x92BBFEF1,
    0xC40DDEA8, 0x2A0027B9, 0x8F5C0144, 0x8BF1500B, 0x51513C02, 0x75D700F1, 0x54A2A05D,
    0xCE227814, 0x5C0F113D, 0x738A85C0, 0xA8513DEF, 0x145440A8, 0x7F1C077F, 0x5CA81656,
    0xDEF7BDEE, 0xD4402BF3, 0x7BDEE1EF, 0x96206B4F, 0xDC52C401, 0xE7E9EF7B, 0xEF7B8003,
    0x02F3EF3D, 0x00402D31, 0xBDC3CFE4, 0x689FFEF7, 0xC0FF9F20, 0x26FCF7DA, 0xA887BFC6,
    0x67C9C7F7, 0xF545FBDF, 0xCF06FACA, 0xF05DB3CF, 0x80A3FFEC, 0x00080021, 0xBFA8051E,
    0x999CEA0B, 0x2F9E0DF5, 0xBECF938E, 0xC6598BF7, 0xC6227BFF, 0xDEF7BAFB, 0x026FFF7B,
    0x7B85DCE4, 0xF8CFFDEF, 0x89F7C802, 0x01FAF009, 0x0040090C, 0x03C30010, 0x78C0DAF0,
    0x7BDC989F, 0x05F19EEF, 0xF72EE630, 0xBDEF7BDE, 0xBDC002F7, 0x2F7BDEF7, 0xEF700000,
    0x005EF7BD, 0xF7BDEF70, 0x0000005E, 0x7BDEF700, 0xDC00BDEF, 0xF7BDEF7B, 0x7BDC005E,
    0x0017BDEF, 0xF7BDEE00, 0xF7B8005E, 0x00017BDE, 0x00000000, 0xE7B9DFCC, 0x2B7EC42B,
    0xFE6BF3C4, 0x3DEEFC63, 0x8CF1AC6F, 0x9FCC45DC, 0xF9E06AEF, 0x2900A5BF, 0xF7BDEE04,
    0xA3C000DE, 0x1CBDEF70, 0xE319E00D, 0x7E7884FF, 0xE77E57F8, 0x27F2AF9E, 0xA293DF7E,
    0x0BDD7FDE, 0x000017B8, 0xB8000000, 0x2F7BDEF7, 0x7BDEE000, 0x0000BDEF, 0x00000000,
    0x0005EE00, 0x02F70000, 0x00000000, 0x03EC0000, 0xF92D3111, 0x56FB6F79, 0x2F79ECA7,
    0x813BDDF8, 0x426FC55F, 0x417F8AEC, 0x01EE47FC, 0x27631FF1, 0x802FC3D8, 0xD600EF0C,
    0x76807119, 0x7E403F22, 0xD6A8099E, 0x1C4F5809, 0xF78C6F80, 0x0000005E, 0x00000000,
    0x80000000, 0x17BDEF7B, 0x04ADFFE0, 0x3E7FBEB9, 0x7EBF03FD, 0x4AC0B192, 0xF11818A8,
    0x3F0FCFC0, 0x783C461B, 0xCA6540A2, 0x3C7AE02C, 0x6DB65036, 0x35955101, 0x1FB5B002,
    0xC0147940, 0xDEE03148, 0x274BDC09, 0xAC017880, 0xDE3D005A, 0xC00EB804, 0x7A01A398,
    0x5C7001CC, 0x03477C80, 0xDE005AAC, 0xE60D9000, 0x20BDDCEF, 0xD1856F7E, 0xFAABE4FF,
    0x791BFBDD, 0xA2BF553C, 0xB8F318F6, 0x78FFEBC0, 0x0084F280, 0xF1000442, 0x7F3CA028,
    0x1CFFB40D, 0xC7B51763, 0xBF18CE98, 0x0F237F7B, 0x8C447BB9, 0xEF7BA7FE, 0x06FCF7BD,
    0xB83FEA20, 0x44F3DEF7, 0x0079F103, 0xC53F9001, 0x9FFEF7BD, 0xFE7C8178, 0xFDEF7B83,
    0x0000037F, 0xD6000000, 0xC82F773E, 0xFA308F7F, 0xBF59383F, 0x8F237F7B, 0xD457EA39,
    0x2EFEB91E, 0x0A3DFAF0, 0x21001928, 0x147C8002, 0xC6BF9E50, 0x6F8ECBEF, 0xE7A5D8E6,
    0x39BA747F, 0x910F777E, 0xA887BFE4, 0xD61F7EB7, 0xBF37E7BE, 0xDEF7B9FF, 0x3DF9EF7B,
    0x07BEA200, 0xCF7BDEF7, 0x1B4402F2, 0xEE06D900, 0x97FEF7BD, 0x17678806, 0xFCAFBDEE,
    0xE39CC00D, 0xA31DE00F, 0x00735C01, 0x4017158C, 0x7EB968E7, 0xC615ECE7, 0xBD188AEE,
    0xBFF3C6E3, 0xF0F65777, 0xCAB5E325, 0x9BCF7903, 0x899DFFDF, 0xFF7CCBDC, 0xFFE887FF,
    0x9BF33E6F, 0xF9F7EF50, 0xC6109B9D, 0x3D7C8A72, 0xEF77E39D, 0xBFC7467F, 0xC7B9C847,
    0x7BDEF7BD, 0xDC00BDEF, 0xDEF72F7B, 0x0000000B, 0x00000000, 0x00000000, 0xEE02F700,
    0x00000005, 0x00000000, 0x40210000, 0xE4A05488, 0x9E21EFCF, 0xF8AADF9F, 0xD45F3DEE,
    0x510AEBF2, 0x3FDC4FEF, 0xCA8CDF60, 0xF48C7201, 0x1F8F03F7, 0x1E7E03CB, 0x8C6072A2,
    0xFC3F1C4A, 0xC1E2A1FC, 0x393C4163, 0xC700AC8C, 0x9E01CFCF, 0x80513C78, 0x801595CA,
    0x9E0175EB, 0x7FE07888, 0x3BDEE303, 0x14BFF790, 0xB2C1E11E, 0xE9AE3FB6, 0x063F6FE2,
    0xE5079F1E, 0x6460F119, 0xF0C640E6, 0xA59650C4, 0x1E18788C, 0x650DB6C3, 0x3DFDB7F0,
    0x7F7F7F1E, 0x8C3152CA, 0x32229658, 0x1C9E2447, 0x55E58199, 0xB60B5E18, 0x8F7F1FC7,
    0x58583C3F, 0x87F77C28, 0x517E3F7D, 0x23F11CC3, 0x0DED1D5E, 0x631D51AC, 0xC0BA6B81,
    0x88033C78, 0x54740152, 0x31D31834, 0x33CF5C07, 0x3F11AC5D, 0x5789631D, 0xFC6F6887,
    0x11CC4C62, 0x80FEEFBF, 0x597EFDDF, 0x2FE56613, 0x7B441D5E, 0xF1F13D43, 0x65F853C5,
    0x83F9518D, 0x37AFBD78, 0xF3CF3D40, 0x0FC7E014, 0x00000820, 0x00000000, 0xF7BDEF70,
    0xFC01BBDE, 0x3DEF7BDC, 0x9CF81391, 0x00EF5D00, 0xF8816AB5, 0x273E03F2, 0x403BD740,
    0xBE205AAD, 0xF23780FC, 0xBDEF7BDC, 0x7BDEE005, 0x00017B81, 0x00000000, 0x37FE17B8,
    0xB3F078F1, 0xA502B231, 0x515177F0, 0xFDB0A2B0, 0x93C144F1, 0xFCA14703, 0xEE17BDEE,
    0x00000005, 0x5EE00000, 0x7C077180, 0x567AC43E, 0xBE4CFD30, 0x93CF9E27, 0x8E7CFF7F,
    0xF7BDCE52, 0xBDEF7BDE, 0xBD1DF400, 0xF73BF3DA, 0x42AF9EDF, 0xDDF5F7AE, 0xE77DADBB,
    0xB7E22BEC, 0xD5F835DF, 0xB29FDF58, 0x3C8F01FB, 0x0FFDDF2C, 0x3EA227DE, 0x000005EE,
    0x0DFDDF88, 0x89FEA57C, 0x3A3E2A73, 0x860C3DA2, 0x0C306004, 0x7115A23A, 0xAFCBE54E,
    0x77E30DD4, 0x12FF934F, 0xE78BF3EB, 0xAB4A3CFE, 0x0004A57B, 0xA9F94129, 0xDE62FD7B,
    0x25FF219F, 0x17B8039E, 0xDDF8C000, 0x52FF905F, 0x39D45F1F, 0x0CD11D28, 0x30C00183,
    0x688E9418, 0x8273ACDE, 0x887EA5B8, 0xC42F9CEF, 0xBF9E227E, 0x9F739F37, 0xFC2FCAB1,
    0xEF7386FC, 0xE7488091, 0xE3EF7BDE, 0xBDFDD617, 0xD1DB9CF9, 0xFA889F71, 0x673BF186,
    0xD211153B, 0xB9CBFFB9, 0x00BDCB80, 0x00000000, 0xFFF77E30, 0x92FF1BDC, 0x39D46F1F,
    0x6688E945, 0x86000C18, 0x4474A0C1, 0x539D46F3, 0x8BE4BFC4, 0x25FFBBF1, 0xD6D12DCF,
    0xC667BBF2, 0xCF10F6FB, 0x000BDC7F, 0xA73BE000, 0x56227BF1, 0x87977FE3, 0x00192D4E,
    0x00000000, 0xBDEE5EE0, 0xEE000017, 0x5EE5EE05, 0x00000000, 0xEFFA2900, 0x17BDE349,
    0xFD000000, 0x5AADF05F, 0xF17E9EF8, 0x4782EF3D, 0x61378E80, 0x5660BC75, 0x01D1D04D,
    0x5EEFC663, 0x7B800000, 0xF93F77E3, 0x57E4BFBB, 0x354B759E, 0xFBADE7EE, 0xDA23DA29,
    0x00084823, 0x00000000, 0x7B800000, 0x179CEFC7, 0x2F988AFF, 0x45B6FFCF, 0x001825A7,
    0x00000000, 0x7CE77E40, 0xF113EE29, 0xCEB378DC, 0x474B7CA9, 0x0C1867B4, 0x860C3009,
    0x9ED11D2C, 0xCA9CEB37, 0xF113EE37, 0x7E37B8DC, 0xCAFC0F77, 0x9CF327F8, 0xD11B8F8A,
    0x0030C18A, 0x8E830C18, 0xA73AC568, 0xA88CE5F2, 0xBF3EE41B, 0x60000004, 0x7B8BFBEC,
    0x8FD43FF3, 0x4139D45F, 0x0D2688E9, 0x60C30006, 0x79A23A50, 0xDC41CEB3, 0x7F22F18A,
    0x00002767, 0xF38EF700, 0xFBC923A3, 0x000483F2, 0xDFFE8000, 0x94AEF2FF, 0xFEFFCBDD,
    0x753F433C, 0xF7CF9DFF, 0x1EFF9E1F, 0xFF187FF9, 0x56FFDF8E, 0xB777E514, 0xAB94CEF9,
    0x80561F41, 0x05CB85CB, 0x78E10000, 0x2F70BDC3, 0x00000000, 0x29A41800, 0xFFDEF29B,
    0xAB115DE0, 0xBEC1BBC9, 0x30319F23, 0x1F8E18C6, 0x1F2A3E7E, 0x65F1313C, 0xE3309CA9,
    0xAA20FBF8, 0x9C127AC6, 0x4A8071D8, 0x0F9F00A3, 0xEEA2FB9E, 0x9E7DDF83, 0x78DBF858,
    0x583151E2, 0x55C51516, 0xE194662A, 0x3FCFC4F2, 0x1476FE3A, 0xC4F5919E, 0x0279E2B3,
    0xFF7F97C7, 0x150FE378, 0x82CB2953, 0x0E532278, 0xA0F1C023, 0x62DDF0FC, 0xB9A3ADDC,
    0x99E39CAE, 0xBB3A0E63, 0xD197E1A3, 0x397E0001, 0x8DFB3A1A, 0x9E78E726, 0xD3475331,
    0xC86EF2D1, 0x0F19F3BB, 0xF8BD794A, 0x8A3519FB, 0xF5D70627, 0x1A8D42C4, 0xB7D786DB,
    0x19C9E0A2, 0x1B1F804F, 0x2A01E198, 0x5EB88246, 0x078D4F70, 0xEE1FD464, 0x7BDEF7BD,
    0xF7BDEE01, 0x35D88196, 0xD47FC4FE, 0xF3C7B90E, 0x3E7CDC63, 0x107E73FC, 0x5EF7BDE6,
    0x2E77F200, 0xEFC302A7, 0x40840142, 0x3F9AEE2B, 0x4D9A9C10, 0x012907B4, 0xFCA14200,
    0xDC27BF2E, 0x0000000B, 0x112FCF70, 0x07B772F5, 0x02100043, 0xEB9BF1A5, 0x759BE012,
    0x04841D28, 0x7F704A00, 0xE1F3C41E, 0xCF05FF3B, 0x2EF644F7, 0xBBBEAFCF, 0x57EEFC6B,
    0xBDF8C7BF, 0x97BBF319, 0x0005EF7B, 0xE01EB000, 0xE41C8137, 0xF7126E77, 0x9BC76309,
    0x2CC6AA75, 0x63DBCF1D, 0x2AE4F518, 0x76A18D8C, 0xBCFFFDC5, 0x5567B64F, 0xFAF999C6,
    0x106EA23D, 0x3C4BF3BF, 0xC403C605, 0x39DF8C05, 0x57FA87BF, 0x8E8F7D44, 0x0DABEF79,
    0x05FEF32F, 0x7DC07940, 0xC002F77C, 0xC85EE2BD, 0x7E38C0F8, 0x8CE35A7B, 0xFDDBDE30,
    0x9EFEF77D, 0xFAECF3C8, 0x59FB57EE, 0xBF3C7BF5, 0xB6FA195A, 0x4CB2D348, 0x229965A6,
    0xAB116DF4, 0x57E78F7E, 0x8C0777EB, 0xAD0D6BFB, 0x5460D547, 0x9AB9AD0D, 0xD46A3551,
    0xDCD6EB40, 0xEFB0D5BB, 0x7BDEE005, 0x7BDEF7B9, 0x7BDEE5EF, 0x5EF7B801, 0x8017BDEE,
    0x5EE0017B, 0xC40017B8, 0x5F179CEF, 0xFCA6CC45, 0x8C4787B7, 0x4E37E7FB, 0xF6B5EC62,
    0xE5F7E4E0, 0x7F861A7F, 0x388ED3F6, 0xFE5F9BF1, 0xE7B3C784, 0xBC8FCCEF, 0x7C81BE73,
    0x286E75EB, 0x863D794B, 0x7CFDD637, 0x2F6437C6, 0x802F72F7, 0xFFEFFEF1, 0xBDEDE01B,
    0xE2FDBEEF, 0xC427BFDD, 0xE1AFDBF3, 0x6F3DF731, 0x99FBC63C, 0x7CF7BDDF, 0xBF0D77BE,
    0x19FAC43B, 0xC801C92B, 0x6B901324, 0xD629BDF8, 0xCFEF58CF, 0xCF7B9FFC, 0x788EF7E7,
    0x1BCF7DCC, 0xFEEF0C4F, 0xDF9E213D, 0xDDF6F17E, 0xC97EDF77, 0x71BFB9DF, 0xB3AFFFEA,
    0xF6B298EF, 0x37B1BE6D, 0x79BC3E43, 0xAFB9E277, 0x37F2BEE7, 0xD78DFCDE, 0x3BC71C71,
    0x5F8EF97E, 0x5F8EF002, 0x1C97E3BE, 0xDFC871C7, 0xDE37F378, 0xF7BDEF7B, 0xDEE00BDE,
    0x00BDEF7B, 0xBDEF7000, 0xFFBC6017, 0x7806FFFB, 0xFEFFFFDF, 0xBDE2FBCF, 0xFBBEA15F,
    0x7BDD391A, 0xC7331EEF, 0xEDEF707B, 0x00ABBCE3, 0xBDC0CAD4, 0x19911EF7, 0x887ABBB8,
    0xBBE3055C, 0x407BD6A1, 0x4779CFF4, 0x7BEA2E3E, 0x0F777872, 0xDE2FDE8C, 0xFFBFFBDF,
    0xEF72F7F7, 0x7BDEF7BD, 0xFE4005EF, 0x7DDF2FEE, 0xAACB5BF7, 0xFBBD565A, 0x05EE17EE,
    0xE0000000, 0xF7B97BDE, 0xBDEE005E, 0x05EF7B97, 0xEF7B8000, 0x017BDEE5, 0xEBFEFB18,
    0xFB7E7F8E, 0xFB4F830E, 0x4F99EF9E, 0x7BDE7E3F, 0xA7FFBEC7, 0xBF7F3FC7, 0xBFFE3D3B,
    0xF5FFFCFA, 0x1DC437DF, 0xBB71DF3B, 0xF70BDF57, 0x00000002, 0x74249000, 0x9CEB0BC4,
    0x85E66F05, 0xBDC7FFFA, 0xEA000000, 0xF7BDEE77, 0x0157E7DE, 0x772F70BC, 0x1F004800,
    0xA002B580, 0x0000000F, 0x00000000, 0xE0000000, 0xF1AB625E, 0xBFEEBB3D, 0x3FE3BEC5,
    0xE3F3C5EC, 0xBFF98003, 0xDFBD69FF, 0x99F5DE7D, 0x210A5F5E, 0x79F90853, 0xCFD5BEBD,
    0xDEF5DE7D, 0xDE1F7BC7, 0xFC77CBF1, 0x0E38E392, 0xFE6F1BF9, 0xFE400BC6, 0xF1BF9BC6,
    0x78E38E3A, 0xF1DF2FC7, 0x905F624B, 0x03FE3367, 0x017B0E38, 0xF9E4E8EF, 0x89CE6781,
    0xBC6FE40F, 0x80171C00, 0xB9C43D1E, 0x33D6B7B8, 0x2F8805F9, 0x3E04E63F, 0xBA0BE887,
    0x01CDF07A, 0x5A899EB5, 0xFE5F1B97, 0x15CBDEE0, 0x2DDF02FB, 0xF9803FE3, 0x3017B2AC,
    0x0FCF347A, 0xE03E0E38, 0x98025FCB, 0x64007ACF, 0xFEFB1E8F, 0x471D7B8B, 0xF07E7FDF,
    0x8DFA5F8E, 0xF9CE6061, 0xF647E7C0, 0x7CF7E178, 0x9AC0E393, 0xFC7787FF, 0xF7DCBE12,
    0x0FFF7D8E, 0xE3D2EEB0, 0xDE303F9F, 0x7A777E5A, 0xF0F8CE20, 0xBF07D5FF, 0x5FFB037C,
    0x1567AC7F, 0x78C109F6, 0x9D8EE1AB, 0xCE27C72F, 0x97FDF635, 0x05F0BF2F, 0xCCAB3E60,
    0x5A3D1809, 0x0E3803F6, 0x9BC07C6F, 0xB9FCA4BF, 0xDC1EB9CC, 0x17B8B97B, 0xC05EE000,
    0x600840BD, 0x1768C079, 0x741744E2, 0x3F2C0B3E, 0x7FFBC800, 0xD55F297C, 0xAFFBFF51,
    0x909FB1EC, 0x3BE80773, 0x00D5E800, 0x38801FE8, 0x854004F7, 0x71EB8028, 0x517E2A01,
    0x2A2A2780, 0xAEBAE01E, 0x8A94540B, 0xB9C44F02, 0x0B81E227, 0xEE7150B8, 0x150A27BD,
    0xE28A8815, 0xCFE380EF, 0x0B9502CA, 0xE801B718, 0x1AFC00D5, 0x04F73880, 0x80288540,
    0x2A0171EB, 0x2780517E, 0xE01E2A2A, 0x540BAEBA, 0x4F028A94, 0xE227B9C4, 0x50B80B81,
    0x27BDEE71, 0x8815150A, 0x80EFE28A, 0x02CACFE3, 0xEF780B95, 0xABF1017D, 0x017EAFDF,
    0xFAAFF7E2, 0x738802FF, 0x8854004F, 0x171EB802, 0x0517E2A0, 0xE2A2A278, 0xBAEBAE01,
    0x28A94540, 0x7B9C44F0, 0x80B81E22, 0xDEE7150B, 0x5150A27B, 0xFE28A881, 0xACFE380E,
    0xC0B9502C, 0xC02E3A73, 0x800CEB1B, 0x02F19FF1, 0x03CF7CDC, 0x009EE710, 0x700510A8,
    0xC5402E3D, 0x44F00A2F, 0x5C03C545, 0x8A8175D7, 0x89E05152, 0x3C44F738, 0x2A170170,
    0x44F7BDCE, 0x5102A2A1, 0x701DFC51, 0xA05959FC, 0xB97B8172, 0xEE000017, 0x9C405EE5,
    0x42A0027B, 0xB8F5C014, 0x28BF1500, 0x151513C0, 0xD75D700F, 0x454A2A05, 0xDCE22781,
    0x05C0F113, 0xF738A85C, 0x8A8513DE, 0xF145440A, 0x67F1C077, 0x05CA8165, 0x7800B3AC,
    0xFF080377, 0x510A8008, 0x02E3D700, 0x00A2FC54, 0x3C54544F, 0x175D75C0, 0x051528A8,
    0x4F73889E, 0x701703C4, 0x7BDCE2A1, 0x2A2A144F, 0xDFC51510, 0x959FC701, 0xC0172A05,
    0x7BDEF7BE, 0x9817BDEF, 0x17E00003, 0xBDEF72E7, 0x339582F7, 0x1A378000, 0xC178E800,
    0x8BDEF7BD, 0x8000B998, 0xEF701F8E, 0xCB92F7BD, 0x00BDEF7B, 0x900002FC, 0xEF7BDC73,
    0x035A00BD, 0xBDEF7BDC, 0x000519E3, 0x7E7BED60, 0x43DFE313, 0xE4E3FBD4, 0xA2FDEFB3,
    0x837D657A, 0x2ED9E7E7, 0x51FFF678, 0x040010C0, 0xD4028F00, 0xCE7505DF, 0xCF06FACC,
    0x67C9C717, 0x2CC5FBDF, 0x113DFFE3, 0xF9E17DE3, 0xA813D9E5, 0xBB3C01F1, 0x01BFEE00,
    0x57A0077D, 0xEE0FF403, 0x7BDEF7BD, 0x7B8005EF, 0x5EF7BDEF, 0xDEE00000, 0x00BDEF7B,
    0xEF7BDEE0, 0x000000BD, 0xF7BDEE00, 0x80017BDE, 0xABD01B71, 0x7B86BF01, 0xDEF7BDEF,
    0xDEE0017B, 0x17BDEF7B, 0xF7B80000, 0x002F7BDE, 0x7BDEF7B8, 0x0000002F, 0xBDEF7B80,
    0xF0005EF7, 0xFC42FBDE, 0x5FABF7EA, 0xD57FBF10, 0xBDEE17FF, 0xEF7BDEF7, 0xEF7B8005,
    0x005EF7BD, 0x7BDEE000, 0xE000BDEF, 0xBDEF7BDE, 0x00000000, 0xDEF7BDEE, 0x5EE0017B,
    0xEE0005EE, 0xBDEE5EE5, 0xEF7BDEF7, 0xEF7B8005, 0x005EF7BD, 0x7BDEE000, 0xE000BDEF,
    0xBDEF7BDE, 0x00000000, 0xDEF7BDEE, 0x3BE8017B, 0xB9FEB57A, 0x00000017, 0x5EEDC600,
    0x02F76BFD, 0x00000000, 0xE25F7BDE, 0xFD5FBF57, 0xAAFF7E22, 0x2F702FFF, 0x00000000,
    0x00000000, 0x00000000, 0xE05EE5EE, 0x5EE5EE5E, 0x00000000, 0x00000000, 0xEF7BDC00,
    0x0137FFBD, 0xF705DCE4, 0xF19FFBDE, 0x27DF2005, 0xEFD78026, 0x0CBDEF72, 0xDCB88009,
    0x80042F7B, 0xDAF001E1, 0x313EF180, 0x7BBDEF71, 0x9C8017C6, 0x1D39E0BB, 0x9D637817,
    0x8CFF8C01, 0x9EF9B817, 0xE04EF707, 0xC4013A5E, 0x02D5600B, 0xC026F1E8, 0x1CC60075,
    0x0E63D00D, 0xE402E380, 0xD5601A3B, 0x8006F002, 0x00EFA06C, 0xE801ABD0, 0x9DFCC01F,
    0xEFC417BB, 0x9FFA30AD, 0x7BBF557C, 0xA78F237F, 0x1ED457EA, 0x78171E63, 0x500F1FFD,
    0x8840109E, 0x051E2000, 0x81AFE794, 0xEC639FF6, 0xD318F6A2, 0xEF77E319, 0x7721E46F,
    0xFFD1888F, 0x006DC604, 0xAFC01ABD, 0xDCEFE601, 0x6F7E20BD, 0xE4FFD185, 0xFBDDFAAB,
    0x553C791B, 0x18F6A2BF, 0xEBC0B8F3, 0xF28078FF, 0x04420084, 0xA028F100, 0xB40D7F3C,
    0x17631CFF, 0xCE98C7B5, 0x7F7BBF18, 0x7BB90F23, 0x27FE8C44, 0x817DEF78, 0x57EFD5F8,
    0xFDF880BF, 0x00BFFEAB, 0x5EEE77F3, 0xC2B7BF10, 0x55F27FE8, 0x8DFDEEFD, 0x5FAA9E3C,
    0x798C7B51, 0x7FF5E05C, 0x4279403C, 0x80022100, 0x9E501478, 0x7FDA06BF, 0xDA8BB18E,
    0x8C674C63, 0x91BFBDDF, 0x223DDC87, 0x3C13FF46, 0xDE02E3A7, 0xC6006758, 0xB80BC67F,
    0x98079EF9, 0x82F773BF, 0x4615BDF8, 0xEAAF93FF, 0xE46FEF77, 0x8AFD54F1, 0xE3CC63DA,
    0xE3FFAF02, 0x0213CA01, 0xC4001108, 0xFCF280A3, 0x73FED035, 0x1ED45D8C, 0xFC633A63,
    0x3C8DFDEE, 0x3111EEE4, 0x2F709FFA, 0x700002F7, 0xF302F72F, 0x105EEE77, 0xE8C2B7BF,
    0xFD55F27F, 0x3C8DFDEE, 0x515FAA9E, 0x5C798C7B, 0x3C7FF5E0, 0x00427940, 0x78800221,
    0xBF9E5014, 0x8E7FDA06, 0x63DA8BB1, 0xDF8C674C, 0x8791BFBD, 0x46223DDC, 0xBA3753FF,
    0xAF4BD6AD, 0x3D6AD7B5, 0x8C7A68C6, 0xBDAD7AD1, 0x17AD5B56, 0xEFB58000, 0x26DF1DDD,
    0xEB183DFF, 0xD64E3F3C, 0xC43DDEEF, 0x15F8C734, 0x6BFA6232, 0x7E7F3FE4, 0x1E71C2A6,
    0x5F97E129, 0x5D5D0212, 0x9AE6A908, 0x79F8F293, 0xBFB45EBB, 0xDA971915, 0x7E48A723,
    0x1E46FEF7, 0xC1CEF97E, 0xBFD07B58, 0x777BEEF9, 0x00EFA007, 0xFA00D5E8, 0xEE02F707,
    0x00000005, 0x00000000, 0x40210000, 0xE4A05488, 0x9E21EFCF, 0xF8AADF9F, 0xD45F3DEE,
    0x510AEBF2, 0xDB8C0FEF, 0xE01ABD00, 0xC05EE0D7, 0x000000BD, 0x00000000, 0x04200000,
    0x940A9108, 0xC43DF9FC, 0x155BF3F3, 0x8BE7BDDF, 0x215D7E5A, 0xF781FDEA, 0xAFC417DE,
    0x05FABF7E, 0xFAAFF7E2, 0x80BDC2FF, 0x0000017B, 0x00000000, 0x08400000, 0x28152210,
    0x887BF3F9, 0x2AB7E7E7, 0x17CF7BBE, 0x42BAFCB5, 0x7B83FBD4, 0xE00017B9, 0x5EE5EE5E,
    0x0000BDC0, 0x00000000, 0x20000000, 0x0A910804, 0x3DF9FC94, 0x5BF3F3C4, 0xE7BDDF15,
    0x5D7E5A8B, 0x01FDEA21, 0x5E8036E3, 0xE0D7E00D, 0x77E03FBB, 0x84D65FBF, 0x578BF959,
    0x50DED107, 0xF17C7C4F, 0x63597E14, 0x5E20FE54, 0x500DEBEF, 0x053CF3CF, 0x0803F1F8,
    0x00000002, 0xEE000000, 0x7B800005, 0x00DF3DEF, 0xEE4FF3C4, 0x3454F7BD, 0xA402AF10,
    0xC604A400, 0xDEF7B8AB, 0xCE40D15D, 0xEF7BDC1D, 0x58004DFF, 0x6627BBFF, 0x9F36F1A7,
    0x524CFDDF, 0xC8106A79, 0x39BC07E7, 0x33002781, 0xE7F413FF, 0x3FCF105D, 0x2AFEFC5F,
    0xF3FB8F61, 0x77C8CD62, 0xBD00EFA1, 0x9E1FE81A, 0xF6FFB9DF, 0xBD72157C, 0x6DDEEFAF,
    0x5F673BED, 0xAEFDBF11, 0xFAC6AFC1, 0x0FDD94FE, 0xF961E478, 0x3EF07FEE, 0x7181F511,
    0xF06AF41B, 0xE77E786B, 0x55F3DBFE, 0xBEBEF5C8, 0xEFB5B77B, 0xFC457D9C, 0xBF06BBF6,
    0x53FBEB1A, 0x91E03F76, 0xFFBBE587, 0xD444FBC1, 0x2FBDEF07, 0xAFDFABF1, 0x7FBF117E,
    0x9E17FFD5, 0xF6FFB9DF, 0xBD72157C, 0x6DDEEFAF, 0x5F673BED, 0xAEFDBF11, 0xFAC6AFC1,
    0x0FDD94FE, 0xF961E478, 0x3EF07FEE, 0x73C1F511, 0x58DE2E3A, 0x67FC6067, 0x9EF9B8BC,
    0xEE77E787, 0x855F3DBF, 0xBBEBEF5C, 0xCEFB5B77, 0x6FC457D9, 0xABF06BBF, 0x653FBEB1,
    0x791E03F7, 0x1FFBBE58, 0x7D444FBC, 0x017B97B8, 0x797B97B8, 0xDBFEE77E, 0xF5C855F3,
    0xB77BBEBE, 0x7D9CEFB5, 0xBBF6FC45, 0xEB1ABF06, 0x3F7653FB, 0xE58791E0, 0xFBC1FFBB,
    0xD607D444, 0x0BF7A059, 0x9F417ED6, 0xEE77E785, 0x855F3DBF, 0xBBEBEF5C, 0xCEFB5B77,
    0x6FC457D9, 0xABF06BBF, 0x653FBEB1, 0x791E03F7, 0x1FFBBE58, 0x7D444FBC, 0xFFB9DFA8,
    0xE7BED637, 0xC855F9E5, 0xB9887B79, 0xB77BDEBD, 0xCF3DFFA8, 0xF33CFB98, 0x7E297CBD,
    0x77EDF1FE, 0xF7BDCE0E, 0xD6357E78, 0xB28807F7, 0x7BDC19FB, 0x1E5FFDEF, 0xE8A5F1F9,
    0xEEFA6FFF, 0xFE7AC6BF, 0x5EE8ACF7, 0x77EEF461, 0x8C3FE788, 0xFE4D3DDF, 0x2FCFAC4B,
    0x28F3FB9E, 0x1295EEAD, 0xE504A400, 0x8BF5EEA7, 0xFC867F79, 0xE30E7897, 0xD44BE71B,
    0x0BB3C0F8, 0xBE837FDC, 0xA06AF403, 0x39DF107F, 0x44FD885F, 0x3E6F7F3C, 0x95633EE7,
    0x0DF9F85F, 0x0123DEE7, 0xF7BDCE91, 0xAC2FC7DE, 0x39F37BFB, 0x3EE3A3B7, 0x8C0DF511,
    0x8357A0DB, 0xE77C435F, 0x13F6217C, 0xF9BDFCF1, 0x558CFB9C, 0x37E7E17E, 0x048F7B9C,
    0xDEF73A44, 0xB0BF1F7B, 0xE7CDEFEE, 0xFB8E8EDC, 0x7837D444, 0x5F897DEF, 0x8BF57EFD,
    0xFEABFDF8, 0x39DF10BF, 0x44FD885F, 0x3E6F7F3C, 0x95633EE7, 0x0DF9F85F, 0x0123DEE7,
    0xF7BDCE91, 0xAC2FC7DE, 0x39F37BFB, 0x3EE3A3B7, 0xF70DF511, 0xF7002F72, 0x9DF12F72,
    0x4FD885F3, 0xE6F7F3C4, 0x5633EE73, 0xDF9F85F9, 0x123DEE70, 0x7BDCE910, 0xC2FC7DEF,
    0x9F37BFBA, 0xEE3A3B73, 0xE8DF5113, 0xFEB57A3B, 0x000017B9, 0xAF76E300, 0x017BB5FE,
    0xF7800000, 0xD5F897DE, 0x88BF57EF, 0xFFEABFDF, 0x000BDC0B, 0x00000000, 0x80000000,
    0xB817B97B, 0x17B97B97, 0x00000000, 0x71800000, 0x9F206FE6, 0xBFF40F77, 0xFDE78C3F,
    0x87FE578F, 0xA2FE6627, 0xE95F29CE, 0x30695688, 0x60D22024, 0xB44747C8, 0xA73ACDE7,
    0x44FB8DF2, 0x4E78373C, 0xEB1BC5C7, 0x8CFF8C0C, 0xF3DF3717, 0xCEFC77B8, 0x88AFF179,
    0x6FFCF2F9, 0x825A745B, 0x00000001, 0x3BE80000, 0xFA06AF40, 0xF39DF907, 0xC44FB8A5,
    0x3ACDE373, 0x1D2DF2A7, 0x30619ED1, 0x1830C024, 0x7B4474B2, 0x2A73ACDE, 0xC44FB8DF,
    0x36E30373, 0xD7E0D5E8, 0x5F39DF90, 0x3C44FB8A, 0x73ACDE37, 0x11D2DF2A, 0x430619ED,
    0x21830C02, 0xE7B4474B, 0xF2A73ACD, 0x3C44FB8D, 0x7DEF7837, 0x7EFD5F89, 0xFDF88BF5,
    0x90BFFEAB, 0x8A5F39DF, 0x373C44FB, 0x2A73ACDE, 0xED11D2DF, 0x02430619, 0x4B21830C,
    0xCDE7B447, 0x8DF2A73A, 0x373C44FB, 0xC5C74E78, 0x8C0CEB1B, 0x37178CFF, 0xDF90F3DF,
    0xFB8A5F39, 0xDE373C44, 0xDF2A73AC, 0x19ED11D2, 0x0C024306, 0x474B2183, 0x3ACDE7B4,
    0xFB8DF2A7, 0xDC373C44, 0xDC00BDCB, 0x77E4BDCB, 0x3EE297CE, 0x378DCF11, 0xB7CA9CEB,
    0x867B4474, 0xC30090C1, 0x11D2C860, 0xCEB379ED, 0x3EE37CA9, 0xB80DCF11, 0x7B800017,
    0xEF7BDEE1, 0x005EF7BD, 0xDEF7BDEE, 0x7B85EF7B, 0xD4000001, 0xDA71BFBE, 0xB1DA86F8,
    0x16DCF1BD, 0x5BC6F2CB, 0xE5F8D2D1, 0xB9E783CF, 0x635E8C84, 0x6CE85F48, 0xBFEE5E2B,
    0x67D58DE2, 0xEFA0FFA8, 0xE81ABD00, 0x7B85EE1F, 0x00000001, 0x4D20C000, 0xFEF794D9,
    0x588AEF07, 0xD06DC60D, 0x71AFC1AB, 0x000BDC2F, 0x00000000, 0xA6CA6906, 0x783FF7BC,
    0x786AC457, 0x5F897DEF, 0x8BF57EFD, 0xFEABFDF8, 0xEE17B8BF, 0x00000005, 0x34830000,
    0xFBDE5365, 0x622BBC1F, 0x5EE5EE35, 0x5EE5EE00, 0x00BDC2F7, 0x00000000, 0x6CA69060,
    0x83FF7BCA, 0x06AC4577, 0xAF406DC6, 0xF21AFC06, 0xF3BBC86E, 0x794A0F19, 0x19FBF8BD,
    0x06278A35, 0x42C4F5D7, 0x86DB1A8D, 0xE0A2B7D7, 0x804F19C9, 0xE1981B1F, 0x82462A01,
    0x4F705EB8, 0xD464078D, 0x0005EE1F, 0xFDDF8800, 0xFEA57C0D, 0xF1539C49, 0x2B445F89,
    0x80061823, 0x57886181, 0xA9EF22B4, 0xD447797C, 0x5F9F720D, 0xC0000002, 0x000BDCBD,
    0xF2BDCBDC, 0xF3BBC86E, 0x794A0F19, 0x19FBF8BD, 0x06278A35, 0x42C4F5D7, 0x86DB1A8D,
    0xE0A2B7D7, 0x804F19C9, 0xE1981B1F, 0x82462A01, 0x4F705EB8, 0xD464078D, 0x0000001F
EW_END_OF_FONT_RES( ApplicationArial21 )

/* Table with links to derived variants of the font resource : 'Application::Arial21' */
EW_RES_WITHOUT_VARIANTS( ApplicationArial21 )

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
  CoreRectView__OnSetBounds( _this, _Const0114 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00AD );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0115 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0116 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Frame, _Const0114 );
  ViewsFrame_OnSetColor( &_this->Frame, FlatColorOfTouch );
  CoreRectView__OnSetBounds( &_this->Image, _Const0114 );
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
  ApplicationModIconButton__Init( &_this->SupSignMais, &_this->_XObject, 0 );
  ApplicationModIconButton__Init( &_this->SupSignMenos, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationConfigScreen );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0117 );
  CoreRectView__OnSetBounds( &_this->bg, _Const0117 );
  ViewsRectangle_OnSetColor( &_this->bg, _Const0118 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0117 );
  ViewsBorder_OnSetWidth( &_this->Border, 3 );
  CoreRectView__OnSetBounds( &_this->labelSup, _Const0119 );
  ViewsText_OnSetAlignment( &_this->labelSup, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelSup, EwLoadString( &_Const011A ));
  CoreRectView__OnSetBounds( &_this->labelInf, _Const011B );
  ViewsText_OnSetAlignment( &_this->labelInf, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelInf, EwLoadString( &_Const011C ));
  CoreRectView__OnSetBounds( &_this->SupMenos, _Const011D );
  ApplicationModIconButton_OnSetIconIndex( &_this->SupMenos, 2 );
  CoreRectView__OnSetBounds( &_this->SupMais, _Const011E );
  ApplicationModIconButton_OnSetIconIndex( &_this->SupMais, 3 );
  CoreRectView__OnSetBounds( &_this->InfMenos, _Const011F );
  ApplicationModIconButton_OnSetIconIndex( &_this->InfMenos, 2 );
  CoreRectView__OnSetBounds( &_this->InfMais, _Const0120 );
  ApplicationModIconButton_OnSetIconIndex( &_this->InfMais, 3 );
  CoreRectView__OnSetBounds( &_this->SupVal, _Const0121 );
  ViewsText_OnSetString( &_this->SupVal, EwLoadString( &_Const0122 ));
  CoreRectView__OnSetBounds( &_this->InfVal, _Const0123 );
  ViewsText_OnSetString( &_this->InfVal, EwLoadString( &_Const0124 ));
  CoreRectView__OnSetBounds( &_this->Sair, _Const0125 );
  ApplicationModIconButton_OnSetIconIndex( &_this->Sair, 9 );
  CoreRectView__OnSetBounds( &_this->SupSignMais, _Const0126 );
  ApplicationModIconButton_OnSetIconIndex( &_this->SupSignMais, 0 );
  CoreRectView__OnSetBounds( &_this->SupSignMenos, _Const0127 );
  ApplicationModIconButton_OnSetIconIndex( &_this->SupSignMenos, 1 );
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
  CoreGroup__Add( _this, ((CoreView)&_this->SupSignMais ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SupSignMenos ), 0 );
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
  ApplicationModIconButton_OnSetIcon( &_this->SupSignMais, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  ApplicationModIconButton_OnSetIcon( &_this->SupSignMenos, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));

  /* Create and initialize the suitable class variant */
  EwAttachObjectVariant( &_this->_XObject, aLink, aArg );
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
  ApplicationModIconButton__ReInit( &_this->SupSignMais );
  ApplicationModIconButton__ReInit( &_this->SupSignMenos );

  /* Reinitialize the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_ReInit( &_this->_XObject );
}

/* Finalizer method for the class 'Application::ConfigScreen' */
void ApplicationConfigScreen__Done( ApplicationConfigScreen _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationConfigScreen );

  /* Deinitialize the variant */
  EwDetachObjectVariant( &_this->_XObject );

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
  ApplicationModIconButton__Done( &_this->SupSignMais );
  ApplicationModIconButton__Done( &_this->SupSignMenos );

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
  EwMarkObject( &_this->SupSignMais );
  EwMarkObject( &_this->SupSignMenos );

  /* Give the super class a chance to mark its objects and references */
  CoreGroup__Mark( &_this->_Super );

  /* Don't forget the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_Mark( &_this->_XObject );
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
  EW_STATIC_CLASS_VARIANT( ApplicationConfigScreen769 ),
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

/* Initializer for the class variant 'Application::ConfigScreen769' */
void ApplicationConfigScreen769__Init( ApplicationConfigScreen _this, XObject aLink, XHandle aArg )
{
  register ApplicationConfigScreen769 _vthis = (ApplicationConfigScreen769)_this->_vthis;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aLink );
  EW_UNUSED_ARG( aArg );

  /* Setup the VMT pointer */
  _vthis->_VMT = EW_VCLASS( ApplicationConfigScreen769 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0128 );
  CoreRectView__OnSetBounds( &_this->bg, _Const0128 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0128 );
  ViewsBorder_OnSetWidth( &_this->Border, 6 );
  CoreRectView__OnSetBounds( &_this->labelSup, _Const0129 );
  CoreRectView__OnSetBounds( &_this->labelInf, _Const012A );
  CoreRectView__OnSetBounds( &_this->SupMenos, _Const012B );
  ApplicationModIconButton_OnSetIconIndex( &_this->SupMenos, 2 );
  CoreRectView__OnSetBounds( &_this->SupMais, _Const012C );
  ApplicationModIconButton_OnSetIconIndex( &_this->SupMais, 3 );
  CoreRectView__OnSetBounds( &_this->InfMenos, _Const012D );
  ApplicationModIconButton_OnSetIconIndex( &_this->InfMenos, 2 );
  CoreRectView__OnSetBounds( &_this->InfMais, _Const012E );
  ApplicationModIconButton_OnSetIconIndex( &_this->InfMais, 3 );
  CoreRectView__OnSetBounds( &_this->SupVal, _Const012F );
  CoreRectView__OnSetBounds( &_this->InfVal, _Const0130 );
  CoreRectView__OnSetBounds( &_this->Sair, _Const0131 );
  ApplicationModIconButton_OnSetIconIndex( &_this->Sair, 12 );
  CoreRectView__OnSetBounds( &_this->SupSignMais, _Const0132 );
  CoreRectView__OnSetBounds( &_this->SupSignMenos, _Const0133 );
  ApplicationModIconButton_OnSetIcon( &_this->SupMenos, EwLoadResource( &ResourcesNavigationIconsLarge, 
  ResourcesBitmap ));
  ApplicationModIconButton_OnSetIcon( &_this->SupMais, EwLoadResource( &ResourcesNavigationIconsLarge, 
  ResourcesBitmap ));
  ApplicationModIconButton_OnSetIcon( &_this->InfMenos, EwLoadResource( &ResourcesNavigationIconsLarge, 
  ResourcesBitmap ));
  ApplicationModIconButton_OnSetIcon( &_this->InfMais, EwLoadResource( &ResourcesNavigationIconsLarge, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->SupVal, EwLoadResource( &ApplicationNumbersP, ResourcesFont 
  ));
  ApplicationModIconButton_OnSetIcon( &_this->Sair, EwLoadResource( &ResourcesKeyIconsLarge, 
  ResourcesBitmap ));
  ApplicationModIconButton_OnSetIcon( &_this->SupSignMais, EwLoadResource( &ResourcesNavigationIconsLarge, 
  ResourcesBitmap ));
  ApplicationModIconButton_OnSetIcon( &_this->SupSignMenos, EwLoadResource( &ResourcesNavigationIconsLarge, 
  ResourcesBitmap ));
}

/* Re-Initializer for the class variant 'Application::ConfigScreen769' */
void ApplicationConfigScreen769__ReInit( ApplicationConfigScreen _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Finalizer method for the class variant 'Application::ConfigScreen769' */
void ApplicationConfigScreen769__Done( ApplicationConfigScreen _this )
{
  register ApplicationConfigScreen769 _vthis = (ApplicationConfigScreen769)_this->_vthis;

  /* Finalize this class */
  _vthis->_VMT = EW_VCLASS( ApplicationConfigScreen769 );
}

/* Garbage Collector method for the class variant 'Application::ConfigScreen769' */
void ApplicationConfigScreen769__Mark( ApplicationConfigScreen _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Variants derived from the class : 'Application::ConfigScreen769' */
EW_DEFINE_CLASS_VARIANTS( ApplicationConfigScreen769 )
EW_END_OF_CLASS_VARIANTS( ApplicationConfigScreen769 )

/* Virtual Method Table (VMT) for the class variant : 'Application::ConfigScreen769' */
EW_DEFINE_VCLASS( ApplicationConfigScreen769, XObjectVariant, ApplicationConfigScreen, "Application::ConfigScreen769" )
EW_END_OF_VCLASS( ApplicationConfigScreen769 )

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
  CoreRectView__OnSetBounds( _this, _Const0117 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine3, _Const0134 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine3, _Const0135 );
  ViewsLine_OnSetColor( &_this->VLine3, _Const0136 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine2, _Const0137 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine2, _Const0138 );
  ViewsLine_OnSetColor( &_this->VLine2, _Const0136 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine1, _Const0139 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine1, _Const013A );
  ViewsLine_OnSetColor( &_this->VLine1, _Const0136 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine1, _Const013B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine1, _Const00AD );
  ViewsLine_OnSetColor( &_this->HLine1, _Const004B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine2, _Const013C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine2, _Const013D );
  ViewsLine_OnSetColor( &_this->HLine2, _Const0136 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine3, _Const013E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine3, _Const013F );
  ViewsLine_OnSetColor( &_this->HLine3, _Const004E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine4, _Const0140 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine4, _Const0141 );
  ViewsLine_OnSetColor( &_this->HLine4, _Const0136 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine5, _Const0142 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine5, _Const0143 );
  ViewsLine_OnSetColor( &_this->HLine5, _Const004B );
  CoreRectView__OnSetBounds( &_this->PlotterPath, _Const0117 );
  ViewsStrokePath_OnSetFlipY( &_this->PlotterPath, 0 );
  ViewsStrokePath_OnSetWidth( &_this->PlotterPath, 2.000000f );
  CoreRectView__OnSetBounds( &_this->Border, _Const0117 );
  _this->VerticalRatio = 1.000000f;
  _this->StrokeColor = _Const0015;
  _this->StrokeWidth = 2.000000f;
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

  /* Create and initialize the suitable class variant */
  EwAttachObjectVariant( &_this->_XObject, aLink, aArg );
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

  /* Reinitialize the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_ReInit( &_this->_XObject );
}

/* Finalizer method for the class 'Application::PlotterGraph' */
void ApplicationPlotterGraph__Done( ApplicationPlotterGraph _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationPlotterGraph );

  /* Deinitialize the variant */
  EwDetachObjectVariant( &_this->_XObject );

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

  /* Don't forget the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_Mark( &_this->_XObject );
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

/* 'C' function for method : 'Application::PlotterGraph.AddData()'
   Please note, this function serves as the dispatcher to the methods overriden 
   in the derived class variants. */
void ApplicationPlotterGraph_AddData( ApplicationPlotterGraph _this, XFloat dataPoint )
{
  register XObjectVariant _vthis = _this->_vthis;

  if ( _vthis )
    ((const struct _dmt_ApplicationPlotterGraph*)(_vthis->_VMT))->AddData( _this
  , dataPoint );
  else
    ApplicationPlotterGraph___AddData( _this, dataPoint );
}

/* Implementation of the method : 'Application::PlotterGraph.AddData()'. The implementation 
   has been moved here, because the origin function ApplicationPlotterGraph_AddData() 
   does serve as the dispatcher to the derived class variants only. */
void ApplicationPlotterGraph___AddData( ApplicationPlotterGraph _this, XFloat dataPoint )
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

/* 'C' function for method : 'Application::PlotterGraph.OnSetVerticalRatio()'
   Please note, this function serves as the dispatcher to the methods overriden 
   in the derived class variants. */
void ApplicationPlotterGraph_OnSetVerticalRatio( ApplicationPlotterGraph _this, 
  XFloat value )
{
  register XObjectVariant _vthis = _this->_vthis;

  if ( _vthis )
    ((const struct _dmt_ApplicationPlotterGraph*)(_vthis->_VMT))->OnSetVerticalRatio( _this
  , value );
  else
    ApplicationPlotterGraph___OnSetVerticalRatio( _this, value );
}

/* Implementation of the method : 'Application::PlotterGraph.OnSetVerticalRatio()'. 
   The implementation has been moved here, because the origin function ApplicationPlotterGraph_OnSetVerticalRatio() 
   does serve as the dispatcher to the derived class variants only. */
void ApplicationPlotterGraph___OnSetVerticalRatio( ApplicationPlotterGraph _this, 
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

/* 'C' function for method : 'Application::PlotterGraph.OnSetStrokeWidth()' */
void ApplicationPlotterGraph_OnSetStrokeWidth( ApplicationPlotterGraph _this, XFloat 
  value )
{
  if ( _this->StrokeWidth == value )
    return;

  _this->StrokeWidth = value;
  ViewsStrokePath_OnSetWidth( &_this->PlotterPath, _this->StrokeWidth );
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
  EW_STATIC_CLASS_VARIANT( ApplicationPlotterGraph769 ),
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
  CoreRectView__OnSetBounds( _this, _Const0117 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine3, _Const0134 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine3, _Const0135 );
  ViewsLine_OnSetColor( &_this->VLine3, _Const0136 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine2, _Const0137 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine2, _Const0138 );
  ViewsLine_OnSetColor( &_this->VLine2, _Const0136 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine1, _Const0139 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine1, _Const013A );
  ViewsLine_OnSetColor( &_this->VLine1, _Const0136 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine1, _Const013B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine1, _Const00AD );
  ViewsLine_OnSetColor( &_this->HLine1, _Const0136 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine2, _Const013C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine2, _Const013D );
  ViewsLine_OnSetColor( &_this->HLine2, _Const0136 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine3, _Const013E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine3, _Const013F );
  ViewsLine_OnSetColor( &_this->HLine3, _Const0015 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine4, _Const0140 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine4, _Const0141 );
  ViewsLine_OnSetColor( &_this->HLine4, _Const0136 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine5, _Const0142 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine5, _Const0143 );
  ViewsLine_OnSetColor( &_this->HLine5, _Const0136 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0117 );
  _this->VerticalRatio = 1.000000f;
  _this->StrokeColorR = _Const0015;
  _this->StrokeWidth = 2.000000f;
  _this->StrokeColorS = _Const0015;
  _this->StrokeColorT = _Const0015;
  CoreRectView__OnSetBounds( &_this->PlotterPathR, _Const0117 );
  ViewsStrokePath_OnSetFlipY( &_this->PlotterPathR, 0 );
  ViewsStrokePath_OnSetWidth( &_this->PlotterPathR, 2.000000f );
  CoreRectView__OnSetBounds( &_this->PlotterPathS, _Const0117 );
  ViewsStrokePath_OnSetFlipY( &_this->PlotterPathS, 0 );
  ViewsStrokePath_OnSetWidth( &_this->PlotterPathS, 2.000000f );
  CoreRectView__OnSetBounds( &_this->PlotterPathT, _Const0117 );
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

  /* Create and initialize the suitable class variant */
  EwAttachObjectVariant( &_this->_XObject, aLink, aArg );
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

  /* Reinitialize the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_ReInit( &_this->_XObject );
}

/* Finalizer method for the class 'Application::PlotterTripleGraph' */
void ApplicationPlotterTripleGraph__Done( ApplicationPlotterTripleGraph _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationPlotterTripleGraph );

  /* Deinitialize the variant */
  EwDetachObjectVariant( &_this->_XObject );

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

  /* Don't forget the variant */
  if ( _this->_vthis )
    _this->_vthis->_VMT->_Mark( &_this->_XObject );
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

/* 'C' function for method : 'Application::PlotterTripleGraph.AddData()'
   Please note, this function serves as the dispatcher to the methods overriden 
   in the derived class variants. */
void ApplicationPlotterTripleGraph_AddData( ApplicationPlotterTripleGraph _this, 
  XFloat dataPointR, XFloat dataPointS, XFloat dataPointT )
{
  register XObjectVariant _vthis = _this->_vthis;

  if ( _vthis )
    ((const struct _dmt_ApplicationPlotterTripleGraph*)(_vthis->_VMT))->AddData( _this
  , dataPointR, dataPointS, dataPointT );
  else
    ApplicationPlotterTripleGraph___AddData( _this, dataPointR, dataPointS, dataPointT );
}

/* Implementation of the method : 'Application::PlotterTripleGraph.AddData()'. The 
   implementation has been moved here, because the origin function ApplicationPlotterTripleGraph_AddData() 
   does serve as the dispatcher to the derived class variants only. */
void ApplicationPlotterTripleGraph___AddData( ApplicationPlotterTripleGraph _this, 
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

/* 'C' function for method : 'Application::PlotterTripleGraph.OnSetVerticalRatio()'
   Please note, this function serves as the dispatcher to the methods overriden 
   in the derived class variants. */
void ApplicationPlotterTripleGraph_OnSetVerticalRatio( ApplicationPlotterTripleGraph _this, 
  XFloat value )
{
  register XObjectVariant _vthis = _this->_vthis;

  if ( _vthis )
    ((const struct _dmt_ApplicationPlotterTripleGraph*)(_vthis->_VMT))->OnSetVerticalRatio( _this
  , value );
  else
    ApplicationPlotterTripleGraph___OnSetVerticalRatio( _this, value );
}

/* Implementation of the method : 'Application::PlotterTripleGraph.OnSetVerticalRatio()'. 
   The implementation has been moved here, because the origin function ApplicationPlotterTripleGraph_OnSetVerticalRatio() 
   does serve as the dispatcher to the derived class variants only. */
void ApplicationPlotterTripleGraph___OnSetVerticalRatio( ApplicationPlotterTripleGraph _this, 
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

/* 'C' function for method : 'Application::PlotterTripleGraph.OnSetStrokeWidth()' */
void ApplicationPlotterTripleGraph_OnSetStrokeWidth( ApplicationPlotterTripleGraph _this, 
  XFloat value )
{
  if ( _this->StrokeWidth == value )
    return;

  _this->StrokeWidth = value;
  ViewsStrokePath_OnSetWidth( &_this->PlotterPathR, _this->StrokeWidth );
  ViewsStrokePath_OnSetWidth( &_this->PlotterPathS, _this->StrokeWidth );
  ViewsStrokePath_OnSetWidth( &_this->PlotterPathT, _this->StrokeWidth );
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
  EW_STATIC_CLASS_VARIANT( ApplicationPlotterTripleGraph769 ),
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

/* Initializer for the class variant 'Application::PlotterGraph769' */
void ApplicationPlotterGraph769__Init( ApplicationPlotterGraph _this, XObject aLink, XHandle aArg )
{
  register ApplicationPlotterGraph769 _vthis = (ApplicationPlotterGraph769)_this->_vthis;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aLink );

  /* Setup the VMT pointer */
  _vthis->_VMT = EW_VCLASS( ApplicationPlotterGraph769 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0128 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine3, _Const0144 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine3, _Const0145 );
  ViewsLine_OnSetWidth( &_this->VLine3, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine2, _Const0146 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine2, _Const0147 );
  ViewsLine_OnSetWidth( &_this->VLine2, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine1, _Const0148 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine1, _Const0149 );
  ViewsLine_OnSetWidth( &_this->VLine1, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine1, _Const014A );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine1, _Const014B );
  ViewsLine_OnSetWidth( &_this->HLine1, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine2, _Const014C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine2, _Const014D );
  ViewsLine_OnSetWidth( &_this->HLine2, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine3, _Const014E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine3, _Const014F );
  ViewsLine_OnSetWidth( &_this->HLine3, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine4, _Const0150 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine4, _Const0151 );
  ViewsLine_OnSetWidth( &_this->HLine4, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine5, _Const0152 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine5, _Const0153 );
  ViewsLine_OnSetWidth( &_this->HLine5, 2 );
  CoreRectView__OnSetBounds( &_this->PlotterPath, _Const0154 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0128 );
  ViewsBorder_OnSetWidth( &_this->Border, 2 );

  /* Call the user defined constructor */
  ApplicationPlotterGraph769_Init( _this, aArg );
}

/* Re-Initializer for the class variant 'Application::PlotterGraph769' */
void ApplicationPlotterGraph769__ReInit( ApplicationPlotterGraph _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Finalizer method for the class variant 'Application::PlotterGraph769' */
void ApplicationPlotterGraph769__Done( ApplicationPlotterGraph _this )
{
  register ApplicationPlotterGraph769 _vthis = (ApplicationPlotterGraph769)_this->_vthis;

  /* Finalize this class */
  _vthis->_VMT = EW_VCLASS( ApplicationPlotterGraph769 );
}

/* Garbage Collector method for the class variant 'Application::PlotterGraph769' */
void ApplicationPlotterGraph769__Mark( ApplicationPlotterGraph _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationPlotterGraph769_Init( ApplicationPlotterGraph _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ViewsStrokePath_OnSetOffset( &_this->PlotterPath, EwSetPointX( _this->PlotterPath.Offset, 
  EwGetRectW( _this->PlotterPath.Super1.Bounds ) - 3 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPath, EwSetPointY( _this->PlotterPath.Offset, 
  EwGetRectH( _this->PlotterPath.Super1.Bounds ) / 2 ));
  GraphicsPath_SetMaxNoOfSubPaths( &_this->PathData, 1 );
  GraphicsPath_InitSubPath( &_this->PathData, 0, EwGetRectW( _this->PlotterPath.Super1.Bounds 
  ) / 3 );
}

/* 'C' function for method : 'Application::PlotterGraph769.AddData()' */
void ApplicationPlotterGraph769_AddData( ApplicationPlotterGraph _this, XFloat dataPoint )
{
  if ( _this->PlotterPath.Offset.X > 0 )
    ViewsStrokePath_OnSetOffset( &_this->PlotterPath, EwSetPointX( _this->PlotterPath.Offset, 
    _this->PlotterPath.Offset.X - 3 ));

  if ( GraphicsPath_GetNoOfFreeEdges( &_this->PathData, 0 ) == 0 )
    GraphicsPath_ShiftNodes( &_this->PathData, 0, 1, -3.000000f, 0.000000f );

  if ( GraphicsPath_GetNoOfEdges( &_this->PathData, 0 ) == 0 )
  {
    GraphicsPath_Begin( &_this->PathData, 0, GraphicsPath_GetNodeX( &_this->PathData, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathData, 0 )) + 3.000000f, dataPoint 
    );
    GraphicsPath_AddLine( &_this->PathData, 0, GraphicsPath_GetNodeX( &_this->PathData, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathData, 0 )) + 3.000000f, dataPoint 
    );
  }
  else
  {
    GraphicsPath_AddLine( &_this->PathData, 0, GraphicsPath_GetNodeX( &_this->PathData, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathData, 0 )) + 3.000000f, dataPoint 
    );
  }
}

/* 'C' function for method : 'Application::PlotterGraph769.OnSetVerticalRatio()' */
void ApplicationPlotterGraph769_OnSetVerticalRatio( ApplicationPlotterGraph _this, 
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

/* Variants derived from the class : 'Application::PlotterGraph769' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPlotterGraph769 )
EW_END_OF_CLASS_VARIANTS( ApplicationPlotterGraph769 )

/* Virtual Method Table (VMT) for the class variant : 'Application::PlotterGraph769' */
EW_DEFINE_VCLASS( ApplicationPlotterGraph769, XObjectVariant, ApplicationPlotterGraph, "Application::PlotterGraph769" )
  ApplicationPlotterGraph769_AddData,
  ApplicationPlotterGraph769_OnSetVerticalRatio,
EW_END_OF_VCLASS( ApplicationPlotterGraph769 )

/* Initializer for the class variant 'Application::PlotterTripleGraph769' */
void ApplicationPlotterTripleGraph769__Init( ApplicationPlotterTripleGraph _this, XObject aLink, XHandle aArg )
{
  register ApplicationPlotterTripleGraph769 _vthis = (ApplicationPlotterTripleGraph769)_this->_vthis;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aLink );

  /* Setup the VMT pointer */
  _vthis->_VMT = EW_VCLASS( ApplicationPlotterTripleGraph769 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0128 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine3, _Const0144 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine3, _Const0145 );
  ViewsLine_OnSetWidth( &_this->VLine3, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine2, _Const0146 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine2, _Const0147 );
  ViewsLine_OnSetWidth( &_this->VLine2, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine1, _Const0148 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine1, _Const0149 );
  ViewsLine_OnSetWidth( &_this->VLine1, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine1, _Const014A );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine1, _Const014B );
  ViewsLine_OnSetWidth( &_this->HLine1, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine2, _Const014C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine2, _Const014D );
  ViewsLine_OnSetWidth( &_this->HLine2, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine3, _Const014E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine3, _Const014F );
  ViewsLine_OnSetWidth( &_this->HLine3, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine4, _Const0150 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine4, _Const0151 );
  ViewsLine_OnSetWidth( &_this->HLine4, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine5, _Const0152 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine5, _Const0153 );
  ViewsLine_OnSetWidth( &_this->HLine5, 2 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0154 );
  ViewsBorder_OnSetWidth( &_this->Border, 2 );
  CoreRectView__OnSetBounds( &_this->PlotterPathR, _Const0154 );
  CoreRectView__OnSetBounds( &_this->PlotterPathS, _Const0154 );
  CoreRectView__OnSetBounds( &_this->PlotterPathT, _Const0154 );

  /* Call the user defined constructor */
  ApplicationPlotterTripleGraph769_Init( _this, aArg );
}

/* Re-Initializer for the class variant 'Application::PlotterTripleGraph769' */
void ApplicationPlotterTripleGraph769__ReInit( ApplicationPlotterTripleGraph _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* Finalizer method for the class variant 'Application::PlotterTripleGraph769' */
void ApplicationPlotterTripleGraph769__Done( ApplicationPlotterTripleGraph _this )
{
  register ApplicationPlotterTripleGraph769 _vthis = (ApplicationPlotterTripleGraph769)_this->_vthis;

  /* Finalize this class */
  _vthis->_VMT = EW_VCLASS( ApplicationPlotterTripleGraph769 );
}

/* Garbage Collector method for the class variant 'Application::PlotterTripleGraph769' */
void ApplicationPlotterTripleGraph769__Mark( ApplicationPlotterTripleGraph _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationPlotterTripleGraph769_Init( ApplicationPlotterTripleGraph _this, 
  XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ViewsStrokePath_OnSetOffset( &_this->PlotterPathR, EwSetPointX( _this->PlotterPathR.Offset, 
  EwGetRectW( _this->PlotterPathR.Super1.Bounds ) - 3 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPathS, EwSetPointX( _this->PlotterPathS.Offset, 
  EwGetRectW( _this->PlotterPathS.Super1.Bounds ) - 3 ));
  ViewsStrokePath_OnSetOffset( &_this->PlotterPathT, EwSetPointX( _this->PlotterPathT.Offset, 
  EwGetRectW( _this->PlotterPathT.Super1.Bounds ) - 3 ));
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
  ) / 3 );
  GraphicsPath_InitSubPath( &_this->PathDataS, 0, EwGetRectW( _this->PlotterPathS.Super1.Bounds 
  ) / 3 );
  GraphicsPath_InitSubPath( &_this->PathDataT, 0, EwGetRectW( _this->PlotterPathT.Super1.Bounds 
  ) / 3 );
}

/* 'C' function for method : 'Application::PlotterTripleGraph769.AddData()' */
void ApplicationPlotterTripleGraph769_AddData( ApplicationPlotterTripleGraph _this, 
  XFloat dataPointR, XFloat dataPointS, XFloat dataPointT )
{
  if ( _this->PlotterPathR.Offset.X > 0 )
    ViewsStrokePath_OnSetOffset( &_this->PlotterPathR, EwSetPointX( _this->PlotterPathR.Offset, 
    _this->PlotterPathR.Offset.X - 3 ));

  if ( _this->PlotterPathS.Offset.X > 0 )
    ViewsStrokePath_OnSetOffset( &_this->PlotterPathS, EwSetPointX( _this->PlotterPathS.Offset, 
    _this->PlotterPathS.Offset.X - 3 ));

  if ( _this->PlotterPathT.Offset.X > 0 )
    ViewsStrokePath_OnSetOffset( &_this->PlotterPathT, EwSetPointX( _this->PlotterPathT.Offset, 
    _this->PlotterPathT.Offset.X - 3 ));

  if ( GraphicsPath_GetNoOfFreeEdges( &_this->PathDataR, 0 ) == 0 )
    GraphicsPath_ShiftNodes( &_this->PathDataR, 0, 1, -3.000000f, 0.000000f );

  if ( GraphicsPath_GetNoOfFreeEdges( &_this->PathDataS, 0 ) == 0 )
    GraphicsPath_ShiftNodes( &_this->PathDataS, 0, 1, -3.000000f, 0.000000f );

  if ( GraphicsPath_GetNoOfFreeEdges( &_this->PathDataT, 0 ) == 0 )
    GraphicsPath_ShiftNodes( &_this->PathDataT, 0, 1, -3.000000f, 0.000000f );

  if ( GraphicsPath_GetNoOfEdges( &_this->PathDataR, 0 ) == 0 )
  {
    GraphicsPath_Begin( &_this->PathDataR, 0, GraphicsPath_GetNodeX( &_this->PathDataR, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataR, 0 )) + 3.000000f, dataPointR 
    );
    GraphicsPath_AddLine( &_this->PathDataR, 0, GraphicsPath_GetNodeX( &_this->PathDataR, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataR, 0 )) + 3.000000f, dataPointR 
    );
  }
  else
  {
    GraphicsPath_AddLine( &_this->PathDataR, 0, GraphicsPath_GetNodeX( &_this->PathDataR, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataR, 0 )) + 3.000000f, dataPointR 
    );
  }

  if ( GraphicsPath_GetNoOfEdges( &_this->PathDataS, 0 ) == 0 )
  {
    GraphicsPath_Begin( &_this->PathDataS, 0, GraphicsPath_GetNodeX( &_this->PathDataS, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataS, 0 )) + 3.000000f, dataPointS 
    );
    GraphicsPath_AddLine( &_this->PathDataS, 0, GraphicsPath_GetNodeX( &_this->PathDataS, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataS, 0 )) + 3.000000f, dataPointS 
    );
  }
  else
  {
    GraphicsPath_AddLine( &_this->PathDataS, 0, GraphicsPath_GetNodeX( &_this->PathDataS, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataS, 0 )) + 3.000000f, dataPointS 
    );
  }

  if ( GraphicsPath_GetNoOfEdges( &_this->PathDataT, 0 ) == 0 )
  {
    GraphicsPath_Begin( &_this->PathDataT, 0, GraphicsPath_GetNodeX( &_this->PathDataT, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataT, 0 )) + 3.000000f, dataPointT 
    );
    GraphicsPath_AddLine( &_this->PathDataT, 0, GraphicsPath_GetNodeX( &_this->PathDataT, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataT, 0 )) + 3.000000f, dataPointT 
    );
  }
  else
  {
    GraphicsPath_AddLine( &_this->PathDataT, 0, GraphicsPath_GetNodeX( &_this->PathDataT, 
    0, GraphicsPath_GetNoOfEdges( &_this->PathDataT, 0 )) + 3.000000f, dataPointT 
    );
  }
}

/* 'C' function for method : 'Application::PlotterTripleGraph769.OnSetVerticalRatio()' */
void ApplicationPlotterTripleGraph769_OnSetVerticalRatio( ApplicationPlotterTripleGraph _this, 
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

/* Variants derived from the class : 'Application::PlotterTripleGraph769' */
EW_DEFINE_CLASS_VARIANTS( ApplicationPlotterTripleGraph769 )
EW_END_OF_CLASS_VARIANTS( ApplicationPlotterTripleGraph769 )

/* Virtual Method Table (VMT) for the class variant : 'Application::PlotterTripleGraph769' */
EW_DEFINE_VCLASS( ApplicationPlotterTripleGraph769, XObjectVariant, ApplicationPlotterTripleGraph, "Application::PlotterTripleGraph769" )
  ApplicationPlotterTripleGraph769_AddData,
  ApplicationPlotterTripleGraph769_OnSetVerticalRatio,
EW_END_OF_VCLASS( ApplicationPlotterTripleGraph769 )

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
