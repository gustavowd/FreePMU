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
static const XRect _Const0049 = {{ 410, 180 }, { 480, 200 }};
static const XStringRes _Const004A = { _StringsDefault0, 0x00CE };
static const XColor _Const004B = { 0xFF, 0x00, 0x00, 0xFF };
static const XRect _Const004C = {{ 410, 120 }, { 480, 140 }};
static const XStringRes _Const004D = { _StringsDefault0, 0x00D9 };
static const XColor _Const004E = { 0x00, 0xFF, 0x00, 0xFF };
static const XRect _Const004F = {{ 410, 60 }, { 480, 80 }};
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
static const XRect _Const005E = {{ 440, 10 }, { 470, 40 }};
static const XRect _Const005F = {{ 20, 40 }, { 400, 220 }};
static const XStringRes _Const0060 = { _StringsDefault0, 0x0122 };
static const XStringRes _Const0061 = { _StringsDefault0, 0x0129 };
static const XStringRes _Const0062 = { _StringsDefault0, 0x0130 };
static const XStringRes _Const0063 = { _StringsDefault0, 0x0139 };
static const XStringRes _Const0064 = { _StringsDefault0, 0x0141 };
static const XStringRes _Const0065 = { _StringsDefault0, 0x0146 };
static const XStringRes _Const0066 = { _StringsDefault0, 0x014F };
static const XStringRes _Const0067 = { _StringsDefault0, 0x0158 };
static const XRect _Const0068 = {{ 4, 220 }, { 64, 240 }};
static const XRect _Const0069 = {{ 350, 0 }, { 420, 40 }};
static const XStringRes _Const006A = { _StringsDefault0, 0x0161 };
static const XRect _Const006B = {{ 270, 0 }, { 340, 40 }};
static const XRect _Const006C = {{ 190, 0 }, { 260, 40 }};
static const XRect _Const006D = {{ 20, 0 }, { 188, 40 }};
static const XStringRes _Const006E = { _StringsDefault0, 0x016A };
static const XStringRes _Const006F = { _StringsDefault0, 0x017D };
static const XRect _Const0070 = {{ 400, 180 }, { 480, 200 }};
static const XStringRes _Const0071 = { _StringsDefault0, 0x0183 };
static const XRect _Const0072 = {{ 400, 120 }, { 480, 140 }};
static const XStringRes _Const0073 = { _StringsDefault0, 0x018D };
static const XRect _Const0074 = {{ 400, 60 }, { 480, 80 }};
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
static const XRect _Const00D9 = {{ 650, 310 }, { 790, 340 }};
static const XRect _Const00DA = {{ 650, 200 }, { 800, 230 }};
static const XRect _Const00DB = {{ 650, 90 }, { 780, 120 }};
static const XRect _Const00DC = {{ 600, 390 }, { 680, 420 }};
static const XRect _Const00DD = {{ 450, 390 }, { 530, 420 }};
static const XRect _Const00DE = {{ 290, 390 }, { 380, 420 }};
static const XRect _Const00DF = {{ 140, 390 }, { 230, 420 }};
static const XRect _Const00E0 = {{ 10, 390 }, { 100, 420 }};
static const XRect _Const00E1 = {{ 40, 0 }, { 280, 50 }};
static const XRect _Const00E2 = {{ 280, 0 }, { 530, 50 }};
static const XRect _Const00E3 = {{ 750, 10 }, { 790, 50 }};
static const XRect _Const00E4 = {{ 40, 50 }, { 640, 380 }};
static const XRect _Const00E5 = {{ 660, 320 }, { 770, 350 }};
static const XRect _Const00E6 = {{ 660, 200 }, { 770, 230 }};
static const XRect _Const00E7 = {{ 660, 80 }, { 770, 110 }};
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
static const XRect _Const0119 = {{ 10, 15 }, { 350, 55 }};
static const XStringRes _Const011A = { _StringsDefault1, 0x0079 };
static const XRect _Const011B = {{ 10, 100 }, { 370, 140 }};
static const XStringRes _Const011C = { _StringsDefault1, 0x0099 };
static const XRect _Const011D = {{ 60, 50 }, { 90, 80 }};
static const XRect _Const011E = {{ 290, 50 }, { 320, 80 }};
static const XRect _Const011F = {{ 60, 135 }, { 90, 165 }};
static const XRect _Const0120 = {{ 290, 135 }, { 320, 165 }};
static const XRect _Const0121 = {{ 90, 50 }, { 290, 80 }};
static const XStringRes _Const0122 = { _StringsDefault1, 0x00B6 };
static const XRect _Const0123 = {{ 90, 135 }, { 290, 165 }};
static const XStringRes _Const0124 = { _StringsDefault1, 0x00C4 };
static const XRect _Const0125 = {{ 350, 0 }, { 380, 30 }};
static const XRect _Const0126 = {{ 0, 0 }, { 600, 330 }};
static const XRect _Const0127 = {{ 20, 20 }, { 550, 70 }};
static const XRect _Const0128 = {{ 20, 170 }, { 580, 220 }};
static const XRect _Const0129 = {{ 100, 80 }, { 150, 130 }};
static const XRect _Const012A = {{ 450, 80 }, { 500, 130 }};
static const XRect _Const012B = {{ 100, 230 }, { 150, 280 }};
static const XRect _Const012C = {{ 450, 230 }, { 500, 280 }};
static const XRect _Const012D = {{ 150, 80 }, { 450, 130 }};
static const XRect _Const012E = {{ 150, 230 }, { 450, 280 }};
static const XRect _Const012F = {{ 550, 0 }, { 600, 50 }};
static const XPoint _Const0130 = { 285, 180 };
static const XPoint _Const0131 = { 285, 0 };
static const XColor _Const0132 = { 0xFF, 0xFF, 0xFF, 0x40 };
static const XPoint _Const0133 = { 190, 180 };
static const XPoint _Const0134 = { 190, 0 };
static const XPoint _Const0135 = { 95, 180 };
static const XPoint _Const0136 = { 95, 0 };
static const XPoint _Const0137 = { 380, 30 };
static const XPoint _Const0138 = { 380, 60 };
static const XPoint _Const0139 = { 0, 60 };
static const XPoint _Const013A = { 380, 90 };
static const XPoint _Const013B = { 0, 90 };
static const XPoint _Const013C = { 380, 120 };
static const XPoint _Const013D = { 0, 120 };
static const XPoint _Const013E = { 380, 150 };
static const XPoint _Const013F = { 0, 150 };
static const XPoint _Const0140 = { 449, 328 };
static const XPoint _Const0141 = { 449, 0 };
static const XPoint _Const0142 = { 299, 328 };
static const XPoint _Const0143 = { 299, 0 };
static const XPoint _Const0144 = { 150, 328 };
static const XPoint _Const0145 = { 150, 0 };
static const XPoint _Const0146 = { 598, 55 };
static const XPoint _Const0147 = { 0, 55 };
static const XPoint _Const0148 = { 598, 109 };
static const XPoint _Const0149 = { 0, 109 };
static const XPoint _Const014A = { 598, 164 };
static const XPoint _Const014B = { 0, 164 };
static const XPoint _Const014C = { 598, 219 };
static const XPoint _Const014D = { 0, 219 };
static const XPoint _Const014E = { 598, 273 };
static const XPoint _Const014F = { 0, 273 };
static const XRect _Const0150 = {{ 0, 0 }, { 598, 328 }};

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
  EW_GLYPH( 0x0021, 5, -21, 6, 21, 16, 0x00000475 ),            /* '!' */
  EW_GLYPH( 0x0022, 3, -22, 10, 8, 16, 0x00000541 ),            /* '"' */
  EW_GLYPH( 0x0023, 1, -21, 14, 21, 16, 0x000005B5 ),           /* '#' */
  EW_GLYPH( 0x0024, 0, -21, 16, 21, 16, 0x00000812 ),           /* '$' */
  EW_GLYPH( 0x0025, 0, -21, 16, 21, 16, 0x00000B7F ),           /* '%' */
  EW_GLYPH( 0x0026, 1, -21, 15, 21, 16, 0x00000EC6 ),           /* '&' */
  EW_GLYPH( 0x0027, 6, -22, 5, 8, 16, 0x000011BF ),             /* ''' */
  EW_GLYPH( 0x0028, 3, -26, 10, 32, 16, 0x000011FA ),           /* '(' */
  EW_GLYPH( 0x0029, 3, -26, 10, 32, 16, 0x0000142A ),           /* ')' */
  EW_GLYPH( 0x002A, 2, -22, 13, 13, 16, 0x0000164F ),           /* '*' */
  EW_GLYPH( 0x002B, 2, -17, 13, 12, 16, 0x0000184E ),           /* '+' */
  EW_GLYPH( 0x002C, 5, -3, 6, 8, 16, 0x00001989 ),              /* ',' */
  EW_GLYPH( 0x002D, 1, -12, 14, 3, 16, 0x000019EC ),            /* '-' */
  EW_GLYPH( 0x002E, 5, -4, 6, 4, 16, 0x00001A92 ),              /* '.' */
  EW_GLYPH( 0x002F, 1, -21, 15, 21, 16, 0x00001AC4 ),           /* '/' */
  EW_GLYPH( 0x0030, 1, -21, 15, 21, 16, 0x00001D0C ),           /* '0' */
  EW_GLYPH( 0x0031, 1, -21, 15, 21, 16, 0x00001FEC ),           /* '1' */
  EW_GLYPH( 0x0032, 1, -21, 15, 21, 16, 0x000021D3 ),           /* '2' */
  EW_GLYPH( 0x0033, 1, -21, 15, 21, 16, 0x000024CF ),           /* '3' */
  EW_GLYPH( 0x0034, 1, -21, 15, 21, 16, 0x000027D5 ),           /* '4' */
  EW_GLYPH( 0x0035, 1, -21, 15, 21, 16, 0x00002A51 ),           /* '5' */
  EW_GLYPH( 0x0036, 1, -21, 15, 21, 16, 0x00002D43 ),           /* '6' */
  EW_GLYPH( 0x0037, 0, -21, 16, 21, 16, 0x00003027 ),           /* '7' */
  EW_GLYPH( 0x0038, 1, -21, 15, 21, 16, 0x000032E2 ),           /* '8' */
  EW_GLYPH( 0x0039, 1, -21, 15, 21, 16, 0x0000362B ),           /* '9' */
  EW_GLYPH( 0x003A, 5, -13, 6, 13, 16, 0x00003910 ),            /* ':' */
  EW_GLYPH( 0x003B, 5, -13, 6, 18, 16, 0x000039AC ),            /* ';' */
  EW_GLYPH( 0x003C, 3, -20, 11, 18, 16, 0x00003A7F ),           /* '<' */
  EW_GLYPH( 0x003D, 2, -15, 12, 8, 16, 0x00003C7E ),            /* '=' */
  EW_GLYPH( 0x003E, 3, -20, 11, 18, 16, 0x00003DE0 ),           /* '>' */
  EW_GLYPH( 0x003F, 1, -21, 14, 21, 16, 0x00003FE3 ),           /* '?' */
  EW_GLYPH( 0x0040, 1, -17, 15, 22, 16, 0x00004269 ),           /* '@' */
  EW_GLYPH( 0x0041, 1, -21, 15, 21, 16, 0x000045AB ),           /* 'A' */
  EW_GLYPH( 0x0042, 1, -21, 15, 21, 16, 0x0000487A ),           /* 'B' */
  EW_GLYPH( 0x0043, 1, -21, 14, 21, 16, 0x00004B3A ),           /* 'C' */
  EW_GLYPH( 0x0044, 1, -21, 15, 21, 16, 0x00004D92 ),           /* 'D' */
  EW_GLYPH( 0x0045, 1, -21, 14, 21, 16, 0x00004FD0 ),           /* 'E' */
  EW_GLYPH( 0x0046, 1, -21, 15, 21, 16, 0x00005241 ),           /* 'F' */
  EW_GLYPH( 0x0047, 1, -21, 14, 21, 16, 0x0000547E ),           /* 'G' */
  EW_GLYPH( 0x0048, 1, -21, 15, 21, 16, 0x00005706 ),           /* 'H' */
  EW_GLYPH( 0x0049, 1, -21, 14, 21, 16, 0x000058C6 ),           /* 'I' */
  EW_GLYPH( 0x004A, 1, -21, 14, 21, 16, 0x00005ADE ),           /* 'J' */
  EW_GLYPH( 0x004B, 1, -21, 15, 21, 16, 0x00005CE3 ),           /* 'K' */
  EW_GLYPH( 0x004C, 1, -21, 15, 21, 16, 0x00005F4E ),           /* 'L' */
  EW_GLYPH( 0x004D, 1, -21, 15, 21, 16, 0x000060FD ),           /* 'M' */
  EW_GLYPH( 0x004E, 1, -21, 15, 21, 16, 0x0000635E ),           /* 'N' */
  EW_GLYPH( 0x004F, 1, -21, 15, 21, 16, 0x0000656A ),           /* 'O' */
  EW_GLYPH( 0x0050, 1, -21, 15, 21, 16, 0x000067EC ),           /* 'P' */
  EW_GLYPH( 0x0051, 1, -21, 15, 24, 16, 0x00006A43 ),           /* 'Q' */
  EW_GLYPH( 0x0052, 1, -21, 15, 21, 16, 0x00006D24 ),           /* 'R' */
  EW_GLYPH( 0x0053, 1, -21, 15, 21, 16, 0x00006F97 ),           /* 'S' */
  EW_GLYPH( 0x0054, 1, -21, 14, 21, 16, 0x000072A4 ),           /* 'T' */
  EW_GLYPH( 0x0055, 1, -21, 15, 21, 16, 0x0000745F ),           /* 'U' */
  EW_GLYPH( 0x0056, 0, -21, 16, 21, 16, 0x00007650 ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -21, 17, 21, 16, 0x0000790E ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -21, 16, 21, 16, 0x00007C1E ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -21, 16, 21, 16, 0x00007F43 ),           /* 'Y' */
  EW_GLYPH( 0x005A, 1, -21, 15, 21, 16, 0x000081B8 ),           /* 'Z' */
  EW_GLYPH( 0x005B, 3, -26, 10, 32, 16, 0x000084A9 ),           /* '[' */
  EW_GLYPH( 0x005C, 1, -21, 15, 21, 16, 0x00008681 ),           /* '\' */
  EW_GLYPH( 0x005D, 3, -26, 10, 32, 16, 0x000088C4 ),           /* ']' */
  EW_GLYPH( 0x005E, 0, -22, 17, 10, 16, 0x00008AA6 ),           /* '^' */
  EW_GLYPH( 0x005F, 0, 2, 17, 4, 16, 0x00008C5A ),              /* '_' */
  EW_GLYPH( 0x0060, 3, -21, 9, 4, 16, 0x00008CE3 ),             /* '`' */
  EW_GLYPH( 0x0061, 1, -17, 15, 17, 16, 0x00008D80 ),           /* 'a' */
  EW_GLYPH( 0x0062, 1, -22, 15, 22, 16, 0x0000900C ),           /* 'b' */
  EW_GLYPH( 0x0063, 1, -17, 15, 17, 16, 0x00009244 ),           /* 'c' */
  EW_GLYPH( 0x0064, 1, -22, 15, 22, 16, 0x00009475 ),           /* 'd' */
  EW_GLYPH( 0x0065, 1, -17, 15, 17, 16, 0x000096A8 ),           /* 'e' */
  EW_GLYPH( 0x0066, 1, -22, 15, 22, 16, 0x0000994A ),           /* 'f' */
  EW_GLYPH( 0x0067, 1, -17, 15, 23, 16, 0x00009B94 ),           /* 'g' */
  EW_GLYPH( 0x0068, 1, -22, 15, 22, 16, 0x00009E67 ),           /* 'h' */
  EW_GLYPH( 0x0069, 1, -22, 15, 22, 16, 0x0000A03E ),           /* 'i' */
  EW_GLYPH( 0x006A, 3, -22, 11, 28, 16, 0x0000A27C ),           /* 'j' */
  EW_GLYPH( 0x006B, 0, -22, 16, 22, 16, 0x0000A4A2 ),           /* 'k' */
  EW_GLYPH( 0x006C, 1, -22, 15, 22, 16, 0x0000A718 ),           /* 'l' */
  EW_GLYPH( 0x006D, 1, -17, 15, 17, 16, 0x0000A924 ),           /* 'm' */
  EW_GLYPH( 0x006E, 1, -17, 15, 17, 16, 0x0000AAAC ),           /* 'n' */
  EW_GLYPH( 0x006F, 0, -17, 16, 17, 16, 0x0000AC30 ),           /* 'o' */
  EW_GLYPH( 0x0070, 1, -17, 15, 23, 16, 0x0000AE6E ),           /* 'p' */
  EW_GLYPH( 0x0071, 1, -17, 15, 23, 16, 0x0000B0DB ),           /* 'q' */
  EW_GLYPH( 0x0072, 1, -17, 14, 17, 16, 0x0000B341 ),           /* 'r' */
  EW_GLYPH( 0x0073, 0, -17, 16, 17, 16, 0x0000B4DE ),           /* 's' */
  EW_GLYPH( 0x0074, 1, -21, 15, 21, 16, 0x0000B7B7 ),           /* 't' */
  EW_GLYPH( 0x0075, 1, -17, 15, 17, 16, 0x0000B9DD ),           /* 'u' */
  EW_GLYPH( 0x0076, 0, -17, 16, 17, 16, 0x0000BB70 ),           /* 'v' */
  EW_GLYPH( 0x0077, 0, -17, 17, 17, 16, 0x0000BDB9 ),           /* 'w' */
  EW_GLYPH( 0x0078, 0, -17, 16, 17, 16, 0x0000C037 ),           /* 'x' */
  EW_GLYPH( 0x0079, 0, -17, 17, 23, 16, 0x0000C2D0 ),           /* 'y' */
  EW_GLYPH( 0x007A, 1, -17, 14, 17, 16, 0x0000C5EB ),           /* 'z' */
  EW_GLYPH( 0x007B, 2, -26, 12, 32, 16, 0x0000C859 ),           /* '{' */
  EW_GLYPH( 0x007C, 6, -26, 4, 32, 16, 0x0000CB15 ),            /* '|' */
  EW_GLYPH( 0x007D, 2, -26, 12, 32, 16, 0x0000CBA7 ),           /* '}' */
  EW_GLYPH( 0x007E, 2, -13, 13, 4, 16, 0x0000CE60 ),            /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 16, 0x0000CF31 ),
  EW_GLYPH( 0x00A1, 5, -16, 6, 22, 16, 0x0000CF31 ),
  EW_GLYPH( 0x00A2, 3, -21, 11, 21, 16, 0x0000D003 ),
  EW_GLYPH( 0x00A3, 1, -21, 15, 21, 16, 0x0000D1D2 ),
  EW_GLYPH( 0x00A5, 0, -21, 16, 21, 16, 0x0000D46B ),
  EW_GLYPH( 0x00A6, 6, -26, 4, 31, 16, 0x0000D783 ),
  EW_GLYPH( 0x00A7, 1, -21, 14, 25, 16, 0x0000D82F ),
  EW_GLYPH( 0x00A8, 2, -21, 12, 3, 16, 0x0000DBE6 ),
  EW_GLYPH( 0x00A9, 0, -22, 16, 23, 16, 0x0000DC57 ),
  EW_GLYPH( 0x00AA, 3, -21, 11, 13, 16, 0x0000E04B ),
  EW_GLYPH( 0x00AB, 2, -15, 13, 11, 16, 0x0000E1ED ),
  EW_GLYPH( 0x00AC, 2, -13, 13, 8, 16, 0x0000E3D2 ),
  EW_GLYPH( 0x00AD, 1, -12, 14, 3, 16, 0x0000E4E0 ),
  EW_GLYPH( 0x00AE, 1, -22, 15, 14, 16, 0x0000E586 ),
  EW_GLYPH( 0x00AF, 2, -21, 13, 3, 16, 0x0000E856 ),
  EW_GLYPH( 0x00B0, 3, -22, 11, 12, 16, 0x0000E8E6 ),
  EW_GLYPH( 0x00B1, 2, -17, 13, 17, 16, 0x0000EA37 ),
  EW_GLYPH( 0x00B2, 4, -21, 8, 10, 16, 0x0000EC34 ),
  EW_GLYPH( 0x00B3, 4, -21, 8, 11, 16, 0x0000ED63 ),
  EW_GLYPH( 0x00B4, 5, -21, 9, 4, 16, 0x0000EE93 ),
  EW_GLYPH( 0x00B6, 1, -21, 15, 27, 16, 0x0000EF35 ),
  EW_GLYPH( 0x00B7, 5, -13, 6, 4, 16, 0x0000F16D ),
  EW_GLYPH( 0x00B8, 6, 0, 5, 6, 16, 0x0000F19F ),
  EW_GLYPH( 0x00B9, 5, -21, 6, 11, 16, 0x0000F1EB ),
  EW_GLYPH( 0x00BA, 3, -21, 11, 13, 16, 0x0000F27C ),
  EW_GLYPH( 0x00BB, 2, -15, 13, 11, 16, 0x0000F3E2 ),
  EW_GLYPH( 0x00BC, 0, -21, 16, 21, 16, 0x0000F5C9 ),
  EW_GLYPH( 0x00BD, 0, -21, 16, 21, 16, 0x0000F915 ),
  EW_GLYPH( 0x00BE, 0, -21, 16, 21, 16, 0x0000FCA5 ),
  EW_GLYPH( 0x00BF, 1, -16, 14, 22, 16, 0x0001007E ),
  EW_GLYPH( 0x00C0, 1, -26, 15, 26, 16, 0x00010326 ),
  EW_GLYPH( 0x00C1, 1, -26, 15, 26, 16, 0x000106C7 ),
  EW_GLYPH( 0x00C2, 1, -26, 15, 26, 16, 0x00010A70 ),
  EW_GLYPH( 0x00C3, 1, -26, 15, 26, 16, 0x00010E20 ),
  EW_GLYPH( 0x00C4, 1, -26, 15, 26, 16, 0x000111F3 ),
  EW_GLYPH( 0x00C5, 1, -26, 15, 26, 16, 0x00011581 ),
  EW_GLYPH( 0x00C6, 0, -21, 16, 21, 16, 0x000118ED ),
  EW_GLYPH( 0x00C7, 1, -21, 14, 27, 16, 0x00011BAF ),
  EW_GLYPH( 0x00C8, 1, -26, 14, 26, 16, 0x00011E9B ),
  EW_GLYPH( 0x00C9, 1, -26, 14, 26, 16, 0x000121D9 ),
  EW_GLYPH( 0x00CA, 1, -26, 14, 26, 16, 0x0001251F ),
  EW_GLYPH( 0x00CB, 1, -26, 14, 26, 16, 0x00012875 ),
  EW_GLYPH( 0x00CC, 1, -26, 14, 26, 16, 0x00012BA0 ),
  EW_GLYPH( 0x00CD, 1, -26, 14, 26, 16, 0x00012E85 ),
  EW_GLYPH( 0x00CE, 1, -26, 14, 26, 16, 0x00013172 ),
  EW_GLYPH( 0x00CF, 1, -26, 14, 26, 16, 0x00013466 ),
  EW_GLYPH( 0x00D0, 0, -21, 16, 21, 16, 0x00013738 ),
  EW_GLYPH( 0x00D1, 1, -26, 15, 26, 16, 0x000139DE ),
  EW_GLYPH( 0x00D2, 1, -26, 15, 26, 16, 0x00013CEE ),
  EW_GLYPH( 0x00D3, 1, -26, 15, 26, 16, 0x00014042 ),
  EW_GLYPH( 0x00D4, 1, -26, 15, 26, 16, 0x0001439E ),
  EW_GLYPH( 0x00D5, 1, -26, 15, 26, 16, 0x00014709 ),
  EW_GLYPH( 0x00D6, 1, -26, 15, 26, 16, 0x00014A8F ),
  EW_GLYPH( 0x00D7, 3, -17, 11, 11, 16, 0x00014DD0 ),
  EW_GLYPH( 0x00D8, 0, -22, 17, 24, 16, 0x00014F75 ),
  EW_GLYPH( 0x00D9, 1, -26, 15, 26, 16, 0x00015316 ),
  EW_GLYPH( 0x00DA, 1, -26, 15, 26, 16, 0x000155D7 ),
  EW_GLYPH( 0x00DB, 1, -26, 15, 26, 16, 0x000158A0 ),
  EW_GLYPH( 0x00DC, 1, -26, 15, 26, 16, 0x00015B70 ),
  EW_GLYPH( 0x00DD, 0, -26, 16, 26, 16, 0x00015E1E ),
  EW_GLYPH( 0x00DE, 1, -21, 15, 21, 16, 0x00016172 ),
  EW_GLYPH( 0x00DF, 1, -22, 15, 22, 16, 0x000163D7 ),
  EW_GLYPH( 0x00E0, 1, -22, 15, 22, 16, 0x000166A3 ),
  EW_GLYPH( 0x00E1, 1, -22, 15, 22, 16, 0x00016A03 ),
  EW_GLYPH( 0x00E2, 1, -22, 15, 22, 16, 0x00016D6E ),
  EW_GLYPH( 0x00E3, 1, -22, 15, 22, 16, 0x000170DA ),
  EW_GLYPH( 0x00E4, 1, -22, 15, 22, 16, 0x00017469 ),
  EW_GLYPH( 0x00E5, 1, -23, 15, 23, 16, 0x000177B3 ),
  EW_GLYPH( 0x00E6, 0, -17, 17, 17, 16, 0x00017B22 ),
  EW_GLYPH( 0x00E7, 1, -17, 15, 23, 16, 0x00017E09 ),
  EW_GLYPH( 0x00E8, 1, -22, 15, 22, 16, 0x000180D5 ),
  EW_GLYPH( 0x00E9, 1, -22, 15, 22, 16, 0x0001844C ),
  EW_GLYPH( 0x00EA, 1, -22, 15, 22, 16, 0x000187CE ),
  EW_GLYPH( 0x00EB, 1, -22, 15, 22, 16, 0x00018B51 ),
  EW_GLYPH( 0x00EC, 1, -22, 15, 22, 16, 0x00018EB2 ),
  EW_GLYPH( 0x00ED, 1, -22, 15, 22, 16, 0x00019146 ),
  EW_GLYPH( 0x00EE, 1, -22, 15, 22, 16, 0x000193E5 ),
  EW_GLYPH( 0x00EF, 1, -22, 15, 22, 16, 0x00019685 ),
  EW_GLYPH( 0x00F0, 1, -22, 15, 22, 16, 0x00019903 ),
  EW_GLYPH( 0x00F1, 1, -22, 15, 22, 16, 0x00019BE1 ),
  EW_GLYPH( 0x00F2, 0, -22, 16, 22, 16, 0x00019E69 ),
  EW_GLYPH( 0x00F3, 0, -22, 16, 22, 16, 0x0001A181 ),
  EW_GLYPH( 0x00F4, 0, -22, 16, 22, 16, 0x0001A4A4 ),
  EW_GLYPH( 0x00F5, 0, -22, 16, 22, 16, 0x0001A7C8 ),
  EW_GLYPH( 0x00F6, 0, -22, 16, 22, 16, 0x0001AB0F ),
  EW_GLYPH( 0x00F7, 2, -18, 13, 13, 16, 0x0001AE11 ),
  EW_GLYPH( 0x00F8, 0, -20, 16, 22, 16, 0x0001AFCE ),
  EW_GLYPH( 0x00F9, 1, -22, 15, 22, 16, 0x0001B304 ),
  EW_GLYPH( 0x00FA, 1, -22, 15, 22, 16, 0x0001B56C ),
  EW_GLYPH( 0x00FB, 1, -22, 15, 22, 16, 0x0001B7DF ),
  EW_GLYPH( 0x00FC, 1, -22, 15, 22, 16, 0x0001BA53 ),
  EW_GLYPH( 0x00FD, 0, -22, 17, 28, 16, 0x0001BCA5 ),
  EW_GLYPH( 0x00FE, 1, -22, 15, 28, 16, 0x0001C0AA ),
  EW_GLYPH( 0x00FF, 0, -22, 17, 28, 16, 0x0001C366 ),

  EW_FONT_PIXEL( ApplicationNumbersM, 0x0001C74A )              /* ratio 53.97 % */
    0x9E79E78C, 0xE79E79E7, 0xBFB7E0A9, 0xEFBEFBEF, 0x77EFBEFB, 0x1000519F, 0x00000007,
    0x39CE7380, 0x27B39CE7, 0xB78C4400, 0xCE739CE1, 0x1AC1FF39, 0x07C1E400, 0x001E2C80,
    0x30001248, 0x0261E000, 0x101B06A0, 0x2623EB55, 0xAFDF9CF0, 0x7D402F83, 0xFFD5AE62,
    0x6FBCAE02, 0xE3C04AF7, 0x14300017, 0x00092800, 0x440007FA, 0xDDD18001, 0xAD678009,
    0x00000135, 0x2CF3CF90, 0x7DF7D400, 0x60000003, 0xF1C40014, 0xFBEFBFDB, 0xBEFBEFBE,
    0xDC67DF6F, 0x000FEF7B, 0x00000000, 0x00000000, 0xEF718000, 0xEF71BFBD, 0x00003FBD,
    0xBC37BDD6, 0x00005EF7, 0x00000000, 0xBF000000, 0x177FE2FB, 0x00000000, 0x00000000,
    0xE65BDC40, 0x5DF537BD, 0xD3398000, 0x31867398, 0xF4EFBC47, 0xFC3BEFBC, 0x000002DE,
    0xEE200000, 0x9BDEF32D, 0xC0002EFA, 0x39CC699C, 0xDE2398C3, 0xF7DE7A77, 0x016F7E1D,
    0x00000000, 0xFE000000, 0x00000077, 0xFFFFBF3C, 0xFFFF9C3F, 0x5F3C9FFF, 0xCCC86665,
    0x73C9A0CC, 0xDEF7BED3, 0x002F9325, 0x60002408, 0x07F12000, 0x7BF51440, 0xDF7DF787,
    0xE19A8B85, 0x8FF67399, 0x2A8012FA, 0x37BDFF9E, 0x0361FBED, 0x000C19E0, 0x49000078,
    0xFC3C6000, 0xFFFFFFF5, 0xFFF387FF, 0x66447887, 0x90CC8666, 0xBDEF7A5F, 0xEF7DA6F7,
    0x000017FD, 0x7EF7B9EF, 0xCE42EF78, 0x8A78EDF8, 0x635041E5, 0x02462308, 0x000FCFC0,
    0x32000A3C, 0x1E020073, 0x4FFD9205, 0x3107F3F1, 0x8CF3D323, 0xF73DE028, 0x00296FDE,
    0xC00177F0, 0x002222A3, 0xE73AA89E, 0x6D80339C, 0xF11BEABF, 0xCE13CB01, 0x446093F3,
    0x3CFC0026, 0x03F1E000, 0x0018CC80, 0xFF4C58F0, 0xD9F84BF8, 0xC9E75CDC, 0xEF7FF31F,
    0xB02EF7BD, 0xBC4004DE, 0x39CE7318, 0xDFB50560, 0x0E0B7DF7, 0x024000FE, 0xAC009070,
    0xA20097E0, 0xF7BDFFC9, 0x30EF7BDE, 0xC5BC000B, 0xE6307398, 0xFB19318C, 0xDEFC7F7D,
    0x003F0B37, 0x020048FE, 0x00980013, 0x1B00240C, 0x192A003F, 0xFC7F7DFB, 0x18BD37DE,
    0x9CC60E73, 0x8001BEA1, 0x000DEF75, 0xC0000000, 0x7F7B9DFC, 0x015BFF8C, 0xCCF14FF1,
    0xEF82FDB9, 0x0F15DF7B, 0x0362414F, 0x00000018, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x90200000, 0x402F9320, 0xBDF7F793, 0xA886F3CB, 0xEDE66E67,
    0xEF7B8C0A, 0xCE404DFF, 0xCE73137F, 0xBEF96AC1, 0x82562EEF, 0x64C81F17, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0C000000, 0xE6E0AC02,
    0x66FF7EFB, 0x93E7313C, 0xF3E41FD4, 0x046005FB, 0xECFFC3C0, 0xCABFD880, 0xC47A02B0,
    0x0637F1F7, 0xFD8B14EF, 0xE0BA1FDF, 0x4FFE6549, 0x467F3181, 0x53BEF102, 0xF8843D19,
    0x4CF67116, 0x8417CBCF, 0xBCAE630A, 0x5FC4F101, 0x9DF504EF, 0xBDC40087, 0x0000002F,
    0x80000000, 0x30F7BDDF, 0x0077BDEF, 0x7CE73D80, 0x19CE7318, 0x1FDF7DEB, 0x6FBEFBCF,
    0x00000002, 0xF7BDC600, 0x0480E0BE, 0x30480C13, 0xFBEF50C1, 0xBEFBEFBE, 0xEFBEFBEF,
    0x39CE7398, 0xCE739CE7, 0x7B8C0009, 0x0001FDEF, 0x9EF78000, 0x2B4C6004, 0x00D16801,
    0x80037954, 0x39800B96, 0x33F000FC, 0x352B0026, 0x02AAF100, 0x900343A0, 0xE80033CB,
    0x3C600688, 0xC5700266, 0xBC33C00B, 0x172BC001, 0x00687300, 0xD000F1B4, 0xA9C801A1,
    0x785F800A, 0xDFFAC001, 0xE7BDEF7B, 0x1027744B, 0x88B90DCF, 0xF907CE67, 0xF7BFA1F3,
    0xC41943FD, 0x263107C4, 0x13129503, 0xC003E7F0, 0x0CC00592, 0x3CFE001F, 0x04A96400,
    0xE000E1E0, 0x95000F13, 0x1F0E0016, 0x00E4A300, 0x3C3E1104, 0x3F130288, 0x7E883EA2,
    0x72527FDF, 0x499CE621, 0x4409DD34, 0xDEFFC4ED, 0x005DEF7B, 0xE733C000, 0xEFBF4000,
    0x00000003, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x80000000,
    0xF7DF7DE7, 0xDF7DEFC1, 0x739CF637, 0xE7398C0E, 0x77E00004, 0xDEF7BDEF, 0xC40005F3,
    0xE73D87F3, 0xC609F39C, 0xF7DF7AC2, 0x1F0FBF7D, 0x00649500, 0x00009130, 0x80241E00,
    0xFAC11837, 0x9DEF7BDF, 0x013B78F8, 0xD44C699E, 0xEFCE739C, 0xF7E787E3, 0x3EFBEFBE,
    0xC000D818, 0x0004C003, 0x00000000, 0x7DF7DF78, 0xDF7DF7DF, 0x739CCF01, 0x9CE739CE,
    0xBDFF8000, 0xEF7BDEF7, 0x90002FFD, 0x39CCF2FD, 0x30B39CE7, 0xF7DF7E87, 0x37F7DF7D,
    0xE1F001F1, 0x00112001, 0x4C1E0000, 0x07F17100, 0x14F7BDEF, 0x00C00135, 0x09F39CF6,
    0x7DE78156, 0x0B87EFDF, 0x005493C0, 0x00009130, 0xC0022600, 0xFBF66493, 0xBEFBEFBE,
    0x678F0FDF, 0x9CE739CE, 0x002F904F, 0x1801D9E2, 0x037BDEF7, 0xF90005E0, 0x00068000,
    0x400188F9, 0xF9002EF3, 0x8FC00588, 0x625C8017, 0x330BF002, 0x2F12E400, 0x0330BF00,
    0x02F12C40, 0x001986F0, 0xBEFBE43C, 0x1DEFC4EF, 0x339CE678, 0x0009CCF1, 0xEF7BDFF8,
    0xEE70B7BD, 0x00000003, 0xF7FE0000, 0xBDEF7BDE, 0x001FDEF7, 0x9CE67800, 0x81B9CE73,
    0xEFBEFBDF, 0x000BBEFB, 0x00000000, 0x73800000, 0xFCF7BDEF, 0x6EA20012, 0x739CE678,
    0x6C9339CE, 0xFBEFBEFD, 0xB17BEFBE, 0x0622C800, 0x00098900, 0x01312000, 0xAC003078,
    0xBEFBF4A0, 0x5FBEFBEF, 0x9CE67AE3, 0xE0F9CE73, 0xFAC40029, 0xEF73BE30, 0x1FDEF7BD,
    0x0004FFF2, 0x399E209E, 0x7F1B9CE7, 0xBEFBDFBC, 0x4810BBEF, 0x00261600, 0x00000001,
    0xEF7BDF60, 0x4001A7BD, 0x733C17AC, 0x0660F9CE, 0xBEFBEFBC, 0xC003C0DF, 0x00000042,
    0x2C000100, 0x0902004C, 0xEF1FE626, 0x4EEFBEF7, 0x3C413C62, 0x2981CE73, 0x46004FFF,
    0xDEF7B8B7, 0xF7BDEF7B, 0x00277BDE, 0x739CD310, 0x2CE739CE, 0xEFBEF14C, 0xFBEFBEFB,
    0xB2003E06, 0x0BE004A8, 0xF926000E, 0x0F833000, 0x01311F00, 0x000541A8, 0xF9002F07,
    0x1F000630, 0x624C003E, 0x09833002, 0x001F0F80, 0xE004A835, 0x459002E2, 0x3E1F0016,
    0x02624C00, 0xF7BDF730, 0x44BE7BDE, 0x678803BF, 0x39A898A7, 0x2B3F1267, 0x7DF7BF58,
    0x1F025077, 0x80609144, 0x20C03001, 0xA2883E15, 0xBDFAC98C, 0xFC43BBEF, 0x9CE6A3F8,
    0x03E293C9, 0xEA0CDAA0, 0x4C3F7BDC, 0x14F0371B, 0x301E2631, 0x05C02130, 0x90217008,
    0x783E6060, 0x1FE41F21, 0xDF7DEFCF, 0xA154541D, 0x34419CE6, 0xD44095BF, 0xE77E307F,
    0x3DEF7BDE, 0x0AFF917B, 0x2FB74620, 0x1339CCF0, 0xDEFCC0D3, 0xB188BDF7, 0x330321B0,
    0x0000C130, 0x26000000, 0x007F1300, 0xF7BDD636, 0x003584DE, 0xCE73DD80, 0x600CE739,
    0xBEFBEFBD, 0x00003BEF, 0x60000000, 0x4C0C8000, 0xEFBEFBCF, 0x3117BEFB, 0x9CE739EC,
    0x00262673, 0xDEE36E8C, 0x00007F7B, 0xFDEF7B8C, 0x8C000001, 0x01FDEF7B, 0xBDEE3000,
    0xC00007F7, 0x1FDEF7B8, 0x30000000, 0x05F7BDEE, 0x60982407, 0x06098240, 0x9E003500,
    0x017D600F, 0xBE0116E8, 0xF889FE25, 0xE40F723D, 0x189D8CBF, 0xA81DA877, 0x607E7A7F,
    0xFF205526, 0xC407BE25, 0x016F8A6F, 0xB02FD36F, 0xC07F30BE, 0x80354FF3, 0xFC800771,
    0xE5F88017, 0x7BDEF7B8, 0x0FF7BDEF, 0x9CE73100, 0xE739CE73, 0xBEFBEF93, 0xEFBEFBEF,
    0xEF9000DB, 0xFBEFBEFB, 0x31DBEFBE, 0xCE739CE7, 0x0003E739, 0x2FFF8013, 0x013FD400,
    0xBC01DC69, 0xF017FC8F, 0x403DF12D, 0x02DF11BF, 0x81BA17E6, 0x01F587FA, 0xF887F06F,
    0xC85BE23D, 0x83FF897F, 0x07B18771, 0x9FEA9FEA, 0x05FCC370, 0x7C405FA0, 0x00F7E00B,
    0x7BDEF758, 0x34F7BDEF, 0x8CFAC400, 0x739CE739, 0xF7AA9E16, 0x7DF7DF7D, 0x60038D7F,
    0x24080162, 0x20600000, 0xA051A201, 0xFC453DCF, 0x9D00AF60, 0xCE630678, 0x99FC27B5,
    0x007B7DFB, 0x19FC007C, 0x026B3C00, 0xC400BF40, 0x01FEF7BD, 0x00000000, 0xF7B9F400,
    0xBDEF7BDE, 0x002B987B, 0xCD4FE38C, 0x339CE739, 0xF7F298E5, 0xBEFBEFBE, 0xC004CBEF,
    0x40060004, 0x00BDEFFD, 0x58004BE2, 0x70016F31, 0x0308005C, 0x38004800, 0x750C0036,
    0x1A803DCB, 0xCD7FC000, 0x739CE739, 0x7DF7E882, 0x077DF7DF, 0x00118000, 0x7BDCE298,
    0xDEF7BDEF, 0xE0001CFB, 0xE739ADF9, 0x39CE739C, 0xDEF784E7, 0x3C006F7B, 0x0C1801E0,
    0x1F906006, 0x87AC501B, 0x9327F007, 0x22716048, 0xC7922058, 0x520F06C3, 0x844D80F2,
    0x878300C3, 0xC90F0181, 0x87046144, 0x3078FE0C, 0xFC5C2C90, 0x0C83BDEE, 0x0C3C001E,
    0x0B39CE72, 0xEFBD615B, 0x818636FB, 0x1FC78184, 0x16312407, 0xFCF0B01E, 0xDEF7BDEF,
    0x0069EF7B, 0x3C07EB10, 0x3D42CE73, 0xF7DF7DE0, 0x3C00B8D7, 0x12240058, 0xC0C00000,
    0x0FC5E000, 0x7DEF7BEC, 0x14000B18, 0x6739CCF0, 0xBEF01EB0, 0xF1FEFBEF, 0x23063002,
    0x00B07801, 0x083C0000, 0x81E06300, 0xF7DF7DF7, 0x99E0278F, 0x1A20CE73, 0x113B5100,
    0xDEF7B9DF, 0xF1FDEF7B, 0x1E80027F, 0x9CE733C4, 0xFA0F6E73, 0x7DF7DF7B, 0x4C4915DF,
    0x0003C480, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x800F0200, 0xF001E24C,
    0xEFBDF7E0, 0xF2EFBEFB, 0x39CCF126, 0xEC5B9CE7, 0xEEFC0027, 0x7BDEF7BD, 0x0002F9EF,
    0x98C0D9E2, 0x36413E73, 0xFBEFBDF8, 0xF000F0FD, 0x4C009924, 0x00000004, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x780044C0, 0xBDF84C92, 0xF0FDFBEF, 0x7CE73180,
    0x10017C82, 0xDEEB0ECF, 0xF7BDEF7B, 0x002F7BDE, 0x9CE73100, 0x6139CE73, 0xBEFBEFBC,
    0x00BEFBEF, 0x00000000, 0x00000000, 0xDEF7BDE4, 0x200000BB, 0xCE739CE6, 0x7DF78C01,
    0x002DF7DF, 0x00000000, 0x00000000, 0xBEFBEF18, 0x2FBEFBEF, 0xCE739CC4, 0x0004E739,
    0xBDEF7BDE, 0xEF7BDEF7, 0x800001BD, 0x739CE731, 0xF3C139CE, 0xBEFBEFBE, 0x0006FBEF,
    0x00000000, 0x00000000, 0xF7DF79E0, 0x3007DF7D, 0xCE739CE6, 0xCC00000D, 0xF7BDEF7B,
    0x00000005, 0x00000000, 0x00000000, 0x00000000, 0xF7BDEFB5, 0x4FEF7BDE, 0x1D00037D,
    0xCE739CE4, 0xC418F739, 0x7DF7DF7E, 0x661577DF, 0x7001C000, 0x00000030, 0xEEB00000,
    0x0BDEF7BD, 0xCE630000, 0x7DEA0019, 0x000001DF, 0x70000800, 0x985007F1, 0xD8923001,
    0x03BEFBEF, 0x9CE720DE, 0x01BEA033, 0xFBDEFFC0, 0xF7BDDF80, 0x00000001, 0x00000000,
    0x00000000, 0x80000000, 0x6F7BDEEF, 0x6A000001, 0x026739CE, 0xDF7DF79C, 0x00000277,
    0x00000000, 0x00000000, 0x00000000, 0xDEF7BAC0, 0xF7BDEF7B, 0x8C000BDE, 0xD40CE739,
    0xFBD6739C, 0x79C0EFBE, 0x0005F7DF, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x7A800000, 0x381DF7DF, 0x63BEFBEF, 0x350339CE, 0x00009CE7, 0xBDEF7BAC,
    0x003FDEF7, 0x39CE6300, 0xDF7A801F, 0x0001FDF7, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x06000000, 0x00089800, 0xDF78CF17, 0xF7DF7DF7, 0x9CE6F857, 0x0B39CE73,
    0xFD900073, 0x01DEF7BA, 0x127BDCE3, 0x013A0DC0, 0xA013507A, 0xC401F116, 0xFC005F8B,
    0x9801E792, 0x9803F90F, 0xBE00378D, 0xF8001560, 0x001F8000, 0xF000E60F, 0x46801A16,
    0xA0F18015, 0x4C60E801, 0x03F0B900, 0x005C83A0, 0x000DE262, 0xF003441D, 0xDEEFE562,
    0x000000BB, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xEFC00000, 0x7DF7DF7D, 0x180DF7DF, 0xE739CE73, 0xE000139C, 0xE05DEF77,
    0xFC077BDE, 0xF0980061, 0x00701800, 0x4C001818, 0x44FE004C, 0x003C9002, 0x600922D2,
    0x00E570C9, 0xE0169492, 0x01FC78F0, 0x12193863, 0x05931A60, 0x910CF7F0, 0x127E2900,
    0x007862C0, 0x06001C24, 0x0F130006, 0xC0227F00, 0xC0DBDEEF, 0x04C077BD, 0x00026200,
    0x0630001F, 0x0002F000, 0x620C0015, 0x3E4BF002, 0x02C8FC00, 0x00170660, 0x3E004A93,
    0xC3E4007C, 0x2621C004, 0x00F83500, 0x300031F0, 0x00980003, 0x20001BC0, 0xF7FEB00A,
    0xF9EF7BDE, 0x409DBC0D, 0x898D3FD4, 0xF106739A, 0xF7BF50FA, 0xF150777D, 0xA83E42E0,
    0x031203C0, 0x00000800, 0x00000000, 0x00000000, 0x00000000, 0x02200000, 0x078C480F,
    0xFAC1F207, 0xF7DEFCF0, 0x98E541DD, 0x106739A8, 0xA809DBCD, 0xF7BBF0FF, 0xBDEF7BDE,
    0x310005E7, 0x39CD407F, 0x701EA09F, 0x3EFDF7DE, 0x282A001C, 0x00483C00, 0x08580020,
    0x00489200, 0xBBE03C1D, 0x0B85DEF7, 0x9A815600, 0x7F39CE73, 0x7DF79C0D, 0x002DF7DF,
    0x00000000, 0x00000000, 0x00000000, 0xBDEFFD60, 0x4BF3DEF7, 0xB5102774, 0x9CD42E53,
    0xA1F68833, 0xEEFBEF7E, 0x0B8189E0, 0x7899E0F9, 0x00002240, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x1203C080, 0x0F90B851, 0x7BF50F9E, 0x150777DF, 0xCE735139,
    0x13B79A20, 0xF581FF50, 0xF79177BF, 0x90DE0037, 0xBC51000F, 0xDEF7BBF0, 0xFFBDEF7B,
    0xE7200037, 0x9CE6300E, 0xF82F904F, 0x7DFBEFBD, 0x24A80078, 0x00113001, 0x30F00040,
    0x03E0E800, 0x4BBDEF7D, 0x1C8004F4, 0x3E7398C0, 0xF01EFC61, 0x6BF7DF7B, 0xC8330034,
    0x00206004, 0x00000098, 0x00000000, 0x9E000000, 0xDEF7BDFF, 0xCC1DEF7B, 0x8D10012F,
    0x739CE731, 0xDA82B0CE, 0xEFBEFBEF, 0x038BA6FB, 0x00026240, 0x00140800, 0x60097C7F,
    0xF7BFF906, 0xF105F3DE, 0x83B3C402, 0x364015F5, 0xF7BDDF9E, 0x2005859E, 0x6004893A,
    0x00000022, 0x2780244C, 0xDF7DE119, 0xEFDF7DF7, 0xE7398F87, 0x413E739C, 0xFCC4004D,
    0xF7BDEEB1, 0xBDEF7BDE, 0x630002F7, 0x351339CE, 0xBEF59CE7, 0xDE713BEF, 0x00017DF7,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x80000000,
    0xC037BDFF, 0x00FBDEEF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x80030000, 0xE6260989, 0x624A81C0, 0xEF7E787C, 0x39287EFB, 0x20CE7351,
    0x409DBC7E, 0xBDCE0ED4, 0x7BDD4037, 0x0603C497, 0x3F824286, 0x60B8FE51, 0x44242C91,
    0xC0F06452, 0x12228D83, 0x98FE0F03, 0x850233F8, 0xC0C14581, 0x60FE489F, 0xE0507930,
    0x00C83061, 0x029FC31B, 0x05C5A616, 0x5247F832, 0x221F2280, 0xA0D67F01, 0x6CD90600,
    0x001E0280, 0x78006203, 0xDEEFC0A0, 0xDEF7801B, 0x1809123B, 0x408003C8, 0x92602604,
    0x08300312, 0x4DBDC10B, 0xC18E2530, 0xC3021810, 0x24381962, 0xC9029061, 0x4C443A64,
    0x84890104, 0x66269249, 0xE9117062, 0x12089791, 0x304ED88F, 0xCA643130, 0xCDB02264,
    0x28912269, 0x022C8CFF, 0x85C25202, 0xC2426984, 0x21309482, 0x810FE111, 0x82FBDEEF,
    0x5EDBDEE7, 0xAF12F02C, 0x18C4C451, 0xE1F1A0CC, 0x628C5E25, 0x80CC510C, 0xF10DEBC6,
    0x98A83182, 0xF89A00AC, 0x6A01F887, 0xD0095830, 0x0F003F10, 0x42F0048C, 0xC131003E,
    0x5886F00B, 0xB262028C, 0x0DE05C5E, 0x806A28BE, 0x5E0E18C9, 0x93C7C158, 0x2625E254,
    0x0AC7E21E, 0xE1587C16, 0xC45907C5, 0x1DEF7BCC, 0x7EF7BBE0, 0xE140F859, 0x60A82838,
    0x81C92794, 0x283C3E3F, 0xE1F13114, 0x641648C7, 0x1F0FD231, 0xD43C7838, 0x33B24F00,
    0xFA8F8039, 0xB13007C8, 0x81E200F8, 0x540E0098, 0x01C0A800, 0x0002C0C0, 0x00000000,
    0x00000000, 0xBF000000, 0xF7BDEF7B, 0xBDEF7BDE, 0xE7B00003, 0x39CE739C, 0x7DEB910B,
    0xDF7DF7DF, 0xA800DE17, 0x46801722, 0x7A835803, 0x0345E200, 0x00678378, 0xC01A24E4,
    0xA804CC1B, 0x8D005E22, 0x20E60037, 0x03468017, 0x003C60E8, 0x74017139, 0xF1800CF0,
    0x7DF7DE20, 0xF37DF7DF, 0xCE739A85, 0x008CE739, 0xF7BDC600, 0x0FEF7BDE, 0x9CE67800,
    0x7DEFC373, 0x000177DF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xF7BF0000, 0xCF05DF7D, 0x006E739C, 0x00127BDE, 0x400688BF,
    0x4000CF4E, 0x57800687, 0xE958003D, 0x26368005, 0x01A19E00, 0xA00345A0, 0xBC004CCA,
    0x9C8007E2, 0x2FC000E6, 0xAA720034, 0x06874002, 0x0098D780, 0x0007E958, 0x9E00172D,
    0xB4000DE1, 0x59540068, 0xF7BDEE39, 0x007F7BDE, 0xCE739CC4, 0xF7DF7C81, 0x00001F7D,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xFBEF9000, 0x9883EFBE, 0x0039CE73, 0x000A2000, 0x00037DF0, 0x002715BC, 0xFCCE6730,
    0xE71D5003, 0xC803E39D, 0x5BC37E2F, 0xA271034F, 0x26B97C1F, 0x105CC6F8, 0xADE07A37,
    0xE2FC817A, 0x0FCCE69F, 0xDC4E3AA0, 0xF7BDEF7B, 0xBDEF7BDE, 0x0000BEF7, 0x00000000,
    0x0CFD7DF8, 0xF6FACF98, 0x25545FDD, 0xFDFDE3C6, 0x1BDFD9EF, 0xF7BDEEFC, 0x0DFF7BDE,
    0xD87D7200, 0xE739CE73, 0xF7AC93C0, 0xDDF7DF7D, 0x44C00589, 0xF7A80002, 0x7DF7DF7D,
    0x9CDFE827, 0x1339CE73, 0x1F0002C6, 0xF7BDFF9E, 0x13783C16, 0x100240C0, 0x583C0018,
    0xEFD1FC00, 0x84EFBEFB, 0xE739C839, 0x33FE099C, 0xF7BBF000, 0x0000003E, 0x00000000,
    0xF77C0000, 0xAFCF7BDE, 0x57EA2000, 0x339CE6A0, 0xDF79C171, 0x00A8BDF7, 0x60048190,
    0x00000000, 0x00000000, 0x00000000, 0x90000C00, 0xBEF38481, 0x0151B7EF, 0x027CE735,
    0xBF510017, 0xEF7BEF42, 0x7BDEF7BD, 0x0006B7C3, 0x7398C1F2, 0x54E739CE, 0xEFBEFDC8,
    0x1BEFBEFB, 0x45C00981, 0x00001002, 0x00000000, 0x04000000, 0x00917000, 0x0A001E04,
    0xEFBDFFF1, 0x1BEFBEFB, 0xCE6B20F9, 0x7C9CE739, 0x8000006B, 0x001DEF7B, 0x00000000,
    0xFF400000, 0x5EF7BDEF, 0x80095BE0, 0x9CE6A0F1, 0xDF9E1413, 0x382FBEFB, 0x062400D8,
    0x00000000, 0x00000000, 0x04800000, 0x38007120, 0xC85000A8, 0x0BEFBDFD, 0xE67C83C6,
    0x12B7C09C, 0xDFFDE200, 0xF7BDEF7B, 0x0267B0BF, 0x789997B2, 0xF04F9CE6, 0xFBDF98DA,
    0x4624DFBE, 0xB98B82E0, 0x00080030, 0xFBCE1307, 0x8937EFBE, 0x9CE73501, 0xC400160F,
    0xEF77C17A, 0x269EF7BD, 0x01858000, 0xB002E040, 0xFBEF7F31, 0xCCDBEFBE, 0xE739CD44,
    0x4CF60F9C, 0xFEFC8000, 0x6F7BDEF7, 0x0024FB80, 0x39CD449E, 0x7EA3F827, 0x01BEFBEF,
    0xF7BC0D81, 0xF7BE89DE, 0xF600003E, 0xCC60739C, 0xFBCF2739, 0xEF7E0FBE, 0x00000EFB,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xDE200000, 0xDEF7BDFF,
    0xC3BDEF7B, 0x2780099E, 0x67399E31, 0xBFB3C6C0, 0x24077DF7, 0x00300036, 0x00000000,
    0x00000000, 0x00000000, 0x0B890006, 0xBDFCC6C0, 0x780EFBEF, 0x9CE73512, 0x004CF601,
    0xEF7FF788, 0x0026F7BD, 0x22640000, 0xFBEFBEF1, 0x303236FE, 0x02B39CE7, 0x78C4003F,
    0xF7BDFFA7, 0x00000001, 0x00000000, 0xF7BBE000, 0x02F77BDE, 0xD41BA300, 0x2626739C,
    0xBEFBEF38, 0x4400311B, 0x00000262, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xFDEF7B8C, 0x00000001, 0xF7BDC600, 0xE00000FE, 0x7BDEF7BD, 0x00007DEF,
    0x6739CF60, 0xF7DE7800, 0x0000077D, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xDF79E000, 0xEF381DF7, 0xE7B1BEFB, 0x7350339C, 0x000009CE, 0xFF7BDEE2, 0x88000000,
    0x03FDEF7B, 0xBDEF7FE0, 0x1F7BDEF7, 0xCE733C00, 0x7DFA0339, 0x001DF7DF, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xDFA22640, 0x3C36FDF7, 0x09F39CCF,
    0x7E8C00CC, 0x06F7BDC5, 0x00000000, 0x00000000, 0xEEFC0000, 0x57C00DBD, 0x1FA00D3C,
    0x2E6007C6, 0x9AA00FF2, 0x5F5001B8, 0x7C012F88, 0x58001741, 0x00480013, 0xF000B3C0,
    0xD5800BA2, 0xF58012F8, 0xF8003710, 0x1001F925, 0x8017A837, 0x004E61FC, 0xEF1E899E,
    0x7BDEF7BD, 0x800000EF, 0x019CE73D, 0xF7DF79E0, 0x0000001D, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xEF3C0000, 0xEF03BEFB, 0xEC6FBEFB,
    0x3C0CE739, 0x0009CE73, 0xF7BDEF70, 0xFDEF7BDE, 0xF5C80037, 0xE30F9883, 0xDE312A09,
    0x2C6BE797, 0xC0090A00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xF7BFF000, 0xBDEF7BDE, 0x30002F77, 0x39CD41BA, 0xF3826267, 0x11BBEFBE, 0x01122009,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xEFD40000, 0xBDEF7BDC,
    0x57EA3777, 0xE3EB1801, 0xE7399E22, 0xE83C33C0, 0x9DDF7DEF, 0x581408A8, 0x01806038,
    0x00000000, 0x00000000, 0x00000000, 0x11018060, 0x3C70B028, 0xDF7DEFE8, 0xF117289D,
    0x6A0739CC, 0x20055FA8, 0xF7BDCFD7, 0xBDEF7BDE, 0x30002F77, 0xE733C1BA, 0xE033127C,
    0xFBF7DF7D, 0xF000F107, 0x00800120, 0x00000000, 0x00000000, 0x00000000, 0x241E0008,
    0xBEFBEFBC, 0x9E07883B, 0x981CE739, 0x0DD18001, 0xDEF7BDF6, 0x000017BB, 0x00000000,
    0x10000000, 0x7BDEFFEF, 0xDEF7BDEF, 0x00133FE1, 0x9CE63035, 0x7ED46C13, 0x8105F7DF,
    0x0122400D, 0x00000000, 0x00000000, 0x20000000, 0xFE040091, 0xBF3C6C00, 0x505F7DF7,
    0x9CE73503, 0x00267FC0, 0xF7BFFBC4, 0x00017BDE, 0x00000000, 0x00000000, 0xBDCFB588,
    0x7F7BDEF7, 0x0008F772, 0x9CCF126F, 0xA3B9CE73, 0xF7DEFFF0, 0x2577DF7D, 0x00C00062,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xBDEE77E3, 0xEF7BDEF7,
    0x002BFE43, 0x739A83A0, 0x9CE739CE, 0xBEF7E314, 0xEFBEFBEF, 0x001E083B, 0x56480000,
    0xFF88A002, 0x7BDEF7BD, 0x1000BF1A, 0x05FF25EB, 0xEFC64CC0, 0xBDEF7BDE, 0x83C0028D,
    0x00018003, 0xFBD47078, 0xBEFBEFBE, 0x8CA2FBEF, 0x739CE739, 0x04CC99CE, 0x782F5C80,
    0x002FBDEF, 0x00000000, 0xEF7BDE00, 0xDEF7BCC4, 0x3D80001B, 0x73181CE7, 0xEF3D39CE,
    0xDE783EFB, 0x00DF7DF7, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x4003C1C0,
    0x0177EC60, 0x0DCC6056, 0xE0257F88, 0xC07DEF7F, 0x00FBDEFF, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x80000000, 0xFE160000, 0xEFCC0C00, 0xC077DF7D, 0xE733C417,
    0x7FF9019C, 0xEF750002, 0xF7BAC03D, 0x80620AEE, 0x050A7E3F, 0xC362E50A, 0x3C287208,
    0x88A22850, 0x363F8D81, 0x28510F0A, 0x60782A6C, 0x7F030F24, 0x28D94450, 0x30F0C7F0,
    0x2BB05412, 0xFD43C028, 0x31FC03F1, 0xA0280189, 0x0B807200, 0xBE0A07E0, 0xFC00EF7B,
    0x5899BDEE, 0x083C8980, 0x122520C0, 0xE4134C10, 0x4A409FBD, 0x0E058B1C, 0x448C9B09,
    0x1E0F4930, 0xC6061248, 0x0730E4C4, 0x5192486C, 0x31249E3C, 0xE2DCBF89, 0xB1E044CF,
    0x09121E1E, 0x8481C132, 0x4C24247F, 0x484C1698, 0x38921218, 0xCF049EF7, 0x89A3B7BD,
    0x59B64D06, 0x1C9D033C, 0x4C65C1BC, 0x8CBE40D6, 0x583643A9, 0x01C55E83, 0x0359A25C,
    0x03641630, 0xE003E178, 0xC6003785, 0xDC01F884, 0x014F0F10, 0xE0BFD06B, 0x6632F905,
    0x6F0BE4BC, 0x1664ACD0, 0xE342A8B3, 0xF0BC4D15, 0xBDCFD914, 0xDEF026F7, 0x1E04F7FB,
    0xF85878A0, 0x7C7E4A81, 0xC67F0918, 0x581E2460, 0x87E1F07C, 0x6260B10A, 0x880A8724,
    0x807143C2, 0xB213CF83, 0x71C82780, 0xBE160079, 0x30F803E2, 0x918048C3, 0x83E003E0,
    0xA84C0058, 0x070A2000, 0x00590600, 0xC000F0F0, 0x70007C93, 0x28C004A8, 0x11F000FE,
    0xA8B1000B, 0xBDEE7800, 0xEF7BDEF7, 0x000FF7BD, 0x9CE739CC, 0x8CF03E73, 0xF7DF7DF7,
    0x80D9137D, 0x1C02F0B1, 0x24E8053C, 0xD131807F, 0xF3C1B801, 0x7E20D600, 0x01D17C80,
    0xC04D4138, 0xC80BC41A, 0xDE026F17, 0xF7DF79C0, 0x82AEDF7D, 0x739CE739, 0x0000013E,
    0x0BEE77F3, 0x192DFFC6, 0xF634FF90, 0x710DE1BF, 0x12B14412, 0x00001C48, 0x00000000,
    0x00000000, 0x0588A004, 0xA8074BE4, 0x204DF11D, 0xFF301319, 0x8C02FF91, 0x28017C57,
    0x00200162, 0x00000000, 0x00000000, 0x4C800100, 0x3D4D00FE, 0xF88DE780, 0xBCC1BFCE,
    0xDC63235D, 0x000003FB, 0x00000000, 0x00000000, 0x00000000, 0xFFEF7180, 0xCE46404D,
    0x3FF1837F, 0x6B017ACD, 0x87E00732, 0x0031201F, 0x00000000, 0x00000000, 0x0F001200,
    0xC43BC00F, 0x997F880B, 0x9906202F, 0xBF996FC0, 0x05E25D04, 0x09003C3C, 0x00000000,
    0x00000000, 0x20040000, 0x197C81B1, 0xFFFFE313, 0x1C83FA97, 0x017EFE63, 0x0F77B9D6,
    0x91D91BDC, 0x91E5FE39, 0xFFFF18F1, 0xF3FFDF8A, 0x457A3E39, 0xBDC65CC6, 0x0000FEF7,
    0xFBDEF718, 0xF7BDC603, 0x000000FE, 0x00000000, 0x00000000, 0x0002F700, 0xEF2FBF64,
    0x35EE66FB, 0x78CE7327, 0x2EA1C002, 0x6C91DEF7, 0x00000000, 0x00000000, 0x40000000,
    0x9E1C07F2, 0x3C77BDCB, 0x9AF72001, 0xC8673993, 0xF7DE5F7E, 0xFE60004D, 0xDEF7BDEF,
    0x26F587FB, 0xE631B200, 0x783E739C, 0xDF7DFB50, 0x1C6C6DF7, 0x00026000, 0xFE000000,
    0xBDEF7D85, 0xE00005F7, 0xCE733C49, 0xE27A3739, 0x7DF7DF7D, 0x0000001F, 0x00000000,
    0x00000000, 0x7DF7DE00, 0xDF7DF7DF, 0xE7399E01, 0x09CE739C, 0xEF738800, 0xDEFFC07D,
    0x303851DB, 0x4F179F12, 0x31A4F0A0, 0x070FC288, 0xC8390E1F, 0xF09E0AC2, 0x445883E0,
    0x7C1311F9, 0x015839B8, 0x7C1EA0C6, 0x19788F80, 0xE082B003, 0x31058803, 0x01307C01,
    0x7EA1AFD6, 0x0AA704BF, 0xF7805546, 0x0EF7D85E, 0xDEF00000, 0x01DEFB0B, 0x13321322,
    0xCE1FFFE8, 0x00003FFF, 0x005EF758, 0x80000000, 0x0005EF75, 0xF7580000, 0x0000005E,
    0x77EA0000, 0xDEF7BDEE, 0x055FA8BB, 0xCE678D00, 0x621CE739, 0x7DF7BF30, 0x892DF7DF,
    0x8006000D, 0x5801FC11, 0xDEF7BDD4, 0x00EF05F3, 0x0731F3C4, 0xBA9A1A80, 0x7E1FDEF7,
    0x0543F823, 0xC0C0C009, 0x8AFE4886, 0x77DF7BE7, 0x9E0E8F13, 0x69D26739, 0x2FC007FC,
    0x7BDEFB18, 0x002E47EF, 0x1801704F, 0x04830024, 0x7BC704F0, 0xDEF7BDEF, 0xE000788F,
    0x39CE7B4D, 0x7E739CE7, 0x3EF7B8CB, 0x03FBDFF8, 0x4E739880, 0x646E733C, 0xE7BDFFEF,
    0xF7304DFF, 0xE473231A, 0xC7646EF3, 0xFFFF9FFC, 0xCD1CBF7F, 0xF04DF313, 0x0D6C98DC,
    0x39862B90, 0xDEF7D8C2, 0x0F94DFCB, 0x97BDF467, 0x8C8C7069, 0xC0845205, 0x00060400,
    0x040005C6, 0x00000000, 0x18182000, 0x18437180, 0x1C080B19, 0x2F7BE8CE, 0xD8C3E429,
    0x32CBDEF7, 0x5C0031AC, 0xE300D6CB, 0x7EA334C9, 0xF7F5C815, 0x3BF51FE1, 0xC77FDEF7,
    0xFBEE30B3, 0xD678E654, 0xBDEE30FE, 0x003DDEF7, 0x39CC438C, 0xDF299167, 0x087F7DF7,
    0x5EF7BFF5, 0x9E012FC8, 0xFC273510, 0x85F7BF99, 0xFE080FE0, 0xF7BACD80, 0xFC001CC2,
    0xCE739CD7, 0x58340339, 0x7C0FDC81, 0x22C7718D, 0xFCC233F6, 0x3D8CFE8F, 0xF1DEB6E6,
    0x7C7FC65F, 0x660F472F, 0xFCBF07CC, 0x2FD6A79A, 0xA76B5DC8, 0xC45DACDF, 0xDBC38E6F,
    0x1DBC0BF9, 0xEB00BF58, 0xF7ADFD40, 0x7DF7DF7D, 0x737DF7DF, 0x9CE739CF, 0x0339CE73,
    0xBDEEFC00, 0x1B7BDEF7, 0x00000000, 0x9DD50000, 0xFBEFBEF5, 0xBEFBEFBE, 0x398EFBEF,
    0xCE739CE7, 0x009CE739, 0xB9DFCC00, 0xDC8137FF, 0x3DEE7BFF, 0xFD6F21BB, 0x5EBB5C8A,
    0x7BDEF5BC, 0xB38DFDEF, 0xBCCD3D4A, 0xDF3357F7, 0x7280576B, 0x0FE3153C, 0x98252B94,
    0x84C6FEF7, 0xFBDE63FC, 0x7FCA531B, 0x53D72805, 0xC803F951, 0xDDEA72F7, 0x59FFEC3F,
    0x9E9FFE45, 0xC2F57D64, 0xB9EFFFF8, 0xEFC6ECF7, 0xBDEF7BDE, 0x003BDEF7, 0xCE739EC0,
    0x739CE739, 0x7BDCF786, 0xCD65DDEF, 0x3E34CC88, 0xFFFFEF9B, 0x83C9A897, 0x00000024,
    0x00000000, 0xF9878593, 0x0EF7BDE7, 0x66576639, 0x882E78E6, 0x00005F7B, 0x58000000,
    0x78FEFBEF, 0x737DF7DE, 0xC61F39CF, 0x0006739C, 0x0F7BDDF8, 0x077BDEF3, 0x00000000,
    0xDC400000, 0xB00002FB, 0xDF7DF7DE, 0xF7DF7DF7, 0x9CE73DCD, 0xE739CE73, 0xF710000C,
    0xE27F7BDE, 0x9A9E739C, 0x0BAE2222, 0xEF7136FE, 0xE73887AA, 0xF5C442A9, 0xEE277F07,
    0x8CE577BD, 0xFF39CE73, 0xF7BDEE30, 0x3CE738C7, 0xEB888935, 0xCF30BF82, 0x6D5F2BBD,
    0x8C8FF39F, 0x0584111C, 0xEF7BA800, 0xCE738DFD, 0xD443E739, 0x7EB3F77C, 0x39DEFCE7,
    0xD4620AEC, 0xDFFEDF3C, 0xF5837FB3, 0x7BDEF7BF, 0x5977BDEF, 0x1788009D, 0x0000CC00,
    0x4DEFB01B, 0x0000004C, 0x00980000, 0x660006C0, 0x00688000, 0x0A9EFE60, 0x7BF7D400,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x7BDC6000,
    0x80000FEF, 0x1137BDDF, 0xFC060789, 0xDEF71961, 0x00829C61, 0x00000000, 0xFFECB758,
    0xED9CE73A, 0x7BDEF73D, 0x8066B0F7, 0x3989B7F1, 0xF3263107, 0xFE26377D, 0x00000048,
    0x0400C000, 0x3C98919B, 0x03CC6EF7, 0x6B7EA350, 0xFF6739CE, 0x702A84AC, 0x0B7E2176,
    0x19937C6E, 0xC6FE62FD, 0xCC7B1AFB, 0xE6BB505F, 0x3FAAF727, 0xAE858DE2, 0x8FDB3C11,
    0xF7866BB1, 0x9FF34DF3, 0xD8E77AFD, 0x0B7D79E5, 0x2EE44FF5, 0xB5817FFC, 0xFBDEE213,
    0x719DF400, 0xD663001E, 0x6B400314, 0x07359800, 0x01B3A200, 0x6001A3A0, 0xA0007ACC,
    0x598005E3, 0xD3B9E133, 0x83674577, 0x8E739CE7, 0x4444068E, 0xB0F598C4, 0xE3701FEF,
    0x6B0019E5, 0x091DE4CC, 0x8D4D9BC4, 0xBA347406, 0x1EB3180A, 0xC6E0346A, 0xAC01AE8B,
    0xEEA31331, 0xCDE2BCCD, 0x96F7BD86, 0x8C1A2FDB, 0xDC630631, 0xF7801F7B, 0x003CE33E,
    0x0C47ACC6, 0x005E3700, 0x004DE358, 0x000B9BC4, 0xC6001A3A, 0x6E0007AC, 0xC6B000BC,
    0xF4EEB09B, 0x0B9BC5FD, 0xD9CE73AC, 0x8880D17E, 0x9EA7A888, 0x2777BDFF, 0xE7DAF1D0,
    0x1AC1A3BC, 0x69888A6F, 0x40B9BE41, 0x1978E809, 0x179FDEE7, 0x47453CF5, 0xF07FFDEF,
    0x639A6346, 0x09BE5624, 0x01737C80, 0x8DE11119, 0x39CFB017, 0xF7BDEE27, 0x4677E04C,
    0x1AFE739C, 0x8887353C, 0x740627C8, 0xA0633036, 0x9BDD61B3, 0x81EB318D, 0xD1FC7675,
    0x54F1881A, 0x0007359A, 0xE00D9D11, 0x20D1D189, 0xDE37BDEE, 0x7101EB31, 0xDD6739CE,
    0x44444068, 0x388731CC, 0xB3A205F7, 0x34740179, 0xCC601731, 0x00FD787A, 0x99CC5E37,
    0x59331AC0, 0x6CDE205E, 0xBF006FBC, 0xBDF44468, 0xF53D4FE6, 0xAFDEF620, 0x82F1D5E7,
    0x2463C631, 0xEF7BDCF0, 0x0000000B, 0x73C00000, 0x002FBDEF, 0x9E0024F9, 0x55C005EF,
    0x80041800, 0xEF580451, 0x8829FDFB, 0x84F9CF7F, 0x4425F868, 0xC1F207FD, 0xC06FCF77,
    0x2400F3C2, 0x002000FE, 0xC2800E04, 0xC41C800C, 0x7DF7DF7E, 0x8375F7DF, 0x39CE739C,
    0x05FE34E7, 0xC0003500, 0xD6FEEFBB, 0xA78C0093, 0xF7007FBF, 0x11ACF6F7, 0xDEB9AC80,
    0xF0013EDF, 0x0DEF7BDE, 0x003C0780, 0x0C00C183, 0x8A0363F2, 0xFE00F0F5, 0x2C091264,
    0x440B044E, 0xE0D878F2, 0xB01E4A41, 0x60187089, 0xE03030F0, 0x8C289921, 0x1FC190E0,
    0x8592060F, 0x77BDDF8B, 0x8003C190, 0x39CE4187, 0xAC2B6167, 0xC6DF7DF7, 0xF0309030,
    0x2480E3F8, 0x1603C2C6, 0x12A2001E, 0x3BFD9A88, 0xEF80B7E7, 0x000AAEF7, 0xDFD59EB2,
    0xFFDF807E, 0x067AF5F7, 0xDEF7BDE0, 0x780F001B, 0x01830600, 0x06C7E418, 0x01E1EB14,
    0x1224C9FC, 0x16089C58, 0xB0F1E488, 0x3C9483C1, 0x30E11360, 0x6061E0C0, 0x513243C0,
    0x8321C118, 0x240C1E3F, 0x7BBF170B, 0x078320EF, 0x9C830F00, 0x56C2CE73, 0xBEFBEF58,
    0x6120618D, 0x01C7F1E0, 0x07858C49, 0xDEF03C2C, 0x007FEF7B, 0x8BF9A7B1, 0x9F304FFC,
    0xB9ED6FD9, 0xDF7AC16E, 0x5BEFBE45, 0xBDE00000, 0x001BDEF7, 0x0600780F, 0xE4180183,
    0xEB1406C7, 0xC9FC01E1, 0x9C581224, 0xE4881608, 0x83C1B0F1, 0x13603C94, 0xE0C030E1,
    0x43C06061, 0xC1185132, 0x1E3F8321, 0x170B240C, 0x20EF7BBF, 0x0F000783, 0xCE739C83,
    0xEF5856C2, 0x618DBEFB, 0xF1E06120, 0x8C4901C7, 0x3C2C0785, 0xEEEF7DCC, 0x3C1BDCF4,
    0xEB1CC8EF, 0xF8333F7F, 0xF7FFFCE7, 0xD17EACAA, 0xBFD197FF, 0x00016FFF, 0xF7BDEF00,
    0xC07800DE, 0x0C183003, 0x363F20C0, 0x0F0F58A0, 0x91264FE0, 0xB044E2C0, 0x878F2440,
    0xE4A41E0D, 0x87089B01, 0x030F0601, 0x89921E03, 0x190E08C2, 0x2060F1FC, 0xDDF8B859,
    0x3C19077B, 0xE4187800, 0xB616739C, 0xF7DF7AC2, 0x09030C6D, 0x0E3F8F03, 0x3C2C6248,
    0xEE31E160, 0xF7FE0FBD, 0x880000FE, 0x33C4E739, 0xEFBE46E7, 0xBBEFD03B, 0x7BC00000,
    0x0037BDEF, 0x0C00F01E, 0xC8300306, 0xD6280D8F, 0x93F803C3, 0x38B02449, 0xC9102C11,
    0x078361E3, 0x26C07929, 0xC18061C2, 0x8780C0C3, 0x8230A264, 0x3C7F0643, 0x2E164818,
    0x41DEF77E, 0x1E000F06, 0x9CE73906, 0xDEB0AD85, 0xC31B7DF7, 0xE3C0C240, 0x1892038F,
    0x78580F0B, 0x7BDEFB90, 0xC33C02CF, 0x005E33B9, 0x000011C2, 0x008E9040, 0x53BFF4AC,
    0x02402203, 0x80183062, 0x80D8FC87, 0x00787AC1, 0x0489327F, 0x02C1138A, 0x361E3C19,
    0x03C94858, 0x0C3844FE, 0x18187830, 0x144C90F0, 0xE0C87046, 0xC903078F, 0xDEEFC5C2,
    0x01E0C83B, 0xE720C3C0, 0x15B0B39C, 0x6FBEFBD6, 0x18481863, 0x4071FC78, 0x80F0A312,
    0xDEF70785, 0xF7BDEF7B, 0x0123FBDE, 0x24CC4100, 0x33739CE7, 0xBE64EF19, 0x922EFBEF,
    0x00170009, 0x24002410, 0x00726000, 0xFBE60060, 0x9090442E, 0x000C6E73, 0x8B77C4C0,
    0x0087F7BA, 0x999E2400, 0xEF7E2E00, 0x00089004, 0x93000104, 0xBEFBE601, 0xC80492EF,
    0x81DCE739, 0x3BE20005, 0xEF7BDEF7, 0x4FFE3FBD, 0x7883D000, 0xCE739CE6, 0xEF7F41ED,
    0xBBEFBEFB, 0x90098922, 0x00000078, 0x00000000, 0x00000000, 0x00000000, 0x40000000,
    0x499001E0, 0xFC1E003C, 0xDF7DF7BE, 0x24DE5DF7, 0x9CE7399E, 0x04FD8B73, 0x853BE200,
    0x07F7BDFF, 0x0F000910, 0xE0001800, 0xA016000F, 0xFBBC0006, 0x093D6FEE, 0xFDFD3C60,
    0xDBDFDC03, 0x590046B3, 0x7DBFBD73, 0x7BDEEB02, 0xDEF7BDEF, 0x00002F7B, 0x739CE731,
    0xBC6139CE, 0xEFBEFBEF, 0x0000BEFB, 0x00000000, 0xE4000000, 0xBBDEF7BD, 0xE6200000,
    0x01CE739C, 0xDF7DF78C, 0x00002DF7, 0x00000000, 0x18000000, 0xEFBEFBEF, 0xC42FBEFB,
    0x39CE739C, 0x000004E7, 0x35104A88, 0x6FCE77FB, 0xAEF7EF81, 0xCF59000A, 0xE03F6FEA,
    0xBD7DFFF7, 0xF7BAC19E, 0xBDEF7BDE, 0x000BDEF7, 0xE739CC40, 0x184E739C, 0xEFBEFBEF,
    0x002FBEFB, 0x00000000, 0x00000000, 0xF7BDEF79, 0x8800002E, 0x739CE739, 0xDF7DE300,
    0x000B7DF7, 0x00000000, 0x00000000, 0xEFBEFBC6, 0x0BEFBEFB, 0x739CE731, 0x000139CE,
    0xFDEF7BE8, 0x78973027, 0xAF9809E4, 0xFC657FF8, 0xE1BFBA21, 0xAC2BFDD7, 0xAD6B0AB5,
    0xF7BDEEB2, 0xBDEF7BDE, 0x100002F7, 0xE739CE73, 0xFBC6139C, 0xBEFBEFBE, 0x00000BEF,
    0x00000000, 0xDE400000, 0x0BBDEF7B, 0xCE620000, 0xC01CE739, 0x7DF7DF78, 0x000002DF,
    0x00000000, 0xF1800000, 0xBEFBEFBE, 0xCC42FBEF, 0x739CE739, 0xB8C0004E, 0xDFF83EF7,
    0x880003FB, 0x33C4E739, 0xF7DF26E7, 0x5DF7E81D, 0xEF758000, 0x7BDEF7BD, 0x0017BDEF,
    0xCE739880, 0x309CE739, 0xDF7DF7DE, 0x005F7DF7, 0x00000000, 0x00000000, 0xEF7BDEF2,
    0x1000005D, 0xE739CE73, 0xBEFBC600, 0x0016FBEF, 0x00000000, 0x00000000, 0xDF7DF78C,
    0x17DF7DF7, 0xE739CE62, 0x0002739C, 0x778000D4, 0x27ADFDDF, 0xBFA78C01, 0x7BFB807F,
    0x2008D67B, 0xB7F7AE6B, 0x7BDD604F, 0xDEF7BDEF, 0x0005EF7B, 0x06739CC6, 0xEB39CE6A,
    0xE077DF7D, 0x02FBEFBC, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x40000000, 0x0EFBEFBD, 0xDF7DF79C, 0x819CE731, 0x004E739A, 0x04A88000, 0xE77FB351,
    0x7EF816FC, 0x9000AAEF, 0xF6FEACF5, 0xDFFF7E03, 0xAC19EBD7, 0xF7BDEF7B, 0xBDEF7BDE,
    0x7398C000, 0x39CD40CE, 0xFBEFBD67, 0x7DF79C0E, 0x0000005F, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x7DF7A800, 0xBEF381DF, 0x9CE63BEF, 0xCE735033,
    0x7BC00009, 0x01FFBDEF, 0x17F34F62, 0x9F309FF9, 0xB9ED6FD9, 0xEFBD616E, 0x2DF7DF22,
    0xF7BAC000, 0xBDEF7BDE, 0x000BDEF7, 0x0CE7398C, 0xD6739CD4, 0xC0EFBEFB, 0x05F7DF79,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x80000000, 0x1DF7DF7A,
    0xBEFBEF38, 0x0339CE63, 0x009CE735, 0x7DEF7180, 0x07F7BFF0, 0xCE731000, 0x4DCE6789,
    0xD03BEFBE, 0x0000BBEF, 0xEF7BDEEB, 0x7BDEF7BD, 0xE630002F, 0x7350339C, 0xFBEF59CE,
    0x7DE703BE, 0x000017DF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x7DEA0000, 0xBCE077DF, 0x398EFBEF, 0x9CD40CE7, 0xD6000273, 0x7BDEF7BD, 0x01BFBDEF,
    0x007FD400, 0x419CE739, 0xEFBE605C, 0x2460EEFB, 0x00285900, 0x000011FC, 0x0FCF0000,
    0x05DF7DF3, 0x739C81EC, 0xE000006E, 0xF7BDD46D, 0x00000007, 0x00000000, 0x20E00000,
    0x0785C800, 0xDF7DF7CC, 0x72018C1D, 0xB88339CE, 0x03FEA000, 0x3BBBDF73, 0xCF06F73D,
    0xFAC7323B, 0xFE0CCFDF, 0xBDFFFF39, 0xF45FAB2A, 0xEFF465FF, 0x00005BFF, 0x0DBDEEFC,
    0x4C077BDC, 0x00262000, 0x630001F0, 0x002F0000, 0x20C00150, 0xE4BF0026, 0x2C8FC003,
    0x01706600, 0xE004A930, 0x3E4007C3, 0x621C004C, 0x0F835002, 0x00031F00, 0x09800033,
    0x0001BC00, 0x003500A2, 0xFEEFBBC0, 0x8C0093D6, 0x007FBFA7, 0xACF6F7F7, 0xB9AC8011,
    0x013EDFDE, 0xF7BDFFAC, 0x037E7BDE, 0xF510276F, 0xE6A2634F, 0x3EBC419C, 0xDF7DEFD4,
    0xB83C541D, 0xF02A0F90, 0x0000C480, 0x00000002, 0x00000000, 0x00000000, 0x00000000,
    0x03C08800, 0x81C1E312, 0x3C3EB07C, 0x777DF7BF, 0x6A263950, 0xF34419CE, 0x3FEA0276,
    0x40951000, 0x39DFECD4, 0xBF7C05BF, 0x90005577, 0xF6FEACF5, 0xBFFEFC03, 0xC033D7AF,
    0xEF7BDFFA, 0xF037E7BD, 0xFF510276, 0xCE6A2634, 0x43EBC419, 0xDDF7DEFD, 0x0B83C541,
    0x0F02A0F9, 0x20000C48, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x203C0880,
    0xC81C1E31, 0xF3C3EB07, 0x0777DF7B, 0xE6A26395, 0x6F34419C, 0x03FEA027, 0xFEF7BDF4,
    0x78973013, 0x5F3009E4, 0xF8CAFFF1, 0x86FEE883, 0x60AFF75F, 0x6B5855AD, 0xBDFFAC15,
    0x7E7BDEF7, 0x10276F03, 0x62634FF5, 0x788339CC, 0xBEFDA87D, 0x1E2A0EEF, 0x1507C85C,
    0x00624078, 0x00000100, 0x00000000, 0x00000000, 0x00000000, 0xE0440000, 0xE0F18901,
    0x1F583E40, 0xBEFBDF9E, 0x131CA83B, 0xA20CE735, 0xF5013B79, 0xDEFB981F, 0x37B9E9DD,
    0x3991DE78, 0x667EFFD6, 0xFFF9CFF0, 0xFD5955EF, 0xA32FFFA2, 0x02DFFF7F, 0xBFF58000,
    0xCF7BDEF7, 0x04EDE06F, 0x4C69FEA2, 0x88339CD4, 0xBDFA87D7, 0x8A83BBEF, 0x41F21707,
    0x18901E05, 0x00004000, 0x00000000, 0x00000000, 0x00000000, 0x11000000, 0x3C624078,
    0xD60F9038, 0xBEF7E787, 0xC72A0EEF, 0x8339CD44, 0x404EDE68, 0xDEE307FD, 0xEF7FE0FB,
    0x9880000F, 0x733C4E73, 0xBEFBE46E, 0x0BBEFD03, 0x7FEB0000, 0x9EF7BDEF, 0x09DBC0DF,
    0x98D3FD44, 0x106739A8, 0x7BF50FAF, 0x150777DF, 0x83E42E0F, 0x31203C0A, 0x00008000,
    0x00000000, 0x00000000, 0x00000000, 0x22000000, 0x78C480F0, 0xAC1F2070, 0x7DEFCF0F,
    0x8E541DDF, 0x06739A89, 0x809DBCD1, 0x81660FFA, 0xC2BF7CC5, 0xE238BFD7, 0x93C7BF2B,
    0x4BB7C4BD, 0x625E87FE, 0x89D03BC8, 0xD12FC25F, 0x4B195F85, 0x8CAFA6FC, 0xD5BCBF7F,
    0xBE61FE39, 0x0FFBCA9E, 0x0007DFCC, 0xF987FBEC, 0x7BDEF7BF, 0xAC687FEF, 0x1EA90137,
    0x7398C5F2, 0xA09E1626, 0x2FBEFBF6, 0x038FE0C6, 0x13021E17, 0x404C1055, 0x219E0003,
    0x1F1B4001, 0x02F4AC00, 0x01EABC40, 0x000D0E80, 0x000CF4CF, 0x2000D168, 0x213004CC,
    0x8680801A, 0x988FE083, 0x27878588, 0xEFBEFD88, 0xC060C60E, 0x71267398, 0xF50121D1,
    0xFCF2E41F, 0xDEF7BDEF, 0x6F981BFB, 0x350000FF, 0xEFBBC000, 0x0093D6FE, 0x7FBFA78C,
    0xF6F7F700, 0xAC8011AC, 0x3EDFDEB9, 0x6F7BFF01, 0xF7BDDF80, 0x00000001, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x06000000, 0x4C131300, 0x950B81CC,
    0xBF50F8C4, 0x943F7DF7, 0x6739A89C, 0x4EDE3F10, 0x00076A20, 0x9A8812A2, 0xB7E73BFD,
    0xAEF7EF80, 0x9EB2000A, 0x807EDFD5, 0xF5F7FFDF, 0xF7FE067A, 0x7BBF00DE, 0x000003EF,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x2626000C,
    0x17039898, 0xA1F1892A, 0x7EFBEF7E, 0x73513928, 0xBC7E20CE, 0x0ED4409D, 0xEF7BDEF0,
    0xA7B1007F, 0x4FFC8BF9, 0x6FD99F30, 0xC16EB9ED, 0xBE45DF7A, 0x00005BEF, 0x00DEF7FE,
    0x03EF7BBF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x000C0000, 0x98982626, 0x892A1703, 0xEF7EA1F1, 0x39287EFB, 0x20CE7351, 0x409DBC7E,
    0xBDC60ED4, 0xDEFFC1F7, 0x3100001F, 0xE6789CE7, 0x7DF7C8DC, 0x177DFA07, 0xBDFF8000,
    0xDEEFC037, 0x000000FB, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x09898003, 0x85C0E626, 0xA87C624A, 0x1FBEFBDF, 0x9CD44E4A, 0x6F1F8833,
    0x03B51027, 0x1012A200, 0xCE77FB35, 0xDFBE016F, 0x90002ABB, 0xF6FEACF5, 0x7FFDF803,
    0x2067AF5F, 0x8077BDEF, 0x65FBDEEF, 0xE38503E1, 0x5182A0A0, 0xFE07249E, 0x50A0F0F8,
    0x1F87C4C4, 0xC5905923, 0xE07C3F48, 0x0350F1E0, 0xE4CEC93C, 0x23EA3E00, 0xE2C4C01F,
    0x62078803, 0x01503802, 0x000702A0, 0x00000B03, 0x00000000, 0x00000000, 0xEEFC0000,
    0x00000FBD, 0x00000000, 0xEF7BBE00, 0x0005E7BD, 0xCD407F31, 0x1EA09F39, 0xFDF7DE70,
    0x3C00387E, 0x878003C1, 0x00200048, 0x483C0000, 0x808C1500, 0xF7EFBEF3, 0xE73503E1,
    0x0131827C, 0x7C0FF310, 0xCF7BDEF7, 0x0000001B, 0xCF000000, 0xEF7BDCEF, 0x9E4BE7BD,
    0xE78802AF, 0x9CCF0386, 0x83D7C833, 0xFBEFBDF5, 0x41F811E1, 0x01000121, 0x48000400,
    0x300A2600, 0x06C97DEE, 0x31003300, 0x405EA0E7, 0x664EEFBE, 0x00A1F002, 0xE0000818,
    0x00389000, 0xF180246C, 0xFBC60510, 0x80547FBE, 0xF20CE739, 0x76788007, 0x955BEFC0,
    0x7FA7CC00, 0x405FB3FF, 0x0CC6248D, 0xFBFFDDE0, 0x00075FDF, 0xFC059E39, 0xDEF7BDEE,
    0x000DFF7B, 0xE7B0FD72, 0x81CE739C, 0xBEFBD64A, 0xC4EEFBEF, 0x01226002, 0xBEFBD400,
    0x13BEFBEF, 0x39CE6FF4, 0x63099CE7, 0xCF0F8001, 0x0B7BDEFF, 0x6009BC1E, 0x0C080120,
    0x002C1E00, 0x7DF7E8FE, 0x1CC277DF, 0xCE739CE4, 0x0019FF04, 0xFB318800, 0xFDFCC057,
    0x05577ECF, 0xB224AFF0, 0xDFDE7026, 0x1BFFE73E, 0x046B33C0, 0xBDEF77E0, 0x6FFBDEF7,
    0x87EB9000, 0x739CE73D, 0xDEB2540E, 0x77DF7DF7, 0x13001627, 0xDEA00009, 0xF7DF7DF7,
    0x737FA09D, 0x4CE739CE, 0x7C000B18, 0xDEF7FE78, 0x4DE0F05B, 0x40090300, 0x60F00060,
    0xBF47F001, 0x13BEFBEF, 0x9CE720E6, 0xCFF82673, 0xEF780000, 0x803FF7BD, 0x45FCD3D8,
    0xCF9827FE, 0x5CF6B7EC, 0xEFBD60B7, 0x2DF7DF22, 0xF77E0000, 0xBDEF7BDE, 0xB90006FF,
    0xCE73D87E, 0x2540E739, 0xF7DF7DEB, 0x0162777D, 0x00009130, 0xF7DF7DEA, 0xFA09DF7D,
    0x739CE737, 0x00B184CE, 0x7FE787C0, 0x0F05BDEF, 0x903004DE, 0x00060400, 0x7F00160F,
    0xEFBEFBF4, 0x720E613B, 0x826739CE, 0x60000CFF, 0xA7777BEE, 0x79E0DEE7, 0xFF58E647,
    0x3FC199FB, 0x57BFFFE7, 0xFE8BF565, 0xFDFE8CBF, 0x00000B7F, 0xBDEF7BBF, 0x037FDEF7,
    0xEC3F5C80, 0x739CE739, 0xBEF592A0, 0x3BBEFBEF, 0x489800B1, 0xBEF50000, 0xEFBEFBEF,
    0x739BFD04, 0xC26739CE, 0xC3E00058, 0xDEF7BFF3, 0x026F0782, 0x02004818, 0x0B078003,
    0x7DFA3F80, 0x309DF7DF, 0x9CE73907, 0x067FC133, 0xDEF71800, 0x7F7BFF07, 0x9CC40000,
    0x7399E273, 0x1DF7DF23, 0x005DF7E8, 0xBDEEFC00, 0xFF7BDEF7, 0xFD72000D, 0x739CE7B0,
    0xD64A81CE, 0xFBEFBEFB, 0x6002C4EE, 0xD4000122, 0xFBEFBEFB, 0x6FF413BE, 0x9CE739CE,
    0x80016309, 0xDEFFCF0F, 0xBC1E0B7B, 0x01206009, 0x1E000C08, 0xE8FE002C, 0x77DF7DF7,
    0x9CE41CC2, 0xFF04CE73, 0xFC800019, 0x79EF7BDF, 0x773A4F01, 0x5C2004C5, 0xC0074800,
    0xC677FE93, 0xDEFFE404, 0x7E0BCF7B, 0xEF7BDEF7, 0x0006FFBD, 0x73D87EB9, 0x40E739CE,
    0xDF7DEB25, 0x62777DF7, 0x00913001, 0xDF7DEA00, 0x09DF7DF7, 0x9CE737FA, 0xB184CE73,
    0xE787C000, 0x05BDEF7F, 0x3004DE0F, 0x06040090, 0x00160F00, 0xBEFBF47F, 0x0E613BEF,
    0x6739CE72, 0x000CFF82, 0xF7BDEF70, 0xEF7B9DFF, 0x13E400F9, 0xE731A788, 0xC59C819C,
    0xEFBEFBC4, 0x52FEF38B, 0x4C189024, 0xEB000002, 0x3C03DF7D, 0x39CF5F84, 0x0BFBEF0B,
    0xCC014F91, 0xF27F2C59, 0x9E203F7F, 0xDC12F836, 0x0017CF7B, 0x48000000, 0xCD80300E,
    0xF383DF7A, 0x93CBEFBE, 0xCE42CE62, 0x00EE2739, 0xEF7DE800, 0x7BDEF7BD, 0x00D6F86F,
    0x73183E40, 0x9CE739CE, 0xF7DFB90A, 0x7DF7DF7D, 0xB800B023, 0x00040018, 0x00000000,
    0x00000000, 0x245C0001, 0x80078100, 0xEF7FFC42, 0xFBEFBEFB, 0x9AC83E46, 0x2739CE73,
    0xA0001ADF, 0xFF85BDF7, 0x440037BD, 0x00078002, 0x1FC00018, 0xDF805800, 0x98012AB7,
    0x67FEFF4F, 0x491A80BF, 0xBBC0198C, 0xBFBFF7FF, 0x3C72000E, 0x7FF7880B, 0xDEF7BDEF,
    0x099EC2FF, 0xE2665EC8, 0xC13E7399, 0xEF7E636B, 0x18937EFB, 0xE62E0B81, 0x002000C2,
    0xEF384C1C, 0x24DFBEFB, 0x739CD406, 0x1000583E, 0xBDDF05EB, 0x9A7BDEF7, 0x06160000,
    0xC00B8100, 0xEFBDFCC6, 0x336FBEFB, 0x9CE73513, 0x33D83E73, 0x31880001, 0xFCC057FB,
    0x577ECFFD, 0x24AFF005, 0xDE7026B2, 0xFFE73EDF, 0x6B33C01B, 0xFFDE2004, 0x7BDEF7BD,
    0x267B0BFF, 0x89997B20, 0x04F9CE67, 0xBDF98DAF, 0x624DFBEF, 0x98B82E04, 0x0080030B,
    0xBCE13070, 0x937EFBEF, 0xCE735018, 0x400160F9, 0xF77C17AC, 0x69EF7BDE, 0x18580002,
    0x002E0400, 0xBEF7F31B, 0xCDBEFBEF, 0x739CD44C, 0xCF60F9CE, 0xF7BC0004, 0x401FFBDE,
    0x22FE69EC, 0x67CC13FF, 0xAE7B5BF6, 0x77DEB05B, 0x16FBEF91, 0xFEF10000, 0xDEF7BDEF,
    0x33D85FFB, 0x4CCBD901, 0x27CE733C, 0xEFCC6D78, 0x126FDF7D, 0xC5C17023, 0x0400185C,
    0xE7098380, 0x9BF7DF7D, 0x739A80C4, 0x000B07CE, 0xBBE0BD62, 0x4F7BDEF7, 0xC2C00013,
    0x01702000, 0xF7BF98D8, 0x6DF7DF7D, 0x9CE6A266, 0x7B07CE73, 0x7B8C0026, 0xBDFF83EF,
    0x6200003F, 0xCCF139CE, 0xFBEF91B9, 0x2EFBF40E, 0xFDE20000, 0xBDEF7BDF, 0x67B0BFF7,
    0x9997B202, 0x4F9CE678, 0xDF98DAF0, 0x24DFBEFB, 0x8B82E046, 0x080030B9, 0xCE130700,
    0x37EFBEFB, 0xE7350189, 0x00160F9C, 0x77C17AC4, 0x9EF7BDEF, 0x85800026, 0x02E04001,
    0xEF7F31B0, 0xDBEFBEFB, 0x39CD44CC, 0xF60F9CE7, 0xFBF0004C, 0xF3002556, 0xECFFDFE9,
    0x89235017, 0xF7780331, 0xD7F7FEFF, 0x678E4001, 0x7BDEF781, 0x01F7BDEF, 0xE73D8000,
    0x79E0019C, 0x001DF7DF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xE7800000,
    0xE077DF7D, 0xC6FBEFBC, 0x40CE739E, 0x002739CD, 0xF6631000, 0xFBF980AF, 0x0AAEFD9F,
    0x64495FE0, 0xBFBCE04D, 0x37FFCE7D, 0x08D66780, 0xBDEF7BC0, 0x00FBDEF7, 0x739EC000,
    0xBCF000CE, 0x000EFBEF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF3C00000,
    0x703BEFBE, 0x637DF7DE, 0xA06739CF, 0x00139CE6, 0xF7BDEF00, 0x7B1007FE, 0xFFC8BF9A,
    0xFD99F304, 0x16EB9ED6, 0xE45DF7AC, 0x0005BEFB, 0xBDEF7BC0, 0x00FBDEF7, 0x739EC000,
    0xBCF000CE, 0x000EFBEF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF3C00000,
    0x703BEFBE, 0x637DF7DE, 0xA06739CF, 0x00139CE6, 0x1F7BDC60, 0x01FDEFFC, 0xCE731000,
    0x8DCE6789, 0xA077DF7C, 0x000177DF, 0xEF7BDEF0, 0x003EF7BD, 0x9CE7B000, 0xEF3C0033,
    0x0003BEFB, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xBCF00000, 0x9C0EFBEF,
    0xD8DF7DF7, 0xA819CE73, 0x0004E739, 0xEF7BDC60, 0x05EEF7BD, 0x88BF4600, 0x339CE739,
    0xFBEF90B1, 0x0FFBEFBE, 0x30300062, 0xF7BDDF8D, 0xF2137BDE, 0x05F0005F, 0x339CE731,
    0xDF7DE060, 0x2C077DF7, 0x00010024, 0x00000000, 0x00000000, 0x80002000, 0x36040005,
    0x31FE6244, 0x6EFBEF7F, 0x9A8198C4, 0xF8A62673, 0xDD18013F, 0xDDDEFB98, 0x7837B9E9,
    0xD63991DE, 0xF0667EFF, 0xEFFFF9CF, 0xA2FD5955, 0x7FA32FFF, 0x0002DFFF, 0xBDEF7FE0,
    0xEF7BDEF7, 0x7460005E, 0xCE739A83, 0x7DE704C4, 0x122377DF, 0x00022440, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x56FBF000, 0xD3E60025, 0x2FD9FFBF,
    0xC6248D40, 0xFFBBC00C, 0x0EBFBFF7, 0x1678E400, 0xDEE77EA0, 0xBBBDEF7B, 0xC00ABF51,
    0xF1171F58, 0x9E0739CC, 0xEF7F41E1, 0x4544EEFB, 0x01C2C0A0, 0x00000C03, 0x00000000,
    0x00000000, 0x03000000, 0x8140880C, 0x7F41E385, 0x44EEFBEF, 0xCE6788B9, 0xFD435039,
    0x7EB9002A, 0xFECC6200, 0xFEFE6015, 0x02ABBF67, 0xB224AFF0, 0xBFBCE026, 0x37FFCE7D,
    0x11ACCF00, 0xF73BF500, 0xDDEF7BDE, 0x0055FA8D, 0x88B8FAC6, 0xF039CE67, 0x7BFA0F0C,
    0x2A2777DF, 0x0E160502, 0x00006018, 0x00000000, 0x00000000, 0x18000000, 0x0A044060,
    0xFA0F1C2C, 0x2777DF7B, 0x733C45CA, 0xEA1A81CE, 0xF5C80157, 0xEF7BDE03, 0xEC400FFD,
    0xFF22FE69, 0xECCF9813, 0xB75CF6B7, 0x45DF7AC0, 0x005BEFBE, 0x73BF5000, 0xDEF7BDEF,
    0x055FA8DD, 0x8B8FAC60, 0x039CE678, 0xBFA0F0CF, 0xA2777DF7, 0xE1605022, 0x00060180,
    0x00000000, 0x00000000, 0x80000000, 0xA0440601, 0xA0F1C2C0, 0x777DF7BF, 0x33C45CA2,
    0xA1A81CE7, 0x5C80157E, 0xDEFB983F, 0x37B9E9DD, 0x7323BCF0, 0xCCFDFFAC, 0xFFE73FC0,
    0xF56557BF, 0x197FFD0B, 0x16FFFBFD, 0xDFA80000, 0x7BDEF7B9, 0xAFD46EEF, 0xC7D63002,
    0xCE733C45, 0xD0786781, 0x3BBEFBDF, 0xB0281151, 0x0300C070, 0x00000000, 0x00000000,
    0x00000000, 0x220300C0, 0x78E16050, 0xBEFBDFD0, 0xE22E513B, 0xD40E7399, 0x400ABF50,
    0xBDC61FAE, 0xDEFFC1F7, 0xC400001F, 0x99E2739C, 0xEFBE4373, 0xBBEFD03B, 0x7EA00000,
    0xEF7BDEE7, 0xBF51BBBD, 0x1F58C00A, 0x39CCF117, 0x41E19E07, 0xEEFBEF7F, 0xC0A04544,
    0x0C0301C2, 0x00000000, 0x00000000, 0x00000000, 0x880C0300, 0xE3858140, 0xFBEF7F41,
    0x88B944EE, 0x5039CE67, 0x002AFD43, 0xDFA07EB9, 0xCF001DF7, 0x0002739C, 0xF7BDFF80,
    0xDEB00001, 0xF7DF7DF7, 0xCDF7DF7D, 0x739CE73D, 0x0CE739CE, 0xF7BBF000, 0xBDEF7BDE,
    0x00000EF7, 0x00EFBEFD, 0x139CE678, 0x3C000000, 0xFE40016B, 0x1D000FFA, 0x73BF18D1,
    0x3EF7BDEF, 0x0AFF1932, 0x0DE3F180, 0xA0B399E2, 0xEF7F4286, 0x8A04540B, 0xA0C0702A,
    0x398003C5, 0x3F0003BC, 0x52B000B9, 0xE35F2003, 0x2E1BC001, 0x019E3C00, 0x2031A200,
    0xE1625602, 0xF7DF2078, 0x81D289DD, 0xD40E739A, 0xAE401230, 0xF7D0CF1F, 0xFDEF7BDE,
    0x00B95E37, 0x955BEFC0, 0x7FA7CC00, 0x405FB3FF, 0x0CC6248D, 0xFBFFDDE0, 0x00075FDF,
    0xFE059E39, 0xFC07DEF7, 0x000FBDEF, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x08000000, 0x0FE16000, 0xDEFCC0C0, 0x7C077DF7, 0xCE733C41, 0x27FF9019, 0x31880000,
    0xFCC057FB, 0x577ECFFD, 0x24AFF005, 0xDE7026B2, 0xFFE73EDF, 0x6B33C01B, 0xF7BFF004,
    0xEF7FE03E, 0x0000007D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00004000,
    0x06007F0B, 0xEFBEF7E6, 0xE20BE03B, 0x80CE7399, 0x00013FFC, 0xF7BDEF78, 0xD3D8803F,
    0x27FE45FC, 0xB7ECCF98, 0x60B75CF6, 0xDF22EFBD, 0x00002DF7, 0x03EF7BFF, 0x07DEF7FE,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF0B00004, 0x7E606007,
    0x03BEFBEF, 0x399E20BE, 0xFFC80CE7, 0xEE300013, 0xF7FE0FBD, 0x880000FE, 0x33C4E739,
    0xEFBE46E7, 0xBBEFD03B, 0xEFFC0000, 0xDFF80FBD, 0x00001F7B, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00100000, 0x801FC2C0, 0xEFBDF981, 0x82F80EFB, 0x339CE678,
    0x004FFF20, 0xECC62000, 0xDFCC015F, 0x5577ECFF, 0x892BFC00, 0xDE7009AC, 0xFFE73EDF,
    0xACCF001B, 0xDEE78011, 0xEF78137B, 0x0F027BFD, 0xFC2C3C50, 0x3E3F2540, 0x633F848C,
    0x2C0F1230, 0x43F0F83E, 0x31305885, 0x44054392, 0xC038A1E1, 0x5909E7C1, 0xB8E413C0,
    0x5F0B003C, 0x987C01F1, 0x48C02461, 0x41F001F0, 0x5426002C, 0x03851000, 0x002C8300,
    0xE0007878, 0x38003E49, 0x14600254, 0x88F8007F, 0x54588005, 0xEF7BDC00, 0x00000000,
    0x00000000, 0x7BDF6000, 0x017BBDEF, 0x9E0DD180, 0x9893E739, 0xBEFBEF01, 0x07883FDF,
    0x00090780, 0x00000004, 0x00000000, 0x00000000, 0xF0004000, 0xDF7DE120, 0x3C41DDF7,
    0xE739CCF0, 0x8C000CC0, 0xBDEFB06E, 0x00BDDEF7, 0x00000000, 0x00000000, 0xFBDEE300,
    0x0FEF7FE0, 0x39880000, 0xE733C4E7, 0xEFBEF906, 0x02EFBF40, 0xDEE78000, 0xEF78137B,
    0x0F027BFD, 0xFC2C3C50, 0x3E3F2540, 0x633F848C, 0x2C0F1230, 0x43F0F83E, 0x31305885,
    0x44054392, 0xC038A1E1, 0x5909E7C1, 0xB8E413C0, 0x5F0B003C, 0x987C01F1, 0x48C02461,
    0x41F001F0, 0x5426002C, 0x03851000, 0x002C8300, 0xE0007878, 0x38003E49, 0x14600254,
    0x88F8007F, 0x54588005, 0x00000000
EW_END_OF_FONT_RES( ApplicationNumbersM )

/* Table with links to derived variants of the font resource : 'Application::NumbersM' */
EW_RES_WITHOUT_VARIANTS( ApplicationNumbersM )

/* Font resource : 'Application::NumbersP' */
EW_DEFINE_FONT_RES( ApplicationNumbersP, 22, 6, 0, 16, 0x0016, 0x00BE )
  EW_GLYPH( 0x0016, 0, -22, 14, 27, 14, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 14, 0x000003C7 ),               /* ' ' */
  EW_GLYPH( 0x0021, 4, -19, 6, 19, 14, 0x000003C7 ),            /* '!' */
  EW_GLYPH( 0x0022, 3, -20, 9, 7, 14, 0x0000047B ),             /* '"' */
  EW_GLYPH( 0x0023, 1, -19, 12, 19, 14, 0x000004D5 ),           /* '#' */
  EW_GLYPH( 0x0024, 0, -19, 14, 19, 14, 0x000006D4 ),           /* '$' */
  EW_GLYPH( 0x0025, 0, -19, 14, 19, 14, 0x000009B2 ),           /* '%' */
  EW_GLYPH( 0x0026, 1, -19, 12, 19, 14, 0x00000C7E ),           /* '&' */
  EW_GLYPH( 0x0027, 5, -20, 4, 7, 14, 0x00000ED4 ),             /* ''' */
  EW_GLYPH( 0x0028, 3, -22, 8, 28, 14, 0x00000F01 ),            /* '(' */
  EW_GLYPH( 0x0029, 3, -22, 8, 28, 14, 0x000010A3 ),            /* ')' */
  EW_GLYPH( 0x002A, 2, -19, 10, 11, 14, 0x00001241 ),           /* '*' */
  EW_GLYPH( 0x002B, 1, -15, 12, 10, 14, 0x000013C6 ),           /* '+' */
  EW_GLYPH( 0x002C, 4, -3, 6, 7, 14, 0x000014C4 ),              /* ',' */
  EW_GLYPH( 0x002D, 1, -11, 12, 3, 14, 0x00001516 ),            /* '-' */
  EW_GLYPH( 0x002E, 4, -3, 6, 3, 14, 0x000015AC ),              /* '.' */
  EW_GLYPH( 0x002F, 0, -19, 14, 19, 14, 0x000015D4 ),           /* '/' */
  EW_GLYPH( 0x0030, 0, -19, 14, 19, 14, 0x000017CF ),           /* '0' */
  EW_GLYPH( 0x0031, 1, -19, 12, 19, 14, 0x00001A55 ),           /* '1' */
  EW_GLYPH( 0x0032, 1, -19, 13, 19, 14, 0x00001BC9 ),           /* '2' */
  EW_GLYPH( 0x0033, 1, -19, 12, 19, 14, 0x00001E51 ),           /* '3' */
  EW_GLYPH( 0x0034, 0, -19, 14, 19, 14, 0x000020C1 ),           /* '4' */
  EW_GLYPH( 0x0035, 0, -19, 14, 19, 14, 0x000022DF ),           /* '5' */
  EW_GLYPH( 0x0036, 1, -19, 13, 19, 14, 0x00002586 ),           /* '6' */
  EW_GLYPH( 0x0037, 0, -19, 14, 19, 14, 0x000027E3 ),           /* '7' */
  EW_GLYPH( 0x0038, 0, -19, 14, 19, 14, 0x00002A37 ),           /* '8' */
  EW_GLYPH( 0x0039, 1, -19, 13, 19, 14, 0x00002D16 ),           /* '9' */
  EW_GLYPH( 0x003A, 4, -11, 6, 11, 14, 0x00002F7C ),            /* ':' */
  EW_GLYPH( 0x003B, 4, -12, 6, 16, 14, 0x00003000 ),            /* ';' */
  EW_GLYPH( 0x003C, 2, -18, 10, 16, 14, 0x000030B4 ),           /* '<' */
  EW_GLYPH( 0x003D, 2, -13, 10, 7, 14, 0x0000326D ),            /* '=' */
  EW_GLYPH( 0x003E, 2, -18, 10, 16, 14, 0x0000339B ),           /* '>' */
  EW_GLYPH( 0x003F, 1, -19, 12, 19, 14, 0x00003544 ),           /* '?' */
  EW_GLYPH( 0x0040, 0, -15, 14, 19, 14, 0x00003771 ),           /* '@' */
  EW_GLYPH( 0x0041, 0, -19, 14, 19, 14, 0x00003A4D ),           /* 'A' */
  EW_GLYPH( 0x0042, 0, -19, 14, 19, 14, 0x00003CAF ),           /* 'B' */
  EW_GLYPH( 0x0043, 1, -19, 12, 19, 14, 0x00003F22 ),           /* 'C' */
  EW_GLYPH( 0x0044, 1, -19, 12, 19, 14, 0x0000410E ),           /* 'D' */
  EW_GLYPH( 0x0045, 1, -19, 12, 19, 14, 0x000042C8 ),           /* 'E' */
  EW_GLYPH( 0x0046, 1, -19, 12, 19, 14, 0x000044CD ),           /* 'F' */
  EW_GLYPH( 0x0047, 1, -19, 12, 19, 14, 0x0000468F ),           /* 'G' */
  EW_GLYPH( 0x0048, 0, -19, 14, 19, 14, 0x000048B6 ),           /* 'H' */
  EW_GLYPH( 0x0049, 1, -19, 12, 19, 14, 0x00004A37 ),           /* 'I' */
  EW_GLYPH( 0x004A, 1, -19, 12, 19, 14, 0x00004BF9 ),           /* 'J' */
  EW_GLYPH( 0x004B, 0, -19, 14, 19, 14, 0x00004DB4 ),           /* 'K' */
  EW_GLYPH( 0x004C, 1, -19, 12, 19, 14, 0x00004FCA ),           /* 'L' */
  EW_GLYPH( 0x004D, 1, -19, 12, 19, 14, 0x00005115 ),           /* 'M' */
  EW_GLYPH( 0x004E, 1, -19, 12, 19, 14, 0x000052F7 ),           /* 'N' */
  EW_GLYPH( 0x004F, 0, -19, 14, 19, 14, 0x00005497 ),           /* 'O' */
  EW_GLYPH( 0x0050, 1, -19, 12, 19, 14, 0x000056B4 ),           /* 'P' */
  EW_GLYPH( 0x0051, 0, -19, 14, 22, 14, 0x00005885 ),           /* 'Q' */
  EW_GLYPH( 0x0052, 1, -19, 12, 19, 14, 0x00005B12 ),           /* 'R' */
  EW_GLYPH( 0x0053, 1, -19, 12, 19, 14, 0x00005D0B ),           /* 'S' */
  EW_GLYPH( 0x0054, 1, -19, 12, 19, 14, 0x00005F9C ),           /* 'T' */
  EW_GLYPH( 0x0055, 1, -19, 13, 19, 14, 0x00006107 ),           /* 'U' */
  EW_GLYPH( 0x0056, 0, -19, 14, 19, 14, 0x0000629A ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -19, 14, 19, 14, 0x000064ED ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -19, 14, 19, 14, 0x00006772 ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -19, 14, 19, 14, 0x00006A05 ),           /* 'Y' */
  EW_GLYPH( 0x005A, 1, -19, 12, 19, 14, 0x00006C17 ),           /* 'Z' */
  EW_GLYPH( 0x005B, 3, -22, 8, 28, 14, 0x00006E87 ),            /* '[' */
  EW_GLYPH( 0x005C, 0, -19, 14, 19, 14, 0x00006FE9 ),           /* '\' */
  EW_GLYPH( 0x005D, 3, -22, 8, 28, 14, 0x000071DA ),            /* ']' */
  EW_GLYPH( 0x005E, 0, -20, 14, 9, 14, 0x0000733C ),            /* '^' */
  EW_GLYPH( 0x005F, 0, 3, 15, 3, 14, 0x00007494 ),              /* '_' */
  EW_GLYPH( 0x0060, 2, -19, 8, 4, 14, 0x000074FC ),             /* '`' */
  EW_GLYPH( 0x0061, 0, -15, 14, 15, 14, 0x00007586 ),           /* 'a' */
  EW_GLYPH( 0x0062, 1, -20, 12, 20, 14, 0x000077BC ),           /* 'b' */
  EW_GLYPH( 0x0063, 1, -15, 12, 15, 14, 0x0000797C ),           /* 'c' */
  EW_GLYPH( 0x0064, 1, -20, 12, 20, 14, 0x00007B3F ),           /* 'd' */
  EW_GLYPH( 0x0065, 1, -15, 13, 15, 14, 0x00007D07 ),           /* 'e' */
  EW_GLYPH( 0x0066, 1, -20, 12, 20, 14, 0x00007F2F ),           /* 'f' */
  EW_GLYPH( 0x0067, 1, -15, 12, 21, 14, 0x000080F3 ),           /* 'g' */
  EW_GLYPH( 0x0068, 1, -20, 13, 20, 14, 0x0000833C ),           /* 'h' */
  EW_GLYPH( 0x0069, 1, -20, 12, 20, 14, 0x000084C0 ),           /* 'i' */
  EW_GLYPH( 0x006A, 2, -20, 10, 26, 14, 0x0000869B ),           /* 'j' */
  EW_GLYPH( 0x006B, 0, -20, 14, 20, 14, 0x00008892 ),           /* 'k' */
  EW_GLYPH( 0x006C, 1, -20, 12, 20, 14, 0x00008AA7 ),           /* 'l' */
  EW_GLYPH( 0x006D, 0, -15, 14, 15, 14, 0x00008C43 ),           /* 'm' */
  EW_GLYPH( 0x006E, 1, -15, 12, 15, 14, 0x00008D84 ),           /* 'n' */
  EW_GLYPH( 0x006F, 0, -15, 14, 15, 14, 0x00008EB4 ),           /* 'o' */
  EW_GLYPH( 0x0070, 0, -15, 14, 21, 14, 0x00009094 ),           /* 'p' */
  EW_GLYPH( 0x0071, 1, -15, 12, 21, 14, 0x000092AC ),           /* 'q' */
  EW_GLYPH( 0x0072, 1, -15, 12, 15, 14, 0x00009495 ),           /* 'r' */
  EW_GLYPH( 0x0073, 0, -15, 14, 15, 14, 0x000095E4 ),           /* 's' */
  EW_GLYPH( 0x0074, 1, -19, 12, 19, 14, 0x00009847 ),           /* 't' */
  EW_GLYPH( 0x0075, 1, -15, 13, 15, 14, 0x000099E4 ),           /* 'u' */
  EW_GLYPH( 0x0076, 0, -15, 14, 15, 14, 0x00009B1D ),           /* 'v' */
  EW_GLYPH( 0x0077, 0, -15, 14, 15, 14, 0x00009CF3 ),           /* 'w' */
  EW_GLYPH( 0x0078, 0, -15, 14, 15, 14, 0x00009EEF ),           /* 'x' */
  EW_GLYPH( 0x0079, 0, -15, 14, 21, 14, 0x0000A12A ),           /* 'y' */
  EW_GLYPH( 0x007A, 1, -15, 12, 15, 14, 0x0000A3B5 ),           /* 'z' */
  EW_GLYPH( 0x007B, 2, -22, 10, 28, 14, 0x0000A5BA ),           /* '{' */
  EW_GLYPH( 0x007C, 5, -22, 4, 28, 14, 0x0000A7D0 ),            /* '|' */
  EW_GLYPH( 0x007D, 2, -22, 10, 28, 14, 0x0000A850 ),           /* '}' */
  EW_GLYPH( 0x007E, 2, -12, 10, 4, 14, 0x0000AA62 ),            /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 14, 0x0000AB15 ),
  EW_GLYPH( 0x00A1, 4, -13, 6, 19, 14, 0x0000AB15 ),
  EW_GLYPH( 0x00A2, 2, -19, 10, 19, 14, 0x0000ABC9 ),
  EW_GLYPH( 0x00A3, 0, -19, 14, 19, 14, 0x0000AD64 ),
  EW_GLYPH( 0x00A5, 0, -19, 14, 19, 14, 0x0000AFAC ),
  EW_GLYPH( 0x00A6, 5, -22, 4, 27, 14, 0x0000B25D ),
  EW_GLYPH( 0x00A7, 1, -19, 12, 22, 14, 0x0000B2F9 ),
  EW_GLYPH( 0x00A8, 2, -19, 10, 3, 14, 0x0000B5F7 ),
  EW_GLYPH( 0x00A9, 0, -20, 14, 21, 14, 0x0000B65F ),
  EW_GLYPH( 0x00AA, 2, -19, 10, 12, 14, 0x0000B9AB ),
  EW_GLYPH( 0x00AB, 2, -14, 10, 11, 14, 0x0000BB17 ),
  EW_GLYPH( 0x00AC, 1, -12, 12, 7, 14, 0x0000BCA0 ),
  EW_GLYPH( 0x00AD, 1, -11, 12, 3, 14, 0x0000BD81 ),
  EW_GLYPH( 0x00AE, 1, -20, 12, 13, 14, 0x0000BE17 ),
  EW_GLYPH( 0x00AF, 1, -19, 12, 3, 14, 0x0000C058 ),
  EW_GLYPH( 0x00B0, 2, -20, 10, 11, 14, 0x0000C0E2 ),
  EW_GLYPH( 0x00B1, 1, -15, 12, 15, 14, 0x0000C215 ),
  EW_GLYPH( 0x00B2, 4, -19, 6, 9, 14, 0x0000C3C8 ),
  EW_GLYPH( 0x00B3, 4, -19, 6, 10, 14, 0x0000C487 ),
  EW_GLYPH( 0x00B4, 4, -19, 8, 4, 14, 0x0000C561 ),
  EW_GLYPH( 0x00B6, 0, -19, 14, 25, 14, 0x0000C5EB ),
  EW_GLYPH( 0x00B7, 4, -11, 6, 3, 14, 0x0000C7D7 ),
  EW_GLYPH( 0x00B8, 5, 1, 4, 5, 14, 0x0000C7FF ),
  EW_GLYPH( 0x00B9, 4, -19, 6, 10, 14, 0x0000C837 ),
  EW_GLYPH( 0x00BA, 2, -19, 10, 11, 14, 0x0000C8BF ),
  EW_GLYPH( 0x00BB, 2, -14, 10, 11, 14, 0x0000C9EC ),
  EW_GLYPH( 0x00BC, 0, -19, 14, 19, 14, 0x0000CB7C ),
  EW_GLYPH( 0x00BD, 0, -19, 14, 19, 14, 0x0000CE46 ),
  EW_GLYPH( 0x00BE, 0, -19, 14, 19, 14, 0x0000D124 ),
  EW_GLYPH( 0x00BF, 1, -13, 12, 19, 14, 0x0000D442 ),
  EW_GLYPH( 0x00C0, 0, -22, 14, 23, 14, 0x0000D670 ),
  EW_GLYPH( 0x00C1, 0, -22, 14, 23, 14, 0x0000D981 ),
  EW_GLYPH( 0x00C2, 0, -22, 14, 22, 14, 0x0000DC8E ),
  EW_GLYPH( 0x00C3, 0, -22, 14, 22, 14, 0x0000DF97 ),
  EW_GLYPH( 0x00C4, 0, -22, 14, 22, 14, 0x0000E2A3 ),
  EW_GLYPH( 0x00C5, 0, -22, 14, 22, 14, 0x0000E58E ),
  EW_GLYPH( 0x00C6, 0, -19, 14, 19, 14, 0x0000E850 ),
  EW_GLYPH( 0x00C7, 1, -19, 12, 25, 14, 0x0000EAA0 ),
  EW_GLYPH( 0x00C8, 1, -22, 12, 23, 14, 0x0000ED20 ),
  EW_GLYPH( 0x00C9, 1, -22, 12, 23, 14, 0x0000EFCF ),
  EW_GLYPH( 0x00CA, 1, -22, 12, 22, 14, 0x0000F27A ),
  EW_GLYPH( 0x00CB, 1, -22, 12, 22, 14, 0x0000F515 ),
  EW_GLYPH( 0x00CC, 1, -22, 12, 23, 14, 0x0000F792 ),
  EW_GLYPH( 0x00CD, 1, -22, 12, 23, 14, 0x0000F9FE ),
  EW_GLYPH( 0x00CE, 1, -22, 12, 22, 14, 0x0000FC66 ),
  EW_GLYPH( 0x00CF, 1, -22, 12, 22, 14, 0x0000FEBB ),
  EW_GLYPH( 0x00D0, 0, -19, 14, 19, 14, 0x000100F5 ),
  EW_GLYPH( 0x00D1, 1, -22, 12, 22, 14, 0x0001032B ),
  EW_GLYPH( 0x00D2, 0, -22, 14, 23, 14, 0x0001056F ),
  EW_GLYPH( 0x00D3, 0, -22, 14, 23, 14, 0x00010841 ),
  EW_GLYPH( 0x00D4, 0, -22, 14, 22, 14, 0x00010B0F ),
  EW_GLYPH( 0x00D5, 0, -22, 14, 22, 14, 0x00010DC8 ),
  EW_GLYPH( 0x00D6, 0, -22, 14, 22, 14, 0x00011092 ),
  EW_GLYPH( 0x00D7, 2, -15, 10, 10, 14, 0x00011327 ),
  EW_GLYPH( 0x00D8, 0, -20, 14, 22, 14, 0x0001149F ),
  EW_GLYPH( 0x00D9, 1, -22, 13, 23, 14, 0x0001178E ),
  EW_GLYPH( 0x00DA, 1, -22, 13, 23, 14, 0x000119D1 ),
  EW_GLYPH( 0x00DB, 1, -22, 13, 22, 14, 0x00011C13 ),
  EW_GLYPH( 0x00DC, 1, -22, 13, 22, 14, 0x00011E35 ),
  EW_GLYPH( 0x00DD, 0, -22, 14, 23, 14, 0x00012039 ),
  EW_GLYPH( 0x00DE, 1, -19, 12, 19, 14, 0x00012300 ),
  EW_GLYPH( 0x00DF, 0, -20, 14, 20, 14, 0x000124D6 ),
  EW_GLYPH( 0x00E0, 0, -20, 14, 20, 14, 0x00012738 ),
  EW_GLYPH( 0x00E1, 0, -20, 14, 20, 14, 0x00012A32 ),
  EW_GLYPH( 0x00E2, 0, -20, 14, 20, 14, 0x00012D2D ),
  EW_GLYPH( 0x00E3, 0, -20, 14, 20, 14, 0x00013035 ),
  EW_GLYPH( 0x00E4, 0, -20, 14, 20, 14, 0x00013343 ),
  EW_GLYPH( 0x00E5, 0, -21, 14, 21, 14, 0x0001362A ),
  EW_GLYPH( 0x00E6, 0, -15, 14, 15, 14, 0x0001391D ),
  EW_GLYPH( 0x00E7, 1, -15, 12, 21, 14, 0x00013B8B ),
  EW_GLYPH( 0x00E8, 1, -20, 13, 20, 14, 0x00013DE9 ),
  EW_GLYPH( 0x00E9, 1, -20, 13, 20, 14, 0x000140CC ),
  EW_GLYPH( 0x00EA, 1, -20, 13, 20, 14, 0x000143B0 ),
  EW_GLYPH( 0x00EB, 1, -20, 13, 20, 14, 0x000146A1 ),
  EW_GLYPH( 0x00EC, 1, -20, 12, 20, 14, 0x00014971 ),
  EW_GLYPH( 0x00ED, 1, -20, 12, 20, 14, 0x00014B86 ),
  EW_GLYPH( 0x00EE, 1, -20, 12, 20, 14, 0x00014D9C ),
  EW_GLYPH( 0x00EF, 1, -20, 12, 20, 14, 0x00014FBF ),
  EW_GLYPH( 0x00F0, 1, -20, 13, 20, 14, 0x000151C1 ),
  EW_GLYPH( 0x00F1, 1, -20, 12, 20, 14, 0x00015416 ),
  EW_GLYPH( 0x00F2, 0, -20, 14, 20, 14, 0x00015614 ),
  EW_GLYPH( 0x00F3, 0, -20, 14, 20, 14, 0x000158B7 ),
  EW_GLYPH( 0x00F4, 0, -20, 14, 20, 14, 0x00015B5B ),
  EW_GLYPH( 0x00F5, 0, -20, 14, 20, 14, 0x00015E0C ),
  EW_GLYPH( 0x00F6, 0, -20, 14, 20, 14, 0x000160C3 ),
  EW_GLYPH( 0x00F7, 1, -17, 12, 12, 14, 0x00016353 ),
  EW_GLYPH( 0x00F8, 0, -17, 14, 19, 14, 0x000164D5 ),
  EW_GLYPH( 0x00F9, 1, -20, 13, 20, 14, 0x0001677B ),
  EW_GLYPH( 0x00FA, 1, -20, 13, 20, 14, 0x00016973 ),
  EW_GLYPH( 0x00FB, 1, -20, 13, 20, 14, 0x00016B6C ),
  EW_GLYPH( 0x00FC, 1, -20, 13, 20, 14, 0x00016D72 ),
  EW_GLYPH( 0x00FD, 0, -20, 14, 26, 14, 0x00016F57 ),
  EW_GLYPH( 0x00FE, 0, -20, 14, 26, 14, 0x000172A7 ),
  EW_GLYPH( 0x00FF, 0, -20, 14, 26, 14, 0x0001750B ),

  EW_FONT_PIXEL( ApplicationNumbersP, 0x00017847 )              /* ratio 57.36 % */
    0xAD6B59F2, 0x299AD6B5, 0xDDDDD7F6, 0x51EEFDDD, 0x00144001, 0xBBBBBB20, 0xB5CC07BB,
    0xAD6B5AD6, 0xFFF9E0FD, 0xBFFFFFFF, 0xCCC892F9, 0x0F0F5CCC, 0x003F9700, 0x01820001,
    0xC402E5C0, 0xEC60587C, 0x80BE5E7B, 0x6B5C8FF8, 0xC8AC07ED, 0x3803DDDD, 0xF5C0017E,
    0x008E6000, 0xC004EC40, 0xF0006733, 0x0001DF7B, 0xDF7BF000, 0x6733C001, 0x8C002600,
    0xCE739BF1, 0xF39CE739, 0xDEF7B8AD, 0x00000000, 0x00000000, 0xDEE20000, 0x7B88037B,
    0xB8000DEF, 0x0DEF72F7, 0x00000000, 0xE7800000, 0x0BEE78FE, 0x00000000, 0xDB3E4000,
    0x9F2D9E7A, 0xBE34DF5C, 0x016FAA6F, 0x753F73C0, 0x07DE67EF, 0x00000000, 0x7BA9FB9E,
    0x003EF33F, 0x7C69BEB0, 0xCADF54DF, 0xB3CF5B67, 0x000093E5, 0xDC000000, 0xF000003F,
    0xF8DFFFEE, 0xE2FFFFFF, 0x6453239B, 0xC47C8666, 0xEF7BCAFF, 0x049E2C7D, 0x13040000,
    0x0FD90A80, 0x2C0CF3CF, 0xEFBF27D6, 0x03EF0FDB, 0x7BDDF1A0, 0x1C87FDE5, 0x01327200,
    0x970024B8, 0xE9931004, 0xF2BDEF7F, 0x9986309E, 0xB3322999, 0xFFFFBF0E, 0xFFFE37FF,
    0xDDF92FFF, 0xDB8C7F7B, 0xD57FAAA8, 0xCEC23650, 0x0028ED34, 0x9E000F3C, 0x2B6003F8,
    0x56697F08, 0xDCF93C26, 0xF880F94A, 0x65FE739F, 0x8EC22203, 0x21EA2002, 0xBFFE5002,
    0xD81FCE7B, 0x7CAEE546, 0xC6A9CAC0, 0x03C46036, 0x800D9404, 0x8810145F, 0xFE4F08F1,
    0x7CBF940D, 0x8F19FFC6, 0xEF7BDDFC, 0x002DC3FD, 0xF7DF5933, 0x3F54D8BD, 0x060853CF,
    0x60C02E00, 0x7EA8FC03, 0x9E79E79E, 0xEFACBC67, 0xFBEFBEFB, 0x479E006C, 0xF7997BEC,
    0x16006A5E, 0x0800007F, 0x0064C02E, 0x879FAA5C, 0xB0679E7C, 0x3EFA8FBE, 0xEEB002FF,
    0x0000017D, 0xFBDFFE88, 0xC44AEE37, 0xDEFBF309, 0x9E7DEA99, 0x0301FCDA, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x84920000, 0xA79FB78F, 0xBEB11BC6, 0x1CF735EF,
    0xEFFBDDF8, 0x70EEB900, 0x7F8A6FBF, 0x8FBCF3D4, 0xB050E178, 0x00000008, 0x00000000,
    0x00000000, 0x00000000, 0x28000000, 0xBF4F3D56, 0x2B7DFB9C, 0x5EE72174, 0xC6256FC0,
    0x24F5473F, 0x564B79FE, 0x8B647444, 0xC2D6BEEF, 0x99F6A278, 0x810FDD50, 0xFFDFEB35,
    0x51D8C547, 0x56D3946B, 0xEFCD6990, 0xD3FFF8C3, 0x03BDC403, 0x3C000000, 0xE7A8B3CF,
    0x7DF7C479, 0x5F7DFD2F, 0x7BDC4000, 0x1BDEFB0F, 0x00000000, 0x0BDEF710, 0xE0904C12,
    0x3D530480, 0xCF3CF3CF, 0xDD4F3CF3, 0xEFBEFBEF, 0xBBEFBEFB, 0xDEF71000, 0xC000001B,
    0x78801BBA, 0x31BC00BD, 0xBD31001E, 0x1E31BC00, 0x00353900, 0x200518BF, 0x2FC00B97,
    0xA9C8006A, 0x00356801, 0xE005E3E4, 0x518024F5, 0x1336801A, 0x01F8A8C0, 0xA80256D0,
    0x6D001F8A, 0xEFC60026, 0xFDEF7BDE, 0x80BFC40D, 0xC86F07FA, 0x7892FBF7, 0xA7CDF879,
    0x62921E06, 0xF0605205, 0xCA200857, 0x078A6001, 0x20029F80, 0x23C00387, 0x02CF800A,
    0xC007D2A0, 0x94080395, 0x3F092007, 0x620F0C8A, 0x78A5F33E, 0x37BEF883, 0x17F88FC5,
    0x73C9FE30, 0x02F7BDEF, 0x57DF5800, 0x093CF900, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xE7A80000, 0xF3CF1279, 0x5F7DFBD4, 0x17BEFBE1, 0xEF7B8C00, 0x12FEF7BD,
    0xDF917500, 0x935F7DF7, 0xE79E788B, 0x0FC3D679, 0x200126C0, 0x20121C00, 0xEFB18B27,
    0xBC1FF7BD, 0x78803FE2, 0x7F443787, 0x49EDF7DF, 0x9E79EB51, 0x01FC9127, 0x00000004,
    0xF3FF8000, 0x3CF3CF3C, 0xF7DF3C0F, 0x7DF7DF7D, 0xBDEE0001, 0xCF7BDEF7, 0x9FCC400B,
    0xEFBEFBEF, 0x3C6A1EFB, 0xCF3CF3CF, 0x803F05F3, 0x00400487, 0x19E0062C, 0xDEF73C6C,
    0x8000598F, 0x62DF7DF5, 0x9E79F216, 0x66C00E2E, 0x90092401, 0x9F26C004, 0xE79E79E7,
    0x7DF7E2E9, 0xDF7DF7DF, 0xBA801722, 0xBDEF7980, 0x8003E003, 0x0570001A, 0x002CA300,
    0x9003F15E, 0xFC00398F, 0x96200BC4, 0x88DE0015, 0x2553001F, 0x801A1580, 0x4880254F,
    0xD83DEF75, 0xD8800037, 0x3FBDEF7B, 0x318C3BBC, 0x678518C6, 0x80000000, 0x7BDEF7B8,
    0x07F7BDEF, 0xFBF30000, 0x2EFBEFBE, 0x79E79FB0, 0x0000A79E, 0x00000000, 0xBDEF7BBE,
    0xF8C0007B, 0xEFBEF887, 0x0DEFBEFB, 0xCF3CF2F1, 0x5CCF3CF3, 0x01970014, 0x800040C0,
    0x0127F000, 0xE79E2878, 0x79E79E79, 0xBEF8BF93, 0x6FBEFBEF, 0xE7800552, 0xF7BFF587,
    0x98FF7BDE, 0xC47C009D, 0xF7DF7DFB, 0x79F35922, 0x1C10A79E, 0x00000000, 0xCF3CFFE0,
    0x7CF014F3, 0xBF7DF7DF, 0x5F20027F, 0x9DEF7BE8, 0x1136003C, 0x00000000, 0x06070440,
    0xE79F3524, 0xF91F48F9, 0x7837DF7E, 0x57204ECC, 0x7BDEF71B, 0xDEF7BDEF, 0x64F0009B,
    0x7DF7DF7E, 0x88E2F7DF, 0xE79E79E7, 0xE0059079, 0x146003CF, 0x951F801F, 0xC0072600,
    0xF800F10C, 0xE0C60098, 0x0951F003, 0x3007F160, 0x1F004C43, 0x7C18C00B, 0x00C63E00,
    0x6007C588, 0xF2005885, 0xF7BDEE77, 0x0ADC06FC, 0x3307FA88, 0x1BDF7F45, 0xEB99B262,
    0x4FE4E679, 0x004D87F0, 0x49092400, 0xF882F9B2, 0x3C8F3CD8, 0x1EA19EF7, 0xA49E00B2,
    0xF7DFBC43, 0x778A6886, 0x297CCF3E, 0x22228482, 0x26040130, 0x186C902C, 0x7AD62844,
    0x7C52F99E, 0xDEFBFA21, 0x2BE32F10, 0xFE837C60, 0xBDEF7BDF, 0x04AD66FF, 0xE23F2D72,
    0xF837BEFD, 0x679F3524, 0x87F0522E, 0x00100003, 0x1B040000, 0xDEF75140, 0x8009D0DB,
    0xEFBEFFFC, 0xA807BEFB, 0xE79E79E7, 0x0000000F, 0xE780E002, 0x99E79E79, 0xBEFBE48B,
    0xE0DEFBEF, 0x12D72003, 0x001BDEF7, 0x1BDEF710, 0x71000000, 0x0001BDEF, 0x01BDEF71,
    0xBDEF7100, 0x00000001, 0x82F7BDC4, 0x38241304, 0x2004C120, 0x204BF100, 0x1EE405FE,
    0xC66E3011, 0x99FE313F, 0x31FEA07B, 0x317E626E, 0x30FF09FE, 0xCF1EFC03, 0xD537C02F,
    0xC6DBC03F, 0xC8BEB04E, 0x22F9E01B, 0x009DA813, 0xEF77E3B9, 0xFBDEF7BD, 0xDF7EE003,
    0xF7DF7DF7, 0xE79E7ADD, 0xA9E79E79, 0x79E79E7A, 0xFBA9E79E, 0x7DF7DF7D, 0x080177DF,
    0x6003B900, 0xF22204EC, 0xE67FC826, 0x8CDC601E, 0x23DC817F, 0xAEC407BE, 0x7C1026F8,
    0x8DA8F7E0, 0x87E795F8, 0x21F597F8, 0x21B788F6, 0xE409BE33, 0x03B880BF, 0xDEF7BBF0,
    0x02F9EF7B, 0xFB9F3C40, 0x7DF7DF7D, 0x9E7AAA93, 0x379E79E7, 0x00C500D9, 0x00248000,
    0xCFA1FC55, 0xBD1311FD, 0x3105F102, 0x6EFDFBE5, 0xA7CF4321, 0x8C00F002, 0x0D7E0008,
    0xBC0133C0, 0x0005DEF7, 0xEFE40000, 0xBDEF7BDE, 0x0B783FF7, 0xE78F2F20, 0xFBEFBEFB,
    0x79C221A6, 0x9E79E79E, 0x0C05811F, 0xEF7FE780, 0x04BF1003, 0x02F513C0, 0x0002CE10,
    0x007F0800, 0x1DF1D63C, 0xF0004C40, 0xFBEFBEFE, 0x7A802FBE, 0x1E79E79E, 0x3DF04000,
    0xCF3CF3CF, 0xF30C3CF3, 0xFBEFBEFB, 0x770BEFBE, 0xBDE60000, 0x0B804EF7, 0x8631E01B,
    0x8F3C3009, 0xC39C1801, 0x50721E00, 0xFE4E65C0, 0x1648C3C0, 0x03292430, 0x03C99306,
    0xC060C90F, 0xC3F870E6, 0x61CF3CE4, 0xDF7E60C1, 0xC0018322, 0x7BDE43C3, 0x99B060EF,
    0x4933F930, 0x03831648, 0xF7B88C87, 0x3DEF7BDE, 0x9E20005F, 0xDF7CF03F, 0xFE051937,
    0xC9BCF3CF, 0x0245801F, 0x12400030, 0x05C3C600, 0xA1DDEF7D, 0x3C00001E, 0xF535F7DF,
    0x3CF3FF80, 0xB800726B, 0x220C003C, 0x9B000000, 0xCF3FF80C, 0x780F16B3, 0x10EBEFBE,
    0x3FC6002F, 0xF7BDCEB0, 0xD5977BDE, 0x7C65E001, 0xDF7DF7DF, 0x9E7DC153, 0x1C9E79E7,
    0x006000C4, 0x00000000, 0x00000000, 0x00000000, 0x620C0060, 0xCFB82A00, 0x93CF3CF3,
    0x7DF7C65E, 0x563DF7DF, 0xDEFFC007, 0xF7BDEF7B, 0x85D40097, 0x916FBEFA, 0x4F3CF90B,
    0xCD806C3F, 0x00083003, 0x00000000, 0x00000000, 0x80000000, 0x49FC0041, 0x5D3CF3E4,
    0xF7DF50FC, 0xA802722D, 0xF7BDEF1B, 0xBDEF7BDE, 0xEF80003F, 0xFBEFBEFB, 0xF3CF3C2E,
    0x0053CF3C, 0x00000000, 0xCF3CF000, 0xFBE00CF3, 0x00FBEFBE, 0xDEF7B800, 0x000002FB,
    0x00000000, 0xCF3CF3CF, 0xDF7C14F3, 0x77DF7DF7, 0xEF77E001, 0x7BDEF7BD, 0x90001FEF,
    0xDF7DF7DF, 0x3CF0BDF7, 0x4F3CF3CF, 0x00000001, 0xF3C00000, 0x2053CF3C, 0xBEFBEFBF,
    0xEF20000B, 0x00FEF7BD, 0x00000000, 0x00000000, 0x9DF10000, 0xF7BDEF7B, 0x0013DF2E,
    0xF7DF3C55, 0x6CF7DF7D, 0xE79E7BF2, 0x141C9E79, 0x00000000, 0x3CF18000, 0xF814F3CF,
    0xBEFBEFBE, 0xBDE0000B, 0x000001B7, 0x01490000, 0x79F7C9FC, 0x306A3F9E, 0xE07BEFBF,
    0xDC4004FF, 0xF7585F7B, 0x000000DE, 0x00000000, 0x00000000, 0x79F20000, 0x500FE79E,
    0x0F7DF7DF, 0xEF300000, 0x0001B7BD, 0x00000000, 0x00000000, 0xDF800000, 0x7BDEF7BD,
    0x003FBDEF, 0x0DF7DFB8, 0x5BBEFBF2, 0x3C2CF3CF, 0x000053CF, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xC2CF3CF5, 0xBF753CF3, 0xF7E41BEF, 0xF000177D, 0xBDEF7BDC,
    0x580007F7, 0x037DF7DF, 0x9E79E7C8, 0x00000005, 0x00000000, 0x00000000, 0x00000000,
    0x1E200400, 0x9E79E3FE, 0xA0BE79E7, 0xBEFBEFBE, 0x019E2BEF, 0xF713F310, 0xDEFB05DE,
    0x710D600D, 0x0E65F201, 0x03643780, 0x6400E2CC, 0x1BC006B3, 0xE2BE01B2, 0x028C9005,
    0xCC003180, 0x499C01A0, 0x68378015, 0x05193100, 0x401A0DE0, 0xE003C64C, 0x31005E0D,
    0x37800F19, 0x7DEFFD78, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xF3CF3CF9, 0xBEA14F3C, 0xEFBEFBEF, 0xDEE0017B, 0xEF77C1FB, 0x0C0984C5,
    0x01924048, 0x64804C58, 0x03F9FC00, 0xA4253261, 0x52B09A41, 0x69824466, 0xE4300F4D,
    0x3FF1C090, 0x23E6902E, 0x1348C781, 0x80911088, 0x1E480487, 0x7B81C380, 0xEFFC0FEF,
    0x3E002545, 0xC8003C00, 0x20170007, 0x1E300278, 0x03E1C026, 0xF00594A8, 0xA8660071,
    0x09894400, 0xD401F870, 0x03E01230, 0x62000AC0, 0xC603E001, 0x7BDEF7BE, 0x03FE2177,
    0x06F25F18, 0xA21D7DFD, 0x79EB9879, 0x2E48A4D6, 0x0302226C, 0x00000016, 0x00000000,
    0x00000000, 0x04000000, 0x5C902C06, 0xE62844D8, 0x29359E7A, 0xEBEFE83A, 0x07FC4D10,
    0xEF74BE30, 0x7BDEF7BD, 0xF9E000BF, 0x5BEFBEA0, 0xE79F2154, 0xB00FE2E9, 0x00900079,
    0xC0240008, 0xE79F2166, 0xBEA2E2E9, 0x078C5BEF, 0xF7981D40, 0x097F7BDE, 0x00000000,
    0x00000000, 0xF7BBF180, 0x40F77BDE, 0xFF180BFC, 0xFBFA0DE4, 0x878FC43A, 0x9ACF3D67,
    0x9B0D922C, 0x0580C088, 0x00000000, 0x00000000, 0x00000000, 0x01810000, 0x3617240B,
    0x7AE61E11, 0xDE29359E, 0x43AFBFA0, 0x602FF134, 0xBBF1897C, 0x02EDF277, 0xC80071F8,
    0xEFFC37B7, 0x7BDEF7BD, 0xCF1004BE, 0x7DF7D40D, 0xF3E44E4D, 0x0FE1EB3C, 0x830099B0,
    0x804C1800, 0xCF3E46CD, 0x51391EB3, 0xBCB5F7DF, 0x604F2001, 0x18777BDE, 0x0145180D,
    0x000049FC, 0x00000000, 0x7BBF9000, 0xDEF7BDEF, 0x4AC00B70, 0xDF7DF7D6, 0xFAA6C5F7,
    0x79E79E79, 0x00806C3C, 0x3C00E0C0, 0xC47C04AC, 0x7E7BDEFF, 0xA201BC69, 0xF7F7986E,
    0x5F22DF7D, 0xE9E79EA2, 0x125C0149, 0x49001060, 0x3E566C02, 0x4F3CF3CF, 0xDF7D7B17,
    0x62DF7DF7, 0xF7F5004C, 0x7BDEF7BB, 0x07F7BDEF, 0xBEFBF700, 0xBBEFBF22, 0xE24F3CF5,
    0x00029E79, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x03EF7B80,
    0x0037BDCF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0C40C060,
    0xF1526C36, 0x0F59E7AC, 0xEFE8378F, 0xFF13E26B, 0xE53FC602, 0xF701F7BD, 0x1FC191DE,
    0x243C3106, 0x160C3C3C, 0x849B365C, 0x8183C187, 0x926488A4, 0xCFE2C061, 0xC93F81E2,
    0xC5830B9F, 0x7921E0A0, 0x23244244, 0x678B0143, 0xE73607F1, 0x721E00CF, 0x29E0C050,
    0x01406003, 0xB807F03C, 0xEF77E0B0, 0x3BBDD602, 0x105600B9, 0x092F21C0, 0x248024E0,
    0x9BDC5326, 0x92182316, 0x30839829, 0x208C8349, 0x83082392, 0x9820C871, 0x24831244,
    0x0CC73358, 0x9CE44916, 0x5B2E4939, 0x24873FA6, 0x0410639D, 0xC18A3C65, 0x19309984,
    0x02081190, 0xF7D92249, 0xBDEE20FE, 0x262547C3, 0xC3E4CC35, 0x43C7C5C7, 0x219851A5,
    0x9885E1CB, 0x03E4789C, 0x0FCD50BE, 0x4C5312C8, 0xC02F0BC0, 0x27800C08, 0xC25E0070,
    0x550D4093, 0x0E73407C, 0x9E218C13, 0x59A0B14A, 0xE2C87C3C, 0x343E47E3, 0x47063063,
    0x51F83F16, 0x0BBDEEA3, 0x53EF7B9E, 0xF92E0FC9, 0xE28118F8, 0xC118A261, 0x1F971447,
    0xC5143895, 0xE5442781, 0xEC580F10, 0xCF1F0262, 0x86301F9F, 0x1F00352C, 0x105601FC,
    0x0F062013, 0x00000000, 0x00000000, 0xFF800000, 0x7BDEF7BD, 0x0017BDEF, 0xF7DF7EF1,
    0xAC1BDF7D, 0x79E79E7A, 0x03F1089E, 0xF02565E2, 0x26206886, 0xF10E8033, 0x0198B902,
    0xF2068874, 0xC4BC05E1, 0x02F14602, 0x15405C9A, 0x1393403F, 0x79EB0678, 0x9E79E79E,
    0x7DF7CF17, 0x017DF7DF, 0xF7BDDF80, 0xC007FBDE, 0x8BDF7DFB, 0x014F3CF5, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x53CF3D60, 0x7BEFBF78, 0x00DBEC01,
    0xA8003368, 0xDA002F11, 0xE2AA004C, 0x12B68007, 0x03F15180, 0xC0099B40, 0xDA003478,
    0x47C80033, 0x00D5A003, 0x800D1F20, 0x72002A8E, 0x62FC0069, 0x34B90014, 0x1E317E00,
    0xFD7A7200, 0xDEF7BDEE, 0xBEFDC03F, 0xCF3D43EF, 0x000000F3, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x9EA00000, 0xBF7079E7, 0x0000FBEF, 0x0BDF0000, 0x05CCF580,
    0xFD51E9E0, 0xFF2FC600, 0x100DF8DF, 0x4E388DC7, 0x24BE37C0, 0x5BC3E3FF, 0xD5F8C16F,
    0x80B9CD67, 0xEF759FA7, 0x7BDEF7BD, 0x06F7BDEF, 0x90000000, 0xFEFD6095, 0x2333D7E7,
    0xA9F7AD45, 0xAFEFFDFF, 0x7BDEE307, 0x17FFBDEF, 0xC8BE7200, 0xEFBEFBEF, 0xF3C42C1B,
    0x7CF3CF3C, 0x80180044, 0xF3CF3CF1, 0xDFDBE06C, 0x04DF7DF7, 0x8F8001EB, 0x3F7BDFFA,
    0x009FE488, 0x06040030, 0x3CF7C500, 0x65C1B3CF, 0x4DF7DF7C, 0x70025F50, 0x00017DEF,
    0x00000000, 0xBDEF3000, 0x8007EEF7, 0xFBEA15F1, 0xC83837BE, 0x62E679E7, 0x00121C01,
    0x00000000, 0x00000000, 0xE7C890E0, 0xA162E679, 0x837BEFBE, 0xA57C6003, 0x7BDEE77E,
    0xFCFFBDEF, 0x609E002A, 0x7DF7DF7D, 0xFB27FBDF, 0x79E79E79, 0x0000002A, 0x00000000,
    0x10000000, 0xF13F800C, 0x3CF3CF3E, 0xFCC13D4F, 0xBEFBEFBE, 0x000ABF37, 0x0BDEF780,
    0x00000000, 0xF77EA000, 0xF2277BDE, 0x885F002B, 0xC2BEFBF7, 0x3CF3E6A0, 0x0000C989,
    0x00000000, 0x0C000000, 0x1802C980, 0x4F3CF7E4, 0xEF9E0BE2, 0x15F90AFB, 0x7BDF7300,
    0xF167BDEF, 0x9E8803BC, 0xDF7EF10E, 0xD499F0F7, 0x65E79E7C, 0x00240648, 0xE79F2024,
    0xEA125E79, 0xE1EFBEFB, 0xC3662001, 0x7BDEF7BC, 0x3240005E, 0x3E6A4C00, 0xC53CF3CF,
    0xFBEFDE21, 0xBCF2EFBE, 0xEFC80003, 0x1FEF7BDC, 0x630013CE, 0xBDF7DF50, 0x79E7E898,
    0xBBF0900A, 0xF7B9C3F7, 0xFBF70001, 0x5BEFDE26, 0xD63679EA, 0x000024F3, 0x00000000,
    0x00000000, 0x00000000, 0xECF00000, 0xF7BDEF7B, 0x00DF5BDE, 0xBEFE8870, 0xD6A2C1EF,
    0x247F3CF3, 0x00000003, 0x00000000, 0x19200000, 0xCF9A8B00, 0x8971FCF3, 0x07BEFBF7,
    0x98003BCF, 0x6F7BDEFB, 0xFE000003, 0x9E79E324, 0xEF931567, 0x83AFBEFB, 0x73F46003,
    0x00017DEF, 0x00000000, 0xBDE60000, 0x037FDEF7, 0xFA82D720, 0x3E0DEFBE, 0xE679E7C8,
    0x005C0124, 0x00000080, 0x00000000, 0x00000000, 0x00000000, 0x0DEF7B88, 0xFBE20000,
    0xCF002FBE, 0x00003CF3, 0xBDEF7BBF, 0x70000FF7, 0x801BEFBF, 0x01679E7A, 0x00000000,
    0x00000000, 0x00000000, 0x859E79EA, 0x7EEA79E7, 0xEFC837DF, 0x00005EFB, 0x07F7BDCF,
    0xF7DF5800, 0xF3CF905D, 0xBDCF0014, 0xEF7BDEF7, 0xBEFAC003, 0xE7C86BEF, 0x00029E79,
    0x00000000, 0x00000000, 0x00000000, 0xC0000000, 0x679E7C82, 0xBEFAE636, 0x018C1DEF,
    0x7B8C73C4, 0x000003EF, 0x00000000, 0xB9E00000, 0xF5003EF7, 0xF8C01FA3, 0x7900B3C2,
    0x7900F8C2, 0x3A01FE53, 0xFC0009C5, 0x000C0006, 0x874003D0, 0x1F900138, 0xA6A801F9,
    0xD62AC01A, 0x7E4BE003, 0xC4271009, 0xF7BDDF8D, 0x0003FBDE, 0x0DF7DFB8, 0xB3CF3D40,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x2CF3CF50, 0x753CF3D6,
    0x8C1BEFBF, 0x005EFBEF, 0xBDEF7B88, 0x7FFBDEF7, 0x0BE72001, 0x2C9DE6DE, 0x12F58AB0,
    0x00924001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF7BDEF70, 0x0DFF7BDE,
    0xFA85AE40, 0x7E0DEFBE, 0xE679E7C8, 0x012E0124, 0x00000000, 0x00000000, 0x00000000,
    0xFBC00000, 0x7BDEF7BF, 0x26778DFF, 0x9165EB90, 0x837DF7DF, 0xF3DF0465, 0x0C47CF3C,
    0x00001848, 0x00000026, 0x00000000, 0x30909800, 0xF3DF0460, 0xC30FCF3C, 0xFBEFBF22,
    0x26778792, 0xF713F390, 0xBDEF7BDE, 0x9000DFF7, 0x7DF9816B, 0x607C9BDF, 0x3F33CF3F,
    0x00240032, 0x00000000, 0x00000000, 0x04800000, 0x3CF3CFD8, 0xBF30191F, 0x0792FBEF,
    0x7C1AB900, 0xFF7BDEF7, 0x0000000D, 0x00000000, 0xF7D9E000, 0xBDEF7BDE, 0xC0037C77,
    0xAFBEFE87, 0xE7ACF0F0, 0x00C11279, 0x00000000, 0x00000000, 0xC0060800, 0x79E7CD43,
    0xFDE27F12, 0xDF50AFBE, 0xF7D9E000, 0x00277BDE, 0x00000000, 0xF9800000, 0x7BDEF73B,
    0x2B7DEBEF, 0xDF526300, 0xF7DF7DF7, 0xE79F783D, 0x04679E79, 0x00000012, 0x00000000,
    0x00000000, 0x00000000, 0xBDEFFF40, 0x077BDEF7, 0x3E00256B, 0xDF7DF7D6, 0x52297DF7,
    0xCF3CF3F4, 0x30613CF3, 0x00E41800, 0xF7BEC910, 0x1F1A7BDE, 0x7566AC40, 0xFFAC4C02,
    0x7FDEF7BD, 0x07200188, 0xE7A84000, 0x79E79E79, 0xBF748A56, 0xEFBEFBEF, 0x6200266B,
    0xDEF73C35, 0x00000001, 0xF7BBF000, 0xFEF7BEC3, 0xDF7EE001, 0xF7DF7F44, 0xD46CF3D6,
    0x00053CF3, 0x00000000, 0x00000000, 0x40800000, 0xA82A053F, 0x0ABE05EF, 0xB05DEF70,
    0x0001BDEE, 0x00000000, 0x00000000, 0x00000000, 0x70400000, 0x3CF52400, 0x1F87F3CF,
    0xF7DF7DF9, 0xE004EAC0, 0xC80EF7B9, 0x142CEF7B, 0x0D8A2A14, 0x079B4C9B, 0x8A22878A,
    0x30466C11, 0xD8B0A228, 0x14D81E6C, 0x54287F0F, 0xEC510505, 0xD4D82641, 0x518A01E6,
    0x4424606C, 0x801E0A01, 0xEEF87F0D, 0xDEF7817D, 0xE400325F, 0x24E48025, 0x424E400B,
    0x224C3BDE, 0x66078A19, 0x92D97084, 0x44C3C494, 0x918318B2, 0x8A07924C, 0x8637F0E4,
    0xF1E4873F, 0xC2608A3C, 0x3C2490BD, 0x8C409305, 0xEE71A40C, 0xBDCF207D, 0x3A1A4C63,
    0x2E53A1AC, 0x5E36479E, 0x50BCD4DE, 0x59A77453, 0xE533C3A0, 0x5E13440B, 0x01641980,
    0x201720AC, 0x409BC15F, 0x0BC53987, 0xBFBC479E, 0x6F340F50, 0x4E83A4E4, 0xB64378B9,
    0x2F10FC9C, 0xEF7BCC73, 0xBDBDE603, 0x5F9FC070, 0xC9440F14, 0x8A0F10E1, 0x0E2E0A8F,
    0xF114510F, 0x944B8918, 0x82783F0A, 0x8B04CBBF, 0x9FC02A52, 0xA81FC37C, 0x78058A64,
    0x83F002A0, 0x7892300B, 0x002C7C00, 0xB1007F0E, 0xA1580164, 0x00F8F800, 0x8007218C,
    0xBDE00F1F, 0xEF7BDEF7, 0x8005F7BD, 0xEFBEFBEF, 0xF1BE06FB, 0xCCF3CF3C, 0x25C01CC1,
    0x0E83581B, 0x00F52F90, 0x9817886F, 0x9A209BC5, 0x705F80B1, 0x03987A81, 0xE79F7178,
    0x12B19E79, 0xDF7DF7EF, 0x80001DF7, 0x0BEFFEF1, 0x40CCCF73, 0x6FF7E2BD, 0xC1816F34,
    0x00008104, 0x00000000, 0xBC092400, 0x789F7834, 0x0A34C81F, 0x0F72AFE4, 0x9205C5A0,
    0x00000001, 0x00000000, 0x4C090440, 0x73C7E81A, 0xEFDF0DFE, 0xDEE31919, 0x00000001,
    0x00000000, 0x00000000, 0x3DEF0000, 0xF19100DF, 0xDFFD05EC, 0xCD1827A1, 0x0064980F,
    0x00000000, 0x30000000, 0x8179A048, 0x8179E37A, 0xB180CF4A, 0x1D01ED47, 0x003C502E,
    0x00000000, 0x82000000, 0xF42CD008, 0x22F54CFF, 0x1FBF3C72, 0x17F7BEC4, 0xFE8F6EFC,
    0x46789F3D, 0x73AEAAC5, 0x730F97E3, 0xEE2B3C46, 0x200037BD, 0x8037BDEE, 0x00DEF7B8,
    0x00000000, 0x00000000, 0x05DC6000, 0xFCA7C800, 0xFFAC279F, 0x4BEF9ED7, 0xDA84402F,
    0x2491DEFA, 0x00000000, 0x00000000, 0x94F06001, 0xA444F3FF, 0x4BEF9ED1, 0x7D8C0067,
    0x0077BEB7, 0xBDEFB180, 0xE43FDEF7, 0x17E0007F, 0xFBEFBFA2, 0xF5AC585E, 0x8853CF3C,
    0x00000360, 0xFD858000, 0x8853CF3C, 0xBEFBF317, 0x880002EF, 0x7BDEEF83, 0x0000007F,
    0x00000000, 0x7EC00000, 0x9E79E79E, 0xF7DF9807, 0x05F7DF7D, 0xDEF79000, 0x77BDD617,
    0x47E0A0E4, 0x10723F0E, 0x62898F83, 0x8FC51261, 0x230E054D, 0x609E0714, 0x2C078855,
    0x1F0266F6, 0x4603F0F5, 0xE006348A, 0x87C01F81, 0xBFBC4098, 0xCC03BF40, 0x139CC419,
    0xEEA4DEE2, 0xFFFE207D, 0x17FFF3C1, 0x33220CC8, 0xEA4DEE20, 0x600007DE, 0x0000BBDD,
    0xDD600000, 0x000000BB, 0x000BBDD6, 0xC4000000, 0xF7BDEE77, 0x09FFC5DE, 0xFBC43180,
    0x3DF7DF7D, 0xE79F358A, 0x00049E79, 0x213C0149, 0xFEF7BDEF, 0x1F500F82, 0x0CF9500D,
    0x077BDEE3, 0x44503C95, 0xA0A1E000, 0xBDE431A8, 0xDC350EF7, 0xFFE32404, 0x4BEFBEFB,
    0xE79EA073, 0x08028A79, 0xDEE11400, 0x43BDEF7B, 0x7C3A002C, 0xDF7DF7DF, 0xF7A7FDF7,
    0xEF73C5DE, 0xFBEF800F, 0x5DF7D61E, 0xF7B9DFAC, 0xDFB015EC, 0xDFFFFDFD, 0x1AC1DDEF,
    0xB59955FF, 0xF7E5E3FE, 0x87AC600C, 0x0A7601B1, 0xDEF7DC8F, 0x77A412C7, 0x863EF77C,
    0x07C9E14C, 0x00000802, 0x00000000, 0x04210000, 0xF93D2180, 0xBD30CA40, 0x31F7BBE3,
    0xF7DCB631, 0x433FC7DE, 0x156204AD, 0xF104FBAF, 0xBD88FDFC, 0xF3DEE77E, 0x7E44FF9B,
    0xCE739CE7, 0x7BDEE037, 0x64027FEF, 0xAFBEFBE3, 0x9E79E0C4, 0x7BEE4367, 0x003BC36F,
    0x3DF7C651, 0xF3CF7E48, 0x4C817047, 0x0686DEEB, 0xFBEFECF0, 0x004BEFBE, 0x8FC43E30,
    0x2EE41FE7, 0xD8D7CBEB, 0xEE7B7BE3, 0x67EE7FAC, 0xFC7FCBD6, 0x37C7D753, 0xF57D69FE,
    0x9EC7631F, 0xDCB46F9E, 0x893B52F9, 0x7E17C85D, 0x9E79E79E, 0x479E79E7, 0x7DF7DF7C,
    0x5F7DF7DF, 0x7BDC4000, 0x00F7BDEF, 0x00000000, 0xE79E79EA, 0x79E79E79, 0xF7DF7EEA,
    0x7DF7DF7D, 0x3C0005DF, 0x137E73BF, 0xE73DEF7C, 0xED787FFE, 0x19F17EA2, 0xBDEFFDF5,
    0x7D66F9E7, 0xD5DEF31F, 0x1014F3BE, 0xF79922AA, 0x922236CE, 0x235D6F79, 0xAA7B029E,
    0x7C00DEFA, 0x7E77D467, 0xF2ADF3CC, 0xE3A793B9, 0xCF7BDF87, 0x711FFFB9, 0xDEF7BDEF,
    0x40006F7B, 0x7DF7DF7C, 0x5F7DF7DF, 0xEF7BFF98, 0x19D14FFD, 0x666F9199, 0x3FFFFEF8,
    0x6049326B, 0x80000000, 0x228A4C01, 0xFDEF7846, 0xCCABE3C4, 0xE202FACC, 0x000001DE,
    0x59E79E00, 0xE23CF3D4, 0xFE97BEFB, 0x20002FBE, 0x7D87BDEE, 0x00000DEF, 0xB8800000,
    0x78000077, 0x9E79E79E, 0xF11E79E7, 0x7DF7DF7D, 0x017DF7DF, 0xEF7BFF00, 0xAF7BFF19,
    0x2C613186, 0xB8B46F71, 0x0A307E37, 0x7BDFFCC6, 0x9EF7B8DD, 0xD1DEF711, 0x59CC2730,
    0xEF71DEE7, 0x9CD4F7B8, 0xEF7BA800, 0x739CE7DD, 0xECE65640, 0xD6FFF9DF, 0x190AAEF3,
    0xBFFDBFA3, 0x7BEC62FF, 0xDEF7BDEF, 0x000CE21B, 0x1F8004CC, 0x24277BC8, 0x40004400,
    0x00010000, 0x001C000A, 0xF4000B50, 0xE3000AFE, 0x00000049, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xB8800000, 0x8000DEF7, 0x361FBDDF, 0xB8860C1E, 0x829C4FF7,
    0x00000000, 0x3BCADC60, 0x0CE739C6, 0xBDEF7FF3, 0x213A29FF, 0xBE30CCDF, 0xDF9358AF,
    0x0C01FCF3, 0x30000000, 0xCF3DF930, 0xEF8C231F, 0x425F962B, 0x0EC009BC, 0x24EC6174,
    0xD8DF87BE, 0x52DF3F43, 0xFC4FFF37, 0x3FE2BF56, 0xFCA73D0E, 0xE73BC38F, 0xE4FFE3B3,
    0x797EFD9E, 0x4B7E5F87, 0x3FF893FD, 0x303D02FC, 0xFA01FDEE, 0x390038C4, 0xEF0010DF,
    0x35540058, 0x001EBA00, 0xA20068E6, 0xABC0019F, 0x23755D61, 0xCEB09BE7, 0xB1DE2739,
    0xAA888880, 0x817DDF1F, 0x013E531E, 0xD5F971CC, 0x219FA203, 0xE6AF0357, 0x73900CF7,
    0xF02F5CA6, 0x6FFC566A, 0xE35557CD, 0x5A78E739, 0x6111098F, 0x0FEF73C4, 0x0E789EF0,
    0x086F98C0, 0xC005CE80, 0xAE800D53, 0x0D958007, 0x0073BC40, 0x55D61AD0, 0xC06F98D7,
    0x9D1CE73A, 0x7888880B, 0xEF7B9FAA, 0x9E7AE80F, 0xC0F57F7B, 0x224786CA, 0x23C067DE,
    0xDCF79AD0, 0xBD722E5F, 0xE73AE729, 0x1163BC1F, 0x1AAA044E, 0x3D0888DC, 0x39CEB01E,
    0x67BDEE3D, 0xB8DFDF81, 0x4F0BD6F7, 0xA047F835, 0x0CFF01EB, 0xEFFC3656, 0x39DE23F3,
    0x1F9F7FE0, 0x8CFF01AD, 0xFC00DF31, 0x8C173A23, 0x55BD6F7B, 0xF7BDC60D, 0x000F1EAC,
    0x5DF65C6B, 0x7867DE20, 0x779AD012, 0xAA66B902, 0x3477817C, 0xFD54033D, 0x1E817CA8,
    0xEAE71193, 0x758D1AC7, 0x789EB6CE, 0x7488829F, 0xFDEF7581, 0x00000001, 0x07F7BDD6,
    0xFC003E60, 0xE320017E, 0xD4402801, 0x8C1E5F33, 0x34DEFBFB, 0xCC40FF03, 0xEEF83317,
    0x1E32E179, 0x0400F240, 0x00592003, 0x9E7BF23F, 0x1A9E79E7, 0x7DF7CF0F, 0xDF5DF7DF,
    0x558C0013, 0xDFECC009, 0x007AFCFF, 0xAD4446B3, 0x9F6FC602, 0x003DFFF3, 0xAFFF9EF3,
    0x806C2E00, 0xC02618C7, 0x60063CF0, 0x78030E70, 0x970141C8, 0x0F03F939, 0x90C05923,
    0x4C180CA4, 0x243C0F26, 0xC39B0183, 0xF3930FE1, 0x8305873C, 0x0C8B7DF9, 0x0F0F0006,
    0x83BDEF79, 0xE4C266C1, 0x592124CF, 0x321C0E0C, 0x00D6B200, 0xFFCEFF46, 0x55A813D7,
    0xF026A311, 0xFB39F6FC, 0xEDFA8037, 0x85C02773, 0xC318F00D, 0xC79E1804, 0x61CE0C00,
    0x28390F00, 0x7F2732E0, 0x0B2461E0, 0x01949218, 0x81E4C983, 0x60306487, 0x61FC3873,
    0xB0E79E72, 0x6FBF3060, 0xE000C191, 0xBDEF21E1, 0x4CD83077, 0x2499FC98, 0x81C18B24,
    0x7BAC0643, 0x5F017DEF, 0xFCC5F7C7, 0xFFBF7181, 0x0CEFECF3, 0xF7D8CF18, 0x8033C7FE,
    0x31E01B0B, 0x3C300986, 0x9C18018F, 0x721E00C3, 0x4E65C050, 0x48C3C0FE, 0x29243016,
    0xC9930603, 0x60C90F03, 0xF870E6C0, 0xCF3CE4C3, 0x7E60C161, 0x018322DF, 0xDE43C3C0,
    0xB060EF7B, 0x33F93099, 0x83164849, 0x9E0C8703, 0xF7BDEF7D, 0x9FFC3FDE, 0xD9CE6A31,
    0xFBDDFA1B, 0x0AEFBEF7, 0xEF7BDE60, 0x01B0B804, 0x0098631E, 0x8018F3C3, 0xE00C39C1,
    0x5C050721, 0x3C0FE4E6, 0x4301648C, 0x30603292, 0x90F03C99, 0x0E6C060C, 0xCE4C3F87,
    0x0C161CF3, 0x322DF7E6, 0x3C3C0018, 0x0EF7BDE4, 0x93099B06, 0x6484933F, 0xC8703831,
    0xF177BDE0, 0x0003FBDC, 0x87BEFBE0, 0xC6177DF5, 0xFEF7FE33, 0x85C053C7, 0xC318F00D,
    0xC79E1804, 0x61CE0C00, 0x28390F00, 0x7F2732E0, 0x0B2461E0, 0x01949218, 0x81E4C983,
    0x60306487, 0x61FC3873, 0xB0E79E72, 0x6FBF3060, 0xE000C191, 0xBDEF21E1, 0x4CD83077,
    0x2499FC98, 0x81C18B24, 0x7BEC0643, 0x8C01DDEF, 0x091CDEE1, 0x72C80004, 0x2400D66F,
    0x0C63C024, 0x3CF0C00F, 0x0E706006, 0xC1C87803, 0x64E66C03, 0x2C919303, 0x06524860,
    0x0793260C, 0x80C1921E, 0x87F0E1CD, 0xC39E79C9, 0xBEFCC182, 0x80030645, 0xF7BC8787,
    0x3360C1DE, 0x9267F261, 0x07062C90, 0x7BAC190E, 0xDEF7BDEF, 0x000E1F7B, 0xF7837C18,
    0xF045BEFB, 0x3CF3D62C, 0x480094C9, 0x00260800, 0x09040003, 0xC04C29EB, 0x01245DFB,
    0xE2DD65C0, 0x00021FDC, 0x001BF324, 0x00B3FF8B, 0x10400592, 0xC9E79EB0, 0xFBF780C0,
    0x000895BE, 0xBDEF73AC, 0x7565DEF7, 0xDF197800, 0xF7DF7DF7, 0xE79F7054, 0x07279E79,
    0x00180031, 0x00000000, 0x00000000, 0x00000000, 0x18830018, 0xF3EE0A80, 0xA4F3CF3C,
    0xDF7DF197, 0xD58F7DF7, 0xF73AC001, 0x5DEF7BDE, 0x03F7BBF0, 0x03C006C0, 0x00C00180,
    0x9804AAC6, 0x5F9FFBFD, 0x2235980F, 0xDF8C156A, 0x7BFFE73E, 0xEF7BDEF0, 0xF7FEFFF9,
    0xBE0000FE, 0xEFBEFBEF, 0xCF3CF0BB, 0x014F3CF3, 0x00000000, 0x3CF3C000, 0xEF8033CF,
    0x03EFBEFB, 0x7BDEE000, 0x00000BEF, 0x00000000, 0x3CF3CF3C, 0x7DF053CF, 0xDF7DF7DF,
    0xD6400005, 0x77FA301A, 0x509EBFFE, 0x4D4622AB, 0x9CFB7E78, 0x7BDE1BFD, 0xEE7DBFFF,
    0x0007F7BD, 0xF7DF7DF0, 0xE785DF7D, 0x79E79E79, 0x0000000A, 0x9E000000, 0x019E79E7,
    0x7DF7DF7C, 0xF700001F, 0x005F7BDE, 0x00000000, 0x9E79E000, 0x829E79E7, 0xEFBEFBEF,
    0xA0002EFB, 0x85F7BDEF, 0xBEF8ADF8, 0xF460BF98, 0x77B3CFDE, 0xEF7FEF0F, 0xBDFFBDFF,
    0x80003FFF, 0xEFBEFBEF, 0xCF3C2EFB, 0x53CF3CF3, 0x00000000, 0x3CF00000, 0xE00CF3CF,
    0xFBEFBEFB, 0xF7B80000, 0x0002FBDE, 0x00000000, 0x3CF3CF00, 0x7C14F3CF, 0xDF7DF7DF,
    0x7BC00177, 0xF7B9E2EF, 0xDF7C0007, 0xEFBEB0F7, 0xFDF7F77A, 0xDF7FFDEF, 0xF00007EF,
    0x7DF7DF7D, 0x79E785DF, 0x0A79E79E, 0x00000000, 0xE79E0000, 0x7C019E79, 0x1F7DF7DF,
    0xDEF70000, 0x00005F7B, 0x00000000, 0xE79E79E0, 0xEF829E79, 0xFBEFBEFB, 0xAB18002E,
    0xEFF66012, 0x603D7E7F, 0x55A888D6, 0x9CFB7E30, 0xEFC1EFFF, 0xFFCF7BDE, 0x07F7BFF7,
    0xBEFBF700, 0x77DF7E41, 0x859E79EB, 0x000A79E7, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x59E79EA0, 0xEEA79E78, 0xFC837DF7, 0x0002EFBE, 0x180D6B20, 0x5FFF3BFD,
    0x1155A84F, 0xBF3C26A3, 0x0DFECE7D, 0xBFFF7BBF, 0xF7BDEE7D, 0xFBF70007, 0xDF7E41BE,
    0x9E79EB77, 0x0A79E785, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xE79EA000,
    0xA79E7859, 0x837DF7EE, 0x02EFBEFC, 0xF7BDD600, 0xF8EBE0BE, 0x8C3F98BE, 0x679FFDFB,
    0xEDF8677F, 0xFEF7DBEF, 0x00FF6FBF, 0x37DF7EE0, 0x6EFBEFC8, 0xF0B3CF3D, 0x00014F3C,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0B3CF3D4, 0xFDD4F3CF, 0xDF906FBE,
    0xF0005DF7, 0xEE78BBDE, 0xDF0001FD, 0xEFAC3DF7, 0xFBFB7EBB, 0xBFFEF7FE, 0x8003F7EF,
    0x20DF7DFB, 0xF5BBEFBF, 0xF3C2CF3C, 0x0000053C, 0x00000000, 0x00000000, 0x00000000,
    0x50000000, 0x3C2CF3CF, 0xFBF753CF, 0xDF7E41BE, 0xEFC00177, 0xBDEF7BDE, 0x8C001777,
    0xBEFC806F, 0x02F10DEF, 0x97CCF3CF, 0x0488A002, 0x00000100, 0xF7916F00, 0x800001DE,
    0xF7DF906F, 0xCF0B1825, 0x000004F3, 0x10000000, 0xF0488A00, 0x797CCF3C, 0xF7DF7E40,
    0x8C006886, 0x7BECF06F, 0xFEF7BDEF, 0xD4633FF9, 0xFD37B39C, 0xDF7BFDEE, 0xEF7B8577,
    0x45EFFC0F, 0x003E0025, 0x07C8003C, 0x78201700, 0x261E3002, 0xA803E1C0, 0x71F00594,
    0x00A86600, 0x70098944, 0x30D401F8, 0xC003E012, 0x0162000A, 0xAAC603E0, 0xEFF66004,
    0x803D7E7F, 0x56A22359, 0xCFB7E301, 0x601EFFF9, 0xFFCF7BEC, 0xF885DFF7, 0xC97C600F,
    0x75F7F41B, 0xAE61E688, 0x229359E7, 0x0889B0B9, 0x0000580C, 0x00000000, 0x00000000,
    0x00000000, 0x40B01810, 0xA1136172, 0xD679EB58, 0xFD10E8A4, 0x89A21D7D, 0x97C600FF,
    0x00D6B200, 0xFFCEFF46, 0x55A813D7, 0xF026A311, 0xFB39F6FC, 0xFFEC6037, 0x777B9F6F,
    0x1803FE21, 0xFD06F25F, 0x79A21D7D, 0xD679EB98, 0x6C2E48A4, 0x16030222, 0x00000000,
    0x00000000, 0x00000000, 0x06040000, 0xD85C902C, 0x7AD62844, 0x3A29359E, 0x875F7F44,
    0x803FE268, 0x7BE825F1, 0xF8817DEF, 0x98BEF8AD, 0x7BD180BF, 0x3DDECF3F, 0xDFFEEE20,
    0x2277DFFB, 0x5F1803FE, 0xFBEB06F2, 0xF0F3443A, 0x49ACF3F4, 0x44D86C91, 0x002C0604,
    0x00000000, 0x00000000, 0x00000000, 0x580C0800, 0x89B0B920, 0x3CF5AC50, 0x8874526B,
    0xD10EBEFE, 0xE3007FC4, 0xDEFB3C4B, 0x7FBDEF7B, 0xD4633FF8, 0xF437B39C, 0x7DEFF7BB,
    0xF63015DF, 0xBBDEF7BD, 0xC01FF10B, 0xE83792F8, 0xCD10EBEF, 0xB3CF5CC3, 0x61724526,
    0xB0181113, 0x00000000, 0x00000000, 0x00000000, 0x30200000, 0xC2E48160, 0xD6B14226,
    0xD149ACF3, 0x3AFBFA21, 0x01FF1344, 0xDEF12F8C, 0xFDEE78BB, 0x7DF00001, 0xBEFAC3DF,
    0x7FEFDE0B, 0x217BFFEF, 0x5F1803FE, 0x7DFD06F2, 0x9879A21D, 0xA4D679EB, 0x226C2E48,
    0x00160302, 0x00000000, 0x00000000, 0x00000000, 0x2C060400, 0x44D85C90, 0x9E7AD628,
    0x443A2935, 0x68875F7F, 0xF1803FE2, 0xA660B925, 0xEF993DBC, 0x39DE9CCD, 0xCAFC315F,
    0xE0FF1AFB, 0xA07FC837, 0x2FA85C92, 0xF94EF0C6, 0x87FFF8C5, 0x7FCDF2B7, 0x653C7FC4,
    0x1FFE20ED, 0xE4DBEC00, 0xEF7BDEEF, 0xDC5A233D, 0x4CCBC202, 0xB075F7D6, 0xF3F4F1F9,
    0xFC9141AC, 0x904312B1, 0x45600178, 0x17AF1000, 0x03C63780, 0x0077A620, 0x800F18E8,
    0x37801A5C, 0x2E100146, 0x0906A040, 0x50C28D12, 0x7CCF3DF8, 0xF7D63629, 0x2B9A21BD,
    0x5186FC80, 0xDEF7BDF6, 0xBF562FFB, 0x2AB18009, 0xFDFECC01, 0x9807AFCF, 0x156A2235,
    0xCE7DBF18, 0xBDC0F7FF, 0xEB5911F7, 0x00001BDE, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x30000000, 0x1B062060, 0xD678A936, 0xC787ACF3, 0x35F7F41B, 0x017F89F1,
    0x59009FE3, 0xBFD1806B, 0x04F5FFF3, 0xD4622AB5, 0x9F6FCF04, 0x7B837FB3, 0x9E11AAEF,
    0x00006F7B, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xC0000000, 0x6C188180,
    0x59E2A4D8, 0x1E1EB3CF, 0xD7DFD06F, 0x05FE27C4, 0xBAC27F8C, 0xF817DEF7, 0xE62FBE3A,
    0xFEFDC60F, 0x33BFB3CF, 0x4833FBB8, 0x0001BEDF, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xB0620603, 0x678A9361, 0x787ACF3D, 0x5F7F41BC, 0x17F89F13,
    0x7BC9FE30, 0xF7B9E2EF, 0x7DF00007, 0xBEFAC3DF, 0x249FDDCB, 0x001BBF7D, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x06206030, 0x78A9361B, 0x87ACF3D6,
    0xF7F41BC7, 0x7F89F135, 0x009FE301, 0x4600D6B2, 0xD7FFCEFF, 0x1155A813, 0xFCF026A3,
    0x37FB39F6, 0x53EF7BA8, 0xDEF73C23, 0x5C1F92A7, 0x0231F1F2, 0x3144C3C5, 0x2E288F82,
    0x28712A3F, 0x884F038A, 0xB01E21CA, 0x3E04C5D8, 0x603F3F9E, 0x006A590C, 0xAC03F83E,
    0x0C402620, 0x0000001E, 0x00000000, 0x00000000, 0x0017DEF7, 0x00000000, 0xF7BDEF30,
    0xF3C0017E, 0xB7DF7D41, 0xCF3E42A8, 0x601FC5D3, 0x012000F3, 0x80480010, 0xCF3E42CD,
    0x7D45C5D3, 0x0F18B7DF, 0xEF303A80, 0x12FEF7BD, 0xEF000000, 0x7BDEF7B9, 0x0CEF037F,
    0xF1160EA0, 0x4B935F7E, 0xCF3E7304, 0x42E0FE2A, 0x00400132, 0x92400980, 0xC3E67C80,
    0x37BEB01F, 0x3500053C, 0x25BDCF00, 0x02A6801A, 0x000240C0, 0xC0020600, 0xCF90488F,
    0x580B26B3, 0x1A21D7DF, 0xE40FF500, 0xDF580093, 0x2677ECFF, 0x7CC62910, 0xF7FEA01F,
    0x005BDFEC, 0xC01CD462, 0x7BDEF7B8, 0x8005FFEF, 0xFBF22F9C, 0x06FBEFBE, 0xCF3CF10B,
    0x111F3CF3, 0x3C600600, 0x1B3CF3CF, 0x7DF7F6F8, 0x7AC137DF, 0xFEA3E000, 0x220FDEF7,
    0x0C0027F9, 0x40018100, 0xF3CF3DF1, 0xDF19706C, 0xD4137DF7, 0xC8000097, 0xEF9C8127,
    0x016FFF3E, 0xC8473BCF, 0xF6FDEA00, 0xC602FFB9, 0xC600467C, 0x7BDEF7BD, 0xE4002FFF,
    0xF7DF917C, 0x5837DF7D, 0x9E79E788, 0x0088F9E7, 0x79E30030, 0xC0D9E79E, 0xFBEFBFB7,
    0x03D609BE, 0xBFF51F00, 0xC9107EF7, 0x0060013F, 0x8A000C08, 0x679E79EF, 0xBEF8CB83,
    0xBEA09BEF, 0xBDD60004, 0xAF80BEF7, 0xFE62FBE3, 0xFFDFB8C0, 0x0677F679, 0xE419E78C,
    0x00000CF3, 0xDEF7BDC6, 0x002FFF7B, 0xDF917CE4, 0x37DF7DF7, 0x79E78858, 0x88F9E79E,
    0xE3003000, 0xD9E79E79, 0xEFBFB7C0, 0xD609BEFB, 0xF51F0003, 0x107EF7BF, 0x60013FC9,
    0x000C0800, 0x9E79EF8A, 0xF8CB8367, 0xA09BEFBE, 0xF88004BE, 0x714DFDCE, 0x6FCF7C0E,
    0x589EF7AF, 0xBB19F2B0, 0xEC2F58C7, 0x0DDED63F, 0xEF718000, 0xFFDEF7BD, 0x5F39000B,
    0xDF7DF7E4, 0xE2160DF7, 0x79E79E79, 0x0C00223E, 0xE79E78C0, 0xEDF03679, 0x6FBEFBEF,
    0xC000F582, 0xBDEFFD47, 0x4FF2441F, 0x02001800, 0x7BE28003, 0xE0D9E79E, 0xFBEFBE32,
    0x012FA826, 0xF177BDE0, 0x0003FBDC, 0x87BEFBE0, 0xC6177DF5, 0x3CF924F3, 0xB8C00005,
    0xEF7BDEF7, 0x9C8005FF, 0xBEFBF22F, 0x0B06FBEF, 0xF3CF3CF1, 0x00111F3C, 0xCF3C6006,
    0xF81B3CF3, 0xDF7DF7F6, 0x007AC137, 0xF7FEA3E0, 0xF9220FDE, 0x000C0027, 0xF1400181,
    0x6CF3CF3D, 0xF7DF1970, 0x97D4137D, 0xDEEFC000, 0xCA20377B, 0x000639BD, 0x88002000,
    0x018E6E72, 0xEF7BDDF8, 0xF7BDC606, 0x2FFF7BDE, 0x917CE400, 0xDF7DF7DF, 0xE7885837,
    0xF9E79E79, 0x00300088, 0xE79E79E3, 0xBFB7C0D9, 0x09BEFBEF, 0x1F0003D6, 0x7EF7BFF5,
    0x013FC910, 0x0C080060, 0x79EF8A00, 0xCB83679E, 0x9BEFBEF8, 0xC004BEA0, 0xFFBDEF73,
    0xBCF7BDDF, 0x7CC42C80, 0x8AFBEFAC, 0xE5B0DEFC, 0x7A873CF3, 0x0E0123E6, 0x3679EA4C,
    0xBEFDFA60, 0xE67FF26F, 0xCF016623, 0x79BD86F7, 0xCE6207EF, 0x7BDF4260, 0xC000005E,
    0x6CF58301, 0xF94F3E6A, 0x7C937F42, 0x1D95EFBF, 0x73BF5000, 0xDEF7BDEF, 0x00157E7F,
    0xEFBEB04F, 0xFDEFBEFB, 0xCF3CFD93, 0x00153CF3, 0x00000000, 0x00000000, 0xC0060800,
    0xE79F789F, 0x9EA79E79, 0xF7DF7E60, 0x5F9BDF7D, 0x9DFA8005, 0xF7BDEF7B, 0xEF77E1FE,
    0x800D8007, 0x80030007, 0x0093E401, 0xF67FEFAC, 0x8A44133B, 0xD407DF31, 0x7BFD9EFF,
    0xCD46200B, 0xF7BEE601, 0xA2CF7BDE, 0x4F4401DE, 0xEFBF7897, 0x6A4CF87B, 0x32F3CF3E,
    0x00120324, 0xF3CF9012, 0xF5092F3C, 0xF0F7DF7D, 0x61B31000, 0x3DEF7BDE, 0x1920002F,
    0x9F352600, 0xE29E79E7, 0x7DF7EF12, 0x77A977DF, 0x4F900000, 0x3EEF9C82, 0xE7816FFF,
    0x8064239D, 0xEE7DBF7A, 0xCF98C0BF, 0x7BEE6008, 0x2CF7BDEF, 0xF4401DEA, 0xFBF78974,
    0xA4CF87BE, 0x2F3CF3E6, 0x01203243, 0x3CF90120, 0x5092F3CF, 0x0F7DF7DF, 0x1B31000F,
    0xDEF7BDE6, 0x920002F3, 0xF3526001, 0x29E79E79, 0xDF7EF12E, 0x7A977DF7, 0xF7580007,
    0x5F02FBDE, 0xFCC5F7C7, 0xFFDFB8C1, 0x0677F679, 0xF20CF3C6, 0xC0000679, 0x7BDEF7DC,
    0x3BD459EF, 0x12E9E880, 0x0F7DF7EF, 0xE7CD499F, 0x64865E79, 0x02400240, 0xE79E79F2,
    0xEFBEA125, 0x001E1EFB, 0x7BCC3662, 0x05E7BDEF, 0xC0032400, 0x3CF3E6A4, 0xE25C53CF,
    0xFBEFBEFD, 0x000EF52E, 0x9E2EF7BC, 0x00007F7B, 0xAC3DF7DF, 0xCF18BBEF, 0x14F3E493,
    0xF7DCC000, 0x59EF7BDE, 0xE8803BD4, 0xF7EF12E9, 0x499F0F7D, 0x5E79E7CD, 0x02406486,
    0x79F20240, 0xA125E79E, 0x1EFBEFBE, 0x3662001E, 0xBDEF7BCC, 0x240005E7, 0xE6A4C003,
    0x53CF3CF3, 0xBEFDE25C, 0xF52EFBEF, 0x93E4000E, 0x3FF7D600, 0x91099DFB, 0x81F7CC62,
    0x7FB3DFFA, 0xD462016F, 0x7BDDF81C, 0x007FBDEF, 0xDF7DFB80, 0x3CF3D400, 0x0000000B,
    0x00000000, 0x00000000, 0xF3CF5000, 0x53CF3C2C, 0x41BEFBF7, 0x02F7DF7E, 0x849F2000,
    0xFF3EEF9C, 0xCEF3C16F, 0xDEA03211, 0x2FFB9F6F, 0x0119F318, 0x7BDEF77E, 0xE0001FEF,
    0x0037DF7E, 0x02CF3CF5, 0x00000000, 0x00000000, 0x00000000, 0x0B3CF3D4, 0xFDD4F3CF,
    0xDF906FBE, 0x8000BDF7, 0x2FBDEF75, 0x2FBE3AF8, 0x7EE30FE6, 0xDFD9E7FF, 0x19E78C19,
    0x000CF3E4, 0xDEF7BBF0, 0x0000FF7B, 0x01BEFBF7, 0x1679E7A8, 0x00000000, 0x00000000,
    0x00000000, 0x59E79EA0, 0xEEA79E78, 0xFC837DF7, 0x0005EFBE, 0xE78BBDEF, 0xF0001FDE,
    0xFAC3DF7D, 0x9E78CBBE, 0x00A79F24, 0x7BDEEFC0, 0x0003FDEF, 0x06FBEFDC, 0x59E79EA0,
    0x00000000, 0x00000000, 0x00000000, 0x679E7A80, 0xBA9E79E1, 0xF20DF7DF, 0x0017BEFB,
    0xEF7BDFF8, 0x4006FFBD, 0x7DFBC6AE, 0x0F06F7DF, 0x679E79EA, 0x01C0122E, 0xF7BDEE7D,
    0x00AD6236, 0xDF7E47E0, 0xA8303DF7, 0x3F9E79E7, 0x00000000, 0x00000000, 0x10000000,
    0xAC903801, 0x31733CF9, 0x7DFBC47C, 0x3B33F06F, 0xF88B5C81, 0x714DFDCE, 0xDBF3DF0E,
    0x1627BDEB, 0x7BB19F2B, 0xFFB2F58C, 0x00377B58, 0xF7BDEF70, 0x0DFF7BDE, 0xFA85AE40,
    0x7E0DEFBE, 0xE679E7C8, 0x012E0124, 0x00000000, 0x00000000, 0x00000000, 0x3E400000,
    0xFDF58009, 0x02677ECF, 0xF7CC6291, 0xCF7FEA01, 0x2005BDFE, 0xF401CD46, 0xEF7BDEFF,
    0x95DE37FD, 0x4597AE40, 0x0DF7DF7E, 0xCF7C1196, 0x311F3CF3, 0x00006120, 0x00000098,
    0x00000000, 0xC2426000, 0xCF7C1180, 0x623F3CF3, 0x7DF7E458, 0x33BC525F, 0x001F9C81,
    0xF39024F9, 0x2DFFE7DD, 0x08E779E0, 0xDFBD4019, 0xC05FF73E, 0x4008CF98, 0xF7BDEFFF,
    0x5DE37FDE, 0x597AE409, 0xDF7DF7E4, 0xF7C11960, 0x11F3CF3C, 0x00061203, 0x00000980,
    0x00000000, 0x24260000, 0xF7C1180C, 0x23F3CF3C, 0xDF7E4586, 0x3BC525F7, 0x81F9C813,
    0x2FBDEF75, 0xBEF8EBE0, 0xEE303F98, 0xFD9E7FF7, 0x79E3019D, 0x033CF906, 0xDFFE8000,
    0xFFBDEF7B, 0xC812BBC6, 0xEFC8B2F5, 0x32C1BEFB, 0x9E79EF82, 0x240623E7, 0x1300000C,
    0x00000000, 0x00000000, 0x3018484C, 0x9E79EF82, 0x8B0C47E7, 0x4BEFBEFC, 0x9026778A,
    0xE77C43F3, 0x0738A6FE, 0xD7B7E7BE, 0x582C4F7B, 0x63DD8CF9, 0x1FF617AC, 0x0006EF6B,
    0xBDEFFF40, 0xE37FDEF7, 0x7AE4095D, 0x7DF7E459, 0xC11960DF, 0xF3CF3CF7, 0x06120311,
    0x00098000, 0x00000000, 0x26000000, 0xC1180C24, 0xF3CF3CF7, 0x7E458623, 0xC525F7DF,
    0xF9C8133B, 0xF177BDE1, 0x0003FBDC, 0x87BEFBE0, 0xC6177DF5, 0x3CF924F3, 0xFF400005,
    0xDEF7BDEF, 0x095DE37F, 0xE4597AE4, 0x60DF7DF7, 0x3CF7C119, 0x0311F3CF, 0x80000612,
    0x00000009, 0x00000000, 0x0C242600, 0x3CF7C118, 0x8623F3CF, 0xF7DF7E45, 0x133BC525,
    0x7A81F9C8, 0xDFB8029E, 0xC00002F7, 0x003FDEEF, 0xEF7BDC40, 0x1BDEF7BD, 0xF7DF1000,
    0x7DF7DF7D, 0xE79E17DF, 0x79E79E79, 0xF3D4079E, 0xBEFDC014, 0x80000017, 0xD4007EEF,
    0xDFFE8D13, 0xC9FDEF7B, 0x18095DE4, 0xBEFC8B1F, 0x0644F02F, 0xC808F3DF, 0x4C2AF240,
    0x00B88E60, 0xC00BBCFC, 0x46005CCC, 0x45F001FB, 0x6686004E, 0x4878C041, 0xE7CC0CCC,
    0x85A43E79, 0xC1BEFBE7, 0x39007E13, 0x7BDD5A3F, 0x17FFBDEF, 0x90017EFF, 0xBEB0024F,
    0x4CEFD9FF, 0x7CC62910, 0x7BFF501F, 0x802DEFF6, 0xDC073518, 0x7BAC177B, 0x0000006F,
    0x00000000, 0x00000000, 0x00000000, 0x001C1000, 0xF3CF3D49, 0x7E47E1FC, 0xB03DF7DF,
    0xC800013A, 0x77CE4127, 0xC0B7FF9F, 0x3211CEF3, 0x3EDFBD40, 0xCC605FF7, 0xF7B80467,
    0xDEF7582E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x92003820, 0xF9E79E7A,
    0xBEFC8FC3, 0x75607BEF, 0xEF758002, 0x75F02FBD, 0x1FCC5F7C, 0x9FFDFB8C, 0x60677F67,
    0x9F20CF3C, 0xEE000067, 0xBDD60BBD, 0x00000037, 0x00000000, 0x00000000, 0x00000000,
    0x800E0800, 0x79E79EA4, 0xBF23F0FE, 0x581EFBEF, 0xEF78009D, 0xFEF73C5D, 0xEFBE0000,
    0x77DF587B, 0xC9279E31, 0xC00029E7, 0xBAC177BD, 0x000006F7, 0x00000000, 0x00000000,
    0x00000000, 0x01C10000, 0x3CF3D490, 0xE47E1FCF, 0x03DF7DF7, 0x000013AB, 0xF39024F9,
    0x2DFFE7DD, 0x08E779E0, 0xDFBD4019, 0xC05FF73E, 0x3008CF98, 0x980FBDEF, 0x01C2F6F7,
    0x3C517E7F, 0x43872510, 0x2A3E283C, 0x443C38B8, 0x2463C451, 0xFC2A512E, 0x2EFE09E0,
    0xA94A2C13, 0x0DF27F00, 0x2992A07F, 0x0A81E016, 0xC02E0FC0, 0xF001E248, 0xFC3800B1,
    0x0592C401, 0xE0028560, 0x863003E3, 0x3C7E001C, 0x3EF7B880, 0x00000000, 0x00000000,
    0xDEF7BBE0, 0xC8006FFB, 0xBEFCC0B5, 0xB03E4DEF, 0x1F99E79F, 0x00120019, 0x00000000,
    0x00000000, 0x02400000, 0x9E79E7EC, 0xDF980C8F, 0x03C97DF7, 0xBE0D5C80, 0xFFBDEF7B,
    0x00000006, 0x00000000, 0x77BDE000, 0x03FBDCF1, 0xBEFBE000, 0x177DF587, 0xF924F3C6,
    0x3000053C, 0x980FBDEF, 0x01C2F6F7, 0x3C517E7F, 0x43872510, 0x2A3E283C, 0x443C38B8,
    0x2463C451, 0xFC2A512E, 0x2EFE09E0, 0xA94A2C13, 0x0DF27F00, 0x2992A07F, 0x0A81E016,
    0xC02E0FC0, 0xF001E248, 0xFC3800B1, 0x0592C401, 0xE0028560, 0x863003E3, 0x3C7E001C,
    0x00000000
EW_END_OF_FONT_RES( ApplicationNumbersP )

/* Table with links to derived variants of the font resource : 'Application::NumbersP' */
EW_RES_WITHOUT_VARIANTS( ApplicationNumbersP )

/* Font resource : 'Application::NumbersG' */
EW_DEFINE_FONT_RES( ApplicationNumbersG, 30, 7, 0, 16, 0x0016, 0x00BE )
  EW_GLYPH( 0x0016, 0, -29, 19, 36, 19, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 19, 0x0000059E ),               /* ' ' */
  EW_GLYPH( 0x0021, 6, -25, 7, 25, 19, 0x0000059E ),            /* '!' */
  EW_GLYPH( 0x0022, 4, -26, 11, 9, 19, 0x000006A7 ),            /* '"' */
  EW_GLYPH( 0x0023, 2, -25, 15, 25, 19, 0x00000731 ),           /* '#' */
  EW_GLYPH( 0x0024, 0, -25, 19, 25, 19, 0x000009CB ),           /* '$' */
  EW_GLYPH( 0x0025, 0, -25, 19, 25, 19, 0x00000DC5 ),           /* '%' */
  EW_GLYPH( 0x0026, 1, -25, 17, 25, 19, 0x000011E2 ),           /* '&' */
  EW_GLYPH( 0x0027, 7, -26, 5, 9, 19, 0x00001557 ),             /* ''' */
  EW_GLYPH( 0x0028, 4, -30, 11, 38, 19, 0x0000159A ),           /* '(' */
  EW_GLYPH( 0x0029, 4, -30, 11, 38, 19, 0x00001846 ),           /* ')' */
  EW_GLYPH( 0x002A, 2, -26, 15, 15, 19, 0x00001AF3 ),           /* '*' */
  EW_GLYPH( 0x002B, 2, -20, 15, 14, 19, 0x00001D66 ),           /* '+' */
  EW_GLYPH( 0x002C, 6, -3, 7, 9, 19, 0x00001EC7 ),              /* ',' */
  EW_GLYPH( 0x002D, 1, -14, 17, 4, 19, 0x00001F43 ),            /* '-' */
  EW_GLYPH( 0x002E, 6, -4, 7, 4, 19, 0x00001FF7 ),              /* '.' */
  EW_GLYPH( 0x002F, 1, -25, 17, 25, 19, 0x00002031 ),           /* '/' */
  EW_GLYPH( 0x0030, 1, -25, 17, 25, 19, 0x00002317 ),           /* '0' */
  EW_GLYPH( 0x0031, 1, -25, 17, 25, 19, 0x000026C3 ),           /* '1' */
  EW_GLYPH( 0x0032, 1, -25, 17, 25, 19, 0x00002903 ),           /* '2' */
  EW_GLYPH( 0x0033, 1, -25, 17, 25, 19, 0x00002C74 ),           /* '3' */
  EW_GLYPH( 0x0034, 1, -25, 17, 25, 19, 0x00002FF0 ),           /* '4' */
  EW_GLYPH( 0x0035, 1, -25, 17, 25, 19, 0x000032EC ),           /* '5' */
  EW_GLYPH( 0x0036, 1, -25, 17, 25, 19, 0x00003654 ),           /* '6' */
  EW_GLYPH( 0x0037, 1, -25, 17, 25, 19, 0x00003991 ),           /* '7' */
  EW_GLYPH( 0x0038, 1, -25, 17, 25, 19, 0x00003CCF ),           /* '8' */
  EW_GLYPH( 0x0039, 1, -25, 17, 25, 19, 0x000040BD ),           /* '9' */
  EW_GLYPH( 0x003A, 6, -15, 7, 15, 19, 0x00004416 ),            /* ':' */
  EW_GLYPH( 0x003B, 6, -15, 7, 21, 19, 0x000044D9 ),            /* ';' */
  EW_GLYPH( 0x003C, 3, -24, 13, 21, 19, 0x000045E5 ),           /* '<' */
  EW_GLYPH( 0x003D, 3, -19, 13, 10, 19, 0x00004848 ),           /* '=' */
  EW_GLYPH( 0x003E, 3, -24, 13, 21, 19, 0x000049B8 ),           /* '>' */
  EW_GLYPH( 0x003F, 1, -25, 17, 25, 19, 0x00004C2B ),           /* '?' */
  EW_GLYPH( 0x0040, 1, -20, 17, 26, 19, 0x00004F60 ),           /* '@' */
  EW_GLYPH( 0x0041, 1, -25, 17, 25, 19, 0x00005354 ),           /* 'A' */
  EW_GLYPH( 0x0042, 1, -25, 17, 25, 19, 0x000056C0 ),           /* 'B' */
  EW_GLYPH( 0x0043, 2, -25, 15, 25, 19, 0x000059F2 ),           /* 'C' */
  EW_GLYPH( 0x0044, 1, -25, 17, 25, 19, 0x00005CA7 ),           /* 'D' */
  EW_GLYPH( 0x0045, 1, -25, 17, 25, 19, 0x00005F57 ),           /* 'E' */
  EW_GLYPH( 0x0046, 1, -25, 17, 25, 19, 0x00006249 ),           /* 'F' */
  EW_GLYPH( 0x0047, 1, -25, 17, 25, 19, 0x000064E9 ),           /* 'G' */
  EW_GLYPH( 0x0048, 1, -25, 17, 25, 19, 0x000067F8 ),           /* 'H' */
  EW_GLYPH( 0x0049, 1, -25, 17, 25, 19, 0x00006A1F ),           /* 'I' */
  EW_GLYPH( 0x004A, 1, -25, 17, 25, 19, 0x00006CAB ),           /* 'J' */
  EW_GLYPH( 0x004B, 1, -25, 17, 25, 19, 0x00006F34 ),           /* 'K' */
  EW_GLYPH( 0x004C, 1, -25, 17, 25, 19, 0x0000723C ),           /* 'L' */
  EW_GLYPH( 0x004D, 1, -25, 17, 25, 19, 0x00007451 ),           /* 'M' */
  EW_GLYPH( 0x004E, 1, -25, 17, 25, 19, 0x00007746 ),           /* 'N' */
  EW_GLYPH( 0x004F, 1, -25, 17, 25, 19, 0x000079EA ),           /* 'O' */
  EW_GLYPH( 0x0050, 1, -25, 17, 25, 19, 0x00007CF8 ),           /* 'P' */
  EW_GLYPH( 0x0051, 1, -25, 17, 29, 19, 0x00007FCF ),           /* 'Q' */
  EW_GLYPH( 0x0052, 1, -25, 17, 25, 19, 0x00008362 ),           /* 'R' */
  EW_GLYPH( 0x0053, 1, -25, 17, 25, 19, 0x0000865A ),           /* 'S' */
  EW_GLYPH( 0x0054, 1, -25, 17, 25, 19, 0x000089EB ),           /* 'T' */
  EW_GLYPH( 0x0055, 1, -25, 17, 25, 19, 0x00008C27 ),           /* 'U' */
  EW_GLYPH( 0x0056, 1, -25, 17, 25, 19, 0x00008E95 ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -25, 19, 25, 19, 0x000091EF ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -25, 19, 25, 19, 0x000095C6 ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -25, 19, 25, 19, 0x000099CA ),           /* 'Y' */
  EW_GLYPH( 0x005A, 1, -25, 17, 25, 19, 0x00009CF9 ),           /* 'Z' */
  EW_GLYPH( 0x005B, 4, -30, 11, 38, 19, 0x0000A077 ),           /* '[' */
  EW_GLYPH( 0x005C, 1, -25, 17, 25, 19, 0x0000A2AB ),           /* '\' */
  EW_GLYPH( 0x005D, 4, -30, 11, 38, 19, 0x0000A596 ),           /* ']' */
  EW_GLYPH( 0x005E, 0, -26, 19, 12, 19, 0x0000A7CA ),           /* '^' */
  EW_GLYPH( 0x005F, -1, 3, 21, 4, 19, 0x0000A9E6 ),             /* '_' */
  EW_GLYPH( 0x0060, 3, -25, 10, 5, 19, 0x0000AA8C ),            /* '`' */
  EW_GLYPH( 0x0061, 1, -20, 17, 20, 19, 0x0000AB4F ),           /* 'a' */
  EW_GLYPH( 0x0062, 1, -26, 17, 26, 19, 0x0000AE3A ),           /* 'b' */
  EW_GLYPH( 0x0063, 1, -20, 17, 20, 19, 0x0000B0FC ),           /* 'c' */
  EW_GLYPH( 0x0064, 1, -26, 17, 26, 19, 0x0000B37F ),           /* 'd' */
  EW_GLYPH( 0x0065, 1, -20, 17, 20, 19, 0x0000B639 ),           /* 'e' */
  EW_GLYPH( 0x0066, 1, -26, 17, 26, 19, 0x0000B937 ),           /* 'f' */
  EW_GLYPH( 0x0067, 1, -20, 17, 28, 19, 0x0000BBE0 ),           /* 'g' */
  EW_GLYPH( 0x0068, 1, -26, 17, 26, 19, 0x0000BF53 ),           /* 'h' */
  EW_GLYPH( 0x0069, 1, -26, 17, 26, 19, 0x0000C1A8 ),           /* 'i' */
  EW_GLYPH( 0x006A, 3, -26, 13, 34, 19, 0x0000C44D ),           /* 'j' */
  EW_GLYPH( 0x006B, 1, -26, 17, 26, 19, 0x0000C70D ),           /* 'k' */
  EW_GLYPH( 0x006C, 1, -26, 17, 26, 19, 0x0000CA15 ),           /* 'l' */
  EW_GLYPH( 0x006D, 1, -20, 17, 20, 19, 0x0000CC79 ),           /* 'm' */
  EW_GLYPH( 0x006E, 1, -20, 17, 20, 19, 0x0000CE62 ),           /* 'n' */
  EW_GLYPH( 0x006F, 1, -20, 17, 20, 19, 0x0000D04F ),           /* 'o' */
  EW_GLYPH( 0x0070, 1, -20, 17, 28, 19, 0x0000D2E5 ),           /* 'p' */
  EW_GLYPH( 0x0071, 1, -20, 17, 28, 19, 0x0000D5DF ),           /* 'q' */
  EW_GLYPH( 0x0072, 2, -20, 15, 20, 19, 0x0000D8DD ),           /* 'r' */
  EW_GLYPH( 0x0073, 1, -20, 17, 20, 19, 0x0000DAB8 ),           /* 's' */
  EW_GLYPH( 0x0074, 1, -25, 17, 25, 19, 0x0000DDEE ),           /* 't' */
  EW_GLYPH( 0x0075, 1, -20, 17, 20, 19, 0x0000E07B ),           /* 'u' */
  EW_GLYPH( 0x0076, 0, -20, 19, 20, 19, 0x0000E25A ),           /* 'v' */
  EW_GLYPH( 0x0077, 0, -20, 19, 20, 19, 0x0000E546 ),           /* 'w' */
  EW_GLYPH( 0x0078, 0, -20, 19, 20, 19, 0x0000E856 ),           /* 'x' */
  EW_GLYPH( 0x0079, 0, -20, 19, 28, 19, 0x0000EBAB ),           /* 'y' */
  EW_GLYPH( 0x007A, 1, -20, 16, 20, 19, 0x0000EFA9 ),           /* 'z' */
  EW_GLYPH( 0x007B, 3, -30, 13, 38, 19, 0x0000F278 ),           /* '{' */
  EW_GLYPH( 0x007C, 7, -30, 5, 38, 19, 0x0000F5EB ),            /* '|' */
  EW_GLYPH( 0x007D, 3, -30, 13, 38, 19, 0x0000F6BC ),           /* '}' */
  EW_GLYPH( 0x007E, 2, -15, 15, 5, 19, 0x0000FA1E ),            /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 19, 0x0000FB2A ),
  EW_GLYPH( 0x00A1, 6, -17, 7, 25, 19, 0x0000FB2A ),
  EW_GLYPH( 0x00A2, 3, -25, 13, 25, 19, 0x0000FC33 ),
  EW_GLYPH( 0x00A3, 1, -25, 17, 25, 19, 0x0000FE71 ),
  EW_GLYPH( 0x00A5, 0, -25, 19, 25, 19, 0x00010174 ),
  EW_GLYPH( 0x00A6, 7, -30, 5, 36, 19, 0x0001053C ),
  EW_GLYPH( 0x00A7, 2, -25, 15, 29, 19, 0x0001062C ),
  EW_GLYPH( 0x00A8, 3, -25, 13, 4, 19, 0x00010A50 ),
  EW_GLYPH( 0x00A9, 1, -26, 17, 26, 19, 0x00010AC6 ),
  EW_GLYPH( 0x00AA, 3, -25, 13, 15, 19, 0x00010F3E ),
  EW_GLYPH( 0x00AB, 2, -18, 15, 13, 19, 0x0001110C ),
  EW_GLYPH( 0x00AC, 2, -16, 15, 9, 19, 0x00011360 ),
  EW_GLYPH( 0x00AD, 1, -14, 17, 4, 19, 0x0001147A ),
  EW_GLYPH( 0x00AE, 1, -26, 17, 17, 19, 0x0001152E ),
  EW_GLYPH( 0x00AF, 2, -26, 15, 4, 19, 0x000118F4 ),
  EW_GLYPH( 0x00B0, 3, -26, 13, 14, 19, 0x00011995 ),
  EW_GLYPH( 0x00B1, 2, -20, 15, 20, 19, 0x00011B26 ),
  EW_GLYPH( 0x00B2, 5, -25, 9, 12, 19, 0x00011D54 ),
  EW_GLYPH( 0x00B3, 5, -25, 9, 12, 19, 0x00011EC2 ),
  EW_GLYPH( 0x00B4, 6, -25, 10, 5, 19, 0x00012025 ),
  EW_GLYPH( 0x00B6, 1, -25, 17, 33, 19, 0x000120E7 ),
  EW_GLYPH( 0x00B7, 6, -15, 7, 4, 19, 0x000123D6 ),
  EW_GLYPH( 0x00B8, 7, 1, 5, 7, 19, 0x00012410 ),
  EW_GLYPH( 0x00B9, 6, -25, 7, 13, 19, 0x00012467 ),
  EW_GLYPH( 0x00BA, 3, -25, 13, 16, 19, 0x00012522 ),
  EW_GLYPH( 0x00BB, 2, -18, 15, 13, 19, 0x000126FA ),
  EW_GLYPH( 0x00BC, 0, -25, 19, 25, 19, 0x0001294B ),
  EW_GLYPH( 0x00BD, 0, -25, 19, 25, 19, 0x00012D7E ),
  EW_GLYPH( 0x00BE, 0, -25, 18, 25, 19, 0x000131F1 ),
  EW_GLYPH( 0x00BF, 1, -17, 17, 25, 19, 0x000136B6 ),
  EW_GLYPH( 0x00C0, 1, -30, 17, 30, 19, 0x000139C8 ),
  EW_GLYPH( 0x00C1, 1, -30, 17, 30, 19, 0x00013E1A ),
  EW_GLYPH( 0x00C2, 1, -30, 17, 30, 19, 0x0001426C ),
  EW_GLYPH( 0x00C3, 1, -30, 17, 30, 19, 0x000146DF ),
  EW_GLYPH( 0x00C4, 1, -30, 17, 30, 19, 0x00014B69 ),
  EW_GLYPH( 0x00C5, 1, -30, 17, 30, 19, 0x00014F99 ),
  EW_GLYPH( 0x00C6, 1, -25, 17, 25, 19, 0x000153BC ),
  EW_GLYPH( 0x00C7, 2, -25, 15, 33, 19, 0x000156DC ),
  EW_GLYPH( 0x00C8, 1, -30, 17, 30, 19, 0x00015A75 ),
  EW_GLYPH( 0x00C9, 1, -30, 17, 30, 19, 0x00015E4B ),
  EW_GLYPH( 0x00CA, 1, -30, 17, 30, 19, 0x00016220 ),
  EW_GLYPH( 0x00CB, 1, -30, 17, 30, 19, 0x00016602 ),
  EW_GLYPH( 0x00CC, 1, -30, 17, 30, 19, 0x000169B8 ),
  EW_GLYPH( 0x00CD, 1, -30, 17, 30, 19, 0x00016D28 ),
  EW_GLYPH( 0x00CE, 1, -30, 17, 30, 19, 0x00017097 ),
  EW_GLYPH( 0x00CF, 1, -30, 17, 30, 19, 0x0001742A ),
  EW_GLYPH( 0x00D0, 0, -25, 18, 25, 19, 0x0001777A ),
  EW_GLYPH( 0x00D1, 1, -30, 17, 30, 19, 0x00017AA2 ),
  EW_GLYPH( 0x00D2, 1, -30, 17, 30, 19, 0x00017E64 ),
  EW_GLYPH( 0x00D3, 1, -30, 17, 30, 19, 0x00018256 ),
  EW_GLYPH( 0x00D4, 1, -30, 17, 30, 19, 0x00018647 ),
  EW_GLYPH( 0x00D5, 1, -30, 17, 30, 19, 0x00018A41 ),
  EW_GLYPH( 0x00D6, 1, -30, 17, 30, 19, 0x00018E6D ),
  EW_GLYPH( 0x00D7, 3, -20, 13, 13, 19, 0x0001923F ),
  EW_GLYPH( 0x00D8, 0, -26, 19, 28, 19, 0x00019454 ),
  EW_GLYPH( 0x00D9, 1, -30, 17, 30, 19, 0x000198C8 ),
  EW_GLYPH( 0x00DA, 1, -30, 17, 30, 19, 0x00019C2D ),
  EW_GLYPH( 0x00DB, 1, -30, 17, 30, 19, 0x00019F93 ),
  EW_GLYPH( 0x00DC, 1, -30, 17, 30, 19, 0x0001A308 ),
  EW_GLYPH( 0x00DD, 0, -30, 19, 30, 19, 0x0001A63A ),
  EW_GLYPH( 0x00DE, 1, -25, 17, 25, 19, 0x0001AA6B ),
  EW_GLYPH( 0x00DF, 1, -26, 17, 26, 19, 0x0001AD57 ),
  EW_GLYPH( 0x00E0, 1, -27, 17, 27, 19, 0x0001B0BB ),
  EW_GLYPH( 0x00E1, 1, -27, 17, 27, 19, 0x0001B4BC ),
  EW_GLYPH( 0x00E2, 1, -26, 17, 26, 19, 0x0001B8BC ),
  EW_GLYPH( 0x00E3, 1, -26, 17, 26, 19, 0x0001BCBE ),
  EW_GLYPH( 0x00E4, 1, -26, 17, 26, 19, 0x0001C0D5 ),
  EW_GLYPH( 0x00E5, 1, -27, 17, 27, 19, 0x0001C494 ),
  EW_GLYPH( 0x00E6, 0, -20, 19, 20, 19, 0x0001C894 ),
  EW_GLYPH( 0x00E7, 1, -20, 17, 28, 19, 0x0001CC09 ),
  EW_GLYPH( 0x00E8, 1, -27, 17, 27, 19, 0x0001CF86 ),
  EW_GLYPH( 0x00E9, 1, -27, 17, 27, 19, 0x0001D39B ),
  EW_GLYPH( 0x00EA, 1, -26, 17, 26, 19, 0x0001D7AF ),
  EW_GLYPH( 0x00EB, 1, -26, 17, 26, 19, 0x0001DBC5 ),
  EW_GLYPH( 0x00EC, 1, -27, 17, 27, 19, 0x0001DF98 ),
  EW_GLYPH( 0x00ED, 1, -27, 17, 27, 19, 0x0001E2B2 ),
  EW_GLYPH( 0x00EE, 1, -26, 17, 26, 19, 0x0001E5CB ),
  EW_GLYPH( 0x00EF, 1, -26, 17, 26, 19, 0x0001E8E6 ),
  EW_GLYPH( 0x00F0, 1, -26, 17, 26, 19, 0x0001EBBE ),
  EW_GLYPH( 0x00F1, 1, -26, 17, 26, 19, 0x0001EF14 ),
  EW_GLYPH( 0x00F2, 1, -27, 17, 27, 19, 0x0001F22C ),
  EW_GLYPH( 0x00F3, 1, -27, 17, 27, 19, 0x0001F5D9 ),
  EW_GLYPH( 0x00F4, 1, -26, 17, 26, 19, 0x0001F985 ),
  EW_GLYPH( 0x00F5, 1, -26, 17, 26, 19, 0x0001FD33 ),
  EW_GLYPH( 0x00F6, 1, -26, 17, 26, 19, 0x000200F6 ),
  EW_GLYPH( 0x00F7, 2, -21, 15, 15, 19, 0x00020461 ),
  EW_GLYPH( 0x00F8, 1, -23, 17, 26, 19, 0x00020632 ),
  EW_GLYPH( 0x00F9, 1, -27, 17, 27, 19, 0x00020A07 ),
  EW_GLYPH( 0x00FA, 1, -27, 17, 27, 19, 0x00020CFD ),
  EW_GLYPH( 0x00FB, 1, -26, 17, 26, 19, 0x00020FF2 ),
  EW_GLYPH( 0x00FC, 1, -26, 17, 26, 19, 0x000212E9 ),
  EW_GLYPH( 0x00FD, 0, -27, 19, 35, 19, 0x0002159D ),
  EW_GLYPH( 0x00FE, 1, -26, 17, 34, 19, 0x00021ABF ),
  EW_GLYPH( 0x00FF, 0, -26, 19, 34, 19, 0x00021E1F ),

  EW_FONT_PIXEL( ApplicationNumbersG, 0x000222FE )              /* ratio 48.16 % */
    0xEFBEFD3C, 0xFBEFBEFB, 0xF83F6FBE, 0x9CE735BE, 0xE739CE73, 0x1E27DF5C, 0x0013C000,
    0x00000000, 0x739CE735, 0x00E739CE, 0xDF7DF79C, 0xF7DF7DF7, 0x3900BFDD, 0x8C6318C6,
    0xDE83FA81, 0xF7BDEF7B, 0x003C61FE, 0x000E16A0, 0x8000A1F0, 0x0000040C, 0x24080003,
    0x00481800, 0x400143E0, 0x3007C4F6, 0x85FFBDF6, 0x03DA801E, 0x5E00BBE4, 0xFDEF7D9E,
    0xC691804F, 0xA2C00037, 0x00780001, 0x00088F00, 0x000BBC40, 0x00017CC0, 0xEDF00000,
    0x500007BD, 0x00058C63, 0x23200000, 0xCFB00002, 0x00000539, 0x00002200, 0x40003A11,
    0xBDECF334, 0xEF7BDEF7, 0xD33EF7BD, 0xF7BDEF73, 0x00000001, 0x00000000, 0x00000000,
    0x3C000000, 0x1F7BDEF7, 0xF7B9E000, 0x0000FBDE, 0x0DEF7B80, 0x017BDEE3, 0x00000000,
    0x00000000, 0x7B880000, 0x1F7BAC5F, 0x00000000, 0x00000000, 0xF8000000, 0xF7BCC3DD,
    0x017DDF36, 0xEF800000, 0xCE739E6C, 0x911D3DE2, 0x8CB8888C, 0x00000008, 0x00000000,
    0xBCC3DDF8, 0x7DDF36F7, 0x80000001, 0x739E6CEF, 0x1D3DE2CE, 0xB8888C91, 0x0000088C,
    0x00000000, 0xDFF80000, 0x00000005, 0x46E08888, 0xFD404444, 0xAD2739CF, 0x8D39CE73,
    0xC00025F1, 0xA6F73C1B, 0xFBDEF7BE, 0x8002F0A2, 0x00000C08, 0x01808000, 0x00BC0C00,
    0xBDCF0FC0, 0x77BDEFA9, 0x8004AC0F, 0x000EE071, 0xE7DC85C8, 0xF9D6939C, 0x22207E17,
    0x18D91B82, 0x0448C000, 0x00000000, 0xC9320000, 0x82222220, 0x58A2F91B, 0x4E739CE7,
    0xC45FE75A, 0xBF20000F, 0xEF7BDD64, 0xBDEFA9BD, 0x00005FF7, 0xF7BFF3C0, 0xEF71179E,
    0x23233A03, 0x03C4A0E6, 0x4FFFE691, 0x57003D71, 0x0007F282, 0x8000508C, 0x8000919F,
    0x1C800052, 0x44AE007E, 0x9A440189, 0x57F53FFF, 0x11919D00, 0xC02E3C73, 0x9EF7BFF3,
    0x000509F7, 0x00002AD8, 0x46000365, 0x7BDCEFAA, 0x725005FF, 0xF22A313D, 0xC1A9F805,
    0x202537FF, 0x09708D86, 0x00078960, 0x00003DB0, 0xA8000FE5, 0xBF800050, 0x010E9091,
    0xFFD8314A, 0x7E918069, 0xB29113D4, 0xF7B9EF11, 0x00EF7BDE, 0x400033FE, 0x44C0000F,
    0xE739CEFC, 0xB781180C, 0x4C022222, 0x06000078, 0x00060200, 0x5000502A, 0x444455F8,
    0x4BF04444, 0x39CE77F2, 0x96739CE7, 0x3C800038, 0xC9378000, 0x77C1EF7D, 0x37C2CAEF,
    0x00505800, 0x1C004848, 0x00038000, 0x28009010, 0xE2640028, 0x88C488AD, 0x9DF887E0,
    0xB39EF1B3, 0xF80002CC, 0xF78000AD, 0x0002FBDE, 0x40000000, 0xEF7BFF7D, 0x4F7EFC4B,
    0xC017F882, 0x73BF906F, 0xA7078F4E, 0x350A2222, 0x1206C1C0, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x1C0C0010,
    0x1980A2E0, 0x88C9EFE4, 0xFDF505F0, 0x25F569CF, 0x4F7FFA80, 0xFBDEEFC2, 0xCE40077F,
    0xE78005FD, 0xF9CE77CF, 0x1115E325, 0x82662F51, 0x7030142A, 0x00000B81, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xC0000000,
    0x7F850041, 0x4BF3E444, 0xF9CEF9F2, 0x00BC457F, 0x9E302FF9, 0x04003FEF, 0xBFFBF000,
    0x31FBE00F, 0xEF81FE73, 0x07E0D7A9, 0xC63F3162, 0x1EC455C8, 0xFEFFD83C, 0x3180F623,
    0x33BFD128, 0x5622B900, 0xFFE75005, 0xD4044185, 0x3BE7BF0B, 0xB0FAC183, 0xFF2467BE,
    0x231F0041, 0x203F59FE, 0x0FEE23D2, 0x47FFFFD0, 0x2F7B8802, 0x00000000, 0x00000000,
    0x0F7BDEEB, 0x3EF7BDEE, 0xC0000000, 0x8D9CE73A, 0x8F39CE73, 0x44448888, 0x00000044,
    0x00000000, 0x7BDEE780, 0x441200EF, 0xE0480780, 0x40980300, 0x11111112, 0x11111111,
    0x9CE739C6, 0xE739CE73, 0x0002739C, 0xE7800000, 0x03EF7BDE, 0xC0000000, 0x0005DEEF,
    0x40017255, 0x678003F3, 0x5E001318, 0xC398005E, 0x47E00078, 0x554AC003, 0x00D2F000,
    0x0019E1D0, 0x40034988, 0xC8009987, 0xD0007E25, 0xF2002661, 0xBC002F11, 0x518001BC,
    0xF3400162, 0x5C954002, 0x00FCD000, 0x04C619E0, 0x8005E680, 0x0003C699, 0x56001A3F,
    0xE20002AA, 0x7BDEF73D, 0x206F3DEF, 0xCC400CF6, 0x80097E3F, 0xCF07CAF1, 0xB0939CFF,
    0x465F10A2, 0x45D44264, 0x13FC07C1, 0x0224587F, 0x00F109E0, 0x002EA5C0, 0xB00038A2,
    0xFC001642, 0x8B200079, 0x8C3C001F, 0x3F1F0001, 0x04C91800, 0x000A8F80, 0xF8001C58,
    0x485C2885, 0x88902A0C, 0xE1441C03, 0x119880FF, 0xF95105F9, 0xF9CFFC40, 0x25F85617,
    0xFB134600, 0x7FCC4009, 0xDEF7B9E0, 0x000DEF7B, 0x00000000, 0x00A739CF, 0x00004440,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x44444000, 0xB0888C80, 0x14E739CE, 0x79CE73EC, 0x00000000, 0xDEF7B9E0,
    0xFFBDEF7B, 0xFAE40006, 0xC4D40001, 0xE739CE73, 0x83F02F9C, 0x78888888, 0xE0007226,
    0x12000F07, 0x00000002, 0x3F000212, 0x22222078, 0xC18899E2, 0x739CE7D8, 0x197817CE,
    0x58C001FF, 0x6B1000DC, 0xEE750393, 0x469EF7BD, 0x0E000DC1, 0x0C04004C, 0x00000000,
    0x00000000, 0x44444464, 0x7D804444, 0x9CE739CE, 0x00034E73, 0xDEF00000, 0xF7BDEF7B,
    0x057F7BDE, 0x04DFA800, 0xE7D4E800, 0x39CE739C, 0x44F885FF, 0x44444444, 0x8001E276,
    0x17000907, 0x00000002, 0x0A00042E, 0x64444405, 0x7D81FC0F, 0xD42FF9CE, 0x01FC0004,
    0xFF007A00, 0x41DDEF7B, 0x8BC60034, 0x2C14004A, 0x00242400, 0x04240000, 0x11907E00,
    0x11111111, 0xE7D51135, 0x39CE739C, 0x017817E7, 0x4000B500, 0x38801FAC, 0x037BDEF7,
    0xC0000CC0, 0x0198000B, 0x0011F800, 0x00059330, 0xE0036A3F, 0xBC002E49, 0x0D40028C,
    0x519A001A, 0x0BC1A800, 0x00F19700, 0x001F1460, 0x4004E4BC, 0xE000FC3E, 0x48004E47,
    0xEF7BDEF2, 0x00BEE707, 0x7C000000, 0xCE739CE7, 0xD3EC2F39, 0x11111111, 0x00232031,
    0x00000000, 0xF7BBF000, 0xBDEF7BDE, 0x03FBDEF7, 0x00000000, 0x39CE73C8, 0x01F39CE7,
    0x22222222, 0x00000022, 0x00000000, 0x7BC80000, 0x9EF7BDEF, 0x73100017, 0xE58C0003,
    0x739CE73B, 0xF13B39CE, 0x8888888A, 0x443F1888, 0x0060A001, 0x0000E120, 0x80000000,
    0x05800384, 0x51070003, 0x11111111, 0x7CB0AB11, 0xCE739CE7, 0x3F11A739, 0x00274000,
    0xDCC26FC8, 0xEF7BDEE7, 0xF785F7BD, 0x3900011D, 0xF5050001, 0x739CE73F, 0x233A071A,
    0x01022222, 0x00000009, 0x00000000, 0x88888C80, 0x9CFB0008, 0xE739CE73, 0xFCC40005,
    0x00D40001, 0xEF7BDEE7, 0x82800507, 0x00000003, 0x00000000, 0x02000000, 0x03880C12,
    0x3644466F, 0x7FE7829C, 0x503FF9CE, 0x4CC00139, 0x10023BEF, 0xBDEEBEF5, 0xEF7BDEF7,
    0x7BDEF7BD, 0x0700007F, 0x39CF9000, 0xCE739CE7, 0x23C0FF39, 0x22222222, 0x003E0662,
    0x40093C5C, 0x3E000E16, 0xE2600164, 0x4C0CC003, 0x02787C00, 0x00703180, 0x800B21F0,
    0x3000F858, 0xF8009883, 0x25400150, 0xB20E000E, 0x1F07C800, 0x04C43E00, 0x000544C0,
    0xE000E04F, 0x51800B20, 0x21F000F8, 0xBEF40026, 0xEF7BDEF7, 0x00D7B06E, 0x03D1B58C,
    0x60F16300, 0x4ECE73EC, 0x23D1327C, 0x8C8BC622, 0x90502889, 0x00480181, 0x00313000,
    0x0C411C89, 0x70B0C850, 0x178C4447, 0xEC60EF1F, 0x6A4ECE73, 0x33001231, 0x3C800139,
    0xEE73C49E, 0xC630A7BD, 0x78817E1F, 0x201912A1, 0x01302713, 0x04001600, 0x89103012,
    0x6702A018, 0x31111DC3, 0x312A785E, 0x276739F6, 0x0006F0C6, 0x27FF52E2, 0x81ECF100,
    0xF7BDCFB5, 0x6FCF7BDE, 0x8011EBE2, 0x078DB7A8, 0xA828CC00, 0x0F6739FF, 0x19B81D44,
    0x0483E311, 0x301C2413, 0x002002C0, 0x04000000, 0xC000C000, 0x22222781, 0x73E82826,
    0x181F39CE, 0xB7C0000F, 0xFFD00012, 0xF7BDEF7B, 0x0000006E, 0x00000000, 0x78000000,
    0x111110E0, 0x483E3111, 0xCE739CE3, 0x280F6739, 0x000AC000, 0x73DB7A88, 0x01F7BDEF,
    0xBDCF0000, 0x0007DEF7, 0x80000000, 0xEF7BDEE7, 0x9E000003, 0x0FBDEF7B, 0xEE780000,
    0x003EF7BD, 0x00000000, 0xEF7B9E00, 0x104803BD, 0x81201E01, 0x02600C03, 0xE0000009,
    0x17620017, 0x000FFC80, 0x18010EE3, 0x805F14FF, 0x17F887FA, 0x3DC85F98, 0xD8C37AC0,
    0x7FA9BA09, 0xBF516F80, 0x014F1200, 0x026F89BA, 0x5DE217D6, 0x741FE780, 0xD64EC603,
    0x3C5DC807, 0x1EFC403F, 0x05BE002A, 0xB000DD00, 0x1111113E, 0xB1111111, 0x9CE739CF,
    0x1B39CE73, 0xFF800000, 0x7BDEF7BD, 0x0FF7BDEF, 0x22222200, 0x62222222, 0x39CE739F,
    0x36739CE7, 0x01000000, 0xC001F900, 0xD4000BF3, 0x7630003F, 0xF217C602, 0x85F3C00E,
    0xFEA017FC, 0x3007BE29, 0x026F8A6E, 0x06DE0F72, 0x17AC1EC4, 0x980224F0, 0x41B7885F,
    0xC137C4BF, 0x817FC8B7, 0x03B8C3DF, 0x3FD457E2, 0x2FCF1641, 0x400FAC00, 0x37C00DBC,
    0xDEF71801, 0xF7BDEF7B, 0x0000FDDE, 0x0000B7C6, 0x39CE34DE, 0x4E739CE7, 0x44447E23,
    0x2AC44444, 0x23F8002C, 0x09090002, 0x09000000, 0x223F8001, 0xA1562201, 0xA739EF00,
    0x0CF605E1, 0x06B00D60, 0x3F036F90, 0xFEF7BBE2, 0x0F992027, 0x0007E000, 0x3800061E,
    0x39CF0000, 0x00088000, 0xF7BDEEB0, 0x00000006, 0x00000000, 0x7BDEEFC6, 0xDEF7BDEF,
    0x0BFE4BBB, 0x278BE300, 0x3FAC4000, 0xE739CE75, 0x4E2FF39C, 0x88888FF0, 0x6043C888,
    0x00009800, 0xF7BED400, 0x37E400BE, 0xF2278000, 0x5FC002FF, 0xE98000E5, 0x00010000,
    0x20001D30, 0x97F00014, 0x06EF33F7, 0x88000198, 0x9E00005F, 0xE739CE73, 0x1100D39C,
    0x01111111, 0x001B0000, 0x7BDEF324, 0xDEF7BDEF, 0x003FDF7B, 0x0009BD40, 0xCE73FF98,
    0x739CE739, 0xF60D39CE, 0x0FDEF7BD, 0xC00B0480, 0xF0099008, 0xB804C5E0, 0x7806C2C4,
    0xC00608C8, 0x00787A60, 0x04892903, 0x0B071C1E, 0xFE2478D8, 0x289A42C0, 0x81844910,
    0x49120F04, 0x9898180C, 0x3F8FE078, 0x242C2E06, 0x22441E0E, 0x1E060222, 0x5E739DF8,
    0x50006C18, 0xE7F0000C, 0xDEF7BCC1, 0xC0C960FB, 0x058C8901, 0xF9E1FC03, 0xC61304C3,
    0xFE030480, 0xBDEF7BBF, 0xEF7BDEF7, 0xE300007E, 0x3D00005B, 0x39CE7D80, 0x11901F0D,
    0x00B0AB11, 0x00122360, 0x00000109, 0x80090900, 0x11900C8D, 0x00F0AB11, 0x1A739CFB,
    0x3F0001A3, 0xE02E8000, 0x3FEF7BDC, 0xC6C800D1, 0x28280018, 0x001C0400, 0x08080000,
    0x20382C00, 0x23462223, 0x9CE7D816, 0x002B03B3, 0x2000D180, 0x7E303FE6, 0xEF7BDEE7,
    0xD5FEF7BD, 0x6F0002BF, 0xA893C000, 0x9CE739FF, 0xBC45F673, 0x11111119, 0x8024F131,
    0x00100244, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x10000000, 0x0240C000,
    0x8024F0B0, 0x2233788B, 0x49E22222, 0x739CFFD4, 0x1BDB39CE, 0x05FEA000, 0xBDEF7580,
    0xEF7BDEF7, 0x200037FD, 0xA0000FD7, 0x739DF026, 0x01F817CE, 0x99E22233, 0x1F8001C8,
    0x2424004C, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x21200000, 0x0783F000, 0x678888CC, 0xCEF80722, 0x7C0BE739, 0x005A8000, 0x718FD620,
    0xDEF7BDEF, 0xF7BDEF7B, 0x000000DE, 0xE73C0000, 0x39CE739C, 0x111804E7, 0x11111111,
    0x00000000, 0x00000000, 0x18000000, 0x01111111, 0x9CE739E0, 0x0000CE73, 0x60000000,
    0xBDEF7BDE, 0x00000077, 0x00000000, 0x00000000, 0x23000000, 0x22222222, 0x39CE7802,
    0xCE739CE7, 0x00000009, 0xEF7B9E00, 0x7BDEF7BD, 0x0EF7BDEF, 0x00000000, 0x9CE73AC0,
    0x6739CE73, 0x11111B80, 0x00011111, 0x00000000, 0x00000000, 0x00000000, 0xF7BDEF7D,
    0x000005DE, 0x3AC00000, 0xCE739CE7, 0x1111B802, 0x00000111, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xF7FEB000, 0xBDEF7BDE, 0x76F1FEF7, 0x009A8002, 0xCE7D0B80,
    0xB39CE739, 0x1159E145, 0x21111111, 0xC26002E1, 0x00000004, 0x00000000, 0x22222200,
    0x739E0022, 0x9CE739CE, 0x00000001, 0xF7B9E000, 0x0000006E, 0x00000000, 0x13010000,
    0x005C0F00, 0x22B3C0C4, 0x42F02622, 0x07CE739F, 0xC0000F3C, 0xBF0009D7, 0x100DEF7B,
    0x02FBDEF7, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x19000000, 0xC0091111,
    0xB39CE73E, 0x00000001, 0x7BDCE000, 0x00003DEF, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x80000000, 0xF7BDEF71, 0xBDEF7BDE, 0x0000DEF7, 0x9C600000, 0x3C81CE73,
    0x22139CE7, 0x44440222, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x11000000, 0x22220111, 0x9CE738C2, 0x39CE7903,
    0x00000027, 0xBDEF0000, 0xEF7BDEF7, 0x000001BD, 0x73E80000, 0x800B39CE, 0x0B888888,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xFC000000, 0x18500021, 0x44444444, 0x712817E4, 0x9CE739CE, 0x1F107FF3, 0x0013A000,
    0xBFF26FD4, 0xEFA05EF7, 0x300277BD, 0x70026A26, 0xE8017883, 0x63004E81, 0x270026A2,
    0x4E800F88, 0x0B180074, 0x88380135, 0xD12F800F, 0x9A83C001, 0x00018000, 0x0F001330,
    0x5F8007E2, 0xF1002660, 0x05600342, 0x1780019E, 0x512B001A, 0x341F8005, 0x3C626600,
    0x0BC1F800, 0x26303980, 0x01F85E00, 0xB5C819E0, 0x0077BDEE, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xC0000000, 0x8888888C, 0x73BE0088, 0x9CE739CE, 0x00001E73, 0x7BDE0000,
    0xEF302DEF, 0x048177BD, 0x060B8007, 0x00260900, 0x1002440F, 0x89800489, 0x0E060007,
    0x000C1C00, 0x004783C2, 0x03C224A4, 0x30F488F0, 0x72530E00, 0x21C30600, 0x837F2601,
    0xF4C32007, 0x32900088, 0x14C003C2, 0x9FC00193, 0x292001CD, 0x4816001E, 0x00321200,
    0xB0005890, 0x38900090, 0xBDEF7BC0, 0xBDEE300F, 0x80001C0B, 0x0F80004A, 0x00026000,
    0x700003C4, 0x012A0000, 0xC001F120, 0x4F000987, 0xC6000F10, 0x0F8001C4, 0x07C80095,
    0x4C1C001F, 0x1E24A800, 0x00E1F800, 0x01EA0AC0, 0x007C2C40, 0xC00061F0, 0x03800028,
    0x0024F000, 0x300007C0, 0xB9DF1003, 0xEF7BDEF7, 0x9FB902F9, 0x83B3C400, 0x3F900137,
    0x9CFB90A3, 0x164F13B3, 0xD18888F4, 0x03C47F50, 0x0181B81E, 0x00002448, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x04000000, 0x7F912006, 0x381E03C4,
    0x62223D05, 0x90A33C34, 0x13B39CFB, 0x4004DE95, 0x027EE47E, 0xEF0ECF10, 0x7BDEF7BD,
    0xBFF7BDEF, 0x0DD90000, 0xF006B000, 0x2FCE739D, 0x223302F0, 0x000A26A2, 0x3000A236,
    0x20300121, 0x20000000, 0xB0500121, 0x322F1800, 0xDEF7BEC1, 0x0001F81D, 0x9880026A,
    0xCE77C03F, 0x179CE739, 0x44444660, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x3DE20000, 0xEF7BDEF7, 0xF6206F3D, 0x1DCC400C, 0xF90012FC, 0x9F720F93, 0x89E27673,
    0x31111E82, 0x0785D61A, 0x0912703C, 0x00000448, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x24000000, 0xE0709012, 0x07DC0F01, 0x68C4447A, 0x3EE42CA8,
    0xA544ECE7, 0x2F90012F, 0xC4009FB1, 0x9DF113B3, 0xBE7D1B7B, 0x0F833000, 0x0F916200,
    0x1BBAFC00, 0xBDEF7BAC, 0xCF7BDEF7, 0x8C40005E, 0xD40001FE, 0xCE73BE02, 0x603E05F9,
    0x8BD44446, 0x103C004C, 0x00984800, 0x84800100, 0x26428009, 0x0F87E300, 0xBBDEF7D8,
    0x8000B993, 0xCF0001A7, 0xCE77C01E, 0x07905F39, 0xCF111198, 0xFE001642, 0x10580090,
    0x00004800, 0x00000000, 0x00000000, 0xA0000000, 0xDEF7BDCF, 0x0FBDEF7B, 0xB0000AF6,
    0x45E00006, 0x39CE73EE, 0x05479CE7, 0x2222237E, 0x0B018222, 0x00020700, 0xA0700020,
    0x09D09000, 0x7FF20540, 0xBFF7BDEF, 0xEC800B10, 0x8001DE1F, 0x009DD85A, 0xF7FEB07C,
    0x44BF7BDE, 0x869E000E, 0x020B0007, 0x10000900, 0x48480010, 0x11E0FC00, 0x11111111,
    0x77C2A273, 0x9CE739CE, 0x001A06F3, 0xC80006B0, 0xDEF719B7, 0xF7BDEF7B, 0x0DEF7BDE,
    0x00000000, 0x9CE739C6, 0x39CE7382, 0x40222221, 0x00004444, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xFBDEF780, 0xEF7BDC07, 0x0000000B, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x20400000, 0xE0738481,
    0x41640F01, 0x17A8888F, 0xF720F951, 0x5817E739, 0x180097E1, 0x0027EC4D, 0x7FE1FF31,
    0xBE80DDEF, 0x0185EEF7, 0x90FE7818, 0xB05D83C0, 0x80D60640, 0x34C8983F, 0xF1606090,
    0x363F8160, 0x1E160917, 0x2488181E, 0xF1302306, 0x7F0781E0, 0x48186C0C, 0x8FE031FC,
    0x85828585, 0x06403244, 0x28078186, 0xE06C1E3C, 0x0162E38F, 0x2643C303, 0x2C1A60F0,
    0xD8592440, 0x3C3F0B00, 0x01881B00, 0x800F00F0, 0x90036011, 0xDEEF8060, 0xBBF003FB,
    0x0003BEF7, 0x09839C2C, 0x01891020, 0x01023120, 0x0084E600, 0xC180E404, 0x088497BD,
    0x41008908, 0x89A40962, 0x4C4C2264, 0x4A408B03, 0xE09240A4, 0x5C38BAE0, 0x0814891C,
    0x94C4C312, 0xF4844C18, 0xAC093048, 0x48988B60, 0xC6292206, 0x4E411040, 0x01066199,
    0xDA537F03, 0xD2189848, 0x28905894, 0x8483DFC7, 0x81C12900, 0x0209A60B, 0x0304A412,
    0x80884426, 0xDEF7BE89, 0xDEF7BC09, 0x0FE06F3F, 0x2C47E162, 0xE41580D4, 0xF07E0FC4,
    0x60F907C3, 0xE05892A2, 0x4C1C3C45, 0x288E1460, 0x545C05E2, 0xA00660CE, 0xF11F7E06,
    0x93317801, 0x019E0095, 0x81F000FC, 0x80F00127, 0xE0BC003F, 0x88164005, 0x482FC009,
    0x1162007C, 0xF0051827, 0x170A3506, 0x45C71310, 0x5906600D, 0xBC07C09E, 0x02B0B0F8,
    0x43E26066, 0x0543F0BC, 0x4CC4C0C6, 0x4C43F01C, 0x2603E43E, 0xF7B9C4FC, 0xF7B9C01E,
    0x3C42889E, 0x1C2B02A0, 0x1F0FE0D8, 0x18502895, 0x60721F03, 0x50983E24, 0x2882C428,
    0x02B1B0FC, 0x85108C1C, 0x4B02780F, 0xC4C00C61, 0x7C01F176, 0x026228A8, 0xB06F1164,
    0xE163F800, 0x18066003, 0x7C0B0003, 0x4C41F000, 0x00F01800, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xD6000000, 0x7BDEF7BD, 0xDEF7BDEF, 0x0000177B, 0xE7588000,
    0x39CE739C, 0x29C89FE7, 0x22222222, 0x4003F12A, 0x56004C63, 0x5E2005E0, 0x0E80078C,
    0x50B90034, 0x1A074005, 0x19E0F180, 0x03445C00, 0x04AC0CF0, 0x003445E0, 0x00066073,
    0x5801788D, 0xC4003781, 0x74005C8B, 0x2E4007E0, 0x0740098C, 0x1111117E, 0xD03C6111,
    0xCE739CE7, 0x00156739, 0xF7800000, 0xBDEF7BDE, 0x0000BEF7, 0x9CE77C00, 0x44661A73,
    0x00000444, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x44660000, 0xE77C0444, 0x001A739C, 0x7EF75800,
    0x67A56000, 0x0D1F8000, 0x02AA6600, 0x80034D00, 0x000F1867, 0xC0017978, 0x00098C33,
    0xA8001F9A, 0x34000B92, 0x78C0006F, 0x9A000BC4, 0x8F900019, 0x61D00068, 0x12E40025,
    0x3C3A000D, 0xD2620003, 0x350DE000, 0x2E5E2000, 0x3C615800, 0x0179A000, 0x02634CC0,
    0x0007E680, 0x7BD7219E, 0xDEF7BDEF, 0x00005F7B, 0xE739CFA0, 0x1111107C, 0x00000131,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x11111000, 0x39CFA131, 0x00007CE7, 0x00000000, 0x0003FC60,
    0x00FF2710, 0x1F1A7F80, 0xAC477800, 0xD6001678, 0x0FD6EBF4, 0x98FD6A80, 0xF2006FCB,
    0xC5742CF3, 0xC6371009, 0xFF237E07, 0x03FCCBE0, 0x6F0F8E4E, 0x9E4009C5, 0xFD399678,
    0xD3F18006, 0xEF7BDC4F, 0x7BDEF7BD, 0xDEF7BDEF, 0x0000037B, 0x00000000, 0x05663000,
    0x39DFDF30, 0x44039EBF, 0x57FF77AD, 0xB9011ACF, 0xE73EDFDE, 0x7B9E6BFF, 0xDEF7BDEF,
    0x0002F67B, 0x000FF462, 0x39CF06A0, 0xFE739CE7, 0x1110FC0F, 0x90D91111, 0x00084800,
    0x11111000, 0xFE780111, 0xCE739CE7, 0x12FCC039, 0x00034400, 0xEFFE6066, 0x3F80F7BD,
    0x26004DE2, 0x00000006, 0xF0001898, 0x8888CC47, 0xEF033048, 0x0D9CE739, 0xF00007E2,
    0xBC000AFC, 0x003BDEF7, 0x00000000, 0x00000000, 0xC0000000, 0x7BDEF7BE, 0x00025FFF,
    0x0001ECF9, 0xE77C0B88, 0x4607B39C, 0x31111982, 0x4800583E, 0x002C0048, 0x00000000,
    0x00000000, 0x00000000, 0xC0000000, 0x48480002, 0xEA222330, 0xE77C0B07, 0x8C4BF39C,
    0x02E20004, 0x40F67C80, 0xEF7BFFBE, 0x7BDEF7BD, 0x4CF630EF, 0x0001D000, 0x9CEFC428,
    0xE739CE73, 0x1155018C, 0x61111111, 0x00001FC2, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xC26002E0, 0x9A80C000, 0x11111119, 0x3FFBC141, 0xCE739CE7, 0x00003A19,
    0x0004CF63, 0xDEF73C00, 0x000000BB, 0x00000000, 0x00000000, 0xBDEFFDF9, 0x180FDEF7,
    0xD00049FB, 0x61640001, 0x79CE73EC, 0x447782C1, 0x30900C44, 0x00000001, 0x00000000,
    0x00000000, 0x00000000, 0x1E000000, 0x006C2400, 0x4656782C, 0xD05900C4, 0x0BCE73FF,
    0xC6000074, 0x7800127E, 0x7BDEE77E, 0x4F77BDEF, 0x6002AFCC, 0x00068BBC, 0xFA813C6F,
    0x0FCE739F, 0x23270951, 0x0F206A22, 0x00E1604C, 0x89800000, 0x22223300, 0xDF01C49E,
    0x0F9CE739, 0x1330000A, 0xC0BF6400, 0x7BDEF7BE, 0x00017FEF, 0x81C00000, 0x33848009,
    0x22222222, 0xCFB50278, 0xB39CE739, 0xF30000D1, 0x200000AB, 0xEF7BDF7A, 0xFE01F7BD,
    0x6780006B, 0xAC360000, 0x3CE739FF, 0x2233A120, 0x78005802, 0xC077BDEE, 0x000EF7BD,
    0x78000000, 0xE12739CE, 0x2206739C, 0x04444022, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x7BDCEFD4, 0xDEF7BDEF,
    0x57E7977B, 0x007E0001, 0xDF8C0A80, 0x607CE739, 0x11115BC0, 0x00585C13, 0x00001808,
    0x00000000, 0x00000000, 0x00000000, 0x04800000, 0x800581C0, 0x22233701, 0xFD40A826,
    0x03E739CF, 0xFE60001A, 0xFA80002A, 0xBDEF7B9D, 0x00000377, 0x00005800, 0x22221203,
    0x26179F22, 0x39CE739E, 0x03902FFF, 0x2000D000, 0xEF78F7EA, 0x000037BD, 0x00000000,
    0x00000000, 0xB9C00000, 0xCF7BDEF7, 0x5100026F, 0xCC00036F, 0x739CFB00, 0x902885FE,
    0x20791111, 0x00E13001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xF7B9E000, 0x0000FBDE, 0x00000000, 0xDEE78000, 0x0003EF7B,
    0xDEF73C00, 0xF7BDEF7B, 0x0000000F, 0x739CF000, 0x440049CE, 0x00000444, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x22200000, 0x44444022, 0xE739CE78,
    0x739CF224, 0x000000CE, 0xBBF00000, 0x003FDEF7, 0x00000000, 0xDEF7BBF0, 0xF758003F,
    0xBDEF7BDE, 0x0007DEF7, 0xCE758000, 0x202CE739, 0x02E22222, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x087F0000, 0x0B391111,
    0x9CE73AE6, 0x09181BFF, 0x7C803440, 0x7BDEE5FE, 0x000000FF, 0x00000000, 0x00000000,
    0xE7180000, 0x2003FBDE, 0x801F904F, 0x009C4938, 0x06FC0DF0, 0x0FD0AF80, 0x2E60F580,
    0xBC634F00, 0xFE43F200, 0x01388001, 0x0001AC00, 0xF0000598, 0x88D90025, 0x60F58003,
    0x06F8007C, 0x1380059E, 0xFC8007E8, 0x78012FC1, 0x0006E216, 0x000FC85D, 0xB9FAA25F,
    0xEF7BDEF7, 0x00007FBD, 0xE7800000, 0x000E739C, 0x00044444, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x10088888, 0x739E1111, 0xE79039CE, 0x001E739C, 0xFE000000, 0xEF7BDEF7, 0xB3DEF7BD,
    0xA3100017, 0x5500007F, 0xB387CEB0, 0x4C6E1B13, 0x009078C4, 0x30001070, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x7BDEF7BC,
    0xDEF7BDEF, 0x40009BF3, 0x0000DBD4, 0xE73EC033, 0x3C40FF9C, 0xF2222320, 0x09800185,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xDF7A0000, 0xF7BDEF7B, 0xD7B0BD9E, 0x9FD18800, 0x53C00039, 0x73FF987F, 0xFF81FFCE,
    0xC888CE84, 0x01912786, 0x20000212, 0x00000001, 0x00000000, 0x00000000, 0x00000000,
    0x00C89900, 0x33A13109, 0xF9E1B222, 0x739FFCC3, 0x39EC0FFE, 0xF63D4000, 0xFA31001A,
    0xBDEF7FE7, 0xEF7BDEF7, 0x0007BF3D, 0x0016FA88, 0x9CE01BC0, 0xC42ECE73, 0x31111102,
    0x12002E1A, 0x00000012, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x44121200,
    0x70BE4444, 0x9CE739C0, 0x000F03FF, 0x44002560, 0x7BDC0DBD, 0xFCF7BDEF, 0x00000026,
    0x00000000, 0x00000000, 0x00000000, 0xBDEE77EA, 0xEF7BDEF7, 0xABF3CBBD, 0x000D0000,
    0xCEFC8918, 0x1303E739, 0xC4444F7E, 0x000F0904, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x04000000, 0xF03C004C, 0x0988888E, 0x73EC6246, 0x0680F9CE, 0x157E7800,
    0xCEFD4000, 0xBBDEF7BD, 0x00000001, 0x00000000, 0x00000000, 0x80000000, 0xBDEE7DEC,
    0xAF7BDEF7, 0x0008D7B9, 0xBE0003A3, 0x739FFAC0, 0x14E739CE, 0x222233A2, 0x00912222,
    0x000002C0, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xAC000000,
    0xF7BDEF7D, 0x5DEF7BDE, 0x40003DBC, 0x1FC0004D, 0x39CE7FE3, 0x96739CE7, 0x44466F07,
    0x81044444, 0x01300009, 0x00027020, 0xDEF73A85, 0x2FFDEF7B, 0xFD90007E, 0xCC00131A,
    0x8004EDE1, 0xF7BFF58F, 0x2DEF7BDE, 0x47F0003C, 0x0000C000, 0x22229818, 0xF2222222,
    0x9CE718C3, 0xE739CE73, 0x007E07FC, 0xC0003980, 0xDDF817E8, 0x00006F7B, 0x00000000,
    0xF0000000, 0xC16F7BDC, 0xFBDEF7B9, 0x00000000, 0x4E739CF0, 0x9CE73EC1, 0x008888F3,
    0x00111119, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x20006000,
    0x001197E0, 0xD3FF987F, 0x00003300, 0x7800E7B1, 0xC037BDEF, 0x17DEF7B8, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x80090000,
    0x44466F0B, 0xFCF0504C, 0x03E739CF, 0xDE000139, 0x8C000477, 0x00FDEF7B, 0xCDEF7BBF,
    0x83C02891, 0x3048854C, 0x0A1FC502, 0xC0A9FC14, 0x78511B06, 0x03C1E050, 0x8150311B,
    0x18503C3F, 0x3F899050, 0x83C13236, 0xD80783C2, 0x1B02A188, 0x88D940A8, 0xC2B61402,
    0xC4F1B003, 0x10A01FC0, 0x0E40142F, 0x50048C2C, 0x07E00280, 0x008C00D8, 0x50280051,
    0xFDEF7BC0, 0xDEF7B803, 0xE000183E, 0x20200224, 0xC0600427, 0xC808004C, 0xDEF79480,
    0x582410B0, 0x89920478, 0x31218FE9, 0x0D850C49, 0xF0308392, 0xEE243838, 0x26484880,
    0x2C4AC0A2, 0xC3CFE302, 0x1444921F, 0x20449A87, 0x48C590A9, 0x06982612, 0x98609098,
    0xE380E120, 0x78242E0F, 0xC130900C, 0xFC4980F0, 0x403FBDEF, 0xA2FF7BDF, 0x13180F51,
    0x0683CF2F, 0x2FC2CC1D, 0xF22CC6C8, 0x14CC6885, 0x4598178D, 0x0A783ABC, 0x93D506F0,
    0xC4E401FC, 0x7A001BC2, 0x7000A780, 0xF0007E21, 0x88003C40, 0x3A002F06, 0x9A803640,
    0x001CC2C4, 0xB883D58D, 0xD6883580, 0x8BE41318, 0x03A15437, 0xDE1720DE, 0x0A787E20,
    0xA785C83F, 0x3A098C68, 0xEF7BAAF0, 0xBDDF00DD, 0x48C0A9F7, 0x058F1140, 0x8B04F00F,
    0xC5C07E0F, 0x0918919F, 0xF03C2C8A, 0xF03C13C0, 0x7E360FC1, 0xB1230390, 0xA0FC0318,
    0x4C07E0A8, 0x03C7F3F8, 0x62C2A144, 0xAB0FE024, 0x05600F82, 0x802C7FFE, 0x0A8B3C28,
    0x1C111700, 0xF1009E00, 0x02816000, 0x001C0F80, 0x00288918, 0x000160F0, 0xC8001F03,
    0x78000722, 0x1F0000F0, 0xC950003E, 0xF0700048, 0x98510003, 0x15066000, 0x7BDEE200,
    0xDEF7BDEF, 0x00BDEF7B, 0x88800000, 0xE739CE73, 0x9F80FF9C, 0x88888888, 0x2007A81A,
    0xF802F11A, 0x3C026F02, 0xA200B185, 0xC4E802E1, 0x9135001C, 0x0E85E00D, 0x03D44E80,
    0x05E22630, 0x026F0370, 0x00B181AC, 0x223785F2, 0x1BC22222, 0xCE739DF0, 0x0144E739,
    0x80000000, 0x0FEE7DEC, 0x0046BDE8, 0x77F215BE, 0xB90F983E, 0x1D1A022B, 0x01E208C0,
    0x00000C4C, 0x00000000, 0x00000000, 0x00400000, 0x8F801E24, 0xE4BE01F8, 0x8F7E2097,
    0x22403DF8, 0x1EFC6017, 0xDF005FE3, 0xFC025F10, 0xE2401F88, 0x00008001, 0x00000000,
    0x00000000, 0x00400000, 0xC800C4C0, 0x2F801E22, 0x0111ADF9, 0x3EF44BB1, 0x5EDF881F,
    0xDEF71823, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF0000000,
    0x027767BB, 0x02F6B188, 0xE8A5F3BE, 0x373C4417, 0x8D901398, 0x0E44C01F, 0x8002C480,
    0x00000000, 0x00000000, 0x00000000, 0xBC0242C0, 0x34600FC1, 0x17E601A3, 0x398017D6,
    0x3FD40188, 0xF1825FAD, 0x3780D185, 0x061600F8, 0x00000000, 0x00000000, 0x00000000,
    0x804C0000, 0xB1301224, 0x35631102, 0xBB3BE1A3, 0x200FF3C3, 0x002FED6A, 0x37E7B9DF,
    0xEF0EF790, 0xC9FEA213, 0xCF752D22, 0x55A35B88, 0x3FC5708C, 0xB5D3B7F3, 0x88338878,
    0xDEF73CB7, 0x00001F7B, 0xEF7BDCF0, 0xE780007D, 0x03EF7BDE, 0x00000000, 0x00000000,
    0x00000000, 0xFE000000, 0x80000177, 0x10446E08, 0xAD2739DF, 0x3DF84E73, 0x20014001,
    0xEFA9BA83, 0x00D811BD, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x06403604,
    0x7BDF5375, 0xF78002C3, 0xE77C0009, 0x39CEB49C, 0x88DC1101, 0xFD600000, 0xDEF7BDEF,
    0x75F82F7B, 0x00558002, 0x73DE0F80, 0x60E739CE, 0x888CE624, 0xF84C0888, 0x02612003,
    0x00000C00, 0x8C85C400, 0x6F808888, 0x9CE73EC1, 0x00001673, 0x35F80000, 0xBDEF7B9C,
    0x00000177, 0x00000000, 0x00000000, 0x00000000, 0x44446400, 0xB0044444, 0x9CE739CF,
    0x00034E73, 0xDCE00000, 0x71826F7B, 0x267FBDEF, 0xE3E0A03C, 0x60FC1B07, 0x102A0632,
    0x83E04F03, 0x56070585, 0xB23F8FE0, 0xF04F0A20, 0xA20E01E0, 0xA80F813C, 0x0951B5C4,
    0x0E1650F8, 0x20E883C0, 0x2C2C801F, 0xC01C003C, 0xA013C007, 0x1C0B0012, 0x1E20F800,
    0x86EF7100, 0x000EF7B8, 0xCE710000, 0x0CE73A86, 0x88824440, 0x07BDC400, 0x003BDEEA,
    0x39C40000, 0x339CEA1B, 0x22091100, 0xB0000002, 0x000BBDEE, 0x00000000, 0xBDD60000,
    0x00000177, 0x75800000, 0x00005DEF, 0x00000000, 0xF7DAC000, 0xBDEF7BDE, 0x01EBF177,
    0xC000A780, 0x39CFFD45, 0x2CB39CE7, 0x88888CDC, 0x800B1208, 0xC1E002C0, 0xE78FE001,
    0x3DEF7BDE, 0xA200598B, 0x66003F9B, 0x78800BD6, 0xEF7B9E2E, 0xE0FD85BD, 0x58198B80,
    0x04C0C160, 0x01C1F313, 0xDD43FB07, 0x722DEF7B, 0x3780098E, 0x7C002BBC, 0xCE739F41,
    0x4C41FF39, 0xFC888888, 0x307801B0, 0x3C000001, 0x22222298, 0x18C3F222, 0xCE739CE7,
    0x1F81FF39, 0x00039800, 0x11115EB1, 0x9F622220, 0x73AC1E73, 0x000007CE, 0xFFDDEA00,
    0x777FEF7B, 0x8E6FDF81, 0xFBF58E44, 0xEFB996F0, 0x1EFEF7BD, 0x7DE98B4F, 0xCDAFA807,
    0xB004C658, 0x02F5D446, 0x169FE7E0, 0xEF7BDF63, 0x2915894B, 0x7BDE63FE, 0xC18C865F,
    0x3240688A, 0xCC0046B9, 0x00260004, 0x00000000, 0x00000000, 0xC0001000, 0x00C72634,
    0xC4660D30, 0x5233480B, 0x7BDE637C, 0x454C865F, 0x7DEF7BED, 0x007D7129, 0x18AFF9F8,
    0x511AC013, 0x00EFBCB1, 0xDE19B5F5, 0xF7BDF732, 0x69E3DFDE, 0x04737EFC, 0x07DFCC72,
    0xEF7BDEEB, 0x10005F3D, 0x850007CF, 0xFF39CE75, 0x22222242, 0xEE758237, 0xECC1B7BD,
    0x4003E000, 0xB39F6A0E, 0x111FF020, 0x04006017, 0xC85C4476, 0x16739E64, 0xECC001F8,
    0x200C0000, 0x307F3C03, 0xC05F5836, 0xDB780FF3, 0x8545F583, 0x3F78CDF8, 0xB13FD6BE,
    0xDF93FF2B, 0x6645BF93, 0x762A07FE, 0x40BF2221, 0x9DC817C6, 0xAAEC1ECF, 0xF95DC85B,
    0xC4F7E25F, 0x27BF11AF, 0x02B2DF1A, 0x0DFA05BE, 0x3F305FA0, 0x22222222, 0x3AC22222,
    0xCE739CE7, 0xF39CE739, 0x00000000, 0xEF7BDEEB, 0x02DEF7BD, 0x00000000, 0x88000000,
    0x88888888, 0xE3088888, 0x39CE739C, 0xCE739CE7, 0x00000139, 0x7E780000, 0x01EF9EE7,
    0xFFDBFDC8, 0x3B7FFDF3, 0xAEF3D8C1, 0xDCEEB511, 0x7B9E7103, 0xACF7BDEE, 0xF1E839EF,
    0xEC9EF7D1, 0xF58B46F8, 0x545F8806, 0x03C553BC, 0x232A2780, 0xC945F881, 0xDF406718,
    0xC307467B, 0x9EF7D019, 0x08C860EC, 0x191E2A20, 0x080262A3, 0x03EB1515, 0xE3D26FC0,
    0xF7F85D5D, 0xB7C4BD7A, 0xEB5035BE, 0xFF50275B, 0x9E213F67, 0xF1807B5D, 0xF7BDCEFF,
    0x22213BBE, 0x22222222, 0x9CE73C22, 0xE739CE73, 0x001E739C, 0x7E400000, 0xEF7BDEE7,
    0x04F392F9, 0x8318E788, 0x462CE73E, 0x7888AC4E, 0x000200B1, 0x00000000, 0x00000000,
    0x45626204, 0x831CC4C4, 0x9534E73E, 0x9E2013CE, 0x2F7B880F, 0x00000000, 0x44440000,
    0xC2222224, 0x8D9CE73A, 0x0F39CE73, 0xB0000000, 0xE0F7BDEE, 0x03EF7BDE, 0x00000000,
    0x00000000, 0x5EF71000, 0x22200000, 0x22222222, 0xCE73AC22, 0x739CE739, 0x000F39CE,
    0xDCF00000, 0x97FDEF7B, 0xFC8CCCC8, 0xFFFFFFD4, 0xB040315F, 0x710F10C0, 0x3206F6EF,
    0xBFFFC403, 0x3C5201BD, 0xFFF55820, 0x8C57FFFF, 0xFC8CCCC8, 0xF7BDEE78, 0x4666443C,
    0xFFFD42FC, 0x80F11BFF, 0x5A640218, 0x6FF7B9D6, 0x9CFB68E5, 0x44631ED3, 0x80000104,
    0xBBDEF7BC, 0x33333322, 0x235A8803, 0x39DFECC6, 0xBF7B9EBF, 0x462002AB, 0xFBFD5ECD,
    0xEF7FB39F, 0xF73BE24A, 0xBDEF7BDE, 0xF89FDEF7, 0x7A00013F, 0x00B10000, 0x79801500,
    0x003F85EF, 0x04000240, 0x80000000, 0x00B80004, 0x90000500, 0x06F00005, 0x05FF2000,
    0x73BF1800, 0x0088000A, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x73C00000, 0x01F7BDEF, 0x7BFF0000, 0x187F07EF,
    0x07891130, 0xFBDEE786, 0xFF501912, 0x00000005, 0x00000000, 0x5DE69DEF, 0x6739CE7D,
    0x7BDCEFC9, 0x705F3DEF, 0x7CF1009E, 0x58A80072, 0x0FF9FFA8, 0xC8CFF03C, 0x1206021F,
    0x00000000, 0x06000000, 0x8D8FE012, 0x6F7BA858, 0x3000E661, 0x3A8019D2, 0x9CE73EE4,
    0x652FEE73, 0x3B880302, 0xFC80BFC0, 0x2137C417, 0x9E26FC47, 0x97B11B78, 0xD63AF9B7,
    0xFAC5FD07, 0x7E7CFF58, 0x3078ECF0, 0xDF205676, 0x032FC448, 0x19B1AECF, 0xFA1DC9FB,
    0xF587678B, 0x58D3B1CF, 0x678E87D6, 0xB06DE207, 0xF04DF03E, 0xBDEF7036, 0xE3FBAC00,
    0x37C8007C, 0xA002625E, 0x50002663, 0xA000364F, 0x6B0000FD, 0xC400098C, 0x3A0002EB,
    0xC60000E6, 0xB400068C, 0xA7800037, 0x6EE30172, 0x80D69FEE, 0x6739CE71, 0x2007ACEB,
    0x67222222, 0x02F738BC, 0x0AC998E8, 0x1789EA00, 0xD680266F, 0xB0068AC1, 0xC77898C6,
    0x8BAF1003, 0xE3A00D15, 0x00AB7819, 0x8AC68CC6, 0x7B404113, 0x4E77C713, 0x72A7833A,
    0xFDEF6FC1, 0x41AD07B1, 0x418A318E, 0x40003D67, 0x002F7BDC, 0xF9C4FDEF, 0x34563000,
    0xF1D00131, 0x54F00026, 0x6B40002E, 0x7ACAC000, 0x357C8000, 0x0E63A000, 0xD13C6000,
    0x0DEB8000, 0xB18E6000, 0xEE6EE780, 0x3C06B44F, 0x3E739CE7, 0x44014F1D, 0x158C4444,
    0xF7BDEEBD, 0x331D005F, 0x5F233323, 0xE6D953C0, 0x72DFFFFF, 0x0481AD00, 0x220F5958,
    0xAF909262, 0xF39CEFC6, 0x731D015A, 0xF7EF1550, 0x44F186ED, 0xF3E67863, 0x01BD700C,
    0x1631CC00, 0x01AD1000, 0x8E822222, 0x739D402A, 0x7BDC79CE, 0xE017FDEF, 0xCCCC9777,
    0x2A780FC8, 0xFFFFFF97, 0xD68062BF, 0xD6560040, 0x88910C03, 0xDEE21A37, 0x62FC0DED,
    0x6019900D, 0xFE20D13C, 0xAE0DEDFF, 0x6914800E, 0x2401318E, 0xFFF035A2, 0x8C5BFFFF,
    0x32029E37, 0x9CBF2333, 0xEF7B80D1, 0xE37AFFBD, 0x54F0004D, 0x3FBDC62E, 0x0068D680,
    0xA8C3D656, 0x46AF9001, 0xCC740347, 0x00F5A8C1, 0x8E8D13C6, 0x60DEB806, 0x39801BD4,
    0x13C742C6, 0x61AD1049, 0x756CFFC6, 0xB382A8E8, 0x1B636EF7, 0xC6305E2B, 0x1D0D6918,
    0x60000133, 0x5DEF7BDC, 0x00000000, 0x60000000, 0x5DEF7BDC, 0x00022000, 0x80014E70,
    0x878000E0, 0x00FE0005, 0x8098B980, 0xBEF7BFF5, 0x3B781FC1, 0x26A09A81, 0x5C07EB10,
    0x034E73E8, 0x022B3C1E, 0x002E0460, 0x000004C0, 0x80098080, 0x28005C0C, 0x22222B3C,
    0xA1782222, 0x9CE739CF, 0x1A30CE73, 0x09BD6000, 0x00056400, 0xFCE77EB0, 0x40008E7A,
    0xF9F77AD4, 0x1233E601, 0xF6F8C04C, 0xD7F7FEFF, 0xFEFB001F, 0x007FD7F7, 0x23002C12,
    0x83C02640, 0x12E01317, 0x21E01B0B, 0x83001823, 0x0C01E1E9, 0x781224A4, 0x602C1C70,
    0x03F891E3, 0x40A2690B, 0x12061124, 0x3124483C, 0xE2626060, 0x18FE3F81, 0x3890B0B8,
    0x88891078, 0xE0781808, 0x6179CE77, 0x314001B0, 0x079FC000, 0xEF7BDEF3, 0x07032583,
    0x0C163224, 0x0FE787F0, 0x03184C13, 0x03F80C12, 0x44025640, 0xFE77F7CD, 0xE7D805BF,
    0x000ACEF7, 0x133D6402, 0xCFB7F5F0, 0x01BEFFFD, 0xCFB7F5F8, 0xB04800FD, 0x99008C00,
    0x4C5E0F00, 0x6C2C4B80, 0x608C8780, 0x87A60C00, 0x92903007, 0x71C1E048, 0x478D80B0,
    0xA42C0FE2, 0x44910289, 0x20F04818, 0x8180C491, 0xFE078989, 0xC2E063F8, 0x41E0E242,
    0x60222224, 0x39DF81E0, 0x06C185E7, 0x0000C500, 0x7BCC1E7F, 0x960FBDEF, 0xC8901C0C,
    0x1FC03058, 0x304C3F9E, 0x30480C61, 0xF77E0FE0, 0x803F7BDE, 0xF0DF25DC, 0x87B504EC,
    0xE34EE771, 0x39EE780E, 0x9CFFE53B, 0x0111109D, 0xFB002222, 0x07EF7BDE, 0x60058240,
    0x7804C804, 0x5C0262F0, 0x3C036162, 0x60030464, 0x803C3D30, 0x02449481, 0x05838E0F,
    0x7F123C6C, 0x144D2160, 0x40C22488, 0x24890782, 0x4C4C0C06, 0x1FC7F03C, 0x12161703,
    0x11220F07, 0x0F030111, 0x2F39CEFC, 0x2800360C, 0xF3F80006, 0xEF7BDE60, 0xE064B07D,
    0x82C64480, 0xFCF0FE01, 0x63098261, 0x7F018240, 0xFEF7FFA2, 0x37BDE2DF, 0xCE495FF1,
    0x2553BDDF, 0xBEF75863, 0xEC61F505, 0xF77F32FD, 0x602FEFFC, 0x0091008C, 0xBDEF7BEC,
    0x1609001F, 0x13201180, 0x098BC1E0, 0x0D858970, 0x0C1190F0, 0xF0F4C180, 0x12520600,
    0x0E383C09, 0x48F1B016, 0x348581FC, 0x08922051, 0x241E0903, 0x30301892, 0x1FC0F131,
    0x585C0C7F, 0x883C1C48, 0x0C044444, 0xE73BF03C, 0x00D830BC, 0xE00018A0, 0xEF7983CF,
    0x92C1F7BD, 0x19120381, 0xC3F8060B, 0x260987F3, 0x0609018C, 0x7BDFF9FC, 0xEF7BAC1F,
    0x0000000F, 0x9CE7D800, 0xF39CEB07, 0x88044441, 0x7BEC0088, 0x001FBDEF, 0x11801609,
    0xC1E01320, 0x8970098B, 0x90F00D85, 0xC1800C11, 0x0600F0F4, 0x3C091252, 0xB0160E38,
    0x81FC48F1, 0x20513485, 0x09030892, 0x1892241E, 0xF1313030, 0x0C7F1FC0, 0x1C48585C,
    0x4444883C, 0xF03C0C04, 0x30BCE73B, 0x18A000D8, 0x83CFE000, 0xF7BDEF79, 0x038192C1,
    0x060B1912, 0x87F3C3F8, 0x018C2609, 0xE1FC0609, 0xEF7BDFF9, 0x9BC017FD, 0x02F2DDCE,
    0x00012104, 0x1E182000, 0xFB0DE002, 0x7801C4FE, 0x18028C02, 0x83C00640, 0x25C00F17,
    0x43C03616, 0x06003046, 0x1803C3D3, 0x50244948, 0xF0160E38, 0x07F123C7, 0x00C4D216,
    0x78184491, 0x124483C0, 0x26260603, 0x8FE3F81E, 0xC4850B81, 0x440C83C1, 0x84C0C044,
    0x85E739DF, 0x0F0006C1, 0x1E6C0003, 0xBDEF7BCC, 0x1C0C960F, 0x3058C890, 0x3F9E1FC0,
    0x0C61304C, 0xCFE03048, 0xF7BDEF7B, 0xBDEF7BDE, 0x000032F7, 0x50400026, 0xCE7BC1E7,
    0x62248739, 0x84444460, 0x448000C0, 0x05C2C000, 0x40004080, 0x01C00062, 0xE0981800,
    0x0087F7BB, 0x00489800, 0xF13B9C48, 0x0023FBDD, 0xC0000600, 0x00F39E44, 0x00C44408,
    0x70005890, 0x18900011, 0x888888C0, 0x39EF0040, 0x0B899CE7, 0xC0000900, 0xEF7B9DF8,
    0xFBDEF7BD, 0x000AFF57, 0x4F0001BC, 0x9CE7FEA2, 0x17D9CE73, 0x444466F1, 0x93C4C444,
    0x40091200, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x03000040,
    0x93C2C009, 0xCDE22E00, 0x88888888, 0x73FF5127, 0x6CE739CE, 0xFA80006F, 0xBF180017,
    0xF7BDEF7B, 0xE0FF7BDE, 0x00FDEF7F, 0x30003F80, 0x00098000, 0x03C00122, 0xAC800C00,
    0xEFD60000, 0x11CF5F9C, 0xEF5A8800, 0x7CC03F3E, 0x18098246, 0xFFDFFEDF, 0xE303FAFE,
    0xFDEF7BDE, 0xDEFBAFEF, 0x0000037B, 0x9CF00000, 0xE739CE73, 0x4460139C, 0x44444444,
    0x00000000, 0x00000000, 0x60000000, 0x04444444, 0x739CE780, 0x000339CE, 0x80000000,
    0xF7BDEF79, 0x000001DE, 0x00000000, 0x00000000, 0x8C000000, 0x88888888, 0xE739E008,
    0x39CE739C, 0x00000027, 0xAC800000, 0xEF9A8804, 0x0B7FFCEF, 0x9DEFCFB0, 0xC8040015,
    0xEBE0267A, 0xFFFB9F6F, 0xEF71837D, 0x3EDFDDBD, 0x6F7BDEF7, 0x00000000, 0xCE739E00,
    0x739CE739, 0x88888C02, 0x00088888, 0x00000000, 0x00000000, 0x888C0000, 0xF0008888,
    0x39CE739C, 0x00000067, 0xEF300000, 0x3BDEF7BD, 0x00000000, 0x00000000, 0x00000000,
    0x11118000, 0x01111111, 0x739CE73C, 0x04E739CE, 0x00000000, 0xDEF7BDE0, 0x49E802FB,
    0x2D601732, 0x13D17F9E, 0xDF3EA6CC, 0xE7582DE0, 0xCFB11F9C, 0x9EE30F39, 0xF7BDCE73,
    0xB9CE73DE, 0x00000001, 0x39CE7800, 0xCE739CE7, 0x22223009, 0x00222222, 0x00000000,
    0x00000000, 0x22300000, 0xC0022222, 0xE739CE73, 0x0000019C, 0xBCC00000, 0xEF7BDEF7,
    0x00000000, 0x00000000, 0x00000000, 0x44460000, 0x04444444, 0xCE739CF0, 0x139CE739,
    0x00000000, 0x3EF7BFF0, 0x1FDEF758, 0x00000000, 0x0F39CFB0, 0x83E739D6, 0x11100888,
    0xDEF7B8C1, 0xF7BDEF7B, 0x006F7BDE, 0x00000000, 0x39CE739E, 0x02739CE7, 0x8888888C,
    0x00000888, 0x00000000, 0x00000000, 0x88888C00, 0x9CF00088, 0x6739CE73, 0x00000000,
    0xBDEF3000, 0x003BDEF7, 0x00000000, 0x00000000, 0x00000000, 0x11111180, 0x3C011111,
    0xCE739CE7, 0x0004E739, 0x64000000, 0x7EB00005, 0x8E7AFCE7, 0x7AD44000, 0xE601F9F7,
    0xC04C1233, 0xFEFFF6F8, 0x181FD7F7, 0xEF7BDEF7, 0xF7DD7F7F, 0x00001BDE, 0x738C0000,
    0xE79039CE, 0x4442739C, 0x88888044, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x22200000, 0x44444022, 0x739CE718,
    0xE739CF20, 0x00000004, 0x95900000, 0xFDF35100, 0x016FFF9D, 0xB3BDF9F6, 0x59008002,
    0xFD7C04CF, 0xBFFF73ED, 0xBDEE306F, 0xE7DBFBB7, 0x0DEF7BDE, 0x00000000, 0x1CE739C6,
    0x39CE73C8, 0x40222221, 0x00004444, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x20111110, 0x738C2222, 0xE79039CE,
    0x0002739C, 0xF0000000, 0xFBDEF7BB, 0xF92EE401, 0xA8276786, 0x773B8C3D, 0x73C0771A,
    0xFF29D9CF, 0x8884ECE7, 0xC1111008, 0x7BDEF7B8, 0xDEF7BDEF, 0x00006F7B, 0xCE300000,
    0x9E40E739, 0x1109CE73, 0x22220111, 0x00000002, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x88800000, 0x11110088, 0xCE739C61,
    0x9CE73C81, 0x00000013, 0xF7BFF000, 0xDEF7583E, 0x0000001F, 0x39CFB000, 0xE739D60F,
    0x10088883, 0xF7B8C111, 0xBDEF7BDE, 0x6F7BDEF7, 0x00000000, 0xE739CE30, 0xCE739E40,
    0x01111109, 0x00022222, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00888880, 0x9C611111, 0x3C81CE73, 0x00139CE7,
    0x18000000, 0xEF7BDEF7, 0xF3DEF7BD, 0x9E200005, 0xF900009D, 0xCE739E02, 0x803503D9,
    0x2E311111, 0xC08C0014, 0x083C001F, 0x00000000, 0x6D600000, 0x1BDEF798, 0x00000000,
    0x9E0FAC00, 0xC009CE73, 0x01111184, 0x00000000, 0x00000000, 0x0F000000, 0xE0460002,
    0x88888C0F, 0xE780A171, 0x40F6739C, 0xBC40000D, 0x3B3C4000, 0xF7BFFD11, 0xBDEF16FF,
    0x724AFF89, 0x2A9DEEFE, 0xF7BAC319, 0x630FA82D, 0xBBF997EF, 0x017F7FE7, 0x04880463,
    0x3EF7BDEF, 0x2EF7B8C0, 0x2A000070, 0x003E0001, 0x10000980, 0x01C0000F, 0x8004A800,
    0x1F0007C4, 0x413C0026, 0x1318003C, 0x543E0007, 0x7C1F2002, 0x01307000, 0x007892A0,
    0x000387E0, 0x0007A82B, 0xC001F0B1, 0xA3000187, 0x000E0000, 0x000093C0, 0x0CC0001F,
    0x00005640, 0xAFCE77EB, 0x440008E7, 0x1F9F77AD, 0xC1233E60, 0xFF6F8C04, 0xFD7F7FEF,
    0xF73BE201, 0x7DD7F7FE, 0x27EE40BE, 0xE0ECF100, 0xCFE4004D, 0xE73EE428, 0x0593C4EC,
    0x3462223D, 0x80F11FD4, 0x00606E07, 0x00000912, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x81000000, 0x1FE44801, 0x4E0780F1, 0x18888F41, 0xE428CF0D,
    0x44ECE73E, 0x900137A5, 0x009FB91F, 0x0003B3C4, 0xD4402564, 0xFFE77F7C, 0x7E7D805B,
    0x2000ACEF, 0x0133D640, 0xDCFB7F5F, 0x101BEFFF, 0xF6FEE9DF, 0x817CF7B9, 0xE2004FDC,
    0x009BC1D9, 0xC8519FC8, 0x89D9CE7D, 0x447A0B27, 0x3FA868C4, 0xDC0F01E2, 0x122400C0,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x90030200,
    0x01E23FC8, 0x1E829C0F, 0x9E1A3111, 0xCE7DC851, 0x6F4A89D9, 0x723F2002, 0x6788013F,
    0x7BDEF007, 0xF4017DEF, 0xB00B9924, 0xE8BFCF16, 0x9F536609, 0xAC16F06F, 0xD88FCE73,
    0xFC079CE7, 0xDEF7B9EE, 0x720FEE7B, 0x6788013F, 0x20026F07, 0xF721467F, 0x9E276739,
    0x1111E82C, 0x88FEA1A3, 0x03703C07, 0x00489003, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x22400C08, 0x3C0788FF, 0x447A0A70, 0x467868C4,
    0x6739F721, 0x09BD2A27, 0xFDC8FC80, 0x1D9E2004, 0xFBDFFE88, 0xDEF78B7F, 0x39257FC4,
    0x954EF77F, 0xFBDD618C, 0xB187D416, 0xDDFCCBF7, 0x80BFBFF3, 0x02440231, 0xDEF73BE2,
    0x5F3DEF7B, 0x8013F720, 0x26F07678, 0x1467F200, 0x76739F72, 0x1E82C9E2, 0xEA1A3111,
    0x03C0788F, 0x89003037, 0x00000004, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00C08000, 0x788FF224, 0xA0A703C0, 0x868C4447, 0x9F721467, 0xD2A27673,
    0x8FC8009B, 0xE2004FDC, 0xBDFF81D9, 0xF7BAC1F7, 0x000000FE, 0xCE7D8000, 0x39CEB079,
    0x8044441F, 0xEF880888, 0xBDEF7BDC, 0xDC817CF7, 0xD9E2004F, 0xC8009BC1, 0x7DC8519F,
    0x2789D9CE, 0xC4447A0B, 0xE23FA868, 0xC0DC0F01, 0x00122400, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xC8900302, 0x0F01E23F, 0x111E829C,
    0x519E1A31, 0xD9CE7DC8, 0x026F4A89, 0x3F723F20, 0x07678801, 0xD0788056, 0xFFC40FFD,
    0xFF196A9B, 0x1DE1FF10, 0xFCFF18B5, 0x8BD0D60F, 0xD1AB07B1, 0x7835608B, 0xF882F103,
    0x881FE207, 0xFE3060FF, 0xB583FE21, 0x231FE317, 0x9917AD58, 0x7A357379, 0xDDC87FC5,
    0x0000F7A0, 0x07DEFFC4, 0xEF7B9EF1, 0x9D9EF7BD, 0xCFF8879E, 0x1F8A4400, 0x0640007A,
    0x73BF10B1, 0x418C4ECE, 0x6222BA05, 0x87F1F84C, 0x08305505, 0x00B06808, 0x00100CF0,
    0x60000978, 0x0001E30E, 0xB000347E, 0x88001552, 0xDE000697, 0x90000CF0, 0x7E000693,
    0x30002661, 0xC0000FC5, 0x7880004C, 0x6F008201, 0x40E2C4C0, 0xC189182C, 0xE3111502,
    0x10788FC2, 0x1ECE73BF, 0x00130318, 0x2219E0E2, 0x44ECF100, 0xDEF73BF3, 0x5F3DEF7B,
    0x00F1A662, 0x00056400, 0xFCE77EB0, 0x40008E7A, 0xF9F77AD4, 0x1233E601, 0xF6F8C04C,
    0xD7F7FEFF, 0xBDEF781F, 0x6B3C727F, 0x0BEF7BDD, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x81204000,
    0x01E07384, 0x8F41640F, 0x5117A888, 0x39F720F9, 0xE15817E7, 0x4D180097, 0x310027EC,
    0xB20001FF, 0xBE6A2012, 0x2DFFF3BF, 0x77BF3EC0, 0x20100056, 0xAF8099EB, 0xFFEE7DBF,
    0x7BDE0DF7, 0x67AD7FEF, 0xFBDEF704, 0x00000002, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x48100000, 0x781CE120,
    0xD05903C0, 0x45EA2223, 0x7DC83E54, 0x5605F9CE, 0x460025F8, 0x4009FB13, 0xBF007FCC,
    0x1FBDEF7B, 0x6F92EE40, 0xDA827678, 0xA773B8C3, 0xF73C0771, 0x7FF29D9C, 0x88884ECE,
    0xBC111100, 0xE03FDEF7, 0x005F7BDE, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x24090200, 0x780F039C,
    0x447A0B20, 0xCA88BD44, 0x39CFB907, 0xBF0AC0BF, 0x6268C004, 0xF988013F, 0xBDEFFC0F,
    0xF7BDD60F, 0x00000007, 0xCE73EC00, 0xF9CE7583, 0x44022220, 0x7BDEF044, 0xEF7B80FF,
    0x0000017D, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x08000000, 0x0E709024, 0x2C81E03C, 0xF51111E8, 0xE41F2A22,
    0x02FCE73E, 0x0012FC2B, 0x04FD89A3, 0x003FE620, 0x2004AC80, 0xF3BFBE6A, 0xFB002DFF,
    0x0159DEFC, 0x9EB20100, 0x6FEBE009, 0x7DFFFB9F, 0xBDEE7103, 0x0467AD67, 0x227BDEE7,
    0x0A80F10A, 0x836070AC, 0xA2547C3F, 0x7C0C6140, 0xF89181C8, 0x10A14260, 0xC3F0A20B,
    0x30700AC6, 0xE03E1442, 0x31852C09, 0xC5DB1300, 0xA2A1F007, 0x45900988, 0xE002C1BC,
    0x800F858F, 0x000C6019, 0xC001F02C, 0x60013107, 0x000003C0, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xBDEF7800, 0x00000077, 0x00000000, 0xC0000000, 0x7BDEF7BE,
    0x900013FF, 0x780002EF, 0x39CEF813, 0x07E20BE7, 0x678888CC, 0x1FC00161, 0x61300031,
    0x02406002, 0x80C00000, 0x0484C000, 0x301E1FC0, 0x859E2223, 0x739DF00A, 0x00B817CE,
    0x20005980, 0x7BEC05FB, 0xBFF7BDEF, 0x00000000, 0xD1000000, 0xBDEF7BFF, 0x077FDEF7,
    0x5C804AF6, 0xC002667F, 0xFFD43658, 0x9F03B39C, 0x31119D09, 0x06033226, 0x200043F8,
    0x04000260, 0x00160200, 0x100188FE, 0x200A0F91, 0xD927F9CE, 0x00958000, 0x8805E780,
    0x9983EF7B, 0x0F02F800, 0x00361400, 0x00002624, 0x00044800, 0x9E002614, 0x11101FC0,
    0x781311A3, 0xB13B39CE, 0x2F180002, 0xC1B5C800, 0x60009558, 0x7E7FEFF6, 0x4000ACEF,
    0x1B7F7CD4, 0x233E7AB0, 0xFDEB9000, 0xFDFFB9F6, 0x0A390002, 0xDCF00000, 0xF7BDEF7B,
    0x0017B3DE, 0x007FA310, 0xCE783500, 0xF39CE739, 0x8887E07F, 0x86C88888, 0x00424004,
    0x88888000, 0xF3C00888, 0x739CE73F, 0x97E601CE, 0x001A2000, 0xFFCF0330, 0xF80F7BDE,
    0x6004BE23, 0x00000062, 0x00018980, 0x2223311B, 0xBC0AC122, 0x36739CE7, 0xC0001F88,
    0x00002BF3, 0x006B5900, 0xCFBBE6A2, 0xB013D7FF, 0x011CEF7F, 0xACF1C800, 0xFF77805E,
    0xBD7F7FEF, 0x01235012, 0xDCF00000, 0xF7BDEF7B, 0x0017B3DE, 0x007FA310, 0xCE783500,
    0xF39CE739, 0x8887E07F, 0x86C88888, 0x00424004, 0x88888000, 0xF3C00888, 0x739CE73F,
    0x97E601CE, 0x001A2000, 0xFFCF0330, 0xF80F7BDE, 0x6004BE23, 0x00000062, 0x00018980,
    0x2223311B, 0xBC0AC122, 0x36739CE7, 0xC0001F88, 0x00002BF3, 0xF7BDEEFC, 0x4BB9007E,
    0x09D9E1BE, 0xCEE30F6A, 0xF01DC69D, 0xCA7673DC, 0x213B39FF, 0x44440222, 0x73C00000,
    0xDEF7BDEF, 0x005ECF7B, 0x01FE8C40, 0x39E0D400, 0xCE739CE7, 0x221F81FF, 0x1B222222,
    0x01090012, 0x22220000, 0xCF002222, 0xCE739CFF, 0x5F980739, 0x00688002, 0xFF3C0CC0,
    0xE03DEF7B, 0x8012F88F, 0x00000189, 0x00062600, 0x888CC46C, 0xF02B0488, 0xD9CE739E,
    0x00007E20, 0x0000AFCF, 0xFEF7FFA2, 0x37BDE2DF, 0xCE495FF1, 0x2553BDDF, 0xBEF75863,
    0x61F3C415, 0xDFCCD39C, 0x017CE739, 0x00044011, 0xF7B9E000, 0xBDEF7BDE, 0x20002F67,
    0x0000FF46, 0x739CF06A, 0xFFE739CE, 0x11110FC0, 0x090D9111, 0x00008480, 0x11111100,
    0x7FE78011, 0x9CE739CE, 0x012FCC03, 0x60003440, 0xBDFF9E06, 0x47F01EF7, 0xC4C0097C,
    0x00000000, 0x36000313, 0x44444662, 0xCF781582, 0x106CE739, 0xE780003F, 0xFF000057,
    0x7583EF7B, 0x0001FDEF, 0xFB000000, 0x9D60F39C, 0x88883E73, 0x00111100, 0x7BDCF000,
    0xDEF7BDEF, 0x100017B3, 0x00007FA3, 0x39CE7835, 0x7FF39CE7, 0x888887E0, 0x0486C888,
    0x00004240, 0x88888880, 0x3FF3C008, 0xCE739CE7, 0x0097E601, 0x30001A20, 0xDEFFCF03,
    0x23F80F7B, 0x626004BE, 0x80000000, 0x1B000189, 0x22222331, 0xE7BC0AC1, 0x8836739C,
    0xF3C0001F, 0xEA00002B, 0xF7BDEF7F, 0xFD37005F, 0x601796EF, 0x00099292, 0x24326000,
    0x7DA6E013, 0xF500BCB7, 0xFBDEF7BF, 0x7BDCF02F, 0xDEF7BDEF, 0x100017B3, 0x00007FA3,
    0x39CE7835, 0x7FF39CE7, 0x888887E0, 0x0486C888, 0x00004240, 0x88888880, 0x3FF3C008,
    0xCE739CE7, 0x0097E601, 0x30001A20, 0xDEFFCF03, 0x23F80F7B, 0x626004BE, 0x80000000,
    0x1B000189, 0x22222331, 0xE7BC0AC1, 0x8836739C, 0xF3C0001F, 0xEFC0002B, 0xFFEF7BDE,
    0x7BDEF7DD, 0x739000BE, 0x001F3C40, 0xE77C9500, 0xEE40FF9C, 0x111143F3, 0x446A1F91,
    0x70300725, 0x00000080, 0x00062222, 0x9CE77E21, 0x3C46E2F3, 0x802FF1C9, 0xA787CE75,
    0x8C600006, 0x07EE798D, 0x1D123A88, 0xE7BDEFA0, 0x00010297, 0x11200000, 0xAC1C01C0,
    0x22358188, 0x9EF07822, 0x39F622F3, 0x01390CE7, 0x00677800, 0x7FF7C800, 0xDEF7BDEF,
    0xC61DEF7B, 0x3A00099E, 0xF8850000, 0x39CE739D, 0xA0319CE7, 0x2222222A, 0x03F84C22,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x005C0000, 0x1800184C, 0x22233350,
    0x78282222, 0x739CE7FF, 0x074339CE, 0x99EC6000, 0xFFBE4000, 0xF7BDEF7B, 0x00EF7BDE,
    0x1FBDEFFC, 0x001FC000, 0x4C000060, 0x00244000, 0x180001E0, 0x02556300, 0xFFBFD980,
    0x02B3BDF9, 0xFDF35100, 0xF9EAC06D, 0xAE40008C, 0xFEE7DBF7, 0xE4000BF7, 0x80000028,
    0xBDEE77E7, 0xF77BDEF7, 0x002AFCC4, 0x0068BBC6, 0xA813C6F0, 0xFCE739FF, 0x32709510,
    0xF206A222, 0x0E1604C0, 0x98000000, 0x22233008, 0xF01C49E2, 0xF9CE739D, 0x330000A0,
    0x0BF64001, 0xBDEF7BEC, 0x0017FEF7, 0x1C000000, 0x38480098, 0x22222223, 0xFB502782,
    0x39CE739C, 0x30000D1B, 0x00000ABF, 0x801AD640, 0xF3EEF9A8, 0xEC04F5FF, 0x00473BDF,
    0xAB3C7200, 0xFFDDE017, 0xAF5FDFFB, 0x0048D404, 0x7E780000, 0xEF7BDEE7, 0xCC4F77BD,
    0xBC6002AF, 0x6F00068B, 0x9FFA813C, 0x510FCE73, 0x22232709, 0x4C0F206A, 0x0000E160,
    0x00898000, 0x9E222233, 0x39DF01C4, 0x0A0F9CE7, 0x00133000, 0xBEC0BF64, 0xEF7BDEF7,
    0x0000017F, 0x0981C000, 0x22338480, 0x78222222, 0x39CFB502, 0xD1B39CE7, 0xABF30000,
    0xBBF00000, 0x01FBDEF7, 0x86F92EE4, 0x3DA82767, 0x1A773B8C, 0xCF73C077, 0xE7FF29D9,
    0x088884EC, 0x00011110, 0xB9DF9E00, 0xEF7BDEF7, 0xABF313DD, 0xA2EF1800, 0x4F1BC001,
    0x9CE7FEA0, 0xC25443F3, 0x1A8888C9, 0x581303C8, 0x00000038, 0x8CC02260, 0x71278888,
    0x39CE77C0, 0x000283E7, 0xD90004CC, 0xBDEFB02F, 0x5FFBDEF7, 0x00000000, 0x20026070,
    0x88888CE1, 0x409E0888, 0x39CE73ED, 0x00346CE7, 0x002AFCC0, 0xF7BDFF80, 0xFEF7BAC1,
    0x00000000, 0x79CE7D80, 0x1F39CEB0, 0x88804444, 0xF0000008, 0xF7BDCEFC, 0x9EEF7BDE,
    0xC0055F98, 0x000D1778, 0xF50278DE, 0x1F9CE73F, 0x464E12A2, 0x1E40D444, 0x01C2C098,
    0x13000000, 0x44446601, 0xBE03893C, 0x1F39CE73, 0x26600014, 0x817EC800, 0xF7BDEF7D,
    0x0002FFDE, 0x03800000, 0x67090013, 0x44444444, 0x9F6A04F0, 0x6739CE73, 0xE60001A3,
    0x8C000157, 0x66000955, 0xF7E7FEFF, 0x44000ACE, 0x01B7F7CD, 0x0233E7AB, 0x6FDEB900,
    0x2FDFFB9F, 0x00A39000, 0xDEE78000, 0xF7BDEF7B, 0x000001FE, 0x739E0000, 0x800939CE,
    0x00008888, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x44000000,
    0x88880444, 0xE739CF08, 0x739E449C, 0x000019CE, 0x90000000, 0x6A2006B5, 0x7FFCFBBE,
    0xF7FB013D, 0x800011CE, 0x05EACF1C, 0xFEFFF778, 0x012BD7F7, 0x00001235, 0xF7BDCF00,
    0xFDEF7BDE, 0x00000003, 0x9CE73C00, 0x11001273, 0x00000111, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x88880000, 0x11111008, 0x39CE739E, 0x9CE73C89,
    0x00000033, 0xBDDF8000, 0x200FDEF7, 0x3C37C977, 0x61ED413B, 0xB8D3B9DC, 0xCE7B9E03,
    0x673FF94E, 0x80444427, 0x00000888, 0xF7BDEE78, 0x1FEF7BDE, 0x00000000, 0x9CE739E0,
    0x88880093, 0x00000008, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x44444000, 0xF0888880, 0x49CE739C, 0x9CE739E4, 0x00000001, 0xF7BDFF80, 0xFEF7BAC1,
    0x00000000, 0x79CE7D80, 0x1F39CEB0, 0x88804444, 0x78000008, 0xDEF7BDEE, 0x001FEF7B,
    0xE0000000, 0x939CE739, 0x08888800, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x80444440, 0x9CF08888, 0xE449CE73, 0x019CE739, 0x00000000,
    0x7BDEF77E, 0x4F67BDEF, 0xFBC62000, 0xC4CC0002, 0xE739CE77, 0x110A0BFC, 0x17911111,
    0x0416000E, 0xDEF7BFFD, 0xDE06EF7B, 0x27200095, 0x7981E000, 0x03E739CE, 0x8888BE07,
    0x00000098, 0x00000000, 0x00000000, 0x00000480, 0x00000000, 0x4000C000, 0xCE1304C0,
    0x91119B81, 0xFD41442F, 0x01FF39CF, 0xCC001395, 0x8015BEF4, 0xF445F7A8, 0x5BFFDEFF,
    0xFE26F7BC, 0xBBF9C92B, 0x0C64AA77, 0x82B7DEEB, 0x738C3E78, 0xE73BF99A, 0x02202F9C,
    0x00000088, 0xBDEF7BDE, 0xEF7BDEF7, 0x20004DF9, 0x80006DEA, 0x739F6019, 0x0F10BFCE,
    0x3C8888C8, 0x01300030, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x9558C000, 0xEFF66000, 0xACEF7E7F, 0x7CD44000, 0x7AB01B7F,
    0x9000233E, 0xB9F6FDEB, 0x0002FDFF, 0x00000A39, 0xF7BDF7A0, 0xD9EF7BDE, 0x800D7B0B,
    0x0399FD18, 0x87F53C00, 0xFCE73FF9, 0xE84FF81F, 0x786C888C, 0x21201912, 0x00120000,
    0x00000000, 0x00000000, 0x00000000, 0x90000000, 0x10900C89, 0x22233A13, 0xCC3F9E1B,
    0xFFE739FF, 0x00039EC0, 0x01AF63D4, 0x007FA310, 0x2006B590, 0xFCFBBE6A, 0xFB013D7F,
    0x0011CEF7, 0xEACF1C80, 0xFFF77805, 0x2BD7F7FE, 0x00123501, 0xDF7A0000, 0xF7BDEF7B,
    0xD7B0BD9E, 0x9FD18800, 0x53C00039, 0x73FF987F, 0xFF81FFCE, 0xC888CE84, 0x01912786,
    0x20000212, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00C89900, 0x33A13109,
    0xF9E1B222, 0x739FFCC3, 0x39EC0FFE, 0xF63D4000, 0xFA31001A, 0xBDEEFC07, 0xB9007EF7,
    0xD9E1BE4B, 0xE30F6A09, 0x1DC69DCE, 0x7673DCF0, 0x3B39FFCA, 0x44022221, 0x80000044,
    0x7BDEF7DE, 0x2F67BDEF, 0x620035EC, 0x000E67F4, 0xE61FD4F0, 0x7FF39CFF, 0x33A13FE0,
    0x49E1B222, 0x00848064, 0x00004800, 0x00000000, 0x00000000, 0x00000000, 0x26400000,
    0x4C424032, 0x6C888CE8, 0xFF30FE78, 0x03FF9CE7, 0x50000E7B, 0x4006BD8F, 0xFA21FE8C,
    0x2DFFEF7F, 0xFF137BDE, 0xDDFCE495, 0x8632553B, 0x415BEF75, 0x39C61F3C, 0x739DFCCD,
    0x011017CE, 0x00000044, 0xDEF7BEF4, 0x7B3DEF7B, 0x1001AF61, 0x00733FA3, 0x30FEA780,
    0xFF9CE7FF, 0x9D09FF03, 0x4F0D9111, 0x04240322, 0x00024000, 0x00000000, 0x00000000,
    0x00000000, 0x32000000, 0x62120191, 0x64446742, 0xF987F3C3, 0x1FFCE73F, 0x800073D8,
    0x0035EC7A, 0xFF0FF462, 0x7583EF7B, 0x0001FDEF, 0xFB000000, 0x9D60F39C, 0x88883E73,
    0x00111100, 0xBDF7A000, 0xEF7BDEF7, 0x0D7B0BD9, 0x99FD1880, 0xF53C0003, 0xE73FF987,
    0x4FF81FFC, 0x6C888CE8, 0x20191278, 0x12000021, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x900C8990, 0x233A1310, 0x3F9E1B22, 0xE739FFCC, 0x039EC0FF, 0xAF63D400,
    0x7FA31001, 0xFEF7BDC0, 0x00000001, 0x6739CE00, 0x11111003, 0xEEB00000, 0x7BDEF7BD,
    0x3EF7BDEF, 0xC0000000, 0x739CE73A, 0x9CE739CE, 0x888888F3, 0x08888888, 0xFF7BDEE0,
    0x00000000, 0x80000000, 0x8000EF73, 0x80019E15, 0x7DAC6978, 0xDEF7BDEE, 0xEBF24613,
    0xCFC60011, 0x9EA00053, 0xCE7FF30B, 0xCE84EE06, 0x89980F88, 0x4089720C, 0x1CC3A006,
    0xC478C008, 0x1BCD000B, 0x17251800, 0x007E5C00, 0x004E4350, 0x72001A68, 0x00400F18,
    0xC031030D, 0x17204428, 0x7F2222F8, 0xCF783730, 0xEE07FF39, 0x8F50002C, 0xFE8C4001,
    0xF7BEC989, 0xD9EF7BDE, 0x00D4378B, 0x02FDDB80, 0x04AAC600, 0xFF7FB300, 0x05677BF3,
    0xFBE6A200, 0xF3D580DB, 0x5C800119, 0xFDCFB7EF, 0xC80017EF, 0xC0000051, 0x01BDEF7B,
    0xBEF7BDC6, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00480000, 0x2233785C, 0xE7828262, 0x1F39CE7F, 0xF00009C8, 0x000023BE,
    0x006B5900, 0xCFBBE6A2, 0xB013D7FF, 0x011CEF7F, 0xACF1C800, 0xFF77805E, 0xBD7F7FEF,
    0x01235012, 0xEF780000, 0xB8C037BD, 0x0017DEF7, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x0B800900, 0x4C44466F, 0xCFFCF050,
    0x3903E739, 0x77DE0001, 0xDF800004, 0x0FDEF7BD, 0x37C97720, 0xED413B3C, 0xD3B9DC61,
    0x7B9E03B8, 0x3FF94ECE, 0x44442767, 0x00088880, 0xDEF7BC00, 0x7BDC601B, 0x00000BEF,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x80000000,
    0x3785C004, 0x28262223, 0x9CE7FE78, 0x009C81F3, 0x023BEF00, 0x7BDFF800, 0xEF7BAC1F,
    0x0000000F, 0x9CE7D800, 0xF39CEB07, 0x88044441, 0xC0000088, 0x01BDEF7B, 0xBEF7BDC6,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00480000, 0x2233785C, 0xE7828262, 0x1F39CE7F, 0xF00009C8, 0x000023BE, 0x00D6B200,
    0x7DDF3510, 0x009EBFFE, 0x239DEFF6, 0x78E40000, 0xEF002F56, 0xFEFFDFFE, 0x1A80257A,
    0x00000009, 0x377BDEEA, 0x7DEF77C0, 0x5012302A, 0x03C163C4, 0x83E2C13C, 0x67F1701F,
    0x22824624, 0xF03C0F0B, 0xF07C0F04, 0xE41F8D83, 0xC62C48C0, 0x2A283F00, 0xFE1301F8,
    0x5100F1FC, 0x0918B0A8, 0xE0AAC3F8, 0xFF815803, 0x0A200B1F, 0xC002A2CF, 0x80070445,
    0x003C4027, 0xE000A058, 0x46000703, 0x3C000A22, 0xC0C00058, 0xC8B20007, 0x3C1E0001,
    0x0F87C000, 0x12325400, 0x00FC1C00, 0x00261440, 0x80054198, 0x02F7BDFF, 0x00000000,
    0x00000000, 0x00000000, 0xEF7BDEF7, 0x0007BF3D, 0x0016FA88, 0x9CE01BC0, 0xC42ECE73,
    0x31111102, 0x12002E1A, 0x00000012, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x44121200, 0x70BE4444, 0x9CE739C0, 0x000F03FF, 0x44002560, 0x7BDC0DBD, 0xFCF7BDEF,
    0x00000026, 0x00000000, 0x00000000, 0x00000000, 0x0FBDEFFC, 0x07F7BDD6, 0x00000000,
    0xF39CFB00, 0x3E739D60, 0x44022220, 0x00000044, 0x1BBDEF75, 0x3EF7BBE0, 0x28091815,
    0x01E0B1E2, 0xC1F1609E, 0x33F8B80F, 0x91412312, 0x781E0785, 0xF83E0782, 0x720FC6C1,
    0x63162460, 0x15141F80, 0x7F0980FC, 0x288078FE, 0x048C5854, 0xF05561FC, 0xFFC0AC01,
    0x8510058F, 0xE0015167, 0xC0038222, 0x001E2013, 0xF000502C, 0x23000381, 0x1E000511,
    0xE060002C, 0xE4590003, 0x1E0F0000, 0x07C3E000, 0x09192A00, 0x007E0E00, 0x00130A20,
    0x0002A0CC
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
  ViewsText_OnSetAlignment( &_this->val_fr_0, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_fr_0, EwLoadString( &_Const004A ));
  ViewsText_OnSetColor( &_this->val_fr_0, _Const004B );
  CoreRectView__OnSetBounds( &_this->val_fr_1, _Const004C );
  ViewsText_OnSetAlignment( &_this->val_fr_1, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_fr_1, EwLoadString( &_Const004D ));
  ViewsText_OnSetColor( &_this->val_fr_1, _Const004E );
  CoreRectView__OnSetBounds( &_this->val_fr_2, _Const004F );
  ViewsText_OnSetAlignment( &_this->val_fr_2, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
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
  ApplicationModIconButton_OnSetIconIndex( &_this->IconButton, 1 );
  _this->freqV[ 0 ] = 1;
  _this->freqV[ 1 ] = 2;
  _this->freqV[ 2 ] = 5;
  _this->freqV[ 3 ] = 10;
  _this->freqV[ 4 ] = 20;
  _this->freqV[ 5 ] = 30;
  _this->freqIdx = 3;
  _this->unitsV[ 0 ] = 0.100000f;
  _this->unitsV[ 1 ] = 0.200000f;
  _this->unitsV[ 2 ] = 0.500000f;
  _this->unitsV[ 3 ] = 1.000000f;
  _this->unitsV[ 4 ] = 2.000000f;
  _this->unitsV[ 5 ] = 5.000000f;
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
      if ( _this->unitsIdx < 5 )
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
  EwConcatString( ApplicationFreq_float2String( _this, _this->valorMeio - _this->unitsV[ 
  EwCheckIndex( _this->unitsIdx, 6 )], 1 ), EwLoadString( &_Const0061 )), ApplicationFreq_float2String( 
  _this, _this->valorMeio + _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )], 
  1 )), EwLoadString( &_Const0060 )));
  ViewsText_OnSetString( &_this->config.InfVal, EwConcatString( EwConcatString( 
  EwConcatString( EwNewStringInt( _this->freqV[ EwCheckIndex( _this->freqIdx, 6 
  )], 0, 10 ), EwLoadString( &_Const0062 )), EwNewStringInt( 1000 / _this->freqV[ 
  EwCheckIndex( _this->freqIdx, 6 )], 0, 10 )), EwLoadString( &_Const0063 )));
}

/* Atualiza os rótulos do eixo vertical do gráfico e a proporção de plotagem.
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
  6 )]);
  ViewsText_OnSetString( &_this->val_fr_1, EwConcatString( ApplicationFreq_float2String( 
  _this, _this->valorMeio, 1 ), EwLoadString( &_Const0060 )));
  ViewsText_OnSetString( &_this->val_fr_0, EwConcatString( ApplicationFreq_float2String( 
  _this, _this->valorMeio - _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )], 
  1 ), EwLoadString( &_Const0060 )));
  ViewsText_OnSetString( &_this->val_fr_2, EwConcatString( ApplicationFreq_float2String( 
  _this, _this->valorMeio + _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )], 
  1 ), EwLoadString( &_Const0060 )));
}

/* Atualiza os rótulos do eixo X no gráfico.
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
  CoreRectView__OnSetBounds( &_this->val_m_inf, _Const0049 );
  ViewsText_OnSetAlignment( &_this->val_m_inf, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_inf, EwLoadString( &_Const0065 ));
  ViewsText_OnSetColor( &_this->val_m_inf, _Const0015 );
  CoreRectView__OnSetBounds( &_this->val_m_meio, _Const004C );
  ViewsText_OnSetAlignment( &_this->val_m_meio, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_meio, EwLoadString( &_Const0066 ));
  ViewsText_OnSetColor( &_this->val_m_meio, _Const0015 );
  CoreRectView__OnSetBounds( &_this->val_m_sup, _Const004F );
  ViewsText_OnSetAlignment( &_this->val_m_sup, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_sup, EwLoadString( &_Const0067 ));
  ViewsText_OnSetColor( &_this->val_m_sup, _Const0015 );
  CoreRectView__OnSetBounds( &_this->val_t_ini, _Const0051 );
  ViewsText_OnSetString( &_this->val_t_ini, EwLoadString( &_Const0052 ));
  CoreRectView__OnSetBounds( &_this->val_t_1, _Const0053 );
  ViewsText_OnSetString( &_this->val_t_1, EwLoadString( &_Const0054 ));
  CoreRectView__OnSetBounds( &_this->val_t_2, _Const0055 );
  ViewsText_OnSetString( &_this->val_t_2, EwLoadString( &_Const0056 ));
  CoreRectView__OnSetBounds( &_this->val_t_3, _Const0057 );
  ViewsText_OnSetString( &_this->val_t_3, EwLoadString( &_Const0058 ));
  CoreRectView__OnSetBounds( &_this->val_t_4, _Const0068 );
  ViewsText_OnSetAlignment( &_this->val_t_4, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_t_4, EwLoadString( &_Const005A ));
  CoreView_OnSetLayout((CoreView)&_this->val_T, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_T, _Const0069 );
  ViewsText_OnSetAlignment( &_this->val_T, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_T, EwLoadString( &_Const006A ));
  ViewsText_OnSetColor( &_this->val_T, Applicationcor_T );
  CoreView_OnSetLayout((CoreView)&_this->val_S, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_S, _Const006B );
  ViewsText_OnSetAlignment( &_this->val_S, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_S, EwLoadString( &_Const006A ));
  ViewsText_OnSetColor( &_this->val_S, Applicationcor_S );
  CoreView_OnSetLayout((CoreView)&_this->val_R, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_R, _Const006C );
  ViewsText_OnSetAlignment( &_this->val_R, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_R, EwLoadString( &_Const006A ));
  ViewsText_OnSetColor( &_this->val_R, Applicationcor_R );
  CoreRectView__OnSetBounds( &_this->labelUnidades, _Const006D );
  ViewsText_OnSetAutoSize( &_this->labelUnidades, 0 );
  ViewsText_OnSetAlignment( &_this->labelUnidades, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelUnidades, EwLoadString( &_Const006E ));
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
  ApplicationModIconButton_OnSetIconIndex( &_this->IconButton, 1 );
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
  1 )), EwLoadString( &_Const006F )));
  ViewsText_OnSetString( &_this->config.InfVal, EwConcatString( EwConcatString( 
  EwConcatString( EwNewStringInt( _this->freqV[ EwCheckIndex( _this->freqIdx, 6 
  )], 0, 10 ), EwLoadString( &_Const0062 )), EwNewStringInt( 1000 / _this->freqV[ 
  EwCheckIndex( _this->freqIdx, 6 )], 0, 10 )), EwLoadString( &_Const0063 )));
}

/* Atualiza os rótulos do eixo vertical do gráfico e a proporção de plotagem.
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
  _this, _this->valorMeio, 1 ), EwLoadString( &_Const006F )));
  ViewsText_OnSetString( &_this->val_m_inf, EwConcatString( ApplicationMag_float2String( 
  _this, _this->valorMeio - _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )], 
  1 ), EwLoadString( &_Const006F )));
  ViewsText_OnSetString( &_this->val_m_sup, EwConcatString( ApplicationMag_float2String( 
  _this, _this->valorMeio + _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )], 
  1 ), EwLoadString( &_Const006F )));
}

/* Atualiza os rótulos do eixo X no gráfico.
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
  CoreRectView__OnSetBounds( &_this->labelFaseInf, _Const0070 );
  ViewsText_OnSetAlignment( &_this->labelFaseInf, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelFaseInf, EwLoadString( &_Const0071 ));
  ViewsText_OnSetColor( &_this->labelFaseInf, _Const0015 );
  CoreRectView__OnSetBounds( &_this->labelFaseMeio, _Const0072 );
  ViewsText_OnSetAlignment( &_this->labelFaseMeio, ViewsTextAlignmentAlignHorzCenter 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelFaseMeio, EwLoadString( &_Const0073 ));
  ViewsText_OnSetColor( &_this->labelFaseMeio, _Const0015 );
  CoreRectView__OnSetBounds( &_this->labelFaseSup, _Const0074 );
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
  CoreRectView__OnSetBounds( &_this->val_T, _Const0069 );
  ViewsText_OnSetAlignment( &_this->val_T, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_T, EwLoadString( &_Const006A ));
  ViewsText_OnSetColor( &_this->val_T, Applicationcor_T );
  CoreView_OnSetLayout((CoreView)&_this->val_S, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_S, _Const006B );
  ViewsText_OnSetAlignment( &_this->val_S, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_S, EwLoadString( &_Const006A ));
  ViewsText_OnSetColor( &_this->val_S, Applicationcor_S );
  CoreView_OnSetLayout((CoreView)&_this->val_R, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_R, _Const006C );
  ViewsText_OnSetAlignment( &_this->val_R, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_R, EwLoadString( &_Const006A ));
  ViewsText_OnSetColor( &_this->val_R, Applicationcor_R );
  CoreRectView__OnSetBounds( &_this->labelUni, _Const006D );
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
  ApplicationModIconButton_OnSetIconIndex( &_this->IconButton, 1 );
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
}

/* Atualiza os rótulos do eixo X no gráfico.
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
  CoreRectView__OnSetBounds( &_this->grafico, _Const00E4 );
  ApplicationPlotterGraph_OnSetVerticalRatio( &_this->grafico, 1.100000f );
  ApplicationPlotterGraph_OnSetStrokeWidth( &_this->grafico, 4.000000f );
  CoreRectView__OnSetBounds( &_this->config, _Const00E4 );

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
  6 )]);
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
  EwSignal( EwNewSlot( _this, ApplicationFreq_trocaEscala ), ((XObject)_this ));
}

/* Atualiza os rótulos do eixo vertical do gráfico e a proporção de plotagem. */
void ApplicationFreq769_atualizaY( ApplicationFreq _this )
{
  GraphicsPath_InitMatrix( &_this->grafico.PathData );
  ApplicationPlotterGraph_OnSetVerticalRatio( &_this->grafico, (XFloat)( EwGetRectH( 
  _this->grafico.Super2.Bounds ) / 3 ) / _this->unitsV[ EwCheckIndex( _this->unitsIdx, 
  6 )]);
  ViewsText_OnSetString( &_this->val_fr_1, EwConcatString( ApplicationFreq_float2String((ApplicationFreq)_this, 
  _this->valorMeio, 1 ), EwLoadString( &_Const0060 )));
  ViewsText_OnSetString( &_this->val_fr_0, EwConcatString( ApplicationFreq_float2String((ApplicationFreq)_this, 
  _this->valorMeio - _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )], 1 ), EwLoadString( 
  &_Const0060 )));
  ViewsText_OnSetString( &_this->val_fr_2, EwConcatString( ApplicationFreq_float2String((ApplicationFreq)_this, 
  _this->valorMeio + _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )], 1 ), EwLoadString( 
  &_Const0060 )));
}

/* Atualiza os rótulos do eixo X no gráfico. */
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
  CoreRectView__OnSetBounds( &_this->grafico, _Const00E4 );
  ApplicationPlotterTripleGraph_OnSetStrokeWidth( &_this->grafico, 4.000000f );
  CoreRectView__OnSetBounds( &_this->config, _Const00E4 );

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

/* Atualiza os rótulos do eixo vertical do gráfico e a proporção de plotagem. */
void ApplicationMag769_atualizaY( ApplicationMag _this )
{
  GraphicsPath_InitMatrix( &_this->grafico.PathDataR );
  GraphicsPath_InitMatrix( &_this->grafico.PathDataS );
  GraphicsPath_InitMatrix( &_this->grafico.PathDataT );
  ApplicationPlotterTripleGraph_OnSetVerticalRatio( &_this->grafico, (XFloat)( EwGetRectH( 
  _this->grafico.Super2.Bounds ) / 3 ) / _this->unitsV[ EwCheckIndex( _this->unitsIdx, 
  6 )]);
  ViewsText_OnSetString( &_this->val_m_meio, EwConcatString( ApplicationMag_float2String((ApplicationMag)_this, 
  _this->valorMeio, 1 ), EwLoadString( &_Const006F )));
  ViewsText_OnSetString( &_this->val_m_inf, EwConcatString( ApplicationMag_float2String((ApplicationMag)_this, 
  _this->valorMeio - _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )], 1 ), EwLoadString( 
  &_Const006F )));
  ViewsText_OnSetString( &_this->val_m_sup, EwConcatString( ApplicationMag_float2String((ApplicationMag)_this, 
  _this->valorMeio + _this->unitsV[ EwCheckIndex( _this->unitsIdx, 6 )], 1 ), EwLoadString( 
  &_Const006F )));
}

/* Atualiza os rótulos do eixo X no gráfico. */
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

/* Atualiza os rótulos do eixo X no gráfico. */
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
  ApplicationModIconButton_OnSetIconIndex( &_this->SupMenos, 10 );
  CoreRectView__OnSetBounds( &_this->SupMais, _Const011E );
  ApplicationModIconButton_OnSetIconIndex( &_this->SupMais, 11 );
  CoreRectView__OnSetBounds( &_this->InfMenos, _Const011F );
  ApplicationModIconButton_OnSetIconIndex( &_this->InfMenos, 10 );
  CoreRectView__OnSetBounds( &_this->InfMais, _Const0120 );
  ApplicationModIconButton_OnSetIconIndex( &_this->InfMais, 11 );
  CoreRectView__OnSetBounds( &_this->SupVal, _Const0121 );
  ViewsText_OnSetString( &_this->SupVal, EwLoadString( &_Const0122 ));
  CoreRectView__OnSetBounds( &_this->InfVal, _Const0123 );
  ViewsText_OnSetString( &_this->InfVal, EwLoadString( &_Const0124 ));
  CoreRectView__OnSetBounds( &_this->Sair, _Const0125 );
  ApplicationModIconButton_OnSetIconIndex( &_this->Sair, 1 );
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
  ViewsText_OnSetFont( &_this->SupVal, EwLoadResource( &ApplicationNumbersM, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->InfVal, EwLoadResource( &ApplicationNumbersM, ResourcesFont 
  ));
  ApplicationModIconButton_OnSetIcon( &_this->Sair, EwLoadResource( &OldResourcesKeyClose, 
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
  CoreRectView__OnSetBounds( _this, _Const0126 );
  CoreRectView__OnSetBounds( &_this->bg, _Const0126 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0126 );
  ViewsBorder_OnSetWidth( &_this->Border, 6 );
  CoreRectView__OnSetBounds( &_this->labelSup, _Const0127 );
  CoreRectView__OnSetBounds( &_this->labelInf, _Const0128 );
  CoreRectView__OnSetBounds( &_this->SupMenos, _Const0129 );
  CoreRectView__OnSetBounds( &_this->SupMais, _Const012A );
  CoreRectView__OnSetBounds( &_this->InfMenos, _Const012B );
  CoreRectView__OnSetBounds( &_this->InfMais, _Const012C );
  CoreRectView__OnSetBounds( &_this->SupVal, _Const012D );
  CoreRectView__OnSetBounds( &_this->InfVal, _Const012E );
  CoreRectView__OnSetBounds( &_this->Sair, _Const012F );
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
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine3, _Const0130 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine3, _Const0131 );
  ViewsLine_OnSetColor( &_this->VLine3, _Const0132 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine2, _Const0133 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine2, _Const0134 );
  ViewsLine_OnSetColor( &_this->VLine2, _Const0132 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine1, _Const0135 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine1, _Const0136 );
  ViewsLine_OnSetColor( &_this->VLine1, _Const0132 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine1, _Const0137 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine1, _Const00AD );
  ViewsLine_OnSetColor( &_this->HLine1, _Const004B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine2, _Const0138 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine2, _Const0139 );
  ViewsLine_OnSetColor( &_this->HLine2, _Const0132 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine3, _Const013A );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine3, _Const013B );
  ViewsLine_OnSetColor( &_this->HLine3, _Const004E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine4, _Const013C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine4, _Const013D );
  ViewsLine_OnSetColor( &_this->HLine4, _Const0132 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine5, _Const013E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine5, _Const013F );
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
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine3, _Const0130 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine3, _Const0131 );
  ViewsLine_OnSetColor( &_this->VLine3, _Const0132 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine2, _Const0133 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine2, _Const0134 );
  ViewsLine_OnSetColor( &_this->VLine2, _Const0132 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine1, _Const0135 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine1, _Const0136 );
  ViewsLine_OnSetColor( &_this->VLine1, _Const0132 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine1, _Const0137 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine1, _Const00AD );
  ViewsLine_OnSetColor( &_this->HLine1, _Const0132 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine2, _Const0138 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine2, _Const0139 );
  ViewsLine_OnSetColor( &_this->HLine2, _Const0132 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine3, _Const013A );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine3, _Const013B );
  ViewsLine_OnSetColor( &_this->HLine3, _Const0015 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine4, _Const013C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine4, _Const013D );
  ViewsLine_OnSetColor( &_this->HLine4, _Const0132 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine5, _Const013E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine5, _Const013F );
  ViewsLine_OnSetColor( &_this->HLine5, _Const0132 );
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
  CoreRectView__OnSetBounds( _this, _Const0126 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine3, _Const0140 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine3, _Const0141 );
  ViewsLine_OnSetWidth( &_this->VLine3, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine2, _Const0142 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine2, _Const0143 );
  ViewsLine_OnSetWidth( &_this->VLine2, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine1, _Const0144 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine1, _Const0145 );
  ViewsLine_OnSetWidth( &_this->VLine1, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine1, _Const0146 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine1, _Const0147 );
  ViewsLine_OnSetWidth( &_this->HLine1, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine2, _Const0148 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine2, _Const0149 );
  ViewsLine_OnSetWidth( &_this->HLine2, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine3, _Const014A );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine3, _Const014B );
  ViewsLine_OnSetWidth( &_this->HLine3, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine4, _Const014C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine4, _Const014D );
  ViewsLine_OnSetWidth( &_this->HLine4, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine5, _Const014E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine5, _Const014F );
  ViewsLine_OnSetWidth( &_this->HLine5, 2 );
  CoreRectView__OnSetBounds( &_this->PlotterPath, _Const0150 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0126 );
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
  CoreRectView__OnSetBounds( _this, _Const0126 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine3, _Const0140 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine3, _Const0141 );
  ViewsLine_OnSetWidth( &_this->VLine3, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine2, _Const0142 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine2, _Const0143 );
  ViewsLine_OnSetWidth( &_this->VLine2, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine1, _Const0144 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine1, _Const0145 );
  ViewsLine_OnSetWidth( &_this->VLine1, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine1, _Const0146 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine1, _Const0147 );
  ViewsLine_OnSetWidth( &_this->HLine1, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine2, _Const0148 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine2, _Const0149 );
  ViewsLine_OnSetWidth( &_this->HLine2, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine3, _Const014A );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine3, _Const014B );
  ViewsLine_OnSetWidth( &_this->HLine3, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine4, _Const014C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine4, _Const014D );
  ViewsLine_OnSetWidth( &_this->HLine4, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine5, _Const014E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine5, _Const014F );
  ViewsLine_OnSetWidth( &_this->HLine5, 2 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0150 );
  ViewsBorder_OnSetWidth( &_this->Border, 2 );
  CoreRectView__OnSetBounds( &_this->PlotterPathR, _Const0150 );
  CoreRectView__OnSetBounds( &_this->PlotterPathS, _Const0150 );
  CoreRectView__OnSetBounds( &_this->PlotterPathT, _Const0150 );

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
