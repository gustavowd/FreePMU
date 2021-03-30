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

#include "main.h"
#include "ewlocale.h"
#include "_ApplicationAplic.h"
#include "_ApplicationAplic769.h"
#include "_ApplicationClasse.h"
#include "_ApplicationConfigScreen.h"
#include "_ApplicationConfigScreen769.h"
#include "_ApplicationFFT.h"
#include "_ApplicationFFT769.h"
#include "_ApplicationFFTMessageR.h"
#include "_ApplicationFFTMessageS.h"
#include "_ApplicationFFTMessageT.h"
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
  0x0000021C, /* ratio 54.81 % */
  0xB8002D00, 0x80000452, 0xD0007382, 0x00061001, 0x006F0019, 0x50C87080, 0x10218022,
  0x5001B801, 0x001E0006, 0x30EA32E3, 0xC0C2E008, 0x24010782, 0x61F0D85C, 0x2D2E89C4,
  0x4008E14E, 0x003B000E, 0x688C50D2, 0x0841A473, 0xA1120D27, 0xC64C7099, 0x1A68688D,
  0x60D319D5, 0xA000A082, 0xD0D9B454, 0x500541A6, 0xA3A80085, 0x8DC46BB0, 0xAD400B06,
  0xD400D241, 0x1AC80018, 0x06550044, 0x4A001800, 0x607925C4, 0x6BB95CEC, 0x4BBDBECF,
  0x83412D92, 0xC5CAC968, 0x4A2FC00B, 0x0090002A, 0x4013EA18, 0xD000BFDD, 0x506BD8BA,
  0x5D846420, 0x5984665B, 0xAFD1A271, 0x8C863F34, 0xE42818D8, 0x1E8B1DA1, 0x27799A55,
  0x939089C9, 0xD1DAEC68, 0x6C86CE26, 0x386C5336, 0xDC51B311, 0xA158019D, 0xCEA17369,
  0x1B7200DF, 0x48D500EC, 0xB6719A4D, 0x7B375002, 0x1D87F069, 0xCAE90627, 0x3D4EB815,
  0xCC81CF15, 0xDD81D068, 0x585B161C, 0xA2D911B4, 0x2506F062, 0xDEF89DE8, 0x70F68A22,
  0xA36C5BF3, 0x920A4012, 0x00040600, 0x00000000
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
static const XRect _Const0099 = {{ 370, 10 }, { 470, 55 }};
static const XStringRes _Const009A = { _StringsDefault0, 0x01D4 };
static const XRect _Const009B = {{ 370, 86 }, { 470, 131 }};
static const XStringRes _Const009C = { _StringsDefault0, 0x01DE };
static const XRect _Const009D = {{ 370, 161 }, { 470, 206 }};
static const XStringRes _Const009E = { _StringsDefault0, 0x01E8 };
static const XRect _Const009F = {{ 410, 60 }, { 450, 80 }};
static const XRect _Const00A0 = {{ 410, 135 }, { 450, 155 }};
static const XRect _Const00A1 = {{ 420, 210 }, { 460, 230 }};
static const XRect _Const00A2 = {{ 0, 0 }, { 480, 240 }};
static const XRect _Const00A3 = {{ 10, 30 }, { 470, 80 }};
static const XStringRes _Const00A4 = { _StringsDefault0, 0x01F2 };
static const XRect _Const00A5 = {{ 100, 180 }, { 220, 210 }};
static const XStringRes _Const00A6 = { _StringsDefault0, 0x0203 };
static const XRect _Const00A7 = {{ 0, 0 }, { 260, 30 }};
static const XStringRes _Const00A8 = { _StringsDefault1, 0x0003 };
static const XRect _Const00A9 = {{ 0, 80 }, { 220, 110 }};
static const XStringRes _Const00AA = { _StringsDefault1, 0x0019 };
static const XRect _Const00AB = {{ 10, 110 }, { 470, 160 }};
static const XStringRes _Const00AC = { _StringsDefault1, 0x0030 };
static const XRect _Const00AD = {{ 260, 180 }, { 380, 210 }};
static const XStringRes _Const00AE = { _StringsDefault1, 0x0040 };
static const XRect _Const00AF = {{ 0, 0 }, { 120, 30 }};
static const XPoint _Const00B0 = { 0, 30 };
static const XPoint _Const00B1 = { 120, 30 };
static const XPoint _Const00B2 = { 120, 0 };
static const XStringRes _Const00B3 = { _StringsDefault1, 0x0049 };
static const XRect _Const00B4 = {{ 0, 0 }, { 800, 480 }};
static const XRect _Const00B5 = {{ 0, 8 }, { 800, 488 }};
static const XRect _Const00B6 = {{ 0, 438 }, { 800, 488 }};
static const XRect _Const00B7 = {{ 30, 438 }, { 770, 480 }};
static const XRect _Const00B8 = {{ 0, 8 }, { 800, 438 }};
static const XRect _Const00B9 = {{ 800, 8 }, { 1600, 438 }};
static const XRect _Const00BA = {{ 1600, 8 }, { 2400, 438 }};
static const XRect _Const00BB = {{ 2400, 8 }, { 3200, 438 }};
static const XRect _Const00BC = {{ 3200, 8 }, { 4000, 438 }};
static const XRect _Const00BD = {{ 4000, 8 }, { 4800, 438 }};
static const XRect _Const00BE = {{ 0, 0 }, { 800, 430 }};
static const XPoint _Const00BF = { 225, 215 };
static const XRect _Const00C0 = {{ 30, 20 }, { 420, 410 }};
static const XRect _Const00C1 = {{ 410, 205 }, { 460, 225 }};
static const XRect _Const00C2 = {{ -11, 205 }, { 39, 225 }};
static const XRect _Const00C3 = {{ 200, 0 }, { 250, 20 }};
static const XRect _Const00C4 = {{ 200, 410 }, { 250, 430 }};
static const XRect _Const00C5 = {{ 318, 385 }, { 348, 406 }};
static const XRect _Const00C6 = {{ 99, 383 }, { 129, 404 }};
static const XRect _Const00C7 = {{ 23, 308 }, { 53, 329 }};
static const XRect _Const00C8 = {{ 105, 24 }, { 135, 45 }};
static const XRect _Const00C9 = {{ 322, 24 }, { 342, 45 }};
static const XRect _Const00CA = {{ 398, 307 }, { 428, 328 }};
static const XRect _Const00CB = {{ 400, 100 }, { 420, 121 }};
static const XRect _Const00CC = {{ 20, 100 }, { 50, 121 }};
static const XRect _Const00CD = {{ 450, 20 }, { 632, 48 }};
static const XRect _Const00CE = {{ 673, 20 }, { 785, 48 }};
static const XRect _Const00CF = {{ 610, 150 }, { 626, 182 }};
static const XRect _Const00D0 = {{ 760, 150 }, { 776, 182 }};
static const XRect _Const00D1 = {{ 610, 110 }, { 626, 142 }};
static const XRect _Const00D2 = {{ 760, 110 }, { 776, 142 }};
static const XRect _Const00D3 = {{ 610, 70 }, { 626, 102 }};
static const XRect _Const00D4 = {{ 760, 70 }, { 776, 102 }};
static const XPoint _Const00D5 = { 790, 60 };
static const XPoint _Const00D6 = { 440, 60 };
static const XPoint _Const00D7 = { 225, 227 };
static const XPoint _Const00D8 = { 420, 227 };
static const XPoint _Const00D9 = { 420, 211 };
static const XPoint _Const00DA = { 225, 211 };
static const XPoint _Const00DB = { 2, 7 };
static const XRect _Const00DC = {{ 640, 310 }, { 800, 340 }};
static const XRect _Const00DD = {{ 640, 200 }, { 800, 230 }};
static const XRect _Const00DE = {{ 640, 90 }, { 800, 120 }};
static const XRect _Const00DF = {{ 600, 390 }, { 680, 420 }};
static const XRect _Const00E0 = {{ 450, 390 }, { 530, 420 }};
static const XRect _Const00E1 = {{ 290, 390 }, { 380, 420 }};
static const XRect _Const00E2 = {{ 140, 390 }, { 230, 420 }};
static const XRect _Const00E3 = {{ 10, 390 }, { 100, 420 }};
static const XRect _Const00E4 = {{ 40, 0 }, { 280, 50 }};
static const XRect _Const00E5 = {{ 280, 0 }, { 530, 50 }};
static const XRect _Const00E6 = {{ 720, 350 }, { 790, 420 }};
static const XRect _Const00E7 = {{ 40, 50 }, { 640, 380 }};
static const XRect _Const00E8 = {{ 660, 310 }, { 770, 340 }};
static const XRect _Const00E9 = {{ 660, 200 }, { 770, 230 }};
static const XRect _Const00EA = {{ 660, 90 }, { 770, 120 }};
static const XRect _Const00EB = {{ 300, 390 }, { 380, 420 }};
static const XRect _Const00EC = {{ 150, 390 }, { 230, 420 }};
static const XRect _Const00ED = {{ 10, 390 }, { 90, 420 }};
static const XRect _Const00EE = {{ 590, 5 }, { 720, 45 }};
static const XRect _Const00EF = {{ 460, 5 }, { 590, 45 }};
static const XRect _Const00F0 = {{ 330, 5 }, { 460, 45 }};
static const XRect _Const00F1 = {{ 40, 5 }, { 350, 45 }};
static const XRect _Const00F2 = {{ 0, 390 }, { 80, 420 }};
static const XRect _Const00F3 = {{ 40, 5 }, { 250, 45 }};
static const XPoint _Const00F4 = { 185, 399 };
static const XPoint _Const00F5 = { 185, 20 };
static const XPoint _Const00F6 = { 350, 399 };
static const XPoint _Const00F7 = { 350, 20 };
static const XPoint _Const00F8 = { 1250, 350 };
static const XPoint _Const00F9 = { 1250, 150 };
static const XPoint _Const00FA = { 1090, 510 };
static const XPoint _Const00FB = { 1090, 310 };
static const XPoint _Const00FC = { 514, 305 };
static const XPoint _Const00FD = { 20, 305 };
static const XPoint _Const00FE = { 514, 210 };
static const XPoint _Const00FF = { 20, 210 };
static const XPoint _Const0100 = { 514, 115 };
static const XPoint _Const0101 = { 20, 115 };
static const XRect _Const0102 = {{ 155, 400 }, { 215, 430 }};
static const XStringRes _Const0103 = { _StringsDefault1, 0x0053 };
static const XRect _Const0104 = {{ 321, 400 }, { 381, 430 }};
static const XRect _Const0105 = {{ 483, 400 }, { 543, 430 }};
static const XStringRes _Const0106 = { _StringsDefault1, 0x0058 };
static const XRect _Const0107 = {{ 526, 11 }, { 586, 41 }};
static const XStringRes _Const0108 = { _StringsDefault1, 0x005E };
static const XRect _Const0109 = {{ 525, 289 }, { 595, 319 }};
static const XStringRes _Const010A = { _StringsDefault1, 0x0066 };
static const XRect _Const010B = {{ 525, 195 }, { 595, 225 }};
static const XStringRes _Const010C = { _StringsDefault1, 0x006D };
static const XRect _Const010D = {{ 525, 98 }, { 595, 128 }};
static const XStringRes _Const010E = { _StringsDefault1, 0x0075 };
static const XRect _Const010F = {{ 20, 20 }, { 515, 400 }};
static const XPoint _Const0110 = { 0, 380 };
static const XPoint _Const0111 = { 33, 1900 };
static const XRect _Const0112 = {{ 610, 107 }, { 680, 137 }};
static const XStringRes _Const0113 = { _StringsDefault1, 0x007D };
static const XRect _Const0114 = {{ 610, 30 }, { 780, 100 }};
static const XRect _Const0115 = {{ 610, 239 }, { 680, 269 }};
static const XRect _Const0116 = {{ 610, 163 }, { 780, 233 }};
static const XRect _Const0117 = {{ 610, 297 }, { 780, 367 }};
static const XRect _Const0118 = {{ 610, 370 }, { 680, 400 }};
static const XRect _Const0119 = {{ 680, 107 }, { 778, 137 }};
static const XStringRes _Const011A = { _StringsDefault1, 0x0085 };
static const XRect _Const011B = {{ 680, 239 }, { 778, 269 }};
static const XRect _Const011C = {{ 680, 370 }, { 778, 400 }};
static const XRect _Const011D = {{ 10, 80 }, { 790, 130 }};
static const XRect _Const011E = {{ 120, 320 }, { 360, 380 }};
static const XRect _Const011F = {{ 10, 10 }, { 430, 60 }};
static const XStringRes _Const0120 = { _StringsDefault1, 0x008C };
static const XRect _Const0121 = {{ 10, 170 }, { 370, 220 }};
static const XRect _Const0122 = {{ 10, 220 }, { 780, 280 }};
static const XStringRes _Const0123 = { _StringsDefault1, 0x00A2 };
static const XRect _Const0124 = {{ 440, 320 }, { 680, 380 }};
static const XRect _Const0125 = {{ 0, 0 }, { 30, 30 }};
static const XPoint _Const0126 = { 30, 30 };
static const XPoint _Const0127 = { 30, 0 };
static const XRect _Const0128 = {{ 0, 0 }, { 380, 180 }};
static const XColor _Const0129 = { 0x00, 0x00, 0x00, 0x80 };
static const XRect _Const012A = {{ 10, 10 }, { 350, 50 }};
static const XStringRes _Const012B = { _StringsDefault1, 0x00B2 };
static const XRect _Const012C = {{ 10, 90 }, { 370, 130 }};
static const XStringRes _Const012D = { _StringsDefault1, 0x00D2 };
static const XRect _Const012E = {{ 60, 45 }, { 100, 85 }};
static const XRect _Const012F = {{ 280, 45 }, { 320, 85 }};
static const XRect _Const0130 = {{ 60, 125 }, { 100, 165 }};
static const XRect _Const0131 = {{ 280, 125 }, { 320, 165 }};
static const XRect _Const0132 = {{ 90, 45 }, { 290, 85 }};
static const XStringRes _Const0133 = { _StringsDefault1, 0x00EF };
static const XRect _Const0134 = {{ 90, 125 }, { 290, 165 }};
static const XStringRes _Const0135 = { _StringsDefault1, 0x00FD };
static const XRect _Const0136 = {{ 340, 0 }, { 380, 40 }};
static const XRect _Const0137 = {{ 329, 45 }, { 369, 85 }};
static const XRect _Const0138 = {{ 11, 45 }, { 51, 85 }};
static const XRect _Const0139 = {{ 0, 0 }, { 600, 330 }};
static const XRect _Const013A = {{ 20, 20 }, { 550, 70 }};
static const XRect _Const013B = {{ 20, 170 }, { 580, 220 }};
static const XRect _Const013C = {{ 100, 70 }, { 160, 130 }};
static const XRect _Const013D = {{ 440, 70 }, { 500, 130 }};
static const XRect _Const013E = {{ 100, 230 }, { 160, 290 }};
static const XRect _Const013F = {{ 440, 230 }, { 500, 290 }};
static const XRect _Const0140 = {{ 150, 70 }, { 450, 130 }};
static const XRect _Const0141 = {{ 150, 230 }, { 450, 290 }};
static const XRect _Const0142 = {{ 540, 0 }, { 600, 60 }};
static const XRect _Const0143 = {{ 518, 70 }, { 578, 130 }};
static const XRect _Const0144 = {{ 22, 70 }, { 82, 130 }};
static const XPoint _Const0145 = { 285, 180 };
static const XPoint _Const0146 = { 285, 0 };
static const XColor _Const0147 = { 0xFF, 0xFF, 0xFF, 0x40 };
static const XPoint _Const0148 = { 190, 180 };
static const XPoint _Const0149 = { 190, 0 };
static const XPoint _Const014A = { 95, 180 };
static const XPoint _Const014B = { 95, 0 };
static const XPoint _Const014C = { 380, 30 };
static const XPoint _Const014D = { 380, 60 };
static const XPoint _Const014E = { 0, 60 };
static const XPoint _Const014F = { 380, 90 };
static const XPoint _Const0150 = { 0, 90 };
static const XPoint _Const0151 = { 380, 120 };
static const XPoint _Const0152 = { 0, 120 };
static const XPoint _Const0153 = { 380, 150 };
static const XPoint _Const0154 = { 0, 150 };
static const XPoint _Const0155 = { 449, 328 };
static const XPoint _Const0156 = { 449, 0 };
static const XPoint _Const0157 = { 299, 328 };
static const XPoint _Const0158 = { 299, 0 };
static const XPoint _Const0159 = { 150, 328 };
static const XPoint _Const015A = { 150, 0 };
static const XPoint _Const015B = { 598, 55 };
static const XPoint _Const015C = { 0, 55 };
static const XPoint _Const015D = { 598, 109 };
static const XPoint _Const015E = { 0, 109 };
static const XPoint _Const015F = { 598, 164 };
static const XPoint _Const0160 = { 0, 164 };
static const XPoint _Const0161 = { 598, 219 };
static const XPoint _Const0162 = { 0, 219 };
static const XPoint _Const0163 = { 598, 273 };
static const XPoint _Const0164 = { 0, 273 };
static const XRect _Const0165 = {{ 0, 0 }, { 598, 328 }};

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
EW_DEFINE_FONT_RES( ApplicationNumbersM, 26, 6, 1, 16, 0x001F, 0x00C0 )
  EW_GLYPH( 0x001F, 3, -17, 14, 17, 20, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 8, 0x0000019D ),                /* ' ' */
  EW_GLYPH( 0x0021, 2, -20, 4, 20, 8, 0x0000019D ),             /* '!' */
  EW_GLYPH( 0x0022, 1, -20, 8, 7, 10, 0x00000256 ),             /* '"' */
  EW_GLYPH( 0x0023, 0, -20, 15, 20, 15, 0x000002EE ),           /* '#' */
  EW_GLYPH( 0x0024, 0, -21, 14, 23, 15, 0x000005EE ),           /* '$' */
  EW_GLYPH( 0x0025, 1, -20, 22, 20, 24, 0x00000974 ),           /* '%' */
  EW_GLYPH( 0x0026, 1, -20, 17, 20, 18, 0x00000DF4 ),           /* '&' */
  EW_GLYPH( 0x0027, 1, -20, 3, 7, 5, 0x000011CD ),              /* ''' */
  EW_GLYPH( 0x0028, 1, -20, 8, 25, 9, 0x0000120F ),             /* '(' */
  EW_GLYPH( 0x0029, 1, -20, 8, 25, 9, 0x000013D7 ),             /* ')' */
  EW_GLYPH( 0x002A, 0, -20, 10, 8, 11, 0x000015B0 ),            /* '*' */
  EW_GLYPH( 0x002B, 1, -16, 14, 13, 16, 0x000016D3 ),           /* '+' */
  EW_GLYPH( 0x002C, 2, -3, 4, 7, 8, 0x00001822 ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -8, 9, 2, 9, 0x00001877 ),               /* '-' */
  EW_GLYPH( 0x002E, 2, -3, 4, 3, 8, 0x000018AB ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -20, 8, 20, 8, 0x000018C5 ),             /* '/' */
  EW_GLYPH( 0x0030, 1, -20, 13, 20, 15, 0x00001A20 ),           /* '0' */
  EW_GLYPH( 0x0031, 2, -20, 9, 20, 15, 0x00001CD9 ),            /* '1' */
  EW_GLYPH( 0x0032, 0, -20, 14, 20, 15, 0x00001DEF ),           /* '2' */
  EW_GLYPH( 0x0033, 1, -20, 13, 20, 15, 0x000020F7 ),           /* '3' */
  EW_GLYPH( 0x0034, 0, -20, 14, 20, 15, 0x000023FA ),           /* '4' */
  EW_GLYPH( 0x0035, 1, -20, 13, 20, 15, 0x0000261C ),           /* '5' */
  EW_GLYPH( 0x0036, 1, -20, 13, 20, 15, 0x00002922 ),           /* '6' */
  EW_GLYPH( 0x0037, 1, -20, 13, 20, 15, 0x00002C68 ),           /* '7' */
  EW_GLYPH( 0x0038, 1, -20, 13, 20, 15, 0x00002EB3 ),           /* '8' */
  EW_GLYPH( 0x0039, 1, -20, 13, 20, 15, 0x000031EF ),           /* '9' */
  EW_GLYPH( 0x003A, 2, -14, 4, 14, 8, 0x00003535 ),             /* ':' */
  EW_GLYPH( 0x003B, 2, -14, 4, 18, 8, 0x00003597 ),             /* ';' */
  EW_GLYPH( 0x003C, 1, -16, 14, 13, 16, 0x00003634 ),           /* '<' */
  EW_GLYPH( 0x003D, 1, -14, 14, 9, 16, 0x00003868 ),            /* '=' */
  EW_GLYPH( 0x003E, 1, -16, 14, 13, 16, 0x000039F9 ),           /* '>' */
  EW_GLYPH( 0x003F, 1, -20, 13, 20, 15, 0x00003C0B ),           /* '?' */
  EW_GLYPH( 0x0040, 1, -20, 26, 25, 27, 0x00003E5E ),           /* '@' */
  EW_GLYPH( 0x0041, -1, -20, 20, 20, 18, 0x00004639 ),          /* 'A' */
  EW_GLYPH( 0x0042, 1, -20, 16, 20, 18, 0x00004991 ),           /* 'B' */
  EW_GLYPH( 0x0043, 1, -20, 18, 20, 20, 0x00004CCE ),           /* 'C' */
  EW_GLYPH( 0x0044, 2, -20, 17, 20, 20, 0x00005062 ),           /* 'D' */
  EW_GLYPH( 0x0045, 2, -20, 15, 20, 18, 0x0000534A ),           /* 'E' */
  EW_GLYPH( 0x0046, 2, -20, 14, 20, 17, 0x00005606 ),           /* 'F' */
  EW_GLYPH( 0x0047, 1, -20, 19, 20, 21, 0x0000582B ),           /* 'G' */
  EW_GLYPH( 0x0048, 2, -20, 16, 20, 20, 0x00005C1D ),           /* 'H' */
  EW_GLYPH( 0x0049, 2, -20, 4, 20, 8, 0x00005DFE ),             /* 'I' */
  EW_GLYPH( 0x004A, 0, -20, 12, 20, 14, 0x00005E5D ),           /* 'J' */
  EW_GLYPH( 0x004B, 1, -20, 17, 20, 18, 0x00006000 ),           /* 'K' */
  EW_GLYPH( 0x004C, 1, -20, 14, 20, 15, 0x000062F2 ),           /* 'L' */
  EW_GLYPH( 0x004D, 2, -20, 19, 20, 22, 0x00006466 ),           /* 'M' */
  EW_GLYPH( 0x004E, 2, -20, 16, 20, 20, 0x00006779 ),           /* 'N' */
  EW_GLYPH( 0x004F, 1, -20, 19, 20, 21, 0x000069B6 ),           /* 'O' */
  EW_GLYPH( 0x0050, 2, -20, 15, 20, 18, 0x00006D8B ),           /* 'P' */
  EW_GLYPH( 0x0051, 1, -20, 20, 21, 21, 0x00007024 ),           /* 'Q' */
  EW_GLYPH( 0x0052, 2, -20, 18, 20, 20, 0x00007484 ),           /* 'R' */
  EW_GLYPH( 0x0053, 1, -20, 16, 20, 18, 0x00007791 ),           /* 'S' */
  EW_GLYPH( 0x0054, 0, -20, 16, 20, 17, 0x00007B86 ),           /* 'T' */
  EW_GLYPH( 0x0055, 2, -20, 16, 20, 20, 0x00007D77 ),           /* 'U' */
  EW_GLYPH( 0x0056, 0, -20, 18, 20, 18, 0x00007FB9 ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -20, 26, 20, 25, 0x000082DA ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -20, 18, 20, 18, 0x00008778 ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -20, 18, 20, 18, 0x00008B08 ),           /* 'Y' */
  EW_GLYPH( 0x005A, 0, -20, 16, 20, 17, 0x00008DBC ),           /* 'Z' */
  EW_GLYPH( 0x005B, 1, -20, 7, 25, 8, 0x000090E0 ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -20, 8, 20, 8, 0x000091BE ),             /* '\' */
  EW_GLYPH( 0x005D, 0, -20, 6, 25, 8, 0x00009314 ),             /* ']' */
  EW_GLYPH( 0x005E, 0, -20, 12, 11, 13, 0x000093E4 ),           /* '^' */
  EW_GLYPH( 0x005F, -1, 4, 17, 2, 15, 0x00009541 ),             /* '_' */
  EW_GLYPH( 0x0060, 1, -19, 6, 4, 9, 0x000095F8 ),              /* '`' */
  EW_GLYPH( 0x0061, 0, -15, 14, 15, 15, 0x00009648 ),           /* 'a' */
  EW_GLYPH( 0x0062, 1, -20, 13, 20, 15, 0x000098F3 ),           /* 'b' */
  EW_GLYPH( 0x0063, 1, -15, 13, 15, 14, 0x00009B47 ),           /* 'c' */
  EW_GLYPH( 0x0064, 0, -20, 14, 20, 15, 0x00009D8C ),           /* 'd' */
  EW_GLYPH( 0x0065, 0, -15, 14, 15, 15, 0x00009FEC ),           /* 'e' */
  EW_GLYPH( 0x0066, 0, -20, 9, 20, 8, 0x0000A292 ),             /* 'f' */
  EW_GLYPH( 0x0067, 0, -15, 14, 20, 15, 0x0000A3E4 ),           /* 'g' */
  EW_GLYPH( 0x0068, 1, -20, 13, 20, 15, 0x0000A715 ),           /* 'h' */
  EW_GLYPH( 0x0069, 1, -20, 4, 20, 6, 0x0000A8C0 ),             /* 'i' */
  EW_GLYPH( 0x006A, -2, -20, 7, 25, 6, 0x0000A93D ),            /* 'j' */
  EW_GLYPH( 0x006B, 1, -20, 13, 20, 14, 0x0000AA50 ),           /* 'k' */
  EW_GLYPH( 0x006C, 1, -20, 4, 20, 6, 0x0000AC4D ),             /* 'l' */
  EW_GLYPH( 0x006D, 1, -15, 20, 15, 22, 0x0000ACAC ),           /* 'm' */
  EW_GLYPH( 0x006E, 1, -15, 13, 15, 15, 0x0000AEFA ),           /* 'n' */
  EW_GLYPH( 0x006F, 0, -15, 15, 15, 15, 0x0000B06E ),           /* 'o' */
  EW_GLYPH( 0x0070, 1, -15, 13, 20, 15, 0x0000B2DB ),           /* 'p' */
  EW_GLYPH( 0x0071, 0, -15, 14, 20, 15, 0x0000B53E ),           /* 'q' */
  EW_GLYPH( 0x0072, 1, -15, 9, 15, 9, 0x0000B7BD ),             /* 'r' */
  EW_GLYPH( 0x0073, 0, -15, 13, 15, 14, 0x0000B8B6 ),           /* 's' */
  EW_GLYPH( 0x0074, 0, -20, 8, 20, 8, 0x0000BB46 ),             /* 't' */
  EW_GLYPH( 0x0075, 1, -15, 13, 15, 15, 0x0000BC57 ),           /* 'u' */
  EW_GLYPH( 0x0076, 0, -15, 14, 15, 14, 0x0000BDAD ),           /* 'v' */
  EW_GLYPH( 0x0077, 0, -15, 20, 15, 20, 0x0000BFB6 ),           /* 'w' */
  EW_GLYPH( 0x0078, 0, -15, 14, 15, 14, 0x0000C2BA ),           /* 'x' */
  EW_GLYPH( 0x0079, 0, -15, 14, 20, 14, 0x0000C4FB ),           /* 'y' */
  EW_GLYPH( 0x007A, 0, -15, 13, 15, 14, 0x0000C7A3 ),           /* 'z' */
  EW_GLYPH( 0x007B, 0, -20, 9, 25, 9, 0x0000C9AD ),             /* '{' */
  EW_GLYPH( 0x007C, 2, -20, 3, 25, 7, 0x0000CB9A ),             /* '|' */
  EW_GLYPH( 0x007D, 0, -20, 9, 25, 9, 0x0000CBF0 ),             /* '}' */
  EW_GLYPH( 0x007E, 1, -12, 14, 5, 16, 0x0000CDD5 ),            /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 8, 0x0000CEF8 ),
  EW_GLYPH( 0x00A1, 3, -14, 3, 19, 9, 0x0000CEF8 ),
  EW_GLYPH( 0x00A2, 1, -20, 13, 25, 15, 0x0000CF9D ),
  EW_GLYPH( 0x00A3, 0, -20, 15, 20, 15, 0x0000D30E ),
  EW_GLYPH( 0x00A4, 0, -16, 14, 13, 15, 0x0000D631 ),
  EW_GLYPH( 0x00A5, -1, -20, 16, 20, 15, 0x0000D8A2 ),
  EW_GLYPH( 0x00A6, 2, -20, 3, 25, 7, 0x0000DBB5 ),
  EW_GLYPH( 0x00A7, 1, -20, 13, 25, 15, 0x0000DC21 ),
  EW_GLYPH( 0x00A8, 0, -20, 9, 3, 9, 0x0000E05E ),
  EW_GLYPH( 0x00A9, 0, -20, 20, 20, 20, 0x0000E097 ),
  EW_GLYPH( 0x00AA, 0, -20, 10, 10, 10, 0x0000E5CC ),
  EW_GLYPH( 0x00AB, 1, -13, 13, 12, 15, 0x0000E73E ),
  EW_GLYPH( 0x00AC, 1, -14, 14, 9, 16, 0x0000E915 ),
  EW_GLYPH( 0x00AD, 0, -8, 9, 2, 9, 0x0000EA31 ),
  EW_GLYPH( 0x00AE, 0, -20, 20, 20, 20, 0x0000EA65 ),
  EW_GLYPH( 0x00AF, -1, -22, 17, 2, 15, 0x0000EF5A ),
  EW_GLYPH( 0x00B0, 1, -20, 8, 7, 11, 0x0000F011 ),
  EW_GLYPH( 0x00B1, 1, -16, 13, 16, 15, 0x0000F0F6 ),
  EW_GLYPH( 0x00B2, 0, -20, 9, 10, 9, 0x0000F2CF ),
  EW_GLYPH( 0x00B3, 0, -20, 9, 10, 9, 0x0000F42E ),
  EW_GLYPH( 0x00B4, 2, -19, 6, 4, 9, 0x0000F586 ),
  EW_GLYPH( 0x00B5, 2, -15, 12, 20, 16, 0x0000F5D8 ),
  EW_GLYPH( 0x00B6, 0, -20, 15, 25, 15, 0x0000F780 ),
  EW_GLYPH( 0x00B7, 3, -11, 3, 3, 9, 0x0000F9AC ),
  EW_GLYPH( 0x00B8, 1, -1, 7, 6, 9, 0x0000F9C1 ),
  EW_GLYPH( 0x00B9, 1, -20, 6, 10, 9, 0x0000FA53 ),
  EW_GLYPH( 0x00BA, 0, -20, 10, 10, 10, 0x0000FAD2 ),
  EW_GLYPH( 0x00BB, 1, -13, 13, 12, 15, 0x0000FC1D ),
  EW_GLYPH( 0x00BC, 1, -20, 22, 20, 23, 0x0000FDE8 ),
  EW_GLYPH( 0x00BD, 1, -20, 22, 20, 23, 0x000101CA ),
  EW_GLYPH( 0x00BE, 0, -20, 23, 20, 23, 0x000105E2 ),
  EW_GLYPH( 0x00BF, 2, -14, 13, 19, 17, 0x00010AA5 ),
  EW_GLYPH( 0x00C0, -1, -26, 20, 26, 18, 0x00010CE4 ),
  EW_GLYPH( 0x00C1, -1, -26, 20, 26, 18, 0x000110F7 ),
  EW_GLYPH( 0x00C2, -1, -26, 20, 26, 18, 0x0001150B ),
  EW_GLYPH( 0x00C3, -1, -25, 20, 25, 18, 0x0001195A ),
  EW_GLYPH( 0x00C4, -1, -25, 20, 25, 18, 0x00011DB0 ),
  EW_GLYPH( 0x00C5, -1, -25, 20, 25, 18, 0x000121A4 ),
  EW_GLYPH( 0x00C6, 0, -20, 26, 20, 27, 0x000125A0 ),
  EW_GLYPH( 0x00C7, 1, -20, 18, 26, 20, 0x00012A4A ),
  EW_GLYPH( 0x00C8, 2, -26, 15, 26, 18, 0x00012ED2 ),
  EW_GLYPH( 0x00C9, 2, -26, 15, 26, 18, 0x00013231 ),
  EW_GLYPH( 0x00CA, 2, -26, 15, 26, 18, 0x00013592 ),
  EW_GLYPH( 0x00CB, 2, -25, 15, 25, 18, 0x00013921 ),
  EW_GLYPH( 0x00CC, 0, -26, 6, 26, 8, 0x00013C5E ),
  EW_GLYPH( 0x00CD, 1, -26, 6, 26, 8, 0x00013D51 ),
  EW_GLYPH( 0x00CE, -1, -26, 9, 26, 8, 0x00013E42 ),
  EW_GLYPH( 0x00CF, 0, -25, 8, 25, 8, 0x00013FB7 ),
  EW_GLYPH( 0x00D0, -1, -20, 20, 20, 20, 0x000140BE ),
  EW_GLYPH( 0x00D1, 2, -25, 16, 25, 20, 0x0001444E ),
  EW_GLYPH( 0x00D2, 1, -26, 19, 26, 21, 0x00014770 ),
  EW_GLYPH( 0x00D3, 1, -26, 19, 26, 21, 0x00014C00 ),
  EW_GLYPH( 0x00D4, 1, -26, 19, 26, 21, 0x0001508D ),
  EW_GLYPH( 0x00D5, 1, -25, 19, 25, 21, 0x00015549 ),
  EW_GLYPH( 0x00D6, 1, -25, 19, 25, 21, 0x000159F6 ),
  EW_GLYPH( 0x00D7, 2, -15, 12, 12, 16, 0x00015E66 ),
  EW_GLYPH( 0x00D8, 1, -20, 19, 20, 21, 0x00016066 ),
  EW_GLYPH( 0x00D9, 2, -26, 16, 26, 20, 0x000164F9 ),
  EW_GLYPH( 0x00DA, 2, -26, 16, 26, 20, 0x000167DE ),
  EW_GLYPH( 0x00DB, 2, -26, 16, 26, 20, 0x00016AC7 ),
  EW_GLYPH( 0x00DC, 2, -25, 16, 25, 20, 0x00016DEA ),
  EW_GLYPH( 0x00DD, 0, -26, 18, 26, 18, 0x000170B4 ),
  EW_GLYPH( 0x00DE, 2, -20, 15, 20, 18, 0x00017419 ),
  EW_GLYPH( 0x00DF, 2, -20, 14, 20, 17, 0x000176B6 ),
  EW_GLYPH( 0x00E0, 0, -20, 14, 20, 15, 0x00017995 ),
  EW_GLYPH( 0x00E1, 0, -20, 14, 20, 15, 0x00017CCC ),
  EW_GLYPH( 0x00E2, 0, -20, 14, 20, 15, 0x00018004 ),
  EW_GLYPH( 0x00E3, 0, -19, 14, 19, 15, 0x00018372 ),
  EW_GLYPH( 0x00E4, 0, -19, 14, 19, 15, 0x000186D3 ),
  EW_GLYPH( 0x00E5, 0, -21, 14, 21, 15, 0x000189F4 ),
  EW_GLYPH( 0x00E6, 0, -15, 23, 15, 24, 0x00018D65 ),
  EW_GLYPH( 0x00E7, 1, -15, 13, 21, 14, 0x00019218 ),
  EW_GLYPH( 0x00E8, 0, -20, 14, 20, 15, 0x00019525 ),
  EW_GLYPH( 0x00E9, 0, -20, 14, 20, 15, 0x00019853 ),
  EW_GLYPH( 0x00EA, 0, -20, 14, 20, 15, 0x00019B83 ),
  EW_GLYPH( 0x00EB, 0, -19, 14, 19, 15, 0x00019EEB ),
  EW_GLYPH( 0x00EC, 0, -20, 6, 20, 8, 0x0001A209 ),
  EW_GLYPH( 0x00ED, 2, -20, 6, 20, 8, 0x0001A2D0 ),
  EW_GLYPH( 0x00EE, -1, -20, 10, 20, 8, 0x0001A39B ),
  EW_GLYPH( 0x00EF, 0, -19, 8, 19, 8, 0x0001A4E6 ),
  EW_GLYPH( 0x00F0, 0, -20, 14, 20, 15, 0x0001A5BD ),
  EW_GLYPH( 0x00F1, 1, -19, 13, 19, 15, 0x0001A8FC ),
  EW_GLYPH( 0x00F2, 0, -20, 15, 20, 15, 0x0001AB2F ),
  EW_GLYPH( 0x00F3, 0, -20, 15, 20, 15, 0x0001AE2E ),
  EW_GLYPH( 0x00F4, 0, -20, 15, 20, 15, 0x0001B12B ),
  EW_GLYPH( 0x00F5, 0, -19, 15, 19, 15, 0x0001B45C ),
  EW_GLYPH( 0x00F6, 0, -19, 15, 19, 15, 0x0001B783 ),
  EW_GLYPH( 0x00F7, 1, -15, 13, 11, 15, 0x0001BA68 ),
  EW_GLYPH( 0x00F8, 1, -16, 14, 17, 17, 0x0001BBC1 ),
  EW_GLYPH( 0x00F9, 1, -20, 13, 20, 15, 0x0001BEE1 ),
  EW_GLYPH( 0x00FA, 1, -20, 13, 20, 15, 0x0001C0C5 ),
  EW_GLYPH( 0x00FB, 1, -20, 13, 20, 15, 0x0001C2A0 ),
  EW_GLYPH( 0x00FC, 1, -19, 13, 19, 15, 0x0001C4B8 ),
  EW_GLYPH( 0x00FD, 0, -20, 14, 25, 14, 0x0001C67E ),
  EW_GLYPH( 0x00FE, 1, -20, 13, 25, 15, 0x0001C9B4 ),
  EW_GLYPH( 0x00FF, 0, -19, 14, 24, 14, 0x0001CC61 ),

  EW_FONT_PIXEL( ApplicationNumbersM, 0x0001CF7D )              /* ratio 60.05 % */
    0xDEF7BDEF, 0xF7BDEF7B, 0xF7BDEFFE, 0xBDEF7BDE, 0x0000FEF7, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0xDEE00000, 0xF7BDEF7B, 0xEFEF7BDE, 0xC00077BB,
    0x81971040, 0x0CB08448, 0x084B0C21, 0xD05E7062, 0xEFC026F7, 0x05BDCF1E, 0x60861000,
    0x7F9269A5, 0x72C44643, 0x6EF807C8, 0x9604EFA1, 0x6403C307, 0x0C031E06, 0x3C09110B,
    0xE02C78FE, 0xBE7F0C4A, 0xDDF4EF7B, 0x0FDF5B7B, 0xBBDDF000, 0xC8F7BDD5, 0x8D943F7B,
    0xD856C052, 0xC0C4F036, 0x1BDDF0A3, 0xC3BDEF71, 0x0003F7B9, 0xEEF9777C, 0xBDEFADBD,
    0x31C2C31F, 0x8F122780, 0x8C246407, 0x183CB008, 0xE2EFE01E, 0x37500031, 0x67DFAC00,
    0xDFE2057F, 0x7DF9F215, 0x9FBC65F0, 0x2A8B3D3D, 0x7DF219BF, 0x80F90CBC, 0x26B84F93,
    0xB85FFF50, 0x4E4A0026, 0xEDE3C600, 0xEB4DF000, 0xDDE00FD3, 0x2CEFCD33, 0x35AFBC60,
    0xEF005FA2, 0x5800B36E, 0x13DDEFE9, 0xF8CF0D30, 0xD4A19603, 0x6F6C3500, 0xFAE43FFA,
    0x8C9C478C, 0x8C7767EF, 0x0AEEC63F, 0x880EEF51, 0xDFDCFBF5, 0xB3C00004, 0xFE01BFCF,
    0x597E607F, 0xF9580FD6, 0xFBFFDA03, 0x6F103D57, 0x8351504E, 0x0D1BC2E3, 0x8814C4A4,
    0x00001E39, 0x48F01A3A, 0x2ACE414C, 0x706788C0, 0xE8035A5C, 0xEABB7FF8, 0x00679E31,
    0xAC565F98, 0xC005ED1F, 0x19BFCFB3, 0x9EF10CF5, 0xE8001BF3, 0xEB33FE68, 0xAA8017F9,
    0xF678D695, 0x40178FF7, 0xC61DB347, 0x633C04C8, 0x32C4D306, 0x002F1D01, 0xC0DF3300,
    0xE04D3134, 0x43B60B17, 0xD9582665, 0x7F678D60, 0xDE20BC5F, 0x667FC09C, 0xF902FF3D,
    0x017FCFFE, 0xC8CCF630, 0x513801FE, 0x05AAFBFF, 0xF9A6F4A8, 0x206080D8, 0xE262C02D,
    0x5D2C8051, 0xE0178CBE, 0x89FFDF0D, 0x2BE4007F, 0x8800EEB2, 0x900111AF, 0x4F2E89FB,
    0x66E376B3, 0x586FD7FC, 0x2B063D8F, 0x7E13837D, 0xA36CD8F5, 0x85F89F90, 0x7A816587,
    0x03D324F1, 0xB15C01CC, 0x2F3C1AC0, 0xC615E94F, 0x7E693DAF, 0xDDCFA57C, 0xB4DDFD15,
    0x8ADEFC42, 0xDC97B5C8, 0x3FDF6275, 0xD79A44B0, 0xF3880D3F, 0x53C34F81, 0x85E3A133,
    0xE7E02B99, 0xF018CA83, 0x21FCA057, 0xC26480D2, 0x82004062, 0x64808B01, 0xCA01A441,
    0xA80F7F06, 0x1CFC078C, 0xB412B330, 0x999E781F, 0x38AF17E0, 0x79F7881F, 0x805FCAC0,
    0xC660BC5F, 0x05E2B00C, 0x4454137F, 0x63C1B481, 0x06026380, 0x80420108, 0xC134806B,
    0x415221B2, 0x07D701C9, 0xC6613151, 0x85E2F80C, 0xBC40BF95, 0xBBF003CF, 0xEF010801,
    0x76B9995B, 0xC737F358, 0x7772C7BF, 0x3FEFD447, 0x3D45F8C5, 0x9FD1BF12, 0x333EE06F,
    0xE3006B7E, 0x0000005E, 0x00000000, 0xEF7BDD60, 0xEF7BDEE6, 0xDEE60000, 0xBDECBF7B,
    0xC6311EF7, 0x8C630F18, 0x00000031, 0x00000000, 0xD001BDF4, 0x7CA4613F, 0xBC96B53F,
    0x6F7BDEF7, 0x137BE802, 0x80FBAC00, 0x1518829F, 0x0AD83650, 0x59180C54, 0x15B05CA0,
    0x45404678, 0x2A0DBF81, 0x940B320A, 0x3C0AFE0D, 0x60515099, 0x028A83FB, 0xFCFFDF18,
    0x7ECF04DF, 0xC2EE7232, 0x77FE79F8, 0x8E82F88F, 0x19D8D2FA, 0x9F834B2D, 0x4B00C4A5,
    0x1100F5D4, 0x3A400A46, 0x232C00CB, 0x00010004, 0xC00B0004, 0xE9012992, 0x61100F5E,
    0x89601894, 0x67E0D2CA, 0x634BEAD2, 0xD78CBC67, 0xC47BBFF3, 0x93F7303F, 0x800F7391,
    0x015605DF, 0x05F781B3, 0x7E0A9FF5, 0xFA85F639, 0x07BF00F6, 0x00000000, 0x00000000,
    0x00000000, 0x7E780000, 0x3DFFF3FF, 0x8CABEFC0, 0x5F07EFAC, 0x967B9F45, 0x5E8F197A,
    0x54CDBA21, 0x8A158272, 0xAC21805C, 0x021807FF, 0x400A1980, 0xFF004AB4, 0x6FC01788,
    0x7E2025F8, 0xF9007DE5, 0x6026F8AF, 0x03DF11DC, 0x7FCCFF18, 0x791FF201, 0xDC8DC007,
    0x93D2B009, 0xC6318C63, 0xEF6B2F48, 0xFBDEF7BD, 0xCC0000CB, 0x03BB39DF, 0x3115BF62,
    0x237C2DD6, 0x88F773DE, 0xCDF9542F, 0xAF11FE30, 0x9440F1A8, 0x006DF9E1, 0x406CA200,
    0x01631DCC, 0xFCF9BCE7, 0x0BD40881, 0x15FFB9C4, 0xEC8407EB, 0x85600556, 0xEC8F003F,
    0x64400BFF, 0x7FD8F101, 0x3C474139, 0xF94EE8F5, 0x2AFA6F4D, 0x1FFEFFD6, 0x55F7E16B,
    0x00DDCE44, 0xC001B9E4, 0x00F40009, 0x700058C0, 0x3C7A004D, 0xE2B1801F, 0x0BF1C007,
    0x0F3E6F00, 0x03F99A80, 0xE001D5E0, 0x5001E7CD, 0xFC007F33, 0xDEF7B9E5, 0x001FB9CD,
    0xEF7BDEF0, 0xEE7377BD, 0x00000007, 0xC0000000, 0xF7BDEF77, 0x00B17BDE, 0xEF7BBD20,
    0x3066F7BD, 0x8C6318C7, 0x700063C1, 0xEE3C003D, 0x1EFCE7DC, 0x111DFA18, 0xBC0C7DF5,
    0xE7A7FEE7, 0x19EC46B5, 0xA8E65DF2, 0xF874127D, 0x000F2800, 0xE0008843, 0x9A403E77,
    0xF94403C3, 0x9F8344FF, 0x3AB1E398, 0xC7E3DF8C, 0xBBB9D657, 0xFBF07DE2, 0x9EE7222A,
    0x673ED620, 0x8F76304F, 0xC46EF188, 0x9EEFC73F, 0x917E5E36, 0xCDAB12FF, 0x301BC788,
    0x0B259F23, 0x55D7F9C4, 0xF9E3A400, 0x989BF39D, 0xA22AFBE2, 0xEFC31FDE, 0x2CF7FE79,
    0x97E722F5, 0x441CDBA2, 0x437E1583, 0x69C8F006, 0x130C4201, 0x01CB7210, 0x06A56E3C,
    0xEABCB11D, 0x6F2F4437, 0xDF6A2FA8, 0x6785CCB3, 0x7E7C8CAF, 0xF7BDDF2F, 0xBDEF7BDE,
    0x7A0007F7, 0xDEF7BDEF, 0x31CE8A7B, 0xC46318C6, 0x13800EF2, 0x88D600B5, 0x335E2017,
    0x05E23A01, 0xC0066588, 0xCF802F0C, 0x0E950013, 0x0028BF80, 0xF4C80165, 0x0078B007,
    0xD200196C, 0x004A6002, 0x7D400B86, 0x06FFF3FF, 0x464F7F78, 0x4E617B3E, 0xD2EEFFCF,
    0x697D4FC5, 0xD22B86FC, 0x008F3F01, 0x3F01C300, 0xA6F51D0F, 0xF53446FC, 0xFF7FF31F,
    0x2A07FD4F, 0x7AF89CC0, 0x95FFB9F4, 0x7E3CF2DF, 0xCEB7642B, 0xD2B01EAB, 0x92801A6F,
    0xC02A6000, 0x80F1AF23, 0xE53FF867, 0xF3EB14EB, 0xFFACAF94, 0xE23EAD3D, 0x3E4655F7,
    0xBF3C0FDF, 0xF8077673, 0xEB188ABE, 0xE78F7C0E, 0xFC4FFF7F, 0x2FCC78D3, 0xEBC4F7E5,
    0x2AD05E27, 0x3D320287, 0x21C2024B, 0x051F2100, 0x1397F244, 0xBBCAAB34, 0x2D33BE42,
    0xFEE7D0DF, 0xBB107AE7, 0xEBF3E447, 0xFCFB5890, 0x0038F2BF, 0xFFCF1862, 0x33512C0F,
    0xA67E20B3, 0x6787DE51, 0xE65F3667, 0xE397EF77, 0x223DFE22, 0xEFA4EF46, 0x37BE804D,
    0xA0000001, 0xBE804DEF, 0xDEFA0037, 0x80000000, 0xFA0037BE, 0xEF948C27, 0x8002D6A7,
    0xF180077C, 0xD402E7FD, 0x2BE33F6F, 0x8D5FECF0, 0xFF303F6F, 0x7EDF18DF, 0x1CDFFD60,
    0xEAC07EDF, 0x00FDBF1C, 0xAFAC0120, 0x01DE7BC6, 0x65FF7E78, 0x200AFFEE, 0x7D957CFB,
    0xBF3C02BF, 0x15F9E3D3, 0xEFFFAC40, 0x7BDEEB59, 0xDEF7BDEF, 0x3000077B, 0xEF7BDEF7,
    0x7BDEF7BD, 0x8C6318C4, 0x6318C631, 0x80000000, 0xF7BDEF75, 0xBDEF7BDE, 0x7B980003,
    0xDEF7BDEF, 0xE63DEF7B, 0xDF44000A, 0xADAB000E, 0x3AC026FB, 0x01BFFE6D, 0xB3C74EB0,
    0x4EB0057F, 0x03F6FD67, 0xE39DFEB0, 0x00BC802B, 0x1AFFBF3C, 0x7D90AFCF, 0xBF7D1ABE,
    0x97FDF9E2, 0xAC0AF7B9, 0xDE7BC6AF, 0x7BDCC401, 0x3BF3C002, 0xC07BFFE7, 0xAC88ABEF,
    0xCCAF87EF, 0xF52FFDFF, 0x4DEB1E33, 0x27EAADD9, 0x65B0AC1A, 0xFFF45201, 0xE003A403,
    0x3D00988D, 0x977801BD, 0x753D00B5, 0x0BD2C603, 0x801727E0, 0x00E000A1, 0x000BBBF0,
    0x3FBFF000, 0x00000000, 0x7FEFAE40, 0x03DFD9CE, 0xBFDF8C00, 0xBE78C49F, 0xBB5800D3,
    0x39CEFD62, 0xAC4F7CE7, 0x1DBC027F, 0xF102BA7D, 0x9DCAFF7C, 0x5FF99AC0, 0xC66FE400,
    0x0EE3A305, 0xF7E7FFA2, 0x95BC7BA8, 0xA92FD70D, 0xEBEA32BB, 0xD44D7921, 0x45F187A8,
    0xAC7FEFFD, 0xF13E43CF, 0xA89C5C70, 0xA47FCA5F, 0x454FEB8B, 0x885E32B1, 0x8D2983C5,
    0x82567C28, 0x8F0840C3, 0x01FD233F, 0x04214C06, 0x3D700F0F, 0x22102430, 0xE7E17280,
    0x72002087, 0x87235078, 0x804527F4, 0x94D5E066, 0xF3098545, 0xE7CEC491, 0xD3164621,
    0xC37E88FB, 0xF8C7B9A8, 0x11E973E0, 0x4D6B39DF, 0xD9F37BF1, 0xEC5A8E60, 0xB7EBF54E,
    0x79F7EB22, 0xF46E49EE, 0xAFCFFD62, 0x7FFCEFC4, 0x64E9F9E5, 0x01BFD17C, 0xE8BEF880,
    0xDACFF509, 0x7C808D7B, 0x6FC4FBBE, 0x39DFE301, 0xCE7B9F7A, 0x758F7FFD, 0xEFFAC00B,
    0x6392467E, 0x0003A77D, 0x0016F77E, 0x000B8B20, 0x000A94F8, 0x098671E0, 0xCFD52A00,
    0x2AFE0007, 0xB000591E, 0x001C396C, 0xF3F2613C, 0x05470004, 0x9640130F, 0x007CB23F,
    0x2FE0B11E, 0x0153E00B, 0x48C01C2B, 0xDEF7BDCF, 0x0F802A13, 0x65813100, 0xBDEF7BDE,
    0x3C0FA6F7, 0xE47803E1, 0xC0072380, 0x0F2887C7, 0x30561C80, 0xC4F800F9, 0x002467E2,
    0x7BDC7C33, 0xFCF7BDEF, 0x22000B7F, 0xE609FFAB, 0xBEFF7BDE, 0x19C17919, 0xDE7A8C63,
    0xCC000F96, 0x030007F0, 0x07E91800, 0x33C73C40, 0xF7BDEFA0, 0x07D72F9E, 0xB9815400,
    0x6FBFDEF7, 0xCE0AF8C5, 0xD3D46318, 0x8005E337, 0xC000F968, 0x00600122, 0x80048A00,
    0x63383C57, 0xFD6A318C, 0xDEE61787, 0xA75FEF7B, 0x318800B9, 0xFEC80BF7, 0x2B7E739D,
    0xAAFFDE00, 0x13BEA888, 0xBEE69EC4, 0xBC65FFF7, 0xBF11BE0B, 0xBFCF9077, 0x5F9660F4,
    0xFCD0BE01, 0x6620078C, 0x00FD230D, 0x287B5FE8, 0x0090E000, 0x00001040, 0x00410000,
    0x00127F00, 0x63001458, 0x03F0E677, 0xCF8B1BE0, 0xA9720078, 0x015F8734, 0x271A2271,
    0x908DF7E3, 0x903D0F73, 0xDCFB3CB7, 0x4DF19BFF, 0x1CDFBF90, 0x1F7D5911, 0xF7BDEFFC,
    0x0F7673DE, 0x6B188800, 0xBDED40BF, 0xCD3AFEF7, 0x6318E40F, 0x1FFD678C, 0xDF0002CF,
    0x2D0001F0, 0x6150001F, 0x028F0003, 0x0000D200, 0x01000042, 0x00043000, 0x30002530,
    0xE1E0003C, 0x595E000F, 0x3F0DF000, 0xA8C631C8, 0x678FFFA7, 0xF7BDED42, 0x7D695BEF,
    0xFAD64400, 0xEF7BEC37, 0x7BDEF7BD, 0x0001BDEF, 0x7BDEF6A0, 0xDEF7BDEF, 0xC6318C41,
    0x318C6318, 0x00000000, 0x00000000, 0xDEE78000, 0xF7BDEF7B, 0x800007DE, 0xBDEF7BDA,
    0x10BBDEF7, 0xC6318C63, 0x00046318, 0x00000000, 0xC6200000, 0x318C6318, 0xED4918C6,
    0x7BDEF7BD, 0x003FBDEF, 0x7BDEEFC0, 0xDEF7BDEF, 0xC000077B, 0xBDEF7BD8, 0xB07BDEF7,
    0x8C6318C6, 0x0000C631, 0x00000000, 0x50000000, 0xEF7BDEF7, 0x80001BBD, 0x7BDEF7B1,
    0x8D617DEF, 0x6318C631, 0x0000000C, 0x00000000, 0x00000000, 0xF7E60000, 0x9BFFE73F,
    0xFBCEB001, 0x7BD64464, 0xE475F017, 0xFFF7BFFB, 0x7E86E88E, 0x724CFFAC, 0x8C1AC7EE,
    0x2F8069E5, 0x07E2BCBD, 0xCA7F57C0, 0x6FD6000A, 0x0001B0A9, 0x040004C9, 0x00B80009,
    0x7BDEF7FE, 0x024BADEF, 0x38130600, 0xA1FDEF7B, 0x18C606C2, 0x2B282C63, 0xF8AF0000,
    0xF2C60001, 0x82F900BC, 0x8D7FE69E, 0x2FF7CF10, 0x997EF0AB, 0xDF3DCFBD, 0xE78376A3,
    0x9111CDFF, 0x60DFFFD5, 0xB8C00FDF, 0x000000B7, 0x00000000, 0x00000000, 0x78000000,
    0xDEF7BDEE, 0x0006EF7B, 0xDEF7B500, 0x5FBDEF7B, 0x318C6310, 0x01E318C6, 0x00000000,
    0x00000000, 0x00000000, 0xC0000000, 0x000037BA, 0x00000000, 0x00000000, 0x009DEF20,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF9180000, 0xCA8007FB, 0xF0CCC984,
    0x32C311C1, 0xB1EFAADF, 0xBF7F34E8, 0xDFE268C7, 0x0EF46223, 0xCF005DEE, 0x4004FFBD,
    0x004DE4FD, 0x09BC8BEA, 0x6F22F8C0, 0x91FE3002, 0xFF180137, 0xE4009BC8, 0x0026F23F,
    0x026F2379, 0x04CD3790, 0xD4337FE0, 0xBCC9E002, 0xE4001DE5, 0x00E2378E, 0x95F21DC8,
    0x5817C02F, 0xE0003E65, 0x8000BF0D, 0x8001F16C, 0x80016A59, 0x0009BC37, 0x8000E2D9,
    0x77BB4659, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xC6338000, 0x318C6318, 0xF7BDEE60, 0x006F7BDE, 0x00F7BDC0, 0x89DEF790,
    0x003C0078, 0x280FC01B, 0x8247200B, 0xC780511D, 0xE03F9403, 0x055C07E7, 0x3C01C8E4,
    0x3E3C0391, 0x3F03F280, 0x40F5C00F, 0x4F00918E, 0x07E3C0E4, 0xE7E1F940, 0x622AE001,
    0x62A0048C, 0x8007E5A4, 0x1EFE3C78, 0x45FBF800, 0x6580048D, 0x20007EBC, 0x0000F4CA,
    0x0012317F, 0xCE00FC58, 0xDE4007FD, 0x0003645B, 0x5E000166, 0x03643000, 0x06B1EFC0,
    0x05C2FC00, 0x01636880, 0x026F2CC0, 0x00711BC0, 0x01635F20, 0x04DE1AC0, 0x02F11380,
    0x01354E40, 0x009E87A0, 0xC0034570, 0x78000698, 0x02F00013, 0xC801EA00, 0xF39FFBF5,
    0xBBD004EB, 0xFD6A232B, 0x456FC05F, 0x5F9EE77D, 0xABE03B99, 0x884F7F78, 0x87C6BDFA,
    0x3013D1E7, 0x8D79355F, 0x3F0E6009, 0xF8007C39, 0x000F1564, 0x0030E316, 0x021FE110,
    0x00310C00, 0x00021800, 0x0049710C, 0x0517F844, 0xF0E46280, 0xF2C8E001, 0x2CC00B1A,
    0x4F479E3F, 0xC4C6D3C0, 0x13DFDE57, 0xC62FBEA2, 0xD456FC1F, 0x3DF9EE77, 0x6FA00EE6,
    0xFF544457, 0x7BDFF85F, 0xFCF7BDEF, 0x9100137F, 0xB503FEF5, 0x7F7BDEF7, 0xC723FC8F,
    0xE78C6318, 0x8003C69B, 0x31001B0E, 0x00040024, 0x2B001290, 0x5BA3006C, 0xEF7BCC3E,
    0x712F77BD, 0x0EF39000, 0xEF7BDED4, 0x01BFF9FF, 0x2318C639, 0x00000003, 0x00000000,
    0x00000000, 0x39F7B200, 0x4002B7E7, 0x2235FF7C, 0x402EFAA2, 0x3BF3C7EC, 0xE88DFFF7,
    0xF8CFF01F, 0xD9F2157D, 0x86B07D4B, 0x3CBD00AF, 0x0053D785, 0x1C2A5D3A, 0x6D2A3C00,
    0x659B000A, 0xF8780048, 0x8200025B, 0x58400000, 0x6B820002, 0xD2480048, 0x945000A6,
    0x15F8070A, 0x9EBC153E, 0x7DFA9E07, 0xE1AC5D3A, 0x9E3A7857, 0xFE0B32FF, 0x855F7E23,
    0x20D14AF9, 0xCEFCF4F6, 0x6E222D3D, 0x6BFF7827, 0xBDF56444, 0x6403AC4F, 0xBFFE73EF,
    0xE7EDF115, 0xDEF7BFF3, 0xFF3DEF7B, 0x220002DF, 0x9E01FFAB, 0xF7BDEF7B, 0x007E47EE,
    0x1A8F7C60, 0x03CBC000, 0x00072400, 0xD0000E48, 0x7EA20014, 0xF73C2565, 0xF9EF7BDE,
    0xA000D595, 0x73C0DFFA, 0x61BFBDEF, 0xDA80048E, 0x0002BF23, 0x0097C44E, 0x00BC5B20,
    0x01352CC0, 0x000E9780, 0x00344B90, 0x000E69D0, 0x7E60B9A0, 0x5BF673FF, 0x4FBFF8C0,
    0xFBF98C46, 0xB19FF205, 0x4B7BFDBE, 0xEC45F87D, 0xDFCD467E, 0x26659352, 0x709FC3D0,
    0xE9162A01, 0xF367D007, 0x0019FF19, 0xE7BE47AC, 0xF8013EFF, 0x77E724DE, 0xFFCC03F6,
    0xFDF1855E, 0xF77FA300, 0x00FD4337, 0x1A96F7A8, 0xE200FFFD, 0x400B250B, 0x098B770C,
    0xA95FE910, 0x1E27C01F, 0xABDBE237, 0xFCA7D3C6, 0xFA30FFC8, 0xF115BFB7, 0x9BFB183D,
    0xEFAB2323, 0xBDEF73C3, 0xEF7BDEF7, 0x001EF7BD, 0xEF7BDA80, 0xDEF679BD, 0x8C63FF7B,
    0xC720C631, 0x000C6318, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xFF800000, 0x7B8C00FD, 0x0000000B, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00200000, 0x8004B0B0, 0xC007A560, 0x0145B19F, 0xBC27863C,
    0xF8FA7409, 0xA33EFDC9, 0xF26A5ED6, 0xDBF311BC, 0x07EA1EBF, 0xC46576F3, 0xBE1FBF98,
    0xDCE0007B, 0xC00988F7, 0x7F4ABE13, 0x3C31AE00, 0xFCA2002A, 0x2B0058F8, 0x03F8724C,
    0x4F813DFC, 0xC0E51005, 0xA298130A, 0xF80FCA20, 0x1231C099, 0x2A03F0C6, 0x0633F03D,
    0xC783F1E0, 0x4919F007, 0x1C802C65, 0x002AFE1E, 0x03963E7C, 0x8ACC8AC0, 0x3CA2002C,
    0x1C000F7F, 0x8003E5BF, 0x0095118A, 0xF407F260, 0x7BFF00BD, 0x6BDD6017, 0x1B264053,
    0x030A95B0, 0x3C01E928, 0x6C0D8F36, 0x1181445F, 0x4A01ED8A, 0x311E0D95, 0x22309128,
    0x7B6056C6, 0x5282C230, 0xFE5808CA, 0x6DB0D8F0, 0x0A990A99, 0x451E07B6, 0xA13258D9,
    0xB264540C, 0x4605B615, 0xC942B628, 0xC78171E4, 0x50C46CA0, 0xDB602862, 0xDB282862,
    0x8F280323, 0x65B60232, 0xC888C02B, 0x322A07ED, 0x59403F86, 0xF3C780A5, 0x676D8028,
    0x313B600C, 0x01E59400, 0x32005294, 0x22301FC2, 0x0A2800FC, 0xDE00C4A0, 0xFB001F7B,
    0x2FD379FE, 0x8388EF01, 0x33C0BC57, 0xD4B503BD, 0x05A9FC82, 0x4E07787A, 0x11B807C4,
    0x05F87787, 0x6BB2BC60, 0x35800F9A, 0x0178CFAC, 0x01C44270, 0x02549C80, 0x019E4C40,
    0x07045F00, 0x4BBCAB00, 0x6BC600BE, 0x00B34EAC, 0x84E1C44E, 0x7537802F, 0x03F15E32,
    0x584CF4CF, 0x9F8899E5, 0xE86F01FC, 0x80270BE4, 0x2AD789FC, 0x8F3C006B, 0x0BBDEF5A,
    0x7AEF7580, 0xF1001BD3, 0x1F8B4B1A, 0xF0E22FC0, 0xF5006794, 0x5C378998, 0x7C868DA0,
    0xB86B098D, 0x883A1AC0, 0x2B801CD7, 0x05F23A5E, 0x31CCD318, 0x447400BD, 0x8800A7B7,
    0x07E2A79F, 0x0BF14F00, 0x0029B000, 0x00000000, 0x00000000, 0x00000000, 0xE0000000,
    0x7BDEF7B9, 0xDEF7BDEF, 0xD40000BB, 0xBDEF7BDE, 0x10C9DEF7, 0xC6318C63, 0x5D4BE318,
    0x16A9CC00, 0x07E5A300, 0x13889C40, 0x0F52FC00, 0x99E3D600, 0x3E368C00, 0x0388E200,
    0x12FD2F80, 0x03E65580, 0x02F1B540, 0x03F89F10, 0x005F0BE0, 0x800BA5D0, 0x318D465A,
    0x8C6318C6, 0xF7B19231, 0xBDEF7BDE, 0x0000BEF7, 0x17BDEF79, 0x005EFB00, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0xC02F7D80, 0x8145403E, 0x0A2A0FED, 0x5FC13278,
    0x6641B281, 0xFE051501, 0xE028A836, 0x02B60119, 0x059182E5, 0x15B00C54, 0xA8C41B28,
    0xEEB53F00, 0xAC07F7BD, 0x0000277B, 0x00000000, 0x00000000, 0x00000000, 0x09DEEB00,
    0x005DF600, 0x5E00F863, 0x4F100F91, 0xD6BC03B4, 0x7D304A8C, 0x313C1FA6, 0xD782CF86,
    0x8C58AC8F, 0xE3EFE261, 0x646604F3, 0x72C172C5, 0xDEF7BDE7, 0xF7BDEF7B, 0x9F2B7BDE,
    0xE79E79E7, 0x79E79E79, 0xF359E79E, 0x263E66DE, 0x1B898CBE, 0xFFBF303F, 0x6203BB39,
    0x8C464FBF, 0xC8DF1375, 0x12FFDCEF, 0x279CA32F, 0x1CC54F64, 0x784D8063, 0x802606F6,
    0xC03DF318, 0xBF673BF3, 0x57F62133, 0x3EFACF91, 0xFDEF11E8, 0x2C04FD7F, 0x0001826B,
    0xE63C32F9, 0xC077390C, 0xFF73DE1B, 0xB94C2FAF, 0x9F544667, 0xF71FF1E7, 0x00000026,
    0x00000000, 0xF39DFA80, 0x57EF807B, 0xC0FDF511, 0x4B3DDFCA, 0x44BB90BD, 0x05F899B7,
    0x0160F0AC, 0xA4011365, 0x0015C005, 0x3004415C, 0xD8F0144C, 0x2C474178, 0xEF10DF8C,
    0xED7441D2, 0x6135A67B, 0xFCF1157D, 0x3FF7D41A, 0xF7806FFF, 0xB3E464F7, 0xFF5A7A27,
    0x90EF2FFB, 0xDFCA7753, 0x16227AF0, 0x80AD92F8, 0x092CFFF9, 0x7000B840, 0xC8129801,
    0x02862FFF, 0xC4F89F2A, 0xA7259F02, 0x46FC615E, 0xCFA3EF34, 0xE05F15DD, 0x39193DFB,
    0xDD40016F, 0x0000000B, 0x00000000, 0x06FF3EE6, 0xE4477EC4, 0x11BE01DA, 0x345FBDEF,
    0xCF26F954, 0x0A37F01D, 0xE0294172, 0x2601C30F, 0x080C0184, 0x01C30003, 0x05014A12,
    0x5E21319F, 0x50AF5318, 0x44FBC03B, 0x07CBFB9F, 0xA88ABEF8, 0xFDF501AF, 0xE02BFFCF,
    0xF9193DFD, 0x69E85EFC, 0x7369EFFD, 0x8A774B91, 0x27C37AF5, 0x53199817, 0x2FE58059,
    0x7BDEF73D, 0x014C7DEF, 0xDEFA1080, 0xF7BDEF7B, 0x003FA5FE, 0x4F80051E, 0xFFFE20BC,
    0x4BF34C65, 0x0F1CFF51, 0xDFF9E3EF, 0x25F11BF3, 0x9193DFBE, 0xFC60B7D5, 0xF917F9CE,
    0x7C9C88AF, 0x249EFB11, 0x8080433C, 0x7B9E9DDF, 0x3BBF0027, 0x004EF73D, 0x00000000,
    0x00000000, 0x00000000, 0xCE77F300, 0xF03B9CAF, 0x7EA22B7B, 0xEF157C0B, 0xC0ECBFB9,
    0xA866FC78, 0x07A9F01B, 0x81B285F2, 0x40C09482, 0x01040010, 0x42409080, 0x4703C0D9,
    0x5507C415, 0x9FEA19BE, 0xF788DF04, 0x2098DFDC, 0x67888F76, 0x5BFD0C7F, 0x8DF39F6B,
    0x17ADC225, 0xE2278AB8, 0xC55F1837, 0xBED4764B, 0x1BF13F77, 0xC4667B98, 0xDC61FB58,
    0x0000009B, 0x00000000, 0x3FF7C600, 0xEDF00EFF, 0x0ED72327, 0x4F77E358, 0x2EE41FCB,
    0x0F8296B1, 0x3028116C, 0x00000819, 0x00000000, 0x00000000, 0x00000000, 0x1804DEE3,
    0x7B8C26F7, 0x00000013, 0x00000000, 0x0004DEE3, 0x004DEE30, 0x0009BDC6, 0x00000000,
    0x00000000, 0x30000000, 0xC91C08B0, 0x644F8FB9, 0xDEE32F64, 0x00000004, 0x00000000,
    0x0FBDDF00, 0x07DE3F40, 0x027796B0, 0x7809EB66, 0xF500BD5E, 0x37802CF3, 0x22780054,
    0xD7CF007E, 0x39B4029E, 0xD95C00BC, 0x06B4C600, 0x40170E80, 0xCC0131B4, 0x1BDC63A1,
    0x00000000, 0x00000000, 0xDFEE3000, 0x4F67FEF8, 0xDFE7FFA2, 0x6327EE60, 0x657B9DBC,
    0xBC61FAE4, 0x987FEFB5, 0xA59EEFD7, 0x437F221E, 0x896E315E, 0x8C1F1B4E, 0x40CB0950,
    0x860FE181, 0x00000040, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x8C000000,
    0xFFBE37FB, 0xB98077F9, 0x3B5C8C9F, 0xEFB1DE30, 0x8C43F969, 0x0A9AC43D, 0x8117F03E,
    0x02062C07, 0x00000000, 0x00000000, 0x00000000, 0xF7D40000, 0x00AFFF3F, 0xC8C9EFDF,
    0xEF82F7E7, 0x3FF7FEB1, 0xDE3D46CD, 0x6B2EF94E, 0x3A098C70, 0xA01F947D, 0x1C04843C,
    0x21080029, 0xF8410800, 0x14A48E03, 0xC6387960, 0xEA3E1D04, 0x77CA76F1, 0x595F0399,
    0xE69FFBFF, 0x93DF7E0B, 0x18BF7391, 0x39DFA8F7, 0xBF9807BF, 0x03EFA88A, 0x967BBF9D,
    0x897611A7, 0x06F1336E, 0x0F0788AC, 0xC0913650, 0x008002DF, 0x80220AE0, 0xD9405134,
    0x2C474178, 0x2F443D8C, 0xBEC6781D, 0xFA135967, 0x6ECF9157, 0xFFE77EA0, 0x0000000D,
    0x00000000, 0x7FF9DFCC, 0x7E20DEE9, 0xFB3E456F, 0x7BC55F01, 0x5507E7EE, 0x7F3C337E,
    0x181E37F0, 0x7F014A0B, 0x21300E18, 0x00040600, 0x28480748, 0xC9F0500F, 0x2E42F109,
    0x03B50AEF, 0xFEE7D4F4, 0xAFDE01F2, 0xC01F6A22, 0x37E73BF3, 0x00000000, 0x60000000,
    0xFCF7BFDC, 0x2337C0BF, 0xEFA7C82B, 0xC4B3C3F9, 0x01300B80, 0x00006002, 0x00000000,
    0x9E000000, 0xDFFF39DF, 0x1157DF04, 0xF3C6EF59, 0x69EE7BC4, 0x0CD6B9A3, 0x210656B1,
    0xB65FFF41, 0xAC00CDFA, 0x3DD9EF52, 0x8C1DEFC0, 0x73097FB5, 0x7509F79F, 0x59DF9881,
    0x05FEFCB2, 0x82F3349A, 0x2FA9FA41, 0xCCA31D45, 0xF3DFF9E9, 0xBF783CCB, 0xFF462327,
    0xF7816A13, 0x00024177, 0xBACB7580, 0x65BAC007, 0x000003DD, 0x00000000, 0x50800000,
    0x1738DB01, 0x718C33B3, 0x37BA806F, 0x00000000, 0x00000000, 0x00000000, 0x30040000,
    0x40F246C0, 0x2779442C, 0xF11D06CF, 0x0F8DFBDE, 0x39195DC6, 0x03DD616F, 0xA298F798,
    0xCA25BF80, 0xFCFE5101, 0x58A25815, 0x137F0511, 0xF288FE51, 0xC9616B83, 0xF1444F01,
    0x5FCB01F7, 0x5BF80794, 0x65409196, 0xC01FBF8C, 0x804C7BE3, 0x0015159F, 0x003F8463,
    0xEFC0B13F, 0x0DEFA0BE, 0x2B637BC8, 0x46503C50, 0x6C184C94, 0x0B48CAD8, 0x3F280C25,
    0x3D36C6CA, 0xAD831118, 0x83117C30, 0x3C192852, 0xBB628F99, 0x962A5288, 0x60A3CFED,
    0x94AD86DB, 0x94A02311, 0xFC888CAD, 0x399181F9, 0xCF1E489E, 0x51D280A3, 0x01CCBED8,
    0xA4A3656C, 0x8C1E1402, 0xC4A20360, 0xC40F1280, 0x7B8C1BB9, 0xE0B1B45B, 0x6F2CCD1A,
    0x3785C3D0, 0x3D2C67E2, 0x5D4F5F20, 0x7CAB0163, 0x1BC00E23, 0x1C804DE1, 0x7E4E8024,
    0xCAD31801, 0x8C6E01F8, 0xD603CF6E, 0x03A53D70, 0x37839AF9, 0x3646F1B2, 0x95659A72,
    0x7AF4E80E, 0xEEA04DEE, 0xC03C2789, 0x03F2855F, 0x1231CB96, 0xC2A1E22A, 0x960B7F03,
    0x7C1F2C1F, 0x03915246, 0xFBF87A46, 0x658FC780, 0x15119F02, 0xB50E4015, 0x5B9F801D,
    0x354C00F1, 0xF0A88016, 0x0B2FE007, 0xE000F080, 0xD54601F3, 0xF50127CE, 0x01F88DFB,
    0x01DA8C8C, 0xF7BDEE70, 0x5DEF7BDE, 0x73841100, 0xDEF7BDEF, 0x97C026A1, 0x15BC01F9,
    0xEA730027, 0x99ED1801, 0x3E313880, 0x00E32F80, 0xE025F974, 0x1803D659, 0x3880D53F,
    0x4AC01F91, 0xEF7B9F63, 0x441FF7BD, 0x3DE20006, 0x0CFF81F7, 0xEEFC4630, 0x2053C783,
    0xC0000004, 0x40108035, 0x8E6F10D9, 0xF9F338C2, 0xF8C04603, 0xF903F33F, 0x528033C5,
    0x35C03A40, 0x00000000, 0x594C09A4, 0xEEFC5460, 0xAC99BF03, 0x000000DB, 0x00000000,
    0x3DCF0000, 0xFF31006F, 0x8C5FDCF0, 0x00F1EA01, 0x00000021, 0xE00A40B8, 0xF2A780AF,
    0xCF3DF00B, 0xBF001019, 0x8C0FF9E7, 0x2CA12FCA, 0xB86048E0, 0x00000000, 0x2C3504A6,
    0x12A7F73C, 0xFD40FCE4, 0x601EF9CE, 0x3C455FCE, 0xFA867FDF, 0xF77F2FDF, 0xB9EF99DF,
    0x5C94E4BF, 0xC622B7FF, 0xFE601EEA, 0xFB1DD9CE, 0xFF7D81FE, 0x86215BA8, 0x613AE211,
    0x12D6110C, 0x00010C61, 0x2800D7C0, 0x006C5400, 0xCF001476, 0x73EF4403, 0xAEE78072,
    0x187D6111, 0x15BED45F, 0xBF1AE69E, 0x94CB99E1, 0x7EC54BC3, 0x61E2C9E3, 0x65F9C547,
    0xAE053C48, 0x2B837320, 0xE4A40B28, 0x67BD823F, 0xC6229E51, 0xC4FD28C8, 0x6F2C9F8F,
    0x788C5F8C, 0x117E4D1F, 0x0FD4CF71, 0x9E232FEA, 0xE7B940BD, 0x99D8037C, 0x001EA200,
    0x31800FCA, 0xEF440006, 0xA00AF673, 0xA3111AEE, 0xC5F180F7, 0x46F3DDF8, 0xFE23781E,
    0x4E5FE625, 0x6A301594, 0x7E01C204, 0x001C217B, 0xB0003C78, 0x6F30008D, 0x0FBDEE73,
    0x7BCC0000, 0x1F7BDD4B, 0x6000B480, 0x5CB00098, 0x078E5400, 0x00E37880, 0xF71CFF90,
    0xAACF5F9C, 0x2990D57E, 0xDFBFBD6A, 0xFFE8E65A, 0x46B7F73D, 0x02F8BD44, 0xF3EF1F90,
    0xECFFEF1F, 0x3769F71E, 0x63199EC6, 0xF9BF8CED, 0x4BFB7C63, 0xF6AB87BE, 0xDA7F9E33,
    0x43DA0D28, 0x41A60184, 0xC0CB0484, 0x3855C1A3, 0x5F8D2F9E, 0x78FCF3F9, 0x6F1777FE,
    0x115F91D9, 0xBDB917CF, 0xF77E7ECF, 0x4FD9EF9C, 0x900DDDFB, 0x78DA7EE7, 0x3688BF00,
    0x34E40D1E, 0xFC139693, 0x7E9C8BC4, 0xD01BD390, 0x162D0B91, 0x1F25E988, 0x9623780D,
    0xAF101396, 0xC01A3C77, 0x03C638CA, 0x537BDEF2, 0x1BDEF71A, 0xDEF20000, 0xDE63EF7B,
    0x000DEF7B, 0xBDEF7900, 0xBDEF31F7, 0x800006F7, 0xFBDEF7BC, 0x7BDEF798, 0x00000003,
    0xDD600000, 0xC0000006, 0xEB000DBA, 0x00000036, 0xF9CEFCF0, 0xABFA09BF, 0x607B9C88,
    0x9DDCF32C, 0xDE33F071, 0x087C8E30, 0xC18E460B, 0xF7FC0F56, 0x035F29E4, 0x00F6B3F8,
    0x632D6F7E, 0xCF5581BF, 0xEF30F7AF, 0xD8CBCFC3, 0x612DF11D, 0x8F43DAC2, 0x4FF901D2,
    0x82EE475F, 0x23FC6478, 0x0C225F7F, 0x2F6796E3, 0xF8978CCF, 0xFFFD117D, 0x773C076A,
    0xC409B8CA, 0x12F88BFB, 0x8FC476A0, 0x4E427FDF, 0x903F2B0F, 0xA5F1AF16, 0x679FC7E8,
    0x2CF7FE79, 0x4F7FA273, 0xCBDF3E46, 0xBDD4B7B8, 0xA0000003, 0xFB39FFDE, 0xFFEA002D,
    0xFD65515B, 0x9FE805FE, 0xDBEFECF7, 0x41AFC7B7, 0xC413DAAF, 0xB51AB5BA, 0xDF9E17EA,
    0x5F897B39, 0xE3E3A2AD, 0x577CE6FD, 0x3568BE6F, 0xE7CCF0DE, 0x45F7EBDF, 0xBF8C7789,
    0x783F1BC9, 0x7BF4C5FE, 0x009E3046, 0x49315910, 0x00198009, 0x61931000, 0x33C66000,
    0xFE028C42, 0x6FE7C88B, 0x5F07C6F2, 0xC6BFD326, 0xECF99E1B, 0x7CCFFF7E, 0xC74A3BC4,
    0xB9ADFBC7, 0x45F2F7E6, 0xE17EAB53, 0x7BF39DF9, 0xA156AFC4, 0xCC09ED57, 0x7F41AB5B,
    0xBEFBF3DE, 0xAFC779DF, 0xABFFCF01, 0xEFD73559, 0xE7DCC05F, 0x637E85EC, 0x8C45ECAE,
    0x8FDBBF7F, 0x91232377, 0xA07FBFB3, 0x859CEFFF, 0xFB3EC6B1, 0x8D0732C5, 0xBBDF9E27,
    0x7AFF1057, 0x062BDCD6, 0xEEA5F73C, 0xCD17E20F, 0xDE2F85EB, 0xAC4CE6F0, 0xD199E5CA,
    0x3F16AF18, 0x8F51B81D, 0x00098C5F, 0x5F9546E0, 0xF5E3098C, 0x580E9F8A, 0xA333CB95,
    0x786F17C1, 0x2FC42673, 0xDD6BD79A, 0xF7BDEF7B, 0x00EF7BDE, 0x7BDEE600, 0xDEF7BDEF,
    0xC6318C41, 0x018C6318, 0x00000000, 0x00000000, 0xDEF23B9C, 0x09BDEF7B, 0x7FF7A800,
    0x800B7ECE, 0x5456FFFA, 0x017FBF59, 0xFB3DE7FA, 0xF1EDF6FB, 0xF6ABD06B, 0xAD6EB104,
    0x05FAAD46, 0x156AFC40, 0xDEE79F1D, 0xF85ECF7B, 0x0378D5A2, 0xBD5F7DF3, 0xBF8C7788,
    0xB5CE7B09, 0x9EFD30FD, 0x1E988011, 0xF04C5644, 0xE7DE7BDD, 0xA7801985, 0x100FBE2B,
    0x7BF5DC13, 0x3C66097E, 0xBC6F0023, 0x4DFCF910, 0x4C2ACE40, 0x006F1AFF, 0x47789A7E,
    0xF900F8E9, 0x4D17C78C, 0x7DD5FAAD, 0xABF5BBE0, 0x7B55E855, 0x6AD6F302, 0xFCF79FD0,
    0xDE77EFBE, 0xF3C06BF1, 0xCD566AFF, 0xCC17FBF5, 0xF7BDEF7B, 0xBDEF7BDE, 0xCF3E56F7,
    0xF3CF3CF3, 0x3CF3CF3C, 0xFF58B3CF, 0xEBB78BB3, 0xF9CABF5D, 0x3D57EBBE, 0x0F4E7615,
    0x77ECE676, 0x5DBDAAFD, 0xF815FAEF, 0x000002EE, 0x00000000, 0xF7BDEE70, 0xFBDEF7D1,
    0xBDFF0003, 0xEF732EF7, 0xC631DFBD, 0x318CE118, 0x00000246, 0xC0000000, 0x778C6318,
    0xE46318D7, 0xF7BDEF7F, 0xFDEF7BDE, 0x7FFA0002, 0x5BF06FCE, 0x8FF53E73, 0x5FEBF59C,
    0x0FFFCAC5, 0xB27AC121, 0xC8BCEBE0, 0x64ECF3FF, 0x882FECEC, 0xF7DE7913, 0xCE7299AD,
    0xFFEF3739, 0x37E0DFFC, 0x27E73BD7, 0x53EB7D56, 0x0A98FF62, 0x60FD76F2, 0x41F9EBBC,
    0x9F355ECC, 0xCCA48BFF, 0x15CAEF5F, 0x7319CE77, 0xC9DEEB07, 0xE46699EB, 0xFF09CF8F,
    0x9DFF813B, 0x00000000, 0x00000000, 0x00000400, 0x30102E03, 0xF84A8240, 0x3BE4B701,
    0xFDDFC8C1, 0x7EF82CCF, 0x01D9F223, 0x17FF9F6A, 0x00009DDF, 0x00000000, 0xEF73EF64,
    0xDBDEF7BD, 0x0046BD9E, 0xDF405FC8, 0x7FB73CBB, 0x000A0001, 0x00C00018, 0xF0001600,
    0x05E30002, 0x267FE600, 0x9FFBE400, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x06EFB000, 0xC5426F78, 0xFDF3DF82, 0xBE795B30, 0x7AC95FDF,
    0x7BC1FAC6, 0xF326FC4B, 0x5DAC493E, 0x000137AC, 0x7E300000, 0xFA897CE7, 0x27678E57,
    0xBFF6FC6F, 0x8AB235E3, 0x301A6595, 0x12980125, 0xC5591CA6, 0xF6FDA2CA, 0xD9E5E3BF,
    0xC9D9E395, 0x2DDF833E, 0xE37971D0, 0xB467A80D, 0x1D03F99C, 0x1E78E86B, 0x7ED0E9C8,
    0x9AF99D01, 0x00003E23, 0x239AF99D, 0x6874E43E, 0x1AC740BF, 0xF5079E3A, 0x7F33968C,
    0x78E971D0, 0x016F7803, 0xFC436EB0, 0x57460026, 0x0127DE63, 0x5885E270, 0xF2F800BB,
    0x04DEB097, 0x01F33E60, 0x5E3D9000, 0x0B8E0000, 0x7A3BC000, 0x59A80000, 0x7C400013,
    0x7BC001F9, 0x01BC5F0B, 0x5800FCE3, 0x04E20AB5, 0x0D1DE300, 0x71C004BE, 0x80135BC0,
    0xCF097F2F, 0xE6007E7C, 0xBF181F33, 0xE76400FC, 0xC0038E0B, 0xD8C8C071, 0xA06EAFF7,
    0xBE403BC7, 0xF1B6FBEF, 0x016AB506, 0x8F9CE731, 0x05BDE135, 0xE2033EC0, 0xE3D00137,
    0x49F7981D, 0x82D56A00, 0xC400BB58, 0x6F581F1B, 0x17E5F002, 0xCD560000, 0xDE300002,
    0x700002F1, 0xDE00001C, 0xF00004EC, 0xC00267CC, 0xE5FC8B7B, 0xF9CEFD47, 0x1C4E002F,
    0x35ACF7EA, 0xF47A01BA, 0xF7BF1FE0, 0xB5007BFD, 0x0F3DE16A, 0x7C6F1004, 0xC0BD7100,
    0xD400BF97, 0xB301EB1E, 0xBF5803E6, 0x3D1835F1, 0x63DBC05E, 0x0075C03F, 0x775F9A6B,
    0x809D1DE3, 0xB5AD6797, 0xFFCFFEF0, 0x86DD6005, 0xCC6F5CDF, 0x3574600F, 0xFEB7D562,
    0x0BC4E00A, 0x030C7FB1, 0x012FE5F0, 0x98178DD6, 0xC6007CCF, 0x8F64099B, 0xC738C017,
    0x0171C06F, 0xA625FFCF, 0x007A3BC2, 0xEFF5FCCA, 0x359A8789, 0x39CEE201, 0x7C53B3E7,
    0xEF9001F9, 0xE4BFFCFF, 0xDC60378B, 0xAD56001F, 0xC003F882, 0x7F834778, 0xC071C000,
    0xBE00263B, 0xF9CC25FC, 0xCF9800FC, 0x7E74607C, 0x0BE76400, 0xE380038E, 0xEFB19180,
    0x1E80DD5F, 0xBEF900EF, 0x1BC6DBEF, 0x880B55A8, 0xAC7CE739, 0x02FBDC09, 0xC0000000,
    0x00002FBD, 0x4005DF60, 0x3D230008, 0x00D47100, 0x00FCCEE4, 0x01D8E763, 0x076A3FC4,
    0x00FC63A0, 0xA7B00A3C, 0x778D4010, 0x52E09596, 0xC33D88BF, 0xF99995F8, 0xEEE7BC45,
    0xEDD4BCF2, 0xF7CF9111, 0x2DEEF801, 0x5D2F8000, 0x2A270000, 0xFB460001, 0xF7980001,
    0x00000005, 0x05BDDF80, 0x02E2C800, 0x02A53E00, 0x619C7800, 0xF54A8002, 0xBF8001F3,
    0x0016478A, 0x070E5B2C, 0xFC984F00, 0x51C0013C, 0x9004C3C1, 0x1F2C8FE5, 0xF82C4780,
    0x54F802CB, 0x30070AC0, 0xBDEF73D2, 0xE00A84F7, 0x604C4003, 0x7BDEF799, 0x03E9BDEF,
    0x1E00F84F, 0x01C8E039, 0xCA21F1F0, 0x15872003, 0x3E003E4C, 0x0919F8B1, 0x001F0CC0,
    0x000BEF75, 0x00178D70, 0x002E2A30, 0x0007A7C0, 0x00277BC0, 0xF8000000, 0x80005BDD,
    0xE0002E2C, 0x80002A53, 0x002619C7, 0x1F3F54A8, 0x78ABF800, 0xB2C00164, 0xF00070E5,
    0x13CFC984, 0x3C151C00, 0xFE59004C, 0x7801F2C8, 0x2CBF82C4, 0xAC054F80, 0x3D230070,
    0x4F7BDEF7, 0x003E00A8, 0x799604C4, 0xDEF7BDEF, 0x84F03E9B, 0x0391E00F, 0x1F001C8E,
    0x003CA21F, 0xE4C15872, 0x8B13E003, 0xCC00919F, 0xDFF801F0, 0x2F80005B, 0xE0001BD3,
    0xF93EE279, 0xCCFE4001, 0x002D45FC, 0xCE2DB9E4, 0x0000005D, 0x2DEEFC00, 0x17164000,
    0x1529F000, 0x0CE3C000, 0xAA540013, 0xFC000F9F, 0x00B23C55, 0x3872D960, 0xE4C27800,
    0x8E0009E7, 0x80261E0A, 0xF9647F2C, 0xC1623C00, 0xA7C0165F, 0x80385602, 0xEF7B9E91,
    0x005427BD, 0x0262001F, 0xDEF7BCCB, 0x1F4DEF7B, 0xF007C278, 0x0E4701C8, 0x510F8F80,
    0xAC39001E, 0xF001F260, 0x48CFC589, 0x00F86600, 0x877FF7E3, 0xF8800A79, 0xFFF7313F,
    0xC4F000F5, 0xE473FFBB, 0xBBA8002F, 0x0FFE7BE4, 0x00000000, 0x000B7BBF, 0x0005C590,
    0x00054A7C, 0x04C338F0, 0xE7EA9500, 0x157F0003, 0x58002C8F, 0x000E1CB6, 0x79F9309E,
    0x82A38002, 0xCB200987, 0x003E591F, 0x97F0588F, 0x80A9F005, 0xA4600E15, 0xEF7BDEE7,
    0x07C01509, 0x32C09880, 0xDEF7BDEF, 0x9E07D37B, 0x723C01F0, 0xE00391C0, 0x079443E3,
    0x982B0E40, 0x627C007C, 0x801233F1, 0xBDC03E19, 0x00FBDC4B, 0x00000000, 0x4BBDC000,
    0x0000FBDC, 0xBBF00000, 0x590000B7, 0xA7C0005C, 0x8F000054, 0x50004C33, 0x003E7EA9,
    0xC8F157F0, 0xCB658002, 0x09E000E1, 0x00279F93, 0x98782A38, 0x91FCB200, 0x88F003E5,
    0x00597F05, 0xE1580A9F, 0xEE7A4600, 0x509EF7BD, 0x88007C01, 0xDEF32C09, 0x37BDEF7B,
    0x1F09E07D, 0x1C0723C0, 0x3E3E0039, 0xE4007944, 0x07C982B0, 0x3F1627C0, 0xE1980123,
    0x00000003, 0x0002767D, 0x003E9E66, 0x00557B80, 0x0151F600, 0xFEEA7800, 0xC480007E,
    0x4A7C0006, 0x38F00005, 0x950004C3, 0x0003E7EA, 0x2C8F157F, 0x1CB65800, 0x309E000E,
    0x800279F9, 0x098782A3, 0x591FCB20, 0x588F003E, 0xF00597F0, 0x0E1580A9, 0xDEE7A460,
    0x1509EF7B, 0x988007C0, 0xBDEF32C0, 0xD37BDEF7, 0x01F09E07, 0x91C0723C, 0x43E3E003,
    0x0E400794, 0x007C982B, 0x33F1627C, 0x3E198012, 0xDEF7FE00, 0xF7BDEF7B, 0x4DEF7BDE,
    0x00012780, 0x7F635E00, 0xDEF7BDAC, 0x809DEF7B, 0x9C51DE1A, 0x6318C631, 0xE570018C,
    0x46000003, 0x800000F9, 0x00002C57, 0x00098F90, 0x0BC4FC00, 0x59620000, 0xDEF7BC01,
    0x0BBDEF7B, 0x0007E1BC, 0x80954C00, 0x7BDEF7B5, 0x85613DEF, 0x7BDEF7BA, 0x318C6338,
    0x1F0118C6, 0x4CC00000, 0xEF7BDEEF, 0x7E0001FD, 0x8C631CC6, 0x78000A31, 0x00000BD2,
    0xE001F2BC, 0x18C6318C, 0xE1A88C63, 0x7BDAC003, 0xDEF7BDEF, 0x00058AF3, 0xDFEC8000,
    0x02B7E739, 0x8AAFFDE0, 0x413BEA88, 0x7BEE69EC, 0xBBC65FFF, 0x7BF11BE0, 0x4BFCF907,
    0x15F9660F, 0xCFCD0BE0, 0xD6620078, 0x800FD230, 0x0287B5FE, 0x00090E00, 0x00000104,
    0x00041000, 0x800127F0, 0x76300145, 0x003F0E67, 0x8CF8B1BE, 0x4A972007, 0x1015F873,
    0x3271A227, 0x3908DF7E, 0x7903D0F7, 0xFDCFB3CB, 0x04DF19BF, 0x11CDFBF9, 0x01F7D591,
    0xFDE3B7A8, 0x600056FF, 0xEC0001BB, 0x80026F35, 0x80058CEA, 0x88FFBEF8, 0xE558C002,
    0x73C001D9, 0x67800BEF, 0x7780015A, 0x138004C4, 0x39E4002F, 0xDF600000, 0xF7BDEF7B,
    0x0DEF7BDE, 0xF7B50000, 0xBDEF7BDE, 0x8C620EF7, 0x6318C631, 0x0000018C, 0x00000000,
    0x3C000000, 0xEF7BDEF7, 0x003EF7BD, 0x7BDED400, 0xDEF7BDEF, 0x8C631885, 0x2318C631,
    0x00000000, 0x00000000, 0x6318C631, 0x48C6318C, 0xF7BDEF6A, 0xFDEF7BDE, 0x38800001,
    0x19800FF7, 0x79F00071, 0xD64F0007, 0x7F73C002, 0xBEC00000, 0xEF7BDEF7, 0x1BDEF7BD,
    0xEF6A0000, 0x7BDEF7BD, 0x18C41DEF, 0xC6318C63, 0x00000318, 0x00000000, 0x78000000,
    0xDEF7BDEE, 0x007DEF7B, 0xF7BDA800, 0xBDEF7BDE, 0x18C6310B, 0x46318C63, 0x00000000,
    0x00000000, 0xC6318C62, 0x918C6318, 0xEF7BDED4, 0xFBDEF7BD, 0x79800003, 0x5B2006EF,
    0xA270068E, 0xB007AC6E, 0xFAF9BC46, 0x49EEB005, 0x00009EEB, 0xEF7BDF60, 0x7BDEF7BD,
    0x00000DEF, 0x7BDEF7B5, 0x0EF7BDEF, 0xC6318C62, 0x018C6318, 0x00000000, 0x00000000,
    0xDEF73C00, 0xF7BDEF7B, 0xD400003E, 0xBDEF7BDE, 0x1885DEF7, 0xC6318C63, 0x00002318,
    0x00000000, 0xC6310000, 0x318C6318, 0xEF6A48C6, 0x7BDEF7BD, 0x0001FDEF, 0xEB0DEF30,
    0x0000005E, 0x0DEF3000, 0x00005EEB, 0xBDEF7BEC, 0xEF7BDEF7, 0xA00001BD, 0xEF7BDEF6,
    0x41DEF7BD, 0x18C6318C, 0x00318C63, 0x00000000, 0x00000000, 0x7BDEE780, 0xDEF7BDEF,
    0xDA800007, 0xF7BDEF7B, 0x6310BBDE, 0x18C6318C, 0x00000463, 0x00000000, 0x18C62000,
    0xC6318C63, 0xBDED4918, 0xEF7BDEF7, 0x80003FBD, 0x22704F7D, 0xE267F25E, 0xDEF13199,
    0x0DEEB009, 0x00000000, 0x00000000, 0x00000000, 0x7BE80000, 0x58F9A61F, 0x1C5F2F91,
    0xB000CFFC, 0x00000DEE, 0x00000000, 0x00000000, 0x00000000, 0xC16F7FE0, 0x9E0BE99B,
    0x89F13CE9, 0x517E399F, 0xE2BEE71D, 0x758006DC, 0x0000006F, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x73800000, 0x004EF717, 0xF7177380, 0xBDD6004E, 0x00000001,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x7BDEF7FE, 0x07BB39EF, 0xAC622000,
    0xBDA802FD, 0xA75FDEF7, 0x18E401F9, 0xFD678C63, 0x0002CF1F, 0x000F86F8, 0x001F2BC0,
    0x006C2780, 0x00028F00, 0xA6F70690, 0x07BDEF79, 0xAC855410, 0x7E002AAA, 0xBF7EA1BF,
    0x4303EFDF, 0x12980000, 0x007A4000, 0x07F09E00, 0x00596800, 0x00FD2F80, 0xF518C639,
    0x4CF1FFF4, 0xF7BDED40, 0x7D695BEF, 0xAC622000, 0xEFE4037F, 0x79CF0DFF, 0xD9E2B700,
    0x602C5FFF, 0x69FFDAE4, 0xDB8C097C, 0x1FFFFDF2, 0xF7380000, 0x6F79001F, 0x98000D91,
    0x01780005, 0x000D90C0, 0x001AC7BF, 0x00170BF0, 0x00058DA2, 0x0009BCB3, 0x8001C46F,
    0x00058D7C, 0x0013786B, 0x000BC44E, 0x8004D539, 0xC0027A1E, 0x63000D15, 0x4DE0001A,
    0x000BC000, 0xBAC007A8, 0xD6000177, 0xF80003E3, 0x40004E65, 0x0000F89C, 0x0000D9C6,
    0x7EB90000, 0x9D7E73FF, 0x65777A00, 0x0BFFAD44, 0xEFA8ADF8, 0x732BF3DC, 0xEF157C07,
    0xBF5109EF, 0x3CF0F8D7, 0xABE6027A, 0x0131AF26, 0x8727E1CC, 0xAC9F000F, 0x62C001E2,
    0x2200061C, 0x800043FC, 0x00000621, 0x21800043, 0x0880092E, 0x5000A2FF, 0x003E1C8C,
    0x635E591C, 0xC7E59801, 0x7809E8F3, 0xCAF898DA, 0xD4427BFB, 0x83F8C5F7, 0xCEFA8ADF,
    0xDCC7BF3D, 0x8AEDF401, 0x0BFFEA88, 0x13BDD600, 0x267AF000, 0x7F233000, 0x09CF8000,
    0x03BEC000, 0x20000000, 0xCE7FEFD7, 0xEF4013AF, 0xF5A88CAE, 0x15BF017F, 0x7E7B9DF5,
    0xAF80EE65, 0x213DFDE2, 0x1F1AF7EA, 0xC04F479E, 0x35E4D57C, 0xFC398026, 0xE001F0E4,
    0x003C5593, 0x00C38C58, 0x087F8440, 0x00C43000, 0x00086000, 0x0125C430, 0x145FE110,
    0xC3918A00, 0xCB238007, 0xB3002C6B, 0x3D1E78FC, 0x131B4F01, 0x4F7F795F, 0x18BEFA88,
    0x515BF07F, 0xF7E7B9DF, 0xBE803B98, 0xFD51115D, 0xCE30017F, 0xDC00013D, 0xC000F8C8,
    0x3567723B, 0xE37A6A00, 0xBA800AB5, 0x05BDD4B7, 0x72000000, 0xFCE7FEFD, 0xEEF4013A,
    0xFF5A88CA, 0x515BF017, 0x57E7B9DF, 0x2AF80EE6, 0xA213DFDE, 0xE1F1AF7E, 0xCC04F479,
    0x635E4D57, 0x4FC39802, 0x3E001F0E, 0x8003C559, 0x000C38C5, 0x0087F844, 0x000C4300,
    0x00008600, 0x00125C43, 0x0145FE11, 0x7C3918A0, 0xBCB23800, 0xCB3002C6, 0x13D1E78F,
    0xF131B4F0, 0x84F7F795, 0xF18BEFA8, 0xF515BF07, 0x8F7E7B9D, 0xDBE803B9, 0xFFD51115,
    0xEFFE8017, 0xAC00DEC9, 0xC673DF25, 0xFF8EC003, 0x00D3D379, 0x9F730EFC, 0x0000002F,
    0xFFDFAE40, 0x80275F9C, 0x51195DDE, 0x7E02FFEB, 0xF73BEA2B, 0x01DCCAFC, 0x7BFBC55F,
    0x35EFD442, 0x9E8F3C3E, 0xC9AAF980, 0x73004C6B, 0x03E1C9F8, 0x78AB27C0, 0x8718B000,
    0xFF088001, 0x88600010, 0x10C00001, 0x4B886000, 0xBFC22002, 0x23140028, 0x47000F87,
    0x0058D796, 0x3CF1F966, 0x369E027A, 0xFEF2BE26, 0x7DF5109E, 0xB7E0FE31, 0xCF73BEA2,
    0x007731EF, 0xA222BB7D, 0x1802FFFA, 0x77BA96F7, 0x00000000, 0x7B8C0000, 0x003BDD4B,
    0xAE400000, 0x5F9CFFDF, 0x5DDE8027, 0xFFEB5119, 0xEA2B7E02, 0xCAFCF73B, 0xC55F01DC,
    0xD4427BFB, 0x3C3E35EF, 0xF9809E8F, 0x4C6BC9AA, 0xC9F87300, 0x27C003E1, 0xB00078AB,
    0x80018718, 0x0010FF08, 0x00018860, 0x600010C0, 0x20024B88, 0x0028BFC2, 0x0F872314,
    0xD7964700, 0xF9660058, 0x027A3CF1, 0xBE26369E, 0x109EFEF2, 0xFE317DF5, 0xBEA2B7E0,
    0x31EFCF73, 0xBB7D0077, 0xFFFAA222, 0x73006F82, 0xC27F9F7A, 0x8CE8F6F3, 0x88CFD49B,
    0xC63799B8, 0xDE537917, 0xBC8FFDC8, 0x4647FC89, 0x031004DE, 0x8C647F8C, 0xDC89E43F,
    0x711F8C5F, 0xA7D46F33, 0x26E33A7E, 0x7DE7A9F5, 0xDBCF09FE, 0x3BF5C80F, 0xFC0EECE7,
    0x577FDE0A, 0x3B758C44, 0x4F626D76, 0xFCF73BF5, 0xAB1DD62A, 0xBF7C46F9, 0x16BF510A,
    0x1FA599A3, 0xFC3C66C0, 0x35BC04D4, 0x0748D787, 0x9FBD66B0, 0x3C058A31, 0x3A8A7E3D,
    0xE5F8C122, 0x030CE49F, 0x840DDFE4, 0x4BEB8801, 0x9FE030C0, 0x238C205D, 0x09AC6F82,
    0x7E945392, 0x1A8A069E, 0x7D56BBC3, 0x6D0E4F80, 0x6B00F8F4, 0x2FC551F8, 0x326AD980,
    0x8855FE8B, 0xC7C6BDFA, 0xA2BFF37A, 0x5F9EE77E, 0xD541DAC5, 0x195DBECE, 0xA01B7D51,
    0xA000FDEE, 0xA0012796, 0xBE0007CB, 0xFE20009C, 0xF0000007, 0x71801FBF, 0x0000016F,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x04000000, 0x00961600, 0x00F4AC10,
    0x28B633F8, 0x84F0C780, 0x1F4E8137, 0x67DFB93F, 0x4D4BDAD4, 0x7E62379E, 0xFD43D7FB,
    0x8CAEDE60, 0x03F7F318, 0x05F7B9E0, 0x0178D780, 0x001C4630, 0xC0027578, 0x00002777,
    0x003F7FE0, 0x0002DEE3, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x2C2C0008, 0xE9582001, 0x6C67F001, 0xE18F0051, 0x9D026F09, 0xBF727E3E, 0x97B5A8CF,
    0xC46F3C9A, 0x87AFF6FC, 0x5DBCC1FA, 0xEFE63119, 0x7BFF1007, 0x997E0007, 0x4F98004E,
    0x401FCADC, 0x78DF37B6, 0x5DCF2016, 0x0005DCF2, 0x01FBFF00, 0x0016F718, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x61600040, 0x4AC10009, 0x633F800F,
    0x0C78028B, 0xE813784F, 0xFB93F1F4, 0xBDAD467D, 0x2379E4D4, 0x3D7FB7E6, 0xEDE60FD4,
    0x7F3188CA, 0x4BBDC03F, 0x0000FBDC, 0xDC000000, 0x0FBDC4BB, 0xEFFC0000, 0x5BDC6007,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x80010000, 0x04002585,
    0xFE003D2B, 0xE00A2D8C, 0x4DE13C31, 0x4FC7D3A0, 0xB519F7EE, 0xE79352F6, 0xFEDF988D,
    0x983F50F5, 0xC6232BB7, 0x9000FDFC, 0xE0006EF7, 0x98000713, 0x5600097E, 0x580007CC,
    0x000005F7, 0x0177BDE0, 0x6F5DEEB0, 0x5E20037A, 0x03F16963, 0x9E1C45F8, 0x1EA00CF2,
    0x0B86F133, 0xAF90D1B4, 0x170D6131, 0xF1074358, 0xC570039A, 0x00BE474B, 0xA6399A63,
    0xE88E8017, 0xF10014F6, 0x00FC54F3, 0x017E29E0, 0x00053600, 0x00000000, 0x00000000,
    0x00000000, 0xFE000000, 0x000005F7, 0x00000000, 0xDEF7BCC0, 0x09BFFE7B, 0xFF7AC880,
    0xEF7BDA81, 0x7F92BFBD, 0x8C6318E4, 0xF1A6FCF1, 0x06C3A000, 0x00090C40, 0x04A40001,
    0xC01B0AC0, 0xF30F96E8, 0xDDEF7BDE, 0xE4001C4B, 0xF7B503BC, 0xFE7FFBDE, 0x318E406F,
    0x0000C8C6, 0xF9000000, 0x15F9CFFE, 0x88CCF730, 0x476435FA, 0xAC7FFBED, 0x6FE45F81,
    0x1E152FC8, 0x7481080F, 0x03028720, 0xC60093DA, 0xABC00D13, 0x00658012, 0x4009CCA0,
    0x0017EF0F, 0x1ECF1FB1, 0xF237BE00, 0x5FE6001F, 0x70C6004C, 0xD2137C60, 0x29E9EF81,
    0x5BC0F0BF, 0xE3FFDEF1, 0x477BF04D, 0xF209ED44, 0xFE400DDC, 0x99E0028C, 0x51DE002E,
    0x137D8009, 0x73FF7E60, 0x7EC40776, 0xEB188C9F, 0xDF91BE26, 0x5E25FFB9, 0xC84F3946,
    0xC6398A9E, 0xECF09B00, 0x31004C0D, 0xE7807BE6, 0x677ECE77, 0x22AFEC42, 0xD07DF59F,
    0xFFFBDE23, 0xD65809FA, 0xF2000304, 0x19CC7865, 0x3780EE72, 0x5FFEE7BC, 0xCF72985F,
    0xCF3EA88C, 0xEE780FE3, 0x8D78017D, 0x7118C017, 0x02757800, 0x6009DDF0, 0x7673FF7E,
    0x9F7EC407, 0x26EB188C, 0xB9DF91BE, 0x465E25FF, 0x9EC84F39, 0x00C6398A, 0x0DECF09B,
    0xE631004C, 0x77E7807B, 0x42677ECE, 0x9F22AFEC, 0x23D07DF5, 0xFAFFFBDE, 0x04D65809,
    0x65F20003, 0x7219CC78, 0xBC3780EE, 0x5F5FFEE7, 0x8CCF7298, 0xE3CF3EA8, 0xFFBDC60F,
    0x7E647000, 0x9D8E5F00, 0x71E780B5, 0x3C03BDA3, 0x3DCF0EF7, 0xFFDF9803, 0xB101DD9C,
    0xC62327DF, 0xE46F89BA, 0x897FEE77, 0x13CE5197, 0x8E62A7B2, 0x3C26C031, 0x4013037B,
    0xE01EF98C, 0xDFB39DF9, 0xABFB1099, 0x1F7D67C8, 0xFEF788F4, 0x96027EBF, 0x8000C135,
    0x731E197C, 0xE03B9C86, 0xFFB9EF0D, 0xDCA617D7, 0xCFAA2333, 0xFBC3F8F3, 0x0FCE4DFF,
    0x9EF3D3BC, 0xFE541B13, 0x02E69BCF, 0x9F733FFF, 0xFFBF3017, 0x6203BB39, 0x8C464FBF,
    0xC8DF1375, 0x12FFDCEF, 0x279CA32F, 0x1CC54F64, 0x784D8063, 0x802606F6, 0xC03DF318,
    0xBF673BF3, 0x57F62133, 0x3EFACF91, 0xFDEF11E8, 0x2C04FD7F, 0x0001826B, 0xE63C32F9,
    0xC077390C, 0xFF73DE1B, 0xB94C2FAF, 0x9F544667, 0xDD47F1E7, 0x06F73C3B, 0x80000000,
    0xEE7877BA, 0xFF7E600D, 0xC4077673, 0x188C9F7E, 0x91BE26EB, 0x25FFB9DF, 0x4F39465E,
    0x398A9EC8, 0xF09B00C6, 0x004C0DEC, 0x807BE631, 0x7ECE77E7, 0xAFEC4267, 0x7DF59F22,
    0xFBDE23D0, 0x5809FAFF, 0x000304D6, 0xCC7865F2, 0x80EE7219, 0xFEE7BC37, 0x72985F5F,
    0x3EA88CCF, 0xE20FE3CF, 0x7E005E77, 0xC00B13FF, 0x600DBE5A, 0xF006DF4D, 0x801727DB,
    0xC00F9DF8, 0xECE7FEFC, 0x3EFD880E, 0x4DD63119, 0x73BF237C, 0x8CBC4BFF, 0x3D909E72,
    0x018C7315, 0x1BD9E136, 0xCC620098, 0xEFCF00F7, 0x84CEFD9C, 0x3E455FD8, 0x47A0FBEB,
    0xF5FFF7BC, 0x09ACB013, 0xCBE40006, 0xE43398F0, 0x786F01DC, 0xBEBFFDCF, 0x199EE530,
    0xC79E7D51, 0x9CEFD61F, 0xEF126FFF, 0x03DF9CFF, 0x9115DFF2, 0xCEEAFEF5, 0x85EFA88C,
    0xEF77E39B, 0xF317EA59, 0x6CC74F7F, 0x117F8C9E, 0x14DE783D, 0x664333EB, 0x81F87805,
    0xFFACB11A, 0xE00C8407, 0xD67C81B1, 0xEF7BCA6F, 0x134EF7BD, 0xD7FF9F6B, 0xF1080015,
    0xEF66A1EF, 0xF7BDEEA5, 0xDFEF7BDE, 0x7E77E32F, 0x004C1AEF, 0x4302DE3C, 0x8DDBF006,
    0x81F8AA0B, 0xCC37F1AA, 0x3CFF6427, 0xF310DF9E, 0xF11B8F53, 0xF95FFB9D, 0x7BED5AFB,
    0x631F18DE, 0xF7AC8CCF, 0x199ED65F, 0xA80EEF51, 0xDFFE7FEF, 0xC9EFEF00, 0xF44F67C8,
    0x5FF7FEB4, 0xEEA721DE, 0xF5E1BF94, 0x25F02C44, 0xFFF3015B, 0x70801259, 0x3002E001,
    0x5FFF9025, 0x3E54050C, 0x3E0589F1, 0xC2BD4E4B, 0xDE688DF8, 0x2BBB9F47, 0x7BF7C0BE,
    0x02DE7232, 0xBFFA8DF5, 0x0188A801, 0x0FDCF560, 0x036558C0, 0x7F4F6FDE, 0xAFD65540,
    0x05DEFA00, 0x000F9740, 0x4003E65F, 0xC6002F1C, 0xFBEA00DD, 0xC057FF9F, 0xF2327BFB,
    0xD3D0BDF9, 0xE6D3DFFA, 0x14EE9722, 0x4F86F5EB, 0xA633302E, 0x5FCB00B2, 0xF7BDEE7A,
    0x0298FBDE, 0xBDF42100, 0xEF7BDEF7, 0x007F4BFD, 0x9F000A3C, 0xFFFC4178, 0x97E698CB,
    0x1E39FEA2, 0xBFF3C7DE, 0x4BE237E7, 0x2327BF7C, 0xD4016FAB, 0xD7002FBD, 0x8A8C0178,
    0x07A7C00B, 0x009DEF00, 0xFF9FFBEA, 0x7BFBC057, 0xBDF9F232, 0xDFFAD3D0, 0x9722E6D3,
    0xF5EB14EE, 0x302E4F86, 0x00B2A633, 0xEE7A5FCB, 0xFBDEF7BD, 0x21000298, 0xDEF7BDF4,
    0x4BFDEF7B, 0x0A3C007F, 0x41789F00, 0x98CBFFFC, 0xFEA297E6, 0xC7DE1E39, 0x37E7BFF3,
    0xBF7C4BE2, 0x6FAB2327, 0x7FDEE301, 0x3F323800, 0x67732F80, 0xBC79E02D, 0x9E01DED1,
    0xCF73CB7B, 0x9FFBEA00, 0xFBC057FF, 0xF9F2327B, 0xFAD3D0BD, 0x22E6D3DF, 0xEB14EE97,
    0x2E4F86F5, 0xB2A63330, 0x7A5FCB00, 0xDEF7BDEE, 0x000298FB, 0xF7BDF421, 0xFDEF7BDE,
    0x3C007F4B, 0x789F000A, 0xCBFFFC41, 0xA297E698, 0xDE1E39FE, 0xE7BFF3C7, 0x7C4BE237,
    0xAB2327BF, 0x77B8C16F, 0x004DEE78, 0xE3000000, 0x37B9E1DE, 0xE7FEFA81, 0xFEF015FF,
    0x7E7C8C9E, 0xFEB4F42F, 0xC8B9B4F7, 0x7AC53BA5, 0x0B93E1BD, 0x2CA98CCC, 0x9E97F2C0,
    0xF7BDEF7B, 0x4000A63E, 0xBDEF7D08, 0xFF7BDEF7, 0x8F001FD2, 0x5E27C002, 0x32FFFF10,
    0xA8A5F9A6, 0xF7878E7F, 0xF9EFFCF1, 0xDF12F88D, 0xEAC8C9EF, 0x4DDCF25B, 0xE9CC51B6,
    0xD8951DE2, 0x01EE7937, 0x00000000, 0x00000000, 0xFB9C0000, 0xF09C330F, 0x6A8D4359,
    0xDCF0FEEA, 0x00000003, 0x00000000, 0xC0000000, 0xF302EF77, 0x6C81E889, 0x89C13AFD,
    0xC7E46B9A, 0xFDF63FBE, 0x000F73C1, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0xE736FFC0, 0xFF80002E, 0x3C5DCE6D, 0x000000F7, 0x00000000, 0x00000000, 0x00000000,
    0xEB17739E, 0xFA2F9E05, 0x500FEFFD, 0x01BF1CCB, 0x8AEE7FCC, 0xFBFF880F, 0x0F3C5F1B,
    0xFF3DFF88, 0xDF81F95F, 0x23CF915B, 0xE7D2BE16, 0xF18F87EE, 0xDF185778, 0x2727CB23,
    0x51ED85F8, 0x74863C40, 0x0014C301, 0x70C00020, 0x1E54C300, 0x27DB1E20, 0x4C45F827,
    0xE43B7A63, 0x7DE0E8F7, 0x8FFF73AC, 0x9EFDF09E, 0x817B9C8C, 0x7D4EFFDA, 0xF5A5F912,
    0x7891AFFF, 0x67EFFBE2, 0x96EB038C, 0x183D9DF1, 0xFF7C6FF7, 0x7300EFF3, 0x76B9193F,
    0xDF63BC60, 0x1887F2D3, 0x1535887B, 0x022FE07C, 0x040C580F, 0x00000000, 0x00000000,
    0x00000000, 0xF7580000, 0xF2AC002E, 0xF997C001, 0xBC4E2000, 0x06CE3000, 0xF9FFBEA0,
    0x7EF8057F, 0xBF3E464F, 0xF58F7C17, 0x3669FFBF, 0xCA76F1EA, 0x63835977, 0xA3E9D04C,
    0x21E500FC, 0x0148E024, 0x40010840, 0x701FC208, 0xCB00A524, 0xE82631C3, 0xB78F51F0,
    0x1CCBBE53, 0xDFFACAF8, 0xF05F34FF, 0x9C8C9EFB, 0xEEA005FB, 0xE570017D, 0x1C56400B,
    0x03BCFC00, 0x005DEF00, 0xFF3FF7D4, 0xEFDF00AF, 0xF7E7C8C9, 0xFEB1EF82, 0x46CD3FF7,
    0xF94EDE3D, 0x8C706B2E, 0x947D3A09, 0x843CA01F, 0x00291C04, 0x08002108, 0x8E03F841,
    0x796014A4, 0x1D04C638, 0x76F1EA3E, 0x039977CA, 0xFBFF595F, 0x7E0BE69F, 0x739193DF,
    0xDEE300BF, 0x6470007F, 0xCCDE007E, 0xCF00B59D, 0x01EB46F4, 0xE796F73C, 0xEFA801DE,
    0x015FFE7F, 0x9193DFBE, 0xDF05EFCF, 0x7FEFFD63, 0xBC7A8D9A, 0xD65DF29D, 0x741318E0,
    0x403F28FA, 0x38090879, 0x42100052, 0xF0821000, 0x29491C07, 0x8C70F2C0, 0xD47C3A09,
    0xEF94EDE3, 0xB2BE0732, 0xCD3FF7FE, 0x27BEFC17, 0x017EE723, 0xFE4DFFFD, 0xE797A03F,
    0xF037273D, 0x69BCFFE4, 0x67FFE02E, 0xD402F3EE, 0xAFFF3FF7, 0xC9EFDF00, 0x82F7E7C8,
    0xF7FEB1EF, 0x3D46CD3F, 0x2EF94EDE, 0x098C706B, 0x1F947D3A, 0x04843CA0, 0x0800291C,
    0x41080021, 0xA48E03F8, 0x38796014, 0x3E1D04C6, 0xCA76F1EA, 0x5F039977, 0x9FFBFF59,
    0xDF7E0BE6, 0xBF739193, 0xA877B8C0, 0x0000137B, 0xBDC60000, 0x809BDD43, 0xFFE7FEFA,
    0x3DFBE015, 0x5EFCF919, 0xFFD63DF0, 0xA8D9A7FE, 0xDF29DBC7, 0x318E0D65, 0xF28FA741,
    0x90879403, 0x00052380, 0x21000421, 0x91C07F08, 0x0F2C0294, 0xC3A098C7, 0x4EDE3D47,
    0xE0732EF9, 0xFF7FEB2B, 0xEFC17CD3, 0xEE72327B, 0x1FDCE017, 0x00000000, 0xE703FB9C,
    0xBDEF7BDE, 0x03FBDEF7, 0xF7BDFF00, 0xBDEF7BDE, 0x18C63BF7, 0xC6318C63, 0xFDCE0918,
    0x00000001, 0x6037E000, 0x9DD9CEFE, 0xDFB116AB, 0xBF6B188A, 0xBC47FC55, 0xD88AEEE7,
    0x619BE1AC, 0xA79F2F24, 0xCC47CCF0, 0xABF91748, 0xC2C9B86F, 0x817299F1, 0xB0617C77,
    0xC55CCF08, 0x1BF99920, 0xDD23298D, 0xB61C8FE3, 0xC0BE33C7, 0x629D1E2B, 0x4D2BF184,
    0x773E888C, 0xF67C9E97, 0xFF39115B, 0xF9CDFB0B, 0x26FFE73B, 0x007BFF10, 0x005889C4,
    0x9800FB46, 0x7C003E4F, 0x6F7181F7, 0x0037BA80, 0x00000000, 0x00000000, 0x00000000,
    0xC0300400, 0x2C40F246, 0xCF277944, 0xDEF11D06, 0xC60F8DFB, 0x6F39195D, 0x2EF75801,
    0x005A9F00, 0xE007E64F, 0x7D8006F5, 0x037B8C0B, 0x0001BDD4, 0x00000000, 0x00000000,
    0x00000000, 0x36018020, 0x21620792, 0x36793BCA, 0xDEF788E8, 0xEE307C6F, 0x0B79C8CA,
    0x03FEF750, 0x1FCCAF10, 0xC76397E0, 0xDC7CC0B3, 0x7980EF68, 0x19EF30EF, 0xD4037B8C,
    0x000001BD, 0x00000000, 0x00000000, 0x20000000, 0x92360180, 0xCA216207, 0xE836793B,
    0x6FDEF788, 0xCAEE307C, 0xD40B79C8, 0x37B9E9BD, 0x80000000, 0xF73D37BA, 0x00DEE306,
    0x00006F75, 0x00000000, 0x00000000, 0x00000000, 0x8D806008, 0x885881E4, 0x0D9E4EF2,
    0xF7BDE23A, 0xBB8C1F1B, 0x02DE7232, 0x004F7FE0, 0x0017D278, 0x8C00AB5E, 0x71801A31,
    0x9BDCF037, 0x4F13DD40, 0x0ABF8078, 0x972C07E5, 0xC4542463, 0xFE078543, 0x583F2C16,
    0xA48CF83E, 0xF48C0722, 0x8F01F7F0, 0x3E04CB1F, 0x802A2A23, 0x003B6A1C, 0x01E2B73F,
    0x002C6A98, 0xC00FE151, 0xE100165F, 0x03E7C001, 0x4F9DAA8C, 0x1BF7EA02, 0x191803F1,
    0xEE3003B5, 0x0000004D, 0x00000000, 0xE73BF500, 0xAFDF00F7, 0xC0FBEA22, 0xCB3DDFCA,
    0x44BB10D3, 0x037899B7, 0x0783C456, 0xE0489B28, 0x0040016F, 0x40110570, 0x6CA0289A,
    0x1623A0BC, 0x97A21EC6, 0xBEC73037, 0x7E0B5967, 0x767C8ABF, 0xFF3BF503, 0x0000006F,
    0x00000000, 0xFF1FBBF0, 0x000002FB, 0x1FBBF000, 0xB9E2FBFF, 0x27BA8137, 0x7F00F09E,
    0x580FCA15, 0xA848C72E, 0x0F0A8788, 0x7E582DFC, 0x19F07CB0, 0x180E4549, 0x03EFE1E9,
    0x09963F1E, 0x5454467C, 0x76D43900, 0xC56E7E00, 0x58D53003, 0x1FC2A200, 0x002CBF80,
    0xCF8003C2, 0x3B551807, 0xEFD4049F, 0x3007E237, 0x00076A32
EW_END_OF_FONT_RES( ApplicationNumbersM )

/* Table with links to derived variants of the font resource : 'Application::NumbersM' */
EW_RES_WITHOUT_VARIANTS( ApplicationNumbersM )

/* Font resource : 'Application::NumbersP' */
EW_DEFINE_FONT_RES( ApplicationNumbersP, 23, 5, 1, 16, 0x001F, 0x00C0 )
  EW_GLYPH( 0x001F, 3, -16, 13, 16, 19, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 7, 0x0000016D ),                /* ' ' */
  EW_GLYPH( 0x0021, 2, -18, 3, 18, 7, 0x0000016D ),             /* '!' */
  EW_GLYPH( 0x0022, 1, -18, 7, 6, 9, 0x00000208 ),              /* '"' */
  EW_GLYPH( 0x0023, 0, -18, 14, 18, 14, 0x00000281 ),           /* '#' */
  EW_GLYPH( 0x0024, 0, -19, 13, 21, 14, 0x00000590 ),           /* '$' */
  EW_GLYPH( 0x0025, 1, -18, 20, 18, 22, 0x000008DC ),           /* '%' */
  EW_GLYPH( 0x0026, 1, -18, 16, 18, 17, 0x00000CDD ),           /* '&' */
  EW_GLYPH( 0x0027, 1, -18, 3, 6, 5, 0x0000105B ),              /* ''' */
  EW_GLYPH( 0x0028, 1, -18, 7, 23, 8, 0x00001092 ),             /* '(' */
  EW_GLYPH( 0x0029, 1, -18, 7, 23, 8, 0x0000121A ),             /* ')' */
  EW_GLYPH( 0x002A, 0, -18, 9, 8, 10, 0x0000139F ),             /* '*' */
  EW_GLYPH( 0x002B, 1, -15, 13, 12, 15, 0x000014A7 ),           /* '+' */
  EW_GLYPH( 0x002C, 2, -3, 3, 7, 7, 0x000015B4 ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -8, 8, 2, 8, 0x0000160A ),               /* '-' */
  EW_GLYPH( 0x002E, 2, -3, 3, 3, 7, 0x00001639 ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -18, 7, 18, 7, 0x00001652 ),             /* '/' */
  EW_GLYPH( 0x0030, 1, -18, 12, 18, 14, 0x00001775 ),           /* '0' */
  EW_GLYPH( 0x0031, 2, -18, 8, 18, 14, 0x000019C6 ),            /* '1' */
  EW_GLYPH( 0x0032, 0, -18, 13, 18, 14, 0x00001ABE ),           /* '2' */
  EW_GLYPH( 0x0033, 1, -18, 12, 18, 14, 0x00001D39 ),           /* '3' */
  EW_GLYPH( 0x0034, 0, -18, 13, 18, 14, 0x00001FE9 ),           /* '4' */
  EW_GLYPH( 0x0035, 1, -18, 12, 18, 14, 0x0000220B ),           /* '5' */
  EW_GLYPH( 0x0036, 0, -18, 13, 18, 14, 0x000024A4 ),           /* '6' */
  EW_GLYPH( 0x0037, 1, -18, 12, 18, 14, 0x00002791 ),           /* '7' */
  EW_GLYPH( 0x0038, 1, -18, 12, 18, 14, 0x0000296B ),           /* '8' */
  EW_GLYPH( 0x0039, 1, -18, 12, 18, 14, 0x00002C4C ),           /* '9' */
  EW_GLYPH( 0x003A, 2, -13, 3, 13, 7, 0x00002F1C ),             /* ':' */
  EW_GLYPH( 0x003B, 2, -13, 3, 17, 7, 0x00002F73 ),             /* ';' */
  EW_GLYPH( 0x003C, 1, -15, 13, 12, 15, 0x00003005 ),           /* '<' */
  EW_GLYPH( 0x003D, 1, -13, 13, 7, 15, 0x000031EC ),            /* '=' */
  EW_GLYPH( 0x003E, 1, -15, 13, 12, 15, 0x000032E6 ),           /* '>' */
  EW_GLYPH( 0x003F, 1, -18, 12, 18, 14, 0x000034CE ),           /* '?' */
  EW_GLYPH( 0x0040, 1, -18, 24, 23, 25, 0x000036EB ),           /* '@' */
  EW_GLYPH( 0x0041, -1, -18, 18, 18, 17, 0x00003DE6 ),          /* 'A' */
  EW_GLYPH( 0x0042, 1, -18, 15, 18, 17, 0x000040C9 ),           /* 'B' */
  EW_GLYPH( 0x0043, 1, -18, 17, 18, 18, 0x00004360 ),           /* 'C' */
  EW_GLYPH( 0x0044, 1, -18, 16, 18, 18, 0x0000467C ),           /* 'D' */
  EW_GLYPH( 0x0045, 1, -18, 15, 18, 17, 0x000048E2 ),           /* 'E' */
  EW_GLYPH( 0x0046, 2, -18, 13, 18, 15, 0x00004ADF ),           /* 'F' */
  EW_GLYPH( 0x0047, 1, -18, 17, 18, 19, 0x00004C72 ),           /* 'G' */
  EW_GLYPH( 0x0048, 2, -18, 15, 18, 18, 0x00004FD8 ),           /* 'H' */
  EW_GLYPH( 0x0049, 2, -18, 3, 18, 7, 0x00005154 ),             /* 'I' */
  EW_GLYPH( 0x004A, 0, -18, 11, 18, 13, 0x00005198 ),           /* 'J' */
  EW_GLYPH( 0x004B, 1, -18, 16, 18, 17, 0x000052F8 ),           /* 'K' */
  EW_GLYPH( 0x004C, 1, -18, 13, 18, 14, 0x00005588 ),           /* 'L' */
  EW_GLYPH( 0x004D, 1, -18, 18, 18, 21, 0x000056A5 ),           /* 'M' */
  EW_GLYPH( 0x004E, 1, -18, 15, 18, 18, 0x0000595F ),           /* 'N' */
  EW_GLYPH( 0x004F, 1, -18, 18, 18, 19, 0x00005B48 ),           /* 'O' */
  EW_GLYPH( 0x0050, 1, -18, 15, 18, 17, 0x00005EB1 ),           /* 'P' */
  EW_GLYPH( 0x0051, 1, -18, 18, 19, 19, 0x000060ED ),           /* 'Q' */
  EW_GLYPH( 0x0052, 1, -18, 17, 18, 18, 0x000064B6 ),           /* 'R' */
  EW_GLYPH( 0x0053, 1, -18, 15, 18, 17, 0x000067A4 ),           /* 'S' */
  EW_GLYPH( 0x0054, 0, -18, 15, 18, 15, 0x00006B08 ),           /* 'T' */
  EW_GLYPH( 0x0055, 1, -18, 16, 18, 18, 0x00006C8D ),           /* 'U' */
  EW_GLYPH( 0x0056, 0, -18, 17, 18, 17, 0x00006E90 ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -18, 24, 18, 24, 0x00007145 ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -18, 17, 18, 17, 0x00007546 ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -18, 17, 18, 17, 0x00007858 ),           /* 'Y' */
  EW_GLYPH( 0x005A, 0, -18, 15, 18, 15, 0x00007AA3 ),           /* 'Z' */
  EW_GLYPH( 0x005B, 1, -18, 6, 23, 7, 0x00007D28 ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -18, 7, 18, 7, 0x00007E0A ),             /* '\' */
  EW_GLYPH( 0x005D, 0, -18, 6, 23, 7, 0x00007F34 ),             /* ']' */
  EW_GLYPH( 0x005E, 0, -18, 12, 10, 12, 0x00008017 ),           /* '^' */
  EW_GLYPH( 0x005F, -1, 3, 16, 2, 14, 0x00008158 ),             /* '_' */
  EW_GLYPH( 0x0060, 1, -18, 5, 3, 8, 0x000081F8 ),              /* '`' */
  EW_GLYPH( 0x0061, 0, -13, 13, 13, 14, 0x00008231 ),           /* 'a' */
  EW_GLYPH( 0x0062, 1, -18, 12, 18, 14, 0x0000846F ),           /* 'b' */
  EW_GLYPH( 0x0063, 0, -13, 13, 13, 13, 0x00008679 ),           /* 'c' */
  EW_GLYPH( 0x0064, 0, -18, 13, 18, 14, 0x00008877 ),           /* 'd' */
  EW_GLYPH( 0x0065, 0, -13, 13, 13, 14, 0x00008A94 ),           /* 'e' */
  EW_GLYPH( 0x0066, 0, -18, 8, 18, 7, 0x00008CF4 ),             /* 'f' */
  EW_GLYPH( 0x0067, 0, -13, 13, 18, 14, 0x00008E1F ),           /* 'g' */
  EW_GLYPH( 0x0068, 1, -18, 12, 18, 14, 0x000090F2 ),           /* 'h' */
  EW_GLYPH( 0x0069, 1, -18, 3, 18, 6, 0x00009262 ),             /* 'i' */
  EW_GLYPH( 0x006A, -2, -18, 6, 23, 6, 0x000092BF ),            /* 'j' */
  EW_GLYPH( 0x006B, 1, -18, 12, 18, 13, 0x000093A2 ),           /* 'k' */
  EW_GLYPH( 0x006C, 1, -18, 3, 18, 6, 0x0000956E ),             /* 'l' */
  EW_GLYPH( 0x006D, 1, -13, 19, 13, 21, 0x000095B2 ),           /* 'm' */
  EW_GLYPH( 0x006E, 1, -13, 12, 13, 14, 0x000097A7 ),           /* 'n' */
  EW_GLYPH( 0x006F, 0, -13, 13, 13, 14, 0x000098D4 ),           /* 'o' */
  EW_GLYPH( 0x0070, 1, -13, 12, 18, 14, 0x00009AED ),           /* 'p' */
  EW_GLYPH( 0x0071, 0, -13, 13, 18, 14, 0x00009D17 ),           /* 'q' */
  EW_GLYPH( 0x0072, 1, -13, 8, 13, 8, 0x00009F4B ),             /* 'r' */
  EW_GLYPH( 0x0073, 0, -13, 12, 13, 13, 0x0000A00F ),           /* 's' */
  EW_GLYPH( 0x0074, 0, -18, 7, 18, 7, 0x0000A242 ),             /* 't' */
  EW_GLYPH( 0x0075, 1, -13, 12, 13, 14, 0x0000A349 ),           /* 'u' */
  EW_GLYPH( 0x0076, 0, -13, 13, 13, 13, 0x0000A47C ),           /* 'v' */
  EW_GLYPH( 0x0077, 0, -13, 18, 13, 18, 0x0000A62D ),           /* 'w' */
  EW_GLYPH( 0x0078, 0, -13, 13, 13, 13, 0x0000A8B5 ),           /* 'x' */
  EW_GLYPH( 0x0079, 0, -13, 13, 18, 13, 0x0000AAB6 ),           /* 'y' */
  EW_GLYPH( 0x007A, 0, -13, 12, 13, 13, 0x0000ACF7 ),           /* 'z' */
  EW_GLYPH( 0x007B, 0, -18, 8, 23, 8, 0x0000AEFA ),             /* '{' */
  EW_GLYPH( 0x007C, 2, -18, 3, 23, 7, 0x0000B0AA ),             /* '|' */
  EW_GLYPH( 0x007D, 0, -18, 8, 23, 8, 0x0000B0FC ),             /* '}' */
  EW_GLYPH( 0x007E, 1, -11, 13, 4, 15, 0x0000B287 ),            /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 7, 0x0000B370 ),
  EW_GLYPH( 0x00A1, 2, -13, 4, 18, 8, 0x0000B370 ),
  EW_GLYPH( 0x00A2, 1, -18, 12, 23, 14, 0x0000B411 ),
  EW_GLYPH( 0x00A3, 0, -18, 14, 18, 14, 0x0000B718 ),
  EW_GLYPH( 0x00A4, 0, -15, 13, 12, 14, 0x0000B9EE ),
  EW_GLYPH( 0x00A5, -1, -18, 15, 18, 14, 0x0000BC15 ),
  EW_GLYPH( 0x00A6, 2, -18, 3, 23, 7, 0x0000BF10 ),
  EW_GLYPH( 0x00A7, 0, -18, 13, 23, 14, 0x0000BF7C ),
  EW_GLYPH( 0x00A8, 0, -18, 8, 2, 8, 0x0000C33E ),
  EW_GLYPH( 0x00A9, 0, -18, 19, 18, 18, 0x0000C366 ),
  EW_GLYPH( 0x00AA, 0, -18, 9, 9, 9, 0x0000C816 ),
  EW_GLYPH( 0x00AB, 1, -12, 12, 11, 14, 0x0000C969 ),
  EW_GLYPH( 0x00AC, 1, -13, 13, 8, 15, 0x0000CB0C ),
  EW_GLYPH( 0x00AD, 0, -8, 8, 2, 8, 0x0000CBE2 ),
  EW_GLYPH( 0x00AE, 0, -18, 19, 18, 18, 0x0000CC11 ),
  EW_GLYPH( 0x00AF, -1, -21, 16, 2, 14, 0x0000D098 ),
  EW_GLYPH( 0x00B0, 1, -18, 8, 7, 10, 0x0000D138 ),
  EW_GLYPH( 0x00B1, 0, -15, 13, 15, 14, 0x0000D20F ),
  EW_GLYPH( 0x00B2, 0, -18, 8, 9, 8, 0x0000D37C ),
  EW_GLYPH( 0x00B3, 0, -18, 8, 9, 8, 0x0000D4A2 ),
  EW_GLYPH( 0x00B4, 2, -18, 6, 3, 8, 0x0000D5C5 ),
  EW_GLYPH( 0x00B5, 1, -13, 12, 18, 14, 0x0000D609 ),
  EW_GLYPH( 0x00B6, 0, -18, 14, 23, 13, 0x0000D77D ),
  EW_GLYPH( 0x00B7, 2, -10, 4, 3, 8, 0x0000D964 ),
  EW_GLYPH( 0x00B8, 1, 0, 6, 5, 8, 0x0000D97F ),
  EW_GLYPH( 0x00B9, 1, -18, 5, 9, 8, 0x0000D9F7 ),
  EW_GLYPH( 0x00BA, 0, -18, 9, 9, 9, 0x0000DA5C ),
  EW_GLYPH( 0x00BB, 1, -12, 12, 11, 14, 0x0000DB7E ),
  EW_GLYPH( 0x00BC, 1, -18, 20, 18, 21, 0x0000DD2F ),
  EW_GLYPH( 0x00BD, 1, -18, 20, 18, 21, 0x0000E077 ),
  EW_GLYPH( 0x00BE, 0, -18, 21, 18, 21, 0x0000E40C ),
  EW_GLYPH( 0x00BF, 1, -13, 13, 18, 15, 0x0000E838 ),
  EW_GLYPH( 0x00C0, -1, -23, 18, 23, 17, 0x0000EA4C ),
  EW_GLYPH( 0x00C1, -1, -23, 18, 23, 17, 0x0000EDCB ),
  EW_GLYPH( 0x00C2, -1, -23, 18, 23, 17, 0x0000F144 ),
  EW_GLYPH( 0x00C3, -1, -23, 18, 23, 17, 0x0000F4E5 ),
  EW_GLYPH( 0x00C4, -1, -22, 18, 22, 17, 0x0000F8A4 ),
  EW_GLYPH( 0x00C5, -1, -22, 18, 22, 17, 0x0000FC05 ),
  EW_GLYPH( 0x00C6, 0, -18, 24, 18, 25, 0x0000FF69 ),
  EW_GLYPH( 0x00C7, 1, -18, 17, 23, 18, 0x000102EF ),
  EW_GLYPH( 0x00C8, 1, -23, 15, 23, 17, 0x000106CA ),
  EW_GLYPH( 0x00C9, 1, -23, 15, 23, 17, 0x00010949 ),
  EW_GLYPH( 0x00CA, 1, -23, 15, 23, 17, 0x00010BCC ),
  EW_GLYPH( 0x00CB, 1, -22, 15, 22, 17, 0x00010E81 ),
  EW_GLYPH( 0x00CC, 0, -23, 6, 23, 7, 0x000110EA ),
  EW_GLYPH( 0x00CD, 1, -23, 6, 23, 7, 0x000111C1 ),
  EW_GLYPH( 0x00CE, -1, -23, 9, 23, 7, 0x00011295 ),
  EW_GLYPH( 0x00CF, 0, -22, 7, 22, 7, 0x000113DB ),
  EW_GLYPH( 0x00D0, -1, -18, 18, 18, 18, 0x000114B9 ),
  EW_GLYPH( 0x00D1, 1, -23, 15, 23, 18, 0x000117A8 ),
  EW_GLYPH( 0x00D2, 1, -23, 18, 23, 19, 0x00011A5D ),
  EW_GLYPH( 0x00D3, 1, -23, 18, 23, 19, 0x00011E61 ),
  EW_GLYPH( 0x00D4, 1, -23, 18, 23, 19, 0x00012259 ),
  EW_GLYPH( 0x00D5, 1, -23, 18, 23, 19, 0x00012685 ),
  EW_GLYPH( 0x00D6, 1, -22, 18, 22, 19, 0x00012ACC ),
  EW_GLYPH( 0x00D7, 1, -14, 12, 10, 15, 0x00012EB1 ),
  EW_GLYPH( 0x00D8, 1, -18, 18, 18, 19, 0x0001305F ),
  EW_GLYPH( 0x00D9, 1, -23, 16, 23, 18, 0x00013479 ),
  EW_GLYPH( 0x00DA, 1, -23, 16, 23, 18, 0x00013708 ),
  EW_GLYPH( 0x00DB, 1, -23, 16, 23, 18, 0x00013992 ),
  EW_GLYPH( 0x00DC, 1, -22, 16, 22, 18, 0x00013C51 ),
  EW_GLYPH( 0x00DD, 0, -23, 17, 23, 17, 0x00013ECA ),
  EW_GLYPH( 0x00DE, 1, -18, 15, 18, 17, 0x000141AA ),
  EW_GLYPH( 0x00DF, 1, -18, 14, 18, 15, 0x000143DC ),
  EW_GLYPH( 0x00E0, 0, -18, 13, 18, 14, 0x00014667 ),
  EW_GLYPH( 0x00E1, 0, -18, 13, 18, 14, 0x0001491F ),
  EW_GLYPH( 0x00E2, 0, -18, 13, 18, 14, 0x00014BD5 ),
  EW_GLYPH( 0x00E3, 0, -18, 13, 18, 14, 0x00014EBB ),
  EW_GLYPH( 0x00E4, 0, -17, 13, 17, 14, 0x000151C2 ),
  EW_GLYPH( 0x00E5, 0, -19, 13, 19, 14, 0x00015464 ),
  EW_GLYPH( 0x00E6, 0, -13, 22, 13, 22, 0x00015748 ),
  EW_GLYPH( 0x00E7, 0, -13, 13, 18, 13, 0x00015B93 ),
  EW_GLYPH( 0x00E8, 0, -18, 13, 18, 14, 0x00015E39 ),
  EW_GLYPH( 0x00E9, 0, -18, 13, 18, 14, 0x00016111 ),
  EW_GLYPH( 0x00EA, 0, -18, 13, 18, 14, 0x000163EF ),
  EW_GLYPH( 0x00EB, 0, -17, 13, 17, 14, 0x000166F8 ),
  EW_GLYPH( 0x00EC, 0, -18, 6, 18, 7, 0x000169BE ),
  EW_GLYPH( 0x00ED, 2, -18, 5, 18, 7, 0x00016A79 ),
  EW_GLYPH( 0x00EE, -1, -18, 9, 18, 7, 0x00016B16 ),
  EW_GLYPH( 0x00EF, 0, -17, 7, 17, 7, 0x00016C2F ),
  EW_GLYPH( 0x00F0, 0, -18, 13, 18, 14, 0x00016CE8 ),
  EW_GLYPH( 0x00F1, 1, -18, 12, 18, 14, 0x00016FBB ),
  EW_GLYPH( 0x00F2, 0, -18, 13, 18, 14, 0x000171B0 ),
  EW_GLYPH( 0x00F3, 0, -18, 13, 18, 14, 0x00017441 ),
  EW_GLYPH( 0x00F4, 0, -18, 13, 18, 14, 0x000176DD ),
  EW_GLYPH( 0x00F5, 0, -18, 13, 18, 14, 0x0001799E ),
  EW_GLYPH( 0x00F6, 0, -17, 13, 17, 14, 0x00017C82 ),
  EW_GLYPH( 0x00F7, 0, -14, 13, 10, 14, 0x00017F01 ),
  EW_GLYPH( 0x00F8, 1, -14, 13, 15, 15, 0x00018017 ),
  EW_GLYPH( 0x00F9, 1, -18, 12, 18, 14, 0x000182D5 ),
  EW_GLYPH( 0x00FA, 1, -18, 12, 18, 14, 0x00018485 ),
  EW_GLYPH( 0x00FB, 1, -18, 12, 18, 14, 0x0001862F ),
  EW_GLYPH( 0x00FC, 1, -17, 12, 17, 14, 0x00018804 ),
  EW_GLYPH( 0x00FD, 0, -18, 13, 23, 13, 0x00018997 ),
  EW_GLYPH( 0x00FE, 1, -18, 12, 23, 14, 0x00018C5A ),
  EW_GLYPH( 0x00FF, 0, -17, 13, 22, 13, 0x00018EBC ),

  EW_FONT_PIXEL( ApplicationNumbersP, 0x00019161 )              /* ratio 62.12 % */
    0xBDEF7BFF, 0xEF7BDEF7, 0x7BDEF7DB, 0xDEF7BDEF, 0x0000000D, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xBDEFA000, 0xEF7BDEF7, 0x3FDF7BBD, 0x29582580, 0xDC22B8C2,
    0x6B2E4221, 0xFDDF81DC, 0x7EBEFB01, 0xA60003F7, 0xFA5FE423, 0xB0CB0FFB, 0xF30FEE20,
    0xB8D8F04E, 0x3C0C301E, 0x60F6C031, 0xC193C03C, 0x7BDDF830, 0xDBBDEF23, 0x86AA3DBA,
    0xEAA15551, 0xEE57EFF4, 0xF11BF7EF, 0x830C4DFB, 0x067807C8, 0x788C1B1E, 0xEEFC0DB0,
    0xCBBDEF36, 0x151EDEEF, 0x5544AAAA, 0xFC65FE9D, 0xFD57BF7E, 0x48C9BF7E, 0x14307F2C,
    0xFE3C0AFE, 0x16B80618, 0x6FC0049E, 0xAFFBE401, 0xB3C137F7, 0xFEF508E7, 0xE758BF10,
    0x33567779, 0xCFC63463, 0x5607EFE4, 0xE20B893C, 0x03DFD2FC, 0x05DC8CC0, 0xBF1CFF10,
    0xE304ADFA, 0xFFD196FF, 0xABF9805F, 0x01FD4667, 0x318EEFFE, 0xB904FF7D, 0x080B2B6C,
    0x7F280F94, 0x7C2F18BF, 0xC5FCA623, 0x79DF3FFC, 0x3D9E0BE2, 0xBB58C623, 0xEF5DDF20,
    0x400013BF, 0x006FCFFF, 0x9AF41B79, 0x7827F9F3, 0xE39885E3, 0xA868FFD7, 0x7E2A037A,
    0x5CE8288C, 0x82322520, 0x0000FC67, 0x4A4098F4, 0x0D998464, 0x14463F28, 0x3588055D,
    0xD68FFD7E, 0xFE77F2D1, 0x9F39EE8D, 0x119F319D, 0x7D7359FB, 0x4BF3FF58, 0xEFC66D1D,
    0x00CF3DFD, 0x7B699CE4, 0x37807EB8, 0x0298199A, 0x01833518, 0x32346E00, 0x8CF01D30,
    0x1570F286, 0xE6F09CE8, 0x679EFDEF, 0x7106CCC0, 0x07D6B59F, 0x4BE73EE6, 0xCF9BDF00,
    0x9E027678, 0x5FEFF627, 0x256D80D1, 0x078402C7, 0xC67E0269, 0x18039F92, 0xFB3BBF53,
    0x1CD37801, 0x763005BF, 0xFF3C0262, 0x4F22FCF1, 0x7E317B58, 0x8CFD5FD1, 0xDE5C6FCF,
    0xEAD3C5A8, 0x3658FC37, 0x80D4A9AC, 0x46C1DE03, 0xBC190159, 0x3FE22FC5, 0x1199DCC4,
    0x8C5F94DF, 0x631BCF7D, 0xDA9B117F, 0xDBEA2333, 0xF9FAFF51, 0x9BA606DF, 0x3AC0F5C6,
    0xC4CEF189, 0x85E398D5, 0x3E544C5F, 0xE50FE381, 0x29818641, 0x05840521, 0xB010C161,
    0x50186424, 0x350D8E0A, 0xC1F5E12A, 0xF5C06633, 0x8E6778C2, 0x4ECC613B, 0xACC42F68,
    0xD6434F82, 0x307DB018, 0x10323C14, 0x10586121, 0x1080D212, 0x0C941E08, 0x7E503DFC,
    0x3E06A318, 0xD0AAB117, 0x09D98C5E, 0x02202FB8, 0x8EE315BE, 0x77D3C66F, 0x71D9FBBC,
    0xF7FA157E, 0x7F8F5989, 0x4FBDF8E1, 0xAAC6F7E3, 0x0FBBF01F, 0x00000000, 0xF7800000,
    0x77CB7BDE, 0x0003BDEF, 0x5BDEF7BC, 0x1DEF7BBE, 0x00000000, 0xBBF00000, 0x8C5BF01F,
    0xFF3CF3FF, 0xEF7B8E5F, 0x7E01B7BD, 0xB38007F7, 0x4A0FC461, 0x62062FC1, 0xAE1B282C,
    0x88C0AA82, 0x95053F0D, 0x960A3103, 0x5503DB0D, 0x7B61B150, 0x6B0132A0, 0xF02BF39F,
    0x7EB27CEB, 0x7F71AE8D, 0xC4AB17FB, 0x6D6A8274, 0x319848C5, 0x51E02B72, 0x09C201D3,
    0x04314803, 0x218000C0, 0x40184600, 0xA601C78A, 0xD5200D73, 0x46330952, 0x6A9274C6,
    0xFF635BCD, 0xE1562FF6, 0x7D64F9D7, 0x20B7980D, 0x09FE207E, 0x9DAC07B9, 0x35F6A92B,
    0x8C0FBCD6, 0x00000037, 0x00000000, 0x00000000, 0xECE7DDF2, 0x99ECF015, 0xC93BD999,
    0xF7B3AC5F, 0xA2F8791E, 0x518FF91A, 0xC7883722, 0x0017FEF0, 0x0018F100, 0xB005917E,
    0x6AC02F1E, 0xBD6E805D, 0x2EF2DF00, 0xBF13F620, 0xE47FC409, 0xC8DF00BF, 0xE2AB003B,
    0xF62BC024, 0x7BDEF7BD, 0x8800047B, 0x57FF9FFE, 0xE91AEE30, 0x3C4E35F9, 0xB17FFF67,
    0x43F3331E, 0x80F1874D, 0xC1BB9963, 0xF7C600F6, 0xBBCC0FE4, 0x4413B19F, 0x04FF188D,
    0x18EFB7EB, 0x91FE2017, 0x06CA2013, 0x4FFBE290, 0x81F94860, 0xC637FF2C, 0x353D718B,
    0x6FCF317E, 0x678FACEF, 0x7D64F1CF, 0x2DF6003F, 0x18003D00, 0x0237000B, 0x00778F40,
    0x8016358C, 0x9BC00713, 0x1CD4026F, 0x38DE200B, 0x26F97E00, 0x058CF3C0, 0xDEF71AE0,
    0x7EEFD37B, 0xAAAAAAFF, 0xEBFEA30A, 0x7EFDFBF7, 0xBFD0DFBF, 0x00000005, 0x7BDCE000,
    0x92F7BDEF, 0xEE32C001, 0xCBDEF7BD, 0xFE18015F, 0x200B1E00, 0xFE73EF42, 0xF13C3C1D,
    0x443DAE64, 0xDBFFEFE6, 0xF9E3CAFF, 0x45F90BFF, 0x3698802E, 0x400A6380, 0xE069FF88,
    0xC80F29EF, 0x7E45FFF2, 0x54F1B8C1, 0xBDDCF17E, 0xED47D677, 0xFDEB3239, 0xCFFDF501,
    0xBFD04DFF, 0x77319E27, 0xEDF8AE61, 0xA1F199DF, 0x8E6F0BFD, 0xC033C4F2, 0x0BAE5FFF,
    0xFDE334C0, 0x7A437F9F, 0xEB1C8CEE, 0xFFCE849F, 0x80F2B7DE, 0x8C6F127F, 0xF2C80AC2,
    0x86900E17, 0x186005C7, 0xA9FBFA40, 0x8C78F901, 0xF1C419C7, 0xDEE55F24, 0x07EA3BBF,
    0xC9F2AFBF, 0xBDF617F7, 0xEF7BDEF7, 0xD8003FBD, 0xEF7BDEF7, 0xC80BC57D, 0xC4E025F6,
    0xD11CC02C, 0x801D6880, 0x3E013919, 0x58CCC01F, 0x200B7F00, 0x64A01FCA, 0xE0056C01,
    0x0F0C0171, 0x21009240, 0x9F7A2002, 0x7B909BF3, 0x3FBD6665, 0xDEEE39BC, 0x3965AA3B,
    0x905368C1, 0x0A1908F0, 0xFBD78A4A, 0xD66AF988, 0xCDE7BBE7, 0x8C9E43DF, 0xEC4FF21A,
    0xFFB7E79A, 0xA8E9FCCF, 0x3D45F917, 0xBA62038F, 0x86238029, 0x7C788E04, 0x31BF63C0,
    0x997E20BE, 0xDCF1FE33, 0x65E56FBD, 0xD99995DC, 0xFFF444FF, 0x6301BFFC, 0xECF191AF,
    0xEF639385, 0x2B1FB3BD, 0xE38C9FE3, 0x63019B67, 0x03F8F3C4, 0xC8009FD3, 0xCA298034,
    0xBD618C0F, 0x0F20BE31, 0xEE78BE2B, 0x6A35FF6F, 0x3FE8F1CF, 0xB3FFBE49, 0x5802E397,
    0x305FFE6A, 0xF5C9F2A3, 0xA368E9E0, 0xFEFFFBE3, 0xF6B06F9F, 0xF17731E3, 0x77E03FBB,
    0xFC00007F, 0xDDF80FEE, 0x0FDDF80F, 0xFDDF8000, 0xFC62DF80, 0xFFF9E79F, 0x0DF18012,
    0x03F7B980, 0xD4779F64, 0xFF7EA06F, 0x257FFD65, 0xF957FFD6, 0x67744E9E, 0x4013FEFD,
    0x7CEE802C, 0xAC409EF6, 0x7BC6AFFF, 0xFDFA813A, 0x15FFF597, 0x51DE7D90, 0xF73001BF,
    0x7BDEF1EF, 0xDEF7BDEF, 0x7800077B, 0xDEF7BDEF, 0x03BDEF7B, 0xF7800000, 0xBDEF7BDE,
    0x003BDEF7, 0x2000AF40, 0xA0037EFA, 0x4F7B3C7B, 0xABFFD620, 0xE04E9EF1, 0xF5A7FDF9,
    0xF7C80AFF, 0x01BF3E76, 0xEF900088, 0x037EB379, 0xEB4FFBF5, 0xFEB12BFF, 0xE9EF1ABF,
    0xF678F744, 0xFDF4409E, 0xFEF90006, 0x781DD9CF, 0xB9991CF6, 0x78BF90EE, 0xE2BBDEEE,
    0x2FC8BF1F, 0xCA632FC8, 0xDE72C40F, 0x01C202FF, 0xC01E2A78, 0xFD0274FC, 0x5730277A,
    0x75A026FC, 0x02623201, 0xDC600184, 0x7800003F, 0x00000DEE, 0xFCC40000, 0xFD9CE7FE,
    0xEF10003E, 0x4F919F79, 0x13FEFCE6, 0xFD99DD40, 0xCFB7FB3F, 0x00FDE39E, 0x4AFFE9F5,
    0x9E3DDE30, 0x5BE7E40F, 0x67AEE400, 0x115F1BC2, 0xBCAFCFBD, 0x51A2F977, 0x57B18B35,
    0xC7CDFA8E, 0x5C3C6F10, 0xF39FF23F, 0x7A754FFC, 0x95515C78, 0xC4BCF1BC, 0x98C83227,
    0xF1519FCA, 0x402C7883, 0x8054F87A, 0x239621B0, 0x7A606C78, 0x12900650, 0x638188C4,
    0x6010C10B, 0xCA33D44A, 0xC86CB0F1, 0xE378C3D7, 0xAB1CFE52, 0xCC461DA8, 0xB320F67F,
    0xFDF8CD52, 0x9E55BFFF, 0xB4277AF3, 0x231DF797, 0xE447B7BE, 0x553C13DC, 0xFD9F732F,
    0xDFFCFB18, 0xBE49CE34, 0x00097F31, 0xE24BEFEB, 0xCDFFF55F, 0x7BFF4604, 0xF7E20BFC,
    0xF7FF7A8D, 0xEEFFF7BF, 0x003FFA35, 0x0CFDDECF, 0x677D6A99, 0xB7B9E001, 0x04C38001,
    0x31595100, 0x7F5A6001, 0xEE7C001F, 0x23000632, 0x007CA2A3, 0x2DFC2A7C, 0x8ACB9600,
    0xE2330098, 0xF007CA21, 0x031AE0B7, 0x2787F2C8, 0xEFC7C0BC, 0xA86F7BDE, 0x31000F00,
    0xF7BED2A1, 0xF0EF7BDE, 0xE00631C1, 0x0F944593, 0x8AC38660, 0x0A960058, 0x3F000A9F,
    0x7BDEF331, 0xBDFFBDEF, 0xFF472000, 0xEF7BEC13, 0x03CCBF3D, 0x0631D440, 0x007A4600,
    0xCC800180, 0xD7510028, 0xBDEFB01B, 0x17B2FCF7, 0xD826F800, 0xF77BDEF7, 0x300177CA,
    0x0003797A, 0x6000489F, 0x0F11E001, 0x15AF5C80, 0x7BDEF7D8, 0x02F51DFF, 0x1FBE7C88,
    0xE7FEFE60, 0xEA0056FC, 0xEAC9E5BC, 0x62FD605B, 0x9F6FFF9E, 0xF181BE27, 0x7C40DF7A,
    0x9E370715, 0x34E57809, 0x9F201786, 0x000C4A1A, 0x3C71EFDF, 0x000A4000, 0x90000420,
    0x24700016, 0x00C4B000, 0x0C4B7F30, 0x36AF802F, 0x358099ED, 0x1DBCB534, 0x81ADB788,
    0xFFE758EE, 0x374667DB, 0x78D57B58, 0x10BDAC72, 0xEF7BDEF7, 0x002DFB39, 0xFBF98C44,
    0xF7BDDF80, 0x3F3CBDDE, 0xD4FE8C00, 0xFA678004, 0x1C9F8001, 0x00A19000, 0x0000E3C0,
    0x00000006, 0x48000658, 0x78460017, 0x0395E000, 0x01A3CF00, 0x79E7EF18, 0xBDEF77E0,
    0x07CF4F77, 0x3FB98C40, 0x7BDEF7B8, 0xDEF7BDEF, 0xBE00003F, 0xF7BDEF7B, 0x0007FBDE,
    0x00000000, 0x00000000, 0x7BDEF77C, 0x0077BDEF, 0xF7BBE000, 0xBDEF7BDE, 0x00000003,
    0x00000000, 0xDDF00000, 0xF7BDEF7B, 0x80005BDE, 0xF7BDEF73, 0x0DEF7BDE, 0xEF7BC000,
    0x7BDEF7BD, 0x00000003, 0x00000000, 0xF7BDEF00, 0x00377BDE, 0x7BDEF780, 0x001BBDEF,
    0x00000000, 0x00000000, 0x7A800000, 0xDFFF39F7, 0x9BFD8C04, 0xFF7A8F99, 0xB51FF505,
    0xFFFDFECF, 0xF8837E4F, 0xC80DF9E2, 0x474389EF, 0xC8BF007E, 0xC400FCB2, 0x00584F2A,
    0xCBFABFBC, 0x00210000, 0xBDDF0000, 0x0FFBDEF7, 0x65FC0001, 0x7BDEEF80, 0x00058A5F,
    0x0003F1E2, 0x401F917E, 0x78FF10FE, 0x3BD903F6, 0x1AEC65F3, 0xFFBFD9DF, 0x90BB997F,
    0x1F32BDBF, 0xF70DFBD5, 0x2F75003E, 0x00000000, 0x00000000, 0xF8000000, 0xDEF7BDEE,
    0x00007F7B, 0xEF7BDDF0, 0x00FEF7BD, 0x00000000, 0x00000000, 0x00000000, 0xDDF00000,
    0x0000000F, 0x00000000, 0x000036FB, 0x00000000, 0x00000000, 0x00000000, 0x701BDC80,
    0x31082463, 0x7A522144, 0xB27E43BC, 0xFFBEE474, 0x33BC978A, 0x792EE723, 0xF73C00EF,
    0x7CF000FE, 0xFD4007EA, 0xFA800FD4, 0xD4007EA2, 0x800FCF17, 0x01F3C5F1, 0x7CF1FE30,
    0xC47F8C00, 0x87FCC007, 0x317E0068, 0x62005597, 0x017C3DBE, 0x889CBCF0, 0xB645E00F,
    0x8F98006A, 0x4BF00055, 0x5E20006F, 0x2D4001F9, 0x87A000B5, 0x00EF791E, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xEF7BEC00, 0x005EF7BD,
    0x0DBDEF20, 0xE07BDE60, 0x2207F001, 0x280A2007, 0xE052C03F, 0x7F7F007A, 0x880732B0,
    0x7E3C01AA, 0x7E03FA60, 0x058BF01E, 0x39039918, 0xFC78009E, 0x7E0038F0, 0x01E2FC1E,
    0x1C873230, 0xCFC78005, 0xE7E002E3, 0x00078BF1, 0x058E7323, 0x0FED3E00, 0x05111E00,
    0x80587200, 0x1805F7B8, 0x001662F7, 0xC80006F0, 0x16658006, 0x02F2BE00, 0x02F917C0,
    0x002CDA20, 0xC002F2CC, 0x2002F917, 0xCC002CDA, 0x17C002F2, 0xDA2002F9, 0x966001FC,
    0x005F0005, 0x60006880, 0xFF7E6016, 0x40277673, 0x93C7DFFD, 0x302FFEB9, 0xFFFCF97F,
    0x98DE7DBF, 0x2FEB461B, 0x1F1CEE61, 0xC8059E3A, 0x794653D7, 0x4AB95401, 0x1EFE000C,
    0x1E000F7F, 0x20004231, 0x84000058, 0xFEB04000, 0x311E0026, 0xFE000E4A, 0x8034A31E,
    0x546F2E51, 0x22A8F203, 0x84BEB17F, 0xE0F8E6E7, 0xFFF3E7F9, 0xF2F9F6FF, 0xFF1807F9,
    0xAE64F1F7, 0xDEE205FD, 0xE7BDEF7B, 0x88005BFF, 0xFC27FEAC, 0x9EF7BDEE, 0x1000F22F,
    0x0018CFCF, 0xC0014278, 0x5D200170, 0x400A2C00, 0xFC0D57AE, 0xFEF7BDEE, 0x2007C63B,
    0xC07779F2, 0xCF7BDEEF, 0x00009BFF, 0x00000000, 0x00000000, 0xDFCC0000, 0x09DD9CFF,
    0x9E5BCF30, 0x80BFEB91, 0xFF9E637E, 0xFA3B7FEF, 0xBDF2CF07, 0xA8FF5881, 0xC01EB685,
    0xE32A9D68, 0xCFD33005, 0x3C0013DF, 0xF00123CA, 0x20004297, 0x42000048, 0xC7C82000,
    0xB4BF8003, 0x94A0008D, 0xADF83527, 0x8E3F0CF0, 0x77D59139, 0xB464CCFD, 0x67B90DF7,
    0xEB0BD474, 0x7FFCF317, 0x82BEA177, 0x32796F3A, 0xCF97FFD7, 0xF7F301EF, 0xD677673F,
    0x7B8F1DFF, 0xDEF7BDEF, 0xC02DFFF3, 0x47AAAAA8, 0xFF403FF5, 0xEFDFBF7E, 0x1B22FFF7,
    0x05AF3C00, 0x00189400, 0xE0001160, 0xF8C004C8, 0xF77E0D1E, 0x7EEF7BDE, 0xA8C07BE2,
    0xE77EA4AA, 0xFBF7FA01, 0x0DA8DFFD, 0x6ACFE600, 0x563CF000, 0x785F8001, 0x64FC4001,
    0xCCA78003, 0xC46F0004, 0xAA72000B, 0x9CFBD189, 0xDE8137FF, 0xF3E4446B, 0xD2D607FE,
    0x97CF7BFF, 0xBD5E0FF9, 0xC6767892, 0xE201E114, 0xD00B0389, 0x37E515E7, 0xE2378003,
    0x900BBB3D, 0xFD6309F7, 0xF101EFEE, 0xF5266FDD, 0xDE7880FD, 0xFA8779FF, 0xCBDCC400,
    0x0099DF93, 0x3F88E61D, 0x26A7D600, 0xF18C4660, 0x8C157F78, 0x537CD5F7, 0x7BBDCEFD,
    0x7BBC4F46, 0xBD188C8D, 0x7BDEF317, 0xDEF7BDEF, 0x000FEF7B, 0xF7BDEF30, 0xBDEF71B6,
    0x000007F7, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x05BDC000, 0x0002F750, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x10808000,
    0x80486000, 0x807F2C94, 0x033D716D, 0x0CF2E518, 0xFAE495FF, 0x8AFF07AB, 0xEFFBDFFE,
    0xEFC41FA8, 0x3E44467B, 0xDDDF0FDF, 0x75BDC400, 0xCA60018C, 0xF003F4AA, 0x0078F1F3,
    0xE4F930C6, 0xC82A7C00, 0x039601F2, 0xC89E02C7, 0x07889E07, 0x5CB00F5C, 0x9F01F288,
    0xC0951582, 0x39F13118, 0x393F9F00, 0x515801E2, 0x4400B3E1, 0x001F1E59, 0x18E47FC7,
    0xEBD65400, 0x13CF8003, 0x161E0013, 0x7C06EFA0, 0xEF204EF7, 0x50046DCD, 0x5664A06C,
    0x50C54078, 0x063C56C0, 0x06237ED8, 0x06DB3658, 0xC83F29E5, 0x62079454, 0xCB056E64,
    0x40C44608, 0xB0231529, 0xD7079415, 0x3F2851E6, 0xB14A36D8, 0x4063225D, 0x41188C59,
    0xCC814A29, 0x3230A54C, 0x6581B6D2, 0xCA507ED9, 0xAFEB80A3, 0x63B6C062, 0x4AA50264,
    0x051EB281, 0x836DCC88, 0x01B7F918, 0xCA02A62A, 0x645B0052, 0x008C5B02, 0xA1500A28,
    0x049EEF80, 0x5F97DFF8, 0x72F80BC6, 0x16ABC4BC, 0xA81C4F98, 0xEB4607A5, 0x9C1C3D04,
    0x46E02678, 0x0FCCBEBE, 0xFBE6BC60, 0x956001C4, 0x78001DE9, 0x3F0005C9, 0x99E00272,
    0xFC80274A, 0x01C65F99, 0x78DF2270, 0x88F4068D, 0x40AB2D43, 0x0F40EF2D, 0xB53E206F,
    0xF0FC89C0, 0xBE407E45, 0x0DE55A6A, 0x7D9D2AC0, 0xEF78016F, 0x805E1EC9, 0xC8DD3A9A,
    0x267AF017, 0xBC0B35E3, 0xC3583F99, 0x009D350B, 0x6BC5F227, 0x1CDB200D, 0x300D1CDE,
    0x0E331DCB, 0xBF8C5F00, 0x27E2004E, 0x0F00099E, 0x00000017, 0x00000000, 0x00000000,
    0x00000000, 0xF7BDEEB0, 0xBDEF7BDE, 0x580001F7, 0xEF7BDEF7, 0x02C867BD, 0x02711BE0,
    0x00DF9740, 0x01EB2CF0, 0x00D53F90, 0x800FC89C, 0x0009C46F, 0x4003D1EB, 0xC40139B5,
    0xFC00BC67, 0xBC00FE23, 0xE60017C3, 0xB46005D4, 0x30A800B9, 0xDEF7BDEF, 0x017DEF7B,
    0xBDEF7500, 0xC61D544D, 0x000137EF, 0x00000000, 0x00000000, 0x80000000, 0xA24DFBF1,
    0xA83FECEA, 0xA81ED84C, 0xB01EA0D8, 0x436581E3, 0x0395028C, 0x6C460A7E, 0x15701550,
    0x16310D94, 0x5280C5F8, 0xEEB7E230, 0x2AB2B7BD, 0x01BF7E78, 0x00000000, 0x00000000,
    0x00000000, 0xDFBF3C00, 0x1802AB20, 0x95E00FF7, 0xBD2A200F, 0x357E3780, 0x1D633006,
    0xF151982F, 0x39F013E4, 0x918C5E3C, 0xF5E267C5, 0x78A62B21, 0xCF3E384C, 0x7BDEF7BD,
    0xDEF7BDEF, 0xB5AD739B, 0xAD6B5AD6, 0xF31AD6B5, 0xB35B32DE, 0xDE3078D6, 0x6FFF39FF,
    0xC9E9EF40, 0x58C9ECF1, 0xFB7FFDF1, 0xAE4F1F96, 0xCC32D107, 0x20120BFF, 0xC19BBE6B,
    0xF7FFCEF8, 0xC7ECF04E, 0x437FDFD3, 0x9EB7CE7B, 0x780E901C, 0x0D581C20, 0x7DBF39ED,
    0xB9A619FA, 0xFB513C6B, 0x6EE7FF2B, 0x00000000, 0x88000000, 0x077F9FFE, 0x8CF15EC4,
    0x7E3913B5, 0x0F2B77FB, 0xC5F88AFC, 0x2C07C878, 0x0F5C059B, 0x61800180, 0xC92B80B1,
    0x71FCB101, 0x2A8FF106, 0x3BBFDECA, 0x33D887C6, 0x101DEC9E, 0x6FFF9F6B, 0x9F3BB182,
    0xC9C377A8, 0x3FF6FEE7, 0x7C72B347, 0x6C99BE41, 0x8FFF503F, 0x16900069, 0x90016100,
    0xF8767006, 0x222781F9, 0xC62F1CCC, 0x989C47CF, 0x3C77B7E7, 0x7CAEE30B, 0x000FBEB2,
    0x00006F71, 0x00000000, 0x9FFDF200, 0x4F6780BD, 0xF21FF44F, 0xFBFFEB17, 0x517E03BF,
    0x1CA0B98D, 0x205A41F0, 0x83006083, 0x69030060, 0x0E3C0881, 0xBD46F098, 0x7F885E78,
    0x7FFBF3CC, 0x1AEE3019, 0x6B01B58F, 0x1817B39F, 0xECCCCEFF, 0xE7C9C41D, 0xF19F7DEE,
    0x82F8E667, 0x9F9472F8, 0x86FE501F, 0xFBF7EFDF, 0x31257EFD, 0xD2AAAAAA, 0x7BDEEFC2,
    0x4B77BDEF, 0x07C78003, 0x1BCBFEFC, 0xE5740BF9, 0x7751FE23, 0x2F8ACEFF, 0x9F33B719,
    0xB981FB5C, 0xDE7979CF, 0x98E1CF91, 0x3658B7FB, 0xF8777E00, 0x30A8DFEE, 0x7A5FE96A,
    0x00001F7F, 0x00000000, 0x00000000, 0x7B3FFBE4, 0xED41DDF9, 0xBDE89E39, 0xF3AC5F10,
    0xF039BFFB, 0x2F98D3C6, 0x88980E3C, 0x064880F4, 0x00830401, 0x900F0882, 0xF0980E58,
    0x69E1678B, 0xBF3E9FC8, 0x6780F7FF, 0xFE89E33F, 0xFFDF1811, 0xDBE185EC, 0xF864780F,
    0xF68C4E8F, 0xEFFC8D63, 0x9CE77FDF, 0xE3C55FD8, 0x773CBDF9, 0x00000003, 0x80000000,
    0x1BFFCFB5, 0x19E3BB10, 0xEC642ECF, 0x8694EFFF, 0x208DA077, 0x0183060A, 0x00002084,
    0x00000000, 0x00000000, 0xCF03773C, 0x06EE78DD, 0x00000000, 0x0003773C, 0x3C01BB9E,
    0x00000377, 0x00000000, 0x60000000, 0x7B7D2FE1, 0x6F995BF9, 0x0003773D, 0x00000000,
    0x7BCC0000, 0x7D7CC01F, 0xF8DF300F, 0xE379E01E, 0xF3E7807B, 0x011F9015, 0x02FC7888,
    0xE237FF88, 0xEAB87203, 0x2FCB1801, 0x03E33A00, 0x5009AAF0, 0x3FBCC753, 0x00000000,
    0xF73C0000, 0x6FF3FFD5, 0x3D9FFBF2, 0x6457FC61, 0x62BB5DAE, 0xF1E1778C, 0xFC67FBDF,
    0xF2FFECEA, 0x90D49BC2, 0x44915E1F, 0x211054C1, 0x00086018, 0x00000002, 0x00000000,
    0x00000000, 0x00000000, 0xD6BEE780, 0x301BE73E, 0xD9E3C776, 0xFFF62785, 0xEF0BCA77,
    0x0A20CB40, 0x80018306, 0x00000000, 0x00000000, 0xE8800000, 0xA05ECE7D, 0x4727CAEE,
    0x98BF24EF, 0x8D4FB7E7, 0x45EA2FC3, 0xCB4C72FC, 0x08FF1E01, 0x839BF80B, 0x18318401,
    0x16111840, 0x072D37F0, 0xA2FDFC78, 0x732FC45E, 0xF9E62FCA, 0xA2E353ED, 0xEB27CAEE,
    0xAFB9E9DD, 0x01DD9FFE, 0xAE4F2F63, 0xF7F2789D, 0x03CADDFF, 0x317E22BF, 0xD301F21E,
    0x64C70165, 0x80304300, 0x2B80B261, 0xFCB101C9, 0x45F10671, 0xDFEF6915, 0xF621F1AD,
    0x1DDF278C, 0xECFFEF10, 0x00000009, 0xE4000000, 0xFA7B3FFB, 0x73D9E0DF, 0x90BEF13C,
    0xF7E758BF, 0x45F899EF, 0x7284D635, 0x02D20FC0, 0x41800419, 0x9A40C010, 0x178F0220,
    0xBC73784C, 0x93885E78, 0x5FFEFCF3, 0x78D7B182, 0xFE881FF4, 0x0002FF9F, 0x00000000,
    0xD76E7800, 0x5F18BB3E, 0xFAA8B93C, 0x0340CEFF, 0x00024091, 0x00000000, 0xF7A20000,
    0xB103BB39, 0xDAE66657, 0xF673E749, 0xE3CD95BE, 0xA9833A20, 0xE3FFE30B, 0xBF3BF18D,
    0x4FFE3095, 0x0F7FF544, 0xD6FCEF8C, 0xAA01FE30, 0x7E588EF7, 0x40F180FF, 0x94A7817E,
    0xDFEEEB37, 0xF729D3FF, 0xBDCC7CCA, 0x35F80D60, 0xE8000078, 0xA79DF61B, 0x2FE63518,
    0x0003DFDC, 0x00000000, 0xF2C26180, 0x1EFC3DFB, 0x81FDE775, 0x000037B8, 0x00000000,
    0x58000000, 0x11200600, 0x44F0FC12, 0xBC44E634, 0x7FF7FFD6, 0x6AFAC0D7, 0xB17BF33C,
    0x3DC606EE, 0x67E091A6, 0xE980F289, 0x22A0F8E3, 0xC0E44F07, 0xA1F4C1F1, 0xCC59F84C,
    0xA23180A8, 0xF3E01DFC, 0x58078A8F, 0x8805A6B1, 0x7007D78A, 0x950018C4, 0x1777E07E,
    0xE60B7B8C, 0xC50DB6FD, 0x1E3EED86, 0xCA9414D8, 0xC4678511, 0xB2854540, 0xFC52A8A9,
    0xB629F9FD, 0xC529B7FD, 0xAA2A11C8, 0x2891CC94, 0xC463C62B, 0xFE0FC788, 0xDA94D976,
    0x2B6A2A0A, 0x40395BB6, 0xF2C18AC5, 0x0A2D8078, 0xB1606C91, 0xCF2144A1, 0xF7FE217D,
    0xFC0E6D95, 0xC7CCBC72, 0xE0713E61, 0x3AD9D997, 0xC4F35E21, 0x319A8133, 0x33F803F2,
    0x04D4BC01, 0x9D3E39BC, 0x9E7199E0, 0xCFC40E27, 0x1A317E9B, 0xFC458C5F, 0x1C5661AC,
    0xBCC71E78, 0x89EE207F, 0xAA605919, 0x73F01CB0, 0x918C14F8, 0xF078C8C5, 0xE0E7C0F3,
    0xA154C1F1, 0x59442472, 0xF8E03EFE, 0x2780B15B, 0xC00A89EA, 0x27C00ED2, 0xF0C600B3,
    0x001E1001, 0x90812B23, 0xFDF405D7, 0x3B00A78F, 0xF7007E63, 0xBDEF7BDE, 0xAAAAB6F7,
    0xBF1C1AAA, 0xFBF7EFDF, 0x8099E17D, 0x7807C72F, 0x3580FF2B, 0xB4F004E3, 0x4FC600DF,
    0x63FE403F, 0x7A89C02E, 0x1F91BF01, 0xFBF99660, 0xDFBF7EFD, 0x53D417EF, 0x40F55555,
    0xF8C3F3ED, 0x9E2FC046, 0x0270C3F3, 0x01605800, 0x24644042, 0xFF50B3F2, 0x85C0BD67,
    0x20BD3FFA, 0x8CC82F5F, 0x02C02104, 0x084000B0, 0x9E0277F0, 0x7E43F3A8, 0x00777C23,
    0x00000000, 0x30000000, 0xE441BFCF, 0x9AFBCC6A, 0x04200A60, 0x06180000, 0xF1BC0A58,
    0xDF9F182B, 0xC6FC800B, 0x6F17C5EF, 0x02102941, 0x0000030C, 0x31258084, 0xEC81FB6F,
    0xCFFDF189, 0xFF9E015E, 0x76FA3193, 0x3CDFFFAA, 0xFEB157F7, 0x37DE97F7, 0x193F6FD4,
    0x9DEEBD63, 0xA09DEE00, 0x840C110F, 0x0CB084B4, 0x06208C21, 0xE6000017, 0x001FC007,
    0x515006CF, 0x78267600, 0x08CCE77E, 0x19957DF8, 0xCADE0EE3, 0x38A8BFBD, 0xBFC33A72,
    0xC659197E, 0x3BFED9E0, 0x1627878F, 0x4056E0A4, 0xE3836A0A, 0xFDF0F151, 0x3FC632E7,
    0x313E5453, 0x17C47A9D, 0xF995BC35, 0xC3E35BEC, 0xBD9909EF, 0x67FEA203, 0x8036A02F,
    0x99FE0052, 0xF0003C00, 0xBFF9CEFC, 0x8D5F7C09, 0xE80F731C, 0x7DFF7E27, 0xD4C3F89E,
    0x92632F85, 0x0233C0A1, 0xC8BDE804, 0xB1E000F0, 0x9E5BAC01, 0xB207EF7B, 0x07F5518A,
    0xDE17EFCF, 0x0C016FDF, 0x800A9000, 0xD1000CC7, 0xFF9005E3, 0x5776738C, 0x230D47A8,
    0xDCEFD733, 0x9DF59B5F, 0x64F7CFBD, 0x01F98F8C, 0xF3F657E2, 0xFFF9DFCD, 0x5F0D7F9E,
    0xD6456F3E, 0xC8F16A37, 0x070E9EEF, 0x5623CE33, 0x80E4643B, 0x640001E9, 0xC1E980E4,
    0xD588F38C, 0xDDF91E0E, 0xE5F0E1D3, 0x7D6456F3, 0x7CFD96A3, 0xBFFE77F3, 0xEFC35FE7,
    0xB738807E, 0x6F0067B5, 0x83531B44, 0x551D1A98, 0xC44E46F0, 0x41A988D4, 0x18E878C7,
    0x4E5AD00F, 0xE7333017, 0xDA0033CF, 0xEE306A6F, 0x7FE49FBD, 0xAAAA25EF, 0x22AAAA8A,
    0xEFDFBF7F, 0xFDFBF7E5, 0xEF7B8C7E, 0xBDEF73FD, 0x2AAAA897, 0xFC8AAAAA, 0x97BF7EFD,
    0xFBF7EFDF, 0x00000001, 0x1DDF0000, 0xDF000000, 0xDDF0001D, 0x00000001, 0x37E73FFD,
    0xC8D7FC41, 0x3783F7AC, 0xE7FBDDC7, 0xA0DE5079, 0x7F2C4C9E, 0xD70BFEF8, 0xEA6A005A,
    0x8E7A025F, 0x5AC0BDA8, 0xFE8AEF73, 0xF95E7C0F, 0x64F732FB, 0xBCBB3C08, 0xF107E3C3,
    0xE78E9F2B, 0xE30C7097, 0xBF8DDA8B, 0x589F753F, 0x2C6B5AFF, 0xFE65F7C4, 0xFCF037BA,
    0xFBC01B27, 0x77E22D45, 0x88FD79E0, 0x30481E27, 0x42AF1275, 0xBEF7FE57, 0xEBF0BC63,
    0xC3BD9991, 0x36EF97B8, 0xE7DEC800, 0x4007BFFC, 0xD6B5FF7C, 0x3FFBEB5C, 0xE7D5D8C0,
    0xFFF7F6F7, 0x1C42F7C5, 0xF6A015FF, 0x71BF0B9A, 0xCFFDF186, 0xC3D3F45E, 0xF9E1DE78,
    0xEF57EFAF, 0x2FD78BE6, 0xAFFCBF16, 0xBC18BFA7, 0xC4F0F515, 0x541FF50B, 0x0B48393C,
    0x00004A40, 0xB02D20E4, 0xE1EB2927, 0x247A1789, 0x162FCF15, 0xFAF7FCBF, 0x157C59AD,
    0xE78779E3, 0xBEBBE6BF, 0xFCBC6F97, 0x77C619C6, 0xA7E87ECE, 0x57FD7107, 0x4D6BDA80,
    0xFDF57FC8, 0x7FFDFDBD, 0xF7C06BF1, 0xB5CD6B9F, 0x6B017FBE, 0xDE4BF39F, 0x2E7CEF9E,
    0xCF56F9E3, 0xDF3BDF4C, 0xFB7D34DF, 0x9EA1F27D, 0x1077EEE7, 0x5563C4FE, 0xAD3BDDBC,
    0xCF3E72F8, 0x909F6036, 0xBC6B07E7, 0xE8C68DE1, 0x81CD565C, 0x68DE35E3, 0x46E559BC,
    0x735D3907, 0xD74E44C4, 0xCDE1311C, 0xE03A372A, 0x868DE368, 0x355A63D1, 0xE1D1AC07,
    0x7BDEF68D, 0xDEF7BDEF, 0x7800077B, 0xDEF7BDEF, 0x0000EF7B, 0x00000000, 0x6FE80000,
    0xBDEF7B8C, 0xF64001B7, 0x3DFFE73E, 0xAFFBE200, 0xDF5AE6B5, 0xAEC601FF, 0xBFB7BF3E,
    0x17BE2FFF, 0x00AFF8E2, 0xF85CD7B5, 0xF77E338D, 0xFD27B3DE, 0x779E30F4, 0xEBD7DF90,
    0xFAF17C9D, 0xCF3C42C5, 0x6F1FC5FC, 0x06003D45, 0x00393C54, 0x948FF2B1, 0xBCF7B8C0,
    0x2039026B, 0x90D5CEBF, 0x67881EB2, 0xC541F5DD, 0x64058BF3, 0xC55F133F, 0xCC01DE78,
    0x978DF4EA, 0xB7E338DF, 0x9FB277E1, 0x5FF5C41E, 0x35AF6A01, 0xF7D5FF21, 0xFFF7F6F7,
    0xDF01AFC5, 0xD735AE7F, 0xCF05FEFA, 0x7BDEF7BD, 0xDEF7BDEF, 0xB5AD739B, 0xAD6B5AD6,
    0xBC1AD6B5, 0xD57E34E7, 0xEEA35F3D, 0x19CCDF9C, 0x92339949, 0x39DD4732, 0xEABE99BF,
    0xF7902F9E, 0x0000000F, 0xC0000000, 0xE5FEF7BD, 0x00FEF7BD, 0xFDEF7B80, 0xFDEF7BCB,
    0x00000001, 0xC8000000, 0xBDEE07FB, 0xEF7BDEF7, 0x20003FBD, 0x2FF9FFDE, 0xA379F3FE,
    0x75EAC47B, 0x4B37F8D4, 0x178DFCC1, 0x43FCFBDF, 0x217FABFE, 0x9AD63E6E, 0xFEEEAA6F,
    0x5D9CEF89, 0xF8EDEBFC, 0xF35CC665, 0xF96FF953, 0xE7FCC28B, 0xF5BF512F, 0xAFB5644D,
    0xBFAD6FCE, 0xABEF5EAA, 0xB1FDFF9B, 0x9BC4FC72, 0xE01BDC7F, 0x00002777, 0x00000000,
    0x06000000, 0x504C0200, 0x22DE0990, 0x7B7E300E, 0x99C031DF, 0x81FBF991, 0xD767FF7C,
    0x000013BA, 0x80000000, 0xDEE7FEFA, 0x4BBDEF7B, 0x800C9EFF, 0xFBDC4167, 0x001D7753,
    0x000000F0, 0x070001E0, 0x00133C00, 0x00055FBC, 0x0001DF9E, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x004EF710, 0x9C8C3FFE, 0xD7AB718B, 0xAFE4AB98,
    0xEC1F78DF, 0xF730F72D, 0xD1FDE70A, 0xC000000B, 0xD0BFE7DC, 0xC57E946F, 0x5FEFFF1C,
    0x70FC5473, 0x770890D4, 0x7E5B8448, 0xF8D62A38, 0xD0E6BBBF, 0x97E8AC6F, 0x05F719B3,
    0xE678DA3D, 0xF2AC7303, 0xF5C05F8B, 0xC1F1BC46, 0xB2B3F998, 0xE19E7C26, 0x8679F0D3,
    0xFCCC634F, 0xD7135959, 0x87C6F11B, 0xF8E95639, 0x31B47A05, 0x0DEC03E7, 0xDC813EC0,
    0x5F1E8003, 0x000AF730, 0xBCE156B5, 0x55F9003F, 0x8E002F43, 0xC7A0000F, 0x5A800017,
    0xF10000AB, 0xF800068D, 0x8D9C001C, 0x77C25FAE, 0xF5AD4007, 0xE2003F40, 0x05730D1B,
    0xD181CF80, 0x7EBA0135, 0x0F8FFC89, 0xE07CD6A0, 0x6F8801BA, 0xFE3230BC, 0x9F0BD977,
    0xF7EFC603, 0x87DE3DFB, 0x55025FAE, 0xEC49E955, 0x0FCF200D, 0xCE000F72, 0x0AF730F8,
    0x0378EF00, 0x7801FDE7, 0x02F41766, 0x005ABF90, 0x007C6700, 0x0378EF00, 0x55CCF000,
    0x55FC8000, 0x1C6CE003, 0xFF3ECF1F, 0xC77800DF, 0xFBCF9E17, 0x9E00FF3C, 0xFF1B8AB9,
    0x901E2BD5, 0x277C6ABF, 0xC701E278, 0xE8DF8807, 0x017C7780, 0x09BE7DD4, 0xAC055CCF,
    0xF207EE5F, 0x8ECC0D57, 0x7256B3DF, 0xDD16807C, 0x73BE25DD, 0x9F6003F6, 0x8EDEBFC0,
    0xF1DE006F, 0xCD731905, 0xB99E04CF, 0x98EFF90A, 0xFE4078EF, 0xF5F301AA, 0x600F8E03,
    0xD0BF5FDD, 0xFCF00BE3, 0x5A83CA1F, 0xBF1A80AB, 0xF11FB6B5, 0xBFC4068D, 0xC5DE37BE,
    0xBE3001DF, 0x1E93D9FF, 0x0EEF84BF, 0x03D6B500, 0xDF1000FD, 0x002B9868, 0x5D181CF8,
    0x2FD74013, 0x01F1FF91, 0xB81F35A8, 0x37C4006E, 0xFF19185E, 0x9F05ECBB, 0xF7EFC603,
    0x07DE3DFB, 0xAA04BF5D, 0xA093D2AA, 0x000001EF, 0x07BE8000, 0xF7500000, 0xC0024007,
    0x46F80367, 0x93DF804E, 0xC6BB0027, 0xE31E801D, 0x0753009F, 0x02C24DF8, 0xFD23EF51,
    0x67CA2BC0, 0x0ACB3C2D, 0xFBF3EA6B, 0xFBC5EA7F, 0xEA33C67B, 0xFFE401FD, 0xDE40007E,
    0x90000678, 0xC00068FF, 0x00003F38, 0xDEE78000, 0x130E0006, 0xC5654400, 0xFD698004,
    0xB9F0007D, 0x8C0018CB, 0x01F28A8C, 0xB7F0A9F0, 0x2B2E5800, 0x88CC0262, 0xC01F2887,
    0x0C6B82DF, 0x9E1FCB20, 0xBF1F02F0, 0xA1BDEF7B, 0xC4003C02, 0xDEFB4A84, 0xC3BDEF7B,
    0x8018C707, 0x3E51164F, 0x2B0E1980, 0x2A580162, 0xFC002A7C, 0x738804C4, 0x8DE0005F,
    0xCE40017A, 0xF20003F1, 0x0000006C, 0x0DBDCF00, 0x00261C00, 0x098ACA88, 0xFBFAD300,
    0x9773E000, 0x19180031, 0xE003E515, 0x016FE153, 0xC4565CB0, 0x0F119804, 0xBF803E51,
    0x4018D705, 0xE13C3F96, 0xF77E3E05, 0x05437BDE, 0x09880078, 0xF7BDF695, 0x0F877BDE,
    0x9F00318E, 0x007CA22C, 0xC4561C33, 0xF854B002, 0x89F80054, 0x5F7BE809, 0x78D6B000,
    0xE9E00366, 0x0B58DF38, 0xB49EE780, 0x000002EF, 0x1B7B9E00, 0x004C3800, 0x13159510,
    0xF7F5A600, 0x2EE7C001, 0x32300063, 0xC007CA2A, 0x02DFC2A7, 0x88ACB960, 0x1E233009,
    0x7F007CA2, 0x8031AE0B, 0xC2787F2C, 0xEEFC7C0B, 0x0A86F7BD, 0x131000F0, 0xEF7BED2A,
    0x1F0EF7BD, 0x3E00631C, 0x00F94459, 0x88AC3866, 0xF0A96005, 0x13F000A9, 0xDFFF5813,
    0x78014EA3, 0xCF9DF3DA, 0xFFC6E003, 0x00BF18F4, 0xFFD61DF0, 0x000000FF, 0x0DBDCF00,
    0x00261C00, 0x098ACA88, 0xFBFAD300, 0x9773E000, 0x19180031, 0xE003E515, 0x016FE153,
    0xC4565CB0, 0x0F119804, 0xBF803E51, 0x4018D705, 0xE13C3F96, 0xF77E3E05, 0x05437BDE,
    0x09880078, 0xF7BDF695, 0x0F877BDE, 0x9F00318E, 0x007CA22C, 0xC4561C33, 0xF854B002,
    0x89F80054, 0x67FB9E09, 0x000005DF, 0xB3FDCF00, 0x000002EF, 0x1B7B9E00, 0x004C3800,
    0x13159510, 0xF7F5A600, 0x2EE7C001, 0x32300063, 0xC007CA2A, 0x02DFC2A7, 0x88ACB960,
    0x1E233009, 0x7F007CA2, 0x8031AE0B, 0xC2787F2C, 0xEEFC7C0B, 0x0A86F7BD, 0x131000F0,
    0xEF7BED2A, 0x1F0EF7BD, 0x3E00631C, 0x00F94459, 0x88AC3866, 0xF0A96005, 0x13F000A9,
    0xC0000013, 0x0017FFFC, 0x77FFFBF0, 0x6B190002, 0x9FFA8000, 0x0090000C, 0x31595100,
    0x7F5A6001, 0xEE7C001F, 0x23000632, 0x007CA2A3, 0x2DFC2A7C, 0x8ACB9600, 0xE2330098,
    0xF007CA21, 0x031AE0B7, 0x2787F2C8, 0xEFC7C0BC, 0xA86F7BDE, 0x31000F00, 0xF7BED2A1,
    0xF0EF7BDE, 0xE00631C1, 0x0F944593, 0x8AC38660, 0x0A960058, 0x3F000A9F, 0x7BDE0131,
    0xDEF7BDEF, 0xB7BDEF7B, 0x0000B100, 0x1EF23780, 0x7BDEF77E, 0xC405BDEF, 0xC00001F4,
    0x0000588C, 0x00009AF0, 0x005E22B0, 0x00ACF800, 0x3F4CC000, 0xBDEF77E0, 0xFC0FDEF7,
    0x8000093C, 0xDF80BD27, 0x7BDEF7BD, 0xF7D9783F, 0x80007BDE, 0x00000067, 0xDEF7BAAF,
    0xA8000F7B, 0xC00002E1, 0x80000555, 0xBF002E51, 0xF7BDEF7B, 0x028DB7DE, 0x7F300000,
    0x2B7E73FF, 0xF2DE7500, 0xB02DF564, 0xFFCF317E, 0xDF13CFB7, 0x6FBD78C0, 0x838ABE20,
    0xBC04CF1B, 0x0BC31A72, 0x250D4F90, 0xF7EF8006, 0x20001E38, 0x02100005, 0x000B4800,
    0x58001238, 0xBF980062, 0xC0178625, 0x4CF69B57, 0x5A9A1AC0, 0xDBC40EDE, 0xAC7740D6,
    0x33EDFFF3, 0xBDAC1BA3, 0xD6393C6A, 0x9FEC805E, 0x8013BB3A, 0x80017311, 0x004F6671,
    0x024B9CD4, 0x7C6FDFE0, 0x1EEF8005, 0x1A2AF800, 0x06637E00, 0x0013EC00, 0x7BDEE000,
    0xDEF7BDEF, 0x0000FF7B, 0xF7BDEEF8, 0x1FEF7BDE, 0x00000000, 0x00000000, 0x7BDDF000,
    0xDEF7BDEF, 0xEF800001, 0xBDEF7BDE, 0x00000EF7, 0x00000000, 0xC0000000, 0xF7BDEF77,
    0x016F7BDE, 0xBBBF0000, 0xFCAA8003, 0x371D0007, 0x024FB000, 0xDEF70000, 0xF7BDEF7B,
    0x0007FBDE, 0xBDEF77C0, 0xFF7BDEF7, 0x00000000, 0x00000000, 0xDEEF8000, 0xF7BDEF7B,
    0x7C00000E, 0xEF7BDEF7, 0x000077BD, 0x00000000, 0x00000000, 0xBDEF7BBE, 0x0B7BDEF7,
    0x7FF20000, 0x271000CF, 0xBE013FDB, 0x6E2FD731, 0xF5F77E00, 0x00007FDC, 0xEF7BDEE0,
    0x7BDEF7BD, 0xF80000FF, 0xDEF7BDEE, 0x001FEF7B, 0x00000000, 0x00000000, 0xEF7BDDF0,
    0x01DEF7BD, 0xDEEF8000, 0xF7BDEF7B, 0x0000000E, 0x00000000, 0x77C00000, 0xDEF7BDEF,
    0x00016F7B, 0xDC65DF60, 0xD800000B, 0x02F71977, 0xF7BDC000, 0xBDEF7BDE, 0x0001FEF7,
    0xEF7BDDF0, 0x3FDEF7BD, 0x00000000, 0x00000000, 0xF7BBE000, 0xBDEF7BDE, 0xDF000003,
    0x7BDEF7BD, 0x00001DEF, 0x00000000, 0x80000000, 0xEF7BDEEF, 0x02DEF7BD, 0xE377D800,
    0xFE24C63F, 0xFFFC43F9, 0x01FBBE00, 0x00000000, 0x00000000, 0x00000000, 0x2B1FDFF8,
    0xFF378FC7, 0xF000FF38, 0x00000FDD, 0x00000000, 0x00000000, 0x71800000, 0x27903FEE,
    0x6E21FF3A, 0x17F1EAF6, 0xBBACBBFF, 0x3F77C001, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x38000000, 0x1FEF31F7, 0xDE63EE70, 0x7EEF803F, 0x00000000, 0x00000000,
    0x00000000, 0x88000000, 0xF7BDEF7B, 0x0016FD9C, 0xF7F31888, 0xBDEEFC01, 0xF9E5EEF7,
    0x9FD18001, 0x33C0009A, 0x3F0000FD, 0x0C800039, 0xC7480005, 0xBDEEFC3D, 0xCC32C077,
    0x9CE733C9, 0xE736F001, 0x6137DF7D, 0xBA400049, 0x0F08C000, 0x04CAF000, 0x07E3CF00,
    0xD4FDE300, 0xDEF77E04, 0xFCF4F77B, 0xEE722000, 0x7FFD600F, 0xCC053A8F, 0xF3E77CF6,
    0xA7FE3B00, 0xF005F8C7, 0xFFFFD61D, 0xF7100000, 0x5EE300BE, 0xDE0002CC, 0x00D90000,
    0xC002CCB0, 0xF8005E57, 0x44005F22, 0x5980059B, 0x22F8005E, 0x9B44005F, 0x5E598005,
    0x5F22F800, 0x3F9B4400, 0x00B2CC00, 0x10000BE0, 0x02CC000D, 0x003FBEC4, 0x0F59FE20,
    0x1B371000, 0x3FFF9000, 0x60000000, 0x7673FF7E, 0xDFFD4027, 0xFEB993C7, 0xF97F302F,
    0x7DBFFFFC, 0x461B98DE, 0xEE612FEB, 0x9E3A1F1C, 0x53D7C805, 0x54017946, 0x000C4AB9,
    0x0F7F1EFE, 0x42311E00, 0x00582000, 0x40008400, 0x0026FEB0, 0x0E4A311E, 0xA31EFE00,
    0x2E518034, 0xF203546F, 0xB17F22A8, 0xE6E784BE, 0xE7F9E0F8, 0xF6FFFFF3, 0x07F9F2F9,
    0xF1F7FF18, 0x05FDAE64, 0x0B7B9E00, 0x016F6800, 0x013D9580, 0x00177580, 0x7E600000,
    0x277673FF, 0xC7DFFD40, 0x2FFEB993, 0xFCF97F30, 0xDE7DBFFF, 0xEB461B98, 0x1CEE612F,
    0x059E3A1F, 0x4653D7C8, 0xB9540179, 0xFE000C4A, 0x000F7F1E, 0x0042311E, 0x00005820,
    0xB0400084, 0x1E0026FE, 0x000E4A31, 0x34A31EFE, 0x6F2E5180, 0xA8F20354, 0xBEB17F22,
    0xF8E6E784, 0xF3E7F9E0, 0xF9F6FFFF, 0x1807F9F2, 0x64F1F7FF, 0x8005FDAE, 0x0053DFF8,
    0xBE35CBE0, 0xAAAF8001, 0x0027F8DF, 0x7BA9FDDF, 0x00000012, 0x673FF7E6, 0xFFD40277,
    0xEB993C7D, 0x97F302FF, 0xDBFFFFCF, 0x61B98DE7, 0xE612FEB4, 0xE3A1F1CE, 0x3D7C8059,
    0x40179465, 0x00C4AB95, 0xF7F1EFE0, 0x2311E000, 0x05820004, 0x00084000, 0x026FEB04,
    0xE4A311E0, 0x31EFE000, 0xE518034A, 0x203546F2, 0x17F22A8F, 0x6E784BEB, 0x7F9E0F8E,
    0x6FFFFF3E, 0x7F9F2F9F, 0x1F7FF180, 0x5FDAE64F, 0xBFDF8C00, 0x7001FEC3, 0xC7FEEB1E,
    0xFFB23000, 0x0D3C67BF, 0x7EA9DC60, 0x000003E7, 0x9FFBF300, 0xEA013BB3, 0xCC9E3EFF,
    0xF9817FF5, 0xFFFFE7CB, 0xDCC6F3ED, 0x097F5A30, 0xD0F8E773, 0xBE402CF1, 0x0BCA329E,
    0x6255CAA0, 0xF8F7F000, 0x88F0007B, 0xC1000211, 0x04200002, 0x37F58200, 0x5188F001,
    0xF7F00072, 0x8C01A518, 0x1AA37972, 0xF9154790, 0x3C25F58B, 0xCF07C737, 0xFFFF9F3F,
    0xCF97CFB7, 0xBFF8C03F, 0xED73278F, 0xDBBE002F, 0x0004DEF2, 0xB6EF8000, 0x000137BC,
    0xFF7E6000, 0x40277673, 0x93C7DFFD, 0x302FFEB9, 0xFFFCF97F, 0x98DE7DBF, 0x2FEB461B,
    0x1F1CEE61, 0xC8059E3A, 0x794653D7, 0x4AB95401, 0x1EFE000C, 0x1E000F7F, 0x20004231,
    0x84000058, 0xFEB04000, 0x311E0026, 0xFE000E4A, 0x8034A31E, 0x546F2E51, 0x22A8F203,
    0x84BEB17F, 0xE0F8E6E7, 0xFFF3E7F9, 0xF2F9F6FF, 0xFF1807F9, 0xAE64F1F7, 0x2FE405FD,
    0xB785FCC1, 0xE77AC0EE, 0x0FFC8DF0, 0xB14DC76F, 0x19BFFE2B, 0x455F84FF, 0x81007FC5,
    0xA89EFC09, 0x576226F8, 0xBBD37FFC, 0xE1EE46F8, 0x6B78FD6D, 0x1F3BD627, 0x73FF7F30,
    0x0BF52776, 0x4F2DE73C, 0xF3BFFAE6, 0x3C5F589B, 0x9F6FFFFF, 0x3B9BE637, 0x612FEB54,
    0x3DA0CCBE, 0x3D37A80B, 0xC81A18C3, 0xF5E1EC6F, 0x8EE20993, 0x58653F1B, 0xA4E3FE20,
    0xE0197221, 0x08B06FCB, 0x805D57C0, 0x9E9FA065, 0xB16188B0, 0x88605CD6, 0xF4F1C9FC,
    0x195B02F3, 0x03EAFEE5, 0x86BCBCAA, 0x1CD7C80F, 0x84BF10AC, 0xCCBC73B9, 0xFE7CBF2F,
    0x6F3EDFFF, 0xECF18DAC, 0x2796FFE7, 0xC01BFD73, 0xC0004F77, 0x800344F7, 0x800256AF,
    0x000049DF, 0x5005BDC0, 0x000002F7, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00108080, 0x94804860, 0x6D807F2C, 0x18033D71, 0xFF0CF2E5, 0xABFAE495, 0xFE8AFF07,
    0xA8EFFBDF, 0x7BEFC41F, 0xDF3E4446, 0xB7BC800F, 0x06CDA001, 0x05EA78C0, 0x007F7180,
    0x16F70000, 0x000BDD40, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x42020000,
    0x01218000, 0x01FCB252, 0x0CF5C5B6, 0x33CB9460, 0xEB9257FC, 0x2BFC1EAF, 0xBFEF7FFA,
    0xBF107EA3, 0xF91119EF, 0xDF003F7C, 0xFD000BBD, 0xC013D53C, 0xE2FBF95A, 0xFDD6007D,
    0x00FB9C47, 0x0B7B8000, 0x0005EEA0, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x21010000, 0x0090C000, 0x00FE5929, 0x067AE2DB, 0x19E5CA30, 0xF5C92BFE, 0x15FE0F57,
    0xDFF7BFFD, 0xDF883F51, 0x7C888CF7, 0xDE601FBE, 0x003EFFCD, 0x6EF30000, 0x0001F7FE,
    0x4016F700, 0x00000BDD, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00420200,
    0x52012180, 0xB601FCB2, 0x600CF5C5, 0xFC33CB94, 0xAFEB9257, 0xFA2BFC1E, 0xA3BFEF7F,
    0xEFBF107E, 0x7CF91119, 0xFBEC003F, 0x8C730003, 0xF2FC000F, 0xFFE0001F, 0x8000000F,
    0xBC00B7BE, 0x2F0F64F7, 0x6E9D4D40, 0x3D780BE4, 0x059AF193, 0xAC1FCCDE, 0x4E9A85E1,
    0xE2F91380, 0x6D9006B5, 0x068E6F0E, 0x198EE598, 0xC62F8007, 0xF100275F, 0x8004CF13,
    0x00000B87, 0x00000000, 0x00000000, 0x00000000, 0x05BDC400, 0x00000000, 0xDF800000,
    0xB39EF7BD, 0x1888003B, 0xDDF80EEB, 0x5FBDEF7B, 0x73C001C6, 0x118003E4, 0x05C000FE,
    0x20018540, 0x7E1467E6, 0xCF7BDEF7, 0x4400791B, 0x7E13FF56, 0xFE7BDEF7, 0x000005BF,
    0x80000000, 0x2F673BF9, 0x327DEFC0, 0x55607FB3, 0xD677BDEE, 0xF9274F84, 0x0C169038,
    0x5903047F, 0xD78100F1, 0x5CA8C00B, 0x00023C00, 0x8C00D18F, 0x580276B6, 0x00FD8C5F,
    0x2FC56E78, 0xA32FC400, 0x6107D620, 0x3C59F780, 0xD17C4143, 0x413A7F7B, 0xFAC89FFD,
    0x7DEE7816, 0x06AF3C00, 0x004E7660, 0x00009DD6, 0x39FFDE30, 0xEF406FFF, 0xECF1C9E9,
    0xFDF158C9, 0x1F96FB7F, 0xD107AE4F, 0x0BFFCC32, 0xBE6B2012, 0xCEF8C19B, 0xF04EF7FF,
    0xDFD3C7EC, 0xCE7B437F, 0x901C9EB7, 0x1C20780E, 0x39ED0D58, 0x19FA7DBF, 0x3C6BB9A6,
    0x7F2BFB51, 0x801FB9C0, 0x6200FA8E, 0x38801F8E, 0x8C00001B, 0xFFCE7FF7, 0x7A7BD01B,
    0x327B3C72, 0xDFFF7C56, 0x93C7E5BE, 0x0CB441EB, 0x0482FFF3, 0x66EF9AC8, 0xFFF3BE30,
    0xFB3C13BD, 0xDFF7F4F1, 0xADF39ED0, 0x03A40727, 0x5607081E, 0x6FCE7B43, 0x69867E9F,
    0xD44F1AEE, 0xFC1FCAFE, 0x5F009DEE, 0x807DE33D, 0xE277C67E, 0x96EFA057, 0x000014E7,
    0xF39FFDE3, 0x9EF406FF, 0x9ECF1C9E, 0xFFDF158C, 0xF1F96FB7, 0x2D107AE4, 0x20BFFCC3,
    0xBBE6B201, 0xFCEF8C19, 0xCF04EF7F, 0xFDFD3C7E, 0x7CE7B437, 0xE901C9EB, 0x81C20780,
    0xF39ED0D5, 0x619FA7DB, 0x13C6BB9A, 0x47F2BFB5, 0xFA6FFEFE, 0xF31E706D, 0x7207AFFF,
    0x8CFDFFBC, 0x8CBBC86A, 0x0002FCEF, 0xCFFEF180, 0x7A037FF9, 0x678E4F4F, 0xEF8AC64F,
    0xFCB7DBFF, 0x883D7278, 0x5FFE6196, 0xF3590090, 0x77C60CDD, 0x8277BFFE, 0xFE9E3F67,
    0x73DA1BFE, 0x80E4F5BE, 0xE103C074, 0xCF686AC0, 0xCFD3EDF9, 0xE35DCD30, 0xF95FDA89,
    0x7B8FEFA3, 0xBE80000B, 0x002DEE3F, 0x3FFBC600, 0xE80DFFE7, 0x9E393D3D, 0xBE2B193D,
    0xF2DF6FFF, 0x20F5C9E3, 0x7FF9865A, 0xCD640241, 0xDF183377, 0x09DEFFF9, 0xFA78FD9E,
    0xCF686FFB, 0x0393D6F9, 0x840F01D2, 0x3DA1AB03, 0x3F4FB7E7, 0x8D7734C3, 0xE57F6A27,
    0x177FD60F, 0xFFFFEE40, 0x9000B005, 0x017EFFBF, 0x00BFFFAC, 0xFFBC6000, 0x80DFFE73,
    0xE393D3DE, 0xE2B193D9, 0x2DF6FFFB, 0x0F5C9E3F, 0xFF9865A2, 0xD6402417, 0xF183377C,
    0x9DEFFF9D, 0xA78FD9E0, 0xF686FFBF, 0x393D6F9C, 0x40F01D20, 0xDA1AB038, 0xF4FB7E73,
    0xD7734C33, 0x57F6A278, 0x7FEFA8FE, 0xBE34EECE, 0x09BFF9FF, 0xC9E3DFDE, 0xE3F7BB5C,
    0x9A83F731, 0x7DBFFFB9, 0xFEFE5633, 0x4BE7FFBF, 0xF1037E76, 0x579E16F1, 0x5205FFD3,
    0x30147814, 0xC4FDF59E, 0xFBDEF7BD, 0xCEFD4917, 0xA219FAFE, 0xAAAAAAAA, 0xE6357E78,
    0xF1AF3BFB, 0xBF7EFDFB, 0x4BF7EFDF, 0xCEFFEB3F, 0xFA80308A, 0x81F844FF, 0x92701E23,
    0xADE21F08, 0x9EB07BF0, 0xFFFCDA68, 0xCCF39DF6, 0xD3BFFEF8, 0x5FCC1BF1, 0x7ED6278D,
    0x33C7BFBD, 0xAC407EE6, 0x09BFFE7D, 0xA27CEEC6, 0x9F270DDE, 0x1CFFDBFB, 0x05F1CACD,
    0xFDB266F9, 0xA63FFD40, 0x005A4001, 0x1A400584, 0xE7E1D9C0, 0x30889E07, 0x3F18BC73,
    0x9E62711F, 0x2CF1DEDF, 0xC9F2BB8C, 0xFD103EFA, 0x007BFB8B, 0x6009D17E, 0x6200F37F,
    0xB20163CE, 0xE00FCD7B, 0xAF8007BB, 0x8DF801A2, 0x13EC0019, 0xED600000, 0xE302F673,
    0xBD9999DF, 0xDCF93883, 0xFE33EFBD, 0x105F1CCC, 0xF3F28E5F, 0xF0DFCA03, 0xBF7EFDFB,
    0x4624AFDF, 0x5A555555, 0xEF7BDDF8, 0x696EF7BD, 0x80F8F000, 0x23797FDF, 0x7CAE817F,
    0xEEEA3FC4, 0x25F159DF, 0x93E676E3, 0xFF003F6B, 0x595801FB, 0xE3BC401F, 0x07671003,
    0xFB580000, 0xF8C0BD9C, 0xEF666677, 0x773E4E20, 0x3F8CFBEF, 0xC417C733, 0xFCFCA397,
    0xFC37F280, 0xEFDFBF7E, 0x51892BF7, 0x16955555, 0x7BDEF77E, 0x1A5BBDEF, 0xE03E3C00,
    0xC8DE5FF7, 0x1F2BA05F, 0xFBBA8FF1, 0xC97C5677, 0xE4F99DB8, 0xBBF00FDA, 0xF5BC0277,
    0xD601F78C, 0x5F89DF1C, 0x3CB77581, 0xB00000A7, 0x817B39F6, 0xCCCCEFF1, 0x7C9C41DE,
    0x19F7DEEE, 0x2F8E667F, 0xF9472F88, 0x6FE501F9, 0xBF7EFDF8, 0x1257EFDF, 0x2AAAAAA3,
    0xBDEEFC2D, 0xB77BDEF7, 0x7C780034, 0xBCBFEFC0, 0x5740BF91, 0x751FE23E, 0xF8ACEFF7,
    0xF33B7192, 0x581FB5C9, 0x05B9C7F7, 0x3FBAC000, 0x00002DCE, 0x5ECE7DAC, 0x333BFC60,
    0x271077B3, 0x7DF7BB9F, 0xE3999FC6, 0x51CBE20B, 0xF9407E7E, 0xDFBF7E1B, 0x95FBF7EF,
    0xAAAAA8C4, 0x7BBF0B4A, 0xDEF7BDEF, 0x1E000D2D, 0x2FFBF01F, 0xD02FE46F, 0x47F88F95,
    0x2B3BFDDD, 0xCEDC64BE, 0x47ED727C, 0x9E4BEFFE, 0xC7F8C998, 0x007E718B, 0x0000BEFA,
    0x00000000, 0x3C000000, 0x3F5A3EF7, 0x6F32D733, 0x00BEFA03, 0x00000000, 0xF1000000,
    0x3FC067BF, 0x1BF27F97, 0xD3717F4F, 0xFEEA7EEF, 0xBEFA0013, 0x00000000, 0x00000000,
    0x00000000, 0x9DFF8000, 0xFF007B9E, 0x00F73D3B, 0x0002FBE8, 0x00000000, 0x00000000,
    0xCDDDF000, 0x1CDF01F3, 0xE02FAFBF, 0x079CF517, 0x73FBBBC4, 0x9F3B9402, 0xD9607F27,
    0x40CF0F67, 0x931E39ED, 0xE798BF26, 0xA543FFB7, 0x3C8BC62F, 0x40F8F1E1, 0x01E97F2E,
    0x300419AE, 0x42180044, 0x78F6C05A, 0xEFE5901C, 0x27917A8D, 0xE63FC4AA, 0xA8FFEDF9,
    0x7CAEE30F, 0x405FDEB2, 0xE78F7FFF, 0x7CF2E614, 0x3FC1E7E7, 0xF18D77FF, 0xA2FEFC0B,
    0x0007FFFF, 0xED6BEE78, 0x6301BE73, 0x5D9E3C77, 0x7FFF6278, 0x0EF0BCA7, 0x60A20CB4,
    0x08001830, 0x00000000, 0x00000000, 0xDDF00000, 0xD157C003, 0x0CC6FC00, 0x0009F600,
    0xE7DE8800, 0xAEEA05EC, 0x4EF4727C, 0x7E798BF2, 0xFC38D4FB, 0x2FC45EA2, 0xE01CB4C7,
    0x80B08FF1, 0x401839BF, 0x84018318, 0x7F016111, 0xC78072D3, 0x45EA2FDF, 0xFCA732FC,
    0x3EDF9E62, 0xAEEA2E35, 0x9DDEB27C, 0x03FBFF00, 0x00FC72B0, 0x803FCDE2, 0x0000FF38,
    0xCE7DE880, 0xCAEEA05E, 0x24EF4727, 0xB7E798BF, 0x2FC38D4F, 0x72FC45EA, 0x1E01CB4C,
    0xF80B08FF, 0x8401839B, 0x18401831, 0x37F01611, 0xFC78072D, 0xC45EA2FD, 0x2FCA732F,
    0x53EDF9E6, 0xCAEEA2E3, 0x09DDEB27, 0x005DEEFC, 0x0FD53D6F, 0x6F7E66B0, 0xFBAC0AFC,
    0x0014E797, 0x9CFBD100, 0x95DD40BD, 0x49DE8E4F, 0x6FCF317E, 0x5F871A9F, 0xE5F88BD4,
    0x3C039698, 0xF01611FE, 0x08030737, 0x30803063, 0x6FE02C22, 0xF8F00E5A, 0x88BD45FB,
    0x5F94E65F, 0xA7DBF3CC, 0x95DD45C6, 0x13BBD64F, 0xD37FF7F2, 0x62A707F7, 0x82CFFFFE,
    0x67EF6B18, 0xB6E20FD4, 0x005F9DF1, 0xCFBD1000, 0x5DD40BD9, 0x9DE8E4F9, 0xFCF317E4,
    0xF871A9F6, 0x5F88BD45, 0xC039698E, 0x01611FE3, 0x8030737F, 0x08030630, 0xFE02C223,
    0x8F00E5A6, 0x8BD45FBF, 0xF94E65F8, 0x7DBF3CC5, 0x5DD45C6A, 0x3BBD64F9, 0xE71FDD61,
    0xEB000016, 0x00B738FE, 0xE7DE8800, 0xAEEA05EC, 0x4EF4727C, 0x7E798BF2, 0xFC38D4FB,
    0x2FC45EA2, 0xE01CB4C7, 0x80B08FF1, 0x401839BF, 0x84018318, 0x7F016111, 0xC78072D3,
    0x45EA2FDF, 0xFCA732FC, 0x3EDF9E62, 0xAEEA2E35, 0x9DDEB27C, 0x006F73C0, 0xE0000000,
    0xBDC037B9, 0xEF7BDEF7, 0x0007F7BD, 0xBDEF7BDC, 0x7F7BDEF7, 0x0037B9E0, 0x00000000,
    0xFBC606FC, 0x59EFFF3F, 0xC73DAC15, 0xA57AF9E3, 0xF7E7BDA7, 0x9ADA48FF, 0x9919E138,
    0x437D745E, 0xAB3C192D, 0x608671EB, 0xC612E6FC, 0x4BE4E290, 0xE7E45318, 0xE919C78F,
    0xC318273E, 0xC60D65A3, 0x9E15A4F1, 0xACEFFBF3, 0x39EC778F, 0x0FDF519E, 0x3FFBC671,
    0xE300F7E7, 0xBE3005DC, 0x7EA00378, 0xFB9E00D1, 0xFBCC0002, 0x006F7103, 0x00000000,
    0x00000000, 0x400C00B0, 0xE1F82422, 0x89CC6889, 0xEFFFAD78, 0xF581AEFF, 0xF7E678D5,
    0x0DB9E402, 0x6034F1D0, 0x8C01F53C, 0x300003FB, 0xBDC40FEF, 0x00000001, 0x00000000,
    0x3002C000, 0xE0908900, 0x31A22787, 0xFEB5E227, 0x06BBFFBF, 0x99E357D6, 0xDDF80BDF,
    0xCD5F013B, 0x9FA03EF1, 0x15F89EF1, 0x9CF2DDF4, 0xFDE60002, 0x0037B881, 0x00000000,
    0x00000000, 0x20060058, 0xF0FC1211, 0x44E63444, 0xF7FFD6BC, 0xFAC0D77F, 0x7BF33C6A,
    0xF71FDF41, 0xDF400016, 0x0016F71F, 0xC40FEF30, 0x000001BD, 0x00000000, 0x02C00000,
    0x90890030, 0xA22787E0, 0xB5E22731, 0xBBFFBFFE, 0xE357D606, 0x600BDF99, 0xE20033DD,
    0x74006F8D, 0x7BC00AFC, 0xE600001F, 0x4F7103FD, 0x5302C8CC, 0x9F80E585, 0x8C60A7C3,
    0x83C6462C, 0x073E079F, 0x0AA60F8F, 0xCA212395, 0xC701F7F2, 0x3C058ADF, 0x00544F51,
    0x3E007696, 0x86300599, 0x00F0800F, 0x84095918, 0xEFA02EBC, 0xD8053C7F, 0x3C03F319,
    0x00000377, 0x00000000, 0xDD9FFE80, 0x2797B101, 0xFE644ED7, 0x795BBFFE, 0x2FC457E0,
    0x603E43C6, 0x98E02CBA, 0x0608600C, 0x70164C30, 0x96203925, 0xBE20CE3F, 0xFDED22A8,
    0xC43E35BB, 0xBBE4F19E, 0x9FFDE203, 0x0000013D, 0x80000000, 0x3775877B, 0x1DEE0000,
    0x0000DDD6, 0xB881FEF3, 0x81646627, 0xC072C2A9, 0x3053E1CF, 0xE3231646, 0x9F03CFC1,
    0x5307C783, 0x1091CA85, 0x80FBF965, 0x02C56FE3, 0x2A27A89E, 0x003B4B00, 0x1802CC9F,
    0x784007C3, 0x04AC8C00, 0xD0175E42, 0x029E3FF7, 0x01F98CEC, 0x00000000
EW_END_OF_FONT_RES( ApplicationNumbersP )

/* Table with links to derived variants of the font resource : 'Application::NumbersP' */
EW_RES_WITHOUT_VARIANTS( ApplicationNumbersP )

/* Font resource : 'Application::NumbersG' */
EW_DEFINE_FONT_RES( ApplicationNumbersG, 30, 7, 1, 16, 0x001F, 0x00C0 )
  EW_GLYPH( 0x001F, 4, -21, 16, 21, 24, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 9, 0x0000020C ),                /* ' ' */
  EW_GLYPH( 0x0021, 2, -23, 5, 23, 9, 0x0000020C ),             /* '!' */
  EW_GLYPH( 0x0022, 1, -23, 9, 8, 11, 0x00000303 ),             /* '"' */
  EW_GLYPH( 0x0023, 0, -23, 18, 23, 18, 0x000003B3 ),           /* '#' */
  EW_GLYPH( 0x0024, 1, -24, 16, 27, 18, 0x000007D4 ),           /* '$' */
  EW_GLYPH( 0x0025, 1, -23, 26, 23, 28, 0x00000C41 ),           /* '%' */
  EW_GLYPH( 0x0026, 1, -23, 20, 23, 21, 0x000011E6 ),           /* '&' */
  EW_GLYPH( 0x0027, 1, -23, 4, 8, 6, 0x000016C3 ),              /* ''' */
  EW_GLYPH( 0x0028, 1, -23, 9, 29, 11, 0x00001719 ),            /* '(' */
  EW_GLYPH( 0x0029, 1, -23, 9, 29, 11, 0x00001945 ),            /* ')' */
  EW_GLYPH( 0x002A, 1, -23, 11, 10, 12, 0x00001B7D ),           /* '*' */
  EW_GLYPH( 0x002B, 1, -19, 16, 15, 19, 0x00001CF0 ),           /* '+' */
  EW_GLYPH( 0x002C, 2, -3, 5, 8, 9, 0x00001EA7 ),               /* ',' */
  EW_GLYPH( 0x002D, 1, -10, 9, 3, 11, 0x00001F0D ),             /* '-' */
  EW_GLYPH( 0x002E, 2, -3, 5, 3, 9, 0x00001F4D ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -23, 9, 23, 9, 0x00001F6E ),             /* '/' */
  EW_GLYPH( 0x0030, 1, -23, 16, 23, 18, 0x00002119 ),           /* '0' */
  EW_GLYPH( 0x0031, 3, -23, 9, 23, 18, 0x0000249D ),            /* '1' */
  EW_GLYPH( 0x0032, 0, -23, 17, 23, 18, 0x000025E2 ),           /* '2' */
  EW_GLYPH( 0x0033, 1, -23, 16, 23, 18, 0x000029BC ),           /* '3' */
  EW_GLYPH( 0x0034, 0, -23, 17, 23, 18, 0x00002DAE ),           /* '4' */
  EW_GLYPH( 0x0035, 1, -23, 16, 23, 18, 0x000030A6 ),           /* '5' */
  EW_GLYPH( 0x0036, 1, -23, 16, 23, 18, 0x000034AD ),           /* '6' */
  EW_GLYPH( 0x0037, 1, -23, 16, 23, 18, 0x000038EF ),           /* '7' */
  EW_GLYPH( 0x0038, 1, -23, 16, 23, 18, 0x00003BEA ),           /* '8' */
  EW_GLYPH( 0x0039, 1, -23, 16, 23, 18, 0x00004028 ),           /* '9' */
  EW_GLYPH( 0x003A, 2, -17, 5, 17, 9, 0x00004456 ),             /* ':' */
  EW_GLYPH( 0x003B, 2, -17, 5, 22, 9, 0x000044E1 ),             /* ';' */
  EW_GLYPH( 0x003C, 1, -19, 16, 16, 19, 0x000045AB ),           /* '<' */
  EW_GLYPH( 0x003D, 1, -16, 16, 10, 19, 0x0000486C ),           /* '=' */
  EW_GLYPH( 0x003E, 1, -19, 16, 16, 19, 0x00004A4E ),           /* '>' */
  EW_GLYPH( 0x003F, 1, -23, 16, 23, 18, 0x00004D10 ),           /* '?' */
  EW_GLYPH( 0x0040, 1, -23, 31, 29, 32, 0x00005034 ),           /* '@' */
  EW_GLYPH( 0x0041, -1, -23, 23, 23, 21, 0x00005A69 ),          /* 'A' */
  EW_GLYPH( 0x0042, 2, -23, 18, 23, 21, 0x00005EA1 ),           /* 'B' */
  EW_GLYPH( 0x0043, 1, -23, 21, 23, 23, 0x000062BF ),           /* 'C' */
  EW_GLYPH( 0x0044, 2, -23, 20, 23, 23, 0x0000675E ),           /* 'D' */
  EW_GLYPH( 0x0045, 2, -23, 18, 23, 21, 0x00006B1E ),           /* 'E' */
  EW_GLYPH( 0x0046, 2, -23, 17, 23, 20, 0x00006EBA ),           /* 'F' */
  EW_GLYPH( 0x0047, 1, -23, 22, 23, 25, 0x00007190 ),           /* 'G' */
  EW_GLYPH( 0x0048, 2, -23, 19, 23, 23, 0x00007688 ),           /* 'H' */
  EW_GLYPH( 0x0049, 2, -23, 5, 23, 9, 0x00007902 ),             /* 'I' */
  EW_GLYPH( 0x004A, 0, -23, 14, 23, 16, 0x00007981 ),           /* 'J' */
  EW_GLYPH( 0x004B, 2, -23, 20, 23, 21, 0x00007B90 ),           /* 'K' */
  EW_GLYPH( 0x004C, 2, -23, 15, 23, 18, 0x00007F43 ),           /* 'L' */
  EW_GLYPH( 0x004D, 2, -23, 23, 23, 27, 0x00008119 ),           /* 'M' */
  EW_GLYPH( 0x004E, 2, -23, 19, 23, 23, 0x00008505 ),           /* 'N' */
  EW_GLYPH( 0x004F, 1, -23, 23, 23, 25, 0x000087D3 ),           /* 'O' */
  EW_GLYPH( 0x0050, 2, -23, 18, 23, 21, 0x00008CE5 ),           /* 'P' */
  EW_GLYPH( 0x0051, 1, -23, 23, 24, 25, 0x00009034 ),           /* 'Q' */
  EW_GLYPH( 0x0052, 2, -23, 21, 23, 23, 0x000095AF ),           /* 'R' */
  EW_GLYPH( 0x0053, 1, -23, 19, 23, 21, 0x000099CA ),           /* 'S' */
  EW_GLYPH( 0x0054, 0, -23, 19, 23, 20, 0x00009EB3 ),           /* 'T' */
  EW_GLYPH( 0x0055, 2, -23, 19, 23, 23, 0x0000A147 ),           /* 'U' */
  EW_GLYPH( 0x0056, 0, -23, 22, 23, 21, 0x0000A423 ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -23, 30, 23, 30, 0x0000A7FB ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -23, 22, 23, 21, 0x0000ADB9 ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -23, 22, 23, 21, 0x0000B22E ),           /* 'Y' */
  EW_GLYPH( 0x005A, 0, -23, 19, 23, 20, 0x0000B59F ),           /* 'Z' */
  EW_GLYPH( 0x005B, 2, -23, 7, 29, 9, 0x0000B9AC ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -23, 9, 23, 9, 0x0000BAD6 ),             /* '\' */
  EW_GLYPH( 0x005D, 0, -23, 7, 29, 9, 0x0000BC7F ),             /* ']' */
  EW_GLYPH( 0x005E, 0, -23, 15, 13, 15, 0x0000BDA3 ),           /* '^' */
  EW_GLYPH( 0x005F, -1, 4, 20, 3, 18, 0x0000BF71 ),             /* '_' */
  EW_GLYPH( 0x0060, 1, -23, 7, 4, 11, 0x0000C04B ),             /* '`' */
  EW_GLYPH( 0x0061, 1, -17, 16, 17, 18, 0x0000C0AC ),           /* 'a' */
  EW_GLYPH( 0x0062, 2, -23, 15, 23, 18, 0x0000C409 ),           /* 'b' */
  EW_GLYPH( 0x0063, 1, -17, 15, 17, 16, 0x0000C6FB ),           /* 'c' */
  EW_GLYPH( 0x0064, 1, -23, 15, 23, 18, 0x0000C9E4 ),           /* 'd' */
  EW_GLYPH( 0x0065, 1, -17, 16, 17, 18, 0x0000CCD4 ),           /* 'e' */
  EW_GLYPH( 0x0066, 0, -23, 10, 23, 9, 0x0000D031 ),            /* 'f' */
  EW_GLYPH( 0x0067, 1, -17, 15, 23, 18, 0x0000D1D4 ),           /* 'g' */
  EW_GLYPH( 0x0068, 2, -23, 14, 23, 18, 0x0000D5C8 ),           /* 'h' */
  EW_GLYPH( 0x0069, 2, -23, 3, 23, 7, 0x0000D7DF ),             /* 'i' */
  EW_GLYPH( 0x006A, -2, -23, 7, 29, 7, 0x0000D84E ),            /* 'j' */
  EW_GLYPH( 0x006B, 2, -23, 14, 23, 16, 0x0000D99F ),           /* 'k' */
  EW_GLYPH( 0x006C, 2, -23, 3, 23, 7, 0x0000DC0F ),             /* 'l' */
  EW_GLYPH( 0x006D, 2, -17, 23, 17, 27, 0x0000DC60 ),           /* 'm' */
  EW_GLYPH( 0x006E, 2, -17, 14, 17, 18, 0x0000DF4F ),           /* 'n' */
  EW_GLYPH( 0x006F, 1, -17, 16, 17, 18, 0x0000E10E ),           /* 'o' */
  EW_GLYPH( 0x0070, 2, -17, 15, 23, 18, 0x0000E404 ),           /* 'p' */
  EW_GLYPH( 0x0071, 1, -17, 15, 23, 18, 0x0000E722 ),           /* 'q' */
  EW_GLYPH( 0x0072, 2, -17, 10, 17, 11, 0x0000EA2C ),           /* 'r' */
  EW_GLYPH( 0x0073, 0, -17, 15, 17, 16, 0x0000EB5C ),           /* 's' */
  EW_GLYPH( 0x0074, 0, -23, 9, 23, 9, 0x0000EEA5 ),             /* 't' */
  EW_GLYPH( 0x0075, 2, -17, 14, 17, 18, 0x0000F02A ),           /* 'u' */
  EW_GLYPH( 0x0076, 0, -17, 16, 17, 16, 0x0000F1DE ),           /* 'v' */
  EW_GLYPH( 0x0077, 0, -17, 23, 17, 23, 0x0000F454 ),           /* 'w' */
  EW_GLYPH( 0x0078, 0, -17, 16, 17, 16, 0x0000F7EF ),           /* 'x' */
  EW_GLYPH( 0x0079, 0, -17, 16, 23, 16, 0x0000FAB9 ),           /* 'y' */
  EW_GLYPH( 0x007A, 0, -17, 16, 17, 16, 0x0000FDFE ),           /* 'z' */
  EW_GLYPH( 0x007B, 0, -23, 10, 29, 11, 0x000100C6 ),           /* '{' */
  EW_GLYPH( 0x007C, 2, -23, 4, 29, 8, 0x00010315 ),             /* '|' */
  EW_GLYPH( 0x007D, 0, -23, 10, 29, 11, 0x00010396 ),           /* '}' */
  EW_GLYPH( 0x007E, 1, -14, 17, 5, 19, 0x000105EA ),            /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 9, 0x00010728 ),
  EW_GLYPH( 0x00A1, 3, -17, 5, 23, 11, 0x00010728 ),
  EW_GLYPH( 0x00A2, 1, -23, 16, 29, 18, 0x00010817 ),
  EW_GLYPH( 0x00A3, 0, -23, 17, 23, 18, 0x00010C71 ),
  EW_GLYPH( 0x00A4, 1, -19, 16, 16, 18, 0x00011090 ),
  EW_GLYPH( 0x00A5, -1, -23, 19, 23, 18, 0x000113B9 ),
  EW_GLYPH( 0x00A6, 2, -23, 4, 29, 8, 0x000117D1 ),
  EW_GLYPH( 0x00A7, 1, -23, 16, 29, 18, 0x0001186C ),
  EW_GLYPH( 0x00A8, 0, -23, 10, 3, 11, 0x00011DBD ),
  EW_GLYPH( 0x00A9, 0, -23, 24, 23, 24, 0x00011DFA ),
  EW_GLYPH( 0x00AA, 0, -23, 12, 11, 12, 0x00012489 ),
  EW_GLYPH( 0x00AB, 2, -15, 14, 14, 18, 0x00012661 ),
  EW_GLYPH( 0x00AC, 1, -16, 16, 10, 19, 0x00012890 ),
  EW_GLYPH( 0x00AD, 1, -10, 9, 3, 11, 0x000129FB ),
  EW_GLYPH( 0x00AE, 0, -23, 24, 23, 24, 0x00012A3B ),
  EW_GLYPH( 0x00AF, -1, -26, 20, 3, 18, 0x00013094 ),
  EW_GLYPH( 0x00B0, 2, -23, 9, 9, 13, 0x0001316E ),
  EW_GLYPH( 0x00B1, 1, -19, 16, 19, 18, 0x000132A2 ),
  EW_GLYPH( 0x00B2, 0, -23, 11, 12, 11, 0x0001352F ),
  EW_GLYPH( 0x00B3, 0, -23, 11, 12, 11, 0x000136EB ),
  EW_GLYPH( 0x00B4, 3, -23, 7, 4, 11, 0x000138BA ),
  EW_GLYPH( 0x00B5, 2, -17, 14, 23, 18, 0x0001391A ),
  EW_GLYPH( 0x00B6, 0, -23, 18, 29, 17, 0x00013B32 ),
  EW_GLYPH( 0x00B7, 3, -13, 4, 3, 11, 0x00013E0B ),
  EW_GLYPH( 0x00B8, 1, -1, 8, 7, 11, 0x00013E28 ),
  EW_GLYPH( 0x00B9, 1, -23, 7, 12, 11, 0x00013EDA ),
  EW_GLYPH( 0x00BA, 0, -23, 11, 11, 12, 0x00013F7E ),
  EW_GLYPH( 0x00BB, 2, -15, 14, 14, 18, 0x0001411B ),
  EW_GLYPH( 0x00BC, 1, -23, 26, 23, 27, 0x00014369 ),
  EW_GLYPH( 0x00BD, 1, -23, 26, 23, 27, 0x00014873 ),
  EW_GLYPH( 0x00BE, 0, -23, 27, 23, 27, 0x00014DCC ),
  EW_GLYPH( 0x00BF, 2, -17, 16, 23, 20, 0x000153FD ),
  EW_GLYPH( 0x00C0, -1, -29, 23, 29, 21, 0x00015715 ),
  EW_GLYPH( 0x00C1, -1, -29, 23, 29, 21, 0x00015C26 ),
  EW_GLYPH( 0x00C2, -1, -29, 23, 29, 21, 0x00016136 ),
  EW_GLYPH( 0x00C3, -1, -29, 23, 29, 21, 0x00016687 ),
  EW_GLYPH( 0x00C4, -1, -28, 23, 28, 21, 0x00016C06 ),
  EW_GLYPH( 0x00C5, -1, -28, 23, 28, 21, 0x000170F1 ),
  EW_GLYPH( 0x00C6, 0, -23, 31, 23, 32, 0x000175F8 ),
  EW_GLYPH( 0x00C7, 1, -23, 21, 30, 23, 0x00017C0A ),
  EW_GLYPH( 0x00C8, 2, -29, 18, 29, 21, 0x000181CE ),
  EW_GLYPH( 0x00C9, 2, -29, 18, 29, 21, 0x00018627 ),
  EW_GLYPH( 0x00CA, 2, -29, 18, 29, 21, 0x00018A7F ),
  EW_GLYPH( 0x00CB, 2, -28, 18, 28, 21, 0x00018F10 ),
  EW_GLYPH( 0x00CC, 0, -29, 7, 29, 9, 0x00019346 ),
  EW_GLYPH( 0x00CD, 2, -29, 6, 29, 9, 0x0001946D ),
  EW_GLYPH( 0x00CE, -1, -29, 11, 29, 9, 0x00019574 ),
  EW_GLYPH( 0x00CF, 0, -28, 9, 28, 9, 0x00019752 ),
  EW_GLYPH( 0x00D0, -1, -23, 23, 23, 23, 0x00019890 ),
  EW_GLYPH( 0x00D1, 2, -29, 19, 29, 23, 0x00019CE4 ),
  EW_GLYPH( 0x00D2, 1, -29, 23, 29, 25, 0x0001A0CC ),
  EW_GLYPH( 0x00D3, 1, -29, 23, 29, 25, 0x0001A6BB ),
  EW_GLYPH( 0x00D4, 1, -29, 23, 29, 25, 0x0001ACA9 ),
  EW_GLYPH( 0x00D5, 1, -29, 23, 29, 25, 0x0001B2D4 ),
  EW_GLYPH( 0x00D6, 1, -28, 23, 28, 25, 0x0001B92C ),
  EW_GLYPH( 0x00D7, 2, -18, 15, 14, 19, 0x0001BEE7 ),
  EW_GLYPH( 0x00D8, 1, -23, 23, 24, 25, 0x0001C15D ),
  EW_GLYPH( 0x00D9, 2, -29, 19, 29, 23, 0x0001C7A5 ),
  EW_GLYPH( 0x00DA, 2, -29, 19, 29, 23, 0x0001CB4E ),
  EW_GLYPH( 0x00DB, 2, -29, 19, 29, 23, 0x0001CEEA ),
  EW_GLYPH( 0x00DC, 2, -28, 19, 28, 23, 0x0001D2CD ),
  EW_GLYPH( 0x00DD, 0, -29, 22, 29, 21, 0x0001D642 ),
  EW_GLYPH( 0x00DE, 2, -23, 18, 23, 21, 0x0001DA8C ),
  EW_GLYPH( 0x00DF, 2, -23, 17, 23, 20, 0x0001DDDD ),
  EW_GLYPH( 0x00E0, 1, -23, 16, 23, 18, 0x0001E16D ),
  EW_GLYPH( 0x00E1, 1, -23, 16, 23, 18, 0x0001E575 ),
  EW_GLYPH( 0x00E2, 1, -23, 16, 23, 18, 0x0001E981 ),
  EW_GLYPH( 0x00E3, 1, -23, 16, 23, 18, 0x0001EDC8 ),
  EW_GLYPH( 0x00E4, 1, -22, 16, 22, 18, 0x0001F23F ),
  EW_GLYPH( 0x00E5, 1, -25, 16, 25, 18, 0x0001F62E ),
  EW_GLYPH( 0x00E6, 1, -17, 27, 17, 28, 0x0001FA95 ),
  EW_GLYPH( 0x00E7, 1, -17, 15, 24, 16, 0x000200A4 ),
  EW_GLYPH( 0x00E8, 1, -23, 16, 23, 18, 0x00020484 ),
  EW_GLYPH( 0x00E9, 1, -23, 16, 23, 18, 0x00020891 ),
  EW_GLYPH( 0x00EA, 1, -23, 16, 23, 18, 0x00020CA2 ),
  EW_GLYPH( 0x00EB, 1, -22, 16, 22, 18, 0x000210EA ),
  EW_GLYPH( 0x00EC, 0, -23, 7, 23, 9, 0x000214DB ),
  EW_GLYPH( 0x00ED, 2, -23, 7, 23, 9, 0x000215E4 ),
  EW_GLYPH( 0x00EE, -1, -23, 11, 23, 9, 0x000216DC ),
  EW_GLYPH( 0x00EF, 0, -22, 9, 22, 9, 0x0002186E ),
  EW_GLYPH( 0x00F0, 1, -23, 16, 23, 18, 0x0002197E ),
  EW_GLYPH( 0x00F1, 2, -23, 14, 23, 18, 0x00021D9B ),
  EW_GLYPH( 0x00F2, 1, -23, 16, 23, 18, 0x00022061 ),
  EW_GLYPH( 0x00F3, 1, -23, 16, 23, 18, 0x0002240A ),
  EW_GLYPH( 0x00F4, 1, -23, 16, 23, 18, 0x000227B3 ),
  EW_GLYPH( 0x00F5, 1, -23, 16, 23, 18, 0x00022B99 ),
  EW_GLYPH( 0x00F6, 1, -22, 16, 22, 18, 0x00022F9C ),
  EW_GLYPH( 0x00F7, 1, -18, 16, 12, 18, 0x00023324 ),
  EW_GLYPH( 0x00F8, 2, -18, 16, 19, 20, 0x000234E7 ),
  EW_GLYPH( 0x00F9, 2, -23, 14, 23, 18, 0x000238BF ),
  EW_GLYPH( 0x00FA, 2, -23, 14, 23, 18, 0x00023B23 ),
  EW_GLYPH( 0x00FB, 2, -23, 14, 23, 18, 0x00023D7B ),
  EW_GLYPH( 0x00FC, 2, -22, 14, 22, 18, 0x0002400A ),
  EW_GLYPH( 0x00FD, 0, -23, 16, 29, 16, 0x00024246 ),
  EW_GLYPH( 0x00FE, 2, -23, 15, 29, 18, 0x0002463D ),
  EW_GLYPH( 0x00FF, 0, -22, 16, 28, 16, 0x000249AE ),

  EW_FONT_PIXEL( ApplicationNumbersG, 0x00024D87 )              /* ratio 57.19 % */
    0xEF7BDEF7, 0x7BDEF7BD, 0xEF7DBDEF, 0x7BDEF7BD, 0x36F7BDEF, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x40000000,
    0xBDEF7BDF, 0xEF7BDEF7, 0xBDEE3DBD, 0x40000003, 0x20460620, 0x84186084, 0x60845960,
    0xBAE08418, 0x09DE6084, 0x0037BDC4, 0x9E7EF758, 0x0000377B, 0xC5A49020, 0x720DFC9C,
    0x97F0C984, 0xBE02D306, 0x07BCC1FB, 0xF5C3F960, 0x8F01A400, 0x903C1801, 0x064780FE,
    0xB5C02C32, 0x3C048960, 0xE0F7F0FE, 0xA1DEF7BB, 0xA977BDEF, 0x00001F7B, 0xE53DEF7A,
    0x7CBF7BDE, 0x318E577B, 0x0C631A86, 0xA02319F2, 0x900AD86C, 0x80B94161, 0x050C8992,
    0xBCAFBDDF, 0xFF3FDEF7, 0x0003EF7B, 0xEF1FEF40, 0xB9A77BDE, 0x0395DEF7, 0xD2318C73,
    0x82318C7F, 0x01E0C061, 0xC8F03DFC, 0xAE172C00, 0xC0F48805, 0x18780FE3, 0xB8000690,
    0x7EB1002F, 0x00EFDCC7, 0x630576EA, 0x85F186EE, 0xAC2B53E7, 0xEFBE1B85, 0x6F0FFD91,
    0xC079E1C8, 0xFC9A6258, 0x80ACFF01, 0x6FFFA803, 0x4004AC9A, 0x012BD896, 0xDFF44378,
    0x5DC80333, 0x1BF3DE30, 0x267B7F20, 0x78C09ED4, 0x3BC1EAFF, 0x1FF7E400, 0x1FF20034,
    0x0F10002A, 0x803FBF39, 0x00B27EC4, 0x401CD892, 0x7867323C, 0xFC2F8816, 0x23DFD1F8,
    0x79352ED7, 0xAA7CF0BE, 0xE783F3D3, 0xF3E495BE, 0xBF9880FB, 0x0AFFF9BF, 0x00000000,
    0xBFF9F6B0, 0x0B7FE009, 0x7390F5F0, 0x2ACAC00F, 0xE7BC79E0, 0x5E201C54, 0x299E380D,
    0xE3A0595E, 0x46C78019, 0xA2B901A6, 0xC2121101, 0x00998E81, 0xF13C6000, 0x08484402,
    0x000DED07, 0x834C8D8F, 0x1C005CAA, 0x51AF14CF, 0x9E001FB4, 0xC54E7BC7, 0x01318E61,
    0x9C877BE0, 0xF469F937, 0xC03BFCFF, 0x06FFE7DC, 0x2BD8AB2B, 0x8001DAE5, 0xE23D3578,
    0x0FE67677, 0x60CF1D00, 0x3D78CB7A, 0x66972001, 0x00514284, 0x08B2663A, 0x3C600308,
    0x000800D1, 0x04981BDA, 0x8AA80182, 0x450A1905, 0xD3035A01, 0x027B465B, 0xD0272398,
    0xE7677E23, 0x1A7E01F8, 0xB5CA7760, 0xCFB58803, 0xC8004DF9, 0xDEA223DD, 0x9A6E001F,
    0x17A86FBF, 0xD6FD4AC0, 0x00334FF3, 0x45883CFE, 0x10426002, 0x3E469B00, 0x1A660132,
    0x0BC3719F, 0x77B3CBC0, 0x540057C6, 0x007ED433, 0x04E85F30, 0x446F7E20, 0xEC400272,
    0xFCA77B52, 0x7C2DFFE3, 0xDC65F9E9, 0xCF953E30, 0x43F2518F, 0xF0EB3C7E, 0x354078A3,
    0x3872625D, 0x15849AC0, 0x1DE02E1C, 0x04AC50F8, 0x9462E246, 0x1FF30138, 0x61BC3F18,
    0xFFBD77DC, 0xD42FCC37, 0x9887B94E, 0xFBF4533D, 0xFB91217C, 0xFAB2327B, 0xFF5FEA2E,
    0x005F7BEC, 0x78C19CB8, 0x80222278, 0xC778077D, 0x3466301C, 0x3980DEB8, 0x099F8162,
    0x5781F49E, 0x80F0E426, 0x0B2E0FE2, 0x0148243C, 0x00100184, 0x4A400401, 0x65C121E0,
    0x5106C581, 0x8072380A, 0x5B407D27, 0x13119E01, 0x6300DEB8, 0x58F40BC5, 0xF016EFC3,
    0x8CE402FA, 0x14F1D01F, 0xCF81A988, 0x17964078, 0x14031BF8, 0x01E1903F, 0x9060191E,
    0x304132E0, 0x40200200, 0x8261C030, 0x0463C124, 0xF8A0508C, 0x8C254FC0, 0x154F82E1,
    0xC74172C4, 0x7F2B9053, 0x00378DE0, 0x43001DCE, 0x18437CC0, 0x779BE7E6, 0xEFFE78AD,
    0x8AEA7793, 0xE39BE65F, 0xFBF193BD, 0x04C8A84F, 0x7C6F5CBE, 0x55D15589, 0x8756B071,
    0x73800EAF, 0x0000003F, 0x00000000, 0x60000000, 0xBDEF7BDC, 0xDEF7B9E1, 0x880007FB,
    0xB22AAAAA, 0xFE56AAAA, 0xEFDFBF7E, 0xF7EFD617, 0x003EFDFB, 0x00000000, 0x00000000,
    0x02F7BC80, 0x0C84EF20, 0x25E7C53C, 0x7BDCE1BE, 0x05F7BDEF, 0xBDEE2000, 0xEEB00001,
    0x20FED80F, 0x0992814A, 0x365807B6, 0xCA051118, 0x41FCFC03, 0x48CA050C, 0x36501570,
    0x7E051118, 0xC41B280A, 0x0232C0B0, 0x1F94056C, 0xB60188A8, 0x6006CA02, 0xFFF3FFBC,
    0x67B5804D, 0x1FFBD646, 0xDFECB560, 0xC813C8F7, 0xCF55EE57, 0x5F87F2D7, 0x9E5580E8,
    0xB807C964, 0x8058463C, 0x07F267E2, 0x80492948, 0x0010E229, 0x1802C0C1, 0x00000004,
    0x0600B040, 0x60800971, 0x45300924, 0x4A400E2C, 0x14500A99, 0xF2E02C8F, 0x613785F1,
    0x57C92795, 0xD7CF55EE, 0x896B07E2, 0xFC8F7DFE, 0x333DE807, 0x007FF462, 0xF20FF718,
    0xE8276300, 0x0BFEB01D, 0x09D14EAC, 0xFE60BD9E, 0x26F584BF, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x9FFBE780, 0x8801DFB3, 0x31193DFD, 0xEC40FEE6, 0x5FBFBC61,
    0x4E83E787, 0xEB559ECF, 0x2583CF0E, 0x4397103F, 0xD2300785, 0x20079183, 0x13FFB504,
    0x98000520, 0x9A2000A1, 0x61FE0017, 0x86FC000E, 0xBB1002F1, 0xDC801FE4, 0x6001D8C3,
    0x003B54EC, 0x7F30FF3C, 0xF42FCC00, 0xC57CC00B, 0xAF1800B7, 0x1C001EF8, 0x933000BA,
    0xFBF7EFFF, 0xDFBF7EFD, 0x543E17EF, 0x55555555, 0x00000315, 0xFF3FF7F3, 0xFFE401EF,
    0xBE7C8CAD, 0x34EC405F, 0xEA57DFDE, 0xF730BF0F, 0x8CB7E7AC, 0x82F91E26, 0xC731930E,
    0xF2112803, 0x00C00DDD, 0x00122580, 0xA880169D, 0x805E32DF, 0xFE657E7D, 0x04D42401,
    0x675FBFD0, 0xACC00EF6, 0x7E32FF5A, 0x2785F000, 0x0F0F1000, 0xDF9E0400, 0x732600BF,
    0x18C01E54, 0x26786732, 0x8F8FC3C8, 0xDEAB37F7, 0x7EA4E69D, 0x6FDFDEA1, 0x750BF446,
    0xB188CADE, 0xEB0002EE, 0xF18004DE, 0x006E0002, 0x80003D00, 0xBC00025A, 0x5F00059E,
    0x9E000FE6, 0x88001BC7, 0xF000599F, 0x3000BE45, 0x6C8001CB, 0x89C0006B, 0x23D000D1,
    0xE58C002E, 0xA3F0001D, 0xDEF7BDEF, 0x01DEFFC9, 0x7BDBE000, 0xDEF7BDEF, 0xC8F7B7C5,
    0x6318C631, 0x31AC918C, 0x00000000, 0x00000000, 0xF7BDEE00, 0xBDEF7BDE, 0xF0000313,
    0xAAAAAA30, 0xFF9712AA, 0xFDFBF7EF, 0xE15FBF7E, 0xE9000111, 0x1B0C8001, 0xBC631600,
    0x077FF3FF, 0xCCF673F8, 0x185FB9C8, 0xFDFDE33C, 0x1E1F9866, 0xEF559EE6, 0xC9E4CF4E,
    0xFCBE417A, 0x807FFDF8, 0x4000721A, 0x25C000F1, 0x12210000, 0xFCFB21C0, 0x67894017,
    0x54CC03F3, 0xA0BC6951, 0xCC27345A, 0x7F79EB3D, 0x7F8C97E1, 0x9BEFEF1A, 0xFC607BE2,
    0xEAC8CADF, 0xDFCC00FB, 0x02BFFCFF, 0x195BFF8C, 0x303EFCF9, 0x7EF9E9FE, 0x4E0F9E9D,
    0xB53DF7C4, 0x2B067A76, 0xF3440FBD, 0x780B93F1, 0x3E1C8722, 0x2CFFF380, 0x99FC0006,
    0xFF3FFBC6, 0xEF1920AF, 0xFCF9199E, 0xA337E03E, 0xCF0EBF7F, 0xBB8CF047, 0x9E1DD6AA,
    0xC404E207, 0x604A85E5, 0x3F82230C, 0x01FE43C0, 0x02E4AC10, 0x0078B304, 0xF251911E,
    0x9A286A01, 0x2F2F901E, 0xADFFE5A3, 0xC0F53B5A, 0xEFE6237A, 0x9817A1D7, 0x58C447B7,
    0xEF7585FF, 0x7BDEF7BD, 0x3EF7BDEF, 0x55590000, 0x35555555, 0xBF7E7A88, 0xFBF7EFDF,
    0xE23F7EFD, 0xC3BC001F, 0xA9A8003B, 0xF15E0016, 0x4CD3A002, 0x068A6200, 0x00178740,
    0xC004C4B1, 0xF000330C, 0x42A002F2, 0xFCFE0005, 0x09896001, 0x000A1180, 0xFC003F8A,
    0x0C580029, 0x00094800, 0x208004C9, 0xFF7D4000, 0xE0077673, 0x31193DFB, 0xF7E09DD6,
    0x537DFE88, 0x8CAA0FBC, 0x7F79EABB, 0x4074FE34, 0x1E48B23D, 0x24924FE0, 0x2F364970,
    0x9E1E2988, 0xE21BF3C7, 0x5F03A1D9, 0xBE7BED47, 0x6209BF1C, 0x7EC40B00, 0xDFBFBC73,
    0xBE35FA8A, 0xD559EE61, 0x9547AD37, 0xB4B882F1, 0x92C807CD, 0x36007923, 0x0E000073,
    0x599FC00F, 0x392C807C, 0x882F1946, 0x697C7E13, 0xEEB555EE, 0x0F624CF0, 0x0EBF7FA3,
    0xDFD883F3, 0xEE631193, 0xFF7CF017, 0x803DFFF3, 0x464F7DF8, 0xEC13B7D6, 0x4DFBFD12,
    0x34DE2763, 0x777AAAEE, 0x38A621C4, 0x1E35E301, 0x0AC0958B, 0xA40361C7, 0x96013047,
    0xCC580048, 0xF1240143, 0x206601F0, 0x34607E4B, 0x67B3C2F8, 0x20A3FF55, 0xEFEF1A76,
    0x267F7CB7, 0x188AEFF9, 0x60209F7D, 0x2BD9CEFD, 0x400245FC, 0x0DFFB149, 0x9913F0A8,
    0xC98AE00F, 0x65BC0B92, 0x7BFA1D06, 0x3469EE6A, 0xEF9E9FE2, 0x06CF0EF7, 0xC888F763,
    0xDC41F7E7, 0xB880037B, 0x000006F7, 0x00000000, 0x000DEF71, 0x800BDEF2, 0x0002F7BC,
    0x00000000, 0x00BDEF20, 0x03213BC8, 0x8979F14F, 0x9E00006F, 0xFFE6000F, 0xFFAC005B,
    0x4FA2009B, 0xE41798A7, 0x7588577B, 0xFDF8C4DF, 0x1D3EC867, 0xC62EF678, 0x7C605FFB,
    0x09EDFA83, 0x0015FE80, 0x804AFFE8, 0xF6427BF1, 0xEA00F7FF, 0x77D49DBB, 0xFAC401DE,
    0xDCC427EF, 0xF8C095FF, 0xBEC83BEE, 0x9EF73100, 0x7BC60001, 0xBDEE39DE, 0xEF7BDEF7,
    0x3FDEF7BD, 0x55544000, 0x55555555, 0xFDFCAD55, 0xEFDFBF7E, 0x7EFDFBF7, 0x03EFDFBF,
    0x00000000, 0xDEF71800, 0xF7BDEF7B, 0x1FEF7BDE, 0xAAAA2000, 0xAAAAAAAA, 0x1378D6AA,
    0xDFFF9800, 0xEF6A0000, 0x06F8C007, 0x804FFBE3, 0x7C87EF67, 0xE3002BFF, 0x7D90CFFB,
    0xDEF9003B, 0x37DD6215, 0x53A7D101, 0xDAC00BCC, 0xBDE30005, 0x7FD72005, 0xC2EB10CF,
    0x5277FBF3, 0xEF54E9DF, 0xFF5C8AF9, 0x9BF183DF, 0x9DFEFD41, 0x57E7D900, 0x7FDF9E00,
    0x7CF00005, 0x3BF673FF, 0x93DFDC80, 0x17EE6311, 0xBFD90EE2, 0x43F30ADF, 0xAAAFFAA7,
    0x6299E9DE, 0xE1E40F89, 0x600AC2A7, 0x372A190C, 0xBF3C62C0, 0x493003FF, 0x00A93C00,
    0x005C7E30, 0x00BA1FEA, 0x02D617D4, 0x1AB0BE30, 0x01BA1B80, 0x002D4318, 0x2E000714,
    0x0182000B, 0x01BDEF00, 0xBF000000, 0x0000277B, 0x40000000, 0xCFFF77CC, 0x019BFB39,
    0xCEFC6000, 0xC446473B, 0x0DF3DE78, 0x25DBE000, 0xEFDFBFAA, 0xFB3C27EB, 0x1FFE4005,
    0xF5BF3DE3, 0x3BEB3D54, 0x003B9A6F, 0x9EF466F2, 0x32FFCC00, 0xF193803E, 0xBF40005F,
    0xC47781AA, 0xE7DAC07F, 0xFEF726FF, 0x8C2565CC, 0xBFC607A9, 0xCFDCE447, 0x07E9D360,
    0x7FA89AAF, 0x89EFBE7A, 0xCFC0C7DF, 0xF22E3E42, 0xCF7DF88B, 0x1E4C75F3, 0xB23C512C,
    0x582E86F0, 0x4A440C83, 0xD4A307B6, 0x302C7E04, 0x978D8F05, 0x00FE4803, 0x78944C32,
    0xA6018300, 0x3C320C10, 0x22078700, 0x124C103D, 0x14C064A0, 0x00458203, 0xCF882872,
    0x04824924, 0xCBF0B8FC, 0x90F08978, 0x3C9A80A9, 0xCA0747E8, 0xE1788F1F, 0x5BE210F9,
    0x2557099E, 0x79EFE69D, 0xE7246FBE, 0x03E78FBB, 0x549C684F, 0x5D8CF7DF, 0x3FA2278C,
    0x63267B40, 0xEEF18CAF, 0xAC6227E8, 0x04F7D8BD, 0xE893BCB3, 0xF893D9FF, 0x629DD9CE,
    0x37C0BF0F, 0x00005FBC, 0x40FD0F6A, 0x7B73CBFC, 0xBF7EA000, 0xF1016F8C, 0x3ED6237B,
    0x9EA7CF5F, 0x95F9DFD9, 0xF3001FB1, 0xBD678A76, 0xD77BEFDF, 0x13B7EA13, 0xFBFEB100,
    0x2223239D, 0xBFFF7CC7, 0x7BCC0002, 0xE00000EF, 0x600007C3, 0x0001690C, 0x1313F1F8,
    0x331A6000, 0x2780007C, 0x003194FC, 0xBCB94380, 0x0E4A2000, 0x8000A84F, 0x262587C9,
    0xF83C7C00, 0xA46001F3, 0x0594A891, 0x1E07C7C0, 0x058B000E, 0x30013C7E, 0x83180543,
    0xEEA7F009, 0x3BDEF7BD, 0x005900F8, 0xA8F80B20, 0xEEEEEEEE, 0xE1E05C1E, 0x5AD6B5AE,
    0x12A6AD6B, 0xA801652A, 0x07C383E4, 0x28898F80, 0x10CC001E, 0x0254330F, 0x8FC38A20,
    0x2A5E0003, 0xBDEF7BDF, 0xFFF3DEF7, 0x910000AD, 0x4601F7D5, 0x248D5555, 0xBFBC037E,
    0xDBF7EFDF, 0x0B897FFF, 0xC697F200, 0x1E1E0000, 0x0012E000, 0x800061C0, 0x1000B258,
    0xE0BC4773, 0x7BDEF7BB, 0x15F99BCF, 0x18022000, 0x23555555, 0xDE07EF8C, 0xFBF7EFDF,
    0x52F9F6FD, 0x73C000FD, 0x90000D43, 0x7F000145, 0x3870000E, 0x03162000, 0x643FC600,
    0x7EFDFDE1, 0x77EFDFBF, 0x8C2F10F6, 0x0AAAAAAA, 0x22002BF2, 0x0BFDF3C6, 0x73EEF3C0,
    0xC001EECE, 0x44737FFC, 0x97FB58C4, 0x9E9BDF80, 0x15BFB7F7, 0x2BF00F6A, 0x1ACDFFE3,
    0x9C479F4F, 0x13B19740, 0x91FC95F0, 0x5E001C53, 0x9585F49E, 0xCD53E400, 0xBE001FC3,
    0x5148CADF, 0x030F0000, 0x01304000, 0x00000000, 0x9300002C, 0x0C900000, 0x44310000,
    0x1EED4001, 0xE001FC7E, 0x0CCFD63F, 0xC5C8002B, 0x01F14C4F, 0xD06786F0, 0xE204ED43,
    0xFF07F257, 0xB37FFC61, 0xC96F79EA, 0x867B1013, 0x6FBF7F7A, 0xC00F6786, 0x88C9FB7B,
    0xC0BFB5A8, 0x7BDEF7BA, 0xFDFF3DEF, 0x72200016, 0x801EDFCC, 0x1AAAAAAC, 0xF017F8C1,
    0xDFBF7EFD, 0x97CFB7EF, 0xE0004BE2, 0x00BC43D9, 0x0AA13880, 0x3F939000, 0x028FC000,
    0x13211800, 0x00092000, 0x0002C580, 0x20000040, 0x0B260000, 0x00492000, 0x00019140,
    0x800053F8, 0x40007C5C, 0x0003509C, 0x5E21EE62, 0xBF7EFDF0, 0xCFFF6FDF, 0x904BE29B,
    0x12355555, 0x22000BB5, 0xC25FED6B, 0x7BDEF7BA, 0xDEF7BDEF, 0x000DEF7B, 0x55559000,
    0x55555555, 0xBF7E7815, 0xFBF7EFDF, 0xDFBF7EFD, 0x000007EF, 0x00000000, 0x00000000,
    0xB0000000, 0xDEF7BDEE, 0x77BDEF7B, 0x59000000, 0x55555555, 0xFCF01555, 0xEFDFBF7E,
    0x7EFDFBF7, 0x00025FBF, 0x00000000, 0x00000000, 0x00000000, 0xEFDFBF3C, 0x7EFDFBF7,
    0xF7EFDFBF, 0xAAAAC85B, 0xAAAAAAAA, 0x3C00003A, 0xEF7BDEF7, 0x7BDEF7BD, 0x00000DEF,
    0xAAAAAAC8, 0x40AAAAAA, 0xDFBF7EFD, 0xFDFBF7EF, 0x001FBF7E, 0x00000000, 0x00000000,
    0x00000000, 0xEF7BDEF3, 0x09DEF7BD, 0x55640000, 0x55555555, 0x7EFDFA82, 0xF7EFDFBF,
    0x000AFDFB, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xB1800000, 0xFE73FF7E,
    0x8C001EBF, 0x88CAEEDF, 0x0177B5AC, 0xBF392ED6, 0x695BEFDF, 0x2D5826FC, 0x553EFFFA,
    0x779BFF4F, 0x0B7C5AA0, 0x345CBD60, 0x32CC005D, 0x02721A86, 0x1C2B19C0, 0xECF0003E,
    0x0001454E, 0x00006088, 0x80001248, 0xB0000045, 0xEF7D8008, 0xFBDEF7BD, 0x0000060F,
    0x4F012219, 0x14155555, 0xBF7F7805, 0xC1F7EFDF, 0xE00003E5, 0x00026349, 0x0003D2F0,
    0x7FC5AA0D, 0x09FF3C01, 0xCFA237AC, 0xFE9EAB37, 0x981D497F, 0xFBCF11FB, 0xA92B7DFB,
    0x7E4037EF, 0x22327DE7, 0x7FFEF3C7, 0x06DEF30F, 0x0177BAC0, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xDD600000, 0xF7BDEF7B, 0x001B7BDE, 0x55564000, 0x55555555,
    0xF7EFCF02, 0xBF7EFDFB, 0xFBF7EFDF, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x0002F7B8, 0x00000000, 0x00000000, 0x00000000, 0x2EF75800,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xFB7C0000,
    0x633C2E03, 0x234A4102, 0x6F153141, 0xFC394BE0, 0xCFBDDD42, 0x10BF9343, 0xE0FD0463,
    0x8C446BD9, 0xBDEF17B9, 0xBDDF000F, 0xBE0001E7, 0x000F7C47, 0x15F11EF8, 0xF11EF800,
    0x1EF80015, 0xF0002FF1, 0x003FE23D, 0xFF88F7C0, 0x23DF0000, 0xDF0000F7, 0x80026F23,
    0x004BE1EF, 0x3783DF18, 0x18F7E001, 0xA4000E25, 0x68C2FFF1, 0x88FF1800, 0x1800AB1F,
    0x5F26783B, 0x9BC17800, 0x380003E2, 0x8C0002D4, 0x40000F45, 0x00004E0F, 0x001FC84E,
    0x099E5F20, 0x0F455800, 0xE217C000, 0x007DEF7A, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xBF7EFEF0,
    0xFBF7EFDF, 0xA30B7EFD, 0xAAAAAAAA, 0xDE0000EA, 0x000DEF7B, 0x01DEF738, 0x009E0016,
    0x05C007F0, 0x94001508, 0xC00B1600, 0xFF00F113, 0x547007F0, 0x400A9600, 0x9FC02E3C,
    0x0F115805, 0xE03F8540, 0x2A5800AF, 0xC0039440, 0x2896059F, 0xC1FC2A00, 0xA58002DF,
    0x00FE5102, 0xCA6167F0, 0x7F0A8002, 0xC0003CFC, 0x1F872152, 0x7967F000, 0x2A0000E4,
    0x003CFDFD, 0xC319E500, 0x13E0000F, 0x000018D7, 0x003F0D23, 0x003C1E00, 0x0918FC00,
    0x00DDEFA0, 0x8C2EF798, 0x0D600006, 0x002E0000, 0x0001A300, 0x80003593, 0x8000B93D,
    0x00068D37, 0x0001CCBC, 0x001714D4, 0x00D1A6F0, 0x00399780, 0x02E29A80, 0x1634DE00,
    0x1DE5E000, 0x714D4000, 0x1A6F0001, 0xF2F0000B, 0xA6A0005E, 0x37800098, 0x01780001,
    0x0009A800, 0xD4009BC0, 0xECE7FFBB, 0xF9E000B7, 0x88C8E6FF, 0x07FF7F31, 0xD1A5FBC0,
    0x90F5FEDF, 0xA6F80BDF, 0x467AF6F8, 0xF985FDAD, 0xFBC8F981, 0x7A7F9E00, 0x09C5A226,
    0x60E9A300, 0xF0003586, 0xF8FC9894, 0x27E1C000, 0xE0001886, 0x121E2309, 0xC13C9000,
    0x622C0002, 0x60800010, 0x18200000, 0x16000049, 0x00007931, 0x062993C9, 0xC3211800,
    0x5E0007C7, 0x0398663E, 0x4988F500, 0xE4012734, 0x53981BCB, 0xECF007EE, 0x4EF02CF4,
    0x8CF5EDF1, 0xCC2FED67, 0x86FEF00F, 0x7AFEDFD1, 0x5005EFC8, 0x444737FB, 0x3FFBF98C,
    0xEF7BDD60, 0xF3DEF7BD, 0x0004ADFF, 0x06FFD591, 0x55555559, 0xDF0D5823, 0xFDFBF7EF,
    0x1F7DBF7E, 0x7C400256, 0x78000F83, 0x12600029, 0x00000000, 0xF10004C5, 0xAE4007F2,
    0xEFA2721B, 0xFBDEF7BD, 0x000710EF, 0xB203FE30, 0x99EAAAAA, 0x7C03DEEF, 0xF7EFDFBF,
    0x1CEF7DFB, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x78000000, 0xF9CE7DBE,
    0x758000F5, 0x444467BE, 0x4007BDAD, 0xFF543AFC, 0xD8D2B7F6, 0x632FF00B, 0xA78D56FF,
    0xF02F4DFF, 0x6007B50E, 0xC61742FD, 0xF5001F14, 0x0DE5E2F2, 0x0F94AC00, 0x1F0004C5,
    0x00118557, 0x078328A0, 0x5C441800, 0x64100002, 0x03000170, 0x200005C1, 0x1800012E,
    0x0003C18C, 0x30A88864, 0x45140002, 0x8FC00131, 0xC01BCBCB, 0xE34CC1EE, 0x0FF14C61,
    0xDFDAC678, 0x32DE1A6C, 0xEFCF03FE, 0x2DE1BCF1, 0xFF632BF0, 0x40C88D56, 0x54DEFC00,
    0x0ADFDBFD, 0xAFFDE223, 0x3DFFF300, 0xED6A2223, 0x4F64567D, 0x73EDF3C0, 0x7D07AFCE,
    0xEF75CC7B, 0x7BDEF7BD, 0x2DFB39EF, 0x31888000, 0xEE601F7F, 0xFBDEF7BD, 0x1F3C3EF7,
    0x318C6310, 0x7DF9A8C6, 0xE000033C, 0x00007C99, 0x00000936, 0x126C0000, 0x3E2C6000,
    0xFFA31000, 0xEEB00E61, 0x7BDEF7BD, 0x05EB0AF6, 0xFF58C400, 0xF7BDCC06, 0xEE8C3DFE,
    0xC6318804, 0xFC8BEFA8, 0xA780004D, 0x60000B79, 0x00017C3E, 0x01F10BF0, 0x0F534400,
    0x341CC000, 0x364B8000, 0xCC98C000, 0x10E80004, 0x3440002F, 0xF77A80F5, 0x1777FCFF,
    0x39BFD8C0, 0xDFAC7232, 0x83FEA01E, 0xF1823518, 0xDA86F01F, 0xF9F6FF67, 0x4CC7F10D,
    0xF6A01BF5, 0x05C38B10, 0x00026CD0, 0x0397122A, 0x58FFF9C0, 0x0015F9E1, 0xEFD42F88,
    0x5000737C, 0xEF3C41FF, 0x8019BF3E, 0x11337FB1, 0x0037DEF5, 0xEFFFFEF5, 0x04EE624C,
    0xFFFDF390, 0x0003C857, 0x351A77B2, 0xC80079F7, 0x0D88DB1F, 0x158A2480, 0x4B220C00,
    0x3F2003FC, 0xBB8C3A7E, 0x54DE6202, 0xF442F8C3, 0xFF7EFFF9, 0x43F1A6F3, 0x95590BFD,
    0xDF8C1B98, 0xAC88CAEE, 0xF718BFFE, 0xBDEF7BDE, 0xEF7BDEF7, 0x000FF7BD, 0xAAAAA880,
    0x555460AA, 0xFDFCAD55, 0xEFDFBF7E, 0xF7EFF457, 0x1F7EFDFB, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x036F7580, 0x00BBDD60, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00010000, 0x00120C5C, 0x00264E49,
    0x31847326, 0x4310E400, 0x14BC0171, 0x1817632F, 0xBC65E2BF, 0xBFD9DF8C, 0x0EF1767D,
    0x51882FCC, 0x04DFC823, 0x119EF9CF, 0x5FEF9F22, 0x006DEEF8, 0x1DFEF790, 0xF8F80026,
    0x80028A54, 0x01C7C987, 0x260AA540, 0x45C38005, 0x28007894, 0x00387059, 0x13C07866,
    0x7CFE002A, 0xB20164C0, 0x1F1F0254, 0x7200E1E0, 0xE27C0918, 0xC078F801, 0x0CC00B48,
    0x00F8F81F, 0x32C07258, 0x3F1F0006, 0xC003E13C, 0x988E0F48, 0x12C9F000, 0xC9800165,
    0x0003E2DF, 0x397F28F1, 0x9F238000, 0x2A0001F2, 0x000098B5, 0x0001548F, 0x5800E1F0,
    0x7E00BEF7, 0xA804DEF7, 0x01E2BF7B, 0x6C014288, 0x002308F6, 0x4500D845, 0x96C01E29,
    0x4C8600A5, 0x6B28019B, 0x4514018B, 0xBB4C81B1, 0x4D9B01F8, 0x587807A6, 0x3C180A99,
    0x36C03128, 0x1E011942, 0x3C079B05, 0x08C14D8A, 0x150D8A1B, 0xA285C536, 0x7F058620,
    0xB050C451, 0x132500C5, 0x189F81E5, 0x59B01478, 0x1450DA64, 0xC2A06C23, 0x846078A6,
    0xC780514D, 0xCA0996C3, 0xD80996C3, 0x2D80A506, 0x14014786, 0x140D8463, 0x807F08CF,
    0x2028AA11, 0x00287DD3, 0x008DBFE5, 0x002AE794, 0x01F8F5B6, 0x00D965FC, 0x50050C94,
    0xC800A911, 0x87800624, 0x14580018, 0xCC029B00, 0x90024F7B, 0x96649EE7, 0xD09C0038,
    0x068C2F89, 0x213986F8, 0xE600D63E, 0x4D40BC63, 0x0E2D180E, 0x83F29BC0, 0x9C013A13,
    0xE97C3CF0, 0x978C0099, 0x7E47CC5F, 0x7C4AB000, 0xF0000E2D, 0x00EF0A85, 0x5A87E200,
    0x01300000, 0x7C87F200, 0x3C270001, 0xF40007CC, 0x2FC5BE30, 0x5C4B5000, 0x4007C43D,
    0x86E0F47C, 0x50BE005A, 0x1DE5E313, 0x03F25580, 0xAA01C4AB, 0x42F80379, 0xAB2F10BE,
    0x3E63F100, 0x0068D2F8, 0xAC2FC3CF, 0x5F000712, 0x7BDF4F8A, 0xF77E0012, 0x2F10F4FE,
    0x8F896600, 0x88026A1B, 0x4BC60BE6, 0x6617C007, 0x07E21AC1, 0xE05F2598, 0xD101E784,
    0xFCBE401C, 0x03D0BE02, 0x3C689560, 0x6F0016A5, 0xC4FC4398, 0xAE6C800B, 0x30009D0E,
    0x67A6F8CB, 0x786F0002, 0x90000FE4, 0x0000378D, 0x00005116, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xDEF7BDEE, 0xF7BDEF7B, 0x001F7BDE,
    0x55555000, 0x35555555, 0xF7EFDF80, 0xBF7EFDFB, 0xA1F7EFDF, 0x0DF0001E, 0xB78001F9,
    0x98000DC4, 0xC0025F93, 0x8001FA68, 0x0059E138, 0x07C69FE0, 0x0E21DE00, 0x2F939800,
    0x5D346001, 0x3C271000, 0xD3FC000B, 0x3BC000F8, 0xCC001FE4, 0xC0004E29, 0x40007A68,
    0x0027309C, 0x017AA7F8, 0xBF5833C0, 0xFBF7EFDF, 0xDFBF7EFD, 0x186BF7EF, 0x55555555,
    0x00355555, 0xBDEFB000, 0xEC003EF7, 0x63188BBD, 0x00000004, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0xB02318C4, 0xBEC02EF7, 0xD81B2813, 0x0188A80A, 0x15B01F94,
    0x31008CB0, 0xE06CA02C, 0x511180A7, 0x55C0D940, 0x62091940, 0x0FE7E028, 0x11180794,
    0xD81B2C05, 0x8264A01E, 0xFF6C0528, 0xEF7BDEE7, 0x1BDED406, 0x0000C631, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0xC6310000, 0x01BDED40, 0x00DDF600, 0x000C61A8,
    0xF1005E0E, 0xBC004F28, 0xC02F0BE2, 0x80996334, 0xE27CFC27, 0x18635E01, 0xF0C60BC3,
    0xBC0633E1, 0x17866162, 0xA9602A51, 0x3E038660, 0x8164F931, 0xBDD67C31, 0xEF7BDEF7,
    0x7BDEF7BD, 0x0009BDEF, 0x7BDEEB00, 0xDEF7BDEF, 0xF7BDEF7B, 0xDEE71CDE, 0x0FC2F8C9,
    0xCF0B93F5, 0xBF5885EB, 0xDFFF39FF, 0x576EB00A, 0x1DF56446, 0x7EB11D98, 0x1C43D7FB,
    0x8D77F8B4, 0x92C87B5A, 0x7C01CE4F, 0x37FBF90C, 0x63100120, 0x9E172FBE, 0xDFB39F77,
    0x37F72099, 0x81739047, 0xF6FAE43B, 0x561BBFFD, 0x033F7FAA, 0xFC069B01, 0x09880161,
    0x2F881F0F, 0xF7F31F08, 0x1ADEF3D4, 0x7EFA9A30, 0xD3B98CDF, 0x464FDAC3, 0x957FF58C,
    0x0FF7FE31, 0x00000000, 0x00000000, 0x7C800000, 0x15FFE7FF, 0x9199EE60, 0xF903EFCF,
    0x3AFDF3C6, 0x7DF01F3C, 0x9E9BAD4F, 0x7103D607, 0x6302F038, 0xA00460A8, 0x87009878,
    0x00000004, 0x08700983, 0x6228A012, 0xD03C3502, 0x45E5F203, 0x7AABBFC4, 0x8EA81EA7,
    0x88ADFBF5, 0x27ED605E, 0x805EE723, 0xF673EEF1, 0x3DBF100A, 0x5BE8C447, 0xBFD92FF0,
    0xD25F11EF, 0xF55FF3C3, 0xA65E2D7C, 0x2A1AC0FC, 0xBE00F09F, 0x06CFE27C, 0x8237FFCC,
    0x00048009, 0x26480002, 0xC00CFE00, 0x8566FFF8, 0x1ACBF00F, 0xC60BE4B1, 0xCD378F14,
    0xFF79EB3D, 0xE32EC3E1, 0xE2337DFD, 0xF7EFC42B, 0xFBE8C464, 0x77BA8000, 0x00000001,
    0x00000000, 0x3ED60000, 0xFE404F67, 0x778C447B, 0xF54EE407, 0x7E31DEFD, 0x3DFE86F0,
    0xC813F735, 0x897C0B52, 0xF0F80387, 0x26060167, 0x00089809, 0x98000206, 0xA7F12024,
    0x3E1E0F00, 0xC69C87C0, 0x6F01DE0B, 0xE78E7B9A, 0x8C3D8137, 0x2F157F77, 0x4456FD88,
    0xE300BDCE, 0x3BB39FFD, 0x199EDF01, 0x817FD631, 0xF7FB23DF, 0xBA2FD4EB, 0xB555FF3C,
    0x4C4B30F6, 0xA13881F9, 0xF201F0AD, 0x8C62E231, 0x2318C631, 0x7BDE9278, 0x7EF7BDEF,
    0x580005C8, 0xBDEF7B9C, 0xEF7BDEF7, 0xD8001E0C, 0x6628006C, 0x97FFF600, 0x403FC539,
    0x4DE95C8F, 0xB9AAAEE3, 0x25D8B897, 0x877BF7FA, 0xEFC40FFC, 0xEB223337, 0x7EA00FFD,
    0x61FFF3FF, 0xA1232AFE, 0x935FBF59, 0x106ABAA1, 0xBBE0000C, 0x06EF759B, 0x6797EF40,
    0x43C72BEF, 0x0000318E, 0x00000000, 0x00000000, 0x00000000, 0xEB000000, 0x70EECE77,
    0xBBFE4BEE, 0x05BAC622, 0xBF7D53B1, 0xBF07C477, 0xCD4F7EB0, 0x47C8233D, 0x1E077835,
    0xA6C3E00E, 0x02298500, 0x08001890, 0x29820006, 0x3C189002, 0x171F8580, 0x5A9462F0,
    0xA1BC07A0, 0x7E78CF7F, 0xD53FE40B, 0x178ABFB7, 0xC4577F8C, 0x6021F758, 0x1DD9CEFD,
    0x7FFCF38B, 0x6679B003, 0x8D350356, 0x55ED4A31, 0xC45F7CF5, 0x7FA32BE5, 0xFC89EFBF,
    0x3DF7E20F, 0xFDF59119, 0x07FBFF07, 0x00000000, 0x00000000, 0xFBD10000, 0xE780BD9C,
    0xFA3111AE, 0x9E2FC89F, 0x3CA6F7EF, 0xA9EFBF10, 0xF0A34FF9, 0xF031F816, 0x09170F00,
    0x80004104, 0x00000001, 0x00000000, 0x00000000, 0x80000000, 0xFFC03DFF, 0x0F7FE01E,
    0x00000000, 0xEFFC0000, 0xFF80001F, 0xF00003FD, 0x00007FBF, 0x00000000, 0x00000000,
    0x00000000, 0x08810C00, 0x763F53CB, 0xCE47BF7E, 0x8DCF1199, 0x00003DFF, 0x00000000,
    0x00000000, 0x3F7BEC00, 0xF9E1BF00, 0xF9E57E00, 0xF9E57E00, 0x7CF2BE00, 0xF9E3DF00,
    0xFC47DE00, 0x3F126200, 0x14F49E00, 0xBCBDF3C0, 0x23D4F880, 0x617E005F, 0x5E688016,
    0x06C96600, 0x006B0DE0, 0xA005C9C8, 0x3773E8D3, 0x00000000, 0x00000000, 0xF7CAFBFF,
    0xC2BFFE7F, 0xFFE7FF78, 0xCCF7300D, 0x6B2DFAC8, 0xFE7C8CCF, 0xDFAD7A85, 0x676FD26F,
    0x1F12BEFF, 0xF55DFE32, 0xABD8E64E, 0x07895F9E, 0x370F80EF, 0x407890E0, 0x2E4C0312,
    0x00090412, 0xC0016001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x7DFF8000, 0xF673EF65, 0x46BD9E02, 0xA27FE8C4, 0xBDFBF33E, 0xFE320F29,
    0xA77353EF, 0x880EF031, 0x0C03C28F, 0x02C0912E, 0x0000C000, 0x00000000, 0x00000000,
    0x00000000, 0xF7D40000, 0x0277673F, 0x193DFBF1, 0x21BFD631, 0xEFEF1976, 0xF17AC2B7,
    0xAACF67A5, 0xA34E69DE, 0xE1E40F8C, 0x1807C7E7, 0x00A0C725, 0x0124CF36, 0x08004392,
    0x93020010, 0xA0CE4804, 0x8FCF3600, 0x8E4A300F, 0xF207C651, 0xCF4BE3F0, 0xD3BD559E,
    0x8C3D8933, 0xA15BF7F7, 0x3DFD883F, 0xBFFA3119, 0x7C9FBFF0, 0x15FFE7FF, 0x2333D9E0,
    0xD607DF9F, 0xD7EF9E2F, 0xE320F9E1, 0x375A9EFD, 0x4273053D, 0xC07E1A1C, 0x04C82328,
    0x40161E6C, 0x04180090, 0x04C10600, 0x50092438, 0x8C0988A2, 0xC407A0A1, 0x77F885E1,
    0x07A9BAD5, 0x7EFD63B2, 0xB5817A1D, 0xFF9C8C9F, 0xFFDF1805, 0x0004DFFC, 0x00000000,
    0x00000000, 0xCFFDFCC0, 0xC8BBDC5E, 0xA3195BFF, 0x54EE4277, 0x71CDEFDF, 0xF7EB0DE0,
    0x40D7FCD4, 0x0BE0D196, 0xBC407C3C, 0x428053F8, 0x02C48090, 0x8000B020, 0x9B120060,
    0xE1585007, 0x5310F807, 0xF407A07E, 0x9E39ECF0, 0x197602DF, 0x1B2AFEEF, 0xC64F7DF8,
    0x3C00FFE8, 0x05ECFFDF, 0x00000000, 0x00000000, 0xAFBFF000, 0xE0BD9FFE, 0xC6C632B7,
    0xAB7EFAAA, 0x54F7E311, 0x1401780F, 0x00C00440, 0x00000000, 0x00000000, 0x00000000,
    0x673FF7F3, 0xBFFC8277, 0xFD631195, 0xDF9A6E1B, 0x0F5856FE, 0x19F7EA4F, 0x24BC7F4F,
    0x24C6AA05, 0xFEDF8178, 0xEF39E158, 0x62688013, 0x00F7677E, 0xB1813F73, 0x7C612FF6,
    0xBA899BE7, 0xFFEF3C01, 0xF7A721DF, 0x1FAE41B7, 0x0063597F, 0xF8170E13, 0xFC619EB8,
    0xD3DCD557, 0xD90FF878, 0xD43BDFBF, 0x27BFB11F, 0x7EF9F223, 0xE203E601, 0x05500EF7,
    0x30000000, 0xEF7BC7EF, 0xB376B000, 0x92311EF6, 0x00000633, 0x00000000, 0x00000000,
    0x5F160104, 0x7F218C0D, 0x667FC1FB, 0x01BB9FF8, 0x0002EF75, 0x00000000, 0x00000000,
    0x00000000, 0x40080000, 0x3F801860, 0xE0F00442, 0xF89BC1A1, 0x7353DF98, 0xF2F181CF,
    0xD477BF7C, 0x667FE61F, 0xC0BF7D64, 0xE601B7BC, 0x078673BD, 0x92962FE0, 0xE152C803,
    0x0E1E03F0, 0x27E01E95, 0x182C8F0A, 0x3F8F84C3, 0x0E41F8FC, 0x80631E0B, 0xFD23144F,
    0x1F0E1580, 0x2C528813, 0xAA238015, 0xF0A801C2, 0xC0078BFF, 0xC00596B4, 0x800F844F,
    0x8001C831, 0xBBF01F1F, 0x6F738037, 0x7F7EE700, 0x40A08C0A, 0x506C5B85, 0x995360D8,
    0x78146C0A, 0xC2647854, 0xD32064A3, 0xC2A147E6, 0x8C3C50A5, 0x0A8DB1B0, 0x28997F1B,
    0x851E5285, 0x0C5703C7, 0x865B6C31, 0x4A283F0A, 0x2D945289, 0xB6D94406, 0xC7B61187,
    0xB28AB602, 0x06D32A51, 0x6C2A661E, 0x900F13F9, 0xC50315E9, 0xC23C00F4, 0x03F89903,
    0x58506C6C, 0xD8141500, 0x7BFF008C, 0xFBDCF017, 0x884DE5E7, 0xE25A871F, 0x40F42F85,
    0xA559350F, 0xE474B816, 0xB4605E2B, 0x4BF09DF8, 0xE19E1AC0, 0x209C0079, 0x0072003F,
    0x2F926F00, 0x30C69A80, 0xF72F100B, 0x4BF006F2, 0x7F258C6B, 0xD36479E0, 0x3F1079E9,
    0x82FCBC0E, 0x3501CC2F, 0x7C9667C5, 0xEB354E81, 0xDC600FDE, 0x00552ABB, 0x588F1E3E,
    0xC7D2A580, 0x21C2781F, 0xC5700A87, 0x51098F83, 0x83F0AC16, 0x32883E15, 0xC0397F12,
    0x07CA21E1, 0x4C98F854, 0xA7E994C0, 0x89E3F002, 0x618C00E1, 0xF800F12F, 0xC009BFA9,
    0x8800FCA4, 0x1C000C62, 0x6218003E, 0x02A7C001, 0x00BC3D00, 0x2FFBFFE3, 0xAC8800CF,
    0x59003F94, 0x80077391, 0xDEF7BDDF, 0xF7BDEF7B, 0xDE00006E, 0x7BDEF7BD, 0x72682FEF,
    0x18C6318C, 0x005D0DE3, 0x00B986FC, 0x005E32E8, 0x007F92E6, 0x00138B46, 0x037E1FF2,
    0x03D61380, 0x035437C0, 0x01FC8FD0, 0x01712CF0, 0x04BE3F18, 0x39AC2710, 0x8C6318C6,
    0xF592A231, 0xBDEF7BDF, 0x000FDEF7, 0x7FF78800, 0x0CCFF80E, 0x073E8730, 0xA6015CB6,
    0x00200009, 0x06004000, 0x16048440, 0x51B6621B, 0x1E46F388, 0x6027F8C0, 0x6F3880EC,
    0x7CC40F8C, 0x01930155, 0x8603F844, 0x40000000, 0xC2005800, 0x02B96C04, 0x01CFA1CC,
    0xBDC195FF, 0x0000000F, 0x00000000, 0x00000000, 0xB8C00000, 0x8C404F67, 0x7FDC61B7,
    0x29B20159, 0x02001920, 0x08170000, 0x86004200, 0xE04A9404, 0xFC814E17, 0xC0FDF8C5,
    0xF9E005F3, 0x8C5FC802, 0xE17E0FDF, 0x02547814, 0x00080243, 0x0002E080, 0xC8249000,
    0xFF718516, 0xF1880665, 0xE7DE8836, 0x550056FC, 0xA888D7B9, 0x8C27BF3E, 0x04BF17F7,
    0x9EEE77D4, 0xFFDCF788, 0xCE7A805B, 0xEFE7219D, 0xBD4446BF, 0x03DEE33F, 0x01EF7180,
    0x30422DF4, 0x5CB0420C, 0x420C3042, 0x08419608, 0x04084586, 0x00000000, 0x88002F7C,
    0xD9400127, 0x002B6000, 0xC00072B0, 0xF5880288, 0x00EFE73B, 0x1115DB9E, 0x8BEB05FA,
    0xF987DF98, 0x7FF15F22, 0xC99A561F, 0xFAE0F42F, 0x13128F9A, 0x5D64F995, 0x3C541E99,
    0x904B7FFC, 0x22C0DBF8, 0x82005150, 0x24980591, 0x3C3202E5, 0xFF7E14FC, 0x18CC4B1F,
    0x7E256415, 0xE1C6DBA1, 0xD498AF90, 0x60F3C33A, 0x0EBFD075, 0x27EB03F3, 0x17EE7233,
    0xF3FFBDB0, 0x4540077F, 0x03E64001, 0x007F1E00, 0xC80015B0, 0xAC40004A, 0xDFFF39DF,
    0x2BB79804, 0x09DDEB22, 0xEFE61BE6, 0x06E30EF7, 0xADEFC5A2, 0x8D91FB9A, 0x2F816619,
    0xA0361C2D, 0x00832546, 0x924BFBBC, 0x367F0004, 0x03C27800, 0xC437BA80, 0x00DEF7BD,
    0xBD9E0000, 0x7BDEC63F, 0x1E318807, 0x00318C72, 0xF0400120, 0x07C58000, 0x00E67E00,
    0x0BC72F80, 0xFC3DF880, 0x035BFFCF, 0x46462AA6, 0x6FCFBD3E, 0x4279F79F, 0x9F7BEFAE,
    0x31C23510, 0xCF3F7FBF, 0x115BEEFC, 0x04D6BD63, 0x7E9E1BE0, 0xCE7DAC67, 0x4E7BF1EF,
    0x8F6F7846, 0x894EFA88, 0xC610FF51, 0x7F8C299A, 0xBB7C4318, 0x09E4FFDF, 0xBC0FD49E,
    0x098B6165, 0x07A4511C, 0x805848B0, 0x008C3060, 0x0F8FC98A, 0x63072BE4, 0xCF10DFA8,
    0xA0D61F0E, 0xF05F3DF6, 0x15CB4F0E, 0x249C4B90, 0xFBB7DF4E, 0xD3C6EFF7, 0x5AE621BF,
    0xFD279AC5, 0xF8007DEE, 0x34BD3BDF, 0x94C69980, 0xE6802E53, 0x401BC3A2, 0x5A206787,
    0x7E298834, 0x40730E60, 0xA6803787, 0x402E5391, 0x6978AA3D, 0x28DA1D00, 0xD39001E3,
    0x800B9A78, 0x0732BF4E, 0x6F7BDEE0, 0xF7BDE60A, 0xC000007E, 0x3DEF7BDE, 0x7BDEF779,
    0x6318C637, 0x6319E08C, 0x0000918C, 0xDEF7BDC0, 0xDEF7D8BB, 0x00003F7B, 0xF7BDEF60,
    0xEF7BBC9E, 0x8C631BBD, 0x8CF04631, 0x0048C631, 0x00000000, 0xFBDC0000, 0x00000000,
    0x1F7B8000, 0x3EF70000, 0x00000000, 0xFDF50000, 0x804DF9CF, 0x4464F7EF, 0x3F413BBD,
    0x657DFDF2, 0x9EE5301C, 0x98CAFCF5, 0x5C04F0C8, 0x1500C0FE, 0x2D439023, 0x3707F670,
    0x8C0017F4, 0x801F73C9, 0x7C522BD8, 0x18F604BF, 0x7FA8BFF7, 0x87F8CCC3, 0x4FF583DE,
    0xFD8C0CB6, 0xC869DC86, 0xF10F7300, 0xE407E2DA, 0xF0CF954E, 0x31F812FC, 0x01BB549D,
    0xD625DCA6, 0x467E21FF, 0xE437BF12, 0xE6767BF7, 0xEA4EF301, 0x204FFD1B, 0x00083DDE,
    0x07E8BD8C, 0x98D1FD00, 0xE7827FBF, 0x3E544991, 0x6F0F00C0, 0xE4912E42, 0xAD557B12,
    0x29E85E1D, 0xB0EBF7FA, 0xCCF77816, 0xC3773188, 0xBDC67FBD, 0x0000001F, 0xE7FEFD72,
    0x0007BFFC, 0x4AEFF7E4, 0x1A77CF91, 0x5C9FB580, 0x7E7B9EFB, 0x801FF58F, 0x07BFF5B7,
    0xE4FBBEA2, 0xE66B01FF, 0xAF88017F, 0x3A3037E3, 0x9F7B20CE, 0xC75617B3, 0xCF077B45,
    0xF664F95E, 0xA635583F, 0x5F8C5CAC, 0xF7DBF3AC, 0xF3ED0FC9, 0x1AB1D0F8, 0x8C6095F1,
    0xE5115B91, 0x40BF7E05, 0x329069A9, 0x0338E000, 0x43000096, 0x0002580C, 0x6520D310,
    0xF81BFD00, 0xE5115B3B, 0x4A0B3105, 0xAC743E3D, 0x19E3B185, 0x2B32318C, 0x7D17E317,
    0x1F59D9F6, 0x077B47DA, 0xEA995DCF, 0x98D561FD, 0x88338E8C, 0x26FCE7DE, 0x3585C756,
    0xC400BFF3, 0xE01BF1D7, 0x81EFFD6D, 0xF93EF7A8, 0x576B007F, 0x3DCF7DAE, 0x07FD69BF,
    0xBBFDFC80, 0xDEF3E452, 0x9CFBD006, 0xD7B09BFF, 0x0DE72318, 0xFFFFC8D6, 0xC45C8FFF,
    0x0E5925F8, 0xDEB3D773, 0xFFF6305D, 0x8CE099EB, 0x14FFDFEC, 0xD2ABBA46, 0x2FE45042,
    0x9CF78F91, 0xEBE4A57F, 0x58FB3C61, 0xC609EEA0, 0xBD7889BD, 0xBF12B1C1, 0xF19BC5CC,
    0x9A9A3E62, 0x8F56C83A, 0x13898CF8, 0xD170BE5E, 0xCCB34CC3, 0x87A00001, 0x03996699,
    0xC2F9784E, 0xE2556C85, 0xC7CC2633, 0xF01D4D4B, 0x19BC5CCB, 0x0DEBC42F, 0xDEE3958E,
    0xF7BDEF7B, 0xFDEF7BDE, 0x55440003, 0x55555555, 0xDFBF9055, 0xFDFBF7EF, 0xEFDFBF7E,
    0x000000F7, 0x00000000, 0x00000000, 0x3BEBFE00, 0xEF7BDEF7, 0x0000017D, 0xCFFDFAE4,
    0x000F7FF9, 0x95DFEFC8, 0x34EF9F22, 0xB93F6B00, 0xFCF73DF6, 0x003FEB1E, 0x0F7FEB6F,
    0xC9F77D44, 0xCCD603FF, 0x5F1002FF, 0x74606FC7, 0xDEF7519C, 0x585ECF7B, 0x1DED171D,
    0x1CA9E7C8, 0x98D561FD, 0xFAC172B2, 0x9EDEDFBE, 0x7C79F681, 0x60F28C00, 0x015B918C,
    0x35284960, 0x23D1000D, 0x00338E0B, 0xACF7BDCF, 0x018860BC, 0x3FF41A88, 0x500D3101,
    0x77CFFDBF, 0x2B677F00, 0x1FE37C80, 0x03E3D4A0, 0x307E3350, 0x5CACC8C6, 0x079E3A00,
    0x03BDA3ED, 0x55875A20, 0xCE3A3263, 0x7981FBA8, 0x2E3AB1FF, 0x05FF99AC, 0xDF8EBE20,
    0x7FEB6F00, 0xF7BD440F, 0x5803FFC9, 0x7BED72BB, 0xEB4DF9EE, 0xEFE4003F, 0x9F2295DF,
    0xEEB036F7, 0x7BDEF7BD, 0xDEF7BDEF, 0x004DEF7B, 0xDEF75800, 0xF7BDEF7B, 0xBDEF7BDE,
    0x3FFD26F7, 0x9E5EC1FB, 0xEB1E96FC, 0xC7A3BBFF, 0xBF5C4D93, 0x31886131, 0x9B2F8861,
    0xAC6B7EB8, 0x1E8EEFFF, 0xB7E4F2F6, 0x006F7D00, 0x00000000, 0x00000000, 0x7BBF0000,
    0x738BBDEF, 0x01F7BDEF, 0x55551800, 0x55555495, 0x7EFDFECD, 0xF7C3DFBF, 0xBF7EFDFB,
    0x00000001, 0x00000000, 0xF4000000, 0xEFF401BD, 0x7EFDFBF7, 0xF7EFDFBF, 0x637EFDFB,
    0x55555554, 0x4D555555, 0xFBF20000, 0x8C2BF39F, 0x7EA18CFD, 0xFE751B93, 0x9A216877,
    0x0CFB10F8, 0x47E8096C, 0x5D2DF883, 0xB7C57630, 0xD8E7F9E0, 0x9E2FD40F, 0x585F109D,
    0xFFFFFFFF, 0x6664198F, 0xCEFE6266, 0xF589BFF9, 0xDE633E56, 0x7FB7E760, 0xFF7E2E5B,
    0x44010C87, 0xCF304C47, 0x27803B1A, 0xBF3049C7, 0xE0071CFF, 0x0CFFC61A, 0x8CC693F2,
    0x47FFFFFD, 0x8C7AFCBC, 0xF0BFCF91, 0x3C63FBDD, 0x0DC5A3F2, 0xAC9FE2A3, 0xEFB00B7B,
    0x0000001F, 0x00000000, 0x00000000, 0x00000010, 0x40300200, 0x07E01102, 0xC84C602C,
    0x9EFDE01F, 0xF4C09DEA, 0xE315BF7C, 0x115DFF01, 0xC600F7A3, 0xBCBD9CEF, 0x00000FF7,
    0x00000000, 0xBC600000, 0xEF7BDCFB, 0x5BDEF7BD, 0x008E7BBC, 0x00026F80, 0xDEF201EA,
    0x0EB7B93B, 0x00058000, 0x18000060, 0x00160000, 0xE0000B80, 0xBF000029, 0xFBF00002,
    0xA800093D, 0x0000FFEF, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0xFF7BA800, 0x60373800, 0xF3278244, 0xCFFF98BC,
    0x189FC42C, 0x3C659CF7, 0xC1B58C52, 0x07BE2777, 0xBF507FF5, 0x3773035C, 0x00001DEA,
    0x00000000, 0x57E73ED6, 0x5111EBF0, 0xBC5745BF, 0x61E8FDFF, 0x1BE399EA, 0xFC1611BE,
    0x8D2022D4, 0x4630C045, 0x9657F058, 0xF96F919E, 0xF3DE23BC, 0x7BB07A9F, 0x596FD444,
    0x3FDE6377, 0x399A3958, 0x156D05F2, 0x29E07CD7, 0x5F8F186F, 0xE3F91BC0, 0x4E41F117,
    0xB55E23CF, 0xAD2FD3A0, 0x00000EF4, 0xA5697E9D, 0xF3D39077, 0xBC2D5788, 0x117E3F91,
    0x86F29E1F, 0xDA05F8F1, 0x60F9AE2A, 0xC8E668E5, 0x13BBE017, 0x0339C600, 0x10001EF8,
    0xF501DE27, 0x5F80007F, 0x97EA0B3E, 0x7AC0006B, 0xDDCC07F2, 0x38DE3000, 0x001DEA01,
    0x003BC4E0, 0xCF97C000, 0xF3000002, 0x00001FC9, 0x00271D18, 0x7789C000, 0x2F800000,
    0x8000016B, 0x7C07E4F9, 0x277D81B7, 0xD6013B46, 0xE89C0003, 0x00069E01, 0xF205ACBE,
    0x3E600127, 0xB1B881F9, 0x9DA3000A, 0x03565F00, 0xE01E89C0, 0xE000FCAD, 0xCE605ACB,
    0xF98001B8, 0xF15C07E4, 0x775A77BF, 0x802768C0, 0xF3CF3CFB, 0x4E027CA4, 0xEFCC00F4,
    0x3CAFBEFB, 0x5ACBE25F, 0xEF800000, 0xEF78004E, 0x000F7C06, 0x501C6678, 0xE40007FF,
    0x7EA12FCF, 0x9C0006B9, 0x77300F58, 0x463BC003, 0x000EF503, 0x001C6678, 0xBF3F9000,
    0x27000004, 0x000003E6, 0x00178C7A, 0x0E2B3C00, 0x9FC80000, 0x8000025F, 0xBF21F313,
    0x02BF39FF, 0x31E89DF6, 0xC67EC65E, 0x4009BF50, 0x51B838AD, 0x06877FE7, 0x125F9F10,
    0x000F89A2, 0x620F98FF, 0x012D819F, 0x80178C7A, 0x56A0347E, 0x5BF1001C, 0xFCF880BA,
    0x8AEC6012, 0x98BE016F, 0x73FD400F, 0x35D007EC, 0xE2FA805E, 0x15A809D9, 0xB0BE2007,
    0xFFFFFFFE, 0x97E7C41F, 0xCCC83300, 0x9DFCC4CC, 0x0006FFF3, 0xD60339C6, 0xE78CF95B,
    0xC4E2009F, 0xB7E7603B, 0x01E2377F, 0x8167CBF0, 0x8461FFDF, 0xFC9EB001, 0xCEDFA801,
    0x8DE300B7, 0x13F60013, 0xE2710023, 0xF9F4001D, 0xCBF03767, 0xFC800167, 0xFC9EB04C,
    0x43FED401, 0x9C6F1808, 0x9B327800, 0x789C14FC, 0xEB688007, 0x8D19FFFC, 0x60016B2F,
    0xDCE4657E, 0x07E4F983, 0xF9E1B77C, 0x937FF39D, 0x7E804ED1, 0x7A270000, 0x00016780,
    0xC605ACBE, 0xF980024F, 0xC4E207E4, 0xDA30005A, 0x3565F009, 0x03D13800, 0x003F95BC,
    0x302D65F0, 0x30005C67, 0x2B80FC9F, 0xD63EF7FE, 0x13B4601D, 0xE79E7DC0, 0x013E5279,
    0xCC00F44E, 0x6FBEFBEF, 0x2F84BE79, 0x0000016B, 0x013BDDF8, 0x00000000, 0x04EF77E0,
    0x79800000, 0x008000EF, 0x0049FC00, 0x000323E4, 0xD8800F87, 0xF1002D43, 0xC007C61F,
    0x00FF187F, 0x03B50EF0, 0x01F94C40, 0x0002F8A0, 0x3D7C0249, 0x6B500904, 0x9807C3C7,
    0xFC946321, 0xBC7E68C0, 0xAAB3D9E1, 0xB926A1FF, 0xBF7F78D3, 0xE41F9E15, 0x62327BFF,
    0xA001FDCC, 0x00013DEF, 0x02F14F40, 0xCC7DE000, 0x57C00000, 0xF00000D1, 0x00002FBB,
    0x79800000, 0x00001DEF, 0x0000F87C, 0x002D218C, 0x627E3F00, 0x634C0002, 0xF0000F86,
    0x06329F84, 0x97287000, 0xC9440017, 0x001509E1, 0xC4B0F930, 0x078F8004, 0x8C003E7F,
    0xB2951234, 0xC0F8F800, 0xB16001C3, 0x00278FC0, 0x6300A866, 0xD4FE0130, 0x7BDEF7BD,
    0x0B201F07, 0x1F016400, 0xDDDDDDD5, 0x3C0B83DD, 0x5AD6B5DC, 0x54D5AD6B, 0x002CA542,
    0xF8707C95, 0x1131F000, 0x198003C5, 0x4A8661E2, 0xF8714400, 0x4BC00071, 0xF77E0025,
    0x180000FE, 0x0000FC65, 0x00007968, 0x00938AA8, 0x033DD400, 0x00000000, 0x1DEF7980,
    0xF87C0000, 0x218C0000, 0x3F00002D, 0x0002627E, 0x0F86634C, 0x9F84F000, 0x70000632,
    0x00179728, 0x09E1C944, 0xF9300015, 0x8004C4B0, 0x3E7F078F, 0x12348C00, 0xF800B295,
    0x01C3C0F8, 0x8FC0B160, 0xA8660027, 0x01306300, 0xF7BDD4FE, 0x1F077BDE, 0x64000B20,
    0xDDD51F01, 0x83DDDDDD, 0xB5DC3C0B, 0xAD6B5AD6, 0xA54254D5, 0x7C95002C, 0xF000F870,
    0x03C51131, 0x61E21980, 0x44004A86, 0x0071F871, 0x80254BC0, 0x0033DEF7, 0xE329AC00,
    0xA780009F, 0x06E33B3D, 0xF93F1800, 0x001F91C5, 0x19FEE718, 0x0000FEF7, 0xF3000000,
    0x00003BDE, 0x0001F0F8, 0x005A4318, 0xC4FC7E00, 0xC6980004, 0xE0001F0C, 0x0C653F09,
    0x2E50E000, 0x9288002F, 0x002A13C3, 0x8961F260, 0x0F1F0009, 0x18007CFE, 0x652A2469,
    0x81F1F001, 0x62C00387, 0x004F1F81, 0xC60150CC, 0xA9FC0260, 0xF7BDEF7B, 0x16403E0E,
    0x3E02C800, 0xBBBBBBAA, 0x781707BB, 0xB5AD6BB8, 0xA9AB5AD6, 0x00594A84, 0xF0E0F92A,
    0x2263E001, 0x3300078A, 0x950CC3C4, 0xF0E28800, 0x978000E3, 0xFFBC404A, 0x07E718AF,
    0x9F33FE00, 0x011D5EDF, 0xA7A23500, 0x8005E5D1, 0x3FF7AD61, 0x0001BF33, 0xFBE4BEEB,
    0x00003FFF, 0x79800000, 0x00001DEF, 0x0000F87C, 0x002D218C, 0x627E3F00, 0x634C0002,
    0xF0000F86, 0x06329F84, 0x97287000, 0xC9440017, 0x001509E1, 0xC4B0F930, 0x078F8004,
    0x8C003E7F, 0xB2951234, 0xC0F8F800, 0xB16001C3, 0x00278FC0, 0x6300A866, 0xD4FE0130,
    0x7BDEF7BD, 0x0B201F07, 0x1F016400, 0xDDDDDDD5, 0x3C0B83DD, 0x5AD6B5DC, 0x54D5AD6B,
    0x002CA542, 0xF8707C95, 0x1131F000, 0x198003C5, 0x4A8661E2, 0xF8714400, 0x4BC00071,
    0x6EF71025, 0x001FBDC6, 0x00000000, 0xDEE20000, 0x03F7B8CD, 0x00000000, 0x00EF7BCC,
    0x07C3E000, 0x690C6000, 0xF1F80001, 0x60001313, 0x007C331A, 0x94FC2780, 0x43800031,
    0x2000BCB9, 0xA84F0E4A, 0x87C98000, 0x7C002625, 0x01F3F83C, 0xA891A460, 0xC7C00594,
    0x000E1E07, 0x3C7E058B, 0x05433001, 0xF0098318, 0xF7BDEEA7, 0x00F83BDE, 0x0B200059,
    0xEEEEA8F8, 0x5C1EEEEE, 0xB5AEE1E0, 0xAD6B5AD6, 0x652A12A6, 0x83E4A801, 0x8F8007C3,
    0x001E2889, 0x330F10CC, 0x8A200254, 0x00038FC3, 0xC4012A5E, 0x00005BFB, 0x01AFCED8,
    0x3EF13C00, 0x18000267, 0x00000C8B, 0x001E94F5, 0x777F3200, 0xC00000BD, 0x86300006,
    0xFC0000B4, 0x000989F8, 0x3E198D30, 0x7E13C000, 0xC00018CA, 0x005E5CA1, 0x27872510,
    0xE4C00054, 0x001312C3, 0xF9FC1E3E, 0x48D23000, 0xE002CA54, 0x070F03E3, 0x3F02C580,
    0xA198009E, 0x04C18C02, 0xDEF753F8, 0x7C1DEF7B, 0x90002C80, 0x77547C05, 0x0F777777,
    0xD770F02E, 0xB5AD6B5A, 0x95095356, 0xF25400B2, 0xC003E1C1, 0x0F1444C7, 0x87886600,
    0x10012A19, 0x01C7E1C5, 0x00952F00, 0xBDEF7B8C, 0xEF7BDEF7, 0x7BDEF7BD, 0x005E0037,
    0x8F900000, 0x55460AA8, 0xD5555555, 0xF58FC003, 0xEFF43DFB, 0x7EFDFBF7, 0xF7EFDFBF,
    0x0FC58802, 0x0E800000, 0x0000024F, 0x000BC588, 0x6A1BC000, 0x88000000, 0x000005C9,
    0x00518660, 0xBCBC0000, 0xEF7BBF00, 0x7BDEF7BD, 0x03E42B01, 0xC7C00000, 0xAAA8C00F,
    0x02AAAAAA, 0xA009CA66, 0xEFDFBF7F, 0x7EFDFBF7, 0xDE47E03F, 0xB7BDEF7B, 0x12780000,
    0xBC000000, 0xAAAAAA8C, 0xF00000AA, 0xFDFFF10C, 0xEFDFBF7E, 0x00007BF7, 0x0000CCBC,
    0xBC435000, 0x5C000000, 0xFF400066, 0xEFDFBF7E, 0x7EFDFBF7, 0x5E251CBF, 0xAAAA3000,
    0x2AAAAAAA, 0x0000199A, 0x779E0000, 0x0F76739F, 0x9BFFE600, 0xDAC62223, 0xDEFC04BF,
    0xFDBFBCF4, 0x807B50AD, 0x6FFF195F, 0x3CFA78D6, 0x8CBA04E2, 0xE4AF809D, 0x00E29C8F,
    0x2FA4F2F0, 0x9F2004AC, 0x00FE1E6A, 0x4656FDF0, 0x7800028A, 0x82000018, 0x00000009,
    0x00016000, 0x80000498, 0x88000064, 0x6A000A21, 0x0FE3F0F7, 0x7EB1FF00, 0x40015866,
    0x8A627E2E, 0x3C37800F, 0x276A1E83, 0x3F92BF10, 0xFFE30FF8, 0x7BCF559B, 0xD8809E4B,
    0xFBFBD433, 0x7B3C337D, 0x4FDBDE00, 0xFDAD4446, 0x5F588005, 0x0F5F9F45, 0x0024A000,
    0xEDF88C80, 0xBEE40000, 0xC0001A31, 0xFE0000C3, 0x5E22FEE7, 0x67C88000, 0x73C8000F,
    0xF90004EF, 0x60003F0F, 0x0002E4FC, 0x000BD79E, 0x0000F798, 0xDEF75800, 0xF7BDEF7B,
    0xBDEF7BDE, 0xB2000001, 0xAAAAAAAA, 0xCF02AAAA, 0xFDFBF7EF, 0xEFDFBF7E, 0x00FDFBF7,
    0x00000000, 0x00000000, 0x00000000, 0xF7BDD600, 0xBDEF7BDE, 0x00000EF7, 0xAAAAAB20,
    0x02AAAAAA, 0xF7EFDF9E, 0xBF7EFDFB, 0x4BF7EFDF, 0x00000000, 0x00000000, 0x00000000,
    0xF7E78000, 0xBF7EFDFB, 0xFBF7EFDF, 0x590B7EFD, 0x55555555, 0x00075555, 0xDEE78000,
    0xC5A00093, 0xA660013F, 0x3F0000DF, 0xFE0001EB, 0x000001B7, 0x7BDEF758, 0xDEF7BDEF,
    0x01BDEF7B, 0xAAB20000, 0xAAAAAAAA, 0xEFCF02AA, 0x7EFDFBF7, 0xF7EFDFBF, 0x0000FDFB,
    0x00000000, 0x00000000, 0x00000000, 0xDEF7BDD6, 0xF7BDEF7B, 0x2000000E, 0xAAAAAAAB,
    0x9E02AAAA, 0xFBF7EFDF, 0xDFBF7EFD, 0x004BF7EF, 0x00000000, 0x00000000, 0x00000000,
    0xFBF7E780, 0xDFBF7EFD, 0xFDFBF7EF, 0x55590B7E, 0x55555555, 0x00000755, 0x6EF7FE20,
    0xE465F000, 0x2BE001F8, 0x00BD57BF, 0xB53E63D6, 0xEEB005CC, 0x177BE97D, 0xEEB00000,
    0x7BDEF7BD, 0xDEF7BDEF, 0x0000037B, 0x55555564, 0x05555555, 0xF7EFDF9E, 0xBF7EFDFB,
    0xFBF7EFDF, 0x00000001, 0x00000000, 0x00000000, 0x7BAC0000, 0xDEF7BDEF, 0x001DEF7B,
    0x55564000, 0x55555555, 0xDFBF3C05, 0xFDFBF7EF, 0xEFDFBF7E, 0x00000097, 0x00000000,
    0x00000000, 0xCF000000, 0xFDFBF7EF, 0xEFDFBF7E, 0x16FDFBF7, 0xAAAAAAB2, 0x0EAAAAAA,
    0xDCF00000, 0x277BACDB, 0x00000000, 0x36F73C00, 0x0009DEEB, 0xEF7BAC00, 0x7BDEF7BD,
    0xDEF7BDEF, 0x59000000, 0x55555555, 0xE7815555, 0x7EFDFBF7, 0xF7EFDFBF, 0x007EFDFB,
    0x00000000, 0x00000000, 0x00000000, 0x7BDEEB00, 0xDEF7BDEF, 0x0000077B, 0x55555590,
    0x01555555, 0xFBF7EFCF, 0xDFBF7EFD, 0x25FBF7EF, 0x00000000, 0x00000000, 0x00000000,
    0xFBF3C000, 0xDFBF7EFD, 0xFDFBF7EF, 0xAC85BF7E, 0xAAAAAAAA, 0x0003AAAA, 0x8DDEEF80,
    0xBF078CAF, 0x399FE1A1, 0x013BFF11, 0x0002F7B8, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0xBDFF8000, 0xBDA7A56D, 0x3F22B3EA, 0x8007FDD6, 0x00002F7B, 0x00000000,
    0x00000000, 0x00000000, 0xBE800000, 0x967816F7, 0x9F8C0DF4, 0x29388FFA, 0x139F11FF,
    0x3DCF2379, 0x07FDCF21, 0x0BDEE000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x7B9C0000, 0x00377B89, 0xE25EE700, 0xF7000DDE,
    0x0000005E, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xF7580000,
    0xBDEF7BDE, 0x02DFBFE7, 0xCC722000, 0x64001EDF, 0x08D55555, 0x7C00BFC6, 0xF7EFDFBF,
    0xA5F3EDFB, 0xC00012F8, 0x017887B3, 0xAA138800, 0xC9C80000, 0x1F00001F, 0x0C800005,
    0x48000099, 0xDF4DBDC2, 0xC0DDEF7B, 0x00000162, 0xDF45DEE1, 0x00DDEF7B, 0x160002E0,
    0xC1800001, 0x20C00003, 0x8F800003, 0x17200002, 0x3880001F, 0x200006A1, 0x05E21EE6,
    0xDFBF7EF8, 0xE7FFB7EF, 0x4025F14D, 0x48D55556, 0x40002ED4, 0x97FB58C4, 0x9BFDAC00,
    0xE8009FF8, 0x7E9EF51E, 0x6B4C0053, 0x05E9AC45, 0xA7DD9118, 0x1802D733, 0xFFF58FF7,
    0x40000037, 0x3001BBDF, 0x0D185DEF, 0x001AC000, 0x00005C00, 0x26000346, 0x7B00006B,
    0x6F000172, 0x78000D1A, 0xA8000399, 0xE0002E29, 0x0001A34D, 0x0000732F, 0x0005C535,
    0x002C69BC, 0x003BCBC0, 0x02E29A80, 0x1634DE00, 0xBDE5E000, 0x314D4000, 0x026F0001,
    0x0002F000, 0x80001350, 0x73C80137, 0x200002EF, 0x0005E1FF, 0x02C4F8C0, 0xDEBD4000,
    0xBCC00000, 0x00000027, 0xEEF50000, 0x2DFB39FF, 0xBFFE7800, 0xCC623239, 0xF001FFDF,
    0xB7F4697E, 0xF7E43D7F, 0xBE29BE02, 0x6B519EBD, 0x607E617F, 0x803EF23E, 0x899E9FE7,
    0xC0027168, 0x61983A68, 0x253C000D, 0x003E3F26, 0x2189F870, 0xC2780006, 0x00048788,
    0x00B04F24, 0x04188B00, 0x00182000, 0x12460800, 0x4C458000, 0xF240001E, 0x00018A64,
    0xF1F0C846, 0x8F978001, 0x4000E619, 0xCD12623D, 0xF2F90049, 0xFB94E606, 0x3D3B3C01,
    0x7C53BC0B, 0x59E33D7B, 0x03F30BFB, 0xF461BFBC, 0xF21EBFB7, 0xFED4017B, 0x631111CD,
    0x000FFEFE, 0x06EF7BC0, 0xFC962000, 0x11D00003, 0xE4000027, 0x00001BF4, 0x000FBDE4,
    0x40000000, 0xCE7FFBBD, 0x9E000B7E, 0x8C8E6FFF, 0x7FF7F318, 0x1A5FBC00, 0x0F5FEDFD,
    0x6F80BDF9, 0x67AF6F8A, 0x985FDAD4, 0xBC8F981F, 0xA7F9E00F, 0x9C5A2267, 0x0E9A3000,
    0x00035866, 0x8FC9894F, 0x7E1C000F, 0x00018862, 0x21E2309E, 0x13C90001, 0x22C0002C,
    0x08000106, 0x82000006, 0x60000491, 0x00079311, 0x62993C90, 0x32118000, 0xE0007C7C,
    0x398663E5, 0x988F5000, 0x40127344, 0x3981BCBE, 0xCF007EE5, 0xEF02CF4E, 0xCF5EDF14,
    0xC2FED678, 0x6FEF00FC, 0xAFEDFD18, 0x005EFC87, 0x44737FB5, 0xFFBF98C4, 0xBDF40003,
    0xCC0000B7, 0x00037D25, 0x47FD5A30, 0xF900009C, 0xC89CF88F, 0x9E40007F, 0xBB9E427B,
    0x00000003, 0xFFDDEA00, 0x005BF673, 0x737FFCF0, 0xBF98C464, 0xFDE003FF, 0xFF6FE8D2,
    0x05EFC87A, 0x7B7C537C, 0xFED6A33D, 0x7CC0FCC2, 0xCF007DE4, 0xD1133D3F, 0xD18004E2,
    0x1AC33074, 0x4C4A7800, 0xE0007C7E, 0x0C4313F0, 0x1184F000, 0x4800090F, 0x0001609E,
    0x00083116, 0x00003040, 0x00248C10, 0x3C988B00, 0xC9E48000, 0x8C000314, 0x03E3E190,
    0x331F2F00, 0x7A8001CC, 0x939A24C4, 0x0DE5F200, 0x03F729CC, 0x167A7678, 0xF6F8A778,
    0xF6B3C67A, 0x7807E617, 0x6FE8C37F, 0xF7E43D7F, 0x9BFDA802, 0xFCC62223, 0xC8001FFD,
    0x3C1BFFDF, 0xBB0005E7, 0xD5BFD9F2, 0x45600071, 0x98CEA976, 0xD6FC7000, 0xFE313F6F,
    0x9DEF0001, 0x01ECEF8C, 0x00000000, 0x73FFDDEA, 0xF0005BF6, 0x64737FFC, 0xFFBF98C4,
    0xD2FDE003, 0x7AFF6FE8, 0x7C05EFC8, 0x3D7B7C53, 0xC2FED6A3, 0xE47CC0FC, 0x3FCF007D,
    0xE2D1133D, 0x74D18004, 0x001AC330, 0x7E4C4A78, 0xF0E0007C, 0x000C4313, 0x0F1184F0,
    0x9E480009, 0x16000160, 0x40000831, 0x10000030, 0x0000248C, 0x003C988B, 0x14C9E480,
    0x908C0003, 0x0003E3E1, 0xCC331F2F, 0xC47A8001, 0x00939A24, 0xCC0DE5F2, 0x7803F729,
    0x78167A76, 0x7AF6F8A7, 0x17F6B3C6, 0x7F7807E6, 0x7F6FE8C3, 0x02F7E43D, 0x239BFDA8,
    0xFDFCC622, 0xF738001F, 0x006EF712, 0x00000000, 0xF7380000, 0x006EF712, 0x50000000,
    0xB39FFEEF, 0xE78002DF, 0x23239BFF, 0x1FFDFCC6, 0x4697EF00, 0x43D7FB7F, 0x9BE02F7E,
    0x19EBDBE2, 0xE617F6B5, 0xEF23E607, 0xE9FE7803, 0x27168899, 0x83A68C00, 0xC000D619,
    0xE3F26253, 0x9F870003, 0x80006218, 0x48788C27, 0x04F24000, 0x88B0000B, 0x82000041,
    0x60800001, 0x58000124, 0x0001E4C4, 0x18A64F24, 0x0C846000, 0x78001F1F, 0x0E6198F9,
    0x2623D400, 0x90049CD1, 0x4E606F2F, 0xB3C01FB9, 0x3BC0B3D3, 0x33D7B7C5, 0x30BFB59E,
    0x1BFBC03F, 0xEBFB7F46, 0x4017BF21, 0x111CDFED, 0xFFEFE631, 0xC00BF900, 0x7F5BC978,
    0x2BE7FC60, 0xFE41F8C3, 0xFD43FE03, 0x4BE61BC8, 0xF2FA87FC, 0xF885E7A6, 0xE7A767A7,
    0xF0A76203, 0x0003007C, 0x79E14DC4, 0xD9E9D881, 0xFF10BE69, 0x30DE5F54, 0x7EA1FF1B,
    0x96AC3FE4, 0xFE307EA1, 0x1FADE521, 0x07CFFE30, 0xE73EEF50, 0x7E60B7EC, 0xCDFFF3C0,
    0xFE631111, 0xF3EF5976, 0xD1A5F7C0, 0x1A75FEDF, 0x07DEDDBF, 0xF6FE47BF, 0xFFAD467A,
    0x626F861B, 0x300BB195, 0x715F2017, 0xA0CE6002, 0x009985F1, 0x7257EBCF, 0x8C01F0F2,
    0x9F0E7E9F, 0xFC80914C, 0x618A5AC7, 0xC6E200F1, 0x063244D3, 0xEB3FC401, 0x060AC983,
    0x03F18DF0, 0x2AF80088, 0x906200FF, 0x03713EF0, 0xC4C5AC98, 0x404FF19A, 0xF0E43232,
    0x8A006FB4, 0x9FABE4C1, 0x1F2E00B7, 0xAC5F586F, 0x26255009, 0x069E22D1, 0x850D1F18,
    0x1FE78055, 0x295C44E6, 0x78D57B7F, 0x7AC2FED6, 0x7FFACBE1, 0x7F6FF469, 0xC35F8C3D,
    0xFF3CFCAC, 0x18888E6F, 0xCC0BB7EB, 0x779E04E7, 0x1776739F, 0xDEFFE400, 0x09E40005,
    0xE300006F, 0x0001788B, 0x000333F5, 0x0013DCF0, 0x7BAC0000, 0xDEEB001B, 0x00000005,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x08000000,
    0x9062E000, 0x32724800, 0x23993001, 0x8720018C, 0xE00B8A18, 0xBB1978A5, 0x2F15F8C0,
    0xCEFC65E3, 0x8BB3EDFE, 0x417E6077, 0xFE411A8C, 0xF7CE7826, 0x7CF9108C, 0xBE8002FF,
    0x31000377, 0x3A0001E5, 0xC80024E2, 0x800037E5, 0x0001F73C, 0xB7BAC000, 0x5DEEB001,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00800000, 0x09062E00, 0x13272480, 0xC2399300, 0x88720018, 0x5E00B8A1, 0x0BB1978A,
    0x32F15F8C, 0xECEFC65E, 0x78BB3EDF, 0xC417E607, 0x6FE411A8, 0xCF7CE782, 0xF7CF9108,
    0xBDD6002F, 0xD3C000B7, 0x300037D2, 0xC47FC67E, 0x89C4013F, 0x0DC44E38, 0x93DFF880,
    0x007FDCF2, 0xBDD60000, 0xEF75800D, 0x00000002, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x04000000, 0x48317000, 0x99392400, 0x11CC9800,
    0x439000C6, 0xF005C50C, 0x5D8CBC52, 0x978AFC60, 0x677E32F1, 0xC5D9F6FF, 0x20BF303B,
    0x7F208D46, 0x7BE73C13, 0xBE7C8846, 0xEFFC017F, 0x00DDEE25, 0x00000000, 0x897BFF00,
    0x0000377B, 0x01B7BAC0, 0x005DEEB0, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00008000, 0x8009062E, 0x00132724, 0x18C23993,
    0xA1887200, 0x8A5E00B8, 0x8C0BB197, 0x5E32F15F, 0xDFECEFC6, 0x0778BB3E, 0xA8C417E6,
    0x826FE411, 0x08CF7CE7, 0x2FF7CF91, 0xFDEEB000, 0xBC400007, 0xC00006E2, 0x0004BE1B,
    0x002DE988, 0x04EE7100, 0xE8000000, 0xC0024F7B, 0x1E9FDEEF, 0x2CC005E2, 0x4D4371F1,
    0xC17CD100, 0xF800E978, 0x43582CC2, 0xE4B300FC, 0x3CF09C0B, 0xC8039A20, 0x17C05F97,
    0x12AC007A, 0x02D4A78D, 0x88730DE0, 0x9001789F, 0x13A1D5CD, 0xDF196600, 0xE0004CF4,
    0x01FC8F0D, 0x06F1B200, 0x0A22C000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x5DEEB000, 0x00000000, 0x00000000, 0xFA000000, 0x3DEF7BDE,
    0x004ADFFF, 0x6FFD5910, 0x55555590, 0xBE1AB035, 0xFBF7EFDF, 0x3CFB7EFD, 0xF10001AC,
    0xC0007E0D, 0x9300014B, 0x00000000, 0x88002628, 0x72003F97, 0x7D1390DD, 0xDEF7BDEF,
    0x0038877F, 0x901FF180, 0xCF555555, 0xE01EF77C, 0xBF7EFDFB, 0xE77BEFDF, 0x00000000,
    0x00000000, 0xFF9CFBD9, 0x5EE6003B, 0x5EE72223, 0xFA237CC0, 0x0BA15BF7, 0xAAABD8B4,
    0x58540E3F, 0x0C261509, 0x5C261036, 0x085C9826, 0x00F19F80, 0x8006A740, 0xE000AA98,
    0xE0001B09, 0x8D2A0007, 0xA6E0003D, 0xC8005FF1, 0x017FA25D, 0x50DEFC40, 0x9DCC001F,
    0x7F2000AA, 0x00FD600C, 0xF86AEE80, 0xEB4DE053, 0x1A9767AD, 0xBF9A6E20, 0x201F186F,
    0xEA223DFF, 0xB9C601DD, 0x7E3000B7, 0xAF3C0034, 0x5CC000F1, 0xFDF4001A, 0x88000003,
    0xF39FFBF5, 0xEB00ADFF, 0x56446576, 0x11D981DF, 0x3D7FB7EB, 0x7F8B41C4, 0x87B5A8D7,
    0x1CE4F92C, 0xBF90C7C0, 0x0012037F, 0x72FBE631, 0x39F779E1, 0x72099DFB, 0x3904737F,
    0xAE43B817, 0xBBFFDF6F, 0xF7FAA561, 0x69B01033, 0x80161FC0, 0x81F0F098, 0x31F082F8,
    0xEF3D4F7F, 0xA9A301AD, 0x98CDF7EF, 0xFDAC3D3B, 0xFF58C464, 0xE0031957, 0x60036F7F,
    0xF001A7A5, 0x56001F1A, 0xD6001FE4, 0x000007FD, 0xFFBF5880, 0x0ADFFF39, 0x46576EB0,
    0x981DF564, 0xFB7EB11D, 0xB41C43D7, 0x5A8D77F8, 0x4F92C87B, 0x0C7C01CE, 0x2037FBF9,
    0xBE631001, 0x779E172F, 0x99DFB39F, 0x4737F720, 0x3B817390, 0xFDF6FAE4, 0xAA561BBF,
    0x01033F7F, 0x61FC069B, 0x0F098801, 0x082F881F, 0xD4F7F31F, 0x301ADEF3, 0xDF7EFA9A,
    0xC3D3B98C, 0x8C464FDA, 0x31957FF5, 0x7EF738C0, 0x8C89C400, 0x33FC01A7, 0xC04D6BEE,
    0xF2AE7437, 0x3BDDF016, 0x005BDDF9, 0xDFAC4000, 0x6FFF9CFF, 0x2BB75805, 0x0EFAB223,
    0xBF588ECC, 0x0E21EBFD, 0x46BBFC5A, 0xC9643DAD, 0x3E00E727, 0x1BFDFC86, 0x31880090,
    0xCF0B97DF, 0xEFD9CFBB, 0x9BFB904C, 0xC0B9C823, 0xFB7D721D, 0x2B0DDFFE, 0x819FBFD5,
    0xFE034D80, 0x84C400B0, 0x17C40F87, 0x7BF98F84, 0x0D6F79EA, 0xBF7D4D18, 0xE9DCC66F,
    0x2327ED61, 0xCABFFAC6, 0x7FFEF018, 0xC0FE710F, 0xFFBEB337, 0x7C8045FA, 0xC7EC8CF4,
    0xEF5A960B, 0x80FD995D, 0xFE88FEE7, 0x000017FF, 0x7FEFD620, 0x02B7FFCE, 0x1195DBAC,
    0x66077D59, 0xFEDFAC47, 0x2D0710F5, 0xD6A35DFE, 0x93E4B21E, 0x431F0073, 0x480DFEFE,
    0xEF98C400, 0xDDE785CB, 0x2677ECE7, 0x11CDFDC8, 0x0EE05CE4, 0xFF7DBEB9, 0xEA9586EF,
    0xC040CFDF, 0x587F01A6, 0xC3C26200, 0xC20BE207, 0xF53DFCC7, 0x8C06B7BC, 0x37DFBEA6,
    0xB0F4EE63, 0x631193F6, 0x0C655FFD, 0xBF0FBDF4, 0x0000137B, 0x7BE80000, 0x26F77E1F,
    0xEB100000, 0xFFE73FF7, 0xEDD6015B, 0xBEAC88CA, 0xD623B303, 0x887AFF6F, 0xAEFF1683,
    0x590F6B51, 0x8039C9F2, 0xFF7F218F, 0x62002406, 0xC2E5F7CC, 0xF673EEF3, 0xFEE4133B,
    0x2E7208E6, 0xDF5C8770, 0xC377FFBE, 0x67EFF54A, 0x80D36020, 0x31002C3F, 0xF103E1E1,
    0xFE63E105, 0x5BDE7A9E, 0xDF534603, 0x77319BEF, 0xC9FB587A, 0xAFFEB188, 0x67D00632,
    0xFEBA0017, 0xCC0097EF, 0x00F59E3B, 0xF0001630, 0x03D678F4, 0xFDFFD740, 0x767D0012,
    0x88000001, 0xF39FFBF5, 0xEB00ADFF, 0x56446576, 0x11D981DF, 0x3D7FB7EB, 0x7F8B41C4,
    0x87B5A8D7, 0x1CE4F92C, 0xBF90C7C0, 0x0012037F, 0x72FBE631, 0x39F779E1, 0x72099DFB,
    0x3904737F, 0xAE43B817, 0xBBFFDF6F, 0xF7FAA561, 0x69B01033, 0x80161FC0, 0x81F0F098,
    0x31F082F8, 0xEF3D4F7F, 0xA9A301AD, 0x98CDF7EF, 0xFDAC3D3B, 0xFF58C464, 0xD9031957,
    0xFF39FFBF, 0xFEF9E26F, 0x4015ECE7, 0x446557FF, 0xDFCEEF3E, 0xE8C464F7, 0xEC96B05B,
    0x1A75FEDF, 0xDFDE32FF, 0x837C456F, 0xAAFF8D78, 0xD6076B51, 0x33BD559E, 0x07E4F90E,
    0x9068C3C4, 0xF7E31F2D, 0x03E4809F, 0x8C02E13C, 0x078B7FA7, 0xEF3C1520, 0x556FEEFF,
    0xF7BDEFB0, 0x20877BDE, 0xA89337F7, 0xE320002E, 0xE77FA30E, 0xEDF256FC, 0x7BDEF7BD,
    0x4DF3BDEF, 0x18155ECF, 0x18C631CC, 0x86318C63, 0x099301A2, 0x609FDFF0, 0x80383500,
    0x04C98399, 0xC1AA13E3, 0xFD2ED168, 0x1DBF353E, 0xABDACB75, 0x3A1FF79E, 0xDFBF3355,
    0xC5FAC4FB, 0xF7FA31EF, 0x627788CD, 0x462327ED, 0x7BF7C6EF, 0x3DAC6232, 0xE7DDE301,
    0x7E2015EC, 0xD1888E7B, 0xB25FE0B7, 0xBE23DF7F, 0xBFE787A4, 0xBC5AF9EA, 0x3581F94C,
    0x01E13E54, 0x9FC4F97C, 0x6FFF980D, 0x09001304, 0x90000400, 0x19FC004C, 0xCDFFF180,
    0x97E01F0A, 0x17C96235, 0x6F1E298C, 0xF3D67B9A, 0x5D87C3FE, 0x66FBFBC6, 0xDF8857C4,
    0xD188C9EF, 0x13EA01F7, 0x1800AF7B, 0x33300019, 0xCF001FFE, 0x0079E7FF, 0xDE400D88,
    0x00F19673, 0x7F58C522, 0x1BBDDF00, 0x1E32BE00, 0x0D0DF800, 0x1399FE00, 0x277FE200,
    0xE3000000, 0x3BB39FFD, 0x199EDF01, 0x817FD631, 0xF7FB23DF, 0xBA2FD4EB, 0xB555FF3C,
    0x4C4B30F6, 0xA13881F9, 0xF201F0AD, 0x8C62E231, 0x2318C631, 0x7BDE9278, 0x7EF7BDEF,
    0x580005C8, 0xBDEF7B9C, 0xEF7BDEF7, 0xD8001E0C, 0x6628006C, 0x97FFF600, 0x403FC539,
    0x4DE95C8F, 0xB9AAAEE3, 0x25D8B897, 0x877BF7FA, 0xEFC40FFC, 0xEB223337, 0xFE000FFD,
    0x9800BEF7, 0xF00179E9, 0xAC003E33, 0xAC003FCC, 0x00000FFB, 0x3FFBC600, 0xBE027767,
    0xAC62333D, 0x47BF02FF, 0xA9D7EFF6, 0xFE79745F, 0x61ED6AAB, 0x03F29896, 0xE15B4271,
    0xC463E403, 0x8C6318C5, 0x24F04631, 0x7BDEF7BD, 0x0B90FDEF, 0xF738B000, 0xBDEF7BDE,
    0x3C19DEF7, 0x00D9B000, 0xEC00CC50, 0x8A732FFF, 0xB91E807F, 0x5DC69BD2, 0x712F7355,
    0xEFF44BB1, 0x1FF90EF7, 0x666FDF88, 0x1FFBD644, 0xFDEE7180, 0x19138800, 0x67F8034F,
    0x809AD79C, 0xCAB1E86F, 0xEF77C05B, 0x016F77E4, 0xFBC60000, 0x0277673F, 0x62333DBE,
    0xBF02FFAC, 0xD7EFF647, 0x79745FA9, 0xED6AABFE, 0xF2989661, 0x5B427103, 0x63E403E1,
    0x6318C5C4, 0xF046318C, 0xDEF7BD24, 0x90FDEF7B, 0x38B0000B, 0xEF7BDEF7, 0x19DEF7BD,
    0xD9B0003C, 0x00CC5000, 0x732FFFEC, 0x1E807F8A, 0xC69BD2B9, 0x2F73555D, 0xF44BB171,
    0xF90EF7EF, 0x6FDF881F, 0xFBD64466, 0x7DEFA01F, 0x003BDDF8, 0x80000000, 0x77E1F7BE,
    0x000000EF, 0xCE7FF78C, 0x7B7C04EE, 0xFF58C466, 0xEC8F7E05, 0xBF53AFDF, 0x57FCF2E8,
    0x2CC3DAD5, 0xE207E531, 0x07C2B684, 0x8B88C7C8, 0x6318C631, 0x7A49E08C, 0xDEF7BDEF,
    0x001721FB, 0xBDEE7160, 0xEF7BDEF7, 0x007833BD, 0xA001B360, 0xFFD80198, 0xFF14E65F,
    0xA5723D00, 0xAABB8D37, 0x62E25EE6, 0xEFDFE897, 0x103FF21D, 0x88CCDFBF, 0x883FF7AC,
    0xDC4DBDFF, 0x47FC8330, 0x3317C634, 0x0026E751, 0x0007FBFF, 0x00000000, 0x00000000,
    0x00000000, 0x16F7B8C0, 0x59465BCD, 0x7E34F693, 0xFFC003F7, 0x000001FE, 0x00000000,
    0x00000000, 0x80000000, 0xC836F7BA, 0x71135A4F, 0x16F4F623, 0x9BC5F4FF, 0x5BDF61BE,
    0x0019EFFC, 0x03FDFF80, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x37BEC000, 0x000FF7B8, 0xB837BEC0, 0xFF000FF7, 0x000007FB, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x217F7BAC, 0x9DAC05FB, 0xB5FF7F75, 0x944FC600, 0xFF5880FA,
    0xC057E317, 0x46D58CEC, 0x4EFA9E03, 0xC80AB6AF, 0x1B6739FF, 0xB7FF905E, 0xD90F4622,
    0xFBC69B88, 0xF06626FB, 0xF59ECF4B, 0x94C43BBC, 0xF8C0FC8F, 0x01F0F3F1, 0x4FE2349E,
    0x904F1401, 0x045C8700, 0x10001040, 0x0E0124C4, 0x14014FE3, 0x9E01F0F5, 0xE31F2234,
    0xF347E303, 0xAB3D9E1B, 0x45587FDE, 0x7F78CBFC, 0x0DD119BF, 0x193DFBF1, 0x405DD631,
    0xF49BF6FD, 0xC6AFC899, 0x466B7FFC, 0xF0F463A2, 0xBA616474, 0xEA2AFF6B, 0xFA83BEC2,
    0x00025F9D, 0x7B2BEFFC, 0xF017B39F, 0x462235EC, 0x99F513FF, 0x794DEFDF, 0x9F7FF190,
    0x818D3B9A, 0x147C4077, 0x8970601E, 0x00001604, 0x00000006, 0x00000000, 0x00000000,
    0x00000000, 0x0FF7BBE0, 0x09C95F00, 0x07E1BF00, 0x0B99FE00, 0x177FE200, 0xF5000000,
    0x9DD9CFFD, 0x4F7EFC40, 0x6FF58C46, 0xFBC65D88, 0x5EB0ADFB, 0xB3D9E97C, 0xD39A77AA,
    0x7903E328, 0x01F1F9F8, 0x2831C946, 0x4933CD80, 0x0010E480, 0xC0800402, 0x33920124,
    0xF3CD8028, 0x928C03E3, 0x81F19463, 0xD2F8FC3C, 0xEF5567B3, 0x0F624CF4, 0x56FDFDE3,
    0x7F620FE8, 0xFE8C464F, 0xEFFC002F, 0x5330017D, 0x19F800BD, 0xCCCC003F, 0xFBCC003F,
    0x0000000F, 0xB39FFBEA, 0xFDF8813B, 0xEB188C9E, 0x8CBB10DF, 0x615BF7F7, 0xB3D2F8BD,
    0x34EF5567, 0x07C651A7, 0xE3F3F0F2, 0x63928C03, 0x679B0050, 0x21C90092, 0x00080400,
    0x24024981, 0x9B005067, 0x1807C7E7, 0xE328C725, 0xF1F87903, 0xAACF67A5, 0xC499E9DE,
    0xFBFBC61E, 0xC41FD0AD, 0x188C9EFE, 0x79005FFD, 0x8800FDEE, 0x034F191B, 0xD79C67F8,
    0x786F809A, 0x03EF2AC7, 0x7E2EF77C, 0x00003EF7, 0xE7FEFA80, 0x7E204EEC, 0xC62327BF,
    0x2EC437FA, 0x56FDFDE3, 0xF4BE2F58, 0x3BD559EC, 0xF19469CD, 0xFCFC3C81, 0xE4A300F8,
    0xE6C01418, 0x72402499, 0x02010008, 0x00926040, 0xC01419C9, 0x01F1F9E6, 0xCA31C946,
    0x7E1E40F8, 0xB3D9E97C, 0x267A77AA, 0xFEF187B1, 0x07F42B7E, 0x2327BFB1, 0xA017FF46,
    0xE707BFFF, 0xFACADF00, 0x8245FDFE, 0xB915AC7C, 0xAA981F1E, 0x9ECCAEFB, 0xE88FEEA0,
    0x00017FFF, 0x3FF7D400, 0xF1027767, 0x31193DFB, 0x7621BFD6, 0xB7EFEF19, 0xA5F17AC2,
    0xDEAACF67, 0x8CA34E69, 0xE7E1E40F, 0x251807C7, 0x3600A0C7, 0x920124CF, 0x10080043,
    0x04930200, 0x00A0CE48, 0x0F8FCF36, 0x518E4A30, 0xF0F207C6, 0x9ECF4BE3, 0x33D3BD55,
    0xF78C3D89, 0x3FA15BF7, 0x193DFD88, 0x80BFFA31, 0xBBE1F7BE, 0x00000077, 0xEF7D0000,
    0x00EF77C3, 0xF7D40000, 0x0277673F, 0x193DFBF1, 0x21BFD631, 0xEFEF1976, 0xF17AC2B7,
    0xAACF67A5, 0xA34E69DE, 0xE1E40F8C, 0x1807C7E7, 0x00A0C725, 0x0124CF36, 0x08004392,
    0x93020010, 0xA0CE4804, 0x8FCF3600, 0x8E4A300F, 0xF207C651, 0xCF4BE3F0, 0xD3BD559E,
    0x8C3D8933, 0xA15BF7F7, 0x3DFD883F, 0xBFFA3119, 0x1F7BEC00, 0x00000000, 0x3EF7D800,
    0xEFC00000, 0xBDEF7BDE, 0xEF7BDEF7, 0x4600007D, 0x55555555, 0xECD55555, 0xFBF7EFDF,
    0xDFBF7EFD, 0xFDFBF7EF, 0x7DEFB006, 0x00000000, 0x1B300000, 0xE73FF7D4, 0x267A22B7,
    0x193DFBF1, 0x74777D51, 0xFBC65D8A, 0xCC88CDFB, 0x9EE697C9, 0x3E4BEF55, 0xF2178CAA,
    0x179B5E0D, 0xB232E89C, 0x9CC6F828, 0x58110A9B, 0x312578CF, 0x21C7540C, 0xF9F124B8,
    0xE126E092, 0xF2485D1F, 0x59E3BD61, 0x7A7F59B0, 0x64A307E6, 0xE40E10D6, 0xB338B9A1,
    0x3E69DDEA, 0xBFBE42BC, 0x65EB0CDF, 0x4F7CE33E, 0x6FF58C46, 0xEF9E3AAC, 0x04EECE7F,
    0x05DEFFC4, 0x03786E20, 0x5E23FE40, 0x0CCFC600, 0x027B9E00, 0x37738000, 0x005DEEA0,
    0x00000000, 0x00000000, 0x00000000, 0x01000000, 0xF0030C08, 0x1E008847, 0x1378343C,
    0x6A7BF31F, 0x5E3039EE, 0x8EF7EF9E, 0xCFFCC3FA, 0x17EFAC8C, 0x3BDCE200, 0x13587401,
    0x01A79720, 0x003EA2FC, 0x0003FBDE, 0xA0377380, 0x00005DEE, 0x00000000, 0x00000000,
    0x00000000, 0x08010000, 0x47F0030C, 0x3C1E0088, 0x1F137834, 0xEE6A7BF3, 0x9E5E3039,
    0xFA8EF7EF, 0x8CCFFCC3, 0x8017EFAC, 0x017DEE71, 0x0B9A44E2, 0xADB8CFF0, 0x3A1BF01F,
    0xF82BF0D7, 0xF7D93BDD, 0xB9C00014, 0x2EF7501B, 0x00000000, 0x00000000, 0x00000000,
    0x80000000, 0x01860400, 0x004423F8, 0xBC1A1E0F, 0x3DF98F89, 0x181CF735, 0x7BF7CF2F,
    0xFE61FD47, 0xF7D64667, 0x5BDEF00B, 0x004DEEFC, 0xF7800000, 0x6F77E2DE, 0xBB9C0002,
    0x02EF7501, 0x00000000, 0x00000000, 0x00000000, 0x08000000, 0x80186040, 0xF004423F,
    0x9BC1A1E0, 0x53DF98F8, 0xF181CF73, 0x77BF7CF2, 0x7FE61FD4, 0xBF7D6466, 0xEF7BC000,
    0xF92E4006, 0xE22FC007, 0x7D390004, 0x6F790003, 0x75000001, 0xEE3007EF, 0x002A955D,
    0x2C478F1F, 0xE3E952C0, 0x90E13C0F, 0xE2B80543, 0x2884C7C1, 0xC1F8560B, 0x19441F0A,
    0xE01CBF89, 0x03E510F0, 0x264C7C2A, 0x53F4CA60, 0xC4F1F801, 0xB0C60070, 0xFC007897,
    0x6004DFD4, 0x44007E52, 0x0E000631, 0xB10C001F, 0x0153E000, 0x805E1E80, 0x97FDFFF1,
    0x56440067, 0xAC801FCA, 0xE003B9C8, 0x0000FF7F, 0x00000000, 0x00000000, 0x7FF7C800,
    0x9E015FFE, 0xF9F2333D, 0x78BF207D, 0xE7875FBE, 0xA9EFDE03, 0x3053D375, 0xE1A1C427,
    0x82328C07, 0x61E6C04C, 0x80090401, 0x10600041, 0x9243804C, 0x988A2500, 0x7A0A18C0,
    0x885E1C40, 0x9BAD577F, 0xD63B207A, 0x17A1D7EF, 0xC8C9FB58, 0xF1805FF9, 0x4DFFCFFD,
    0x00000000, 0x00000000, 0xBDC60000, 0x1B7B9E3F, 0x00000000, 0x78FEF718, 0x00006DEE,
    0xC01FBDD4, 0xAA5577B8, 0x1E3C7C00, 0xA54B00B1, 0x84F03F8F, 0xE0150E43, 0x131F078A,
    0xE1582CA2, 0x107C2B07, 0x72FE2465, 0x9443C380, 0x31F0A80F, 0xD3298099, 0xC7E0054F,
    0x1801C313, 0x01E25EC3, 0x137F53F0, 0x01F94980, 0x0018C510, 0x30007C38, 0x4F8002C4,
    0x787A0005, 0xF7FFC601, 0x10019E5F, 0x007F2959, 0x0EE722B2, 0x00000000
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
#if NOMINAL_FREQ == 60
  _this->valorMeio = 60.000000f;
#else
  _this->valorMeio = 50.000000f;
#endif
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
#if NOMINAL_VOLTAGE == 127
  _this->valorMeio = 127.000000f;
#else
  _this->valorMeio = 220.000000f;
#endif
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
  ViewsText__Init( &_this->val_THD_R, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_THD_S, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_THD_T, &_this->_XObject, 0 );

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
  CoreRectView__OnSetBounds( &_this->val_THD_R, _Const009F );
  ViewsText_OnSetAlignment( &_this->val_THD_R, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_THD_R, EwLoadString( &_Const0093 ));
  CoreRectView__OnSetBounds( &_this->val_THD_S, _Const00A0 );
  ViewsText_OnSetAlignment( &_this->val_THD_S, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_THD_S, EwLoadString( &_Const0091 ));
  CoreRectView__OnSetBounds( &_this->val_THD_T, _Const00A1 );
  ViewsText_OnSetAlignment( &_this->val_THD_T, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_THD_T, EwLoadString( &_Const008F ));
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
  CoreGroup__Add( _this, ((CoreView)&_this->val_THD_R ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_THD_S ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_THD_T ), 0 );
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
  ViewsText_OnSetFont( &_this->val_THD_R, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->val_THD_S, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->val_THD_T, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));

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
  ViewsText__ReInit( &_this->val_THD_R );
  ViewsText__ReInit( &_this->val_THD_S );
  ViewsText__ReInit( &_this->val_THD_T );

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
  ViewsText__Done( &_this->val_THD_R );
  ViewsText__Done( &_this->val_THD_S );
  ViewsText__Done( &_this->val_THD_T );

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
  EwMarkObject( &_this->val_THD_R );
  EwMarkObject( &_this->val_THD_S );
  EwMarkObject( &_this->val_THD_T );

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
  XFloat valor_THD_R;
  XFloat valor_THD_S;
  XFloat valor_THD_T;

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

  valor_THD_R = ApplicationClasse_getTHD_R( _this->device );
  valor_THD_S = ApplicationClasse_getTHD_S( _this->device );
  valor_THD_T = ApplicationClasse_getTHD_T( _this->device );
  ViewsText_OnSetString( &_this->val_THD_R, ApplicationFFT_float2String( _this, 
  valor_THD_R, 1 ));
  ViewsText_OnSetString( &_this->val_THD_S, ApplicationFFT_float2String( _this, 
  valor_THD_S, 1 ));
  ViewsText_OnSetString( &_this->val_THD_T, ApplicationFFT_float2String( _this, 
  valor_THD_T, 1 ));
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

/* 'C' function for method : 'Application::FFT.float2String()' */
XString ApplicationFFT_float2String( ApplicationFFT _this, XFloat numero, XInt32 
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
  CoreRectView__OnSetBounds( _this, _Const00A2 );
  CoreRectView__OnSetBounds( &_this->Message, _Const00A3 );
  ViewsText_OnSetString( &_this->Message, EwLoadString( &_Const00A4 ));
  ViewsText_OnSetColor( &_this->Message, _Const0015 );
  CoreRectView__OnSetBounds( &_this->BStart, _Const00A5 );
  ApplicationModifiedButton_OnSetCaption( &_this->BStart, EwLoadString( &_Const00A6 
  ));
  CoreRectView__OnSetBounds( &_this->labelMsg, _Const00A7 );
  ViewsText_OnSetAlignment( &_this->labelMsg, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelMsg, EwLoadString( &_Const00A8 ));
  CoreRectView__OnSetBounds( &_this->labelState, _Const00A9 );
  ViewsText_OnSetAlignment( &_this->labelState, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelState, EwLoadString( &_Const00AA ));
  CoreRectView__OnSetBounds( &_this->Status, _Const00AB );
  ViewsText_OnSetString( &_this->Status, EwLoadString( &_Const00AC ));
  ViewsText_OnSetColor( &_this->Status, _Const0015 );
  CoreRectView__OnSetBounds( &_this->BStop, _Const00AD );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->BStop, 0 );
  ApplicationModifiedButton_OnSetCaption( &_this->BStop, EwLoadString( &_Const00AE 
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
  CoreRectView__OnSetBounds( _this, _Const00AF );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00B0 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00B1 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00B2 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0001 );
  CoreView_OnSetLayout((CoreView)&_this->Frame, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Frame, _Const00AF );
  ViewsFrame_OnSetColor( &_this->Frame, FlatColorOfTouch );
  CoreView_OnSetLayout((CoreView)&_this->CaptionText, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->CaptionText, _Const00AF );
  ViewsText_OnSetString( &_this->CaptionText, EwLoadString( &_Const00B3 ));
  ViewsText_OnSetColor( &_this->CaptionText, FlatColorOfBackground );
  EwRetainString( &_this->Caption, EwLoadString( &_Const00B3 ));
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

extern float THD_R;
extern float THD_S;
extern float THD_T;

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
  CoreSystemEvent__Init( &_this->THD_R_Event, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->THD_S_Event, &_this->_XObject, 0 );
  CoreSystemEvent__Init( &_this->THD_T_Event, &_this->_XObject, 0 );

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
  CoreSystemEvent__ReInit( &_this->THD_R_Event );
  CoreSystemEvent__ReInit( &_this->THD_S_Event );
  CoreSystemEvent__ReInit( &_this->THD_T_Event );
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
  CoreSystemEvent__Done( &_this->THD_R_Event );
  CoreSystemEvent__Done( &_this->THD_S_Event );
  CoreSystemEvent__Done( &_this->THD_T_Event );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Classe' */
void ApplicationClasse__Mark( ApplicationClasse _this )
{
  EwMarkObject( &_this->LogMessageEvent );
  EwMarkObject( &_this->StatusChangedEvent );
  EwMarkObject( &_this->ButtonStateEvent );
  EwMarkObject( &_this->THD_R_Event );
  EwMarkObject( &_this->THD_S_Event );
  EwMarkObject( &_this->THD_T_Event );

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
  XFloat aFFT[ 16 ];
  XInt32 j;
  ChartsCoordList cordFFT;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  cordFFT = EwNewObject( ChartsCoordList, 0 );

  for ( j = 0; j < 16; j = j + 1 )
    aFFT[ EwCheckIndex( j, 16 )] = 0.000000f;

  {
    int i;

    for (i = 0; i < 16; i++) {
      aFFT[i] = FasesAC_mod_R[i];
      if (aFFT[i] > 0.2){
    	  aFFT[i] = 0.2;
      }
    }
  }
  ChartsCoordList_OnSetMaxNoOfItems( cordFFT, 16 );
  ChartsCoordList_ClearList( cordFFT );

  for ( j = 0; j < 16; j = j + 1 )
  {
    ChartsCoordList_AddCoord( cordFFT, (XFloat)j, -aFFT[ EwCheckIndex( j, 16 )]);
  }

  return cordFFT;
}

/* 'C' function for method : 'Application::Classe.getFFT_S()' */
ChartsCoordList ApplicationClasse_getFFT_S( ApplicationClasse _this )
{
  XFloat aFFT[ 16 ];
  XInt32 j;
  ChartsCoordList cordFFT;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  cordFFT = EwNewObject( ChartsCoordList, 0 );

  for ( j = 0; j < 16; j = j + 1 )
    aFFT[ EwCheckIndex( j, 16 )] = 0.000000f;

  {
    int i;

    for (i = 0; i < 16; i++) {
      aFFT[i] = FasesAC_mod_S[i];
    }
  }
  ChartsCoordList_OnSetMaxNoOfItems( cordFFT, 16 );
  ChartsCoordList_ClearList( cordFFT );

  for ( j = 0; j < 16; j = j + 1 )
  {
    ChartsCoordList_AddCoord( cordFFT, (XFloat)j, -aFFT[ EwCheckIndex( j, 16 )]);
  }

  return cordFFT;
}

/* 'C' function for method : 'Application::Classe.getFFT_T()' */
ChartsCoordList ApplicationClasse_getFFT_T( ApplicationClasse _this )
{
  XFloat aFFT[ 16 ];
  XInt32 j;
  ChartsCoordList cordFFT;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  cordFFT = EwNewObject( ChartsCoordList, 0 );

  for ( j = 0; j < 16; j = j + 1 )
    aFFT[ EwCheckIndex( j, 16 )] = 0.000000f;

  {
    int i;

    for (i = 0; i < 16; i++) {
      aFFT[i] = FasesAC_mod_T[i];
    }
  }
  ChartsCoordList_OnSetMaxNoOfItems( cordFFT, 16 );
  ChartsCoordList_ClearList( cordFFT );

  for ( j = 0; j < 16; j = j + 1 )
  {
    ChartsCoordList_AddCoord( cordFFT, (XFloat)j, -aFFT[ EwCheckIndex( j, 16 )]);
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

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationClasse_THD_R_Trigger( ApplicationClasse _this, XString thd_R_text )
{
  ApplicationFFTMessageR contexto = EwNewObject( ApplicationFFTMessageR, 0 );

  ApplicationFFTMessageR_OnSetTHD_R_text( contexto, thd_R_text );
  CoreSystemEvent_Trigger( &_this->LogMessageEvent, ((XObject)contexto ), 0 );
}

/* Wrapper function for the non virtual method : 'Application::Classe.THD_R_Trigger()' */
void ApplicationClasse__THD_R_Trigger( void* _this, XString thd_R_text )
{
  ApplicationClasse_THD_R_Trigger((ApplicationClasse)_this, thd_R_text );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationClasse_THD_S_Trigger( ApplicationClasse _this, XString thd_S_text )
{
  ApplicationFFTMessageS contexto = EwNewObject( ApplicationFFTMessageS, 0 );

  ApplicationFFTMessageS_OnSetTHD_S_text( contexto, thd_S_text );
  CoreSystemEvent_Trigger( &_this->LogMessageEvent, ((XObject)contexto ), 0 );
}

/* Wrapper function for the non virtual method : 'Application::Classe.THD_S_Trigger()' */
void ApplicationClasse__THD_S_Trigger( void* _this, XString thd_S_text )
{
  ApplicationClasse_THD_S_Trigger((ApplicationClasse)_this, thd_S_text );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationClasse_THD_T_Trigger( ApplicationClasse _this, XString thd_T_text )
{
  ApplicationFFTMessageT contexto = EwNewObject( ApplicationFFTMessageT, 0 );

  ApplicationFFTMessageT_OnSetTHD_T_text( contexto, thd_T_text );
  CoreSystemEvent_Trigger( &_this->LogMessageEvent, ((XObject)contexto ), 0 );
}

/* Wrapper function for the non virtual method : 'Application::Classe.THD_T_Trigger()' */
void ApplicationClasse__THD_T_Trigger( void* _this, XString thd_T_text )
{
  ApplicationClasse_THD_T_Trigger((ApplicationClasse)_this, thd_T_text );
}

/* 'C' function for method : 'Application::Classe.getTHD_R()' */
XFloat ApplicationClasse_getTHD_R( ApplicationClasse _this )
{
  XFloat thd_R;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  thd_R = 0.000000f;
  thd_R = (XFloat)THD_R;
  return thd_R;
}

/* 'C' function for method : 'Application::Classe.getTHD_S()' */
XFloat ApplicationClasse_getTHD_S( ApplicationClasse _this )
{
  XFloat thd_S;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  thd_S = 0.000000f;
  thd_S = (XFloat)THD_S;
  return thd_S;
}

/* 'C' function for method : 'Application::Classe.getTHD_T()' */
XFloat ApplicationClasse_getTHD_T( ApplicationClasse _this )
{
  XFloat thd_T;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  thd_T = 0.000000f;
  thd_T = (XFloat)THD_T;
  return thd_T;
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
  CoreRectView__OnSetBounds( _this, _Const00B4 );
  CoreRectView__OnSetBounds( &_this->WipeTouchHandler, _Const00B5 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const00B5 );
  CoreRectView__OnSetBounds( &_this->Rectangle1, _Const00B6 );
  CoreRectView__OnSetBounds( &_this->Title, _Const00B7 );
  CoreRectView__OnSetBounds( &_this->Janela, _Const00B8 );
  CoreRectView__OnSetBounds( &_this->TFasores, _Const00B8 );
  CoreRectView__OnSetBounds( &_this->TFreq, _Const00B9 );
  CoreRectView__OnSetBounds( &_this->TMag, _Const00BA );
  CoreRectView__OnSetBounds( &_this->TFase, _Const00BB );
  CoreRectView__OnSetBounds( &_this->TFFT, _Const00BC );
  CoreRectView__OnSetBounds( &_this->TVNC, _Const00BD );
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
  CoreRectView__OnSetBounds( _this, _Const00BE );
  _this->centro = _Const00BF;
  CoreRectView__OnSetBounds( &_this->grid, _Const00C0 );
  CoreRectView__OnSetBounds( &_this->label0, _Const00C1 );
  CoreRectView__OnSetBounds( &_this->label180, _Const00C2 );
  CoreRectView__OnSetBounds( &_this->label90, _Const00C3 );
  CoreRectView__OnSetBounds( &_this->label270, _Const00C4 );
  CoreRectView__OnSetBounds( &_this->label300, _Const00C5 );
  ViewsText_OnSetAutoSize( &_this->label300, 1 );
  CoreRectView__OnSetBounds( &_this->label240, _Const00C6 );
  ViewsText_OnSetAutoSize( &_this->label240, 1 );
  CoreRectView__OnSetBounds( &_this->label210, _Const00C7 );
  CoreRectView__OnSetBounds( &_this->label120, _Const00C8 );
  CoreRectView__OnSetBounds( &_this->label60, _Const00C9 );
  CoreRectView__OnSetBounds( &_this->label330, _Const00CA );
  CoreRectView__OnSetBounds( &_this->label30, _Const00CB );
  CoreRectView__OnSetBounds( &_this->label150, _Const00CC );
  CoreRectView__OnSetBounds( &_this->labelMag, _Const00CD );
  CoreRectView__OnSetBounds( &_this->labelAng, _Const00CE );
  CoreRectView__OnSetBounds( &_this->fTverm_mag, _Const00CF );
  CoreRectView__OnSetBounds( &_this->fTverm_ang, _Const00D0 );
  CoreRectView__OnSetBounds( &_this->fSamarelo_mag, _Const00D1 );
  CoreRectView__OnSetBounds( &_this->fSamarelo_ang, _Const00D2 );
  CoreRectView__OnSetBounds( &_this->fRverde_mag, _Const00D3 );
  CoreRectView__OnSetBounds( &_this->fRverde_ang, _Const00D4 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->Line, _Const00D5 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->Line, _Const00D6 );
  CoreQuadView__OnSetPoint4( &_this->fasor_T, _Const00D7 );
  CoreQuadView__OnSetPoint3( &_this->fasor_T, _Const00D8 );
  CoreQuadView__OnSetPoint2( &_this->fasor_T, _Const00D9 );
  CoreQuadView__OnSetPoint1( &_this->fasor_T, _Const00DA );
  ViewsWarpView_OnSetSourceAnchor((ViewsWarpView)&_this->fasor_T, _Const00DB );
  CoreQuadView__OnSetPoint4( &_this->fasor_S, _Const00D7 );
  CoreQuadView__OnSetPoint3( &_this->fasor_S, _Const00D8 );
  CoreQuadView__OnSetPoint2( &_this->fasor_S, _Const00D9 );
  CoreQuadView__OnSetPoint1( &_this->fasor_S, _Const00DA );
  ViewsWarpView_OnSetSourceAnchor((ViewsWarpView)&_this->fasor_S, _Const00DB );
  CoreQuadView__OnSetPoint4( &_this->fasor_R, _Const00D7 );
  CoreQuadView__OnSetPoint3( &_this->fasor_R, _Const00D8 );
  CoreQuadView__OnSetPoint2( &_this->fasor_R, _Const00D9 );
  CoreQuadView__OnSetPoint1( &_this->fasor_R, _Const00DA );
  ViewsWarpView_OnSetSourceAnchor((ViewsWarpView)&_this->fasor_R, _Const00DB );
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
  CoreRectView__OnSetBounds( _this, _Const00BE );
  CoreRectView__OnSetBounds( &_this->val_fr_0, _Const00DC );
  CoreRectView__OnSetBounds( &_this->val_fr_1, _Const00DD );
  CoreRectView__OnSetBounds( &_this->val_fr_2, _Const00DE );
  CoreRectView__OnSetBounds( &_this->val_t_0, _Const00DF );
  CoreRectView__OnSetBounds( &_this->val_t_1, _Const00E0 );
  CoreRectView__OnSetBounds( &_this->val_t_2, _Const00E1 );
  CoreRectView__OnSetBounds( &_this->val_t_3, _Const00E2 );
  CoreRectView__OnSetBounds( &_this->val_t_4, _Const00E3 );
  CoreRectView__OnSetBounds( &_this->labelFreq, _Const00E4 );
  CoreRectView__OnSetBounds( &_this->val_freq, _Const00E5 );
  CoreRectView__OnSetBounds( &_this->IconButton, _Const00E6 );
  ApplicationModIconButton_OnSetIconIndex( &_this->IconButton, 7 );
  CoreRectView__OnSetBounds( &_this->grafico, _Const00E7 );
  ApplicationPlotterGraph_OnSetVerticalRatio( &_this->grafico, 1.100000f );
  ApplicationPlotterGraph_OnSetStrokeWidth( &_this->grafico, 4.000000f );
  CoreRectView__OnSetBounds( &_this->config, _Const00E7 );
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
  CoreRectView__OnSetBounds( _this, _Const00BE );
  CoreRectView__OnSetBounds( &_this->val_m_inf, _Const00E8 );
  CoreRectView__OnSetBounds( &_this->val_m_meio, _Const00E9 );
  CoreRectView__OnSetBounds( &_this->val_m_sup, _Const00EA );
  CoreRectView__OnSetBounds( &_this->val_t_ini, _Const00DF );
  CoreRectView__OnSetBounds( &_this->val_t_1, _Const00E0 );
  CoreRectView__OnSetBounds( &_this->val_t_2, _Const00EB );
  CoreRectView__OnSetBounds( &_this->val_t_3, _Const00EC );
  CoreRectView__OnSetBounds( &_this->val_t_4, _Const00ED );
  CoreRectView__OnSetBounds( &_this->val_T, _Const00EE );
  CoreRectView__OnSetBounds( &_this->val_S, _Const00EF );
  CoreRectView__OnSetBounds( &_this->val_R, _Const00F0 );
  CoreRectView__OnSetBounds( &_this->labelUnidades, _Const00F1 );
  CoreRectView__OnSetBounds( &_this->IconButton, _Const00E6 );
  ApplicationModIconButton_OnSetIconIndex( &_this->IconButton, 7 );
  CoreRectView__OnSetBounds( &_this->grafico, _Const00E7 );
  ApplicationPlotterTripleGraph_OnSetStrokeWidth( &_this->grafico, 4.000000f );
  CoreRectView__OnSetBounds( &_this->config, _Const00E7 );
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
  CoreRectView__OnSetBounds( _this, _Const00BE );
  CoreRectView__OnSetBounds( &_this->labelFaseInf, _Const00E8 );
  CoreRectView__OnSetBounds( &_this->labelFaseMeio, _Const00E9 );
  CoreRectView__OnSetBounds( &_this->labelFaseSup, _Const00EA );
  CoreRectView__OnSetBounds( &_this->val_t_ini, _Const00DF );
  CoreRectView__OnSetBounds( &_this->val_t_1, _Const00E0 );
  CoreRectView__OnSetBounds( &_this->val_t_2, _Const00EB );
  CoreRectView__OnSetBounds( &_this->val_t_3, _Const00EC );
  CoreRectView__OnSetBounds( &_this->val_t_4, _Const00F2 );
  CoreRectView__OnSetBounds( &_this->val_T, _Const00EE );
  CoreRectView__OnSetBounds( &_this->val_S, _Const00EF );
  CoreRectView__OnSetBounds( &_this->val_R, _Const00F0 );
  CoreRectView__OnSetBounds( &_this->labelUni, _Const00F3 );
  CoreRectView__OnSetBounds( &_this->grafico, _Const00E7 );
  ApplicationPlotterTripleGraph_OnSetStrokeWidth( &_this->grafico, 4.000000f );
  CoreRectView__OnSetBounds( &_this->config, _Const00E7 );
  CoreRectView__OnSetBounds( &_this->IconButton, _Const00E6 );
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

  /* ... then construct all embedded objects */
  ViewsText__Init( &_vthis->val_m_76, &_this->_XObject, 0 );
  ViewsText__Init( &_vthis->val_m_78, &_this->_XObject, 0 );
  ViewsText__Init( &_vthis->val_m_80, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_vthis->THD_R_Message_Handler, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_vthis->THD_S_Message_Handler, &_this->_XObject, 0 );
  CoreSystemEventHandler__Init( &_vthis->THD_T_Message_Handler, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _vthis->_VMT = EW_VCLASS( ApplicationFFT769 );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00BE );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_10, _Const00F4 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_10, _Const00F5 );
  ViewsLine_OnSetWidth( &_this->linha_h_10, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_20, _Const00F6 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_20, _Const00F7 );
  ViewsLine_OnSetWidth( &_this->linha_h_20, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_30, _Const00F8 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_30, _Const00F9 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_40, _Const00FA );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_40, _Const00FB );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_25, _Const00FC );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_25, _Const00FD );
  ViewsLine_OnSetWidth( &_this->linha_m_25, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_50, _Const00FE );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_50, _Const00FF );
  ViewsLine_OnSetWidth( &_this->linha_m_50, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_75, _Const0100 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_75, _Const0101 );
  ViewsLine_OnSetWidth( &_this->linha_m_75, 2 );
  CoreRectView__OnSetBounds( &_this->val_h_10, _Const0102 );
  ViewsText_OnSetString( &_this->val_h_10, EwLoadString( &_Const0103 ));
  CoreRectView__OnSetBounds( &_this->val_h_20, _Const0104 );
  ViewsText_OnSetString( &_this->val_h_20, EwLoadString( &_Const0088 ));
  CoreRectView__OnSetBounds( &_this->val_h_30, _Const0105 );
  ViewsText_OnSetString( &_this->val_h_30, EwLoadString( &_Const0106 ));
  CoreRectView__OnSetBounds( &_this->val_h_40, _Const0107 );
  ViewsText_OnSetString( &_this->val_h_40, EwLoadString( &_Const0108 ));
  CoreRectView__OnSetBounds( &_this->val_m_25, _Const0109 );
  ViewsText_OnSetString( &_this->val_m_25, EwLoadString( &_Const010A ));
  CoreRectView__OnSetBounds( &_this->val_m_50, _Const010B );
  ViewsText_OnSetString( &_this->val_m_50, EwLoadString( &_Const010C ));
  CoreRectView__OnSetBounds( &_this->val_m_75, _Const010D );
  ViewsText_OnSetString( &_this->val_m_75, EwLoadString( &_Const010E ));
  CoreRectView__OnSetBounds( &_this->graf_FFT, _Const010F );
  ChartsGraph_OnSetLineWidth( &_this->graf_FFT, 6.000000f );
  ChartsGraph_OnSetCoordOrigin( &_this->graf_FFT, _Const0110 );
  ChartsGraph_OnSetPixelPerUnit( &_this->graf_FFT, _Const0111 );
  CoreRectView__OnSetBounds( &_this->borda, _Const010F );
  ViewsBorder_OnSetWidth( &_this->borda, 2 );
  CoreRectView__OnSetBounds( &_vthis->val_m_76, _Const0112 );
  ViewsText_OnSetAlignment( &_vthis->val_m_76, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_vthis->val_m_76, EwLoadString( &_Const0113 ));
  ViewsText_OnSetColor( &_vthis->val_m_76, Applicationcor_R );
  CoreRectView__OnSetBounds( &_this->botao_R, _Const0114 );
  CoreRectView__OnSetBounds( &_vthis->val_m_78, _Const0115 );
  ViewsText_OnSetAlignment( &_vthis->val_m_78, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_vthis->val_m_78, EwLoadString( &_Const0113 ));
  ViewsText_OnSetColor( &_vthis->val_m_78, Applicationcor_S );
  CoreRectView__OnSetBounds( &_this->botao_S, _Const0116 );
  CoreRectView__OnSetBounds( &_this->botao_T, _Const0117 );
  CoreRectView__OnSetBounds( &_vthis->val_m_80, _Const0118 );
  ViewsText_OnSetAlignment( &_vthis->val_m_80, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_vthis->val_m_80, EwLoadString( &_Const0113 ));
  ViewsText_OnSetColor( &_vthis->val_m_80, Applicationcor_T );
  CoreRectView__OnSetBounds( &_this->val_THD_R, _Const0119 );
  ViewsText_OnSetAlignment( &_this->val_THD_R, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_THD_R, EwLoadString( &_Const011A ));
  ViewsText_OnSetColor( &_this->val_THD_R, Applicationcor_R );
  CoreRectView__OnSetBounds( &_this->val_THD_S, _Const011B );
  ViewsText_OnSetAlignment( &_this->val_THD_S, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_THD_S, EwLoadString( &_Const011A ));
  ViewsText_OnSetColor( &_this->val_THD_S, Applicationcor_S );
  CoreRectView__OnSetBounds( &_this->val_THD_T, _Const011C );
  ViewsText_OnSetAlignment( &_this->val_THD_T, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_THD_T, EwLoadString( &_Const011A ));
  ViewsText_OnSetColor( &_this->val_THD_T, Applicationcor_T );
  CoreGroup__Add( _this, ((CoreView)&_vthis->val_m_76 ), -8 );
  CoreGroup__Add( _this, ((CoreView)&_vthis->val_m_78 ), -6 );
  CoreGroup__Add( _this, ((CoreView)&_vthis->val_m_80 ), -5 );
  ViewsText_OnSetFont( &_vthis->val_m_76, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_vthis->val_m_78, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_vthis->val_m_80, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->val_THD_R, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->val_THD_S, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->val_THD_T, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  _vthis->THD_R_Message_Handler.OnEvent = EwNewSlot( _this, ApplicationFFT769_THD_R_Message 
  );
  CoreSystemEventHandler_OnSetEvent( &_vthis->THD_R_Message_Handler, &EwGetAutoObject( 
  &ApplicationAutoobjeto, ApplicationClasse )->THD_R_Event );
  _vthis->THD_S_Message_Handler.OnEvent = EwNewSlot( _this, ApplicationFFT769_THD_S_Message 
  );
  CoreSystemEventHandler_OnSetEvent( &_vthis->THD_S_Message_Handler, &EwGetAutoObject( 
  &ApplicationAutoobjeto, ApplicationClasse )->THD_S_Event );
  _vthis->THD_T_Message_Handler.OnEvent = EwNewSlot( _this, ApplicationFFT769_THD_T_Message 
  );
  CoreSystemEventHandler_OnSetEvent( &_vthis->THD_T_Message_Handler, &EwGetAutoObject( 
  &ApplicationAutoobjeto, ApplicationClasse )->THD_T_Event );
}

/* Re-Initializer for the class variant 'Application::FFT769' */
void ApplicationFFT769__ReInit( ApplicationFFT _this )
{
  register ApplicationFFT769 _vthis = (ApplicationFFT769)_this->_vthis;

  /* ... then re-construct all embedded objects */
  ViewsText__ReInit( &_vthis->val_m_76 );
  ViewsText__ReInit( &_vthis->val_m_78 );
  ViewsText__ReInit( &_vthis->val_m_80 );
  CoreSystemEventHandler__ReInit( &_vthis->THD_R_Message_Handler );
  CoreSystemEventHandler__ReInit( &_vthis->THD_S_Message_Handler );
  CoreSystemEventHandler__ReInit( &_vthis->THD_T_Message_Handler );
}

/* Finalizer method for the class variant 'Application::FFT769' */
void ApplicationFFT769__Done( ApplicationFFT _this )
{
  register ApplicationFFT769 _vthis = (ApplicationFFT769)_this->_vthis;

  /* Finalize this class */
  _vthis->_VMT = EW_VCLASS( ApplicationFFT769 );

  /* Finalize all embedded objects */
  ViewsText__Done( &_vthis->val_m_76 );
  ViewsText__Done( &_vthis->val_m_78 );
  ViewsText__Done( &_vthis->val_m_80 );
  CoreSystemEventHandler__Done( &_vthis->THD_R_Message_Handler );
  CoreSystemEventHandler__Done( &_vthis->THD_S_Message_Handler );
  CoreSystemEventHandler__Done( &_vthis->THD_T_Message_Handler );
}

/* Garbage Collector method for the class variant 'Application::FFT769' */
void ApplicationFFT769__Mark( ApplicationFFT _this )
{
  register ApplicationFFT769 _vthis = (ApplicationFFT769)_this->_vthis;

  EwMarkObject( &_vthis->val_m_76 );
  EwMarkObject( &_vthis->val_m_78 );
  EwMarkObject( &_vthis->val_m_80 );
  EwMarkObject( &_vthis->THD_R_Message_Handler );
  EwMarkObject( &_vthis->THD_S_Message_Handler );
  EwMarkObject( &_vthis->THD_T_Message_Handler );
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void ApplicationFFT769_THD_R_Message( ApplicationFFT _this, XObject sender )
{
  register ApplicationFFT769 _vthis = (ApplicationFFT769)_this->_vthis;

  ApplicationFFTMessageR ctxRecebido;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ctxRecebido = EwCastObject( _vthis->THD_R_Message_Handler.Context, ApplicationFFTMessageR 
  );
  ViewsText_OnSetString( &_this->val_THD_R, ctxRecebido->THD_R_text );
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void ApplicationFFT769_THD_S_Message( ApplicationFFT _this, XObject sender )
{
  register ApplicationFFT769 _vthis = (ApplicationFFT769)_this->_vthis;

  ApplicationFFTMessageS ctxRecebido;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ctxRecebido = EwCastObject( _vthis->THD_S_Message_Handler.Context, ApplicationFFTMessageS 
  );
  ViewsText_OnSetString( &_this->val_THD_S, ctxRecebido->THD_S_text );
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void ApplicationFFT769_THD_T_Message( ApplicationFFT _this, XObject sender )
{
  register ApplicationFFT769 _vthis = (ApplicationFFT769)_this->_vthis;

  ApplicationFFTMessageT ctxRecebido;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ctxRecebido = EwCastObject( _vthis->THD_T_Message_Handler.Context, ApplicationFFTMessageT 
  );
  ViewsText_OnSetString( &_this->val_THD_T, ctxRecebido->THD_T_text );
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
  CoreRectView__OnSetBounds( _this, _Const00BE );
  CoreRectView__OnSetBounds( &_this->Message, _Const011D );
  CoreRectView__OnSetBounds( &_this->BStart, _Const011E );
  CoreRectView__OnSetBounds( &_this->labelMsg, _Const011F );
  ViewsText_OnSetAlignment( &_this->labelMsg, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelMsg, EwLoadString( &_Const0120 ));
  CoreRectView__OnSetBounds( &_this->labelState, _Const0121 );
  ViewsText_OnSetAlignment( &_this->labelState, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelState, EwLoadString( &_Const00AA ));
  CoreRectView__OnSetBounds( &_this->Status, _Const0122 );
  ViewsText_OnSetString( &_this->Status, EwLoadString( &_Const0123 ));
  CoreRectView__OnSetBounds( &_this->BStop, _Const0124 );
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
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 5, 0x000000EA ),                /* ' ' */
  EW_GLYPH( 0x0021, 1, -13, 3, 13, 5, 0x000000EA ),             /* '!' */
  EW_GLYPH( 0x0022, 0, -13, 6, 5, 6, 0x00000157 ),              /* '"' */
  EW_GLYPH( 0x0023, 0, -13, 10, 13, 10, 0x000001B5 ),           /* '#' */
  EW_GLYPH( 0x0024, 0, -14, 10, 16, 10, 0x00000396 ),           /* '$' */
  EW_GLYPH( 0x0025, 1, -13, 14, 13, 16, 0x000005B0 ),           /* '%' */
  EW_GLYPH( 0x0026, 0, -13, 12, 13, 12, 0x00000818 ),           /* '&' */
  EW_GLYPH( 0x0027, 0, -13, 3, 5, 3, 0x00000A34 ),              /* ''' */
  EW_GLYPH( 0x0028, 1, -13, 5, 17, 6, 0x00000A60 ),             /* '(' */
  EW_GLYPH( 0x0029, 1, -13, 5, 17, 6, 0x00000B59 ),             /* ')' */
  EW_GLYPH( 0x002A, 0, -13, 7, 5, 7, 0x00000C4E ),              /* '*' */
  EW_GLYPH( 0x002B, 1, -10, 9, 8, 11, 0x00000CDB ),             /* '+' */
  EW_GLYPH( 0x002C, 1, -2, 3, 5, 5, 0x00000D82 ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -5, 6, 2, 6, 0x00000DC2 ),               /* '-' */
  EW_GLYPH( 0x002E, 1, -2, 3, 2, 5, 0x00000DE6 ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -13, 5, 13, 5, 0x00000DF9 ),             /* '/' */
  EW_GLYPH( 0x0030, 0, -13, 10, 13, 10, 0x00000E9F ),           /* '0' */
  EW_GLYPH( 0x0031, 1, -13, 6, 13, 10, 0x00001036 ),            /* '1' */
  EW_GLYPH( 0x0032, 0, -13, 10, 13, 10, 0x000010C8 ),           /* '2' */
  EW_GLYPH( 0x0033, 0, -13, 10, 13, 10, 0x00001265 ),           /* '3' */
  EW_GLYPH( 0x0034, 0, -13, 10, 13, 10, 0x00001415 ),           /* '4' */
  EW_GLYPH( 0x0035, 0, -13, 10, 13, 10, 0x0000155A ),           /* '5' */
  EW_GLYPH( 0x0036, 0, -13, 10, 13, 10, 0x00001716 ),           /* '6' */
  EW_GLYPH( 0x0037, 0, -13, 10, 13, 10, 0x000018E8 ),           /* '7' */
  EW_GLYPH( 0x0038, 0, -13, 10, 13, 10, 0x00001A36 ),           /* '8' */
  EW_GLYPH( 0x0039, 0, -13, 10, 13, 10, 0x00001C1E ),           /* '9' */
  EW_GLYPH( 0x003A, 1, -9, 3, 9, 5, 0x00001DF5 ),               /* ':' */
  EW_GLYPH( 0x003B, 1, -9, 3, 12, 5, 0x00001E37 ),              /* ';' */
  EW_GLYPH( 0x003C, 0, -11, 10, 9, 11, 0x00001EA4 ),            /* '<' */
  EW_GLYPH( 0x003D, 1, -9, 9, 6, 11, 0x00001FE3 ),              /* '=' */
  EW_GLYPH( 0x003E, 0, -11, 10, 9, 11, 0x000020BB ),            /* '>' */
  EW_GLYPH( 0x003F, 0, -13, 10, 13, 10, 0x000021EE ),           /* '?' */
  EW_GLYPH( 0x0040, 0, -13, 18, 17, 18, 0x00002346 ),           /* '@' */
  EW_GLYPH( 0x0041, -1, -13, 14, 13, 12, 0x0000279F ),          /* 'A' */
  EW_GLYPH( 0x0042, 1, -13, 11, 13, 12, 0x00002986 ),           /* 'B' */
  EW_GLYPH( 0x0043, 0, -13, 13, 13, 13, 0x00002B3C ),           /* 'C' */
  EW_GLYPH( 0x0044, 1, -13, 12, 13, 13, 0x00002D30 ),           /* 'D' */
  EW_GLYPH( 0x0045, 1, -13, 11, 13, 12, 0x00002ECD ),           /* 'E' */
  EW_GLYPH( 0x0046, 1, -13, 10, 13, 11, 0x00003054 ),           /* 'F' */
  EW_GLYPH( 0x0047, 0, -13, 13, 13, 14, 0x00003187 ),           /* 'G' */
  EW_GLYPH( 0x0048, 1, -13, 11, 13, 13, 0x000033C1 ),           /* 'H' */
  EW_GLYPH( 0x0049, 1, -13, 3, 13, 5, 0x000034B9 ),             /* 'I' */
  EW_GLYPH( 0x004A, 0, -13, 8, 13, 9, 0x000034EC ),             /* 'J' */
  EW_GLYPH( 0x004B, 1, -13, 11, 13, 12, 0x000035BF ),           /* 'K' */
  EW_GLYPH( 0x004C, 1, -13, 9, 13, 10, 0x00003737 ),            /* 'L' */
  EW_GLYPH( 0x004D, 1, -13, 13, 13, 15, 0x000037E6 ),           /* 'M' */
  EW_GLYPH( 0x004E, 1, -13, 11, 13, 13, 0x00003999 ),           /* 'N' */
  EW_GLYPH( 0x004F, 0, -13, 14, 13, 14, 0x00003AC2 ),           /* 'O' */
  EW_GLYPH( 0x0050, 1, -13, 11, 13, 12, 0x00003CDD ),           /* 'P' */
  EW_GLYPH( 0x0051, 0, -13, 14, 14, 14, 0x00003E4A ),           /* 'Q' */
  EW_GLYPH( 0x0052, 1, -13, 12, 13, 13, 0x000040AD ),           /* 'R' */
  EW_GLYPH( 0x0053, 0, -13, 12, 13, 12, 0x00004278 ),           /* 'S' */
  EW_GLYPH( 0x0054, 0, -13, 11, 13, 11, 0x0000449E ),           /* 'T' */
  EW_GLYPH( 0x0055, 1, -13, 11, 13, 13, 0x000045A5 ),           /* 'U' */
  EW_GLYPH( 0x0056, 0, -13, 12, 13, 12, 0x000046D0 ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -13, 17, 13, 17, 0x00004880 ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -13, 12, 13, 12, 0x00004B09 ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -13, 12, 13, 12, 0x00004CF0 ),           /* 'Y' */
  EW_GLYPH( 0x005A, 0, -13, 11, 13, 11, 0x00004E4B ),           /* 'Z' */
  EW_GLYPH( 0x005B, 1, -13, 4, 17, 5, 0x0000500E ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -13, 5, 13, 5, 0x00005091 ),             /* '\' */
  EW_GLYPH( 0x005D, 0, -13, 4, 17, 5, 0x00005137 ),             /* ']' */
  EW_GLYPH( 0x005E, 0, -13, 8, 7, 8, 0x000051BE ),              /* '^' */
  EW_GLYPH( 0x005F, -1, 2, 12, 2, 10, 0x00005277 ),             /* '_' */
  EW_GLYPH( 0x0060, 0, -13, 5, 2, 6, 0x00005303 ),              /* '`' */
  EW_GLYPH( 0x0061, 0, -10, 10, 10, 10, 0x00005327 ),           /* 'a' */
  EW_GLYPH( 0x0062, 1, -13, 9, 13, 10, 0x000054B3 ),            /* 'b' */
  EW_GLYPH( 0x0063, 0, -10, 9, 10, 9, 0x000055FA ),             /* 'c' */
  EW_GLYPH( 0x0064, 0, -13, 9, 13, 10, 0x00005735 ),            /* 'd' */
  EW_GLYPH( 0x0065, 0, -10, 10, 10, 10, 0x00005879 ),           /* 'e' */
  EW_GLYPH( 0x0066, 0, -13, 6, 13, 5, 0x00005A0D ),             /* 'f' */
  EW_GLYPH( 0x0067, 0, -10, 9, 14, 10, 0x00005AC9 ),            /* 'g' */
  EW_GLYPH( 0x0068, 1, -13, 8, 13, 10, 0x00005C8B ),            /* 'h' */
  EW_GLYPH( 0x0069, 1, -13, 2, 13, 4, 0x00005D61 ),             /* 'i' */
  EW_GLYPH( 0x006A, -1, -13, 4, 17, 4, 0x00005D9F ),            /* 'j' */
  EW_GLYPH( 0x006B, 1, -13, 8, 13, 9, 0x00005E2D ),             /* 'k' */
  EW_GLYPH( 0x006C, 1, -13, 2, 13, 4, 0x00005F3D ),             /* 'l' */
  EW_GLYPH( 0x006D, 1, -10, 13, 10, 15, 0x00005F61 ),           /* 'm' */
  EW_GLYPH( 0x006E, 1, -10, 8, 10, 10, 0x00006098 ),            /* 'n' */
  EW_GLYPH( 0x006F, 0, -10, 10, 10, 10, 0x0000614D ),           /* 'o' */
  EW_GLYPH( 0x0070, 1, -10, 9, 14, 10, 0x000062A9 ),            /* 'p' */
  EW_GLYPH( 0x0071, 0, -10, 9, 14, 10, 0x00006404 ),            /* 'q' */
  EW_GLYPH( 0x0072, 1, -10, 6, 10, 6, 0x00006571 ),             /* 'r' */
  EW_GLYPH( 0x0073, 0, -10, 9, 10, 9, 0x000065E9 ),             /* 's' */
  EW_GLYPH( 0x0074, 0, -13, 5, 13, 5, 0x00006760 ),             /* 't' */
  EW_GLYPH( 0x0075, 1, -10, 8, 10, 10, 0x000067FC ),            /* 'u' */
  EW_GLYPH( 0x0076, 0, -10, 9, 10, 9, 0x000068AE ),             /* 'v' */
  EW_GLYPH( 0x0077, 0, -10, 13, 10, 13, 0x000069CB ),           /* 'w' */
  EW_GLYPH( 0x0078, 0, -10, 9, 10, 9, 0x00006B78 ),             /* 'x' */
  EW_GLYPH( 0x0079, 0, -10, 9, 14, 9, 0x00006CA8 ),             /* 'y' */
  EW_GLYPH( 0x007A, 0, -10, 9, 10, 9, 0x00006E25 ),             /* 'z' */
  EW_GLYPH( 0x007B, 0, -13, 6, 17, 6, 0x00006F74 ),             /* '{' */
  EW_GLYPH( 0x007C, 1, -13, 3, 17, 5, 0x00007078 ),             /* '|' */
  EW_GLYPH( 0x007D, 0, -13, 6, 17, 6, 0x000070B4 ),             /* '}' */
  EW_GLYPH( 0x007E, 0, -8, 10, 3, 11, 0x000071B7 ),             /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 5, 0x0000723C ),
  EW_GLYPH( 0x00A1, 2, -9, 2, 13, 6, 0x0000723C ),
  EW_GLYPH( 0x00A2, 0, -13, 10, 17, 10, 0x000072A2 ),
  EW_GLYPH( 0x00A3, 0, -13, 10, 13, 10, 0x0000749E ),
  EW_GLYPH( 0x00A4, 0, -11, 10, 9, 10, 0x00007661 ),
  EW_GLYPH( 0x00A5, -1, -13, 11, 13, 10, 0x000077B8 ),
  EW_GLYPH( 0x00A6, 1, -13, 3, 17, 5, 0x000079B1 ),
  EW_GLYPH( 0x00A7, 0, -13, 10, 17, 10, 0x000079FF ),
  EW_GLYPH( 0x00A8, 0, -13, 6, 2, 6, 0x00007C5E ),
  EW_GLYPH( 0x00A9, 0, -13, 14, 13, 13, 0x00007C80 ),
  EW_GLYPH( 0x00AA, 0, -13, 7, 6, 7, 0x00007F4A ),
  EW_GLYPH( 0x00AB, 1, -9, 8, 8, 10, 0x00007FFE ),
  EW_GLYPH( 0x00AC, 1, -9, 9, 6, 11, 0x000080F5 ),
  EW_GLYPH( 0x00AD, 0, -5, 6, 2, 6, 0x0000818D ),
  EW_GLYPH( 0x00AE, 0, -13, 14, 13, 13, 0x000081B1 ),
  EW_GLYPH( 0x00AF, -1, -15, 12, 2, 10, 0x00008452 ),
  EW_GLYPH( 0x00B0, 1, -13, 5, 5, 7, 0x000084CA ),
  EW_GLYPH( 0x00B1, 0, -10, 10, 10, 10, 0x00008549 ),
  EW_GLYPH( 0x00B2, 0, -13, 6, 7, 6, 0x0000866D ),
  EW_GLYPH( 0x00B3, 0, -13, 6, 7, 6, 0x00008725 ),
  EW_GLYPH( 0x00B4, 1, -13, 5, 2, 6, 0x000087D9 ),
  EW_GLYPH( 0x00B5, 1, -10, 8, 14, 10, 0x000087FC ),
  EW_GLYPH( 0x00B6, 0, -13, 10, 17, 10, 0x000088D1 ),
  EW_GLYPH( 0x00B7, 2, -7, 2, 2, 6, 0x000089FA ),
  EW_GLYPH( 0x00B8, 0, 0, 5, 4, 6, 0x00008A0A ),
  EW_GLYPH( 0x00B9, 0, -13, 5, 7, 6, 0x00008A51 ),
  EW_GLYPH( 0x00BA, 0, -13, 7, 6, 7, 0x00008A9C ),
  EW_GLYPH( 0x00BB, 1, -9, 8, 8, 10, 0x00008B3C ),
  EW_GLYPH( 0x00BC, 0, -13, 15, 13, 15, 0x00008C20 ),
  EW_GLYPH( 0x00BD, 0, -13, 15, 13, 15, 0x00008E11 ),
  EW_GLYPH( 0x00BE, 0, -13, 15, 13, 15, 0x00009039 ),
  EW_GLYPH( 0x00BF, 1, -9, 9, 13, 11, 0x00009297 ),
  EW_GLYPH( 0x00C0, -1, -16, 14, 16, 12, 0x000093E6 ),
  EW_GLYPH( 0x00C1, -1, -16, 14, 16, 12, 0x00009616 ),
  EW_GLYPH( 0x00C2, -1, -16, 14, 16, 12, 0x00009848 ),
  EW_GLYPH( 0x00C3, -1, -16, 14, 16, 12, 0x00009A9A ),
  EW_GLYPH( 0x00C4, -1, -16, 14, 16, 12, 0x00009CFB ),
  EW_GLYPH( 0x00C5, -1, -16, 14, 16, 12, 0x00009F38 ),
  EW_GLYPH( 0x00C6, 0, -13, 18, 13, 18, 0x0000A16E ),
  EW_GLYPH( 0x00C7, 0, -13, 13, 17, 13, 0x0000A40B ),
  EW_GLYPH( 0x00C8, 1, -16, 11, 16, 12, 0x0000A682 ),
  EW_GLYPH( 0x00C9, 1, -16, 11, 16, 12, 0x0000A84D ),
  EW_GLYPH( 0x00CA, 1, -16, 11, 16, 12, 0x0000AA1B ),
  EW_GLYPH( 0x00CB, 1, -16, 11, 16, 12, 0x0000AC07 ),
  EW_GLYPH( 0x00CC, 0, -16, 4, 16, 5, 0x0000ADDB ),
  EW_GLYPH( 0x00CD, 1, -16, 4, 16, 5, 0x0000AE4F ),
  EW_GLYPH( 0x00CE, -1, -16, 7, 16, 5, 0x0000AEC3 ),
  EW_GLYPH( 0x00CF, 0, -16, 5, 16, 5, 0x0000AF80 ),
  EW_GLYPH( 0x00D0, -1, -13, 14, 13, 13, 0x0000B000 ),
  EW_GLYPH( 0x00D1, 1, -16, 11, 16, 13, 0x0000B1FE ),
  EW_GLYPH( 0x00D2, 0, -16, 14, 16, 14, 0x0000B39C ),
  EW_GLYPH( 0x00D3, 0, -16, 14, 16, 14, 0x0000B605 ),
  EW_GLYPH( 0x00D4, 0, -16, 14, 16, 14, 0x0000B86E ),
  EW_GLYPH( 0x00D5, 0, -16, 14, 16, 14, 0x0000BAF0 ),
  EW_GLYPH( 0x00D6, 0, -16, 14, 16, 14, 0x0000BD80 ),
  EW_GLYPH( 0x00D7, 1, -10, 9, 8, 11, 0x0000BFF1 ),
  EW_GLYPH( 0x00D8, 0, -13, 14, 13, 14, 0x0000C105 ),
  EW_GLYPH( 0x00D9, 1, -16, 11, 16, 13, 0x0000C39A ),
  EW_GLYPH( 0x00DA, 1, -16, 11, 16, 13, 0x0000C50D ),
  EW_GLYPH( 0x00DB, 1, -16, 11, 16, 13, 0x0000C681 ),
  EW_GLYPH( 0x00DC, 1, -16, 11, 16, 13, 0x0000C805 ),
  EW_GLYPH( 0x00DD, 0, -16, 12, 16, 12, 0x0000C97B ),
  EW_GLYPH( 0x00DE, 1, -13, 11, 13, 12, 0x0000CB1D ),
  EW_GLYPH( 0x00DF, 1, -13, 10, 13, 11, 0x0000CC8D ),
  EW_GLYPH( 0x00E0, 0, -13, 10, 13, 10, 0x0000CE1C ),
  EW_GLYPH( 0x00E1, 0, -13, 10, 13, 10, 0x0000CFE9 ),
  EW_GLYPH( 0x00E2, 0, -13, 10, 13, 10, 0x0000D1B5 ),
  EW_GLYPH( 0x00E3, 0, -13, 10, 13, 10, 0x0000D3A5 ),
  EW_GLYPH( 0x00E4, 0, -13, 10, 13, 10, 0x0000D5A3 ),
  EW_GLYPH( 0x00E5, 0, -14, 10, 14, 10, 0x0000D77B ),
  EW_GLYPH( 0x00E6, 0, -10, 16, 10, 16, 0x0000D97C ),
  EW_GLYPH( 0x00E7, 0, -10, 9, 14, 9, 0x0000DC19 ),
  EW_GLYPH( 0x00E8, 0, -13, 10, 13, 10, 0x0000DDC5 ),
  EW_GLYPH( 0x00E9, 0, -13, 10, 13, 10, 0x0000DF9D ),
  EW_GLYPH( 0x00EA, 0, -13, 10, 13, 10, 0x0000E171 ),
  EW_GLYPH( 0x00EB, 0, -13, 10, 13, 10, 0x0000E369 ),
  EW_GLYPH( 0x00EC, 0, -13, 4, 13, 5, 0x0000E549 ),
  EW_GLYPH( 0x00ED, 1, -13, 4, 13, 5, 0x0000E5B3 ),
  EW_GLYPH( 0x00EE, -1, -13, 7, 13, 5, 0x0000E61A ),
  EW_GLYPH( 0x00EF, 0, -13, 6, 13, 5, 0x0000E6C2 ),
  EW_GLYPH( 0x00F0, 0, -13, 10, 13, 10, 0x0000E745 ),
  EW_GLYPH( 0x00F1, 1, -13, 8, 13, 10, 0x0000E8F9 ),
  EW_GLYPH( 0x00F2, 0, -13, 10, 13, 10, 0x0000EA17 ),
  EW_GLYPH( 0x00F3, 0, -13, 10, 13, 10, 0x0000EBB5 ),
  EW_GLYPH( 0x00F4, 0, -13, 10, 13, 10, 0x0000ED51 ),
  EW_GLYPH( 0x00F5, 0, -13, 10, 13, 10, 0x0000EF0B ),
  EW_GLYPH( 0x00F6, 0, -13, 10, 13, 10, 0x0000F0DA ),
  EW_GLYPH( 0x00F7, 0, -10, 10, 7, 10, 0x0000F282 ),
  EW_GLYPH( 0x00F8, 1, -10, 9, 10, 11, 0x0000F347 ),
  EW_GLYPH( 0x00F9, 1, -13, 8, 13, 10, 0x0000F4CF ),
  EW_GLYPH( 0x00FA, 1, -13, 8, 13, 10, 0x0000F5C2 ),
  EW_GLYPH( 0x00FB, 1, -13, 8, 13, 10, 0x0000F6B0 ),
  EW_GLYPH( 0x00FC, 1, -13, 8, 13, 10, 0x0000F7C3 ),
  EW_GLYPH( 0x00FD, 0, -13, 9, 17, 9, 0x0000F8BB ),
  EW_GLYPH( 0x00FE, 1, -13, 9, 17, 10, 0x0000FA77 ),
  EW_GLYPH( 0x00FF, 0, -13, 9, 17, 9, 0x0000FBEF ),

  EW_FONT_PIXEL( ApplicationArial21, 0x0000FDAD )               /* ratio 72.71 % */
    0xBDEF7BBF, 0xEF71DEF7, 0x7BDEF7BD, 0x00000001, 0x00000000, 0x70000000, 0xDEF7BDEF,
    0x00BBCD7B, 0x96211862, 0xB860A415, 0xBC89DCF1, 0x0C0DB8EF, 0x43388DC1, 0x6B1394CA,
    0x3FF81CF3, 0x97581FFC, 0x9E1F2031, 0x7DAF7DBF, 0xBBBF7C6F, 0xC57BD8E7, 0xCF18C77E,
    0xA9235118, 0x8DF66D4D, 0xEF7CDEEF, 0xBBD8AEEF, 0x7877EF63, 0xA46390C6, 0xF03FF9B1,
    0xAC05D60C, 0xB7BF3C09, 0x65F9857F, 0xF7E2BF2D, 0xCBFBFFBC, 0x9BFC264D, 0x1D02F39C,
    0xE056FAEF, 0xBE8C4FD9, 0xE77BE303, 0xDFB81713, 0x07EC6233, 0xD85E64FE, 0xEF9F3119,
    0xFA6ABF7F, 0xF7E2B59D, 0x7FB7EE60, 0xB3DE0005, 0xAAC6E60B, 0x5F817DFD, 0x1CE5F7E3,
    0x110B358B, 0x21B78844, 0x0D6F0C82, 0xAD397DF8, 0xB3D60D9C, 0xE57A2FBF, 0x7D37FFF3,
    0xFCEA8D76, 0xF4133CFA, 0xF19F278C, 0x769EA1FC, 0x37417727, 0x9E177277, 0x8CF93C98,
    0xE46E8FE7, 0x189BE7D7, 0x201FB3BF, 0x6FCDF1FF, 0xFABE2F80, 0x1E3D7029, 0xD6FE5609,
    0x2FC03CF7, 0xFBC07E7A, 0xEBBC0196, 0xFC7575FB, 0xB1EB98A7, 0x1A65F59E, 0x51A8DF02,
    0x88209E32, 0xDFBB97E0, 0xE9FE3D9B, 0x6AB9CDF9, 0x6E32FFAF, 0x3E474823, 0xBF783FE4,
    0x778B3CF0, 0x529FC631, 0x089AC4EC, 0xFF139808, 0x390F1E0C, 0x7A85E8FE, 0xDE37DE16,
    0xCC41CF46, 0x2306AFC6, 0x8DC2D43F, 0x22C20864, 0x66E0862C, 0x8FC8C552, 0x4D5886AF,
    0x317901CF, 0xE773157E, 0xBFF8FFB8, 0x2ACF99E9, 0xC0F9BEAA, 0xC00000BA, 0x7BDDB7BD,
    0xEE977757, 0xB6D6B5AE, 0x00001AD6, 0xD7313BCC, 0x4F3D6788, 0x9DEF7BCE, 0x302773C0,
    0x36A17637, 0xD42BF143, 0x8D62C626, 0x536A1760, 0x0DA85D8A, 0x0BE73BF2, 0xDFBF9DC4,
    0x7FF1E8DA, 0x55163B9E, 0x913F3E41, 0x10C3187F, 0xC0184570, 0x05230060, 0x6071115C,
    0xF20AD60C, 0xF5FED1F9, 0xBD88B1DC, 0x7C0DAEBE, 0xDA87DE1F, 0x937CBF13, 0x04BF13DA,
    0x00000000, 0xFFDF8C00, 0xF5B50AFC, 0xF8F457E7, 0x4D1BF53D, 0xFC19E0FC, 0x78093C17,
    0xAFD407C6, 0xFCBE7816, 0x1B3DF581, 0x981FCF74, 0x3A20BD6B, 0x2D6B5AEE, 0xDDDDD115,
    0xFF9DFC8D, 0xEBEDC81B, 0x5F8F41DA, 0xF117273D, 0x66BF0420, 0xDDC131BC, 0xF7E017CF,
    0xD407BF3D, 0x500D1BF3, 0x805FF119, 0x846783F0, 0xD9EAFC77, 0xDF3F52E3, 0x8C01EE6F,
    0x0038813B, 0x2F59803F, 0xC09BFA30, 0xD1BC0599, 0xE00EB3C0, 0xBFDEFFC4, 0xF7BBE6F7,
    0x33B59FDE, 0x396318C7, 0xB0000003, 0x7EF7BDEF, 0xBEEEEAC8, 0xD6B59C64, 0xE016587A,
    0x5F9F6B1F, 0x5BFD3861, 0xAFCF07BF, 0xEFCD9D9E, 0x400E5F07, 0x88E1B710, 0x56620F18,
    0xE7ABF9BA, 0x7CFC65EF, 0xF113B9BF, 0xC06FCFFE, 0xFADF7EBF, 0xACCE3D07, 0x0679E6BF,
    0xC3722951, 0xFAC693F7, 0xBCB0FD9F, 0x3DF5BFBB, 0x37EA7BF0, 0xCBF052DA, 0xEA18011C,
    0x3D08DF81, 0xD1BF53F6, 0xCFBF9EE4, 0xBDEF792E, 0xD99BDEF7, 0x991DDDDD, 0x5D6B5AD6,
    0x0E6B1807, 0xCF0366E0, 0x4E4E01F8, 0x3C03EB20, 0x132FC01E, 0xB8C80590, 0xE3012980,
    0x625FFE77, 0x773D7DFC, 0xF3D5F9F2, 0x11018F8F, 0x788E89C1, 0xCF37D47D, 0xF9E0DF59,
    0xF9EFBF3D, 0x57E7BF06, 0x118F2FCF, 0x0265F87F, 0xBF0FE230, 0xD5FABF4C, 0xCF2F1BF3,
    0x0BB3F7CF, 0x37FF3BF5, 0xFAFCFCF0, 0xFC6FC1D9, 0x657B679E, 0x10A6A0FC, 0x1FC46220,
    0x57D6F0CA, 0x37D60FCF, 0x33FFF7BF, 0xF3D9F678, 0x230DD844, 0x3EAA0F99, 0xBF357C7A,
    0xBE3FE49A, 0xB9E3FBDF, 0x009DCF13, 0x7989DCF0, 0x009DE627, 0x5CC4EF30, 0x3CF59E23,
    0x41358809, 0xBE40EDF4, 0x32DF3D77, 0x9EF3FFBE, 0x77AEC3DF, 0xEF5D80AF, 0xFBE3015E,
    0x3DF9EF3F, 0xCF5DEF90, 0xEDF440B7, 0x7BDEF7B8, 0xDDDD5DEF, 0xD6B5DDDD, 0x35AD6B5A,
    0xEF7BDC00, 0xEEAEF7BD, 0xF2EEEEEE, 0xEDFA802B, 0xF8AFF807, 0xFFB213FE, 0x05FFD5BF,
    0x17B3BBEA, 0x2F6777D4, 0xEADFFFD9, 0xE2BFE2FF, 0xDFA84FFB, 0x77E3007E, 0xDB50AFCE,
    0xD0F7E7EF, 0xDF9E7BF9, 0x540F1168, 0x461BFC46, 0x03F5D006, 0x3C13D5DE, 0x727017B3,
    0xD802D601, 0x00D9C01F, 0xFBF58800, 0x056FFF9F, 0xF8EFBCC0, 0xBBBE3D7D, 0xA7BEF580,
    0xEFFD3D67, 0x5BFAA1B7, 0xC2ADF980, 0x9EF11EBB, 0xEAB71CFF, 0xB968D4B9, 0x77EFDF9F,
    0x8BFC5395, 0x8CF33F63, 0xAB6A94C1, 0x0788C3F1, 0x09B69186, 0x420CA9B1, 0xDF8B4C04,
    0x062748C3, 0x79F48BF9, 0x79C66DA9, 0xD7BD15E6, 0xF195FE0D, 0xEDFFBF9F, 0x544ECF9C,
    0x7E77E31D, 0x1BCFFCF9, 0xFC5F16F3, 0x2EDFA00B, 0xBFDFAF62, 0x3BF33D67, 0x7C416FCF,
    0xBEFC67FF, 0x0BFF4FDF, 0xC001EE30, 0xB000F197, 0xCC0071BE, 0xC0255FA8, 0x03E3C73F,
    0x4C723D64, 0x2FC7E7C0, 0x8319E01E, 0x71CA80E9, 0xC06A3DEF, 0xA7BBBAB1, 0x6BD5510F,
    0xC2C6F5AD, 0x98CC038A, 0xAF00F17C, 0xBDEF77CF, 0xDD01DFE7, 0x87F9AEFD, 0xDEFAD6B5,
    0x00430051, 0x7B83E6F2, 0x0BCFFDEF, 0xDC73DDDD, 0xBD6B5AC4, 0x51806CFF, 0x51800005,
    0xEB5AD60F, 0xBBA347FD, 0x00FFAADF, 0x7BF39F6B, 0xBF7FF8C0, 0x0FDFCBEF, 0xAAAF6271,
    0x7999ABB7, 0x5F256603, 0x91F7E00E, 0x00108013, 0x98C00084, 0x5F85FE80, 0x6199E00E,
    0xFCE80DE5, 0xF55EE4E1, 0x8C4E6B7C, 0x5FBEFCFB, 0xBDEF2F7C, 0x37FF9EF7, 0xAB7EEAC0,
    0x5AEF03F6, 0x0BF9BDEB, 0x05E37880, 0x64005150, 0x0002B002, 0x0093C001, 0xF1007E2A,
    0xD6BBC4C6, 0x05F8EEFA, 0xD6BBF756, 0xBDEFA1FF, 0x7F7BDEF7, 0xDDDDDD58, 0x6B5AEF07,
    0x0000F5AD, 0xB9C00000, 0x077BDEF7, 0x77777756, 0xAD6B5DE2, 0x000002B5, 0x5AD6BBC0,
    0xEEAC2D6B, 0xEEB6EEEE, 0x7BDEF7BD, 0xDDDDD593, 0x5AD6F83D, 0x0000AD6B, 0xDFF80000,
    0x581DEF7B, 0xF89DDDDD, 0x056B5AD6, 0x00000000, 0xFFBF9800, 0xB1057FF9, 0x8EFFBC7B,
    0xDDCBE35F, 0x5CDF9E35, 0xE09D53C3, 0x04C4E9CD, 0x024F1FFC, 0x62001620, 0xEF7BDF41,
    0xBBB093DF, 0x83C7F93B, 0x664D6B5A, 0x1E7806FD, 0x7DFFCF7C, 0x71BEFE6A, 0xF46FDF88,
    0x3FEF8BF7, 0xDBC826FA, 0x00000000, 0xDEFFC000, 0x561FEF7B, 0xF82F7777, 0x7D6B5AD6,
    0x00000000, 0xEA000000, 0x0000003E, 0xBEE20000, 0x00000000, 0x00000000, 0x22183FCF,
    0xE54E58B2, 0xCB17FBAF, 0x8ED667AD, 0x9FFC82EF, 0x0F6D8C01, 0x13B1FF50, 0x00EE5F3C,
    0x80767BF3, 0x3F400AF5, 0xFAC099F3, 0xCD04ECDE, 0xCC601789, 0xBE6F005A, 0x038DE003,
    0xEFDF3350, 0x00000002, 0x00000000, 0x00000000, 0xD6B5AD60, 0xBBBBBA4A, 0x004F7BD7,
    0x8144BEFB, 0xC071881C, 0x80F7E033, 0x789E0FDF, 0x1C81E390, 0xF048DF17, 0xE03F3C2B,
    0x09C8C789, 0x157EB8E4, 0xFE795F80, 0x173A3300, 0x01558C40, 0xDE0FE7E0, 0x45DC413B,
    0x802F0027, 0x1AC026B7, 0x0BD7009D, 0x009ADE30, 0xDC00746B, 0xAAC600F8, 0x05E3D009,
    0x58C00370, 0xECE7DAC0, 0xADFFE405, 0xFFBDFBEF, 0xAAEDD701, 0x3CAC1D75, 0xF9B27101,
    0x78C600E5, 0xC9E00B18, 0x8C200308, 0x30C20030, 0xE193C016, 0xE3180397, 0x8809E561,
    0xDC6E2F9B, 0x9C6EB555, 0xDFDEEE40, 0xE0F77BF7, 0x7BDEF7BD, 0x7756137E, 0xBC2EF5CF,
    0xE3DEAD6B, 0x00915005, 0x9EB10069, 0xF7BDCE0A, 0xBAB0F8F4, 0xF03BDDFB, 0x00E6B5AE,
    0x00000000, 0x3ED62000, 0xB18137E7, 0x8DF7DFBF, 0xB13889DE, 0x38EF5557, 0x6404F378,
    0x0953C58F, 0x3913F13C, 0x00349E00, 0x08003088, 0x1CC00622, 0x537C4ACC, 0x4F378FE5,
    0x737DFA70, 0x2AF62711, 0x8C1FCCCF, 0xCFBEFDFD, 0xAC417ABB, 0xF66FCE7D, 0xBDEFA3B7,
    0x97FF9EF7, 0xBFBDEDF0, 0xC6A076AF, 0x317EB518, 0x803F9401, 0xC6E30094, 0xBDEF738B,
    0xDF03B9FF, 0x25F51DDE, 0xF7EB18D4, 0xB33C00FC, 0xDF378016, 0x0BC6F004, 0x449A9EA0,
    0x137E73EF, 0xE739AF62, 0xFCCC3F7A, 0x3D7BDD7D, 0x7828FF0F, 0x1A3FCFE3, 0xD6AB34E2,
    0xFC01ADF9, 0xFF7A7ABE, 0xF3BE7827, 0xE402EF6F, 0x9C578FFA, 0x39109E06, 0xD7154407,
    0xEEFAF5FE, 0xAD771978, 0x5379AEF9, 0xBDEF7BDF, 0x7777DEF7, 0xEEE9E3F7, 0x8EB5AD7F,
    0x002AD6BB, 0x00000000, 0x00000000, 0x00000000, 0xBC806FA0, 0x0000000D, 0x00000000,
    0x1AF70000, 0x4C0B4820, 0x3782F159, 0x7FF1DE2A, 0x1D1FFBD7, 0x5BD56FD6, 0x1BBF4F6B,
    0x58EF9C40, 0x89F78AC0, 0x30E7F80F, 0xC7D64247, 0x24C781E7, 0x055F07C7, 0x3C8C1CBE,
    0x17C7E330, 0x6B0F580F, 0x13D65F02, 0x7FF2301F, 0xD55F012B, 0x09A6601F, 0xEF780DEF,
    0x3DBBCE07, 0xB1505150, 0x1BE646CB, 0x18C54303, 0x0FC56278, 0xB07A847B, 0x8A7853CB,
    0xFB67831D, 0xF362308F, 0x52945478, 0xDB188A2A, 0xEDB994CE, 0x0A796A07, 0x3B0D9E55,
    0xB3B1FE47, 0x578A81E2, 0xF04C9CA1, 0x9E31053C, 0x7E0DB602, 0x804FFC36, 0x1F13A4EF,
    0x58D3A7CC, 0x4CFD1935, 0xC674E8F4, 0x8EF38E07, 0xF98F6403, 0x0031400E, 0xC01BC44E,
    0xFCBF7E3B, 0xE7CE6781, 0xF8899E79, 0x3B2FCBE5, 0x1BC41CF9, 0xA03BD747, 0x177D58D6,
    0xF1EAEEB0, 0xCB5BE426, 0x8F8CE071, 0xC7A2C77C, 0xE6F5581B, 0xE7C0AB98, 0xF881A7DC,
    0x9E00FC8D, 0x000000A8, 0x00000000, 0xF7BFF000, 0x7DEF7BDE, 0xBBBBBAFC, 0x5AD734C3,
    0x0358DD6B, 0x30355678, 0xE203F97E, 0x7F2F80B8, 0x07AD7409, 0xE40D55A8, 0xB8E01F97,
    0x9E78F401, 0x6B5AD6B5, 0xEEEEEA84, 0xDEEFDFEE, 0x8D6DD8CF, 0x00000004, 0x46B00000,
    0x44F7BB1A, 0x2942EC6D, 0xAC2EC6D4, 0xA858C411, 0x28615F8D, 0xF7AEC6D4, 0x43DBFDDE,
    0x0000058E, 0x20000000, 0x03DBF2C7, 0xCB1013DE, 0x17DE3984, 0xCC9A6FDE, 0xDF1F5198,
    0x3551DE13, 0x71DC630E, 0xDEF7BDEF, 0xFF18EF7B, 0xFFFFFFFF, 0xFFFFFFFF, 0xF7C1DDF0,
    0x9CEFE634, 0xF1DEB0BD, 0xFC3F56FD, 0x8BF3D766, 0x04617ECB, 0xE2777AD4, 0x7C6FDF39,
    0xD9CF7E49, 0xC7F4C4DF, 0x3DF89E48, 0xC4B9FEB5, 0xFFBEFE7F, 0x3FD8CBFF, 0xCC000000,
    0x9E15F9FF, 0x22BE7DFE, 0xA37EB3FE, 0x08DF0319, 0x03025213, 0xC4AA4701, 0xF3EE2153,
    0xAFACD1EC, 0x303FEB7F, 0x837CE77E, 0xF37DFBFA, 0x4F7F3A9F, 0xF8C547FD, 0x2533FE21,
    0xEC242000, 0x390FC737, 0xF3DFCEAE, 0xDFD531DC, 0xB00FEBAF, 0x7800003F, 0x9E25F9F6,
    0x13FF7E6F, 0x3B357D74, 0x34A83C8D, 0xC058984D, 0xFC8D3094, 0xBF9BC950, 0x9F505F9A,
    0x183EF7EF, 0x037E73BF, 0xF3F7EFE3, 0x7BF3EE2F, 0xCAF3DF9E, 0x2318C631, 0xF7B5A733,
    0xDDF053DE, 0x63BDEF7B, 0x673203FA, 0xFAF3FBE0, 0x1F3EF53F, 0x2FBF5FF5, 0x9CF785BF,
    0x3FF399E5, 0xFD88DF0D, 0xF9771FFA, 0x06B1C6FE, 0x00000000, 0xFE7DA800, 0xDF9EDDF3,
    0xE8BD7EFC, 0x617E6AFA, 0x69A541E4, 0xD30804C2, 0xC1E46984, 0x357D7418, 0xCDF3C1FF,
    0x78B9D7EF, 0xE14FF9F6, 0x6FE3913F, 0xE6E7ACF6, 0xAFBF9BF2, 0x003FDB6B, 0x9F678000,
    0xFBFA793D, 0x3B88FBE6, 0x246B8BEB, 0x00582C32, 0x00000000, 0xBF7E3F7E, 0x00000FDF,
    0x3FD80FF6, 0x00000FF6, 0x88800000, 0xFBFFF27C, 0x03F7EB3D, 0xF6200000, 0x379FE13F,
    0xE27FCBF1, 0x3D40FFAB, 0x6F57E20A, 0x0BD7A9E2, 0xAC07ADF2, 0x77CDE06C, 0x000000FF,
    0xD9F73BF6, 0x37F9EF15, 0xF8BF7BEB, 0x6B3DF1FE, 0x2FD4F38A, 0x6D8F5766, 0x4D62E924,
    0x00004B0B, 0x00000000, 0xFB000000, 0x93D9F67D, 0x6F9BEFEA, 0x8BEB3BC9, 0x2C322463,
    0x00000000, 0x3BF18000, 0xDB5037E7, 0xC5FEB7EF, 0xB3CF7E3B, 0x07E46BC7, 0x3094E65F,
    0x2530404C, 0x83F239A4, 0xDF8F532F, 0xF2F1ECF3, 0xF37EFCFC, 0xFF3BF65F, 0xFD5037E7,
    0xFC8BFCFB, 0x3346FD66, 0x1308DF0A, 0x90100252, 0x0ABE2552, 0x46FCF3EE, 0xF9FEBF53,
    0xF9FFCC0F, 0x0000000D, 0x9FB3ED40, 0xE6FCF3EF, 0xBA2DFBF7, 0x34BF5ABE, 0x2D278FF2,
    0x29801309, 0x61F1CA61, 0x357F3724, 0xFBF8C1FF, 0xF8C4BF7E, 0x0003FF9D, 0xFBF60000,
    0xDF1ACD9E, 0x121EAF8B, 0x0000002C, 0x3FFBC400, 0xFA7BE17B, 0xBEB25EAB, 0x8CB6BAA7,
    0xC7EFC3DF, 0x37E77C6F, 0xCD6F9CF1, 0xFEF3C377, 0x5FE318E7, 0xACEF0CB8, 0xD761ABF9,
    0x3F3DFBEF, 0x007CC3E2, 0x4F6FBB5F, 0x951E5FBF, 0x84000000, 0xBBF56699, 0x003FB07F,
    0x20000000, 0x189AC300, 0xF357E4E1, 0xF7D7A7A4, 0x809F4BBD, 0xF0A2FEF3, 0xE0F237C4,
    0xA83DF0E6, 0x4F1E2787, 0xEEB8E47C, 0xF5157C48, 0x131D1583, 0x380566A2, 0xF31BD8FE,
    0x37EFEC4E, 0xEC626DB0, 0x945CAC52, 0xFCCB6235, 0x6A11EC32, 0x5528F958, 0x995EC7DC,
    0x151FC8FF, 0x8AD55B55, 0x659B8C41, 0x57E0AF8F, 0x50B8CA99, 0x75143116, 0x6AB7BC3F,
    0x55CC653E, 0x34676CDE, 0x171FF1DE, 0xC039C9EA, 0x37CE80F2, 0x39AD631B, 0x7B66E0D7,
    0xE8D1EAF3, 0xFC26EBD1, 0x9183C7BF, 0xBF0FC727, 0x3C91BF28, 0xF231E98B, 0x97E7EA23,
    0xCF11FF03, 0xFCDE3303, 0x80639A81, 0x3C203F1B, 0xFE84A9C0, 0xBAAA0B9E, 0xF7BDEEA0,
    0xF7B55BDE, 0xC7C8BFDE, 0x271C6318, 0xA03D3D60, 0xDF1099FA, 0x01DFC0F8, 0x3C25F8EF,
    0x8C6399F3, 0xF7B3DB91, 0xF787FBDE, 0xCDDACF34, 0x1600C4CE, 0xC9E07300, 0x92FDF58F,
    0x4F12FDF5, 0x5807307E, 0x33B00C00, 0xCFDDACF1, 0x00000005, 0xE7D00000, 0x9135EF45,
    0x03580179, 0xCBE13180, 0x16FBF907, 0x5F16FBF9, 0x0013183E, 0x6E641603, 0xEB07AF7A,
    0xA34AF67F, 0xFE8C6747, 0xB9F43DDF, 0xFD5199BF, 0xAFFFF3FF, 0xC32311BE, 0x0463115A,
    0xF803E300, 0x829E01FD, 0x2727FF78, 0xF8AF5762, 0x9FB1DE1E, 0x3CF2EAFC, 0x47DFA9E1,
    0xEC00F50E, 0x1E78720D, 0x219E79BD, 0xFC77933D, 0x23F1ED67, 0xB5BE78F6, 0xF9EE3103,
    0x400C8C25, 0x00DDC015, 0x6FCFFEF1, 0x3EFD7620, 0xCCF3307B, 0xDFCB8DFA, 0x60430FC0,
    0xDE02B66D, 0xC0EF77CF, 0x3DEE676F, 0x18C66390, 0x901F9E20, 0xDF80B1FF, 0xEEBFFE70,
    0xF7EBFE5F, 0x2B99F2FD, 0x89F9017C, 0xFFE7BDF5, 0xAADE259E, 0x30E359F7, 0xF1DEAF62,
    0xCC827FF0, 0xC11058CB, 0x97C4747F, 0x73CC6E3F, 0xFBFF1A2A, 0x7E0BF77D, 0xD7DC6027,
    0xE5A3A1AB, 0x37AA839C, 0xB1DE6CE8, 0xD999EBA0, 0xA7EEA9E0, 0x8CADEF30, 0xDAC7DEE7,
    0xF7B18F7B, 0xB0C6312E, 0xDE6118C6, 0x7BDD477B, 0x3DEF6B1F, 0xC4BBDEC6, 0x631AC318,
    0x0B9E0004, 0x02E78000, 0x00000B9E, 0x5FFE77F2, 0xD7AFB622, 0x4F5BC545, 0x3C54C18F,
    0xB79E3067, 0xF6B55A81, 0xDFBF7C40, 0x5193762F, 0x2BD73FEA, 0x333EF1A3, 0x725F9FA2,
    0x7767BF31, 0xDCF04FBC, 0x20F9E75A, 0x802A2FBE, 0xF5939FE7, 0x5F8D4247, 0xE30F17D5,
    0xD3FCFBEF, 0x017799BA, 0xFFE7DEC8, 0xBBB6B015, 0x05FDFFCF, 0xC8F76FD6, 0x91F9FEB1,
    0xE7DAC9EF, 0x37CB5EDF, 0xD9EF7C73, 0xFD4FEA63, 0xBF11F3BC, 0x10CC8C69, 0x21919007,
    0x8C979E0F, 0x8F9BE7E7, 0xFC8C6DEA, 0x39DF1CCD, 0xE4FE8FDD, 0x677EB27B, 0x58B5DE3F,
    0x7223DDBF, 0x6B0FF3FE, 0xF7EEF7BB, 0xB3FF5817, 0xFCE77E4B, 0xEFDFD95E, 0x76EFE61D,
    0x31F15913, 0x045F3ED7, 0x14FF9FCF, 0xA6379FBF, 0xAF33E72F, 0xCF7E3755, 0xC6EAB000,
    0x397C19EF, 0xDF89799F, 0xDEF31BCF, 0x77BDEF7B, 0x37777775, 0xD6B5AD6B, 0x0000000A,
    0x7BDE67BE, 0xBD9004EF, 0x602BFFCF, 0xFF9F776D, 0xDFAC0BFB, 0xFD6391EE, 0x13DF23F3,
    0xF2FF9CF7, 0xF299BE5A, 0x3FA9D39C, 0x186203F5, 0x7BC83323, 0x646417EF, 0x1317F790,
    0xEA0FCF19, 0x7F23197B, 0xA9CD6133, 0xF89EF93F, 0xB5DF3FE3, 0x23DDBF58, 0x0FF3FE72,
    0xEEF7BB6B, 0x7B8C17F7, 0xDEF7BDEF, 0xE738C77B, 0x39CE739C, 0x2FCEF867, 0xDF39FFDE,
    0x33CF3D33, 0xCFFF4F3D, 0x007F60F9, 0xEF750000, 0x37BDCF1D, 0xE8E77767, 0xAD6B91EE,
    0x00AD6B98, 0x6B5C8000, 0xAD6BFEFD, 0xDDDDDD98, 0xCE7BC3DD, 0xBDED4F17, 0x199FE7DE,
    0xB14C5F17, 0xEBD88DE7, 0xDCEB3A9F, 0xABCE7BCF, 0xD567FEEA, 0xE64C563F, 0x733CC957,
    0x77191DAD, 0xE5ABBBCD, 0xD3EB78F9, 0x0003DE07, 0x00200000, 0x7850A060, 0xF105FA9F,
    0xE6162FEB, 0x007D7CFF, 0xDF8C0000, 0xFBDEF7B9, 0xA00AFF1B, 0xDFEAF703, 0x98006003,
    0xC6003A00, 0x7E3002BF, 0x0000000D, 0x00000000, 0xFC000000, 0x907BF0FF, 0x75CF88FD,
    0x2719B3FF, 0x0738273D, 0xE00004BF, 0xE30BE7D9, 0xA9F1FEFB, 0xA00BA39A, 0xE32E8E6A,
    0xB3E3FDFB, 0x8AC538B6, 0xDE0DF78E, 0xAA8FCB55, 0x004CFBD7, 0x99F7AF55, 0xCFCB55DE,
    0x0DF78E8A, 0xDAC0938C, 0xE3004E78, 0x7007383D, 0xE04BF13A, 0x398009AB, 0x3E8C005F,
    0x793A7000, 0x6FA6E237, 0xE6026A4D, 0x01EF88FA, 0xB9BE0FB2, 0xB583D381, 0xC4E6F81A,
    0x63E3D3CE, 0xE77E0FAE, 0x2718F8F4, 0x73C3EF81, 0xC3EB9802, 0x81F64039, 0x07B7025F,
    0x0135BE00, 0x000FD730, 0x73DE27D9, 0x3A6E20BE, 0xEF6A78EF, 0x2D7782F5, 0x2E333FCF,
    0x2F81F53C, 0x0277F226, 0x9C0DE7B1, 0xFAF62077, 0xA0B5DE27, 0xBCFDCEB3, 0xDAC0BCE7,
    0x2CFFDD54, 0xFEA1EF18, 0x4E9C44C1, 0xFC49FB98, 0xE779826A, 0xD617CE62, 0xF46B8C8E,
    0xBDDE6B01, 0xDDE4E9DA, 0xBE7CE77C, 0x60267935, 0x3DF88FAE, 0x6F83E8C0, 0x60F4E06E,
    0x35BE06AD, 0xF8F4F3B1, 0xDF83EB98, 0x3C3E3D39, 0x9E000277, 0x0B71813B, 0x1E881698,
    0x038F6203, 0xF3309DB6, 0x14797C4D, 0x0F1DF3C6, 0xDF8E7B5E, 0xCA79F7AA, 0xAD5F7E7F,
    0x00FBE80F, 0x6001BBA0, 0xEE3001FD, 0xF197C001, 0x71BEB000, 0x5FA8CC00, 0xC73FC025,
    0x3D6403E3, 0xE7C04C72, 0xE01E2FC7, 0x80E98319, 0x3DEF71CA, 0xBAB1C06A, 0x510FA7BB,
    0xF5AD6BD5, 0x038AC2C6, 0xF17C98CC, 0xF00FAF00, 0x5E8005DC, 0x06FF000B, 0x0007B8C0,
    0xC003C65F, 0x3001C6FA, 0x00957EA3, 0x0F8F1CFF, 0x31C8F590, 0xBF1F9F01, 0x0C678078,
    0xC72A03A6, 0x01A8F7BD, 0x9EEEEAC7, 0xAF55443E, 0x0B1BD6B5, 0x63300E2B, 0xBC03C5F2,
    0x939D603E, 0x9FFBD600, 0x19D60137, 0xE3004FFD, 0x197C001E, 0x1BEB000F, 0xFA8CC007,
    0x73FC0255, 0xD6403E3C, 0x7C04C723, 0x01E2FC7E, 0x0E98319E, 0xDEF71CA8, 0xAB1C06A3,
    0x10FA7BBB, 0x5AD6BD55, 0x38AC2C6F, 0x17C98CC0, 0x40FAF00F, 0x6D737FFD, 0xF7CEFE80,
    0x3D7B00BE, 0xC6003CFB, 0x32F8003D, 0x37D6001E, 0xF519800E, 0xE7F804AB, 0xAC807C78,
    0xF8098E47, 0x03C5F8FC, 0x1D30633C, 0xBDEE3950, 0x56380D47, 0x21F4F777, 0xB5AD7AAA,
    0x715858DE, 0x2F931980, 0x81F5E01E, 0x00EE78EF, 0xE3BE0000, 0xB8C003B9, 0xC65F0007,
    0xC6FAC003, 0x7EA33001, 0x1CFF0095, 0xF5900F8F, 0x9F0131C8, 0x8078BF1F, 0x03A60C67,
    0xF7BDC72A, 0xEAC701A8, 0x443E9EEE, 0xD6B5AF55, 0x0E2B0B1B, 0xC5F26330, 0xC03EBC03,
    0xD3F40048, 0x9ED44009, 0x5BFFEC00, 0x00F4EC00, 0x0071BEB0, 0x255FA8CC, 0xE3C73FC0,
    0x723D6403, 0xC7E7C04C, 0x19E01E2F, 0xCA80E983, 0x6A3DEF71, 0xBBBAB1C0, 0xD5510FA7,
    0xC6F5AD6B, 0xCC038AC2, 0x00F17C98, 0xEE700FAF, 0x7BDEF7BD, 0xB1580FEF, 0xBBBBB31E,
    0xDE8EF00F, 0xB5AD6BFE, 0x05E2B01E, 0x00F97C00, 0x003F3300, 0xFC162FC0, 0x16F7BDEE,
    0x76609C9E, 0x6BC4F777, 0xFF5F7BDD, 0x495AD6B5, 0x7EEEEA8D, 0xADF1B800, 0x3006D6B5,
    0x5FF0056A, 0x74B5AD6B, 0x77766034, 0xCFB58377, 0xFC603DF9, 0xE5F7DFBF, 0xB13887EF,
    0xD5DBD557, 0xB301BCCC, 0xF0072F92, 0x4009C8FB, 0x00420008, 0xFF404C60, 0xF0072FC2,
    0x06F2B0CC, 0x7270FE74, 0x35BE7AAF, 0x7E7DC627, 0x17BE2FDF, 0x7E71DF44, 0x1F8AC00F,
    0x0357F300, 0x07AFEE60, 0xD4034EA0, 0x4EA01337, 0xEF7BDF42, 0xB0FEF7BD, 0x0FBBBBBA,
    0x5AD6B5DE, 0x000001EB, 0xEF738000, 0xAC0EF7BD, 0xC4EEEEEE, 0x6B5AD6BB, 0x80000005,
    0xD6B5AD77, 0xDDDD585A, 0x7EF20DDD, 0x01F3EF00, 0xF7D03EFC, 0xBDEF7BDE, 0xEEEEAC3F,
    0xAD7783EE, 0x007AD6B5, 0xE0000000, 0xBDEF7BDC, 0xBBBBAB03, 0xB5AEF13B, 0x00015AD6,
    0x6B5DE000, 0x5616B5AD, 0xC3777777, 0xF9016738, 0x8177FF5F, 0x0B38EF3C, 0xF7BDEF7D,
    0xEAC3FBDE, 0x783EEEEE, 0xAD6B5AD7, 0x00000007, 0xF7BDCE00, 0xBAB03BDE, 0xEF13BBBB,
    0x15AD6B5A, 0xDE000000, 0x6B5AD6B5, 0x77777561, 0x9C7DC637, 0xDC60000F, 0xF7D0F9C7,
    0xBDEF7BDE, 0xEEEEAC3F, 0xAD7783EE, 0x007AD6B5, 0xE0000000, 0xBDEF7BDC, 0xBBBBAB03,
    0xB5AEF13B, 0x00015AD6, 0x6B5DE000, 0x5616B5AD, 0x8B777777, 0x963B16FF, 0x1F752FF8,
    0x00000000, 0x1FFB0000, 0x7FAC762B, 0x0000FBA8, 0x00000000, 0xF87E77E0, 0xFC7EBBCD,
    0xA87FB1FE, 0x000000FB, 0x00000000, 0x00000000, 0x701DF3E7, 0xF751DF3E, 0x00000001,
    0x00000000, 0x7BDEF7BC, 0xAC00DFFE, 0x3F6AB7EE, 0x7AD6BBC0, 0x8002FE6F, 0x6002F138,
    0x93C00144, 0xFBDCE9DC, 0xEC7FF042, 0xC821BFFF, 0x4F033321, 0x07E2A002, 0xC131BC40,
    0x6EFAD6BB, 0xEEAC02FE, 0x03FFAD77, 0xAFABFFD6, 0xBFFDFA21, 0xB5B883F3, 0xEF793BFE,
    0x9D177104, 0xDE00BC00, 0x746B009A, 0xC02F5C02, 0xAC026B78, 0xE37001D1, 0x26AB1803,
    0xC0178F40, 0x0163000D, 0xF80093BE, 0xEF8005EA, 0xE7DAC007, 0xFFE405EC, 0xBDFBEFAD,
    0xEDD701FF, 0xAC1D75AA, 0xB271013C, 0xC600E5F9, 0xE00B1878, 0x200308C9, 0xC200308C,
    0x93C01630, 0x180397E1, 0x09E561E3, 0x6E2F9B88, 0x6EB555DC, 0xDEEE409C, 0xF77BF7DF,
    0x01F3C800, 0x000FADE0, 0xB5800FBF, 0xC80BD9CF, 0xF7DF5BFF, 0xAE03FF7B, 0x3AEB55DB,
    0xE2027958, 0x01CBF364, 0x1630F18C, 0x061193C0, 0x00611840, 0x802C6184, 0x072FC327,
    0xCAC3C630, 0x5F371013, 0x6AABB8DC, 0xDC8138DD, 0xF7EFBFBD, 0xCE7801EE, 0xEBF50029,
    0xCEA00AFE, 0xD600A79C, 0x202F673E, 0xDF7D6FFF, 0xB80FFDEF, 0xEBAD576E, 0x8809E560,
    0x072FCD93, 0x58C3C630, 0x18464F00, 0x01846100, 0x00B18610, 0x1CBF0C9E, 0x2B0F18C0,
    0x7CDC404F, 0xAAAEE371, 0x7204E375, 0xDFBEFEF7, 0xF63007BB, 0xC03FCE6F, 0x0375F3AD,
    0x79F67EEC, 0x673ED600, 0x6FFF202F, 0xFDEFDF7D, 0x576EB80F, 0xE560EBAD, 0xCD938809,
    0xC630072F, 0x4F0058C3, 0x61001846, 0x86100184, 0x0C9E00B1, 0x18C01CBF, 0x404F2B0F,
    0xE3717CDC, 0xE375AAAE, 0xFEF77204, 0x07BBDFBE, 0x5DE66EB0, 0xBAC00000, 0xAC017799,
    0x405ECE7D, 0xBEFADFFE, 0x701FFBDF, 0xD75AAEDD, 0x1013CAC1, 0x0E5F9B27, 0xB1878C60,
    0x308C9E00, 0x0308C200, 0x01630C20, 0x397E193C, 0x561E3180, 0xF9B8809E, 0x555DC6E2,
    0xE409C6EB, 0xBF7DFDEE, 0x17E20F77, 0x7F3E4B58, 0x3FC63E9E, 0xBCF7CF7F, 0xEAF9EF8C,
    0x3DF18003, 0x7F8C7D5F, 0x79EF9EFE, 0xE9E7F3E5, 0x673ED603, 0xF20BF92F, 0xAFBEFEFF,
    0xC1DEFFDE, 0xFAAABB8D, 0x37958B4B, 0xCD13EF10, 0xFFE20637, 0x0F90F97C, 0x8CADB37C,
    0xC18F9F04, 0x61F9E830, 0x3D69C888, 0xBE4CC0FF, 0x8C09EFD1, 0xFD72B1F1, 0x62E4E206,
    0xAAADFC8E, 0xFFFC5D75, 0x7DF7F7FF, 0xA09FF7BF, 0xDF500BCE, 0x0675001A, 0xB7900DF4,
    0x00000001, 0x00000000, 0x035EE000, 0x29816904, 0x46F05E2B, 0xEFFE3BC5, 0xC3A3FF7A,
    0x6B7AADFA, 0x677C09ED, 0x03FEAA00, 0xDF406750, 0x001B7900, 0x00000000, 0x00000000,
    0x904035EE, 0xE2B29816, 0xBC546F05, 0xF7AEFFE3, 0xDFAC3A3F, 0x9ED6B7AA, 0xF00F9F60,
    0xFC07D773, 0xF43FFC76, 0x01B7900D, 0x00000000, 0x00000000, 0x04035EE0, 0x2B298169,
    0xC546F05E, 0x7AEFFE3B, 0xFAC3A3FF, 0xED6B7AAD, 0xFBF5F709, 0xAFB80003, 0x037D1FDF,
    0x00006DE4, 0x00000000, 0xB8000000, 0x5A4100D7, 0x178ACA60, 0x8EF151BC, 0xFFDEBBFF,
    0xAB7EB0E8, 0x027B5ADE, 0xEE00BEE3, 0x17EC017C, 0xBAC05DF4, 0x909BC7AB, 0x81C72D6F,
    0x1DF23E33, 0x606F1E8B, 0xAE639BD5, 0x9F739F02, 0xF237E206, 0x02A27803, 0x00000000,
    0xE0000000, 0x000001BD, 0xBDEE7000, 0x756137E7, 0xC2EF5CF7, 0x3DEAD6BB, 0x0915005E,
    0xEB100690, 0x7BDCE0A9, 0xAB0F8F4F, 0x03BDDFBB, 0x0E6B5AEF, 0xE77E4000, 0xCF6206FC,
    0xC1FEB7DF, 0x8DD4F38A, 0xE3C91B87, 0x066FC0C1, 0x0807F330, 0xB7C73013, 0x7FABD880,
    0xD0ABB780, 0xE670252F, 0xF9859BAA, 0x81BADF7E, 0xF5602775, 0x81FD600F, 0x2F673BF9,
    0xBF7C77AC, 0xD9BF0FD5, 0xB2E2FCF5, 0xB501185F, 0xCE789DDE, 0x925F1BF7, 0x37F673DF,
    0x9231FD31, 0xAD4F7E27, 0x9FF12E7F, 0xFFFFEFBF, 0x0FCE2032, 0xBC03F9D0, 0x73BF981B,
    0xC77AC2F6, 0xF0FD5BF7, 0x2FCF5D9B, 0x1185FB2E, 0x89DDEB50, 0xF1BF7CE7, 0x673DF925,
    0x1FD3137F, 0xF7E27923, 0x12E7FAD4, 0xFEFBF9FF, 0xCF032FFF, 0xEF9E0539, 0xE780DFD7,
    0x980CF33E, 0xC2F673BF, 0x5BF7C77A, 0x5D9BF0FD, 0xFB2E2FCF, 0xEB501185, 0x7CE789DD,
    0xF925F1BF, 0x137F673D, 0x79231FD3, 0xFAD4F7E2, 0xF9FF12E7, 0x2FFFFEFB, 0xE6FFFA83,
    0xFDFBC1FA, 0x7FC2F7BF, 0xE60A7DCD, 0xB0BD9CEF, 0x56FDF1DE, 0xD766FC3F, 0x7ECB8BF3,
    0x7AD40461, 0xDF39E277, 0x7E497C6F, 0xC4DFD9CF, 0x9E48C7F4, 0xFEB53DF8, 0xFE7FC4B9,
    0xCBFFFFBE, 0x771CDD60, 0xE6EB0002, 0xEFE613B8, 0xDEB0BD9C, 0x3F56FDF1, 0xF3D766FC,
    0x617ECB8B, 0x777AD404, 0x6FDF39E2, 0xCF7E497C, 0xF4C4DFD9, 0xF89E48C7, 0xB9FEB53D,
    0xBEFE7FC4, 0xC0CBFFFF, 0x7E04BEF8, 0xDF807EBF, 0xF8C03EF7, 0xDFCC12FD, 0xBD617B39,
    0x7EADFBE3, 0xE7AECDF8, 0xC2FD9717, 0xEEF5A808, 0xDFBE73C4, 0x9EFC92F8, 0xE989BFB3,
    0xF13C918F, 0x73FD6A7B, 0x7DFCFF89, 0xC197FFFF, 0x2AFCE7DA, 0x037E73DE, 0x6FBEFEFD,
    0x7DF9FB7D, 0x733C1FF1, 0x9FB0DD55, 0xBFCB9EFA, 0x47FC1431, 0x37F7D6A0, 0x95F7BDEF,
    0xE37EF9E6, 0xF7BDEE67, 0x75DF23DE, 0x6318BBF6, 0x1B2C318C, 0x55BBC14B, 0xAF754FBC,
    0xE77A9FB1, 0xEFD7FC4F, 0xF9EF7FCB, 0x185BF2FB, 0x41BE73BF, 0xF9BEFDFD, 0xA7BF9D4F,
    0xFC62A3FE, 0x1299FF10, 0xF6121000, 0x1C87E39B, 0x79EFE757, 0xEFEA98EE, 0xF8C7F5D7,
    0x3E406FD9, 0x8EE304FF, 0xF37EE305, 0x8093BF01, 0xDF00BD5F, 0x73BF180F, 0xEFE3037E,
    0xEE2FF3F7, 0xDF9E7BF3, 0xC631CAF3, 0xA7332318, 0x53DEF7B5, 0xEF7BDDF0, 0x03FA63BD,
    0xFBE06732, 0xF53FFAF3, 0x5FF51F3E, 0x05BF2FBF, 0x9D00FCE2, 0x81BBC03F, 0x37E73BF1,
    0x3F7EFE30, 0xBF3EE2FF, 0xAF3DF9E7, 0x318C631C, 0x7B5A7332, 0xDF053DEF, 0x3BDEF7BD,
    0x73203FA6, 0xAF3FBE06, 0xF3EF53FF, 0xFBF5FF51, 0x9CF05BF2, 0x7EF9E053, 0xEE780DFD,
    0xF180CF33, 0x3037E73B, 0xFF3F7EFE, 0xE7BF3EE2, 0x1CAF3DF9, 0x32318C63, 0xEF7B5A73,
    0xBDDF053D, 0xA63BDEF7, 0x0673203F, 0xFFAF3FBE, 0x51F3EF53, 0xF2FBF5FF, 0xC737585B,
    0xBAC0009D, 0xF184EE39, 0x3037E73B, 0xFF3F7EFE, 0xE7BF3EE2, 0x1CAF3DF9, 0x32318C63,
    0xEF7B5A73, 0xBDDF053D, 0xA63BDEF7, 0x0673203F, 0xFFAF3FBE, 0x51F3EF53, 0xF2FBF5FF,
    0x19F9C65B, 0x538CA7FF, 0x00002DC6, 0xEEB00000, 0x719DF78C, 0x000B71A6, 0xF0000000,
    0xB57C1D9D, 0x277C3FD7, 0xB7183B7F, 0x00000000, 0x00000000, 0x0BDE7FFC, 0x97BCFFF8,
    0x00000B71, 0x00000000, 0xF7ACEB00, 0x69FA3103, 0x4EBFFE78, 0xE37FAB10, 0xDFADF9E0,
    0xC7A1E31B, 0x71FE79EF, 0xB310FC8C, 0x12384962, 0x88E12980, 0x8E621F1C, 0x3CF7E3D4,
    0x7EDA977F, 0xE41FF9BF, 0xE13AAF6F, 0x19BFBD17, 0xA77EAFDE, 0x67D9F7ED, 0x6FBFAA4F,
    0xACEF25BE, 0xC8918E2F, 0x000000B0, 0x7C000000, 0xBD5F0127, 0x180FDF00, 0x037E73BF,
    0xEB7EFDB5, 0xF7E3BC5F, 0x46BC7B3C, 0x4E65F07E, 0x0404C309, 0x239A4253, 0xF532F83F,
    0x1ECF3DF8, 0xEFCFCF2F, 0xE205FF37, 0x3F9D00FC, 0xF181BBC0, 0x5037E73B, 0xFEB7EFDB,
    0xCF7E3BC5, 0xE46BC7B3, 0x94E65F07, 0x30404C30, 0xF239A425, 0x8F532F83, 0xF1ECF3DF,
    0x7EFCFCF2, 0x9CF05FF3, 0xBAF9E053, 0xCEE782BF, 0xEFC60A79, 0x6D40DF9C, 0x17FADFBF,
    0xCF3DF8EF, 0x1F91AF1E, 0xC253997C, 0x94C10130, 0x0FC8E690, 0x7E3D4CBE, 0xCBC7B3CF,
    0xCDFBF3F3, 0xBFFEA17F, 0xDFBC36B9, 0xF85F7BFF, 0x03CFB9AF, 0x6FCE77E3, 0x6FDFB6A0,
    0xFC778BFD, 0xD78F679E, 0xCCBE0FC8, 0x80986129, 0x73484A60, 0xA65F07E4, 0xD9E7BF1E,
    0xF9F9E5E3, 0xB0BFE6FD, 0x013B8E6E, 0xDC737580, 0xCE77E309, 0xDFB6A06F, 0x778BFD6F,
    0x8F679EFC, 0xBE0FC8D7, 0x986129CC, 0x484A6080, 0x5F07E473, 0xE7BF1EA6, 0xF9E5E3D9,
    0xBFE6FDF9, 0x0000D9C0, 0xEF750D9C, 0x9BDEF7BD, 0xBBBBBBB3, 0xEB5AE47B, 0x02B5ADFD,
    0xECFFD600, 0xFDEFD3D5, 0xD73BDFBE, 0xC4AABD53, 0xF9C531BA, 0xDF933FF2, 0xCE617353,
    0x7D1CCCB6, 0xFFE3B9C8, 0x19EC4F4B, 0x357EB591, 0xF7DFEA9F, 0x5DE61FCD, 0x806F7E60,
    0x07FB04E7, 0x000003FB, 0x30020000, 0x4E1189AC, 0x7A4F357E, 0xBBDF7D7A, 0xFA07CF20,
    0xC3F7C0F9, 0x00FEC1FE, 0x80000000, 0x626B0C00, 0xCD5F9384, 0xDF5E9E93, 0x73CC2EF7,
    0xF7F79E06, 0x7DCF07FE, 0x0FF619D6, 0x000007F6, 0x60040000, 0x9C231358, 0xF49E6AFC,
    0x77BEFAF4, 0x3B8C6EB1, 0xC6375801, 0xF60FF69D, 0x00000007, 0x58600400, 0xFC9C2313,
    0xF4F49E6A, 0x8177BEFA, 0xEE882779, 0xAC2CE209, 0x1EFFF09B, 0x1C9E460F, 0xFCA2FC3F,
    0xA62CF246, 0xA88FC8C7, 0xFC0E5F9F, 0xCC0F3C47, 0x6A07F378, 0xFC6E018E, 0xA700F080,
    0x2E7BFA12, 0xFD82EAA8, 0xC0000003, 0xC0DF9FFC, 0xBFCFBFD3, 0x6FD66F88, 0x8DF0A334,
    0x00252130, 0xE2552901, 0xCF3EE0AB, 0xF5F5346F, 0xFD607FCF, 0x00006FCF, 0x3FFE0000,
    0xFFC0017D, 0x26EB2FA7, 0x83C7BFFC, 0x0FC72791, 0x91BF28BF, 0x31E98B3C, 0xE7EA23F2,
    0x11FF0397, 0xDE3303CF, 0x639A81FC, 0x203F1B80, 0x84A9C03C, 0xAA0B9EFE, 0x000000BA
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
  CoreRectView__OnSetBounds( _this, _Const0125 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00B0 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const0126 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const0127 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0001 );
  CoreRectView__OnSetBounds( &_this->Frame, _Const0125 );
  ViewsFrame_OnSetColor( &_this->Frame, FlatColorOfTouch );
  CoreRectView__OnSetBounds( &_this->Image, _Const0125 );
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
  CoreRectView__OnSetBounds( _this, _Const0128 );
  CoreRectView__OnSetBounds( &_this->bg, _Const0128 );
  ViewsRectangle_OnSetColor( &_this->bg, _Const0129 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0128 );
  ViewsBorder_OnSetWidth( &_this->Border, 3 );
  CoreRectView__OnSetBounds( &_this->labelSup, _Const012A );
  ViewsText_OnSetAlignment( &_this->labelSup, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelSup, EwLoadString( &_Const012B ));
  CoreRectView__OnSetBounds( &_this->labelInf, _Const012C );
  ViewsText_OnSetAlignment( &_this->labelInf, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelInf, EwLoadString( &_Const012D ));
  CoreRectView__OnSetBounds( &_this->SupMenos, _Const012E );
  ApplicationModIconButton_OnSetIconIndex( &_this->SupMenos, 2 );
  CoreRectView__OnSetBounds( &_this->SupMais, _Const012F );
  ApplicationModIconButton_OnSetIconIndex( &_this->SupMais, 3 );
  CoreRectView__OnSetBounds( &_this->InfMenos, _Const0130 );
  ApplicationModIconButton_OnSetIconIndex( &_this->InfMenos, 2 );
  CoreRectView__OnSetBounds( &_this->InfMais, _Const0131 );
  ApplicationModIconButton_OnSetIconIndex( &_this->InfMais, 3 );
  CoreRectView__OnSetBounds( &_this->SupVal, _Const0132 );
  ViewsText_OnSetString( &_this->SupVal, EwLoadString( &_Const0133 ));
  CoreRectView__OnSetBounds( &_this->InfVal, _Const0134 );
  ViewsText_OnSetString( &_this->InfVal, EwLoadString( &_Const0135 ));
  CoreRectView__OnSetBounds( &_this->Sair, _Const0136 );
  ApplicationModIconButton_OnSetIconIndex( &_this->Sair, 9 );
  CoreRectView__OnSetBounds( &_this->SupSignMais, _Const0137 );
  ApplicationModIconButton_OnSetIconIndex( &_this->SupSignMais, 0 );
  CoreRectView__OnSetBounds( &_this->SupSignMenos, _Const0138 );
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
  CoreRectView__OnSetBounds( _this, _Const0139 );
  CoreRectView__OnSetBounds( &_this->bg, _Const0139 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0139 );
  ViewsBorder_OnSetWidth( &_this->Border, 6 );
  CoreRectView__OnSetBounds( &_this->labelSup, _Const013A );
  CoreRectView__OnSetBounds( &_this->labelInf, _Const013B );
  CoreRectView__OnSetBounds( &_this->SupMenos, _Const013C );
  ApplicationModIconButton_OnSetIconIndex( &_this->SupMenos, 2 );
  CoreRectView__OnSetBounds( &_this->SupMais, _Const013D );
  ApplicationModIconButton_OnSetIconIndex( &_this->SupMais, 3 );
  CoreRectView__OnSetBounds( &_this->InfMenos, _Const013E );
  ApplicationModIconButton_OnSetIconIndex( &_this->InfMenos, 2 );
  CoreRectView__OnSetBounds( &_this->InfMais, _Const013F );
  ApplicationModIconButton_OnSetIconIndex( &_this->InfMais, 3 );
  CoreRectView__OnSetBounds( &_this->SupVal, _Const0140 );
  CoreRectView__OnSetBounds( &_this->InfVal, _Const0141 );
  CoreRectView__OnSetBounds( &_this->Sair, _Const0142 );
  ApplicationModIconButton_OnSetIconIndex( &_this->Sair, 12 );
  CoreRectView__OnSetBounds( &_this->SupSignMais, _Const0143 );
  CoreRectView__OnSetBounds( &_this->SupSignMenos, _Const0144 );
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
  CoreRectView__OnSetBounds( _this, _Const0128 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine3, _Const0145 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine3, _Const0146 );
  ViewsLine_OnSetColor( &_this->VLine3, _Const0147 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine2, _Const0148 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine2, _Const0149 );
  ViewsLine_OnSetColor( &_this->VLine2, _Const0147 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine1, _Const014A );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine1, _Const014B );
  ViewsLine_OnSetColor( &_this->VLine1, _Const0147 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine1, _Const014C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine1, _Const00B0 );
  ViewsLine_OnSetColor( &_this->HLine1, _Const004B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine2, _Const014D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine2, _Const014E );
  ViewsLine_OnSetColor( &_this->HLine2, _Const0147 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine3, _Const014F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine3, _Const0150 );
  ViewsLine_OnSetColor( &_this->HLine3, _Const004E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine4, _Const0151 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine4, _Const0152 );
  ViewsLine_OnSetColor( &_this->HLine4, _Const0147 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine5, _Const0153 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine5, _Const0154 );
  ViewsLine_OnSetColor( &_this->HLine5, _Const004B );
  CoreRectView__OnSetBounds( &_this->PlotterPath, _Const0128 );
  ViewsStrokePath_OnSetFlipY( &_this->PlotterPath, 0 );
  ViewsStrokePath_OnSetWidth( &_this->PlotterPath, 2.000000f );
  CoreRectView__OnSetBounds( &_this->Border, _Const0128 );
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
  CoreRectView__OnSetBounds( _this, _Const0128 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine3, _Const0145 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine3, _Const0146 );
  ViewsLine_OnSetColor( &_this->VLine3, _Const0147 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine2, _Const0148 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine2, _Const0149 );
  ViewsLine_OnSetColor( &_this->VLine2, _Const0147 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine1, _Const014A );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine1, _Const014B );
  ViewsLine_OnSetColor( &_this->VLine1, _Const0147 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine1, _Const014C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine1, _Const00B0 );
  ViewsLine_OnSetColor( &_this->HLine1, _Const0147 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine2, _Const014D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine2, _Const014E );
  ViewsLine_OnSetColor( &_this->HLine2, _Const0147 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine3, _Const014F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine3, _Const0150 );
  ViewsLine_OnSetColor( &_this->HLine3, _Const0015 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine4, _Const0151 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine4, _Const0152 );
  ViewsLine_OnSetColor( &_this->HLine4, _Const0147 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine5, _Const0153 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine5, _Const0154 );
  ViewsLine_OnSetColor( &_this->HLine5, _Const0147 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0128 );
  _this->VerticalRatio = 1.000000f;
  _this->StrokeColorR = _Const0015;
  _this->StrokeWidth = 2.000000f;
  _this->StrokeColorS = _Const0015;
  _this->StrokeColorT = _Const0015;
  CoreRectView__OnSetBounds( &_this->PlotterPathR, _Const0128 );
  ViewsStrokePath_OnSetFlipY( &_this->PlotterPathR, 0 );
  ViewsStrokePath_OnSetWidth( &_this->PlotterPathR, 2.000000f );
  CoreRectView__OnSetBounds( &_this->PlotterPathS, _Const0128 );
  ViewsStrokePath_OnSetFlipY( &_this->PlotterPathS, 0 );
  ViewsStrokePath_OnSetWidth( &_this->PlotterPathS, 2.000000f );
  CoreRectView__OnSetBounds( &_this->PlotterPathT, _Const0128 );
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
  CoreRectView__OnSetBounds( _this, _Const0139 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine3, _Const0155 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine3, _Const0156 );
  ViewsLine_OnSetWidth( &_this->VLine3, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine2, _Const0157 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine2, _Const0158 );
  ViewsLine_OnSetWidth( &_this->VLine2, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine1, _Const0159 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine1, _Const015A );
  ViewsLine_OnSetWidth( &_this->VLine1, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine1, _Const015B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine1, _Const015C );
  ViewsLine_OnSetWidth( &_this->HLine1, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine2, _Const015D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine2, _Const015E );
  ViewsLine_OnSetWidth( &_this->HLine2, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine3, _Const015F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine3, _Const0160 );
  ViewsLine_OnSetWidth( &_this->HLine3, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine4, _Const0161 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine4, _Const0162 );
  ViewsLine_OnSetWidth( &_this->HLine4, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine5, _Const0163 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine5, _Const0164 );
  ViewsLine_OnSetWidth( &_this->HLine5, 2 );
  CoreRectView__OnSetBounds( &_this->PlotterPath, _Const0165 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0139 );
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
  CoreRectView__OnSetBounds( _this, _Const0139 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine3, _Const0155 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine3, _Const0156 );
  ViewsLine_OnSetWidth( &_this->VLine3, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine2, _Const0157 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine2, _Const0158 );
  ViewsLine_OnSetWidth( &_this->VLine2, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->VLine1, _Const0159 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->VLine1, _Const015A );
  ViewsLine_OnSetWidth( &_this->VLine1, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine1, _Const015B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine1, _Const015C );
  ViewsLine_OnSetWidth( &_this->HLine1, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine2, _Const015D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine2, _Const015E );
  ViewsLine_OnSetWidth( &_this->HLine2, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine3, _Const015F );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine3, _Const0160 );
  ViewsLine_OnSetWidth( &_this->HLine3, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine4, _Const0161 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine4, _Const0162 );
  ViewsLine_OnSetWidth( &_this->HLine4, 2 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->HLine5, _Const0163 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->HLine5, _Const0164 );
  ViewsLine_OnSetWidth( &_this->HLine5, 2 );
  CoreRectView__OnSetBounds( &_this->Border, _Const0165 );
  ViewsBorder_OnSetWidth( &_this->Border, 2 );
  CoreRectView__OnSetBounds( &_this->PlotterPathR, _Const0165 );
  CoreRectView__OnSetBounds( &_this->PlotterPathS, _Const0165 );
  CoreRectView__OnSetBounds( &_this->PlotterPathT, _Const0165 );

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

/* Initializer for the class 'Application::FFTMessageR' */
void ApplicationFFTMessageR__Init( ApplicationFFTMessageR _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationFFTMessageR );

  /* ... and initialize objects, variables, properties, etc. */
  EwRetainString( &_this->THD_R_text, EwLoadString( &_Const0017 ));
}

/* Re-Initializer for the class 'Application::FFTMessageR' */
void ApplicationFFTMessageR__ReInit( ApplicationFFTMessageR _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Application::FFTMessageR' */
void ApplicationFFTMessageR__Done( ApplicationFFTMessageR _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationFFTMessageR );

  /* Release all used strings */
  EwReleaseString( &_this->THD_R_text );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::FFTMessageR' */
void ApplicationFFTMessageR__Mark( ApplicationFFTMessageR _this )
{
  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* 'C' function for method : 'Application::FFTMessageR.OnSetTHD_R_text()' */
void ApplicationFFTMessageR_OnSetTHD_R_text( ApplicationFFTMessageR _this, XString 
  value )
{
  if ( !EwCompString( _this->THD_R_text, value ))
    return;

  EwRetainString( &_this->THD_R_text, value );
}

/* Variants derived from the class : 'Application::FFTMessageR' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFFTMessageR )
EW_END_OF_CLASS_VARIANTS( ApplicationFFTMessageR )

/* Virtual Method Table (VMT) for the class : 'Application::FFTMessageR' */
EW_DEFINE_CLASS( ApplicationFFTMessageR, XObject, "Application::FFTMessageR" )
EW_END_OF_CLASS( ApplicationFFTMessageR )

/* Initializer for the class 'Application::FFTMessageS' */
void ApplicationFFTMessageS__Init( ApplicationFFTMessageS _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationFFTMessageS );

  /* ... and initialize objects, variables, properties, etc. */
  EwRetainString( &_this->THD_S_text, EwLoadString( &_Const0017 ));
}

/* Re-Initializer for the class 'Application::FFTMessageS' */
void ApplicationFFTMessageS__ReInit( ApplicationFFTMessageS _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Application::FFTMessageS' */
void ApplicationFFTMessageS__Done( ApplicationFFTMessageS _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationFFTMessageS );

  /* Release all used strings */
  EwReleaseString( &_this->THD_S_text );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::FFTMessageS' */
void ApplicationFFTMessageS__Mark( ApplicationFFTMessageS _this )
{
  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* 'C' function for method : 'Application::FFTMessageS.OnSetTHD_S_text()' */
void ApplicationFFTMessageS_OnSetTHD_S_text( ApplicationFFTMessageS _this, XString 
  value )
{
  if ( !EwCompString( _this->THD_S_text, value ))
    return;

  EwRetainString( &_this->THD_S_text, value );
}

/* Variants derived from the class : 'Application::FFTMessageS' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFFTMessageS )
EW_END_OF_CLASS_VARIANTS( ApplicationFFTMessageS )

/* Virtual Method Table (VMT) for the class : 'Application::FFTMessageS' */
EW_DEFINE_CLASS( ApplicationFFTMessageS, XObject, "Application::FFTMessageS" )
EW_END_OF_CLASS( ApplicationFFTMessageS )

/* Initializer for the class 'Application::FFTMessageT' */
void ApplicationFFTMessageT__Init( ApplicationFFTMessageT _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationFFTMessageT );

  /* ... and initialize objects, variables, properties, etc. */
  EwRetainString( &_this->THD_T_text, EwLoadString( &_Const0017 ));
}

/* Re-Initializer for the class 'Application::FFTMessageT' */
void ApplicationFFTMessageT__ReInit( ApplicationFFTMessageT _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Application::FFTMessageT' */
void ApplicationFFTMessageT__Done( ApplicationFFTMessageT _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationFFTMessageT );

  /* Release all used strings */
  EwReleaseString( &_this->THD_T_text );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::FFTMessageT' */
void ApplicationFFTMessageT__Mark( ApplicationFFTMessageT _this )
{
  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* 'C' function for method : 'Application::FFTMessageT.OnSetTHD_T_text()' */
void ApplicationFFTMessageT_OnSetTHD_T_text( ApplicationFFTMessageT _this, XString 
  value )
{
  if ( !EwCompString( _this->THD_T_text, value ))
    return;

  EwRetainString( &_this->THD_T_text, value );
}

/* Variants derived from the class : 'Application::FFTMessageT' */
EW_DEFINE_CLASS_VARIANTS( ApplicationFFTMessageT )
EW_END_OF_CLASS_VARIANTS( ApplicationFFTMessageT )

/* Virtual Method Table (VMT) for the class : 'Application::FFTMessageT' */
EW_DEFINE_CLASS( ApplicationFFTMessageT, XObject, "Application::FFTMessageT" )
EW_END_OF_CLASS( ApplicationFFTMessageT )

/* Embedded Wizard */
