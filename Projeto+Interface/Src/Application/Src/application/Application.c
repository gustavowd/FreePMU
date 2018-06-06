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
#include "_ApplicationAplic.h"
#include "_ApplicationClasse.h"
#include "_ApplicationFFT.h"
#include "_ApplicationFase.h"
#include "_ApplicationFasores.h"
#include "_ApplicationFreq.h"
#include "_ApplicationMag.h"
#include "_ApplicationModifiedButton.h"
#include "_ApplicationVNC.h"
#include "_ApplicationcontextoMsg.h"
#include "_ApplicationcontextoStatus.h"
#include "_ChartsCoordList.h"
#include "_ChartsGraph.h"
#include "_CoreOutline.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSystemEvent.h"
#include "_CoreSystemEventHandler.h"
#include "_CoreTimer.h"
#include "_CoreView.h"
#include "_CoreWipeTouchHandler.h"
#include "_EffectsPointEffect.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBorder.h"
#include "_ViewsFrame.h"
#include "_ViewsImage.h"
#include "_ViewsLine.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_ViewsWarpImage.h"
#include "Application.h"
#include "Core.h"
#include "Effects.h"
#include "Flat.h"
#include "Resources.h"
#include "Views.h"

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault0[] =
{
  0x0000042C, /* ratio 47.57 % */
  0xB8001700, 0x00000452, 0x00C20023, 0x0DE00398, 0xCA003900, 0xC008342C, 0x0782C0C1,
  0x1004461F, 0x001D4007, 0x01B800EA, 0x9A400630, 0x5C1B1484, 0xE504D834, 0x01269119,
  0x8008F1D0, 0x088346CC, 0xC8546656, 0x03C1A250, 0xA422113A, 0xCE83D142, 0xDA211B29,
  0x21D36989, 0x37351044, 0xB2822542, 0x70A844E9, 0x08544250, 0xAA000A15, 0xD0162843,
  0x50228309, 0x00630682, 0xACA001C0, 0x733A0341, 0xB3AB35B4, 0x6EB90005, 0x68C59C01,
  0x9C5CC6D7, 0x95A80175, 0x4E4017F1, 0xAAEC00B4, 0x6F7851AD, 0xF384005A, 0x37EC45C2,
  0x00C4E3AF, 0x8C9E1466, 0x9D65B351, 0xD0470B8B, 0xCBE152D9, 0x7E672791, 0xEA1129B4,
  0x00560016, 0x20C8A174, 0x009ECA28, 0x2580035C, 0x83606C5B, 0x48B31163, 0xDB3193A9,
  0xE79365E1, 0x80048006, 0xE794E21E, 0x165B9F22, 0x06E7F36A, 0x3C274655, 0xE775B95D,
  0x2C1B3914, 0x4EA7F0CB, 0x9718001A, 0xEE771BD7, 0xD518C3FA, 0x114F566A, 0xE4B663FE,
  0x0DB03E29, 0x8FC76251, 0xD2548D21, 0xE0E90A49, 0x5DEB621B, 0x00761DF6, 0x609A0024,
  0x9B154173, 0x36220E41, 0x51B08458, 0x997C6154, 0x83613861, 0x9D372A0F, 0xE6901341,
  0xD1A94C12, 0x0055DAC4, 0x0A6190A0, 0x96F81800, 0x85D2124E, 0x69BB7558, 0xCB7E20F8,
  0x4EA146F1, 0x23D6559A, 0x86211645, 0x311B4F10, 0xBC8B9504, 0x002328C1, 0xA3390DE2,
  0x14E99B85, 0x15E77859, 0x90749F66, 0x462367A5, 0x18C70D65, 0x30023760, 0x1A5E0DDC,
  0x486D80A4, 0x148006B6, 0xE469AD14, 0x8001526D, 0x4E6C9A94, 0x065126E4, 0x5218868D,
  0x5CB1B512, 0xC48D124B, 0x191B6990, 0x8840914A, 0x49228125, 0x91042931, 0x54E81641,
  0x29334310, 0x36541564, 0x58400571, 0x11248D0E, 0xD38C001E, 0xA5148C50, 0x0000101A,
  0x00000000
};

/* Compressed strings for the language 'Default'. */
static const unsigned int _StringsDefault1[] =
{
  0x000000CA, /* ratio 71.29 % */
  0xB8002F00, 0x80000452, 0xD0007382, 0x00061001, 0x006F0019, 0x51087080, 0x00298022,
  0x039000CA, 0x34800EC0, 0xD4722314, 0x84001061, 0x10010581, 0xE12008C9, 0x006E8A98,
  0x12F961A0, 0x0688C3E4, 0x0834A013, 0x9F46E185, 0xD8320D1C, 0x000AC009, 0x00860027,
  0x892002F8, 0x0E4C004A, 0xD4408C96, 0x4CA55228, 0xBA453AA3, 0x27D3E964, 0x1C968F03,
  0xD5A0D04A, 0x36B75EA4, 0xA4A54005, 0x0042A202, 0x374851D4, 0x2592CC62, 0x00000203,
  0x00000000
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
static const XRect _Const0049 = {{ 390, 180 }, { 480, 200 }};
static const XStringRes _Const004A = { _StringsDefault0, 0x00CE };
static const XColor _Const004B = { 0xFF, 0x00, 0x00, 0xFF };
static const XRect _Const004C = {{ 390, 120 }, { 480, 140 }};
static const XStringRes _Const004D = { _StringsDefault0, 0x00DB };
static const XColor _Const004E = { 0x00, 0xFF, 0x00, 0xFF };
static const XRect _Const004F = {{ 390, 60 }, { 480, 80 }};
static const XStringRes _Const0050 = { _StringsDefault0, 0x00E8 };
static const XRect _Const0051 = {{ 350, 220 }, { 410, 240 }};
static const XStringRes _Const0052 = { _StringsDefault0, 0x00F5 };
static const XRect _Const0053 = {{ 260, 220 }, { 320, 240 }};
static const XStringRes _Const0054 = { _StringsDefault0, 0x00FB };
static const XRect _Const0055 = {{ 170, 220 }, { 230, 240 }};
static const XStringRes _Const0056 = { _StringsDefault0, 0x0102 };
static const XRect _Const0057 = {{ 80, 220 }, { 140, 240 }};
static const XStringRes _Const0058 = { _StringsDefault0, 0x0109 };
static const XRect _Const0059 = {{ -10, 220 }, { 50, 240 }};
static const XStringRes _Const005A = { _StringsDefault0, 0x0111 };
static const XRect _Const005B = {{ 20, 0 }, { 140, 40 }};
static const XStringRes _Const005C = { _StringsDefault0, 0x0119 };
static const XRect _Const005D = {{ 140, 0 }, { 270, 40 }};
static const XPoint _Const005E = { 290, 220 };
static const XPoint _Const005F = { 290, 40 };
static const XColor _Const0060 = { 0x77, 0x77, 0x77, 0xFF };
static const XPoint _Const0061 = { 200, 220 };
static const XPoint _Const0062 = { 200, 40 };
static const XPoint _Const0063 = { 110, 220 };
static const XPoint _Const0064 = { 110, 40 };
static const XPoint _Const0065 = { 380, 190 };
static const XPoint _Const0066 = { 20, 190 };
static const XPoint _Const0067 = { 380, 160 };
static const XPoint _Const0068 = { 20, 160 };
static const XPoint _Const0069 = { 380, 130 };
static const XPoint _Const006A = { 20, 130 };
static const XPoint _Const006B = { 380, 100 };
static const XPoint _Const006C = { 20, 100 };
static const XPoint _Const006D = { 380, 70 };
static const XPoint _Const006E = { 20, 70 };
static const XRect _Const006F = {{ 20, 40 }, { 380, 220 }};
static const XRect _Const0070 = {{ 20, 40 }, { 740, 220 }};
static const XColor _Const0071 = { 0xFF, 0xF5, 0x12, 0xFF };
static const XPoint _Const0072 = { 0, 90 };
static const XPoint _Const0073 = { 1, 30 };
static const XColor _Const0074 = { 0x00, 0x00, 0x00, 0x00 };
static const XColor _Const0075 = { 0xFF, 0xFB, 0xFA, 0x00 };
static const XPoint _Const0076 = { 20, 30 };
static const XStringRes _Const0077 = { _StringsDefault0, 0x0128 };
static const XStringRes _Const0078 = { _StringsDefault0, 0x012D };
static const XStringRes _Const0079 = { _StringsDefault0, 0x0134 };
static const XStringRes _Const007A = { _StringsDefault0, 0x013D };
static const XStringRes _Const007B = { _StringsDefault0, 0x0146 };
static const XRect _Const007C = {{ 350, 0 }, { 420, 40 }};
static const XStringRes _Const007D = { _StringsDefault0, 0x014F };
static const XRect _Const007E = {{ 270, 0 }, { 340, 40 }};
static const XRect _Const007F = {{ 190, 0 }, { 260, 40 }};
static const XRect _Const0080 = {{ 20, 0 }, { 188, 40 }};
static const XStringRes _Const0081 = { _StringsDefault0, 0x0158 };
static const XPoint _Const0082 = { 2, 6 };
static const XStringRes _Const0083 = { _StringsDefault0, 0x016B };
static const XStringRes _Const0084 = { _StringsDefault0, 0x0171 };
static const XStringRes _Const0085 = { _StringsDefault0, 0x0178 };
static const XStringRes _Const0086 = { _StringsDefault0, 0x0181 };
static const XRect _Const0087 = {{ 310, 0 }, { 380, 40 }};
static const XRect _Const0088 = {{ 230, 0 }, { 300, 40 }};
static const XRect _Const0089 = {{ 150, 0 }, { 220, 40 }};
static const XStringRes _Const008A = { _StringsDefault0, 0x018A };
static const XStringRes _Const008B = { _StringsDefault0, 0x0198 };
static const XPoint _Const008C = { 80, 220 };
static const XPoint _Const008D = { 80, 20 };
static const XPoint _Const008E = { 140, 220 };
static const XPoint _Const008F = { 140, 20 };
static const XPoint _Const0090 = { 200, 20 };
static const XPoint _Const0091 = { 260, 220 };
static const XPoint _Const0092 = { 260, 20 };
static const XPoint _Const0093 = { 320, 170 };
static const XPoint _Const0094 = { 20, 170 };
static const XPoint _Const0095 = { 320, 120 };
static const XPoint _Const0096 = { 20, 120 };
static const XPoint _Const0097 = { 320, 70 };
static const XRect _Const0098 = {{ 60, 220 }, { 100, 240 }};
static const XStringRes _Const0099 = { _StringsDefault0, 0x019E };
static const XRect _Const009A = {{ 120, 220 }, { 160, 240 }};
static const XStringRes _Const009B = { _StringsDefault0, 0x01A4 };
static const XRect _Const009C = {{ 180, 220 }, { 220, 240 }};
static const XRect _Const009D = {{ 240, 220 }, { 280, 240 }};
static const XStringRes _Const009E = { _StringsDefault0, 0x01AA };
static const XRect _Const009F = {{ 330, 160 }, { 370, 180 }};
static const XStringRes _Const00A0 = { _StringsDefault0, 0x01B0 };
static const XRect _Const00A1 = {{ 330, 110 }, { 370, 130 }};
static const XStringRes _Const00A2 = { _StringsDefault0, 0x01B8 };
static const XRect _Const00A3 = {{ 330, 60 }, { 370, 80 }};
static const XStringRes _Const00A4 = { _StringsDefault0, 0x01BF };
static const XRect _Const00A5 = {{ 20, 20 }, { 320, 220 }};
static const XPoint _Const00A6 = { 0, 200 };
static const XPoint _Const00A7 = { 6, 200 };
static const XColor _Const00A8 = { 0x5B, 0x56, 0x27, 0x00 };
static const XColor _Const00A9 = { 0x0C, 0x0E, 0x6E, 0x00 };
static const XRect _Const00AA = {{ 370, 40 }, { 470, 85 }};
static const XStringRes _Const00AB = { _StringsDefault0, 0x01C7 };
static const XRect _Const00AC = {{ 370, 100 }, { 470, 145 }};
static const XStringRes _Const00AD = { _StringsDefault0, 0x01D1 };
static const XRect _Const00AE = {{ 370, 160 }, { 470, 205 }};
static const XStringRes _Const00AF = { _StringsDefault0, 0x01DB };
static const XRect _Const00B0 = {{ 0, 0 }, { 480, 240 }};
static const XRect _Const00B1 = {{ 10, 30 }, { 470, 80 }};
static const XStringRes _Const00B2 = { _StringsDefault0, 0x01E5 };
static const XRect _Const00B3 = {{ 100, 180 }, { 220, 210 }};
static const XStringRes _Const00B4 = { _StringsDefault0, 0x01F6 };
static const XRect _Const00B5 = {{ 0, 0 }, { 260, 30 }};
static const XStringRes _Const00B6 = { _StringsDefault0, 0x0201 };
static const XRect _Const00B7 = {{ 0, 80 }, { 220, 110 }};
static const XStringRes _Const00B8 = { _StringsDefault1, 0x0003 };
static const XRect _Const00B9 = {{ 10, 110 }, { 470, 160 }};
static const XStringRes _Const00BA = { _StringsDefault1, 0x001A };
static const XRect _Const00BB = {{ 260, 180 }, { 380, 210 }};
static const XStringRes _Const00BC = { _StringsDefault1, 0x002A };
static const XStringRes _Const00BD = { _StringsDefault1, 0x0033 };
static const XStringRes _Const00BE = { _StringsDefault1, 0x003F };
static const XStringRes _Const00BF = { _StringsDefault1, 0x0050 };
static const XRect _Const00C0 = {{ 0, 0 }, { 120, 30 }};
static const XPoint _Const00C1 = { 0, 30 };
static const XPoint _Const00C2 = { 120, 30 };
static const XPoint _Const00C3 = { 120, 0 };
static const XStringRes _Const00C4 = { _StringsDefault1, 0x005C };

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
  ApplicationVNC__Init( &_this->TVNC, &_this->_XObject, 0 );

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
  ApplicationVNC__ReInit( &_this->TVNC );
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
  ApplicationVNC__Done( &_this->TVNC );

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
  EW_GLYPH( 0x0022, 2, -13, 5, 4, 9, 0x0000024D ),              /* '"' */
  EW_GLYPH( 0x0023, 1, -13, 8, 13, 9, 0x00000274 ),             /* '#' */
  EW_GLYPH( 0x0024, 0, -13, 9, 13, 9, 0x0000038F ),             /* '$' */
  EW_GLYPH( 0x0025, 0, -13, 9, 13, 9, 0x0000052D ),             /* '%' */
  EW_GLYPH( 0x0026, 0, -13, 9, 13, 9, 0x000006BF ),             /* '&' */
  EW_GLYPH( 0x0027, 3, -13, 3, 4, 9, 0x00000832 ),              /* ''' */
  EW_GLYPH( 0x0028, 2, -14, 5, 18, 9, 0x00000849 ),             /* '(' */
  EW_GLYPH( 0x0029, 2, -14, 5, 18, 9, 0x0000090B ),             /* ')' */
  EW_GLYPH( 0x002A, 1, -13, 7, 8, 9, 0x000009C6 ),              /* '*' */
  EW_GLYPH( 0x002B, 1, -10, 7, 6, 9, 0x00000AA1 ),              /* '+' */
  EW_GLYPH( 0x002C, 3, -2, 3, 5, 9, 0x00000B1C ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -6, 9, 2, 9, 0x00000B48 ),               /* '-' */
  EW_GLYPH( 0x002E, 3, -2, 3, 2, 9, 0x00000BAE ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -13, 9, 13, 9, 0x00000BCA ),             /* '/' */
  EW_GLYPH( 0x0030, 0, -13, 9, 13, 9, 0x00000CD4 ),             /* '0' */
  EW_GLYPH( 0x0031, 0, -13, 9, 13, 9, 0x00000E3B ),             /* '1' */
  EW_GLYPH( 0x0032, 0, -13, 9, 13, 9, 0x00000EF4 ),             /* '2' */
  EW_GLYPH( 0x0033, 0, -13, 9, 13, 9, 0x00001046 ),             /* '3' */
  EW_GLYPH( 0x0034, 0, -13, 9, 13, 9, 0x000011A3 ),             /* '4' */
  EW_GLYPH( 0x0035, 0, -13, 9, 13, 9, 0x000012CB ),             /* '5' */
  EW_GLYPH( 0x0036, 0, -13, 9, 13, 9, 0x00001414 ),             /* '6' */
  EW_GLYPH( 0x0037, 0, -13, 9, 13, 9, 0x00001564 ),             /* '7' */
  EW_GLYPH( 0x0038, 0, -13, 9, 13, 9, 0x0000169D ),             /* '8' */
  EW_GLYPH( 0x0039, 0, -13, 9, 13, 9, 0x00001849 ),             /* '9' */
  EW_GLYPH( 0x003A, 3, -7, 3, 7, 9, 0x0000199E ),               /* ':' */
  EW_GLYPH( 0x003B, 3, -7, 3, 10, 9, 0x000019F0 ),              /* ';' */
  EW_GLYPH( 0x003C, 1, -12, 7, 11, 9, 0x00001A51 ),             /* '<' */
  EW_GLYPH( 0x003D, 1, -9, 7, 5, 9, 0x00001B2C ),               /* '=' */
  EW_GLYPH( 0x003E, 1, -12, 7, 11, 9, 0x00001BE5 ),             /* '>' */
  EW_GLYPH( 0x003F, 0, -13, 9, 13, 9, 0x00001CBA ),             /* '?' */
  EW_GLYPH( 0x0040, 0, -10, 9, 13, 9, 0x00001E03 ),             /* '@' */
  EW_GLYPH( 0x0041, 0, -13, 9, 13, 9, 0x00001F7D ),             /* 'A' */
  EW_GLYPH( 0x0042, 0, -13, 9, 13, 9, 0x000020E7 ),             /* 'B' */
  EW_GLYPH( 0x0043, 0, -13, 9, 13, 9, 0x00002244 ),             /* 'C' */
  EW_GLYPH( 0x0044, 0, -13, 9, 13, 9, 0x0000233C ),             /* 'D' */
  EW_GLYPH( 0x0045, 0, -13, 9, 13, 9, 0x0000242C ),             /* 'E' */
  EW_GLYPH( 0x0046, 0, -13, 9, 13, 9, 0x0000253B ),             /* 'F' */
  EW_GLYPH( 0x0047, 0, -13, 9, 13, 9, 0x0000262E ),             /* 'G' */
  EW_GLYPH( 0x0048, 0, -13, 9, 13, 9, 0x00002765 ),             /* 'H' */
  EW_GLYPH( 0x0049, 0, -13, 9, 13, 9, 0x00002836 ),             /* 'I' */
  EW_GLYPH( 0x004A, 0, -13, 9, 13, 9, 0x00002910 ),             /* 'J' */
  EW_GLYPH( 0x004B, 0, -13, 9, 13, 9, 0x000029E4 ),             /* 'K' */
  EW_GLYPH( 0x004C, 0, -13, 9, 13, 9, 0x00002B13 ),             /* 'L' */
  EW_GLYPH( 0x004D, 0, -13, 9, 13, 9, 0x00002BB2 ),             /* 'M' */
  EW_GLYPH( 0x004E, 0, -13, 9, 13, 9, 0x00002CEA ),             /* 'N' */
  EW_GLYPH( 0x004F, 0, -13, 9, 13, 9, 0x00002DE3 ),             /* 'O' */
  EW_GLYPH( 0x0050, 0, -13, 9, 13, 9, 0x00002F03 ),             /* 'P' */
  EW_GLYPH( 0x0051, 0, -13, 9, 15, 9, 0x00003021 ),             /* 'Q' */
  EW_GLYPH( 0x0052, 0, -13, 9, 13, 9, 0x0000317C ),             /* 'R' */
  EW_GLYPH( 0x0053, 0, -13, 9, 13, 9, 0x000032B3 ),             /* 'S' */
  EW_GLYPH( 0x0054, 0, -13, 9, 13, 9, 0x00003410 ),             /* 'T' */
  EW_GLYPH( 0x0055, 0, -13, 9, 13, 9, 0x000034CA ),             /* 'U' */
  EW_GLYPH( 0x0056, 0, -13, 9, 13, 9, 0x0000359D ),             /* 'V' */
  EW_GLYPH( 0x0057, 0, -13, 10, 13, 9, 0x000036FB ),            /* 'W' */
  EW_GLYPH( 0x0058, 0, -13, 9, 13, 9, 0x00003881 ),             /* 'X' */
  EW_GLYPH( 0x0059, 0, -13, 9, 13, 9, 0x00003A07 ),             /* 'Y' */
  EW_GLYPH( 0x005A, 0, -13, 9, 13, 9, 0x00003B2D ),             /* 'Z' */
  EW_GLYPH( 0x005B, 2, -14, 5, 18, 9, 0x00003C88 ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -13, 9, 13, 9, 0x00003D16 ),             /* '\' */
  EW_GLYPH( 0x005D, 2, -14, 5, 18, 9, 0x00003E1D ),             /* ']' */
  EW_GLYPH( 0x005E, 0, -13, 10, 6, 9, 0x00003EB1 ),             /* '^' */
  EW_GLYPH( 0x005F, 0, 3, 10, 1, 9, 0x00003F59 ),               /* '_' */
  EW_GLYPH( 0x0060, 2, -13, 4, 3, 9, 0x00003F8B ),              /* '`' */
  EW_GLYPH( 0x0061, 0, -10, 9, 10, 9, 0x00003FC1 ),             /* 'a' */
  EW_GLYPH( 0x0062, 0, -13, 9, 13, 9, 0x000040DC ),             /* 'b' */
  EW_GLYPH( 0x0063, 0, -10, 9, 10, 9, 0x000041DB ),             /* 'c' */
  EW_GLYPH( 0x0064, 0, -13, 9, 13, 9, 0x000042AD ),             /* 'd' */
  EW_GLYPH( 0x0065, 0, -10, 9, 10, 9, 0x0000438D ),             /* 'e' */
  EW_GLYPH( 0x0066, 0, -13, 9, 13, 9, 0x000044C7 ),             /* 'f' */
  EW_GLYPH( 0x0067, 0, -10, 9, 14, 9, 0x000045AD ),             /* 'g' */
  EW_GLYPH( 0x0068, 0, -13, 9, 13, 9, 0x000046F2 ),             /* 'h' */
  EW_GLYPH( 0x0069, 0, -13, 9, 13, 9, 0x000047B5 ),             /* 'i' */
  EW_GLYPH( 0x006A, 1, -13, 7, 17, 9, 0x0000489A ),             /* 'j' */
  EW_GLYPH( 0x006B, 0, -13, 9, 13, 9, 0x00004990 ),             /* 'k' */
  EW_GLYPH( 0x006C, 0, -13, 9, 13, 9, 0x00004AB6 ),             /* 'l' */
  EW_GLYPH( 0x006D, 0, -10, 9, 10, 9, 0x00004B73 ),             /* 'm' */
  EW_GLYPH( 0x006E, 0, -10, 9, 10, 9, 0x00004C19 ),             /* 'n' */
  EW_GLYPH( 0x006F, 0, -10, 9, 10, 9, 0x00004CBB ),             /* 'o' */
  EW_GLYPH( 0x0070, 0, -10, 9, 14, 9, 0x00004DBD ),             /* 'p' */
  EW_GLYPH( 0x0071, 0, -10, 9, 14, 9, 0x00004EC9 ),             /* 'q' */
  EW_GLYPH( 0x0072, 0, -10, 9, 10, 9, 0x00004FCB ),             /* 'r' */
  EW_GLYPH( 0x0073, 0, -10, 9, 10, 9, 0x00005074 ),             /* 's' */
  EW_GLYPH( 0x0074, 0, -13, 9, 13, 9, 0x000051BC ),             /* 't' */
  EW_GLYPH( 0x0075, 0, -10, 9, 10, 9, 0x00005299 ),             /* 'u' */
  EW_GLYPH( 0x0076, 0, -10, 9, 10, 9, 0x00005338 ),             /* 'v' */
  EW_GLYPH( 0x0077, 0, -10, 9, 10, 9, 0x0000543E ),             /* 'w' */
  EW_GLYPH( 0x0078, 0, -10, 9, 10, 9, 0x00005578 ),             /* 'x' */
  EW_GLYPH( 0x0079, 0, -10, 9, 14, 9, 0x000056A4 ),             /* 'y' */
  EW_GLYPH( 0x007A, 0, -10, 9, 10, 9, 0x00005821 ),             /* 'z' */
  EW_GLYPH( 0x007B, 1, -14, 7, 18, 9, 0x0000594A ),             /* '{' */
  EW_GLYPH( 0x007C, 3, -14, 3, 18, 9, 0x00005A55 ),             /* '|' */
  EW_GLYPH( 0x007D, 1, -14, 7, 18, 9, 0x00005A97 ),             /* '}' */
  EW_GLYPH( 0x007E, 1, -7, 7, 3, 9, 0x00005BB0 ),               /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 9, 0x00005C19 ),
  EW_GLYPH( 0x00A1, 3, -9, 3, 13, 9, 0x00005C19 ),
  EW_GLYPH( 0x00A2, 1, -13, 7, 13, 9, 0x00005C73 ),
  EW_GLYPH( 0x00A3, 0, -13, 9, 13, 9, 0x00005D6D ),
  EW_GLYPH( 0x00A5, 0, -13, 9, 13, 9, 0x00005E7B ),
  EW_GLYPH( 0x00A6, 3, -14, 3, 18, 9, 0x00006009 ),
  EW_GLYPH( 0x00A7, 0, -13, 9, 15, 9, 0x00006066 ),
  EW_GLYPH( 0x00A8, 1, -13, 7, 1, 9, 0x00006252 ),
  EW_GLYPH( 0x00A9, 0, -13, 9, 13, 9, 0x00006274 ),
  EW_GLYPH( 0x00AA, 1, -13, 7, 8, 9, 0x00006418 ),
  EW_GLYPH( 0x00AB, 1, -9, 7, 7, 9, 0x000064D9 ),
  EW_GLYPH( 0x00AC, 1, -7, 7, 4, 9, 0x000065A6 ),
  EW_GLYPH( 0x00AD, 0, -6, 9, 2, 9, 0x0000661B ),
  EW_GLYPH( 0x00AE, 0, -13, 9, 10, 9, 0x00006681 ),
  EW_GLYPH( 0x00AF, 1, -13, 7, 1, 9, 0x000067FA ),
  EW_GLYPH( 0x00B0, 1, -13, 7, 8, 9, 0x00006821 ),
  EW_GLYPH( 0x00B1, 1, -10, 7, 10, 9, 0x000068CB ),
  EW_GLYPH( 0x00B2, 2, -13, 5, 8, 9, 0x00006987 ),
  EW_GLYPH( 0x00B3, 2, -13, 5, 8, 9, 0x00006A2F ),
  EW_GLYPH( 0x00B4, 3, -13, 4, 3, 9, 0x00006AD4 ),
  EW_GLYPH( 0x00B6, 0, -13, 9, 17, 9, 0x00006B09 ),
  EW_GLYPH( 0x00B7, 3, -7, 3, 2, 9, 0x00006C01 ),
  EW_GLYPH( 0x00B8, 3, 1, 3, 3, 9, 0x00006C1D ),
  EW_GLYPH( 0x00B9, 3, -13, 3, 7, 9, 0x00006C3E ),
  EW_GLYPH( 0x00BA, 1, -13, 7, 8, 9, 0x00006C7C ),
  EW_GLYPH( 0x00BB, 1, -9, 7, 7, 9, 0x00006D2F ),
  EW_GLYPH( 0x00BC, 0, -13, 9, 13, 9, 0x00006E06 ),
  EW_GLYPH( 0x00BD, 0, -13, 9, 13, 9, 0x00006F81 ),
  EW_GLYPH( 0x00BE, 0, -13, 9, 13, 9, 0x00007118 ),
  EW_GLYPH( 0x00BF, 0, -9, 9, 13, 9, 0x000072D5 ),
  EW_GLYPH( 0x00C0, 0, -14, 9, 16, 9, 0x000073F3 ),
  EW_GLYPH( 0x00C1, 0, -14, 9, 16, 9, 0x000075AD ),
  EW_GLYPH( 0x00C2, 0, -14, 9, 14, 9, 0x00007762 ),
  EW_GLYPH( 0x00C3, 0, -14, 9, 15, 9, 0x000078EF ),
  EW_GLYPH( 0x00C4, 0, -14, 9, 14, 9, 0x00007A9E ),
  EW_GLYPH( 0x00C5, 0, -14, 9, 14, 9, 0x00007C3B ),
  EW_GLYPH( 0x00C6, 0, -13, 9, 13, 9, 0x00007DB7 ),
  EW_GLYPH( 0x00C7, 0, -13, 9, 17, 9, 0x00007F04 ),
  EW_GLYPH( 0x00C8, 0, -14, 9, 16, 9, 0x00008057 ),
  EW_GLYPH( 0x00C9, 0, -14, 9, 16, 9, 0x000081B6 ),
  EW_GLYPH( 0x00CA, 0, -14, 9, 14, 9, 0x00008310 ),
  EW_GLYPH( 0x00CB, 0, -14, 9, 14, 9, 0x0000843E ),
  EW_GLYPH( 0x00CC, 0, -14, 9, 16, 9, 0x00008569 ),
  EW_GLYPH( 0x00CD, 0, -14, 9, 16, 9, 0x00008693 ),
  EW_GLYPH( 0x00CE, 0, -14, 9, 14, 9, 0x000087B8 ),
  EW_GLYPH( 0x00CF, 0, -14, 9, 14, 9, 0x000088B1 ),
  EW_GLYPH( 0x00D0, 0, -13, 9, 13, 9, 0x000089A7 ),
  EW_GLYPH( 0x00D1, 0, -14, 9, 15, 9, 0x00008AC1 ),
  EW_GLYPH( 0x00D2, 0, -14, 9, 16, 9, 0x00008C04 ),
  EW_GLYPH( 0x00D3, 0, -14, 9, 16, 9, 0x00008D74 ),
  EW_GLYPH( 0x00D4, 0, -14, 9, 14, 9, 0x00008EDF ),
  EW_GLYPH( 0x00D5, 0, -14, 9, 15, 9, 0x0000901E ),
  EW_GLYPH( 0x00D6, 0, -14, 9, 14, 9, 0x00009182 ),
  EW_GLYPH( 0x00D7, 1, -10, 7, 6, 9, 0x000092C4 ),
  EW_GLYPH( 0x00D8, 0, -13, 9, 14, 9, 0x00009359 ),
  EW_GLYPH( 0x00D9, 0, -14, 9, 16, 9, 0x000094F0 ),
  EW_GLYPH( 0x00DA, 0, -14, 9, 16, 9, 0x00009613 ),
  EW_GLYPH( 0x00DB, 0, -14, 9, 14, 9, 0x00009731 ),
  EW_GLYPH( 0x00DC, 0, -14, 9, 14, 9, 0x00009827 ),
  EW_GLYPH( 0x00DD, 0, -14, 9, 16, 9, 0x00009927 ),
  EW_GLYPH( 0x00DE, 0, -13, 9, 13, 9, 0x00009A98 ),
  EW_GLYPH( 0x00DF, 0, -13, 9, 13, 9, 0x00009BB9 ),
  EW_GLYPH( 0x00E0, 0, -14, 9, 14, 9, 0x00009D0C ),
  EW_GLYPH( 0x00E1, 0, -14, 9, 14, 9, 0x00009E83 ),
  EW_GLYPH( 0x00E2, 0, -13, 9, 13, 9, 0x00009FF9 ),
  EW_GLYPH( 0x00E3, 0, -13, 9, 13, 9, 0x0000A17A ),
  EW_GLYPH( 0x00E4, 0, -13, 9, 13, 9, 0x0000A2E8 ),
  EW_GLYPH( 0x00E5, 0, -14, 9, 14, 9, 0x0000A454 ),
  EW_GLYPH( 0x00E6, 0, -10, 9, 10, 9, 0x0000A5D1 ),
  EW_GLYPH( 0x00E7, 0, -10, 9, 14, 9, 0x0000A718 ),
  EW_GLYPH( 0x00E8, 0, -14, 9, 14, 9, 0x0000A847 ),
  EW_GLYPH( 0x00E9, 0, -14, 9, 14, 9, 0x0000A9DD ),
  EW_GLYPH( 0x00EA, 0, -13, 9, 13, 9, 0x0000AB72 ),
  EW_GLYPH( 0x00EB, 0, -13, 9, 13, 9, 0x0000AD12 ),
  EW_GLYPH( 0x00EC, 0, -14, 9, 14, 9, 0x0000AE9D ),
  EW_GLYPH( 0x00ED, 0, -14, 9, 14, 9, 0x0000AF9D ),
  EW_GLYPH( 0x00EE, 0, -13, 9, 13, 9, 0x0000B09C ),
  EW_GLYPH( 0x00EF, 0, -13, 9, 13, 9, 0x0000B1A6 ),
  EW_GLYPH( 0x00F0, 0, -13, 9, 13, 9, 0x0000B29B ),
  EW_GLYPH( 0x00F1, 0, -13, 9, 13, 9, 0x0000B3CC ),
  EW_GLYPH( 0x00F2, 0, -14, 9, 14, 9, 0x0000B4C1 ),
  EW_GLYPH( 0x00F3, 0, -14, 9, 14, 9, 0x0000B61F ),
  EW_GLYPH( 0x00F4, 0, -13, 9, 13, 9, 0x0000B77C ),
  EW_GLYPH( 0x00F5, 0, -13, 9, 13, 9, 0x0000B8E4 ),
  EW_GLYPH( 0x00F6, 0, -13, 9, 13, 9, 0x0000BA39 ),
  EW_GLYPH( 0x00F7, 1, -10, 7, 7, 9, 0x0000BB8C ),
  EW_GLYPH( 0x00F8, 0, -12, 9, 13, 9, 0x0000BC41 ),
  EW_GLYPH( 0x00F9, 0, -14, 9, 14, 9, 0x0000BDC0 ),
  EW_GLYPH( 0x00FA, 0, -14, 9, 14, 9, 0x0000BEBB ),
  EW_GLYPH( 0x00FB, 0, -13, 9, 13, 9, 0x0000BFB5 ),
  EW_GLYPH( 0x00FC, 0, -13, 9, 13, 9, 0x0000C0BA ),
  EW_GLYPH( 0x00FD, 0, -14, 9, 18, 9, 0x0000C1AA ),
  EW_GLYPH( 0x00FE, 0, -13, 9, 17, 9, 0x0000C382 ),
  EW_GLYPH( 0x00FF, 0, -13, 9, 17, 9, 0x0000C4AC ),

  EW_FONT_PIXEL( ApplicationNumbersM, 0x0000C67A )              /* ratio 66.08 % */
    0x8C6318C6, 0xF7BDED61, 0x803DFBDE, 0xF7DF7EF4, 0x7BDEC9BD, 0xCE67879B, 0x6048E5F9,
    0xA0B84039, 0xEFB9062A, 0xF2FC3E2F, 0x79E14F7F, 0xC00DF813, 0x0039C02A, 0x0D80E700,
    0xE739CF18, 0xDD7A739C, 0x60000017, 0x7FFD17DD, 0xBF5D7323, 0x5DE00017, 0x000005C6,
    0xFFDEB7E0, 0xE6AF8FF1, 0xDC623B6E, 0xC0000298, 0xE3FFBD6F, 0xDDCD5F1F, 0x31B8C476,
    0x03F80005, 0x3FFFDF00, 0xCC7FFFFE, 0xEF63D9E7, 0x442FD71D, 0xE601EB84, 0xFFF8FFE8,
    0x3DDF617F, 0x1126AFF6, 0x8000DA62, 0xFFFFC721, 0x7C7FFF1F, 0xF63DEF63, 0xDDCEA33D,
    0x1DE7B09C, 0x2E213CF1, 0xB5181FEE, 0xFF065408, 0x87F79FF7, 0x3D7FEEE7, 0xE77C3110,
    0xECF3D44C, 0x5FBF1FDF, 0xC01CC80E, 0xD818E4B3, 0x7FBFFADB, 0x3EF7BFF5, 0xF7BEC778,
    0xC00D6461, 0x2300E01F, 0xEF2F802B, 0x77FFFFFF, 0xCFDFF9BC, 0xCF13EFDC, 0x5C222B88,
    0x62A05C20, 0xDFF9F026, 0x1DC6FBAE, 0xDEEFD400, 0x6F7BEDFA, 0x0004E62E, 0x00000000,
    0x7E162000, 0xFEF58663, 0x3DDFFDEF, 0x2EF7EFFD, 0x00C8BD66, 0x00000000, 0x50400000,
    0xBF6FFD6B, 0x6F83C62F, 0xD7443F7D, 0xC8EC73D3, 0xDF1ABB5A, 0xF595ECF7, 0xFACF1CCB,
    0x98BFD93A, 0xFBC00370, 0x7FFFDBFF, 0x1DECEDEF, 0xF0023211, 0xF0E48FDE, 0xFFFFE310,
    0x7FFFFFFF, 0xDEF7BD8D, 0x77FCD77B, 0x00CE0064, 0xB78033D6, 0x100CF581, 0x33EF036F,
    0xDE06CC40, 0x0D988067, 0x3100CFBC, 0x019F781B, 0x9E603662, 0xA259EF7B, 0xBA3B7B9F,
    0xED3B2E2A, 0x027D44B4, 0xBFC03C56, 0xC0BAC806, 0x2BF00F13, 0xE90B8E60, 0x8A8863C4,
    0x8E8EDA2A, 0x32EADEE7, 0x183FBDEE, 0x000003F7, 0x00000000, 0x00000000, 0x7EF73C00,
    0xDC65DEEA, 0x8C59EF7B, 0x1EC9EF7B, 0x3C053E20, 0xE008F00E, 0xFFEE67EF, 0xD11CD4FF,
    0xAF3DF771, 0x8223278A, 0x00000174, 0xBDEF7BE8, 0xDEF7B8EF, 0xDEE31E7B, 0x017EFF7B,
    0x17014672, 0x145402E0, 0x6633FF7E, 0x9CFFDBE0, 0xC5F18881, 0x29005202, 0xB9EA7C40,
    0xDE33DEF7, 0x01F7BE84, 0xFC730073, 0xD407DF80, 0x00ADC098, 0x1BF02F59, 0x80FAC403,
    0xF7110265, 0xEBBDF6DE, 0xF7DB7BDE, 0xDEF75802, 0xEF8BEF7B, 0x005F7BDE, 0xFFA00000,
    0xD65EFFFF, 0xD5DF7BD9, 0x5E444443, 0x0009603F, 0xF880E3C0, 0x7BDEEB3C, 0x3BE9BE4F,
    0xEA1BDEF7, 0x0DEF73C9, 0x02E00543, 0xFFFF7800, 0xCC17FFFF, 0xC9AAF7BD, 0x00EB888D,
    0x60C5C000, 0xD4EFE0A8, 0xAADEE793, 0xEF7BDEF9, 0x7BDFB7BD, 0x07D3BDEF, 0xE3304AAC,
    0x603C5F00, 0x3E7C098C, 0xCC12AB10, 0x0F17C038, 0xF1C09CA8, 0xC0355103, 0xCF7BDFF8,
    0xFF7D8EE4, 0x90CF19A3, 0xB8908C4F, 0x3D45C484, 0xFD70E549, 0xE27C67FF, 0xD1EF7B1B,
    0x446789E3, 0x0C5C2A7E, 0x2CE18B87, 0x91BF884F, 0x3CF738EF, 0xDEE77CAB, 0x4F517F7B,
    0x66AB7B9E, 0x277F05FA, 0x800000C0, 0xD46781B4, 0xEC6FFFFF, 0x41FEF7B3, 0x1800C444,
    0xFFC77F00, 0xE6AB7BDE, 0xD9917F7B, 0xFFE817FF, 0xFDEF991B, 0x5FFF6645, 0xC91FBDE0,
    0xE00021E1, 0x41CBF01D, 0xFB91FCEC, 0x058DE2F7, 0xE205FADF, 0xAF80FF17, 0x12FF4076,
    0xFFFF31CC, 0xCEFFFFFF, 0x2DDEF7BD, 0xFE622222, 0xFFFFFFFF, 0xBDEF7B9D, 0x80BF101B,
    0xFBC07FC8, 0xF7AB09DB, 0xF0FEA780, 0xEE5F8DAE, 0x882FC764, 0x8C1A20FA, 0xE7BDEF7B,
    0xF7BDEE31, 0x672017EF, 0x70257014, 0x0A278825, 0x06F9BFFD, 0x59EF7CCF, 0x1808AAC8,
    0xF013501B, 0x26600FFB, 0xEF7BDEF0, 0xEF79C9FD, 0x008E77BD, 0x7FED44E6, 0x7813DB80,
    0x4C80001E, 0xECFFEFC0, 0xFBBDD607, 0x6111103E, 0xFFFFFF8C, 0xDECBFFFF, 0x0BBDEF7B,
    0x64417BFF, 0x0A38F019, 0xEC3F8A86, 0xF3C16788, 0xA4641918, 0xD2B961E3, 0x063D2FE6,
    0x1EDFFBC3, 0x577BDC9E, 0x111988E4, 0x1C0C7AC3, 0xBDEF75FF, 0xBDF44CF7, 0xF201D1FF,
    0x05FC0589, 0x29F80290, 0x8CFFFFDE, 0xEF7B9927, 0x446E0CF1, 0x14C07EBE, 0xB1C014C0,
    0xD3EF7BE9, 0xF7BDF725, 0x7BC7A1DE, 0xE543BDEF, 0x00001104, 0x00000000, 0xE0022000,
    0xE3BC09C9, 0xF1DEF7BD, 0x3DEF7BDC, 0x93DEF30B, 0x0A7C403D, 0x00000E18, 0x00000000,
    0xC4070C00, 0x9EF798A7, 0xBDEE31EC, 0x90FBDEF7, 0x1F7BDEF7, 0x00000000, 0xFFFFFC60,
    0xF7BD8C1F, 0x00222207, 0x79000000, 0x79F7BDEF, 0xDEF7BDEE, 0xEF7BA8BB, 0x00000BBD,
    0xFE780000, 0x9E1FFFFF, 0x1106F7BD, 0x00000011, 0xDFFA8000, 0xDE1DEF7B, 0x77BDEFB1,
    0x9601AC8C, 0x00000401, 0x7FFFFF98, 0x0CBFDCC2, 0x58008310, 0x06B23006, 0xF7BEC670,
    0xE785DD63, 0x000000FE, 0xEF000000, 0x986FFFFF, 0xDC1FEF7B, 0x00001888, 0xB8C00000,
    0xEF7BDEF7, 0xF36DEE33, 0x000007DE, 0x00000000, 0x00000000, 0x9B6F7180, 0xDFF83EF7,
    0xFF83EF7B, 0x00000DBD, 0x00000000, 0x70000000, 0x3515C804, 0xEFF7BDEE, 0xFB17DCF3,
    0x1AC6B00E, 0x38366F90, 0x6B1AC071, 0x8366F3C0, 0xCE56028C, 0x502EBC01, 0x46F02635,
    0x0D19C807, 0xEE7ACE74, 0x0000000B, 0x00000000, 0x00000000, 0xEF798000, 0xFBAD77BD,
    0x24BEEFC7, 0x21221826, 0xF4C80CA6, 0x677F3C24, 0x0FF299C2, 0x3301AD23, 0x7C8C2732,
    0x007B5824, 0x1FE04CF9, 0x87FBAC7F, 0xC00F92FB, 0x50254401, 0x00F5E03E, 0xC70164F9,
    0x013C6A01, 0xE330267C, 0x7C04CC03, 0xF7BDCF30, 0xEE71E8B4, 0xF8AD567D, 0xC4876B82,
    0x00010092, 0x00000000, 0x964B1211, 0xBE76B82F, 0xACFBDCE3, 0xF7BDEE7A, 0xEF79899E,
    0xBE201D19, 0x003A4058, 0xFC0BA401, 0x3FFFEB14, 0xFBDA93A3, 0x1111859E, 0x00000001,
    0x3DEF73CC, 0x7B9C7A2D, 0xBE2B559F, 0x3121D8E0, 0x00004025, 0x40000000, 0x1592C484,
    0xECED705F, 0x567DEE71, 0x793EE799, 0xB0F9BC1A, 0x9EF7BDEE, 0x19EF7989, 0x3CF8826F,
    0x3A403A40, 0xD61E2FC0, 0x4CC67FFF, 0xCC7FEF6A, 0x198C4460, 0x0C091C05, 0xCF300000,
    0x45FEF7BD, 0xFEF7B9E7, 0x0002FC55, 0x03F15000, 0xFFFCF3A2, 0xBB9E61FB, 0x2206FACF,
    0x0803F1C6, 0xFE203860, 0x7BDEF71E, 0xEF719BE6, 0x27DEF7BD, 0x7BCCFDEE, 0x0000001F,
    0x00000000, 0x00000000, 0x60FBAC00, 0x000017DC, 0x00000000, 0x40000000, 0xF1514C4A,
    0x1E8EC705, 0x6BA7DEE7, 0xFDBCC6DE, 0x11FF1C48, 0x64F2C30B, 0x290D2330, 0x91EFE1F2,
    0xD8F1CB06, 0x83C70C64, 0xD8191A67, 0xA182CF19, 0xAB8F0FE2, 0xF831F220, 0x35FF80DF,
    0x41210C81, 0x6B96104A, 0xC94863BA, 0xE531C330, 0xD24A4B94, 0xFE70843F, 0x9A498735,
    0x330611FF, 0x047F8AC7, 0x953C44F1, 0x2C6478C8, 0xFBAC1CE2, 0x5F878AC4, 0x318E7E3E,
    0xBE2AB23E, 0x55DEB898, 0x2F15CA81, 0x8F00E478, 0x7B64F01C, 0x15558DE1, 0x31FE98D4,
    0x7C567EB9, 0x2A218D46, 0x3C3F799F, 0x8E1457B7, 0xCF14545F, 0x27BF8E18, 0x8DCB2A3E,
    0x16AB2789, 0x20F8DE7C, 0x3F00E647, 0x0000001F, 0xF7B9E000, 0x7AEF7BDE, 0x3EF7BDEE,
    0x06A78C0A, 0x3D460D68, 0x6A0D5C03, 0x835A093C, 0x1D04CC67, 0x2573303F, 0x3C0FC5F8,
    0xEF7BFF19, 0xEF7BFF5D, 0x005EF755, 0x00000000, 0x00000000, 0x9C6F7BA8, 0xE0366204,
    0x366204AD, 0x6204ADE0, 0x01ADE036, 0xFBC06CC4, 0x0366200C, 0x310067DE, 0xE33EF01B,
    0xFFBDEF7F, 0x0000277B, 0x00000000, 0xFC000000, 0x01209DEF, 0xCE202EC6, 0xCF7C12FA,
    0x46F037DB, 0x7AC7CF9B, 0xEEBC743E, 0x7BDEF7BD, 0xE7BC48EF, 0x3FEFDF37, 0xBDEF7B8C,
    0xEF7B8D3B, 0xB603E39D, 0xFFF7C001, 0xF3CDFFFF, 0x8FF7BBCC, 0x00623274, 0x79E01D20,
    0xB1FBDEEA, 0x00000BEE, 0x9EF7BCC0, 0xFBDEF30F, 0xF7F00F3C, 0x00008607, 0x04300000,
    0xDE67F7F0, 0xB1E79F7B, 0xDEF7BDCE, 0xDEFFDA27, 0x24F49F7B, 0x00000000, 0x19E90000,
    0xF7BEDA20, 0xF75807DE, 0x3AC00005, 0x7B26DEF7, 0xA59B7B9C, 0x00000002, 0x58030000,
    0xFB6C806A, 0xEE7BC6DE, 0xCC67F7BD, 0x6B7DEE71, 0x6E582A3E, 0x87280080, 0x7FFFFFF5,
    0xF7BDA939, 0x111847F9, 0x4027A411, 0xDEF73CCD, 0xF7BEE41F, 0xEFA3BC2E, 0x3C1E985D,
    0x7DFFA6F7, 0xEE72F73C, 0x00000003, 0x00000000, 0x7B9F4000, 0x58EFBDEF, 0xC7EF7FE3,
    0x00120954, 0x09000000, 0xC6013D30, 0x87EF73CC, 0x3F7BDCF7, 0xFE402180, 0xFEF77E1D,
    0xFBAE679F, 0x30000002, 0x17F7BDEF, 0x53EF7BCC, 0x000EB813, 0x00000000, 0xEF000000,
    0x099101FD, 0x73C5FFF4, 0x9E2FBDEF, 0x00001B7B, 0x00000000, 0x7B9E0000, 0xC177BCDB,
    0x1990BEEF, 0xDC7BFEF0, 0xE35DEF7B, 0x00013BDE, 0x00000000, 0x81000000, 0xF7B8E478,
    0xBEEB53E4, 0x20000000, 0x3B880ECF, 0x71FF01FE, 0x4FF97E03, 0xF00EF558, 0xDF209BE4,
    0xF1AD4038, 0x02CF5D01, 0x73C778DE, 0xCF0BBDEF, 0x00000DBD, 0x00000000, 0x00000000,
    0x6DEE7800, 0xF75AEF7D, 0x4EEF7BDE, 0xE39DE77A, 0xB006FE03, 0x00000000, 0xD6000000,
    0xFBDEF7BD, 0xFBDEFA0B, 0x03AE04D4, 0x00000000, 0xF0000000, 0xBBDEF7BB, 0x7BDD5673,
    0x7F5DF8D7, 0x2C0324FC, 0x10000080, 0x7FAEB00C, 0xEAB393F0, 0x6FC6BBDC, 0xBDEF7BDD,
    0x3DEFA0BF, 0xED8826B3, 0x0000100F, 0x6C000000, 0xCEF7BE83, 0xEF7BE97A, 0x000005FD,
    0xF7B9F400, 0x358EFBDE, 0x5336F7FE, 0x00000025, 0x53000000, 0x9C731805, 0xB9EF1B7B,
    0x000036F7, 0xB9DF1000, 0x7BE1DEF7, 0x1DEF7BBE, 0x00005951, 0x00000000, 0x3BE00000,
    0x637BDEF7, 0xF7BDEF3E, 0xE01EB8DE, 0xBF1CC05A, 0xFFFFFFFF, 0xFDEF77D8, 0x88888B3E,
    0x80180DCA, 0xBDEE318A, 0x8BC6FEF7, 0x00000DFF, 0xCE9BDCF0, 0x37B9EBBD, 0x00177B9D,
    0x00000000, 0x1E980300, 0xD65F64E0, 0x0BEE785D, 0x00000000, 0x40040000, 0x27A805FA,
    0x7D1FBDCF, 0x3F7EEA17, 0x447B6C7F, 0xC18A94A1, 0xA52AE918, 0x26DB7F28, 0xFC28A946,
    0xB94146A2, 0xC5288C36, 0x27B80EEF, 0xD23CA42D, 0xC4433C23, 0x9D33A637, 0xF94CA4F4,
    0xB1A6B9E4, 0x661A654E, 0x64919EE4, 0x727395AE, 0xE30E6664, 0x8E77987E, 0x9AE894F5,
    0x45EBDB3A, 0x89BE778F, 0x402E66A7, 0x3656A780, 0x733F47A2, 0x36B579D0, 0xACE433E6,
    0x7E17DEF9, 0xEA214FBF, 0x2B07323F, 0x7FF14F96, 0xEA27E3C2, 0x8AE46390, 0xBFE79F07,
    0xF9EFC560, 0x14633C43, 0x3E980A38, 0x6201CBE0, 0x078AC07D, 0xEF7BDEE2, 0x7BDC4FBD,
    0x01F23FEF, 0xA9E0BC6F, 0xF17E20A7, 0x80E8BF03, 0x37826A7A, 0x1339D05E, 0xDEF75962,
    0x677C60FB, 0xF1677F91, 0x00A41F8B, 0x06B00000, 0xE67038AC, 0x607D7780, 0x00000015,
    0xEA131C01, 0xEE2B3FF7, 0x00000003, 0xE7800000, 0x339E06FC, 0x82ED05FE, 0x10000131,
    0xE74033C0, 0xD033310B, 0x00D40BF5, 0x02000001, 0xE73C7C6A, 0xFF6326FE, 0xCDF7CF3F,
    0xBFB77CEB, 0xFA79EEFC, 0x7BE646FF, 0x05F7587F, 0xF3C00000, 0xBBFEF000, 0xFBF315FF,
    0x1AA576FD, 0x00000023, 0xE3909840, 0xECBFF5FB, 0xC45DBFD3, 0xBDEF0118, 0x3E7306F7,
    0x7B60DEF7, 0x00812981, 0xB0FF8C00, 0x87B193FF, 0x0C8227B3, 0x00000000, 0x99F7BDCE,
    0xBDBAC5F7, 0xC5FB6162, 0x18D44313, 0x3C7E528E, 0xAC4DB3F1, 0x7F02AB11, 0x572A071D,
    0x4162A03C, 0x8AFD4AFE, 0x5FBE7DFC, 0xF7AFFE31, 0xCD3D8C5F, 0x007DC65D, 0x003EE300,
    0x001F7180, 0xBDEE7980, 0xBDC7A5F7, 0x0A22BEF7, 0xEF007888, 0xFFFFFFF8, 0xDEEF2FC9,
    0x1958C5B3, 0xC0C18FF1, 0xA5B0B220, 0xFFFFFC77, 0x7B3A84F5, 0x11127AEF, 0xF1B00571,
    0xFFFFFFFE, 0xDEF7A1AC, 0xFBACFCFB, 0xFC6BEE7A, 0xE2BF3DCE, 0xFFBDEFBF, 0x2159EA2F,
    0xEDB15CE6, 0xCC9F637B, 0x158DCF27, 0x00024118, 0xCB229000, 0xDC8AC7F9, 0xF63BBFF1,
    0x984567A9, 0x7BEFF973, 0x9E17FFEF, 0xB9E6EF7B, 0x53051BF7, 0xE4DDEF78, 0x2021BBEC,
    0xBF07FFAB, 0xC879F7BB, 0xF2EE34C1, 0xF5BCEBFD, 0x353FFBF3, 0xBE3BCFE6, 0x3CFCBBD1,
    0xA57CDBCF, 0xFFFFFBCE, 0xEF7FFFFF, 0x88C9F7BD, 0x1CC04888, 0xFFFFFFFF, 0xEC6BFFFF,
    0xBBDEF7BD, 0x0FFF7DA8, 0x673DEFAA, 0x6FFCFB71, 0xAD6318EF, 0x5FCA755D, 0x94CCF9ED,
    0x399AAF6A, 0x89C46B7E, 0x33FBDE53, 0xE73C23FF, 0xF1BFEFFE, 0xFC59F7FC, 0xFEF7BDEE,
    0x3BBDEEFD, 0xA37B9D46, 0x40002408, 0xFFB8C720, 0xDEEFB2BF, 0x000DC0FF, 0xB7FFF780,
    0xDBDEFFFF, 0x64223BD9, 0x00006E04, 0xF7BDEEFC, 0x89EF71DE, 0x60B3EF71, 0x8C79F718,
    0x31883CFB, 0xB1AAFFFE, 0x7BBF4DF7, 0x0B3EEFC2, 0xF53EFFC4, 0x0B193DC4, 0x3E7FFF9E,
    0xF189EF77, 0xFF8ECEFC, 0xF7B9D5B7, 0x837AFBDE, 0x980919B3, 0xC0260000, 0x0D6F8028,
    0x0007FA20, 0x00000000, 0x00000000, 0xE323BFE6, 0xE44B0FB9, 0x001FC6FF, 0xED9F7B7F,
    0x31DDEF77, 0x8A37EFAA, 0xC0002534, 0xFD18E4B0, 0xBBECA2FF, 0x0C6289EF, 0x4BFC4FF6,
    0xEFFE3D8F, 0xEFC6ABD4, 0xFE9E3DCB, 0x31EBEFCE, 0xFE53D9FE, 0xDE0BBAC2, 0x26B20AB9,
    0xD63036F0, 0x9E06DC03, 0x8EF3F455, 0x4F39F46E, 0xBF03BA8D, 0x4F589B9F, 0xF7C49C8E,
    0x2FE87F7A, 0x4779F7CC, 0x79EFF62D, 0x9BE07DD7, 0x09CC60AB, 0x7AD40BF4, 0xB3C0BE80,
    0xA3D3EF06, 0x55DDF45F, 0x115FFFF3, 0xFF6AFDF1, 0xEB93F47E, 0x79F27EFB, 0x7E5EEF7D,
    0xA8C1C85F, 0xEBFF7385, 0x67BF17DE, 0xD6A2FFDD, 0xFDE5F403, 0xBC1CCF4F, 0x183747FF,
    0xDFF992AB, 0xFF30FDF5, 0x379C9F27, 0x0DF5E7C8, 0x7E78BEFC, 0x2CE5AC8B, 0xEFD62DBC,
    0xC47AC779, 0xFC178DFE, 0xC04C80FF, 0x007A80BD, 0x625F0179, 0xE2F1FFEC, 0x20EEF78E,
    0x48405547, 0x3E460480, 0xDF633803, 0x57A2EF7B, 0xFDFBB805, 0x7FFDFAC0, 0x105EFFC0,
    0x8E3C0659, 0x0FE2A182, 0xF059E23B, 0x1906463C, 0xAE5878E9, 0x8F4BF9B4, 0xB7FEF0C1,
    0xDEF72787, 0x46623915, 0x031EB0C4, 0xFAC61FC7, 0x01FFFBC0, 0xF81FD9EF, 0xCB220BDF,
    0x3051C780, 0x4761FC54, 0xC79E0B3C, 0x1D2320C8, 0x3695CB0F, 0x1831E97F, 0xF0F6FFDE,
    0x22BBDEE4, 0x1888CC47, 0xF8E063D6, 0x81EB5D53, 0x40FD7E7A, 0x38F01964, 0x3F8A860A,
    0xC16788EC, 0x641918F3, 0xB961E3A4, 0x3D2FE6D2, 0xDFFBC306, 0x7BDC9E1E, 0x1988E457,
    0x0C7AC311, 0x9E117F1C, 0xCE7882BD, 0xE3502BD8, 0x0CB220BD, 0x43051C78, 0xC4761FC5,
    0x8C79E0B3, 0xF1D2320C, 0xF3695CB0, 0xE1831E97, 0x4F0F6FFD, 0x722BBDEE, 0x61888CC4,
    0xBF8E063D, 0x7DCF5F75, 0x77EEB759, 0x0196445F, 0xA860A38F, 0x788EC3F8, 0x918F3C16,
    0x1E3A4641, 0xFE6D2B96, 0xBC3063D2, 0xC9E1EDFF, 0x8E4577BD, 0xAC311198, 0x27F1C0C7,
    0x22033DCF, 0x651184C4, 0xF011C441, 0x11D828A8, 0x63C61FCF, 0x44E93C14, 0x454AE232,
    0xDFCB8F49, 0xCA8ADFFB, 0x646577BD, 0xAA1888CC, 0xE37F1C0C, 0xFDEF7BDE, 0xBDD54E9B,
    0x2700437F, 0x11013901, 0x79003980, 0x9FFEF480, 0x6FC2DFE7, 0x4D7ECF3F, 0x1290882B,
    0xF7BA8938, 0xF7BDF72F, 0x7BC7A1DE, 0xE543BDEF, 0x00001104, 0x00000000, 0xE0022000,
    0xE3BC09C9, 0x21DEF7BD, 0xDEF7BDF7, 0x003EE781, 0x7A09100B, 0xDFBB8055, 0xFFDFAC0F,
    0xBDEF7187, 0xBC87DEF7, 0x00FBDEF7, 0x00000000, 0xFFFFFFE3, 0x3FBDEC60, 0x00011110,
    0x7BC80000, 0x8C0FBDEF, 0xFFF781F5, 0x3FB3DE03, 0xDEF7BDC6, 0xDEF21F7B, 0x0003EF7B,
    0x8C000000, 0x83FFFFFF, 0x40FEF7B1, 0x00000444, 0xBDEF2000, 0xD7543EF7, 0xB7F7187A,
    0x87DDFD7E, 0xFBDEF7BC, 0x00000000, 0xFFFFE300, 0xBDEC60FF, 0x0111103F, 0xC8000000,
    0x8FBDEF7B, 0x7DCF5F75, 0x67EF368D, 0xF7BDE43E, 0x000007DE, 0xFF180000, 0x6307FFFF,
    0x8881FDEF, 0x00000008, 0xEF7BDE40, 0x0155E87D, 0xB03F7EEE, 0xC61FFF7E, 0x7BDEF7BD,
    0x9B6F719F, 0x00003EF7, 0x00000000, 0x00000000, 0xDB7B8C00, 0xB181F7BC, 0x7FFEF03E,
    0xC7F67BC0, 0x7BDEF7B8, 0x6DEE33EF, 0x0007DEF3, 0x00000000, 0x00000000, 0x6F718000,
    0x543EF79B, 0xF7187AD7, 0xDDFD7EB7, 0xE6DBDC67, 0x00000FBD, 0x00000000, 0x00000000,
    0x36DEE300, 0xFBAC7DEF, 0xB46BEE7A, 0x19F33F79, 0xEF79B6F7, 0x00000003, 0x00000000,
    0xC0000000, 0x7BCDB7B8, 0xBDEF719F, 0x7BC8BEF7, 0xF02733EF, 0x000A40DA, 0xFFC67E00,
    0x86EC6D85, 0x00000445, 0x4DAF0052, 0x399F7BDE, 0x0AF67845, 0xAF6339E2, 0x267BEEB0,
    0x801F25F7, 0xA04A8803, 0x01EBC07C, 0x8E02C9F2, 0x0278D403, 0xC6604CF8, 0xF8099807,
    0x700AAF40, 0xF581FBF7, 0x9E60FFFB, 0xD169EF7B, 0xACFBDCE3, 0xD705F15A, 0x0125890E,
    0x00000002, 0x24220000, 0x705F2C96, 0xB9C77CED, 0x630559F7, 0xFFFDE07D, 0x0FECF780,
    0x4F7BDCF3, 0xDEE71E8B, 0x2F8AD567, 0x2C4876B8, 0x00001009, 0x10000000, 0xF964B121,
    0x3BE76B82, 0x2ACFBDCE, 0x983D6BAA, 0xAFF5FADF, 0xEF738F45, 0x17C56AB3, 0x96243B5C,
    0x00000804, 0x88000000, 0x7CB25890, 0x1DF3B5C1, 0x9567DEE7, 0x415ECF08, 0x15EC673C,
    0x7BDE2FCC, 0xF738F45A, 0x7C56AB3E, 0x6243B5C1, 0x00008049, 0x80000000, 0xCB258908,
    0xDF3B5C17, 0x567DEE71, 0xDCF5F759, 0xBF798897, 0xDCE3D108, 0xF15AACFB, 0x890ED705,
    0x00020125, 0x00000000, 0x2C962422, 0x7CED705F, 0x59F7B9C7, 0x3FB26265, 0xF62F85FD,
    0x56318273, 0x978ECFD2, 0x3C97E3B8, 0xCF7BDEE7, 0xDFF8DF8A, 0x4F15915B, 0x65C3B8F2,
    0xFEF0110D, 0x780B9580, 0xE059581B, 0x66610DBE, 0x8A4D10C1, 0x6EBC988A, 0x99F7BFF0,
    0xDEE73F4F, 0xAAF45F7B, 0x1FBF7700, 0x0FFFBF58, 0xF7183EEB, 0x00000005, 0x00000000,
    0x12900000, 0xC17C5453, 0xB9C7A3B1, 0xB182E9F7, 0x7FFEF03E, 0xC7F67BC0, 0x7DC60FBA,
    0x00000001, 0x00000000, 0xC4A40000, 0x705F1514, 0xEE71E8EC, 0xAEA8BA7D, 0x746EB0F5,
    0x005F79AD, 0x00000000, 0x00000000, 0x45312900, 0x3B1C17C5, 0x9F7B9C7A, 0x9EBEEB2E,
    0xBDFD5AFB, 0x005F3D9E, 0x00000000, 0x00000000, 0x45312900, 0x3B1C17C5, 0x9F7B9C7A,
    0x03EB182E, 0xBC07FFEF, 0xFBCC7F67, 0xA2BDB9E1, 0xA2A2FC70, 0xFC70C678, 0x5951F13D,
    0x593C4C6E, 0xC6F3E0B5, 0x07323907, 0x0000F9F8, 0xCF000000, 0x0000017D, 0xB3DEF798,
    0xD93DEF30, 0x00F3E209, 0x038601C3, 0xFFEB15FC, 0xB507353F, 0x462F3DF7, 0x7C000444,
    0xDA7BDEE7, 0x93DCF27C, 0x217E39EB, 0x0000767E, 0xBFDF86DB, 0xFBBE079E, 0x5F22033C,
    0x4018603F, 0x70063C00, 0x7DEEB0FD, 0x4008C1DE, 0xB7C0BD9F, 0x9E3104DF, 0xF7BDC607,
    0xBDC69DDE, 0x01F1CEF7, 0xFBE000DB, 0xE6FFFFFF, 0xFBDDE679, 0x31193A47, 0xF00E9000,
    0xFDEF753C, 0xF6780600, 0xDFDE20DD, 0x8953D41F, 0x77BDEF71, 0xBDEF71A7, 0x36C07C73,
    0xFFFEF800, 0x9E79BFFF, 0x91FEF779, 0x000C464E, 0x4F3C03A4, 0x183F7BDD, 0xF829DFFF,
    0x3FDFBF7D, 0x26F3CBD1, 0xEF7BDEE3, 0x7BDEE34E, 0x6D80F8E7, 0xFFFDF000, 0x3CF37FFF,
    0x23FDEEF3, 0x00188C9D, 0x9E780748, 0x787EF7BA, 0x34F7BDCE, 0x9EF7B9CF, 0xF7B8C006,
    0xB8D3BBDE, 0x3E39DEF7, 0x7C001B60, 0xDFFFFFFF, 0x7BBCCF3C, 0x232748FF, 0x01D20006,
    0xBDEEA79E, 0x3D7DD61F, 0xD7DD65F7, 0x8C005F73, 0x3BBDEF7B, 0x9DEF7B8D, 0x01B603E3,
    0xFFFFF7C0, 0xCCF3CDFF, 0x748FF7BB, 0x20006232, 0xEA79E01D, 0xFD81FBDE, 0xF62309DF,
    0x300C405C, 0x8C4D7FC6, 0xA77B191B, 0x73BDEF71, 0x0036C07C, 0xFFFFFEF8, 0x799E79BF,
    0x4E91FEF7, 0xA4000C46, 0xDD4F3C03, 0xEEFC3F7B, 0x1E7B9FFD, 0xBACBFBBF, 0xFB63C5F3,
    0xFB181827, 0xC5F991BF, 0xBFDFFA3D, 0xFB7E995C, 0xAE42202C, 0xE71BE360, 0xD61DEE78,
    0xFBDEF7B9, 0x7BDFFB44, 0x049E93EF, 0x00000000, 0x033D2000, 0xDEF7DB44, 0xDEE758FB,
    0xE783EF7B, 0x100B003E, 0xFA004609, 0xFDBE05EC, 0x3CF18826, 0xEF7B9EF0, 0x9C7319FD,
    0x8F9ADF7B, 0x201B960A, 0xFD61CA00, 0x4E5FFFFF, 0xFE7DEF6A, 0x04444611, 0x335009E9,
    0x07F7BDCF, 0x77D9E018, 0x7F7F7883, 0xDE254F50, 0x3FBDEF73, 0xEF738E63, 0xC151F35B,
    0x40040372, 0xFFFFAC39, 0xED49CBFF, 0xC23FCFBD, 0x3D208888, 0xB9E66A01, 0xFE30FEF7,
    0xFBF053BF, 0xA27FBF7E, 0xDE4DE797, 0x3FBDEF73, 0xEF738E63, 0xC151F35B, 0x40040372,
    0xFFFFAC39, 0xED49CBFF, 0xC23FCFBD, 0x3D208888, 0xB9E66A01, 0xF758FEF7, 0x7597DCF5,
    0x017DCF5F, 0xEF7B9EF0, 0x9C7319FD, 0x8F9ADF7B, 0x201B960A, 0xFD61CA00, 0x4E5FFFFF,
    0xFE7DEF6A, 0x04444611, 0x335009E9, 0x87F7BDCF, 0x7B3E8011, 0x09BF6F81, 0x9E0F3C62,
    0xF17DEF7B, 0x0000DBDC, 0x00000000, 0xDCF00000, 0x0BBDE6DB, 0x77D9E018, 0x7F7F7883,
    0xCF254F50, 0x78BEF7BD, 0x00006DEE, 0x00000000, 0xEE780000, 0xC5DEF36D, 0xC14EFFF8,
    0xFEFDFBEF, 0x379E5E89, 0xFBDEF73D, 0x01B7B9E2, 0x00000000, 0xE0000000, 0x7BCDB7B9,
    0xCF5F7597, 0xF5F7597D, 0xE78017DC, 0x3C5F7BDE, 0x000036F7, 0x00000000, 0xF73C0000,
    0xE2EF79B6, 0x2FEF7BDE, 0xA7DEF7B8, 0xBF1D7026, 0x78FDEF7B, 0x1FBDEEAA, 0x00000369,
    0xC5C00000, 0xEFE0A860, 0xDEE793D4, 0xF739E9AA, 0xE73CD3DE, 0x801A7BDE, 0xF7BDEF75,
    0xF7BE82FE, 0xEB81353E, 0x00000000, 0x00000000, 0xB3E80118, 0x9BF6F817, 0xC0F3C620,
    0xEF7BDEEF, 0xEF7559CE, 0xFD77E35D, 0xB00C93F1, 0x40000200, 0xFEBAC030, 0xAACE4FC1,
    0x3F1AEF73, 0xDF678060, 0xFDFDE20D, 0xF8953D41, 0xDDEF7BDD, 0xBDEEAB39, 0x3FAEFC6B,
    0x1601927E, 0x08000040, 0x3FD75806, 0x7559C9F8, 0xC7E35DEE, 0xC14EFFF8, 0xFEFDFBEF,
    0x379E5E89, 0xEF7BDDF9, 0xEEAB39DD, 0xAEFC6BBD, 0x01927E3F, 0x00004016, 0xD7580608,
    0x59C9F83F, 0xE35DEE75, 0xDEF739E7, 0xDEE73CD3, 0xBF001A7B, 0x3BBDEF7B, 0x77BDD567,
    0xC7F5DF8D, 0x02C0324F, 0xC1000008, 0x07FAEB00, 0xCEAB393F, 0xACFC6BBD, 0xCBEE7AFB,
    0xBEE7AFBA, 0x7BDDF800, 0xAB39DDEF, 0xFC6BBDEE, 0x927E3FAE, 0x00401601, 0x58060800,
    0xC9F83FD7, 0x5DEE7559, 0x2FBAC7E3, 0x7802FBAC, 0xFFFFFFFF, 0xF7BDEFFF, 0xED623BDE,
    0x5FB98237, 0x7E014F00, 0x7BDEEFCB, 0xF75598AF, 0xF5DF889E, 0x721925E7, 0xCF7E0B4E,
    0x0357204F, 0x56E0835D, 0xA54F5D63, 0xB9E55C9F, 0xAC5F8D77, 0x9DDEF7BE, 0xD9F4008C,
    0x4DFB7C0B, 0xB079E310, 0x5F73C2EE, 0x00000000, 0x00200000, 0x3D402FD2, 0x00FDEE79,
    0xDDF67806, 0x1FDFDE20, 0xBAC953D4, 0x017DCF0B, 0x00000000, 0x48008000, 0xE4F500BF,
    0xF183F7B9, 0xDF829DFF, 0x13FDFBF7, 0x5A6F3CBD, 0x2FB9E177, 0x00000000, 0x00100000,
    0x9EA017E9, 0x587EF73C, 0x97DCF5F7, 0x7DCF5F75, 0xE1775801, 0x00002FB9, 0x00000000,
    0x17E90010, 0xF73C9EA0, 0x3C03007E, 0xEF106EFB, 0xA9EA0FEF, 0xFC2FBDE4, 0xD4429F7E,
    0x560E647F, 0xFFE29F2C, 0xD44FC784, 0x15C8C721, 0x7FCF3E0F, 0xF3DF8AC1, 0x28C67887,
    0x7D301470, 0xC40397C0, 0x0F1580FA, 0x0000BBAC, 0xEF7BE800, 0xEF7D05FD, 0x6C413599,
    0x0000807F, 0x60000000, 0x77BDF41B, 0x7BDF4BD6, 0x00002FEF, 0xD7DD6000, 0x7DD65F73,
    0xE005F73D, 0x7EFC2FBD, 0x7FD4429F, 0x2C560E64, 0x84FFE29F, 0x21D44FC7, 0x0F15C8C7,
    0xC17FCF3E, 0x87F3DF8A, 0x7028C678, 0xC07D3014, 0xFAC40397, 0x000F1580
EW_END_OF_FONT_RES( ApplicationNumbersM )

/* Table with links to derived variants of the font resource : 'Application::NumbersM' */
EW_RES_WITHOUT_VARIANTS( ApplicationNumbersM )

/* Font resource : 'Application::NumbersP' */
EW_DEFINE_FONT_RES( ApplicationNumbersP, 13, 3, 0, 16, 0x0016, 0x00BE )
  EW_GLYPH( 0x0016, 0, -13, 8, 16, 8, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 8, 0x0000018E ),                /* ' ' */
  EW_GLYPH( 0x0021, 3, -11, 2, 11, 8, 0x0000018E ),             /* '!' */
  EW_GLYPH( 0x0022, 2, -12, 4, 3, 8, 0x000001CE ),              /* '"' */
  EW_GLYPH( 0x0023, 0, -11, 7, 11, 8, 0x000001EE ),             /* '#' */
  EW_GLYPH( 0x0024, 0, -11, 8, 11, 8, 0x00000292 ),             /* '$' */
  EW_GLYPH( 0x0025, 0, -11, 8, 11, 8, 0x000003CD ),             /* '%' */
  EW_GLYPH( 0x0026, 0, -11, 8, 11, 8, 0x0000050E ),             /* '&' */
  EW_GLYPH( 0x0027, 3, -12, 2, 3, 8, 0x00000619 ),              /* ''' */
  EW_GLYPH( 0x0028, 1, -12, 6, 15, 8, 0x00000629 ),             /* '(' */
  EW_GLYPH( 0x0029, 1, -12, 6, 15, 8, 0x000006D7 ),             /* ')' */
  EW_GLYPH( 0x002A, 1, -12, 6, 7, 8, 0x0000077B ),              /* '*' */
  EW_GLYPH( 0x002B, 1, -9, 6, 6, 8, 0x00000823 ),               /* '+' */
  EW_GLYPH( 0x002C, 3, -1, 2, 4, 8, 0x0000087F ),               /* ',' */
  EW_GLYPH( 0x002D, 0, -6, 8, 1, 8, 0x0000089D ),               /* '-' */
  EW_GLYPH( 0x002E, 3, -2, 2, 2, 8, 0x000008C6 ),               /* '.' */
  EW_GLYPH( 0x002F, 0, -11, 8, 11, 8, 0x000008DE ),             /* '/' */
  EW_GLYPH( 0x0030, 0, -11, 8, 11, 8, 0x000009AF ),             /* '0' */
  EW_GLYPH( 0x0031, 0, -11, 8, 11, 8, 0x00000AD0 ),             /* '1' */
  EW_GLYPH( 0x0032, 0, -11, 8, 11, 8, 0x00000B64 ),             /* '2' */
  EW_GLYPH( 0x0033, 0, -11, 8, 11, 8, 0x00000C59 ),             /* '3' */
  EW_GLYPH( 0x0034, 0, -11, 8, 11, 8, 0x00000D67 ),             /* '4' */
  EW_GLYPH( 0x0035, 0, -11, 8, 11, 8, 0x00000E57 ),             /* '5' */
  EW_GLYPH( 0x0036, 0, -11, 8, 11, 8, 0x00000F50 ),             /* '6' */
  EW_GLYPH( 0x0037, 0, -11, 8, 11, 8, 0x00001046 ),             /* '7' */
  EW_GLYPH( 0x0038, 0, -11, 8, 11, 8, 0x00001145 ),             /* '8' */
  EW_GLYPH( 0x0039, 0, -11, 8, 11, 8, 0x0000127C ),             /* '9' */
  EW_GLYPH( 0x003A, 3, -7, 2, 7, 8, 0x00001375 ),               /* ':' */
  EW_GLYPH( 0x003B, 3, -6, 2, 9, 8, 0x000013AF ),               /* ';' */
  EW_GLYPH( 0x003C, 1, -11, 6, 10, 8, 0x000013F1 ),             /* '<' */
  EW_GLYPH( 0x003D, 1, -8, 6, 4, 8, 0x0000149E ),               /* '=' */
  EW_GLYPH( 0x003E, 1, -11, 6, 10, 8, 0x0000150A ),             /* '>' */
  EW_GLYPH( 0x003F, 0, -11, 8, 11, 8, 0x000015B9 ),             /* '?' */
  EW_GLYPH( 0x0040, 0, -9, 8, 11, 8, 0x000016B4 ),              /* '@' */
  EW_GLYPH( 0x0041, 0, -11, 8, 11, 8, 0x000017BF ),             /* 'A' */
  EW_GLYPH( 0x0042, 0, -11, 8, 11, 8, 0x000018DF ),             /* 'B' */
  EW_GLYPH( 0x0043, 0, -11, 8, 11, 8, 0x000019D3 ),             /* 'C' */
  EW_GLYPH( 0x0044, 0, -11, 8, 11, 8, 0x00001A99 ),             /* 'D' */
  EW_GLYPH( 0x0045, 0, -11, 8, 11, 8, 0x00001B56 ),             /* 'E' */
  EW_GLYPH( 0x0046, 0, -11, 8, 11, 8, 0x00001C1B ),             /* 'F' */
  EW_GLYPH( 0x0047, 0, -11, 8, 11, 8, 0x00001CD1 ),             /* 'G' */
  EW_GLYPH( 0x0048, 0, -11, 8, 11, 8, 0x00001DB2 ),             /* 'H' */
  EW_GLYPH( 0x0049, 0, -11, 8, 11, 8, 0x00001E43 ),             /* 'I' */
  EW_GLYPH( 0x004A, 0, -11, 8, 11, 8, 0x00001EFA ),             /* 'J' */
  EW_GLYPH( 0x004B, 0, -11, 8, 11, 8, 0x00001FA9 ),             /* 'K' */
  EW_GLYPH( 0x004C, 0, -11, 8, 11, 8, 0x000020A7 ),             /* 'L' */
  EW_GLYPH( 0x004D, 0, -11, 8, 11, 8, 0x00002124 ),             /* 'M' */
  EW_GLYPH( 0x004E, 0, -11, 8, 11, 8, 0x00002219 ),             /* 'N' */
  EW_GLYPH( 0x004F, 0, -11, 8, 11, 8, 0x000022EE ),             /* 'O' */
  EW_GLYPH( 0x0050, 0, -11, 8, 11, 8, 0x000023D7 ),             /* 'P' */
  EW_GLYPH( 0x0051, 0, -11, 8, 13, 8, 0x0000249B ),             /* 'Q' */
  EW_GLYPH( 0x0052, 0, -11, 8, 11, 8, 0x000025B3 ),             /* 'R' */
  EW_GLYPH( 0x0053, 0, -11, 8, 11, 8, 0x0000268B ),             /* 'S' */
  EW_GLYPH( 0x0054, 0, -11, 8, 11, 8, 0x0000279C ),             /* 'T' */
  EW_GLYPH( 0x0055, 0, -11, 8, 11, 8, 0x00002832 ),             /* 'U' */
  EW_GLYPH( 0x0056, 0, -11, 8, 11, 8, 0x000028D3 ),             /* 'V' */
  EW_GLYPH( 0x0057, 0, -11, 8, 11, 8, 0x000029F4 ),             /* 'W' */
  EW_GLYPH( 0x0058, 0, -11, 8, 11, 8, 0x00002B1A ),             /* 'X' */
  EW_GLYPH( 0x0059, 0, -11, 8, 11, 8, 0x00002C5C ),             /* 'Y' */
  EW_GLYPH( 0x005A, 0, -11, 8, 11, 8, 0x00002D4B ),             /* 'Z' */
  EW_GLYPH( 0x005B, 1, -12, 6, 15, 8, 0x00002E5E ),             /* '[' */
  EW_GLYPH( 0x005C, 0, -11, 8, 11, 8, 0x00002EEC ),             /* '\' */
  EW_GLYPH( 0x005D, 1, -12, 6, 15, 8, 0x00002FBC ),             /* ']' */
  EW_GLYPH( 0x005E, 0, -12, 8, 6, 8, 0x0000304C ),              /* '^' */
  EW_GLYPH( 0x005F, 0, 2, 8, 1, 8, 0x000030D9 ),                /* '_' */
  EW_GLYPH( 0x0060, 1, -12, 4, 3, 8, 0x00003101 ),              /* '`' */
  EW_GLYPH( 0x0061, 0, -9, 8, 9, 8, 0x0000312D ),               /* 'a' */
  EW_GLYPH( 0x0062, 0, -12, 8, 12, 8, 0x0000320D ),             /* 'b' */
  EW_GLYPH( 0x0063, 0, -9, 8, 9, 8, 0x000032D4 ),               /* 'c' */
  EW_GLYPH( 0x0064, 0, -12, 8, 12, 8, 0x0000338C ),             /* 'd' */
  EW_GLYPH( 0x0065, 0, -9, 8, 9, 8, 0x00003455 ),               /* 'e' */
  EW_GLYPH( 0x0066, 0, -12, 8, 12, 8, 0x0000353E ),             /* 'f' */
  EW_GLYPH( 0x0067, 0, -9, 8, 12, 8, 0x00003609 ),              /* 'g' */
  EW_GLYPH( 0x0068, 0, -12, 8, 12, 8, 0x000036F8 ),             /* 'h' */
  EW_GLYPH( 0x0069, 0, -12, 8, 12, 8, 0x00003799 ),             /* 'i' */
  EW_GLYPH( 0x006A, 1, -12, 6, 15, 8, 0x0000385A ),             /* 'j' */
  EW_GLYPH( 0x006B, 0, -12, 8, 12, 8, 0x00003921 ),             /* 'k' */
  EW_GLYPH( 0x006C, 0, -12, 8, 12, 8, 0x00003A07 ),             /* 'l' */
  EW_GLYPH( 0x006D, 0, -9, 8, 9, 8, 0x00003AA8 ),               /* 'm' */
  EW_GLYPH( 0x006E, 0, -9, 8, 9, 8, 0x00003B32 ),               /* 'n' */
  EW_GLYPH( 0x006F, 0, -9, 8, 9, 8, 0x00003BB5 ),               /* 'o' */
  EW_GLYPH( 0x0070, 0, -9, 8, 12, 8, 0x00003C81 ),              /* 'p' */
  EW_GLYPH( 0x0071, 0, -9, 8, 12, 8, 0x00003D61 ),              /* 'q' */
  EW_GLYPH( 0x0072, 0, -9, 8, 9, 8, 0x00003E32 ),               /* 'r' */
  EW_GLYPH( 0x0073, 0, -9, 8, 9, 8, 0x00003EBD ),               /* 's' */
  EW_GLYPH( 0x0074, 0, -11, 8, 11, 8, 0x00003FC8 ),             /* 't' */
  EW_GLYPH( 0x0075, 0, -9, 8, 9, 8, 0x0000407C ),               /* 'u' */
  EW_GLYPH( 0x0076, 0, -9, 8, 9, 8, 0x000040FD ),               /* 'v' */
  EW_GLYPH( 0x0077, 0, -9, 8, 9, 8, 0x000041E0 ),               /* 'w' */
  EW_GLYPH( 0x0078, 0, -9, 8, 9, 8, 0x000042E3 ),               /* 'x' */
  EW_GLYPH( 0x0079, 0, -9, 8, 12, 8, 0x000043EA ),              /* 'y' */
  EW_GLYPH( 0x007A, 0, -9, 8, 9, 8, 0x0000451F ),               /* 'z' */
  EW_GLYPH( 0x007B, 1, -12, 6, 15, 8, 0x00004613 ),             /* '{' */
  EW_GLYPH( 0x007C, 3, -12, 2, 15, 8, 0x000046EE ),             /* '|' */
  EW_GLYPH( 0x007D, 1, -12, 6, 15, 8, 0x00004716 ),             /* '}' */
  EW_GLYPH( 0x007E, 1, -7, 6, 2, 8, 0x000047F6 ),               /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 8, 0x00004837 ),
  EW_GLYPH( 0x00A1, 3, -8, 2, 11, 8, 0x00004837 ),
  EW_GLYPH( 0x00A2, 1, -11, 6, 11, 8, 0x00004873 ),
  EW_GLYPH( 0x00A3, 0, -11, 8, 11, 8, 0x00004924 ),
  EW_GLYPH( 0x00A5, 0, -11, 8, 11, 8, 0x000049F6 ),
  EW_GLYPH( 0x00A6, 3, -12, 2, 15, 8, 0x00004B35 ),
  EW_GLYPH( 0x00A7, 0, -11, 8, 13, 8, 0x00004B74 ),
  EW_GLYPH( 0x00A8, 1, -11, 6, 1, 8, 0x00004CD5 ),
  EW_GLYPH( 0x00A9, 0, -12, 8, 12, 8, 0x00004CF3 ),
  EW_GLYPH( 0x00AA, 1, -11, 6, 6, 8, 0x00004E68 ),
  EW_GLYPH( 0x00AB, 1, -8, 6, 6, 8, 0x00004EE5 ),
  EW_GLYPH( 0x00AC, 1, -7, 6, 4, 8, 0x00004F79 ),
  EW_GLYPH( 0x00AD, 0, -6, 8, 1, 8, 0x00004FC5 ),
  EW_GLYPH( 0x00AE, 0, -12, 8, 8, 8, 0x00004FEE ),
  EW_GLYPH( 0x00AF, 1, -11, 6, 1, 8, 0x000050F3 ),
  EW_GLYPH( 0x00B0, 1, -12, 6, 6, 8, 0x00005115 ),
  EW_GLYPH( 0x00B1, 1, -9, 6, 9, 8, 0x00005195 ),
  EW_GLYPH( 0x00B2, 2, -11, 4, 5, 8, 0x00005225 ),
  EW_GLYPH( 0x00B3, 2, -11, 4, 6, 8, 0x00005289 ),
  EW_GLYPH( 0x00B4, 3, -12, 3, 3, 8, 0x000052FA ),
  EW_GLYPH( 0x00B6, 0, -11, 8, 14, 8, 0x0000531D ),
  EW_GLYPH( 0x00B7, 3, -6, 2, 2, 8, 0x000053DA ),
  EW_GLYPH( 0x00B8, 3, 0, 2, 3, 8, 0x000053F2 ),
  EW_GLYPH( 0x00B9, 2, -11, 4, 6, 8, 0x0000540D ),
  EW_GLYPH( 0x00BA, 1, -11, 6, 6, 8, 0x00005447 ),
  EW_GLYPH( 0x00BB, 1, -8, 6, 6, 8, 0x000054C1 ),
  EW_GLYPH( 0x00BC, 0, -11, 8, 11, 8, 0x00005563 ),
  EW_GLYPH( 0x00BD, 0, -11, 8, 11, 8, 0x0000568F ),
  EW_GLYPH( 0x00BE, 0, -11, 8, 11, 8, 0x000057D0 ),
  EW_GLYPH( 0x00BF, 0, -8, 8, 11, 8, 0x00005933 ),
  EW_GLYPH( 0x00C0, 0, -13, 8, 13, 8, 0x00005A16 ),
  EW_GLYPH( 0x00C1, 0, -13, 8, 13, 8, 0x00005B65 ),
  EW_GLYPH( 0x00C2, 0, -12, 8, 12, 8, 0x00005CAE ),
  EW_GLYPH( 0x00C3, 0, -13, 8, 13, 8, 0x00005DF5 ),
  EW_GLYPH( 0x00C4, 0, -12, 8, 12, 8, 0x00005F54 ),
  EW_GLYPH( 0x00C5, 0, -12, 8, 12, 8, 0x000060A1 ),
  EW_GLYPH( 0x00C6, 0, -11, 8, 11, 8, 0x000061CF ),
  EW_GLYPH( 0x00C7, 0, -11, 8, 14, 8, 0x000062CB ),
  EW_GLYPH( 0x00C8, 0, -13, 8, 13, 8, 0x000063D0 ),
  EW_GLYPH( 0x00C9, 0, -13, 8, 13, 8, 0x000064C2 ),
  EW_GLYPH( 0x00CA, 0, -12, 8, 12, 8, 0x000065B0 ),
  EW_GLYPH( 0x00CB, 0, -12, 8, 12, 8, 0x00006691 ),
  EW_GLYPH( 0x00CC, 0, -13, 8, 13, 8, 0x0000676E ),
  EW_GLYPH( 0x00CD, 0, -13, 8, 13, 8, 0x00006852 ),
  EW_GLYPH( 0x00CE, 0, -12, 8, 12, 8, 0x00006932 ),
  EW_GLYPH( 0x00CF, 0, -12, 8, 12, 8, 0x00006A05 ),
  EW_GLYPH( 0x00D0, 0, -11, 8, 11, 8, 0x00006AD4 ),
  EW_GLYPH( 0x00D1, 0, -13, 8, 13, 8, 0x00006BAA ),
  EW_GLYPH( 0x00D2, 0, -13, 8, 13, 8, 0x00006CC0 ),
  EW_GLYPH( 0x00D3, 0, -13, 8, 13, 8, 0x00006DD6 ),
  EW_GLYPH( 0x00D4, 0, -12, 8, 12, 8, 0x00006EE8 ),
  EW_GLYPH( 0x00D5, 0, -13, 8, 13, 8, 0x00006FEC ),
  EW_GLYPH( 0x00D6, 0, -12, 8, 12, 8, 0x00007111 ),
  EW_GLYPH( 0x00D7, 1, -9, 6, 6, 8, 0x0000720C ),
  EW_GLYPH( 0x00D8, 0, -12, 8, 13, 8, 0x000072A0 ),
  EW_GLYPH( 0x00D9, 0, -13, 8, 13, 8, 0x000073F9 ),
  EW_GLYPH( 0x00DA, 0, -13, 8, 13, 8, 0x000074D5 ),
  EW_GLYPH( 0x00DB, 0, -12, 8, 12, 8, 0x000075AA ),
  EW_GLYPH( 0x00DC, 0, -12, 8, 12, 8, 0x0000766F ),
  EW_GLYPH( 0x00DD, 0, -13, 8, 13, 8, 0x00007738 ),
  EW_GLYPH( 0x00DE, 0, -11, 8, 11, 8, 0x0000785B ),
  EW_GLYPH( 0x00DF, 0, -12, 8, 12, 8, 0x00007937 ),
  EW_GLYPH( 0x00E0, 0, -13, 8, 13, 8, 0x00007A42 ),
  EW_GLYPH( 0x00E1, 0, -13, 8, 13, 8, 0x00007B6D ),
  EW_GLYPH( 0x00E2, 0, -12, 8, 12, 8, 0x00007C8E ),
  EW_GLYPH( 0x00E3, 0, -12, 8, 12, 8, 0x00007DC2 ),
  EW_GLYPH( 0x00E4, 0, -12, 8, 12, 8, 0x00007F07 ),
  EW_GLYPH( 0x00E5, 0, -12, 8, 12, 8, 0x0000802F ),
  EW_GLYPH( 0x00E6, 0, -9, 8, 9, 8, 0x0000815C ),
  EW_GLYPH( 0x00E7, 0, -9, 8, 12, 8, 0x00008261 ),
  EW_GLYPH( 0x00E8, 0, -13, 8, 13, 8, 0x00008359 ),
  EW_GLYPH( 0x00E9, 0, -13, 8, 13, 8, 0x0000848D ),
  EW_GLYPH( 0x00EA, 0, -12, 8, 12, 8, 0x000085B7 ),
  EW_GLYPH( 0x00EB, 0, -12, 8, 12, 8, 0x000086F4 ),
  EW_GLYPH( 0x00EC, 0, -13, 8, 13, 8, 0x00008825 ),
  EW_GLYPH( 0x00ED, 0, -13, 8, 13, 8, 0x000088FF ),
  EW_GLYPH( 0x00EE, 0, -12, 8, 12, 8, 0x000089CF ),
  EW_GLYPH( 0x00EF, 0, -12, 8, 12, 8, 0x00008AB2 ),
  EW_GLYPH( 0x00F0, 0, -12, 8, 12, 8, 0x00008B89 ),
  EW_GLYPH( 0x00F1, 0, -12, 8, 12, 8, 0x00008C85 ),
  EW_GLYPH( 0x00F2, 0, -13, 8, 13, 8, 0x00008D6E ),
  EW_GLYPH( 0x00F3, 0, -13, 8, 13, 8, 0x00008E85 ),
  EW_GLYPH( 0x00F4, 0, -12, 8, 12, 8, 0x00008F92 ),
  EW_GLYPH( 0x00F5, 0, -12, 8, 12, 8, 0x000090B2 ),
  EW_GLYPH( 0x00F6, 0, -12, 8, 12, 8, 0x000091E3 ),
  EW_GLYPH( 0x00F7, 1, -9, 6, 6, 8, 0x000092F7 ),
  EW_GLYPH( 0x00F8, 0, -10, 8, 11, 8, 0x00009373 ),
  EW_GLYPH( 0x00F9, 0, -13, 8, 13, 8, 0x000094A6 ),
  EW_GLYPH( 0x00FA, 0, -13, 8, 13, 8, 0x00009572 ),
  EW_GLYPH( 0x00FB, 0, -12, 8, 12, 8, 0x00009634 ),
  EW_GLYPH( 0x00FC, 0, -12, 8, 12, 8, 0x00009709 ),
  EW_GLYPH( 0x00FD, 0, -13, 8, 16, 8, 0x000097D2 ),
  EW_GLYPH( 0x00FE, 0, -12, 8, 15, 8, 0x00009948 ),
  EW_GLYPH( 0x00FF, 0, -12, 8, 15, 8, 0x00009A43 ),

  EW_FONT_PIXEL( ApplicationNumbersP, 0x00009BC0 )              /* ratio 67.40 % */
    0xFFFFFECF, 0x647B5DFF, 0xEEBF8E66, 0x739C15EE, 0xB39CC7F4, 0x2E900A9F, 0xFD989748,
    0xACFDF054, 0x03BB750F, 0x8C0D8123, 0xD8C0013D, 0x5555FE13, 0x0FFFDF55, 0xFFFFFC00,
    0xAD6FE67F, 0x5C37001F, 0xE75C4000, 0xEB9D71BA, 0x9D710002, 0xAE75C6EB, 0x3D60000B,
    0xBBFB7D88, 0x7F4E3BD7, 0x8E010AF7, 0xFE9C7300, 0xDF623FEE, 0x102E4EFE, 0x79E44179,
    0xE4EFEDEE, 0xEFEDEE7C, 0xFBDE63FE, 0xBEFEE1D8, 0x8960AE7F, 0x7E258FE7, 0x5DFBFB8B,
    0x7E27BCC1, 0x5DEEFFC0, 0xFF7E8AC4, 0x5382CFD4, 0xFB8E6216, 0xDCF7B6FB, 0xBDF318BB,
    0x58153177, 0xF7D3E40A, 0x99F2BBDE, 0xE55DE777, 0x48412103, 0xBD903E50, 0xDEBBCEEE,
    0x6E77C417, 0x11B9C7F8, 0x000582E3, 0x00000000, 0x83F22000, 0xB88DCE3B, 0x4F710DE7,
    0x002A707E, 0x00000000, 0x77000000, 0xC0E3DC44, 0x30F63BC0, 0xEB9A89D6, 0x99CF78C9,
    0x46EFF661, 0xDD730CCF, 0xE0002D64, 0xBFFBEEDE, 0x81FEFBB7, 0xE70D37FB, 0x7BDEF7B9,
    0x2737EFC7, 0x2AB04FF0, 0xEB03F7C1, 0x05F78849, 0xF9880CEF, 0xB2037E82, 0x207DF816,
    0xBDEF016B, 0xFE6ABEF7, 0x88C736EE, 0xF0652BF2, 0x01E3501C, 0x3FAC05FF, 0xB8C14678,
    0x7E788C0F, 0xBED3551E, 0xBDD61CDF, 0x00B7587F, 0x00000000, 0x60000000, 0xEF795BDD,
    0x4F7BDD63, 0x6BBDEEB3, 0x0079F00D, 0xDDF1E7C0, 0xF51AD77B, 0x0DA7BDF4, 0xD8000005,
    0x9EBBDEF7, 0xCB3DEF7B, 0xCFBDEF73, 0x0244E01B, 0xB8C91B80, 0xB8C159F7, 0xFF00AE77,
    0xB7F00028, 0xAEF7BDD6, 0x1F7B8C4E, 0x1D640B78, 0x62135BF0, 0x095BC0FD, 0x0E560BE6,
    0xDBBDC670, 0xEF7BDEB7, 0xF7802DF6, 0x8BEF7BDE, 0x017DEF73, 0x3DEE7000, 0xDEF7BDED,
    0x28F00D77, 0xC0290030, 0xEF7BDEA7, 0xEFB19D5D, 0xF1CC37BD, 0x0F037BDE, 0x7BDF6000,
    0xF7BEC17F, 0x011E05AD, 0x8943C000, 0xBB7BDE39, 0xBDEF7BD6, 0xDEF7CEF7, 0x304C577B,
    0x03E27827, 0x1D4612A7, 0xB103E5F0, 0x03E3301E, 0x795093DF, 0x9EF73AC0, 0x6F75DE25,
    0x373632BD, 0x6C463012, 0xEF35866E, 0xF6633E7D, 0x7947ABBD, 0xC30099F8, 0xE7ACCFC3,
    0x11CE77BD, 0x7F7BDEFB, 0x6F7BC6B1, 0x250F0AD7, 0x60980000, 0x4DDEEF8E, 0x06EF7BEC,
    0xEF709400, 0xFFEB5DBD, 0xFE17BCCF, 0x337BCCFF, 0x7FB87FFF, 0x980070D3, 0x745FFA0F,
    0x1F97C2FE, 0xC7B11331, 0x83F1BF07, 0xCFD03C77, 0x7F7BDEEF, 0xFDEF7BBF, 0xEF7BBF01,
    0x84CF01FD, 0xEF6216FA, 0x30BE5F86, 0x2FC6F832, 0xB3C7C6FC, 0x9E0B3C5F, 0xCB3DEF7B,
    0xCFBDEF73, 0x03C4E01B, 0x8C3C4E00, 0xE83A7DFF, 0x13099EEF, 0x7F8805F8, 0xDF601903,
    0xE636EF7B, 0x731AF7BD, 0x1F7D82C0, 0x1C41A7A8, 0x4F500E20, 0xDEFB057F, 0x3500623B,
    0x0EF7BDEF, 0x7B01DEEA, 0xEB98C164, 0x173FCF0F, 0xA4C9C632, 0x46E2C7CC, 0x249E7F0E,
    0x9BDC6307, 0xEDEFA18F, 0x9E18A518, 0xCF7BDEF7, 0x3AB7B9C2, 0xC000B1C1, 0xEF738A3F,
    0xEF73827C, 0x053E01AA, 0xB9C51E00, 0x9CF0E7B7, 0xBF0DEF7B, 0x637BDEE7, 0x000006C4,
    0x00000000, 0x7BF03623, 0xD637BDEE, 0xC69EF7BD, 0x01AD77BE, 0x00200F3E, 0x00000000,
    0xFB0F3E01, 0x73C6B5DE, 0x0EF7BDEF, 0x077BDEFA, 0x7D000000, 0xF7BE85EF, 0x40000002,
    0x78EF7BDF, 0xDEF7BDEE, 0x7BDEEF87, 0x0000001F, 0x7C2F7BBE, 0x00005EF7, 0x73AC0000,
    0xBD91BDEF, 0x9637BDEE, 0x0001603F, 0x41F7BDC4, 0x0B000DDC, 0xBD907F2C, 0x77BCDDEE,
    0x0002EE30, 0xDF600000, 0xBBDF61BB, 0x00000001, 0xF7BDEE78, 0x9BDCF1DE, 0x0000EF79,
    0x00000000, 0xEE780000, 0x3077BCCD, 0x3077BDEE, 0x0000FDEE, 0x00000000, 0x8FF00300,
    0xEF7BDCF1, 0x7C1DD6D3, 0x3A79E127, 0xC267BF11, 0xD6F07E37, 0x80F1501B, 0x9CCF068E,
    0x105C7403, 0xE398163D, 0x000775CD, 0x00000000, 0x00000000, 0xEF7BDF60, 0x77D36EB3,
    0x3C980C91, 0x60610E41, 0xE7303E64, 0xE71FF093, 0xB0919E42, 0xE640F99E, 0xD60F9008,
    0x1317FC6D, 0x7E641310, 0x980637C0, 0x15A881F1, 0xC6058DE0, 0x246F80F8, 0xDEEF8198,
    0xD3CF5F7B, 0xBFACF6F7, 0x608463C9, 0x00000000, 0x9BF83010, 0xBCF3C63C, 0x75ACF6F7,
    0x6167BDEF, 0xC13ABBDF, 0xA7C000A7, 0x4EAEF7D8, 0x0167BDF6, 0xF0000000, 0xEBEF7BDE,
    0xCF6F7D99, 0x463C9BFA, 0x000000C0, 0xF0602000, 0xE78C7937, 0x967B7BE9, 0x17FF6EEF,
    0xF7593BC6, 0xF6167BDE, 0x8E09D5BD, 0x58FF0002, 0x0CE77BEC, 0x0335BDF6, 0x0130289C,
    0x7BDEF000, 0xF7CD5FEF, 0x2C37FBDE, 0x03C300C0, 0xFEF7BD6A, 0x7DEE7D17, 0x029F807A,
    0xB8A9F804, 0x39D9DEF7, 0xDEF7BDEE, 0xBCCDEE31, 0x00000077, 0x00000000, 0x1BAC0000,
    0x00005DC4, 0x00000000, 0x2C306000, 0xBDF3551E, 0x7758E7B7, 0x87967750, 0x1B870CF4,
    0x0F3C18C3, 0x6E0E43CF, 0xF29FC644, 0xFC8C8B2C, 0xB9B9E267, 0x0FEB3C60, 0xFFF1647B,
    0x09CF7FC1, 0xCCC80C56, 0x44738BD0, 0xD60E43FE, 0x0465314C, 0x96733D33, 0x1FF33B0C,
    0xC9539D64, 0xE4B11C8C, 0xC8EE797D, 0x786A7167, 0x461D6663, 0xB83E5F7D, 0x44A0FE63,
    0xE0788CC1, 0x2787D6B7, 0xBC3E7FBF, 0xC6BE5463, 0xB18CF1F8, 0x39DD43EE, 0x198FF2E3,
    0x89C9AC55, 0xF951F8AA, 0xB3C0D7FF, 0x30BE1FD6, 0x00003D21, 0xDEF75800, 0xEEB3EF7B,
    0x414677BD, 0x2DA037AE, 0x6E0BCF18, 0x8346782E, 0x47303C77, 0x1982AE83, 0x4FBDEF75,
    0xB06F7BDC, 0x00000DEF, 0x00000000, 0xF6000000, 0x207F91BD, 0x1FBF026B, 0xDF80B590,
    0x80B3E407, 0xF3100DF7, 0x2019DE05, 0x195D0366, 0x711BDEF7, 0x000007EF, 0x00000000,
    0xDC400000, 0x5E8001FB, 0x1037EAA0, 0xF82739EF, 0xE9F7F33A, 0xEEB9987C, 0x7BDEF7BD,
    0xE2B7CE21, 0xF7BAD7DB, 0xBDD61DDE, 0x3C0B1DF7, 0xBDF62002, 0xEFC73377, 0xE051CDDE,
    0x7D8E6018, 0x01DD66EF, 0xF7D80000, 0xDEFB0FDE, 0x030C0A7E, 0xC000002C, 0x7D830C02,
    0xBBE53F6F, 0xC63BDEF7, 0x77BDEF33, 0x00001B4C, 0x174C0000, 0xF7B9E78C, 0xBB9E01DE,
    0xF77C0000, 0xFA7A8FDE, 0x00A18FDE, 0x0B000000, 0xCF507F0C, 0xEFC3F7BC, 0x59B77BDE,
    0x31FFBDEF, 0x900A43C3, 0xBFEF7D82, 0xFBDEFB26, 0xAC0A1003, 0x0FEF7BEA, 0x90FBDCFA,
    0x587DEEAB, 0x79FB9E36, 0x9FB9E3EF, 0x00003EEF, 0x00000000, 0xBDEEFC00, 0xFAA7AEF7,
    0x002A4DDE, 0x90000000, 0x7BD4F01E, 0xDEEFC6EF, 0xB92501BB, 0xEB3D76F7, 0xC000000E,
    0x82FEF7BE, 0x02D76F7D, 0x00000025, 0x70000000, 0xFC09902F, 0xBDEE78FF, 0x26F73C7F,
    0x00000000, 0xF73C0000, 0xE0FBDE66, 0x03222FB9, 0xEF75EFF5, 0xBBDD6BBD, 0x00000001,
    0x0C0B0000, 0x7AEDEEB9, 0x00001DD6, 0xE07FFC00, 0x13AAC1F3, 0xF407B7A8, 0x0BC7A098,
    0xAC139DEA, 0xE37C0BA7, 0xFBDEE7CB, 0x002F73C3, 0x00000000, 0x00000000, 0xF755EE78,
    0xF7BDEF3E, 0xDA9C1DDE, 0x04A058EF, 0x00000018, 0x7BAC0000, 0xEC3FBDEF, 0x501EBB7B,
    0x00000012, 0xF7200000, 0xF8EEF7BD, 0x6FDEEFC6, 0x0E50F0CC, 0x40000000, 0x1BE72878,
    0x31BF7BBF, 0xBDEF7BDF, 0xDF7B9C3F, 0x8011E09A, 0x38000003, 0x7B9C11E0, 0x7B9C5ADF,
    0x00002FEF, 0xF7BDEEFC, 0xDEFAA7AE, 0x0000548F, 0x15200000, 0xFDEFAA78, 0x7EF7BBF0,
    0x7DA80000, 0xB7C3BDEF, 0x8C77BDEE, 0x000000D8, 0x20000000, 0x5EF7BDF6, 0xF7BDCF33,
    0xC9C0233A, 0xBDCEB300, 0xBBF117F7, 0x82679EF7, 0x38C40718, 0x9EF7BDCF, 0x00BB8C9C,
    0xEFADDCF0, 0xF5BB9E7D, 0x00000FBD, 0x1C000000, 0xB0DE6A30, 0x05DC60EE, 0x00000000,
    0xB01E1000, 0xA6EF7BC6, 0xB7B7926F, 0x2E2AFCA2, 0xA8A7863B, 0x6C646762, 0xC462954A,
    0xD562677F, 0x3723D82A, 0xCDFDC0FB, 0xA8BFC840, 0xFFCA6E1A, 0x3D69CA7F, 0x2B4A6619,
    0xEB5DC465, 0xD4654F24, 0x73FCF324, 0x7750FBA8, 0x1CF4D3D4, 0x4D95AC7A, 0x0BFBEFBE,
    0x0CC0F0CC, 0xFBF6F90B, 0x1AE63D06, 0xBF34F53F, 0xE077BC67, 0xA23E7EF7, 0xCAC591BE,
    0xFFE1CBE1, 0x3D45F8F1, 0x1235A8E4, 0xB07DF8DF, 0xE7882C62, 0x780F3009, 0x82CE03C6,
    0xF7BDEF71, 0xBDEF718E, 0x5E740639, 0xB80E6B18, 0x074730D9, 0x9F81EBA2, 0xFF13C617,
    0xBE20EF7B, 0x59C7F8B3, 0x00001C62, 0xFC87CA81, 0x04FB209D, 0x00203E56, 0xB87F9100,
    0x02FBD679, 0x7BC00000, 0xCF3DE0DE, 0x10C15F07, 0x0F158000, 0x7892FBF2, 0x01F2A4BF,
    0x847B0000, 0xBCC38CF7, 0x6FBF51FF, 0x7BDDF39F, 0xFFFFFF33, 0x4BC0001F, 0x4FBCEFFC,
    0x93EF3B8D, 0x00000003, 0xEF3B9412, 0xEF3BFF13, 0x6F7B9D43, 0x6F7B8EF0, 0x17007C88,
    0xEFA39E00, 0x7DF473CB, 0x40000001, 0xBCC77BDF, 0x2B9DCF0F, 0xD4662736, 0xA89C99E2,
    0xFF2A3E27, 0xD55F12B7, 0xC1E39981, 0xE2BF19F3, 0xC57E79F9, 0xAC3EEABA, 0xF7E3EEAB,
    0xE17BF002, 0xBDE002F7, 0xCE57DEF7, 0x42BEF7BE, 0x9E205481, 0x512CF7BE, 0xCAFBEF7D,
    0x2A462A28, 0xEFD1189E, 0xCEB16FBD, 0xC5405DBD, 0x7BDD2500, 0xBDE2BBEF, 0xF735F711,
    0xBF91FBBD, 0xA8EDEF73, 0x8ABE325F, 0x8C7739E7, 0x1DF6E371, 0x03C4622B, 0x1B803100,
    0x9E22B0F1, 0x518C77D3, 0xAFAE79BF, 0xBDEE77F2, 0xFEF77E1D, 0xACDEEFC3, 0x8D4BDFF8,
    0xEF2A017B, 0x3BF4C985, 0xEFF7E77E, 0x35C7BFDF, 0xE3AF8EAE, 0xEEFEAFD5, 0xEFFEF7BD,
    0xC002F7BD, 0xDEF7B9EF, 0x4E7D077B, 0xDCE7BDE3, 0xC9EE7196, 0xFE73F588, 0x3963FFFF,
    0x3BFACFFB, 0x249FFF7B, 0xE3784472, 0xDFFB7FEC, 0xFF3FEF7B, 0xA9F3FEF7, 0x08C1577B,
    0xB3C460C0, 0xB58B5DEE, 0xBB7B8000, 0xEEDEFFEF, 0x0B5807FB, 0xEF7BDEE0, 0xDEB7BDFF,
    0x77BF6EFB, 0xBDFBBDFB, 0x35BDC7BD, 0x6E7FFBEE, 0x54EFF7FF, 0x62FBEC2E, 0xCFEEE77D,
    0xBBDEF73A, 0x0A1F43B2, 0xA8018010, 0x880FEC04, 0x00000007, 0xFC000000, 0x7AFE737E,
    0x65DC635E, 0x74F00034, 0xFBDFFC8F, 0x9BDC67CF, 0x03002065, 0xB37B8CF1, 0x39F38B16,
    0xBEFFF79F, 0xF8FFD7FF, 0xFD7FDF9F, 0x772EEBFE, 0x1BE06F79, 0xA018626F, 0x7E993C1B,
    0xEFCDBDB9, 0x6F2FE7FE, 0x40DF5BE0, 0xEB21F2BF, 0xCEDD1799, 0xF4A239AD, 0x06F7CE6F,
    0x8626F1BE, 0x93C1BA01, 0xDBDB97E9, 0x3D7FEEFC, 0x7BF114E7, 0xFBCFEFEF, 0xEA78E412,
    0xFEDD3F77, 0xC18637E7, 0x3DEF7F77, 0xEF78DF83, 0x5F872A5B, 0xF5F9BA3F, 0xBDE17F33,
    0xEF16F8EF, 0x2E7BFB3D, 0xF81DE6B2, 0xC8C58C75, 0x9DBA1F9A, 0xF0E5567E, 0xDF82C6FE,
    0xBC09900D, 0x03F900FF, 0xFEE7581E, 0xEEEB789A, 0x0001C541, 0x75D901CB, 0xF88FBDEF,
    0xE7D882AD, 0xC06B3182, 0xE630591E, 0xCFF3C3FA, 0x32718C85, 0xB8B1F329, 0x279FC391,
    0xF718C1C9, 0x7BE863E6, 0x8629463B, 0xE07EB507, 0xCCF50D9C, 0x60B23D82, 0xE787F5CC,
    0xE3190B9F, 0x63E65264, 0x3F872371, 0x3183924F, 0xD0C7CDEE, 0x528C76F7, 0xBB788F0C,
    0x5AFF883B, 0x591EC0BF, 0xC3FAE630, 0x8C85CFF3, 0xF3293271, 0xC391B8B1, 0xC1C9279F,
    0x63E6F718, 0x463B7BE8, 0xC8478629, 0xFEF1056F, 0xCFF815BE, 0x2C8F603B, 0xE1FD7318,
    0xC642E7F9, 0xF9949938, 0xE1C8DC58, 0x60E493CF, 0x31F37B8C, 0xA31DBDF4, 0xBDE3C314,
    0xFDE5F711, 0xEC5FB39D, 0xAE630591, 0x5CFF3C3F, 0x932718C8, 0x1B8B1F32, 0x9279FC39,
    0x6F718C1C, 0xB7BE863E, 0x78629463, 0xB84EF758, 0x0E47FC04, 0xA035CFF8, 0x8C61B9FE,
    0x27CCA0F3, 0x28722306, 0x9E7F9276, 0x11966F71, 0x96476F7D, 0xDEEB2862, 0xCEEBEF7B,
    0x3CAFBDCF, 0x13200CC0, 0xFFD20988, 0xEE335F73, 0x0072BEE7, 0xB8938131, 0x7B9CF5F7,
    0xBCBF0DEF, 0xF118DEF7, 0x00000003, 0x23000000, 0xEE7BF036, 0xA73C37BD, 0x7981BDD6,
    0xB7E20301, 0x8B9F620A, 0x7BACF6E7, 0xBDEF7D07, 0x80000003, 0xDF42F7BE, 0x0000017B,
    0x77BDEFA0, 0x9C0FD6A0, 0x7DEE79B3, 0xDF41DF66, 0x0000EF7B, 0xBDEFA000, 0x005EF7D0,
    0x7BE80000, 0xEDE21DEF, 0xB99CF0EE, 0xBE833AD6, 0x0001DEF7, 0x7BDF4000, 0x00BDEFA1,
    0xF7D00000, 0x37BC3BDE, 0xE99EBEE2, 0xF7D0731C, 0x00003BDE, 0x2F7BE800, 0x0017BDF4,
    0xDEFA0000, 0xADF8877B, 0xE2E7D882, 0xDEEB3DB9, 0x799BDCF1, 0x000000EF, 0x00000000,
    0xCDEE7800, 0xD6A077BC, 0x79B39C0F, 0xDF667DEE, 0x799BDCF1, 0x000000EF, 0x00000000,
    0xCDEE7800, 0xB78877BC, 0xE673C3BB, 0xE78CEB5A, 0x077BCCDE, 0x00000000, 0xC0000000,
    0xBDE66F73, 0xEE237BC3, 0x31CE99EB, 0xE66F73C7, 0x000003BD, 0x00000000, 0x37B9E000,
    0xDCF1DEF3, 0xD0FDEF7B, 0x03CFBEF7, 0xB0000DA6, 0x7D6C0DF5, 0x60000003, 0xEFBDF4DA,
    0xADF908F3, 0xB7DFDE20, 0xF2F1BAC2, 0x4C404C5F, 0xDF01F990, 0x07C66018, 0x378056A2,
    0x03E31816, 0x066091BE, 0x620AB7E2, 0xCF5F0B9F, 0xE9E7AFBA, 0xDFD67B7B, 0x304231E4,
    0x00000000, 0x4DFC1808, 0xDE79E31E, 0x6A167B7B, 0x1B39C0FD, 0xBF667DDF, 0xEDEFA79E,
    0xC7937F59, 0x0000C108, 0x60200000, 0x8C7937F0, 0xEDEF79E7, 0xEEEDE259, 0x5AD737E0,
    0xDEFA79ED, 0x7937F59E, 0x000C108C, 0x02000000, 0xC7937F06, 0xDEF79E78, 0xB7E4259E,
    0xDF7F7882, 0xEF39BE0A, 0xDF4F3D7D, 0x26FEB3DB, 0x0182118F, 0x40000000, 0xF26FE0C0,
    0xDEF3CF18, 0x37BCB3DB, 0xE70CBEE2, 0xDEFA79E0, 0x7937F59E, 0x000C108C, 0x02000000,
    0xC7937F06, 0xDEF79E78, 0x530F159E, 0xF0BF35BC, 0xF0FF7F7F, 0xF7BBF290, 0x9BCCDE64,
    0xBDEF6AC0, 0x98DFBEF7, 0x558CEF7D, 0x619FCA1E, 0x82EF8085, 0xFDF90955, 0xA824FBC0,
    0x58543117, 0x7B9E33FE, 0xE6F9E7DF, 0xC47EF7BD, 0x3EC4156F, 0xF7CEEB17, 0x00017717,
    0x00000000, 0xB0C18000, 0xF7CD5478, 0xB5039EDE, 0xCD9CE07E, 0xF3BDF1BA, 0x0000002E,
    0x00000000, 0x8F161830, 0xDBDEF9AA, 0xBBB78873, 0xFDDD3AC3, 0x0000059E, 0x00000000,
    0xE2C30600, 0x7BDF3551, 0x8DEF0E7B, 0x4F35AFB8, 0x000B99C4, 0x00000000, 0x860C0000,
    0xBE6AA3C5, 0xA81CF6F7, 0x6CE703F5, 0x77BE7DD6, 0xF2E339DC, 0xAC55198F, 0xF8AA89C9,
    0xD7FFF951, 0x1FD6B3C0, 0x3D2130BE, 0x58000000, 0xF6000077, 0xDF6167BD, 0x13806F5B,
    0x4B049605, 0xBEC51382, 0xDF60DEB7, 0xF880167B, 0x9B4F7BDD, 0xD6BBDEF5, 0x015B1638,
    0xD60F6C02, 0xEEB0359D, 0x054C035B, 0x301C2038, 0x7B7DEE15, 0x1BBB8800, 0x8C07BF62,
    0xF7BAC267, 0xBDD61DDE, 0x3C0B1DF7, 0xBDF62002, 0xEFC73377, 0xE051CDDE, 0x7D8E6018,
    0xBD0006EF, 0xC1BD382F, 0xEF7581AC, 0x7BAC3BBD, 0x78163BEF, 0x7BEC4004, 0xDF8E66EF,
    0xC0A39BBD, 0xFB1CC031, 0xFFBD0DDE, 0x37FF7913, 0x2B915C82, 0xBBDEF758, 0xBEF7BAC3,
    0x00478163, 0x6EF7BEC4, 0xBBDDF8E6, 0x031C0A39, 0xDDEFB1CC, 0xF31ECE78, 0xFDEEFDE3,
    0xBD8D765E, 0x7BDEEB07, 0xDEF75877, 0x08F02C77, 0xDEF7D880, 0x7BBF1CCD, 0x63814737,
    0xBDF63980, 0xB88DEF1B, 0xB88DEF2F, 0xDEEB002F, 0xF758777B, 0xF02C77DE, 0xF7D88008,
    0xBF1CCDDE, 0x8147377B, 0xF6398063, 0x7B9E1BBD, 0x5FBFD81E, 0x12FDFEC2, 0x0EDF13EB,
    0x8EFBDEEB, 0x10011E05, 0x99BBDEFB, 0xE6EF77E3, 0x300C7028, 0xE377BEC7, 0x79EE73DE,
    0x7DE4FBDC, 0x00C9722F, 0x67739E32, 0x75DCF7DD, 0x7153DD67, 0xDC2C3880, 0x37B8E775,
    0x7BDEF77C, 0xBDE678C7, 0x03698EF7, 0x80000000, 0x3CF182E9, 0x7C3BDEF7, 0x03BDD6B7,
    0x000602F3, 0xB10DDDC4, 0x33C603DF, 0xBDEF77E1, 0xDEF7ACDB, 0x21E198FF, 0xBEC14805,
    0x7D935FF7, 0x0801FDEF, 0xBDF55605, 0xBD0007F7, 0xC1BD382F, 0xBDDF81AC, 0xDEB36EF7,
    0x8663FF7B, 0x05201487, 0x4D7FDEFB, 0x07F7BDF6, 0xD5581420, 0x7A1FDEF7, 0xFEF227FF,
    0x22B9046F, 0xF7BBF057, 0x7BD66DDE, 0xF0CC7FEF, 0x60A40290, 0xC9AFFBDF, 0x00FEF7BE,
    0xFAAB0284, 0xBDE3FBDE, 0xBDE5F711, 0xE005F711, 0xDBBDEF77, 0xFFDEF7AC, 0x0521E198,
    0xF7BEC148, 0xEF7D935F, 0x050801FD, 0xF7BDF556, 0xDDDC4007, 0x603DFB10, 0xBDCF133C,
    0xDEE78FF7, 0x00000004, 0xE7800000, 0x1F7BCCDE, 0xE0BEF400, 0x06B306F4, 0x8FF7BDCF,
    0x0004DEE7, 0x00000000, 0xCCDEE780, 0xFF7A1F7B, 0x6FFEF227, 0x5722B904, 0x7FBDEE78,
    0x0026F73C, 0x00000000, 0x66F73C00, 0x6F78FBDE, 0x6F797DC4, 0x3C017DC4, 0x9E3FDEF7,
    0x0000137B, 0x00000000, 0xEF337B9E, 0xEF7B8C7D, 0xBDEE31FD, 0x8894135D, 0xCCDDEF7D,
    0xC377BBF1, 0x00000002, 0xC4A1E100, 0x5DBDEF1A, 0x98F673D3, 0xEF77EF1F, 0xEC6BB2F7,
    0xEF7BAC3D, 0xDF60BFBD, 0x24A055DB, 0x00000000, 0xB8800000, 0x7BF621BB, 0x722678C0,
    0x8EEF7BDF, 0xFDEEFC6F, 0xE50F0CC6, 0x00000000, 0xBE728784, 0x1BF7BBF1, 0x2FBD0013,
    0xACC1BD38, 0xEF7BEE41, 0xDF8DF1DD, 0xE198DFBD, 0x00001CA1, 0x50F08000, 0xF77E37CE,
    0xFBD2637E, 0x7FF7913F, 0xB915C823, 0xEF7BEE42, 0xDF8DF1DD, 0xE198DFBD, 0x00001CA1,
    0x50F08000, 0xF77E37CE, 0xCE7A637E, 0xFDE3F31E, 0x765EFDEE, 0xDC87BD8D, 0xE3BBDEF7,
    0xBF7BBF1B, 0x3943C331, 0x00000000, 0x6F9CA1E1, 0xC6FDEEFC, 0xFB88DEF4, 0xFB88DEF2,
    0xEF7DC802, 0xF1BE3BBD, 0x331BF7BB, 0x0003943C, 0x1E100000, 0xEFC6F9CA, 0xFE4C6FDE,
    0xB9FFF87F, 0xBFFBDEF7, 0x07FBDEF7, 0xF601FFF8, 0xBDEF7DC8, 0xDDF8DF99, 0x63C3319B,
    0x2F7E070E, 0xF8C0F198, 0x166F80F5, 0xF38F6AC2, 0x637F7DA5, 0x77BDFFA6, 0xBBB88007,
    0xC07BF621, 0x1DD62678, 0x0000BB8C, 0x00000000, 0x78D603C2, 0xA000DDEF, 0x37A705F7,
    0x77583598, 0x0002EE30, 0x00000000, 0xE3580F08, 0xEF4377BD, 0xFFDE44FF, 0xE457208D,
    0xC60EEB0A, 0x0000005D, 0xE1000000, 0xF7BC6B01, 0xE237BC6E, 0xE237BCBE, 0x1DD600BE,
    0x0000BB8C, 0x00000000, 0x78D603C2, 0xA000DDEF, 0x37A705F7, 0xEF783598, 0x7CFDEFC0,
    0x8B237D44, 0xC397C395, 0x8BF1E3FF, 0x6B51C87A, 0xFBF1BE24, 0x1058C560, 0x1E6013CF,
    0x9C078CF0, 0x000DEF05, 0xF7B9C000, 0x7DEE70FE, 0x0047826B, 0xE000000E, 0xEE704780,
    0xEE716B7D, 0x0000BFBD, 0xFB88DEF0, 0xFB88DEF2, 0xC0EF7802, 0x447CFDEF, 0x958B237D,
    0xFFC397C3, 0x7A8BF1E3, 0x246B51C8, 0x60FBF1BE, 0xCF1058C5, 0xF01E6013, 0x059C078C
EW_END_OF_FONT_RES( ApplicationNumbersP )

/* Table with links to derived variants of the font resource : 'Application::NumbersP' */
EW_RES_WITHOUT_VARIANTS( ApplicationNumbersP )

/* Font resource : 'Application::NumbersG' */
EW_DEFINE_FONT_RES( ApplicationNumbersG, 18, 4, 0, 16, 0x0016, 0x00BE )
  EW_GLYPH( 0x0016, 0, -18, 11, 22, 11, 0x00000000 ),
  EW_GLYPH( 0x0020, 0, 0, 0, 0, 11, 0x00000273 ),               /* ' ' */
  EW_GLYPH( 0x0021, 4, -15, 3, 15, 11, 0x00000273 ),            /* '!' */
  EW_GLYPH( 0x0022, 3, -16, 5, 5, 11, 0x000002D5 ),             /* '"' */
  EW_GLYPH( 0x0023, 1, -15, 9, 15, 11, 0x00000302 ),            /* '#' */
  EW_GLYPH( 0x0024, 0, -15, 11, 15, 11, 0x00000452 ),           /* '$' */
  EW_GLYPH( 0x0025, 0, -15, 11, 15, 11, 0x00000645 ),           /* '%' */
  EW_GLYPH( 0x0026, 0, -15, 11, 15, 11, 0x00000865 ),           /* '&' */
  EW_GLYPH( 0x0027, 4, -16, 3, 5, 11, 0x00000A30 ),             /* ''' */
  EW_GLYPH( 0x0028, 2, -17, 7, 22, 11, 0x00000A4D ),            /* '(' */
  EW_GLYPH( 0x0029, 2, -17, 7, 22, 11, 0x00000B7D ),            /* ')' */
  EW_GLYPH( 0x002A, 1, -16, 9, 10, 11, 0x00000CA7 ),            /* '*' */
  EW_GLYPH( 0x002B, 1, -12, 9, 8, 11, 0x00000DDA ),             /* '+' */
  EW_GLYPH( 0x002C, 4, -3, 3, 6, 11, 0x00000E8D ),              /* ',' */
  EW_GLYPH( 0x002D, 0, -8, 11, 2, 11, 0x00000EBF ),             /* '-' */
  EW_GLYPH( 0x002E, 4, -3, 3, 3, 11, 0x00000F29 ),              /* '.' */
  EW_GLYPH( 0x002F, 0, -15, 11, 15, 11, 0x00000F49 ),           /* '/' */
  EW_GLYPH( 0x0030, 0, -15, 11, 15, 11, 0x0000109A ),           /* '0' */
  EW_GLYPH( 0x0031, 0, -15, 11, 15, 11, 0x00001287 ),           /* '1' */
  EW_GLYPH( 0x0032, 0, -15, 11, 15, 11, 0x0000139F ),           /* '2' */
  EW_GLYPH( 0x0033, 0, -15, 11, 15, 11, 0x00001568 ),           /* '3' */
  EW_GLYPH( 0x0034, 0, -15, 11, 15, 11, 0x0000173E ),           /* '4' */
  EW_GLYPH( 0x0035, 0, -15, 11, 15, 11, 0x000018E0 ),           /* '5' */
  EW_GLYPH( 0x0036, 0, -15, 11, 15, 11, 0x00001ABF ),           /* '6' */
  EW_GLYPH( 0x0037, 0, -15, 11, 15, 11, 0x00001C6C ),           /* '7' */
  EW_GLYPH( 0x0038, 0, -15, 11, 15, 11, 0x00001E15 ),           /* '8' */
  EW_GLYPH( 0x0039, 0, -15, 11, 15, 11, 0x00002014 ),           /* '9' */
  EW_GLYPH( 0x003A, 4, -9, 3, 9, 11, 0x000021D7 ),              /* ':' */
  EW_GLYPH( 0x003B, 4, -10, 3, 13, 11, 0x0000222C ),            /* ';' */
  EW_GLYPH( 0x003C, 2, -14, 7, 12, 11, 0x00002298 ),            /* '<' */
  EW_GLYPH( 0x003D, 1, -11, 9, 6, 11, 0x00002393 ),             /* '=' */
  EW_GLYPH( 0x003E, 2, -14, 7, 12, 11, 0x00002475 ),            /* '>' */
  EW_GLYPH( 0x003F, 0, -15, 11, 15, 11, 0x00002570 ),           /* '?' */
  EW_GLYPH( 0x0040, 1, -12, 9, 16, 11, 0x00002716 ),            /* '@' */
  EW_GLYPH( 0x0041, 0, -15, 11, 15, 11, 0x000028E4 ),           /* 'A' */
  EW_GLYPH( 0x0042, 0, -15, 11, 15, 11, 0x00002AB1 ),           /* 'B' */
  EW_GLYPH( 0x0043, 1, -15, 9, 15, 11, 0x00002C6C ),            /* 'C' */
  EW_GLYPH( 0x0044, 0, -15, 11, 15, 11, 0x00002DA6 ),           /* 'D' */
  EW_GLYPH( 0x0045, 0, -15, 11, 15, 11, 0x00002EF8 ),           /* 'E' */
  EW_GLYPH( 0x0046, 0, -15, 11, 15, 11, 0x0000307C ),           /* 'F' */
  EW_GLYPH( 0x0047, 0, -15, 11, 15, 11, 0x000031D1 ),           /* 'G' */
  EW_GLYPH( 0x0048, 0, -15, 11, 15, 11, 0x0000335F ),           /* 'H' */
  EW_GLYPH( 0x0049, 0, -15, 11, 15, 11, 0x0000345A ),           /* 'I' */
  EW_GLYPH( 0x004A, 1, -15, 9, 15, 11, 0x000035B5 ),            /* 'J' */
  EW_GLYPH( 0x004B, 0, -15, 11, 15, 11, 0x000036C8 ),           /* 'K' */
  EW_GLYPH( 0x004C, 0, -15, 11, 15, 11, 0x00003849 ),           /* 'L' */
  EW_GLYPH( 0x004D, 0, -15, 11, 15, 11, 0x00003939 ),           /* 'M' */
  EW_GLYPH( 0x004E, 0, -15, 11, 15, 11, 0x00003ACF ),           /* 'N' */
  EW_GLYPH( 0x004F, 0, -15, 11, 15, 11, 0x00003C1D ),           /* 'O' */
  EW_GLYPH( 0x0050, 0, -15, 11, 15, 11, 0x00003DA0 ),           /* 'P' */
  EW_GLYPH( 0x0051, 0, -15, 11, 18, 11, 0x00003F0A ),           /* 'Q' */
  EW_GLYPH( 0x0052, 0, -15, 11, 15, 11, 0x000040E5 ),           /* 'R' */
  EW_GLYPH( 0x0053, 0, -15, 11, 15, 11, 0x00004262 ),           /* 'S' */
  EW_GLYPH( 0x0054, 1, -15, 9, 15, 11, 0x00004458 ),            /* 'T' */
  EW_GLYPH( 0x0055, 0, -15, 11, 15, 11, 0x00004544 ),           /* 'U' */
  EW_GLYPH( 0x0056, 0, -15, 11, 15, 11, 0x00004667 ),           /* 'V' */
  EW_GLYPH( 0x0057, 0, -15, 11, 15, 11, 0x0000481D ),           /* 'W' */
  EW_GLYPH( 0x0058, 0, -15, 11, 15, 11, 0x00004A01 ),           /* 'X' */
  EW_GLYPH( 0x0059, 0, -15, 11, 15, 11, 0x00004BD6 ),           /* 'Y' */
  EW_GLYPH( 0x005A, 0, -15, 11, 15, 11, 0x00004D54 ),           /* 'Z' */
  EW_GLYPH( 0x005B, 2, -17, 7, 22, 11, 0x00004F30 ),            /* '[' */
  EW_GLYPH( 0x005C, 0, -15, 11, 15, 11, 0x00005034 ),           /* '\' */
  EW_GLYPH( 0x005D, 2, -17, 7, 22, 11, 0x0000517F ),            /* ']' */
  EW_GLYPH( 0x005E, 0, -15, 11, 7, 11, 0x00005283 ),            /* '^' */
  EW_GLYPH( 0x005F, 0, 3, 11, 2, 11, 0x00005350 ),              /* '_' */
  EW_GLYPH( 0x0060, 2, -15, 5, 3, 11, 0x000053BE ),             /* '`' */
  EW_GLYPH( 0x0061, 0, -12, 11, 12, 11, 0x0000540E ),           /* 'a' */
  EW_GLYPH( 0x0062, 0, -16, 11, 16, 11, 0x00005590 ),           /* 'b' */
  EW_GLYPH( 0x0063, 0, -12, 11, 12, 11, 0x000056EF ),           /* 'c' */
  EW_GLYPH( 0x0064, 0, -16, 11, 16, 11, 0x0000583A ),           /* 'd' */
  EW_GLYPH( 0x0065, 0, -12, 11, 12, 11, 0x00005990 ),           /* 'e' */
  EW_GLYPH( 0x0066, 0, -16, 11, 16, 11, 0x00005B46 ),           /* 'f' */
  EW_GLYPH( 0x0067, 0, -12, 11, 17, 11, 0x00005CA0 ),           /* 'g' */
  EW_GLYPH( 0x0068, 0, -16, 11, 16, 11, 0x00005E67 ),           /* 'h' */
  EW_GLYPH( 0x0069, 0, -16, 11, 16, 11, 0x00005F7F ),           /* 'i' */
  EW_GLYPH( 0x006A, 2, -16, 8, 21, 11, 0x000060DA ),            /* 'j' */
  EW_GLYPH( 0x006B, 0, -16, 11, 16, 11, 0x00006229 ),           /* 'k' */
  EW_GLYPH( 0x006C, 0, -16, 11, 16, 11, 0x000063A2 ),           /* 'l' */
  EW_GLYPH( 0x006D, 0, -12, 11, 12, 11, 0x000064DB ),           /* 'm' */
  EW_GLYPH( 0x006E, 0, -12, 11, 12, 11, 0x000065C2 ),           /* 'n' */
  EW_GLYPH( 0x006F, 0, -12, 11, 12, 11, 0x000066B0 ),           /* 'o' */
  EW_GLYPH( 0x0070, 0, -12, 11, 17, 11, 0x000067FE ),           /* 'p' */
  EW_GLYPH( 0x0071, 0, -12, 11, 17, 11, 0x00006977 ),           /* 'q' */
  EW_GLYPH( 0x0072, 1, -12, 9, 12, 11, 0x00006AE8 ),            /* 'r' */
  EW_GLYPH( 0x0073, 0, -12, 11, 12, 11, 0x00006BCB ),           /* 's' */
  EW_GLYPH( 0x0074, 0, -15, 11, 15, 11, 0x00006D99 ),           /* 't' */
  EW_GLYPH( 0x0075, 0, -12, 11, 12, 11, 0x00006EDA ),           /* 'u' */
  EW_GLYPH( 0x0076, 0, -12, 11, 12, 11, 0x00006FB9 ),           /* 'v' */
  EW_GLYPH( 0x0077, 0, -12, 11, 12, 11, 0x0000710D ),           /* 'w' */
  EW_GLYPH( 0x0078, 0, -12, 11, 12, 11, 0x000072B1 ),           /* 'x' */
  EW_GLYPH( 0x0079, 0, -12, 11, 17, 11, 0x00007440 ),           /* 'y' */
  EW_GLYPH( 0x007A, 1, -12, 9, 12, 11, 0x00007628 ),            /* 'z' */
  EW_GLYPH( 0x007B, 2, -17, 7, 22, 11, 0x00007796 ),            /* '{' */
  EW_GLYPH( 0x007C, 4, -17, 3, 22, 11, 0x000078E0 ),            /* '|' */
  EW_GLYPH( 0x007D, 2, -17, 7, 22, 11, 0x00007930 ),            /* '}' */
  EW_GLYPH( 0x007E, 1, -10, 9, 4, 11, 0x00007A84 ),             /* '~' */
  EW_GLYPH( 0x00A0, 0, 0, 0, 0, 11, 0x00007B1D ),
  EW_GLYPH( 0x00A1, 4, -10, 3, 15, 11, 0x00007B1D ),
  EW_GLYPH( 0x00A2, 2, -15, 7, 15, 11, 0x00007B7F ),
  EW_GLYPH( 0x00A3, 1, -15, 9, 15, 11, 0x00007C9A ),
  EW_GLYPH( 0x00A5, 0, -15, 11, 15, 11, 0x00007DEF ),
  EW_GLYPH( 0x00A6, 4, -17, 3, 22, 11, 0x00007FE0 ),
  EW_GLYPH( 0x00A7, 1, -15, 9, 18, 11, 0x00008049 ),
  EW_GLYPH( 0x00A8, 1, -15, 9, 2, 11, 0x0000829A ),
  EW_GLYPH( 0x00A9, 0, -16, 11, 16, 11, 0x000082D6 ),
  EW_GLYPH( 0x00AA, 2, -15, 7, 9, 11, 0x00008507 ),
  EW_GLYPH( 0x00AB, 1, -11, 9, 8, 11, 0x000085FE ),
  EW_GLYPH( 0x00AC, 1, -9, 9, 5, 11, 0x00008726 ),
  EW_GLYPH( 0x00AD, 0, -8, 11, 2, 11, 0x000087BF ),
  EW_GLYPH( 0x00AE, 0, -16, 11, 12, 11, 0x00008829 ),
  EW_GLYPH( 0x00AF, 1, -15, 9, 2, 11, 0x00008A1B ),
  EW_GLYPH( 0x00B0, 2, -16, 7, 9, 11, 0x00008A75 ),
  EW_GLYPH( 0x00B1, 1, -12, 9, 12, 11, 0x00008B4E ),
  EW_GLYPH( 0x00B2, 3, -15, 5, 8, 11, 0x00008C76 ),
  EW_GLYPH( 0x00B3, 3, -15, 5, 9, 11, 0x00008D38 ),
  EW_GLYPH( 0x00B4, 4, -15, 5, 3, 11, 0x00008DFA ),
  EW_GLYPH( 0x00B6, 0, -15, 11, 20, 11, 0x00008E43 ),
  EW_GLYPH( 0x00B7, 4, -9, 3, 3, 11, 0x00008F90 ),
  EW_GLYPH( 0x00B8, 4, 1, 3, 4, 11, 0x00008FB0 ),
  EW_GLYPH( 0x00B9, 3, -15, 5, 9, 11, 0x00008FD8 ),
  EW_GLYPH( 0x00BA, 2, -15, 7, 9, 11, 0x00009044 ),
  EW_GLYPH( 0x00BB, 1, -11, 9, 8, 11, 0x00009115 ),
  EW_GLYPH( 0x00BC, 0, -15, 11, 15, 11, 0x0000923A ),
  EW_GLYPH( 0x00BD, 0, -15, 11, 15, 11, 0x00009425 ),
  EW_GLYPH( 0x00BE, 0, -15, 11, 15, 11, 0x00009630 ),
  EW_GLYPH( 0x00BF, 0, -10, 11, 15, 11, 0x0000987B ),
  EW_GLYPH( 0x00C0, 0, -18, 11, 18, 11, 0x00009A01 ),
  EW_GLYPH( 0x00C1, 0, -18, 11, 18, 11, 0x00009C34 ),
  EW_GLYPH( 0x00C2, 0, -17, 11, 17, 11, 0x00009E5E ),
  EW_GLYPH( 0x00C3, 0, -17, 11, 17, 11, 0x0000A07B ),
  EW_GLYPH( 0x00C4, 0, -17, 11, 17, 11, 0x0000A2AA ),
  EW_GLYPH( 0x00C5, 0, -17, 11, 17, 11, 0x0000A4C9 ),
  EW_GLYPH( 0x00C6, 0, -15, 11, 15, 11, 0x0000A6D6 ),
  EW_GLYPH( 0x00C7, 1, -15, 9, 20, 11, 0x0000A881 ),
  EW_GLYPH( 0x00C8, 0, -18, 11, 18, 11, 0x0000AA23 ),
  EW_GLYPH( 0x00C9, 0, -18, 11, 18, 11, 0x0000AC0E ),
  EW_GLYPH( 0x00CA, 0, -17, 11, 17, 11, 0x0000ADF0 ),
  EW_GLYPH( 0x00CB, 0, -17, 11, 17, 11, 0x0000AFBC ),
  EW_GLYPH( 0x00CC, 0, -18, 11, 18, 11, 0x0000B17C ),
  EW_GLYPH( 0x00CD, 0, -18, 11, 18, 11, 0x0000B33E ),
  EW_GLYPH( 0x00CE, 0, -17, 11, 17, 11, 0x0000B4F7 ),
  EW_GLYPH( 0x00CF, 0, -17, 11, 17, 11, 0x0000B69A ),
  EW_GLYPH( 0x00D0, 0, -15, 11, 15, 11, 0x0000B831 ),
  EW_GLYPH( 0x00D1, 0, -17, 11, 17, 11, 0x0000B9B7 ),
  EW_GLYPH( 0x00D2, 0, -18, 11, 18, 11, 0x0000BB75 ),
  EW_GLYPH( 0x00D3, 0, -18, 11, 18, 11, 0x0000BD5F ),
  EW_GLYPH( 0x00D4, 0, -17, 11, 17, 11, 0x0000BF40 ),
  EW_GLYPH( 0x00D5, 0, -17, 11, 17, 11, 0x0000C10B ),
  EW_GLYPH( 0x00D6, 0, -17, 11, 17, 11, 0x0000C2F4 ),
  EW_GLYPH( 0x00D7, 2, -12, 7, 8, 11, 0x0000C4B5 ),
  EW_GLYPH( 0x00D8, 0, -16, 11, 17, 11, 0x0000C5AA ),
  EW_GLYPH( 0x00D9, 0, -18, 11, 18, 11, 0x0000C7D6 ),
  EW_GLYPH( 0x00DA, 0, -18, 11, 18, 11, 0x0000C968 ),
  EW_GLYPH( 0x00DB, 0, -17, 11, 17, 11, 0x0000CAF5 ),
  EW_GLYPH( 0x00DC, 0, -17, 11, 17, 11, 0x0000CC70 ),
  EW_GLYPH( 0x00DD, 0, -18, 11, 18, 11, 0x0000CDDB ),
  EW_GLYPH( 0x00DE, 0, -15, 11, 15, 11, 0x0000CFBD ),
  EW_GLYPH( 0x00DF, 0, -16, 11, 16, 11, 0x0000D12A ),
  EW_GLYPH( 0x00E0, 0, -16, 11, 16, 11, 0x0000D2FC ),
  EW_GLYPH( 0x00E1, 0, -16, 11, 16, 11, 0x0000D4F2 ),
  EW_GLYPH( 0x00E2, 0, -16, 11, 16, 11, 0x0000D6E3 ),
  EW_GLYPH( 0x00E3, 0, -16, 11, 16, 11, 0x0000D8F2 ),
  EW_GLYPH( 0x00E4, 0, -16, 11, 16, 11, 0x0000DB13 ),
  EW_GLYPH( 0x00E5, 0, -16, 11, 16, 11, 0x0000DD0F ),
  EW_GLYPH( 0x00E6, 0, -12, 11, 12, 11, 0x0000DEF9 ),
  EW_GLYPH( 0x00E7, 0, -12, 11, 17, 11, 0x0000E0CA ),
  EW_GLYPH( 0x00E8, 0, -16, 11, 16, 11, 0x0000E292 ),
  EW_GLYPH( 0x00E9, 0, -16, 11, 16, 11, 0x0000E4C3 ),
  EW_GLYPH( 0x00EA, 0, -16, 11, 16, 11, 0x0000E6EF ),
  EW_GLYPH( 0x00EB, 0, -16, 11, 16, 11, 0x0000E939 ),
  EW_GLYPH( 0x00EC, 0, -16, 11, 16, 11, 0x0000EB70 ),
  EW_GLYPH( 0x00ED, 0, -16, 11, 16, 11, 0x0000ECF0 ),
  EW_GLYPH( 0x00EE, 0, -16, 11, 16, 11, 0x0000EE6B ),
  EW_GLYPH( 0x00EF, 0, -16, 11, 16, 11, 0x0000F004 ),
  EW_GLYPH( 0x00F0, 0, -16, 11, 16, 11, 0x0000F18A ),
  EW_GLYPH( 0x00F1, 0, -16, 11, 16, 11, 0x0000F33F ),
  EW_GLYPH( 0x00F2, 0, -16, 11, 16, 11, 0x0000F4CE ),
  EW_GLYPH( 0x00F3, 0, -16, 11, 16, 11, 0x0000F692 ),
  EW_GLYPH( 0x00F4, 0, -16, 11, 16, 11, 0x0000F851 ),
  EW_GLYPH( 0x00F5, 0, -16, 11, 16, 11, 0x0000FA2E ),
  EW_GLYPH( 0x00F6, 0, -16, 11, 16, 11, 0x0000FC1D ),
  EW_GLYPH( 0x00F7, 1, -12, 9, 9, 11, 0x0000FDE7 ),
  EW_GLYPH( 0x00F8, 0, -14, 11, 16, 11, 0x0000FEE8 ),
  EW_GLYPH( 0x00F9, 0, -16, 11, 16, 11, 0x000100D9 ),
  EW_GLYPH( 0x00FA, 0, -16, 11, 16, 11, 0x0001022E ),
  EW_GLYPH( 0x00FB, 0, -16, 11, 16, 11, 0x0001037E ),
  EW_GLYPH( 0x00FC, 0, -16, 11, 16, 11, 0x000104EC ),
  EW_GLYPH( 0x00FD, 0, -16, 11, 21, 11, 0x00010647 ),
  EW_GLYPH( 0x00FE, 0, -16, 11, 21, 11, 0x000108A0 ),
  EW_GLYPH( 0x00FF, 0, -16, 11, 21, 11, 0x00010A45 ),

  EW_FONT_PIXEL( ApplicationNumbersG, 0x00010CA9 )              /* ratio 63.16 % */
    0x04444444, 0xCE739CE3, 0x0A8CE739, 0x7C001440, 0xEF7BDEF7, 0xFBF7F78B, 0x8C9CDAFD,
    0xF8F5AAAA, 0x2012FE00, 0x901ED800, 0x587F1EB5, 0x135B5FFF, 0x6F7FE3D9, 0x5809D4C3,
    0x05F1801E, 0x77C00780, 0xFA00000F, 0x133201BF, 0xAAAAB398, 0xDDFCE6AA, 0x0000001F,
    0x88BFBBF0, 0xFEE367D8, 0x00002EFC, 0x7DC43B88, 0xE0000000, 0x7C7BEC77, 0xEEF3F7BF,
    0x9E59BF4F, 0x00013251, 0xF63BF000, 0xFBDFBE3D, 0xDFA7F779, 0x9928CF2C, 0x5C400000,
    0xB9EF0000, 0x55F7BDC7, 0xF7B3EFD3, 0x2A9E19FE, 0x80048C63, 0xCC6004F2, 0xF7BDC738,
    0xB3FBDDE5, 0x6307317F, 0x014B5194, 0x64788004, 0x7B8F7BDC, 0xF7B13C72, 0x37BDECFE,
    0xC6328C63, 0x9B7B9C60, 0xD7B1A8BD, 0x3983C723, 0x0919E9FE, 0x32C1FBF0, 0x3183C622,
    0x91ACFBEE, 0xBFDEFFA8, 0x231C817F, 0xB2B007EA, 0xF09DFFFE, 0x7B6FBE7F, 0x646FCF10,
    0x0231A82C, 0xEA004B70, 0xC4C7FC6F, 0x8F6B3CA3, 0xBDEEFC47, 0xC6AF85F7, 0xA21FEF6F,
    0x81231ADC, 0xA2024001, 0x98DE00FC, 0xEF7BDEF7, 0x7B7E31D0, 0xB8F0F6FA, 0x061A8E35,
    0x00000003, 0xCB00508C, 0xC1A8E35B, 0x4F6FE4FB, 0x7DCF1EDF, 0x77E78000, 0x7C5FD2EE,
    0x5F1AE67B, 0xE105288D, 0x00000002, 0x00000000, 0x00000000, 0xEA1FC300, 0xE11ADE79,
    0x73DBF37B, 0xE62BF3DD, 0x1896FCFE, 0x784ECBF5, 0x00015C14, 0x00000000, 0x00000000,
    0x6C000000, 0x7ABEA315, 0xBC5FDCC6, 0x7794001F, 0x7CDFAC0F, 0xE7446246, 0x8AACFF78,
    0xF6AB2B18, 0x46AA7983, 0xD87AC467, 0x48BF3E4F, 0x4F678D44, 0x201B5F8C, 0x000000EE,
    0xDF63DEEB, 0x9FDEE6BB, 0x6319EF77, 0x008C6794, 0x377FE000, 0xCC90E493, 0x7BDEF7B8,
    0x7B11BDEF, 0xDEF7BDEF, 0x3BE2223B, 0x0FFA001F, 0xF007F390, 0xAB90131B, 0x401F3A01,
    0x3BC02F3E, 0x06A8C01E, 0x55402AE8, 0xC00D7403, 0xF7805E33, 0x06CCC049, 0xC804ADF8,
    0x77BDEF7D, 0x7B3C6727, 0xC8E471B7, 0xC62B8C6F, 0xF19E1658, 0x7F2A0C98, 0xC00F7F00,
    0xF13C04AA, 0x00B13807, 0x560054F1, 0xE2F8C05C, 0x858D5301, 0xCE118E69, 0xE18E5F18,
    0x33F7BD0C, 0xF7BDEE0E, 0x00FDEC0F, 0x0000318C, 0x00000000, 0x00000000, 0x00000000,
    0x306318C0, 0xDEF630C6, 0x0F7BDC8F, 0x7BDEF7FE, 0xF7B3817F, 0x30FA8DFE, 0x557518C6,
    0x000F0600, 0xB404C900, 0xF7BEC691, 0x772E27DE, 0x9F7BDED4, 0xC63D0C61, 0x000C9818,
    0x31800000, 0x046318C6, 0xEF7BDEF6, 0xBDEF715D, 0xD88FDEF7, 0xC5FDEF7B, 0xC6318CD3,
    0x2804DA78, 0x4C000011, 0x0B5C4011, 0xA2A7BDC6, 0x1BFDEC61, 0x546303F1, 0x0312802B,
    0xC3128000, 0x7A8C6318, 0xDEF7B195, 0x0FCF97FB, 0x01FDEEF8, 0x5F800CF9, 0x66B100FC,
    0x201F5E02, 0xC6602566, 0x00D6F00B, 0xBF00B8CC, 0x17CA8051, 0xDEF77C20, 0xF6A7DD4F,
    0xB1B77BDE, 0x6318C62B, 0x000235A4, 0xDEF7BDCF, 0xEE40EF7B, 0x03DEF7BD, 0x0C6318C6,
    0x00000000, 0x7BDEF790, 0xDEF6A97F, 0x8EA7EF7B, 0x318C6318, 0x4400C67E, 0x4800009A,
    0x313C1801, 0xAEA318C6, 0xBDEF6A27, 0x1F9F2FF7, 0xBDEF7FF3, 0x3E6F9177, 0x993DEF7B,
    0x046318F4, 0x000000C1, 0xDEF73800, 0x7B7C167B, 0xD44E8EEF, 0x00B26318, 0x04000000,
    0x1E930303, 0xDF2B3463, 0x4FDEF67C, 0xBDEEB9BE, 0x6F7BDEF7, 0xDEF7BDCD, 0x18C565BB,
    0xF7F18C63, 0x0262A201, 0x7C00AC66, 0x6393C03E, 0x300F8E00, 0x33E0262A, 0x807CB101,
    0xCF809519, 0x03E65401, 0xEF803EB8, 0x87CF7BDC, 0xFEDF8CF5, 0xE9F9A78D, 0x348AD51A,
    0x48002531, 0x39F24B13, 0x358FAE21, 0x6353DCEA, 0x7BDA8DF1, 0x7964F8D7, 0xCAAF18C7,
    0x00049120, 0x39124482, 0x35EA35BC, 0xEDFAA9D2, 0xFD65D55F, 0xFEF7BDEF, 0xF67CEC97,
    0x4E764FDE, 0x668C637E, 0x00018105, 0x93000000, 0xBDE51809, 0xFDF81EF7, 0x03FBDEF7,
    0x0518C639, 0xE4060000, 0x668C6318, 0xF7BDEDF9, 0xFFCDF27E, 0x1D9F63FD, 0xEC444011,
    0xFB1111B3, 0x1FEFFC6C, 0x266EFFC0, 0xC09921C9, 0x7DE1AB00, 0x97FABE2F, 0xE43BCDF8,
    0x29993FDF, 0x03B9FF50, 0xDC89DAE3, 0xADF80F73, 0xF71DEF06, 0x1DEF7BDE, 0xF7BDEF63,
    0x6318C3DE, 0x1800318C, 0xEF7BDEF7, 0xBDEF631D, 0x0063DEF7, 0x5F7DC0BD, 0x307D7FA8,
    0xF205FCEE, 0x39089FEF, 0x25FF3D89, 0x3D8C3BB7, 0x07EBD277, 0xEF7105F7, 0x8FDEF7BD,
    0xFDEF7BD8, 0x318CD3E5, 0x267E78C6, 0x00008940, 0xE2008960, 0x7BBF9055, 0x7DE0FE46,
    0x01FFBDBE, 0x00633EF5, 0x09FE0051, 0xE73C0120, 0xFD400004, 0x9EF7BDEF, 0xF7BDADE7,
    0x8F73ABDE, 0x09D8C631, 0x0FBDEF00, 0xB00DFCE4, 0x300016B2, 0x4E318033, 0xBDEC1F7D,
    0xC630DEF7, 0x0C400318, 0xBDEF7AC0, 0xFEFBDEF7, 0xEF7BDEF7, 0x1DEF718D, 0xF80A1940,
    0x6581FCFB, 0x239102C5, 0xF4CA0332, 0xAEDBF828, 0x31E90C3F, 0x1E18F1E0, 0x6320C88C,
    0x6F7BC8F0, 0xDEE6B87A, 0x3D94DA7B, 0x4896D8C6, 0xC3C65313, 0x7B9EA0C0, 0x7EF7BDEF,
    0x5FEF7B01, 0x8C630D3E, 0x89600B6A, 0x24001801, 0x027B4409, 0x1A53DEF7, 0x1CBBDEF6,
    0xD78C6318, 0x134C8018, 0x134C8000, 0x8D7A8C63, 0xAFF7BD81, 0x7B9D61C6, 0x69F7BDEF,
    0xEF7BDEEF, 0xC631CD63, 0x0006D318, 0x00000000, 0x00000000, 0x6B1C0DA6, 0x78C6318E,
    0xBDEF7796, 0xDEF7B8F7, 0xE02FEF7B, 0xEA37FBDB, 0xAEA31A83, 0x0120C00A, 0x00000098,
    0x00000000, 0x01300000, 0x518D4083, 0xBDBE2557, 0x713EA37F, 0xDEF7BDEF, 0xF7BD037B,
    0x72077BDE, 0x00C6318C, 0x00000000, 0xBDEEF800, 0x7BDE8077, 0x8C7201EF, 0x00000031,
    0xC6390000, 0xEF406318, 0x11DEF7BD, 0xEF7BDEF7, 0xEEF037BD, 0x81DEF7BD, 0xC6318C67,
    0x00000000, 0xF7D80000, 0x7780FBDE, 0x3C0BBDEF, 0x00118C63, 0x00000000, 0xEEF80000,
    0xCBDEF7BD, 0xEF6FE4FB, 0xD74B37BD, 0x110C6318, 0x00030016, 0xF7800000, 0xFC037BDE,
    0x31C806F6, 0x400C0000, 0xF4B00584, 0xF780C633, 0x8DEF6FC9, 0xEF705EE7, 0x00000003,
    0x00000000, 0xF7BDEE00, 0xBDEF7B02, 0x18C63181, 0x00000000, 0xC4000000, 0x7BDEF7BD,
    0x7BD88DEF, 0x1DEF630F, 0x1ACB18C6, 0x00000063, 0x00000000, 0x00000000, 0x8C000000,
    0xC6359631, 0x61EF7B10, 0x7183BDEC, 0x32F7BDEF, 0x182FDEF6, 0x00003C63, 0x00000000,
    0x00000000, 0x318E4A00, 0xDF5E78C6, 0xCFEF7BDE, 0x40DEE35C, 0x4C603FDF, 0x0D627007,
    0x40D1CDE0, 0xBE4038CD, 0x359B813A, 0xBC006901, 0x8ACC00E6, 0x58C6F00B, 0x01BD7C80,
    0x803F1958, 0xE7803CF6, 0x01BDC6D1, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x6318D400, 0xDEDF018C, 0x9E3DEF7B, 0xBDD6177B, 0xC0FE0E0F, 0x91220983, 0x23211901,
    0x0F4C7A61, 0x388D23FC, 0x03FFAF20, 0x7026693C, 0x1181791E, 0x7E981223, 0x89E3201E,
    0x00F93C00, 0xDEE784A4, 0xF07DEF05, 0xC0059001, 0x012A1805, 0xFC01F4BF, 0x3119804C,
    0xE00FA601, 0x1F200633, 0x06B1C01F, 0xC01446A0, 0x40660027, 0xBDEF7BEE, 0x7EA3393B,
    0x18E357FB, 0x5EA357C3, 0xC8194C63, 0x00000134, 0x00000000, 0x00000000, 0x9A440CA6,
    0xD46AF863, 0xD4670C67, 0x1C6AFF6F, 0xEF7BDEE3, 0xF6F81FBD, 0x42F3E5FE, 0x016D518D,
    0x0000623C, 0x02418000, 0xEE702AD1, 0x7C2F953D, 0x4FFDEF7B, 0x00C631A8, 0x00000000,
    0xEF7DC800, 0x672777BD, 0x6AFF6FD4, 0x6B78631C, 0x298C6BD4, 0x00269913, 0x00000000,
    0x00000000, 0x8194C000, 0x5F0C734C, 0xE18D7A8D, 0x5FEDFA8C, 0x7BEE438D, 0xE04EEE33,
    0x7B30098B, 0xDEF7B9E0, 0xE02FEF7B, 0xF597FBDB, 0xAD518D41, 0x00245002, 0xD1024900,
    0xF7B9C09E, 0xEDF07C54, 0xA868CBFD, 0x0267EA31, 0x20C04894, 0x00000000, 0xF7BDDFC8,
    0xF538BBDE, 0x9EF7BDEC, 0x318DF872, 0x045308C6, 0x24B00180, 0xE01A18C0, 0x9EF7BAE6,
    0xBDFF192F, 0x0E79EFF7, 0x33EA318C, 0x004C1012, 0x1C8F0600, 0x4F6A8C63, 0xFBDEF778,
    0xF73F3CF7, 0xBDEF7BDE, 0x18FDEF77, 0xC631EF7B, 0x0018C6B0, 0x00000000, 0x00000000,
    0x00000000, 0xF83FDCF0, 0x000007DF, 0x00000000, 0x00000000, 0x00000000, 0xC8194C18,
    0x8DF0C730, 0x9C31AF51, 0xAAFF7B51, 0xDC17BA8E, 0x0C0C3CFB, 0x4783D22A, 0x2C707286,
    0xF36181AE, 0x1878F078, 0x06232111, 0x81E98F1E, 0xFC061861, 0xA1FDFDFD, 0x6441534C,
    0x2B00C8C6, 0x8EFE02CA, 0xE14A503F, 0xF758177F, 0xCD705D3F, 0x1A642010, 0x18473860,
    0x96910877, 0x12E4B1E9, 0xD3308EFE, 0x2230D290, 0x2229ACC2, 0x91FF1CA4, 0xD32A6592,
    0xD8C8ED22, 0x723C6392, 0x4F4AA438, 0x90E38209, 0xEE236FFC, 0xAF133F09, 0xC3C46615,
    0x78E987E3, 0x546F12B2, 0x7962171E, 0x29F8146B, 0x0149902F, 0x9AE04C95, 0xDF2A303E,
    0x8F5E07CC, 0x3E3E41CF, 0x54FC1A8F, 0xE589F2CA, 0x73C56FE0, 0x5B9C40EF, 0x64542A4F,
    0x7C70FC79, 0xC78A467C, 0xE2A3CB24, 0x1CFDFC09, 0xF18C6607, 0xC4E58164, 0x26327C07,
    0x80055230, 0x00000001, 0xEE300000, 0x7BDEF7BD, 0xEF7B18EF, 0x348B77BD, 0x6C6318C6,
    0xA2A78033, 0xAC05ED01, 0xABC405CC, 0x078C6F01, 0x1D01A9C8, 0x3478C055, 0x3C01CDA0,
    0xAB403F15, 0x618C6318, 0xBDEF67A4, 0xDEEB1EF7, 0xEE62EF7B, 0x8C6727BD, 0x00000011,
    0x00000000, 0x00000000, 0x00000000, 0x982318CE, 0xDFE9EF7B, 0x00337E00, 0x77803666,
    0x0D93C025, 0xA8049FA0, 0x1AE802F1, 0xA00D5500, 0xD3C600AB, 0x003C7A00, 0x3A00BCF9,
    0x9FAE4027, 0x77BDEF75, 0x24F7BDCD, 0x000718C6, 0x00000000, 0x00000000, 0x00000000,
    0x318C4000, 0x3DEF730E, 0x7AC01301, 0xBE7AA017, 0xF7EBF205, 0x2D4E12FD, 0x1F3E0EAB,
    0x07559F3E, 0x8C635A9C, 0x6318C631, 0xDEF7BD8C, 0x77BDEF7B, 0x7D6293F5, 0xFE73FFFF,
    0x7BFF1FBF, 0x85FFBDEF, 0x33DEF7B3, 0x18C6307B, 0x900265E3, 0xBDCEB000, 0xC7645EF7,
    0x2C6F7BDC, 0x06318EF9, 0x00348012, 0xC631E896, 0xF6B1BE40, 0xBDCF1BDE, 0x00000001,
    0xEF738000, 0xDBE0BBBD, 0xA0F8D77B, 0x062D18C6, 0x04005920, 0x00000000, 0x2C900200,
    0x15E318D4, 0xFBDEDF03, 0x77E31F19, 0xDEF7BDEF, 0xF6FC6B70, 0xE1877BDE, 0x18C631AB,
    0x00000182, 0x00000000, 0x62006000, 0xC631CDF8, 0x77CADC18, 0x0077BDEF, 0x0001DEE2,
    0xD8C00000, 0xE07BDEF7, 0x7F7BDA8C, 0x8C63D4C8, 0x00009042, 0x00000000, 0x0B0400C0,
    0x319FA990, 0x6FC8CE0A, 0x7FEA0FEF, 0x3CF7BDEF, 0xEF7B597C, 0xF42A2FCF, 0xE279E318,
    0x00521209, 0x1659000C, 0x1FF7BDCE, 0xBDEDF133, 0x1A85FFF7, 0x18248C63, 0x8D742780,
    0xCBF10631, 0xDEF7B7E7, 0xEF7D8C03, 0x18CE03BD, 0x4607BDBF, 0x16031AEA, 0x7F7B8C0F,
    0xEC67FB9C, 0x60FB7CDD, 0x00C6A48C, 0x00000000, 0x00000000, 0x00000000, 0xEF7BDF6A,
    0x8DF1F7BD, 0x61FDEDFA, 0x0A31AE84, 0x0004048B, 0x00000000, 0x00C58002, 0x8C63D08C,
    0xBD9F2F82, 0xBFF507F7, 0x0003DEF7, 0x31899200, 0x60C573C6, 0x91BFBDEC, 0x00DEE79F,
    0x00000000, 0xDEF7B9C0, 0xEF6F84FF, 0xA89BE4FD, 0x00B34631, 0x00000009, 0x00000000,
    0x00000000, 0x003FDFF8, 0x00D9F600, 0xEF710111, 0xB107F7BD, 0x31801EF7, 0x000002C6,
    0x00000000, 0x80000000, 0xC6B2C631, 0x3DEF6218, 0xC077BD8C, 0x40006F7B, 0x1110139F,
    0xDEF7BDEE, 0x27BDEF6B, 0x00E318C6, 0x00000000, 0x00000000, 0xAE000000, 0x1E78C634,
    0x1BFBDECB, 0x037B9ED5, 0x00000000, 0x036FB000, 0xE069E37E, 0x3580FAAD, 0x9D980FC7,
    0x00EB407F, 0x3D003A3C, 0x138C03F2, 0x59FC80D5, 0x7E59E00F, 0x4E23D003, 0xBDEF7B8C,
    0xF7BD8C2F, 0x16318C00, 0x00000000, 0x00000000, 0x00000000, 0xC0000000, 0x63196318,
    0x3DEF630C, 0x58EF7B3C, 0xEF7BDEF7, 0x67B90B3D, 0x303D19EE, 0x0132F18E, 0x00000252,
    0x00000000, 0x00000000, 0x7BDEF73C, 0xF84FFDEF, 0x764FDEF6, 0x2D18C6A0, 0x0012401E,
    0x00000000, 0x00000000, 0xB9D60000, 0x967BDEF7, 0xDEF6B1D1, 0xE8947A2B, 0x62874631,
    0x07000180, 0x00000000, 0x06018700, 0x4631DE25, 0x731D1A87, 0xC7A2BDEF, 0x7BDEF7BA,
    0xDEC27FEF, 0x9BE4F7FB, 0xC7D46318, 0x00012002, 0x00000000, 0xC6240000, 0x6165E318,
    0x7667BDEF, 0xEF7BDEE2, 0x0000017F, 0xB5000000, 0xDEF7BDEF, 0x7EA37C3B, 0xA1187F7B,
    0x12028C6B, 0x00000000, 0x40000000, 0x31E84602, 0xB597C146, 0xFEA0FEF7, 0x007BDEF7,
    0x00000000, 0xB9DF9E00, 0xBF3BDEF7, 0xEF7BDBF9, 0x319E79FD, 0x02E918C6, 0x00000001,
    0x00000000, 0xF7FEB000, 0x6BEF7BDE, 0xDEF6F8F4, 0x7A94FF7B, 0x246318C6, 0x0150C006,
    0xDEE799A8, 0xFDE4CF7B, 0x6FF7BDEF, 0x318E49BC, 0xE00A3D46, 0x8C23800A, 0xCF18C631,
    0xDEF7B152, 0x313A7F7B, 0x00001DEE, 0x377B8C00, 0x631BDEFB, 0xEF7797EF, 0x7878C61D,
    0x000018C6, 0x00000000, 0x00000000, 0x4402B792, 0x3C9BF3E7, 0xFBDC42F7, 0x00000000,
    0x00000000, 0x04000000, 0x31E87809, 0x7CDE2146, 0xD61FDEF6, 0x55DCE03D, 0x46A19122,
    0xCA1C942A, 0x856C56C6, 0xD22279B2, 0x29478508, 0xBFB6D815, 0x8294A50D, 0x07233191,
    0x6C053F28, 0x5F77E369, 0x4A5FDEF0, 0x609AF290, 0x5FC869BA, 0xAB0A721A, 0x21998456,
    0x8A520E53, 0x98309C7F, 0x9A67ACE6, 0x533B91A4, 0xC563B7F2, 0x115A61DF, 0x3E521E51,
    0xDCF2909E, 0xF3273881, 0xD378E8D5, 0x7318F51A, 0x5DAD5C2C, 0xB57F3318, 0x6CA8E806,
    0x5F812300, 0x9EA0BC54, 0xC0F51BF1, 0xCAC6B5AB, 0xE4B9552A, 0x9BDA2F1B, 0xDD406F7D,
    0xF7F051FE, 0xCA85C31B, 0xF230A7E1, 0xCFC511E3, 0x9E7F0E43, 0x9194F891, 0xE391583F,
    0x547881E7, 0x1DE38255, 0x8889E07F, 0x004F2805, 0x8FF003B6, 0x00559007, 0xE3300B9F,
    0x7BDEF701, 0xEF77BDEF, 0x6A1EF7BD, 0x1CC6318C, 0x37B442F1, 0x416397E1, 0xAD782E3D,
    0x30D99D01, 0x4F5C1796, 0x18EE1AC1, 0x6F978C63, 0xE237BDEF, 0xEBBC973D, 0xF7E379B7,
    0x0003CA0C, 0xA0200000, 0x2F5BE42C, 0xBF986C6A, 0x8178F05E, 0x00000000, 0x5F1BC090,
    0xDDEFEA0D, 0x00007DCF, 0x00000000, 0xBCF70000, 0x3B5BFD81, 0x5F2FCF19, 0x00403C78,
    0xC0100000, 0x93ADE032, 0xF56147B0, 0x40F5E26F, 0x00000000, 0x5F518308, 0x7FCDFB34,
    0xE4EF77E1, 0xEDFAA33E, 0x9AC7AC7A, 0xB93DF7F3, 0xE7F7BD36, 0x67D8FF7F, 0xFEEFC447,
    0x00000000, 0x9D400B3C, 0x9DFDF5FB, 0x77EE7B78, 0x1233CCE5, 0x00000000, 0x8E039980,
    0x3DFDF5FD, 0xAFDCF767, 0x92467918, 0xFDEF7BBF, 0xF6FD56F1, 0x6B79657E, 0x0264B48C,
    0xEE000000, 0xB3FDEF27, 0x187DEE5B, 0x000318C9, 0x18C00000, 0xDEE40C63, 0xDEE7EF7B,
    0x4F5BDE44, 0xF2C8F07A, 0xE3E7E1F8, 0x930E4233, 0x02794B2C, 0x077F7F7F, 0x59593C66,
    0x03EBC560, 0x2302653E, 0x4DFF8055, 0xBFF0FF75, 0xFC3FDE69, 0x0FF79A6F, 0x1F67A767,
    0x06318318, 0x00005DCF, 0x000BB9E0, 0x0005DCF0, 0xEF77F200, 0xD746F7BD, 0x3BDEF7B3,
    0x18C63BCA, 0x0F940103, 0xDEF758E8, 0x9E278BFB, 0xEF53F7BD, 0xB46319CF, 0x48D2261A,
    0x0F8F9081, 0xDE737ACB, 0xFC6F5F7B, 0x7A7BDEF7, 0xB68C6319, 0xE5803080, 0x7BDEF759,
    0x7BDCEE3B, 0xC56FBDEF, 0x37B8C3BD, 0x6B132264, 0x42F67B9F, 0x7F6FBFBF, 0xBD99B7BF,
    0x69EAD46A, 0xEB1A6098, 0xE1DEE751, 0xF8EE9159, 0xB30321ED, 0x0000006A, 0x03C40000,
    0xBDC6FA44, 0xCC7AC643, 0xB3C3DEFF, 0x30C72986, 0x8D57B30D, 0xF7E93D5A, 0xF7EFEDF7,
    0xEF7BFF36, 0xDFBD9CBF, 0xCB18C6BC, 0x87BDFFCC, 0x78FEF65F, 0x092C51AC, 0x187BFF1D,
    0x0FBDEF77, 0x3FE49122, 0x77196FC4, 0x8D57FE65, 0x9F73F7FF, 0x1C946B1D, 0xCFFBEA7F,
    0xEB16FBF1, 0xBFF9E3D7, 0xF8C7CF0F, 0xDEF7BAC7, 0x7B9AEF7B, 0x10F7BDEF, 0xC6318C63,
    0xCEF00002, 0x7BDEF7B8, 0x7B11BDEF, 0xDEF7BDEF, 0xF7FF303B, 0xFBFBC13F, 0xC3EFDFED,
    0xF777CCF3, 0xA3DE1E2F, 0xAFBFFAF7, 0xC89C7290, 0xDBBE1E15, 0x9EF49247, 0xC866297F,
    0xF85633B1, 0xBB9A7B7E, 0xC7F9AC7F, 0xDBF859FF, 0x7C43FB77, 0x582F9F67, 0xEF7BDEF7,
    0xBDEF735D, 0xFEB3DEF7, 0xDD7FDEF7, 0xCF477BD8, 0x04F18C67, 0x44880000, 0xDEF757C6,
    0xEF7FE6FA, 0x0EE2267D, 0xEEB00000, 0x6BBDF63D, 0xF779FDEE, 0x7946319E, 0x000008C6,
    0x40007710, 0x18C6318C, 0x7BDEE623, 0xEFE7BDEF, 0xBDDE33DE, 0x08C7379F, 0x6ABCFB9E,
    0x188C4FD7, 0xFF9F7BBF, 0x719EF7BB, 0xF7B119EF, 0xE3231AF3, 0xFBEE7739, 0x8F62BDEC,
    0xFF7BE801, 0x88FBDEEF, 0x6F9F6BA7, 0xE7DBFBC5, 0xDEF7BBE1, 0x7DE3EF7B, 0x82C4EDF0,
    0x0001181A, 0x01180000, 0x2BF00140, 0x09BBF100, 0x00000000, 0x00000000, 0x00000000,
    0xF1110000, 0x5DEF0F9D, 0xE3191E0C, 0x283E30DE, 0x73C00000, 0xEF7B519C, 0xEF7BFF51,
    0xFBBE6EBF, 0x98E69ECD, 0x84000002, 0x7D9F8861, 0xEFFADFB7, 0x912BFFBD, 0xF10BF581,
    0x63FD6A4F, 0x7EC43BAC, 0x7FBEFC76, 0x19E91FF2, 0x3C7AFAD3, 0xFDE7ABFB, 0x12F5F8E6,
    0xAC9BE2FF, 0xC67907FB, 0x88D7A06C, 0xE01AA304, 0x627801BE, 0xFDE37401, 0xC1F35AF2,
    0x6F1DEF6F, 0xBA318E43, 0xC61FFF86, 0x9E80736A, 0x79E17BE9, 0x6E82AD5A, 0xC98AC36E,
    0xBC563BEC, 0x1DEFFF8D, 0xC83FDD6B, 0xEF027393, 0x9EA038CC, 0x00DFA017, 0xDD0058CC,
    0x7EAF3B78, 0xDEF6FC1E, 0x8C721B39, 0x27BDCBD1, 0xDEC7AA31, 0x61BEE1F9, 0x9627858C,
    0xE8FCEE75, 0x7FDF5F1F, 0x18C9315A, 0xE86DE323, 0xBDCF7FBD, 0x5138C1E7, 0x7DC1D77B,
    0x3C48C623, 0xBAEE78B1, 0xF3F6A374, 0x1883E6B7, 0x78DBC4F9, 0x35D55DEE, 0xDFEF7B50,
    0x4631886A, 0x83F38CCF, 0xD02F69E7, 0x8AC2F3CD, 0xDE225669, 0x7E83F7E6, 0x3EFBC44A,
    0xB12F58CF, 0x01E7BF7F, 0x00007DEE, 0x1003CE70, 0x01FC6009, 0x7E30013C, 0x6EF77C03,
    0xDFC9FA17, 0x7E980FFE, 0x02844035, 0x01422000, 0x8C67BF4C, 0xE4FD0631, 0x3BDEF7B7,
    0x10127EA8, 0x81FFFBEB, 0x3F7FFCE7, 0xEF7FFE40, 0xC050CA00, 0x2C0FE7DF, 0x1C88162B,
    0xA6501991, 0x76DFC147, 0x8F4861FD, 0xF0C78F01, 0x19064460, 0x7BDE4783, 0xF735C3D3,
    0xECA6D3DE, 0x44B6C631, 0x1E32989A, 0xE2050606, 0xF9F602E9, 0x6FEF0056, 0xEF8C079F,
    0x432813B7, 0x3F9F7F01, 0x2058ACB0, 0x40664472, 0x7F051E99, 0x2187F5DB, 0x1E3C063D,
    0x191183C3, 0x791E0C64, 0xD70F4DEF, 0x9B4F7BDC, 0xDB18C7B2, 0xCA626912, 0x14181878,
    0x836EFEFA, 0x63B7FB19, 0xDDF6FCC2, 0x286504DF, 0x07F3EFE0, 0x440B1596, 0x280CC88E,
    0x6FE0A3D3, 0xA430FEBB, 0x63C780C7, 0x83223078, 0xEF23C18C, 0x9AE1E9BD, 0x5369EF7B,
    0x5B6318F6, 0x194C4D22, 0x9283030F, 0xFFFBDEFB, 0xEFFC93FF, 0x27FEF67D, 0x81273EC2,
    0xF7F01432, 0x8ACB03F9, 0x64472205, 0x51E99406, 0x7F5DB7F0, 0xC063D218, 0x183C31E3,
    0xE0C64191, 0xF4DEF791, 0xF7BDCD70, 0x8C7B29B4, 0x26912DB1, 0x81878CA6, 0x877B8941,
    0x13206F71, 0xD9FF8899, 0x407F9F77, 0xFBF80A19, 0xC56581FC, 0x32239102, 0x28F4CA03,
    0x3FAEDBF8, 0xE031E90C, 0x8C1E18F1, 0xF06320C8, 0x7A6F7BC8, 0x7BDEE6B8, 0xC63D94DA,
    0x134896D8, 0xC0C3C653, 0xBDEF30A0, 0xAECFB813, 0x2BB3C40B, 0x0FE1BF80, 0xC0FE7DFC,
    0x6780A2B0, 0x31182644, 0x6CA0313D, 0x7A5FC157, 0x863CA1FC, 0x19064642, 0x6F7BC949,
    0xF7B9AE2A, 0x3D8F2E9E, 0x311ED8C6, 0x1E234C4C, 0xFB0F0606, 0xBDEF7BDE, 0xBD9B592F,
    0x0E444FF7, 0x1D2918C6, 0x86002980, 0x40163804, 0x0029804A, 0x3BDCBDD2, 0x7B37B188,
    0x8319E90F, 0x400E9831, 0x6463180A, 0xFF7BD848, 0xBDEF73AC, 0xDDED3EF7, 0xAC7DEF7B,
    0x6318C639, 0x000000DA, 0x00000000, 0xB4C00000, 0x31CD6381, 0xF2CF18C6, 0xD6F7BDEE,
    0xEF7BDEE7, 0xC0177BC5, 0x19007800, 0x4049FAA0, 0x07FFEFAC, 0xFDFFF39E, 0xFF3DEE20,
    0x0DEF7BDF, 0xEF7BDEF4, 0xC631C81D, 0x00000318, 0xE0000000, 0x01DEF7BB, 0x07BDEF7A,
    0x00C631C8, 0x00000000, 0x8C6318E4, 0xDEF7BD01, 0xA788077B, 0x5BE7D80B, 0x7DBFBC01,
    0xFBDEE21E, 0x37B9F6FD, 0xBDEF7BD0, 0x18C72077, 0x00000C63, 0x80000000, 0x077BDEEF,
    0x1EF7BDE8, 0x0318C720, 0x00000000, 0x318C6390, 0x7BDEF406, 0xFBE81DEF, 0xEC660DBB,
    0xDC498EDF, 0xE7BBEE77, 0xF7BD037B, 0x72077BDE, 0x00C6318C, 0x00000000, 0xBDEEF800,
    0x7BDE8077, 0x8C7201EF, 0x00000031, 0xC6390000, 0xEF406318, 0x21DEF7BD, 0xBDC61DEE,
    0x12644C81, 0x9DDF7327, 0xF7BD0279, 0x72077BDE, 0x00C6318C, 0x00000000, 0xBDEEF800,
    0x7BDE8077, 0x8C7201EF, 0x00000031, 0xC6390000, 0xEF406318, 0x41DEF7BD, 0x588093F5,
    0x3C0FFFDF, 0x41FBFFE7, 0xBFFE7BDC, 0xB11BDEF7, 0xDEC61EF7, 0x96318C3B, 0x0000C635,
    0x00000000, 0x00000000, 0x00000000, 0x6B2C6318, 0xDEF6218C, 0x077BD8C3, 0xD80BA788,
    0xBC015BE7, 0xE21E7DBF, 0xF6FDFBDE, 0xEF6237B9, 0x77BD8C3D, 0x6B2C6318, 0x0000018C,
    0x00000000, 0x00000000, 0x30000000, 0x18D658C6, 0x87BDEC43, 0xF40EF7B1, 0x3306DDFD,
    0x24C76FF6, 0xDDF73BEE, 0x7B11BDF3, 0xBDEC61EF, 0x596318C3, 0x00000C63, 0x00000000,
    0x00000000, 0x80000000, 0xC6B2C631, 0x3DEF6218, 0x8877BD8C, 0x6F71877B, 0xC4991320,
    0x6777DCC9, 0xF7BD889E, 0x61DEF630, 0x31ACB18C, 0x00000006, 0x00000000, 0x00000000,
    0x18C00000, 0x0C635963, 0xC61EF7B1, 0xDEE23BDE, 0xFFBDEF7B, 0x7EF7BD01, 0xC6390FF2,
    0x801E22F8, 0x00000247, 0xF77C9800, 0x1FEF4505, 0x00247248, 0x1E000000, 0x7C631C89,
    0xEF7A0F11, 0xB93F8CFD, 0xFFFFBDEF, 0xDEFFC93F, 0x7A7FEF67, 0x1111A9EE, 0x01F07DEF,
    0x05C00590, 0xBF012A18, 0x4CFC01F4, 0x01311980, 0x33E00FA6, 0x1F1F2006, 0xA006B1C0,
    0x27C01446, 0xEA806600, 0xBEB10127, 0xCE781FFF, 0xB903F7FF, 0xDEF7FFCF, 0xBF519C9D,
    0x8C71ABFD, 0xAF51ABE1, 0x640CA631, 0x0000009A, 0x00000000, 0x00000000, 0xCD220653,
    0xEA357C31, 0xEA338633, 0x0E357FB7, 0xB0174F10, 0x7802B7CF, 0xC83CFB7F, 0x3EDFBF7D,
    0x7EA3393B, 0x18E357FB, 0x5EA357C3, 0xC8194C63, 0x00000134, 0x00000000, 0x00000000,
    0x9A440CA6, 0xD46AF863, 0xD4670C67, 0x1C6AFF6F, 0x0DBBFBE8, 0x8EDFEC66, 0xBEE6FC89,
    0x19C97E7B, 0x1ABFDBF5, 0x1ABE18C7, 0xCA631AF5, 0x0009A640, 0x00000000, 0x00000000,
    0x20653000, 0x57C31CD2, 0x38633EA3, 0x57FB7EA3, 0xDEFB90E3, 0x93FFFFFB, 0xF67DEFFC,
    0xDFF927FE, 0x93B39CFB, 0x7FB7EA33, 0x7C318E35, 0xC635EA35, 0x134C8194, 0x00000000,
    0x00000000, 0xCA600000, 0x8639A440, 0xC67D46AF, 0xF6FD4670, 0xEE21C6AF, 0x81BDC61D,
    0x4462644C, 0x0633BBEE, 0xFF6FD467, 0xF8631C6A, 0x8C6BD46A, 0x26990329, 0x00000000,
    0x00000000, 0x94C00000, 0x0C734881, 0x8CFA8D5F, 0xEDFA8CE1, 0x07238D5F, 0x30FF9E2A,
    0xFFCD77BE, 0xCFD6AFF3, 0x278C7CF7, 0x9CF3CA66, 0x9FCE7375, 0xC3F53E6F, 0x4B38016F,
    0xF7BDEEFE, 0xE35BCB1E, 0x90C577B7, 0x4318D6E5, 0x988314D6, 0x8EF0308C, 0x01FCE402,
    0xE404C6FC, 0x0F1E806C, 0xD00D3C60, 0x751840A3, 0xE06A2981, 0x63507231, 0xA225917C,
    0xE33F7B7E, 0x7BDF6358, 0xD503DDEF, 0x7D62024F, 0x9CF03FFF, 0xCF07EFFF, 0xF4D647FD,
    0x00000FBF, 0x00000000, 0x00000000, 0x00000000, 0x90329830, 0x1BE18E61, 0x38635EA3,
    0x55FEF6A3, 0x2E9E201D, 0x056F9F60, 0x79F6FEF0, 0x53DFEE78, 0x01F7FE23, 0x00000000,
    0x00000000, 0x00000000, 0x53060000, 0x31CC3206, 0x6BD4637C, 0xDED4670C, 0x7D03AABF,
    0x8CC1B77F, 0x7931DBFD, 0xC61DEFEE, 0x000FBBFB, 0x00000000, 0x00000000, 0x00000000,
    0x32983000, 0xE18E6190, 0x635EA31B, 0xFEF6A338, 0xDEE21D55, 0xC81BDC61, 0xF1CF2644,
    0x79DFC61F, 0x00000000, 0x00000000, 0x00000000, 0xC1800000, 0x730C8194, 0xF518DF0C,
    0xB519C31A, 0x00EAAFF7, 0xFB0174F1, 0xF7802B7C, 0x73C3CFB7, 0x386A78EF, 0xA8549EB7,
    0xE1F8F2C8, 0x148CF8F8, 0x4796498F, 0xFBF813C5, 0x18CC0E39, 0xCB02C9E3, 0x64F80F89,
    0x0AA4604C, 0x00000300, 0x60000000, 0x00001BDC, 0xDEE70000, 0xEDF03F7B, 0x85E7CBFD,
    0x0B5EA31A, 0x0000C4A0, 0x04830000, 0xDCE055A2, 0xF85F2A7B, 0x9FFBDEF6, 0x018C6350,
    0xDEFB9800, 0xE52FEF7B, 0x7FBD9E3B, 0x37E28EA3, 0x08C6BD46, 0x00099302, 0xFE0262C0,
    0x77B880C6, 0xF7B105C6, 0xF18C0B8C, 0xA50018C6, 0x29000600, 0xC81E5900, 0xE0355E31,
    0x43EABBDD, 0x310133BD, 0x9E01FFDF, 0x803FDFFB, 0xBFF00F1C, 0x5FFBDEF7, 0x3DEF7B38,
    0x8C6307B3, 0x00265E31, 0xDCEB0009, 0x7645EF7B, 0xC6F7BDAC, 0x18C63D92, 0x00D20048,
    0x18C7A258, 0xDAC6F903, 0x9C806F7B, 0xFFFB016F, 0xFF7A00CE, 0x48D403EF, 0xBDEF7FE0,
    0xF670BFF7, 0x0F667BDE, 0xBC6318C6, 0x0012004C, 0xDEF7B9D6, 0x7B58EC8B, 0x7B258DEF,
    0x0090318C, 0x44B001A4, 0xF206318F, 0xDEF7B58D, 0x0A739D40, 0xE7DCF7D4, 0x5FFF582B,
    0xC60BFEFC, 0xBFF018C0, 0x5FFBDEF7, 0x3DEF7B38, 0x8C6307B3, 0x00265E31, 0xDCEB0009,
    0x7645EF7B, 0xC6F7BDAC, 0x18C63D92, 0x00D20048, 0x18C7A258, 0xDAC6F903, 0x9EF06F7B,
    0x43EE31D3, 0xD9D5FECD, 0xF3D9E1E3, 0xC46F7BD9, 0x7FE018C0, 0xBFF7BDEF, 0x7BDEF670,
    0x18C60F66, 0x004CBC63, 0xB9D60012, 0xEC8BDEF7, 0x8DEF7B58, 0x318C7B25, 0x01A40090,
    0x318F44B0, 0xB58DF206, 0xF710DEF7, 0x40DEE30E, 0xFF113226, 0xFFFE30FF, 0xF7FE0000,
    0x0BFF7BDE, 0x67BDEF67, 0x318C60F6, 0x2004CBC6, 0x7B9D6001, 0x8EC8BDEF, 0x58DEF7B5,
    0x0318C7B2, 0x001A4009, 0x6318F44B, 0x7B58DF20, 0x7BCC0DEF, 0xED6E04EF, 0x011880BA,
    0x82EB75B8, 0xFDE21BFF, 0xF7BD9C2F, 0x3183D99E, 0x132F18C6, 0x75800480, 0x22F7BDEE,
    0x7BDED63B, 0x631EC963, 0x6900240C, 0x63D12C00, 0x637C818C, 0xAC37BDED, 0xF73EEF7B,
    0xAEF730EE, 0x98DF7E31, 0xEAA38C62, 0xB0E07F19, 0xBFF10002, 0x633E43F7, 0xEFADDCE6,
    0x1DEFEFDF, 0x477DEE69, 0x08463380, 0x3D7F0B81, 0x986353D2, 0xBF96EE63, 0x7BBF187D,
    0x86F7BDEF, 0xF7B7E35B, 0x5F0C3BDE, 0x10C6318D, 0x0000000C, 0x00000000, 0xC3001820,
    0x8C6319EF, 0xF6FCADC1, 0xF1877BDE, 0x7BDEF7BB, 0x2EF7806F, 0x0F000600, 0xEF500C80,
    0xF7CC404C, 0xFEE7807F, 0xC7200FF7, 0xEF7FEA03, 0xE23CF7BD, 0x7F7BDACB, 0x1E84F17E,
    0x3C4F3C63, 0x800A4241, 0xC2CB2001, 0x63FEF7B9, 0xF7BDBE26, 0x6350BFFE, 0x0304918C,
    0x31AE84F0, 0xF97E20C6, 0x7BDEF6FC, 0x02DF3900, 0x019DFFF6, 0x07DFFEF4, 0xFEA091A8,
    0xCF7BDEF7, 0xBDACBE23, 0x4F17E7F7, 0xF3C631E8, 0xA42413C4, 0xB2001800, 0xEF7B9C2C,
    0xDBE2663F, 0x0BFFEF7B, 0x4918C635, 0xE84F0030, 0xE20C631A, 0xEF6FCF97, 0x39D407BD,
    0xCF7D40A7, 0xF582BE7D, 0xBFEFC5FF, 0x818C0C60, 0xEF7BDFFA, 0xB2F88F3D, 0x5F9FDEF6,
    0x18C7A13C, 0x904F13CF, 0x00600290, 0xEE70B2C8, 0x8998FFBD, 0xFFBDEF6F, 0x6318D42F,
    0x3C00C124, 0x318C6BA1, 0xBF3E5F88, 0xC41EF7BD, 0x37B8C3BD, 0xC44C8990, 0xFF8C3FFF,
    0xFD40003F, 0x9EF7BDEF, 0x7B597C47, 0x9E2FCFEF, 0xE78C63D0, 0x48482789, 0x64003001,
    0xDEF73859, 0xB7C4CC7F, 0x17FFDEF7, 0x92318C6A, 0xD09E0060, 0xC418C635, 0xDEDF9F2F,
    0x3BD40F7B, 0xFDF31013, 0xFFB9E01F, 0xF1C803FD, 0xEF7BDC40, 0xBDEC41FD, 0xB18C6007,
    0x00000000, 0x00000000, 0x8C600000, 0x8631ACB1, 0x630F7BD8, 0xE7201DEF, 0xBFFEC05B,
    0xFFDE8033, 0x123500FB, 0xEF7BDEE2, 0x3DEF620F, 0x058C6300, 0x00000000, 0x00000000,
    0x8C630000, 0xC4318D65, 0x7B187BDE, 0x739D40EF, 0xDCF7D40A, 0xFF582BE7, 0x0BFEFC5F,
    0xC418C0C6, 0x1FDEF7BD, 0x007BDEC4, 0x000B18C6, 0x00000000, 0x00000000, 0xCB18C600,
    0xBD88631A, 0xDEF630F7, 0xC61DEE21, 0x644C81BD, 0x61FFFE22, 0x0001FFFC, 0xF7BDEF71,
    0x1EF7B107, 0x02C63180, 0x00000000, 0x00000000, 0xC6318000, 0x6218C6B2, 0xBD8C3DEF,
    0xBDEEB077, 0xE627FEF7, 0xF93F7BDE, 0x18C63106, 0xAC06014D, 0x07BDEF73, 0xDEF6B1D9,
    0x18EF161F, 0x000000A3, 0x00000000, 0x30304000, 0x4631E930, 0xB3E6F953, 0x0DF27EF7,
    0xC63A73DE, 0xBFD9A87D, 0x3C3C7B3A, 0xEF7B3E7B, 0x0318188D, 0xDEF7BDCF, 0xBE13FF7B,
    0x1D93F7BD, 0x8B4631A8, 0x00049007, 0x00000000, 0x00000000, 0xCEF50000, 0xFF7CC404,
    0x7FEE7807, 0x3C7200FF, 0xEF7B9D60, 0x1D1967BD, 0xA2BDEF6B, 0x631E8947, 0x18062874,
    0x00007000, 0x70000000, 0xE2506018, 0xA874631D, 0xDEF731D1, 0x9C807A2B, 0xFFFB016F,
    0xFF7A00CE, 0x48D403EF, 0xF7BDCEB0, 0x8E8CB3DE, 0xD15EF7B5, 0x318F44A3, 0x0C03143A,
    0x00003800, 0x38000000, 0xF128300C, 0xD43A318E, 0xEF7B98E8, 0xE7503D15, 0x3DF5029C,
    0xD60AF9F7, 0xFFBF17FF, 0x06303182, 0xDEF7B9D6, 0xB1D1967B, 0x7A2BDEF6, 0x4631E894,
    0x01806287, 0x00000700, 0x87000000, 0xDE250601, 0x1A874631, 0xBDEF731D, 0x39EF07A2,
    0xD43EE31D, 0x3D9D5FEC, 0x9F3D9E1E, 0x0C46F7BD, 0xDCEB018C, 0xCB3DEF7B, 0xEF7B58E8,
    0xF44A3D15, 0x3143A318, 0x038000C0, 0x00000000, 0x8300C380, 0xA318EF12, 0xB98E8D43,
    0x43D15EF7, 0x7B8C3BDC, 0x44C89903, 0xF8C3FFFC, 0xAC0003FF, 0xF7BDEF73, 0xED63A32C,
    0x28F457BD, 0x0E8C63D1, 0x000300C5, 0x0000000E, 0x030E0000, 0x63BC4A0C, 0x3A350E8C,
    0x457BDEE6, 0x0FEEFC0F, 0xE40BF778, 0xEF7BAC48, 0xB9AEF7BD, 0xEF7BDEF7, 0x318C6319,
    0xF80008C6, 0xEEF01FDD, 0x12B10017, 0x9D697FA0, 0xF3BDEF7B, 0xDED63A31, 0x44A3987B,
    0x0C50618F, 0x54602674, 0x0F1DC073, 0x740346A0, 0x0D19E015, 0x3067EC87, 0x463FF228,
    0xEF4D1A87, 0x8887A2BD, 0x9EF7BDFF, 0xA8025F85, 0xE6202677, 0x73C03FFB, 0x9007FBFF,
    0x5EE781E3, 0x001F7B88, 0x00000000, 0x00000000, 0x01208000, 0x28C63D0F, 0xDECF9BC4,
    0xF9C803FB, 0xEFFFB016, 0xFFF7A00C, 0x848D403E, 0x7B885EE7, 0x0000001F, 0x00000000,
    0x80000000, 0x3D0F0120, 0x9BC428C6, 0x03FBDECF, 0xA0539CEA, 0x5F3EE7BE, 0xE2FFFAC1,
    0x06305FF7, 0x17B9E0C6, 0x0007DEE2, 0x00000000, 0x00000000, 0xC0482000, 0x0A318F43,
    0xF7B3E6F1, 0x1DEE20FE, 0x4C81BDC6, 0xFFFE2264, 0x01FFFC61, 0x10BDCF00, 0x00003EF7,
    0x00000000, 0x00000000, 0x1E024100, 0x88518C7A, 0xF7BD9F37, 0x2DF39007, 0x19DFFF60,
    0x7DFFEF40, 0x7D091A80, 0xFEDD406F, 0x1BF7F051, 0xE1CA85C3, 0xE3F230A7, 0x43CFC511,
    0x919E7F0E, 0x3F9194F8, 0xE7E39158, 0x55547881, 0x7F1DE382, 0x058889E0, 0xB6004F28,
    0x078FF003, 0x9F005590, 0x01E3300B, 0x00005EEB, 0xB8000000, 0x9FFBDEF7, 0x3DFEF7B0,
    0x18C626F9, 0x4800B1F5, 0x00000000, 0x00000000, 0x78C63189, 0xEF7BD859, 0xF7B89D99,
    0x005FFBDE, 0x00000000, 0x8C3BDC40, 0xC899037B, 0xC3FFFC44, 0x0003FFF8, 0xBA80DEFA,
    0xEFE0A3FD, 0x950B8637, 0xE4614FC3, 0x9F8A23C7, 0x3CFE1C87, 0x2329F123, 0xC722B07F,
    0xA8F103CF, 0x3BC704AA, 0x1113C0FE, 0x009E500B, 0x1FE0076C, 0x00AB200F, 0xC660173E,
    0x00000003
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
  ViewsText_OnSetFont( &_this->label0, EwLoadResource( &ResourcesFontArial12, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label180, EwLoadResource( &ResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label90, EwLoadResource( &ResourcesFontArial12, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label270, EwLoadResource( &ResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label300, EwLoadResource( &ResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label240, EwLoadResource( &ResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label210, EwLoadResource( &ResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label120, EwLoadResource( &ResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label60, EwLoadResource( &ResourcesFontArial12, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label330, EwLoadResource( &ResourcesFontArial12, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->label30, EwLoadResource( &ResourcesFontArial12, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->label150, EwLoadResource( &ResourcesFontArial12, 
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
  ChartsCoordList__Init( &_this->dados, &_this->_XObject, 0 );
  ChartsCoordList__Init( &_this->dadosmirror, &_this->_XObject, 0 );
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
  ViewsLine__Init( &_this->linha_t_1, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_t_2, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_t_3, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_fr_0, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_fr_1, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_fr_2, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_fr_3, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_fr_4, &_this->_XObject, 0 );
  CoreOutline__Init( &_this->JanelaG, &_this->_XObject, 0 );
  ChartsGraph__Init( &_this->grafico, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->borda, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationFreq );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0008 );
  ChartsCoordList_OnSetMaxNoOfItems( &_this->dados, 480 );
  ChartsCoordList_OnSetMaxNoOfItems( &_this->dadosmirror, 480 );
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
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_t_1, _Const005E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_t_1, _Const005F );
  ViewsLine_OnSetWidth( &_this->linha_t_1, 1 );
  ViewsLine_OnSetColor( &_this->linha_t_1, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_t_2, _Const0061 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_t_2, _Const0062 );
  ViewsLine_OnSetWidth( &_this->linha_t_2, 1 );
  ViewsLine_OnSetColor( &_this->linha_t_2, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_t_3, _Const0063 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_t_3, _Const0064 );
  ViewsLine_OnSetWidth( &_this->linha_t_3, 1 );
  ViewsLine_OnSetColor( &_this->linha_t_3, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_fr_0, _Const0065 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_fr_0, _Const0066 );
  ViewsLine_OnSetWidth( &_this->linha_fr_0, 1 );
  ViewsLine_OnSetColor( &_this->linha_fr_0, _Const004B );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_fr_1, _Const0067 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_fr_1, _Const0068 );
  ViewsLine_OnSetWidth( &_this->linha_fr_1, 1 );
  ViewsLine_OnSetColor( &_this->linha_fr_1, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_fr_2, _Const0069 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_fr_2, _Const006A );
  ViewsLine_OnSetWidth( &_this->linha_fr_2, 1 );
  ViewsLine_OnSetColor( &_this->linha_fr_2, _Const004E );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_fr_3, _Const006B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_fr_3, _Const006C );
  ViewsLine_OnSetWidth( &_this->linha_fr_3, 1 );
  ViewsLine_OnSetColor( &_this->linha_fr_3, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_fr_4, _Const006D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_fr_4, _Const006E );
  ViewsLine_OnSetWidth( &_this->linha_fr_4, 1 );
  ViewsLine_OnSetColor( &_this->linha_fr_4, _Const004B );
  CoreRectView__OnSetBounds( &_this->JanelaG, _Const006F );
  CoreOutline_OnSetScrollOffset( &_this->JanelaG, _Const0001 );
  CoreRectView__OnSetBounds( &_this->grafico, _Const0070 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->grafico, 1 );
  ChartsGraph_OnSetLineColor( &_this->grafico, _Const0071 );
  ChartsGraph_OnSetLineWidth( &_this->grafico, 2.000000f );
  ChartsGraph_OnSetDotWidth( &_this->grafico, 0.000000f );
  ChartsGraph_OnSetCoordOrigin( &_this->grafico, _Const0072 );
  ChartsGraph_OnSetPixelPerUnit( &_this->grafico, _Const0073 );
  ChartsGraph_OnSetBackColor( &_this->grafico, _Const0074 );
  ChartsGraph_OnSetHorzGridColor( &_this->grafico, _Const0074 );
  ChartsGraph_OnSetVertGridColor( &_this->grafico, _Const0075 );
  ChartsGraph_OnSetGridDistance( &_this->grafico, _Const0076 );
  CoreRectView__OnSetBounds( &_this->borda, _Const006F );
  _this->valorMeio = 60.000000f;
  _this->deltaUnidades = 2;
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
  CoreGroup__Add( _this, ((CoreView)&_this->linha_t_1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_t_2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_t_3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_fr_0 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_fr_1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_fr_2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_fr_3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_fr_4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->JanelaG ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->grafico ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->borda ), 0 );
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
  ChartsGraph_OnSetCoordinates( &_this->grafico, &_this->dados );
  _this->device = EwGetAutoObject( &ApplicationAutoobjeto, ApplicationClasse );

  /* Call the user defined constructor */
  ApplicationFreq_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Freq' */
void ApplicationFreq__ReInit( ApplicationFreq _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ChartsCoordList__ReInit( &_this->dados );
  ChartsCoordList__ReInit( &_this->dadosmirror );
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
  ViewsLine__ReInit( &_this->linha_t_1 );
  ViewsLine__ReInit( &_this->linha_t_2 );
  ViewsLine__ReInit( &_this->linha_t_3 );
  ViewsLine__ReInit( &_this->linha_fr_0 );
  ViewsLine__ReInit( &_this->linha_fr_1 );
  ViewsLine__ReInit( &_this->linha_fr_2 );
  ViewsLine__ReInit( &_this->linha_fr_3 );
  ViewsLine__ReInit( &_this->linha_fr_4 );
  CoreOutline__ReInit( &_this->JanelaG );
  ChartsGraph__ReInit( &_this->grafico );
  ViewsBorder__ReInit( &_this->borda );
}

/* Finalizer method for the class 'Application::Freq' */
void ApplicationFreq__Done( ApplicationFreq _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationFreq );

  /* Finalize all embedded objects */
  ChartsCoordList__Done( &_this->dados );
  ChartsCoordList__Done( &_this->dadosmirror );
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
  ViewsLine__Done( &_this->linha_t_1 );
  ViewsLine__Done( &_this->linha_t_2 );
  ViewsLine__Done( &_this->linha_t_3 );
  ViewsLine__Done( &_this->linha_fr_0 );
  ViewsLine__Done( &_this->linha_fr_1 );
  ViewsLine__Done( &_this->linha_fr_2 );
  ViewsLine__Done( &_this->linha_fr_3 );
  ViewsLine__Done( &_this->linha_fr_4 );
  CoreOutline__Done( &_this->JanelaG );
  ChartsGraph__Done( &_this->grafico );
  ViewsBorder__Done( &_this->borda );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Freq' */
void ApplicationFreq__Mark( ApplicationFreq _this )
{
  EwMarkObject( &_this->dados );
  EwMarkObject( &_this->dadosmirror );
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
  EwMarkObject( &_this->linha_t_1 );
  EwMarkObject( &_this->linha_t_2 );
  EwMarkObject( &_this->linha_t_3 );
  EwMarkObject( &_this->linha_fr_0 );
  EwMarkObject( &_this->linha_fr_1 );
  EwMarkObject( &_this->linha_fr_2 );
  EwMarkObject( &_this->linha_fr_3 );
  EwMarkObject( &_this->linha_fr_4 );
  EwMarkObject( &_this->JanelaG );
  EwMarkObject( &_this->grafico );
  EwMarkObject( &_this->borda );
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

  ChartsGraph_OnSetPixelPerUnit( &_this->grafico, EwSetPointY( _this->grafico.PixelPerUnit, 
  ( EwGetRectH( _this->grafico.Super2.Bounds ) / 3 ) / _this->deltaUnidades ));
  ViewsText_OnSetString( &_this->val_t_1, EwConcatString( EwNewStringInt((XInt32)(((XFloat)( 
  EwGetRectW( _this->JanelaG.Super1.Bounds ) / 4 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / (XFloat)_this->grafico.PixelPerUnit.X ), 0, 10 ), EwLoadString( 
  &_Const0077 )));
  ViewsText_OnSetString( &_this->val_t_2, EwConcatString( EwNewStringInt((XInt32)(((XFloat)( 
  EwGetRectW( _this->JanelaG.Super1.Bounds ) / 2 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / (XFloat)_this->grafico.PixelPerUnit.X ), 0, 10 ), EwLoadString( 
  &_Const0077 )));
  ViewsText_OnSetString( &_this->val_t_3, EwConcatString( EwNewStringInt((XInt32)(((XFloat)(( 
  3 * EwGetRectW( _this->JanelaG.Super1.Bounds )) / 4 ) * ((XFloat)_this->intervalo.Period 
  / 1000.000000f )) / (XFloat)_this->grafico.PixelPerUnit.X ), 0, 10 ), EwLoadString( 
  &_Const0077 )));
  ViewsText_OnSetString( &_this->val_t_4, EwConcatString( EwNewStringInt((XInt32)(((XFloat)EwGetRectW( 
  _this->JanelaG.Super1.Bounds ) * ((XFloat)_this->intervalo.Period / 1000.000000f 
  )) / (XFloat)_this->grafico.PixelPerUnit.X ), 0, 10 ), EwLoadString( &_Const0077 
  )));
  ViewsText_OnSetString( &_this->val_fr_1, EwConcatString( ApplicationFreq_float2String( 
  _this, _this->valorMeio ), EwLoadString( &_Const0078 )));
  ViewsText_OnSetString( &_this->val_fr_0, EwConcatString( ApplicationFreq_float2String( 
  _this, _this->valorMeio - ((XFloat)( EwGetRectH( _this->grafico.Super2.Bounds 
  ) / 3 ) / (XFloat)_this->grafico.PixelPerUnit.Y )), EwLoadString( &_Const0078 
  )));
  ViewsText_OnSetString( &_this->val_fr_2, EwConcatString( ApplicationFreq_float2String( 
  _this, _this->valorMeio + ((XFloat)( EwGetRectH( _this->grafico.Super2.Bounds 
  ) / 3 ) / (XFloat)_this->grafico.PixelPerUnit.Y )), EwLoadString( &_Const0078 
  )));
}

/* 'C' function for method : 'Application::Freq.plotar()' */
void ApplicationFreq_plotar( ApplicationFreq _this, XObject sender )
{
  XFloat v;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  v = ApplicationClasse_getFreq( _this->device );
  ViewsText_OnSetString( &_this->val_freq, EwConcatString( ApplicationFreq_float2String( 
  _this, v ), EwLoadString( &_Const0078 )));
  v = v - _this->valorMeio;

  if ( !_this->troca )
  {
    ChartsCoordList_AddCoord( &_this->dados, (XFloat)(( -_this->JanelaG.ScrollOffset.X 
    + EwGetRectW( _this->JanelaG.Super1.Bounds )) / _this->grafico.PixelPerUnit.X 
    ), -v );
    ChartsCoordList_AddCoord( &_this->dadosmirror, (XFloat)( -_this->JanelaG.ScrollOffset.X 
    / _this->grafico.PixelPerUnit.X ), -v );
    CoreOutline_OnSetScrollOffset( &_this->JanelaG, EwSetPointX( _this->JanelaG.ScrollOffset, 
    _this->JanelaG.ScrollOffset.X - _this->grafico.PixelPerUnit.X ));
    ChartsGraph_OnSetCoordinates( &_this->grafico, &_this->dados );

    if (( 0 - _this->JanelaG.ScrollOffset.X ) == EwGetRectW( _this->JanelaG.Super1.Bounds 
        ))
    {
      ChartsGraph_OnSetCoordinates( &_this->grafico, &_this->dadosmirror );
      ChartsCoordList_ClearList( &_this->dados );
      CoreOutline_OnSetScrollOffset( &_this->JanelaG, EwSetPointX( _this->JanelaG.ScrollOffset, 
      0 ));
      _this->troca = 1;
    }
  }
  else
  {
    ChartsCoordList_AddCoord( &_this->dadosmirror, (XFloat)(( -_this->JanelaG.ScrollOffset.X 
    + EwGetRectW( _this->JanelaG.Super1.Bounds )) / _this->grafico.PixelPerUnit.X 
    ), -v );
    ChartsCoordList_AddCoord( &_this->dados, (XFloat)( -_this->JanelaG.ScrollOffset.X 
    / _this->grafico.PixelPerUnit.X ), -v );
    CoreOutline_OnSetScrollOffset( &_this->JanelaG, EwSetPointX( _this->JanelaG.ScrollOffset, 
    _this->JanelaG.ScrollOffset.X - _this->grafico.PixelPerUnit.X ));
    ChartsGraph_OnSetCoordinates( &_this->grafico, &_this->dadosmirror );

    if (( 0 - _this->JanelaG.ScrollOffset.X ) == EwGetRectW( _this->JanelaG.Super1.Bounds 
        ))
    {
      ChartsGraph_OnSetCoordinates( &_this->grafico, &_this->dados );
      ChartsCoordList_ClearList( &_this->dadosmirror );
      CoreOutline_OnSetScrollOffset( &_this->JanelaG, EwSetPointX( _this->JanelaG.ScrollOffset, 
      0 ));
      _this->troca = 0;
    }
  }
}

/* 'C' function for method : 'Application::Freq.float2String()' */
XString ApplicationFreq_float2String( ApplicationFreq _this, XFloat arg1 )
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
    dec = ( arg1 + (XFloat)inteiro ) * -1000.000000f;
  }
  else
  {
    inteiro = (XInt32)arg1;
    dec = ( arg1 - (XFloat)inteiro ) * 1000.000000f;
  }

  valor = EwConcatString( valor, EwNewStringInt( inteiro, 0, 10 ));
  valor2 = EwNewStringInt((XInt32)dec, 3, 10 );
  return EwConcatString( EwConcatString( valor, EwLoadString( &_Const0048 )), valor2 
    );
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
  ChartsCoordList__Init( &_this->dados_vermelho, &_this->_XObject, 0 );
  ChartsCoordList__Init( &_this->dadosmirror_vermelho, &_this->_XObject, 0 );
  ChartsCoordList__Init( &_this->dados_amarelo, &_this->_XObject, 0 );
  ChartsCoordList__Init( &_this->dadosmirror_amarelo, &_this->_XObject, 0 );
  ChartsCoordList__Init( &_this->dados_verde, &_this->_XObject, 0 );
  ChartsCoordList__Init( &_this->dadosmirror_verde, &_this->_XObject, 0 );
  CoreTimer__Init( &_this->intervalo, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_m_inf, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_m_meio, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_m_sup, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_ini, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_2, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_3, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_fim, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_T, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_S, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_R, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelUnidades, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_t_1, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_t_2, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_t_3, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_m_0, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_m_1, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_m_2, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_m_3, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_m_4, &_this->_XObject, 0 );
  CoreOutline__Init( &_this->JanelaG, &_this->_XObject, 0 );
  ChartsGraph__Init( &_this->graf_T, &_this->_XObject, 0 );
  ChartsGraph__Init( &_this->graf_S, &_this->_XObject, 0 );
  ChartsGraph__Init( &_this->graf_R, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->borda, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationMag );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0008 );
  ChartsCoordList_OnSetMaxNoOfItems( &_this->dados_vermelho, 480 );
  ChartsCoordList_OnSetMaxNoOfItems( &_this->dadosmirror_vermelho, 480 );
  ChartsCoordList_OnSetMaxNoOfItems( &_this->dados_amarelo, 480 );
  ChartsCoordList_OnSetMaxNoOfItems( &_this->dadosmirror_amarelo, 480 );
  ChartsCoordList_OnSetMaxNoOfItems( &_this->dados_verde, 480 );
  ChartsCoordList_OnSetMaxNoOfItems( &_this->dadosmirror_verde, 480 );
  CoreTimer_OnSetPeriod( &_this->intervalo, 1000 );
  CoreTimer_OnSetEnabled( &_this->intervalo, 1 );
  CoreRectView__OnSetBounds( &_this->val_m_inf, _Const0049 );
  ViewsText_OnSetAlignment( &_this->val_m_inf, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_inf, EwLoadString( &_Const0079 ));
  ViewsText_OnSetColor( &_this->val_m_inf, _Const0015 );
  CoreRectView__OnSetBounds( &_this->val_m_meio, _Const004C );
  ViewsText_OnSetAlignment( &_this->val_m_meio, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_meio, EwLoadString( &_Const007A ));
  ViewsText_OnSetColor( &_this->val_m_meio, _Const0015 );
  CoreRectView__OnSetBounds( &_this->val_m_sup, _Const004F );
  ViewsText_OnSetAlignment( &_this->val_m_sup, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_sup, EwLoadString( &_Const007B ));
  ViewsText_OnSetColor( &_this->val_m_sup, _Const0015 );
  CoreRectView__OnSetBounds( &_this->val_t_ini, _Const0051 );
  ViewsText_OnSetString( &_this->val_t_ini, EwLoadString( &_Const0052 ));
  CoreRectView__OnSetBounds( &_this->val_t_1, _Const0053 );
  ViewsText_OnSetString( &_this->val_t_1, EwLoadString( &_Const0054 ));
  CoreRectView__OnSetBounds( &_this->val_t_2, _Const0055 );
  ViewsText_OnSetString( &_this->val_t_2, EwLoadString( &_Const0056 ));
  CoreRectView__OnSetBounds( &_this->val_t_3, _Const0057 );
  ViewsText_OnSetString( &_this->val_t_3, EwLoadString( &_Const0058 ));
  CoreRectView__OnSetBounds( &_this->val_t_fim, _Const0059 );
  ViewsText_OnSetString( &_this->val_t_fim, EwLoadString( &_Const005A ));
  CoreView_OnSetLayout((CoreView)&_this->val_T, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_T, _Const007C );
  ViewsText_OnSetAlignment( &_this->val_T, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_T, EwLoadString( &_Const007D ));
  ViewsText_OnSetColor( &_this->val_T, Applicationcor_T );
  CoreView_OnSetLayout((CoreView)&_this->val_S, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_S, _Const007E );
  ViewsText_OnSetAlignment( &_this->val_S, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_S, EwLoadString( &_Const007D ));
  ViewsText_OnSetColor( &_this->val_S, Applicationcor_S );
  CoreView_OnSetLayout((CoreView)&_this->val_R, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_R, _Const007F );
  ViewsText_OnSetAlignment( &_this->val_R, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_R, EwLoadString( &_Const007D ));
  ViewsText_OnSetColor( &_this->val_R, Applicationcor_R );
  CoreRectView__OnSetBounds( &_this->labelUnidades, _Const0080 );
  ViewsText_OnSetAutoSize( &_this->labelUnidades, 0 );
  ViewsText_OnSetAlignment( &_this->labelUnidades, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelUnidades, EwLoadString( &_Const0081 ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_t_1, _Const005E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_t_1, _Const005F );
  ViewsLine_OnSetWidth( &_this->linha_t_1, 1 );
  ViewsLine_OnSetColor( &_this->linha_t_1, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_t_2, _Const0061 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_t_2, _Const0062 );
  ViewsLine_OnSetWidth( &_this->linha_t_2, 1 );
  ViewsLine_OnSetColor( &_this->linha_t_2, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_t_3, _Const0063 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_t_3, _Const0064 );
  ViewsLine_OnSetWidth( &_this->linha_t_3, 1 );
  ViewsLine_OnSetColor( &_this->linha_t_3, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_0, _Const0065 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_0, _Const0066 );
  ViewsLine_OnSetWidth( &_this->linha_m_0, 1 );
  ViewsLine_OnSetColor( &_this->linha_m_0, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_1, _Const0067 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_1, _Const0068 );
  ViewsLine_OnSetWidth( &_this->linha_m_1, 1 );
  ViewsLine_OnSetColor( &_this->linha_m_1, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_2, _Const0069 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_2, _Const006A );
  ViewsLine_OnSetWidth( &_this->linha_m_2, 1 );
  ViewsLine_OnSetColor( &_this->linha_m_2, _Const0015 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_3, _Const006B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_3, _Const006C );
  ViewsLine_OnSetWidth( &_this->linha_m_3, 1 );
  ViewsLine_OnSetColor( &_this->linha_m_3, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_4, _Const006D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_4, _Const006E );
  ViewsLine_OnSetWidth( &_this->linha_m_4, 1 );
  ViewsLine_OnSetColor( &_this->linha_m_4, _Const0060 );
  CoreRectView__OnSetBounds( &_this->JanelaG, _Const006F );
  CoreOutline_OnSetScrollOffset( &_this->JanelaG, _Const0001 );
  CoreRectView__OnSetBounds( &_this->graf_T, _Const0070 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->graf_T, 1 );
  ChartsGraph_OnSetLineColor( &_this->graf_T, Applicationcor_T );
  ChartsGraph_OnSetLineWidth( &_this->graf_T, 2.000000f );
  ChartsGraph_OnSetDotWidth( &_this->graf_T, 0.000000f );
  ChartsGraph_OnSetCoordOrigin( &_this->graf_T, _Const0072 );
  ChartsGraph_OnSetPixelPerUnit( &_this->graf_T, _Const0082 );
  ChartsGraph_OnSetBackColor( &_this->graf_T, _Const0074 );
  ChartsGraph_OnSetHorzGridColor( &_this->graf_T, _Const0074 );
  ChartsGraph_OnSetVertGridColor( &_this->graf_T, _Const0075 );
  ChartsGraph_OnSetGridDistance( &_this->graf_T, _Const0076 );
  CoreRectView__OnSetBounds( &_this->graf_S, _Const0070 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->graf_S, 1 );
  ChartsGraph_OnSetLineColor( &_this->graf_S, Applicationcor_S );
  ChartsGraph_OnSetLineWidth( &_this->graf_S, 2.000000f );
  ChartsGraph_OnSetDotWidth( &_this->graf_S, 0.000000f );
  ChartsGraph_OnSetCoordOrigin( &_this->graf_S, _Const0072 );
  ChartsGraph_OnSetPixelPerUnit( &_this->graf_S, _Const0082 );
  ChartsGraph_OnSetBackColor( &_this->graf_S, _Const0074 );
  ChartsGraph_OnSetHorzGridColor( &_this->graf_S, _Const0074 );
  ChartsGraph_OnSetVertGridColor( &_this->graf_S, _Const0075 );
  ChartsGraph_OnSetGridDistance( &_this->graf_S, _Const0076 );
  CoreRectView__OnSetBounds( &_this->graf_R, _Const0070 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->graf_R, 1 );
  ChartsGraph_OnSetLineColor( &_this->graf_R, Applicationcor_R );
  ChartsGraph_OnSetLineWidth( &_this->graf_R, 2.000000f );
  ChartsGraph_OnSetDotWidth( &_this->graf_R, 0.000000f );
  ChartsGraph_OnSetCoordOrigin( &_this->graf_R, _Const0072 );
  ChartsGraph_OnSetPixelPerUnit( &_this->graf_R, _Const0082 );
  ChartsGraph_OnSetBackColor( &_this->graf_R, _Const0074 );
  ChartsGraph_OnSetHorzGridColor( &_this->graf_R, _Const0074 );
  ChartsGraph_OnSetVertGridColor( &_this->graf_R, _Const0075 );
  ChartsGraph_OnSetGridDistance( &_this->graf_R, _Const0076 );
  CoreRectView__OnSetBounds( &_this->borda, _Const006F );
  ViewsBorder_OnSetColor( &_this->borda, _Const0015 );
  _this->valorMeio = 220.000000f;
  _this->deltaUnidades = 20;
  CoreGroup__Add( _this, ((CoreView)&_this->val_m_inf ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_m_meio ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_m_sup ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_ini ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_fim ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_T ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_S ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_R ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelUnidades ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_t_1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_t_2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_t_3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_m_0 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_m_1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_m_2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_m_3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_m_4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->JanelaG ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->graf_T ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->graf_S ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->graf_R ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->borda ), 0 );
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
  ViewsText_OnSetFont( &_this->val_t_fim, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->val_T, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_S, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_R, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->labelUnidades, EwLoadResource( &ApplicationNumbersG, 
  ResourcesFont ));
  ChartsGraph_OnSetCoordinates( &_this->graf_T, &_this->dados_verde );
  ChartsGraph_OnSetCoordinates( &_this->graf_S, &_this->dados_verde );
  ChartsGraph_OnSetCoordinates( &_this->graf_R, &_this->dados_verde );
  _this->device = EwGetAutoObject( &ApplicationAutoobjeto, ApplicationClasse );

  /* Call the user defined constructor */
  ApplicationMag_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Mag' */
void ApplicationMag__ReInit( ApplicationMag _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ChartsCoordList__ReInit( &_this->dados_vermelho );
  ChartsCoordList__ReInit( &_this->dadosmirror_vermelho );
  ChartsCoordList__ReInit( &_this->dados_amarelo );
  ChartsCoordList__ReInit( &_this->dadosmirror_amarelo );
  ChartsCoordList__ReInit( &_this->dados_verde );
  ChartsCoordList__ReInit( &_this->dadosmirror_verde );
  CoreTimer__ReInit( &_this->intervalo );
  ViewsText__ReInit( &_this->val_m_inf );
  ViewsText__ReInit( &_this->val_m_meio );
  ViewsText__ReInit( &_this->val_m_sup );
  ViewsText__ReInit( &_this->val_t_ini );
  ViewsText__ReInit( &_this->val_t_1 );
  ViewsText__ReInit( &_this->val_t_2 );
  ViewsText__ReInit( &_this->val_t_3 );
  ViewsText__ReInit( &_this->val_t_fim );
  ViewsText__ReInit( &_this->val_T );
  ViewsText__ReInit( &_this->val_S );
  ViewsText__ReInit( &_this->val_R );
  ViewsText__ReInit( &_this->labelUnidades );
  ViewsLine__ReInit( &_this->linha_t_1 );
  ViewsLine__ReInit( &_this->linha_t_2 );
  ViewsLine__ReInit( &_this->linha_t_3 );
  ViewsLine__ReInit( &_this->linha_m_0 );
  ViewsLine__ReInit( &_this->linha_m_1 );
  ViewsLine__ReInit( &_this->linha_m_2 );
  ViewsLine__ReInit( &_this->linha_m_3 );
  ViewsLine__ReInit( &_this->linha_m_4 );
  CoreOutline__ReInit( &_this->JanelaG );
  ChartsGraph__ReInit( &_this->graf_T );
  ChartsGraph__ReInit( &_this->graf_S );
  ChartsGraph__ReInit( &_this->graf_R );
  ViewsBorder__ReInit( &_this->borda );
}

/* Finalizer method for the class 'Application::Mag' */
void ApplicationMag__Done( ApplicationMag _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationMag );

  /* Finalize all embedded objects */
  ChartsCoordList__Done( &_this->dados_vermelho );
  ChartsCoordList__Done( &_this->dadosmirror_vermelho );
  ChartsCoordList__Done( &_this->dados_amarelo );
  ChartsCoordList__Done( &_this->dadosmirror_amarelo );
  ChartsCoordList__Done( &_this->dados_verde );
  ChartsCoordList__Done( &_this->dadosmirror_verde );
  CoreTimer__Done( &_this->intervalo );
  ViewsText__Done( &_this->val_m_inf );
  ViewsText__Done( &_this->val_m_meio );
  ViewsText__Done( &_this->val_m_sup );
  ViewsText__Done( &_this->val_t_ini );
  ViewsText__Done( &_this->val_t_1 );
  ViewsText__Done( &_this->val_t_2 );
  ViewsText__Done( &_this->val_t_3 );
  ViewsText__Done( &_this->val_t_fim );
  ViewsText__Done( &_this->val_T );
  ViewsText__Done( &_this->val_S );
  ViewsText__Done( &_this->val_R );
  ViewsText__Done( &_this->labelUnidades );
  ViewsLine__Done( &_this->linha_t_1 );
  ViewsLine__Done( &_this->linha_t_2 );
  ViewsLine__Done( &_this->linha_t_3 );
  ViewsLine__Done( &_this->linha_m_0 );
  ViewsLine__Done( &_this->linha_m_1 );
  ViewsLine__Done( &_this->linha_m_2 );
  ViewsLine__Done( &_this->linha_m_3 );
  ViewsLine__Done( &_this->linha_m_4 );
  CoreOutline__Done( &_this->JanelaG );
  ChartsGraph__Done( &_this->graf_T );
  ChartsGraph__Done( &_this->graf_S );
  ChartsGraph__Done( &_this->graf_R );
  ViewsBorder__Done( &_this->borda );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Mag' */
void ApplicationMag__Mark( ApplicationMag _this )
{
  EwMarkObject( &_this->dados_vermelho );
  EwMarkObject( &_this->dadosmirror_vermelho );
  EwMarkObject( &_this->dados_amarelo );
  EwMarkObject( &_this->dadosmirror_amarelo );
  EwMarkObject( &_this->dados_verde );
  EwMarkObject( &_this->dadosmirror_verde );
  EwMarkObject( &_this->intervalo );
  EwMarkObject( &_this->val_m_inf );
  EwMarkObject( &_this->val_m_meio );
  EwMarkObject( &_this->val_m_sup );
  EwMarkObject( &_this->val_t_ini );
  EwMarkObject( &_this->val_t_1 );
  EwMarkObject( &_this->val_t_2 );
  EwMarkObject( &_this->val_t_3 );
  EwMarkObject( &_this->val_t_fim );
  EwMarkObject( &_this->val_T );
  EwMarkObject( &_this->val_S );
  EwMarkObject( &_this->val_R );
  EwMarkObject( &_this->labelUnidades );
  EwMarkObject( &_this->linha_t_1 );
  EwMarkObject( &_this->linha_t_2 );
  EwMarkObject( &_this->linha_t_3 );
  EwMarkObject( &_this->linha_m_0 );
  EwMarkObject( &_this->linha_m_1 );
  EwMarkObject( &_this->linha_m_2 );
  EwMarkObject( &_this->linha_m_3 );
  EwMarkObject( &_this->linha_m_4 );
  EwMarkObject( &_this->JanelaG );
  EwMarkObject( &_this->graf_T );
  EwMarkObject( &_this->graf_S );
  EwMarkObject( &_this->graf_R );
  EwMarkObject( &_this->borda );
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

  ChartsGraph_OnSetPixelPerUnit( &_this->graf_R, EwSetPointY( _this->graf_R.PixelPerUnit, 
  60 / _this->deltaUnidades ));
  ChartsGraph_OnSetPixelPerUnit( &_this->graf_S, EwSetPointY( _this->graf_S.PixelPerUnit, 
  60 / _this->deltaUnidades ));
  ChartsGraph_OnSetPixelPerUnit( &_this->graf_T, EwSetPointY( _this->graf_T.PixelPerUnit, 
  60 / _this->deltaUnidades ));
  ViewsText_OnSetString( &_this->val_t_1, EwConcatString( EwNewStringInt((XInt32)(( 
  90.000000f * ((XFloat)_this->intervalo.Period / 1000.000000f )) / (XFloat)_this->graf_R.PixelPerUnit.X 
  ), 0, 10 ), EwLoadString( &_Const0077 )));
  ViewsText_OnSetString( &_this->val_t_2, EwConcatString( EwNewStringInt((XInt32)(( 
  180.000000f * ((XFloat)_this->intervalo.Period / 1000.000000f )) / (XFloat)_this->graf_R.PixelPerUnit.X 
  ), 0, 10 ), EwLoadString( &_Const0077 )));
  ViewsText_OnSetString( &_this->val_t_3, EwConcatString( EwNewStringInt((XInt32)(( 
  270.000000f * ((XFloat)_this->intervalo.Period / 1000.000000f )) / (XFloat)_this->graf_R.PixelPerUnit.X 
  ), 0, 10 ), EwLoadString( &_Const0077 )));
  ViewsText_OnSetString( &_this->val_t_fim, EwConcatString( EwNewStringInt((XInt32)(( 
  360.000000f * ((XFloat)_this->intervalo.Period / 1000.000000f )) / (XFloat)_this->graf_R.PixelPerUnit.X 
  ), 0, 10 ), EwLoadString( &_Const0077 )));
  ViewsText_OnSetString( &_this->val_m_meio, EwConcatString( ApplicationMag_float2String( 
  _this, _this->valorMeio ), EwLoadString( &_Const0083 )));
  ViewsText_OnSetString( &_this->val_m_inf, EwConcatString( ApplicationMag_float2String( 
  _this, _this->valorMeio - ( 60.000000f / (XFloat)_this->graf_R.PixelPerUnit.Y 
  )), EwLoadString( &_Const0083 )));
  ViewsText_OnSetString( &_this->val_m_sup, EwConcatString( ApplicationMag_float2String( 
  _this, _this->valorMeio + ( 60.000000f / (XFloat)_this->graf_R.PixelPerUnit.Y 
  )), EwLoadString( &_Const0083 )));
}

/* 'C' function for method : 'Application::Mag.plotar()' */
void ApplicationMag_plotar( ApplicationMag _this, XObject sender )
{
  XFloat verde;
  XFloat amarelo;
  XFloat vermelho;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  verde = ApplicationClasse_getMagR( _this->device );
  amarelo = ApplicationClasse_getMagS( _this->device );
  vermelho = ApplicationClasse_getMagT( _this->device );
  ViewsText_OnSetString( &_this->val_R, ApplicationMag_float2String( _this, verde 
  ));
  ViewsText_OnSetString( &_this->val_S, ApplicationMag_float2String( _this, amarelo 
  ));
  ViewsText_OnSetString( &_this->val_T, ApplicationMag_float2String( _this, vermelho 
  ));
  verde = verde - _this->valorMeio;
  amarelo = amarelo - _this->valorMeio;
  vermelho = vermelho - _this->valorMeio;

  if ( !_this->troca )
  {
    ChartsCoordList_AddCoord( &_this->dados_verde, (XFloat)(( -_this->JanelaG.ScrollOffset.X 
    + EwGetRectW( _this->JanelaG.Super1.Bounds )) / _this->graf_R.PixelPerUnit.X 
    ), -verde );
    ChartsCoordList_AddCoord( &_this->dadosmirror_verde, (XFloat)( -_this->JanelaG.ScrollOffset.X 
    / _this->graf_R.PixelPerUnit.X ), -verde );
    ChartsCoordList_AddCoord( &_this->dados_amarelo, (XFloat)(( -_this->JanelaG.ScrollOffset.X 
    + EwGetRectW( _this->JanelaG.Super1.Bounds )) / _this->graf_S.PixelPerUnit.X 
    ), -amarelo );
    ChartsCoordList_AddCoord( &_this->dadosmirror_amarelo, (XFloat)( -_this->JanelaG.ScrollOffset.X 
    / _this->graf_S.PixelPerUnit.X ), -amarelo );
    ChartsCoordList_AddCoord( &_this->dados_vermelho, (XFloat)(( -_this->JanelaG.ScrollOffset.X 
    + EwGetRectW( _this->JanelaG.Super1.Bounds )) / _this->graf_T.PixelPerUnit.X 
    ), -vermelho );
    ChartsCoordList_AddCoord( &_this->dadosmirror_vermelho, (XFloat)( -_this->JanelaG.ScrollOffset.X 
    / _this->graf_T.PixelPerUnit.X ), -vermelho );
    CoreOutline_OnSetScrollOffset( &_this->JanelaG, EwSetPointX( _this->JanelaG.ScrollOffset, 
    _this->JanelaG.ScrollOffset.X - _this->graf_R.PixelPerUnit.X ));
    ChartsGraph_OnSetCoordinates( &_this->graf_R, &_this->dados_verde );
    ChartsGraph_OnSetCoordinates( &_this->graf_S, &_this->dados_amarelo );
    ChartsGraph_OnSetCoordinates( &_this->graf_T, &_this->dados_vermelho );

    if (( 0 - _this->JanelaG.ScrollOffset.X ) == EwGetRectW( _this->JanelaG.Super1.Bounds 
        ))
    {
      ChartsGraph_OnSetCoordinates( &_this->graf_R, &_this->dadosmirror_verde );
      ChartsCoordList_ClearList( &_this->dados_verde );
      ChartsGraph_OnSetCoordinates( &_this->graf_S, &_this->dadosmirror_amarelo 
      );
      ChartsCoordList_ClearList( &_this->dados_amarelo );
      ChartsGraph_OnSetCoordinates( &_this->graf_T, &_this->dadosmirror_vermelho 
      );
      ChartsCoordList_ClearList( &_this->dados_vermelho );
      CoreOutline_OnSetScrollOffset( &_this->JanelaG, EwSetPointX( _this->JanelaG.ScrollOffset, 
      0 ));
      _this->troca = 1;
    }
  }
  else
  {
    ChartsCoordList_AddCoord( &_this->dadosmirror_verde, (XFloat)(( -_this->JanelaG.ScrollOffset.X 
    + EwGetRectW( _this->JanelaG.Super1.Bounds )) / _this->graf_R.PixelPerUnit.X 
    ), -verde );
    ChartsCoordList_AddCoord( &_this->dados_verde, (XFloat)( -_this->JanelaG.ScrollOffset.X 
    / _this->graf_R.PixelPerUnit.X ), -verde );
    ChartsCoordList_AddCoord( &_this->dadosmirror_amarelo, (XFloat)(( -_this->JanelaG.ScrollOffset.X 
    + EwGetRectW( _this->JanelaG.Super1.Bounds )) / _this->graf_S.PixelPerUnit.X 
    ), -amarelo );
    ChartsCoordList_AddCoord( &_this->dados_amarelo, (XFloat)( -_this->JanelaG.ScrollOffset.X 
    / _this->graf_S.PixelPerUnit.X ), -amarelo );
    ChartsCoordList_AddCoord( &_this->dadosmirror_vermelho, (XFloat)(( -_this->JanelaG.ScrollOffset.X 
    + EwGetRectW( _this->JanelaG.Super1.Bounds )) / _this->graf_T.PixelPerUnit.X 
    ), -vermelho );
    ChartsCoordList_AddCoord( &_this->dados_vermelho, (XFloat)( -_this->JanelaG.ScrollOffset.X 
    / _this->graf_T.PixelPerUnit.X ), -vermelho );
    CoreOutline_OnSetScrollOffset( &_this->JanelaG, EwSetPointX( _this->JanelaG.ScrollOffset, 
    _this->JanelaG.ScrollOffset.X - _this->graf_R.PixelPerUnit.X ));
    ChartsGraph_OnSetCoordinates( &_this->graf_R, &_this->dadosmirror_verde );
    ChartsGraph_OnSetCoordinates( &_this->graf_S, &_this->dadosmirror_amarelo );
    ChartsGraph_OnSetCoordinates( &_this->graf_T, &_this->dadosmirror_vermelho );

    if (( 0 - _this->JanelaG.ScrollOffset.X ) == EwGetRectW( _this->JanelaG.Super1.Bounds 
        ))
    {
      ChartsGraph_OnSetCoordinates( &_this->graf_R, &_this->dados_verde );
      ChartsCoordList_ClearList( &_this->dadosmirror_verde );
      ChartsGraph_OnSetCoordinates( &_this->graf_S, &_this->dados_amarelo );
      ChartsCoordList_ClearList( &_this->dadosmirror_amarelo );
      ChartsGraph_OnSetCoordinates( &_this->graf_T, &_this->dados_vermelho );
      ChartsCoordList_ClearList( &_this->dadosmirror_vermelho );
      CoreOutline_OnSetScrollOffset( &_this->JanelaG, EwSetPointX( _this->JanelaG.ScrollOffset, 
      0 ));
      _this->troca = 0;
    }
  }
}

/* 'C' function for method : 'Application::Mag.float2String()' */
XString ApplicationMag_float2String( ApplicationMag _this, XFloat arg1 )
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
    dec = ( arg1 + (XFloat)inteiro ) * -10.000000f;
  }
  else
  {
    inteiro = (XInt32)arg1;
    dec = ( arg1 - (XFloat)inteiro ) * 10.000000f;
  }

  valor = EwConcatString( valor, EwNewStringInt( inteiro, 0, 10 ));
  valor2 = EwNewStringInt((XInt32)dec, 1, 10 );
  return EwConcatString( EwConcatString( valor, EwLoadString( &_Const0048 )), valor2 
    );
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
  ChartsCoordList__Init( &_this->dados_vermelho, &_this->_XObject, 0 );
  ChartsCoordList__Init( &_this->dadosmirror_vermelho, &_this->_XObject, 0 );
  ChartsCoordList__Init( &_this->dados_amarelo, &_this->_XObject, 0 );
  ChartsCoordList__Init( &_this->dadosmirror_amarelo, &_this->_XObject, 0 );
  ChartsCoordList__Init( &_this->dados_verde, &_this->_XObject, 0 );
  ChartsCoordList__Init( &_this->dadosmirror_verde, &_this->_XObject, 0 );
  CoreTimer__Init( &_this->intervalo, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelFaseInf, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelFaseMeio, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelFaseSup, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_ini, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_1, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_2, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_3, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_t_fim, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_t_1, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_t_2, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_t_3, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_f_0, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_f_1, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_f_2, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_f_3, &_this->_XObject, 0 );
  ViewsLine__Init( &_this->linha_f_4, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_T, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_S, &_this->_XObject, 0 );
  ViewsText__Init( &_this->val_R, &_this->_XObject, 0 );
  ViewsText__Init( &_this->labelUni, &_this->_XObject, 0 );
  CoreOutline__Init( &_this->JanelaG, &_this->_XObject, 0 );
  ChartsGraph__Init( &_this->graf_T, &_this->_XObject, 0 );
  ChartsGraph__Init( &_this->graf_S, &_this->_XObject, 0 );
  ChartsGraph__Init( &_this->graf_R, &_this->_XObject, 0 );
  ViewsBorder__Init( &_this->borda, &_this->_XObject, 0 );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationFase );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0008 );
  ChartsCoordList_OnSetMaxNoOfItems( &_this->dados_vermelho, 480 );
  ChartsCoordList_OnSetMaxNoOfItems( &_this->dadosmirror_vermelho, 480 );
  ChartsCoordList_OnSetMaxNoOfItems( &_this->dados_amarelo, 480 );
  ChartsCoordList_OnSetMaxNoOfItems( &_this->dadosmirror_amarelo, 480 );
  ChartsCoordList_OnSetMaxNoOfItems( &_this->dados_verde, 480 );
  ChartsCoordList_OnSetMaxNoOfItems( &_this->dadosmirror_verde, 480 );
  CoreTimer_OnSetPeriod( &_this->intervalo, 1000 );
  CoreTimer_OnSetEnabled( &_this->intervalo, 1 );
  CoreRectView__OnSetBounds( &_this->labelFaseInf, _Const0049 );
  ViewsText_OnSetAlignment( &_this->labelFaseInf, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelFaseInf, EwLoadString( &_Const0084 ));
  ViewsText_OnSetColor( &_this->labelFaseInf, _Const0015 );
  CoreRectView__OnSetBounds( &_this->labelFaseMeio, _Const004C );
  ViewsText_OnSetAlignment( &_this->labelFaseMeio, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelFaseMeio, EwLoadString( &_Const0085 ));
  ViewsText_OnSetColor( &_this->labelFaseMeio, _Const0015 );
  CoreRectView__OnSetBounds( &_this->labelFaseSup, _Const004F );
  ViewsText_OnSetAlignment( &_this->labelFaseSup, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelFaseSup, EwLoadString( &_Const0086 ));
  ViewsText_OnSetColor( &_this->labelFaseSup, _Const0015 );
  CoreRectView__OnSetBounds( &_this->val_t_ini, _Const0051 );
  ViewsText_OnSetString( &_this->val_t_ini, EwLoadString( &_Const0052 ));
  CoreRectView__OnSetBounds( &_this->val_t_1, _Const0053 );
  ViewsText_OnSetString( &_this->val_t_1, EwLoadString( &_Const0054 ));
  CoreRectView__OnSetBounds( &_this->val_t_2, _Const0055 );
  ViewsText_OnSetString( &_this->val_t_2, EwLoadString( &_Const0056 ));
  CoreRectView__OnSetBounds( &_this->val_t_3, _Const0057 );
  ViewsText_OnSetString( &_this->val_t_3, EwLoadString( &_Const0058 ));
  CoreRectView__OnSetBounds( &_this->val_t_fim, _Const0059 );
  ViewsText_OnSetString( &_this->val_t_fim, EwLoadString( &_Const005A ));
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_t_1, _Const005E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_t_1, _Const005F );
  ViewsLine_OnSetWidth( &_this->linha_t_1, 1 );
  ViewsLine_OnSetColor( &_this->linha_t_1, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_t_2, _Const0061 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_t_2, _Const0062 );
  ViewsLine_OnSetWidth( &_this->linha_t_2, 1 );
  ViewsLine_OnSetColor( &_this->linha_t_2, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_t_3, _Const0063 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_t_3, _Const0064 );
  ViewsLine_OnSetWidth( &_this->linha_t_3, 1 );
  ViewsLine_OnSetColor( &_this->linha_t_3, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_f_0, _Const0065 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_f_0, _Const0066 );
  ViewsLine_OnSetWidth( &_this->linha_f_0, 1 );
  ViewsLine_OnSetColor( &_this->linha_f_0, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_f_1, _Const0067 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_f_1, _Const0068 );
  ViewsLine_OnSetWidth( &_this->linha_f_1, 1 );
  ViewsLine_OnSetColor( &_this->linha_f_1, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_f_2, _Const0069 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_f_2, _Const006A );
  ViewsLine_OnSetWidth( &_this->linha_f_2, 1 );
  ViewsLine_OnSetColor( &_this->linha_f_2, _Const0015 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_f_3, _Const006B );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_f_3, _Const006C );
  ViewsLine_OnSetWidth( &_this->linha_f_3, 1 );
  ViewsLine_OnSetColor( &_this->linha_f_3, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_f_4, _Const006D );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_f_4, _Const006E );
  ViewsLine_OnSetWidth( &_this->linha_f_4, 1 );
  ViewsLine_OnSetColor( &_this->linha_f_4, _Const0060 );
  CoreView_OnSetLayout((CoreView)&_this->val_T, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_T, _Const0087 );
  ViewsText_OnSetAlignment( &_this->val_T, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_T, EwLoadString( &_Const007D ));
  ViewsText_OnSetColor( &_this->val_T, Applicationcor_T );
  CoreView_OnSetLayout((CoreView)&_this->val_S, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_S, _Const0088 );
  ViewsText_OnSetAlignment( &_this->val_S, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_S, EwLoadString( &_Const007D ));
  ViewsText_OnSetColor( &_this->val_S, Applicationcor_S );
  CoreView_OnSetLayout((CoreView)&_this->val_R, CoreLayoutAlignToLeft | CoreLayoutAlignToTop 
  );
  CoreRectView__OnSetBounds( &_this->val_R, _Const0089 );
  ViewsText_OnSetAlignment( &_this->val_R, ViewsTextAlignmentAlignHorzRight | ViewsTextAlignmentAlignVertCenter 
  );
  ViewsText_OnSetString( &_this->val_R, EwLoadString( &_Const007D ));
  ViewsText_OnSetColor( &_this->val_R, Applicationcor_R );
  CoreRectView__OnSetBounds( &_this->labelUni, _Const0080 );
  ViewsText_OnSetAutoSize( &_this->labelUni, 0 );
  ViewsText_OnSetAlignment( &_this->labelUni, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelUni, EwLoadString( &_Const008A ));
  CoreRectView__OnSetBounds( &_this->JanelaG, _Const006F );
  CoreOutline_OnSetScrollOffset( &_this->JanelaG, _Const0001 );
  CoreRectView__OnSetBounds( &_this->graf_T, _Const0070 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->graf_T, 1 );
  ChartsGraph_OnSetLineColor( &_this->graf_T, Applicationcor_T );
  ChartsGraph_OnSetLineWidth( &_this->graf_T, 2.000000f );
  ChartsGraph_OnSetDotWidth( &_this->graf_T, 0.000000f );
  ChartsGraph_OnSetCoordOrigin( &_this->graf_T, _Const0072 );
  ChartsGraph_OnSetPixelPerUnit( &_this->graf_T, _Const0082 );
  ChartsGraph_OnSetBackColor( &_this->graf_T, _Const0074 );
  ChartsGraph_OnSetHorzGridColor( &_this->graf_T, _Const0074 );
  ChartsGraph_OnSetVertGridColor( &_this->graf_T, _Const0075 );
  ChartsGraph_OnSetGridDistance( &_this->graf_T, _Const0076 );
  CoreRectView__OnSetBounds( &_this->graf_S, _Const0070 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->graf_S, 1 );
  ChartsGraph_OnSetLineColor( &_this->graf_S, Applicationcor_S );
  ChartsGraph_OnSetLineWidth( &_this->graf_S, 2.000000f );
  ChartsGraph_OnSetDotWidth( &_this->graf_S, 0.000000f );
  ChartsGraph_OnSetCoordOrigin( &_this->graf_S, _Const0072 );
  ChartsGraph_OnSetPixelPerUnit( &_this->graf_S, _Const0082 );
  ChartsGraph_OnSetBackColor( &_this->graf_S, _Const0074 );
  ChartsGraph_OnSetHorzGridColor( &_this->graf_S, _Const0074 );
  ChartsGraph_OnSetVertGridColor( &_this->graf_S, _Const0075 );
  ChartsGraph_OnSetGridDistance( &_this->graf_S, _Const0076 );
  CoreRectView__OnSetBounds( &_this->graf_R, _Const0070 );
  CoreGroup_OnSetEmbedded((CoreGroup)&_this->graf_R, 1 );
  ChartsGraph_OnSetLineColor( &_this->graf_R, Applicationcor_R );
  ChartsGraph_OnSetLineWidth( &_this->graf_R, 2.000000f );
  ChartsGraph_OnSetDotWidth( &_this->graf_R, 0.000000f );
  ChartsGraph_OnSetCoordOrigin( &_this->graf_R, _Const0072 );
  ChartsGraph_OnSetPixelPerUnit( &_this->graf_R, _Const0082 );
  ChartsGraph_OnSetBackColor( &_this->graf_R, _Const0074 );
  ChartsGraph_OnSetHorzGridColor( &_this->graf_R, _Const0074 );
  ChartsGraph_OnSetVertGridColor( &_this->graf_R, _Const0075 );
  ChartsGraph_OnSetGridDistance( &_this->graf_R, _Const0076 );
  CoreRectView__OnSetBounds( &_this->borda, _Const006F );
  ViewsBorder_OnSetColor( &_this->borda, _Const0015 );
  _this->valorMeio = 0.000000f;
  _this->deltaUnidades = 120;
  CoreGroup__Add( _this, ((CoreView)&_this->labelFaseInf ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelFaseMeio ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelFaseSup ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_ini ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_t_fim ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_t_1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_t_2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_t_3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_f_0 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_f_1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_f_2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_f_3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->linha_f_4 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_T ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_S ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->val_R ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelUni ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->JanelaG ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->graf_T ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->graf_S ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->graf_R ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->borda ), 0 );
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
  ViewsText_OnSetFont( &_this->val_t_fim, EwLoadResource( &ApplicationNumbersP, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->val_T, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_S, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->val_R, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  ViewsText_OnSetFont( &_this->labelUni, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  ChartsGraph_OnSetCoordinates( &_this->graf_T, &_this->dados_verde );
  ChartsGraph_OnSetCoordinates( &_this->graf_S, &_this->dados_verde );
  ChartsGraph_OnSetCoordinates( &_this->graf_R, &_this->dados_verde );
  _this->device = EwGetAutoObject( &ApplicationAutoobjeto, ApplicationClasse );

  /* Call the user defined constructor */
  ApplicationFase_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Fase' */
void ApplicationFase__ReInit( ApplicationFase _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_Super );

  /* ... then re-construct all embedded objects */
  ChartsCoordList__ReInit( &_this->dados_vermelho );
  ChartsCoordList__ReInit( &_this->dadosmirror_vermelho );
  ChartsCoordList__ReInit( &_this->dados_amarelo );
  ChartsCoordList__ReInit( &_this->dadosmirror_amarelo );
  ChartsCoordList__ReInit( &_this->dados_verde );
  ChartsCoordList__ReInit( &_this->dadosmirror_verde );
  CoreTimer__ReInit( &_this->intervalo );
  ViewsText__ReInit( &_this->labelFaseInf );
  ViewsText__ReInit( &_this->labelFaseMeio );
  ViewsText__ReInit( &_this->labelFaseSup );
  ViewsText__ReInit( &_this->val_t_ini );
  ViewsText__ReInit( &_this->val_t_1 );
  ViewsText__ReInit( &_this->val_t_2 );
  ViewsText__ReInit( &_this->val_t_3 );
  ViewsText__ReInit( &_this->val_t_fim );
  ViewsLine__ReInit( &_this->linha_t_1 );
  ViewsLine__ReInit( &_this->linha_t_2 );
  ViewsLine__ReInit( &_this->linha_t_3 );
  ViewsLine__ReInit( &_this->linha_f_0 );
  ViewsLine__ReInit( &_this->linha_f_1 );
  ViewsLine__ReInit( &_this->linha_f_2 );
  ViewsLine__ReInit( &_this->linha_f_3 );
  ViewsLine__ReInit( &_this->linha_f_4 );
  ViewsText__ReInit( &_this->val_T );
  ViewsText__ReInit( &_this->val_S );
  ViewsText__ReInit( &_this->val_R );
  ViewsText__ReInit( &_this->labelUni );
  CoreOutline__ReInit( &_this->JanelaG );
  ChartsGraph__ReInit( &_this->graf_T );
  ChartsGraph__ReInit( &_this->graf_S );
  ChartsGraph__ReInit( &_this->graf_R );
  ViewsBorder__ReInit( &_this->borda );
}

/* Finalizer method for the class 'Application::Fase' */
void ApplicationFase__Done( ApplicationFase _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationFase );

  /* Finalize all embedded objects */
  ChartsCoordList__Done( &_this->dados_vermelho );
  ChartsCoordList__Done( &_this->dadosmirror_vermelho );
  ChartsCoordList__Done( &_this->dados_amarelo );
  ChartsCoordList__Done( &_this->dadosmirror_amarelo );
  ChartsCoordList__Done( &_this->dados_verde );
  ChartsCoordList__Done( &_this->dadosmirror_verde );
  CoreTimer__Done( &_this->intervalo );
  ViewsText__Done( &_this->labelFaseInf );
  ViewsText__Done( &_this->labelFaseMeio );
  ViewsText__Done( &_this->labelFaseSup );
  ViewsText__Done( &_this->val_t_ini );
  ViewsText__Done( &_this->val_t_1 );
  ViewsText__Done( &_this->val_t_2 );
  ViewsText__Done( &_this->val_t_3 );
  ViewsText__Done( &_this->val_t_fim );
  ViewsLine__Done( &_this->linha_t_1 );
  ViewsLine__Done( &_this->linha_t_2 );
  ViewsLine__Done( &_this->linha_t_3 );
  ViewsLine__Done( &_this->linha_f_0 );
  ViewsLine__Done( &_this->linha_f_1 );
  ViewsLine__Done( &_this->linha_f_2 );
  ViewsLine__Done( &_this->linha_f_3 );
  ViewsLine__Done( &_this->linha_f_4 );
  ViewsText__Done( &_this->val_T );
  ViewsText__Done( &_this->val_S );
  ViewsText__Done( &_this->val_R );
  ViewsText__Done( &_this->labelUni );
  CoreOutline__Done( &_this->JanelaG );
  ChartsGraph__Done( &_this->graf_T );
  ChartsGraph__Done( &_this->graf_S );
  ChartsGraph__Done( &_this->graf_R );
  ViewsBorder__Done( &_this->borda );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Fase' */
void ApplicationFase__Mark( ApplicationFase _this )
{
  EwMarkObject( &_this->dados_vermelho );
  EwMarkObject( &_this->dadosmirror_vermelho );
  EwMarkObject( &_this->dados_amarelo );
  EwMarkObject( &_this->dadosmirror_amarelo );
  EwMarkObject( &_this->dados_verde );
  EwMarkObject( &_this->dadosmirror_verde );
  EwMarkObject( &_this->intervalo );
  EwMarkObject( &_this->labelFaseInf );
  EwMarkObject( &_this->labelFaseMeio );
  EwMarkObject( &_this->labelFaseSup );
  EwMarkObject( &_this->val_t_ini );
  EwMarkObject( &_this->val_t_1 );
  EwMarkObject( &_this->val_t_2 );
  EwMarkObject( &_this->val_t_3 );
  EwMarkObject( &_this->val_t_fim );
  EwMarkObject( &_this->linha_t_1 );
  EwMarkObject( &_this->linha_t_2 );
  EwMarkObject( &_this->linha_t_3 );
  EwMarkObject( &_this->linha_f_0 );
  EwMarkObject( &_this->linha_f_1 );
  EwMarkObject( &_this->linha_f_2 );
  EwMarkObject( &_this->linha_f_3 );
  EwMarkObject( &_this->linha_f_4 );
  EwMarkObject( &_this->val_T );
  EwMarkObject( &_this->val_S );
  EwMarkObject( &_this->val_R );
  EwMarkObject( &_this->labelUni );
  EwMarkObject( &_this->JanelaG );
  EwMarkObject( &_this->graf_T );
  EwMarkObject( &_this->graf_S );
  EwMarkObject( &_this->graf_R );
  EwMarkObject( &_this->borda );
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

  ChartsGraph_OnSetPixelPerUnit( &_this->graf_R, EwSetPointY( _this->graf_R.PixelPerUnit, 
  120 / _this->deltaUnidades ));
  ChartsGraph_OnSetPixelPerUnit( &_this->graf_S, EwSetPointY( _this->graf_S.PixelPerUnit, 
  120 / _this->deltaUnidades ));
  ChartsGraph_OnSetPixelPerUnit( &_this->graf_T, EwSetPointY( _this->graf_T.PixelPerUnit, 
  120 / _this->deltaUnidades ));
  ViewsText_OnSetString( &_this->val_t_1, EwConcatString( EwNewStringInt((XInt32)(( 
  90.000000f * ((XFloat)_this->intervalo.Period / 1000.000000f )) / (XFloat)_this->graf_R.PixelPerUnit.X 
  ), 0, 10 ), EwLoadString( &_Const0077 )));
  ViewsText_OnSetString( &_this->val_t_2, EwConcatString( EwNewStringInt((XInt32)(( 
  180.000000f * ((XFloat)_this->intervalo.Period / 1000.000000f )) / (XFloat)_this->graf_R.PixelPerUnit.X 
  ), 0, 10 ), EwLoadString( &_Const0077 )));
  ViewsText_OnSetString( &_this->val_t_3, EwConcatString( EwNewStringInt((XInt32)(( 
  270.000000f * ((XFloat)_this->intervalo.Period / 1000.000000f )) / (XFloat)_this->graf_R.PixelPerUnit.X 
  ), 0, 10 ), EwLoadString( &_Const0077 )));
  ViewsText_OnSetString( &_this->val_t_fim, EwConcatString( EwNewStringInt((XInt32)(( 
  360.000000f * ((XFloat)_this->intervalo.Period / 1000.000000f )) / (XFloat)_this->graf_R.PixelPerUnit.X 
  ), 0, 10 ), EwLoadString( &_Const0077 )));
  ViewsText_OnSetString( &_this->labelFaseMeio, EwConcatString( ApplicationFase_float2String( 
  _this, _this->valorMeio ), EwLoadString( &_Const008B )));
  ViewsText_OnSetString( &_this->labelFaseInf, EwConcatString( ApplicationFase_float2String( 
  _this, _this->valorMeio - ( 120.000000f / (XFloat)_this->graf_R.PixelPerUnit.Y 
  )), EwLoadString( &_Const008B )));
  ViewsText_OnSetString( &_this->labelFaseSup, EwConcatString( ApplicationFase_float2String( 
  _this, _this->valorMeio + ( 120.000000f / (XFloat)_this->graf_R.PixelPerUnit.Y 
  )), EwLoadString( &_Const008B )));
}

/* 'C' function for method : 'Application::Fase.plotar()' */
void ApplicationFase_plotar( ApplicationFase _this, XObject sender )
{
  XFloat verde;
  XFloat amarelo;
  XFloat vermelho;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  verde = ApplicationClasse_getFaseR( _this->device );
  amarelo = ApplicationClasse_getFaseS( _this->device );
  vermelho = ApplicationClasse_getFaseT( _this->device );
  ViewsText_OnSetString( &_this->val_R, ApplicationFase_float2String( _this, verde 
  ));
  ViewsText_OnSetString( &_this->val_S, ApplicationFase_float2String( _this, amarelo 
  ));
  ViewsText_OnSetString( &_this->val_T, ApplicationFase_float2String( _this, vermelho 
  ));
  verde = ( verde - _this->valorMeio ) / 2.000000f;
  amarelo = ( amarelo - _this->valorMeio ) / 2.000000f;
  vermelho = ( vermelho - _this->valorMeio ) / 2.000000f;

  if ( !_this->troca )
  {
    ChartsCoordList_AddCoord( &_this->dados_verde, (XFloat)(( -_this->JanelaG.ScrollOffset.X 
    + EwGetRectW( _this->JanelaG.Super1.Bounds )) / _this->graf_R.PixelPerUnit.X 
    ), -verde );
    ChartsCoordList_AddCoord( &_this->dadosmirror_verde, (XFloat)( -_this->JanelaG.ScrollOffset.X 
    / _this->graf_R.PixelPerUnit.X ), -verde );
    ChartsCoordList_AddCoord( &_this->dados_amarelo, (XFloat)(( -_this->JanelaG.ScrollOffset.X 
    + EwGetRectW( _this->JanelaG.Super1.Bounds )) / _this->graf_S.PixelPerUnit.X 
    ), -amarelo );
    ChartsCoordList_AddCoord( &_this->dadosmirror_amarelo, (XFloat)( -_this->JanelaG.ScrollOffset.X 
    / _this->graf_S.PixelPerUnit.X ), -amarelo );
    ChartsCoordList_AddCoord( &_this->dados_vermelho, (XFloat)(( -_this->JanelaG.ScrollOffset.X 
    + EwGetRectW( _this->JanelaG.Super1.Bounds )) / _this->graf_T.PixelPerUnit.X 
    ), -vermelho );
    ChartsCoordList_AddCoord( &_this->dadosmirror_vermelho, (XFloat)( -_this->JanelaG.ScrollOffset.X 
    / _this->graf_T.PixelPerUnit.X ), -vermelho );
    CoreOutline_OnSetScrollOffset( &_this->JanelaG, EwSetPointX( _this->JanelaG.ScrollOffset, 
    _this->JanelaG.ScrollOffset.X - _this->graf_R.PixelPerUnit.X ));
    ChartsGraph_OnSetCoordinates( &_this->graf_R, &_this->dados_verde );
    ChartsGraph_OnSetCoordinates( &_this->graf_S, &_this->dados_amarelo );
    ChartsGraph_OnSetCoordinates( &_this->graf_T, &_this->dados_vermelho );

    if (( 0 - _this->JanelaG.ScrollOffset.X ) == EwGetRectW( _this->JanelaG.Super1.Bounds 
        ))
    {
      ChartsGraph_OnSetCoordinates( &_this->graf_R, &_this->dadosmirror_verde );
      ChartsCoordList_ClearList( &_this->dados_verde );
      ChartsGraph_OnSetCoordinates( &_this->graf_S, &_this->dadosmirror_amarelo 
      );
      ChartsCoordList_ClearList( &_this->dados_amarelo );
      ChartsGraph_OnSetCoordinates( &_this->graf_T, &_this->dadosmirror_vermelho 
      );
      ChartsCoordList_ClearList( &_this->dados_vermelho );
      CoreOutline_OnSetScrollOffset( &_this->JanelaG, EwSetPointX( _this->JanelaG.ScrollOffset, 
      0 ));
      _this->troca = 1;
    }
  }
  else
  {
    ChartsCoordList_AddCoord( &_this->dadosmirror_verde, (XFloat)(( -_this->JanelaG.ScrollOffset.X 
    + EwGetRectW( _this->JanelaG.Super1.Bounds )) / _this->graf_R.PixelPerUnit.X 
    ), -verde );
    ChartsCoordList_AddCoord( &_this->dados_verde, (XFloat)( -_this->JanelaG.ScrollOffset.X 
    / _this->graf_R.PixelPerUnit.X ), -verde );
    ChartsCoordList_AddCoord( &_this->dadosmirror_amarelo, (XFloat)(( -_this->JanelaG.ScrollOffset.X 
    + EwGetRectW( _this->JanelaG.Super1.Bounds )) / _this->graf_S.PixelPerUnit.X 
    ), -amarelo );
    ChartsCoordList_AddCoord( &_this->dados_amarelo, (XFloat)( -_this->JanelaG.ScrollOffset.X 
    / _this->graf_S.PixelPerUnit.X ), -amarelo );
    ChartsCoordList_AddCoord( &_this->dadosmirror_vermelho, (XFloat)(( -_this->JanelaG.ScrollOffset.X 
    + EwGetRectW( _this->JanelaG.Super1.Bounds )) / _this->graf_T.PixelPerUnit.X 
    ), -vermelho );
    ChartsCoordList_AddCoord( &_this->dados_vermelho, (XFloat)( -_this->JanelaG.ScrollOffset.X 
    / _this->graf_T.PixelPerUnit.X ), -vermelho );
    CoreOutline_OnSetScrollOffset( &_this->JanelaG, EwSetPointX( _this->JanelaG.ScrollOffset, 
    _this->JanelaG.ScrollOffset.X - _this->graf_R.PixelPerUnit.X ));
    ChartsGraph_OnSetCoordinates( &_this->graf_R, &_this->dadosmirror_verde );
    ChartsGraph_OnSetCoordinates( &_this->graf_S, &_this->dadosmirror_amarelo );
    ChartsGraph_OnSetCoordinates( &_this->graf_T, &_this->dadosmirror_vermelho );

    if (( 0 - _this->JanelaG.ScrollOffset.X ) == EwGetRectW( _this->JanelaG.Super1.Bounds 
        ))
    {
      ChartsGraph_OnSetCoordinates( &_this->graf_R, &_this->dados_verde );
      ChartsCoordList_ClearList( &_this->dadosmirror_verde );
      ChartsGraph_OnSetCoordinates( &_this->graf_S, &_this->dados_amarelo );
      ChartsCoordList_ClearList( &_this->dadosmirror_amarelo );
      ChartsGraph_OnSetCoordinates( &_this->graf_T, &_this->dados_vermelho );
      ChartsCoordList_ClearList( &_this->dadosmirror_vermelho );
      CoreOutline_OnSetScrollOffset( &_this->JanelaG, EwSetPointX( _this->JanelaG.ScrollOffset, 
      0 ));
      _this->troca = 0;
    }
  }
}

/* 'C' function for method : 'Application::Fase.float2String()' */
XString ApplicationFase_float2String( ApplicationFase _this, XFloat arg1 )
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
    dec = ( arg1 + (XFloat)inteiro ) * -10.000000f;
  }
  else
  {
    inteiro = (XInt32)arg1;
    dec = ( arg1 - (XFloat)inteiro ) * 10.000000f;
  }

  valor = EwConcatString( valor, EwNewStringInt( inteiro, 0, 10 ));
  valor2 = EwNewStringInt((XInt32)dec, 1, 10 );
  return EwConcatString( EwConcatString( valor, EwLoadString( &_Const0048 )), valor2 
    );
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
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_10, _Const008C );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_10, _Const008D );
  ViewsLine_OnSetWidth( &_this->linha_h_10, 1 );
  ViewsLine_OnSetColor( &_this->linha_h_10, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_20, _Const008E );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_20, _Const008F );
  ViewsLine_OnSetWidth( &_this->linha_h_20, 1 );
  ViewsLine_OnSetColor( &_this->linha_h_20, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_30, _Const0061 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_30, _Const0090 );
  ViewsLine_OnSetWidth( &_this->linha_h_30, 1 );
  ViewsLine_OnSetColor( &_this->linha_h_30, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_h_40, _Const0091 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_h_40, _Const0092 );
  ViewsLine_OnSetWidth( &_this->linha_h_40, 1 );
  ViewsLine_OnSetColor( &_this->linha_h_40, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_25, _Const0093 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_25, _Const0094 );
  ViewsLine_OnSetWidth( &_this->linha_m_25, 1 );
  ViewsLine_OnSetColor( &_this->linha_m_25, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_50, _Const0095 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_50, _Const0096 );
  ViewsLine_OnSetWidth( &_this->linha_m_50, 1 );
  ViewsLine_OnSetColor( &_this->linha_m_50, _Const0060 );
  CoreLineView_OnSetPoint2((CoreLineView)&_this->linha_m_75, _Const0097 );
  CoreLineView_OnSetPoint1((CoreLineView)&_this->linha_m_75, _Const006E );
  ViewsLine_OnSetWidth( &_this->linha_m_75, 1 );
  ViewsLine_OnSetColor( &_this->linha_m_75, _Const0060 );
  CoreRectView__OnSetBounds( &_this->val_h_10, _Const0098 );
  ViewsText_OnSetString( &_this->val_h_10, EwLoadString( &_Const0099 ));
  CoreRectView__OnSetBounds( &_this->val_h_20, _Const009A );
  ViewsText_OnSetString( &_this->val_h_20, EwLoadString( &_Const009B ));
  CoreRectView__OnSetBounds( &_this->val_h_30, _Const009C );
  ViewsText_OnSetString( &_this->val_h_30, EwLoadString( &_Const002B ));
  CoreRectView__OnSetBounds( &_this->val_h_40, _Const009D );
  ViewsText_OnSetString( &_this->val_h_40, EwLoadString( &_Const009E ));
  CoreRectView__OnSetBounds( &_this->val_m_25, _Const009F );
  ViewsText_OnSetAlignment( &_this->val_m_25, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_25, EwLoadString( &_Const00A0 ));
  CoreRectView__OnSetBounds( &_this->val_m_50, _Const00A1 );
  ViewsText_OnSetAlignment( &_this->val_m_50, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_50, EwLoadString( &_Const00A2 ));
  CoreRectView__OnSetBounds( &_this->val_m_75, _Const00A3 );
  ViewsText_OnSetAlignment( &_this->val_m_75, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->val_m_75, EwLoadString( &_Const00A4 ));
  CoreRectView__OnSetBounds( &_this->graf_FFT, _Const00A5 );
  CoreGroup__OnSetOpacity( &_this->graf_FFT, 255 );
  ChartsGraph_OnSetLineColor( &_this->graf_FFT, Applicationcor_R );
  ChartsGraph_OnSetDotColor( &_this->graf_FFT, _Const004B );
  ChartsGraph_OnSetDotWidth( &_this->graf_FFT, 0.000000f );
  ChartsGraph_OnSetCoordOrigin( &_this->graf_FFT, _Const00A6 );
  ChartsGraph_OnSetPixelPerUnit( &_this->graf_FFT, _Const00A7 );
  ChartsGraph_OnSetBackColor( &_this->graf_FFT, _Const00A8 );
  ChartsGraph_OnSetHorzGridColor( &_this->graf_FFT, _Const00A9 );
  ChartsGraph_OnSetVertGridColor( &_this->graf_FFT, _Const00A9 );
  CoreRectView__OnSetBounds( &_this->borda, _Const00A5 );
  ViewsBorder_OnSetColor( &_this->borda, _Const0015 );
  CoreTimer_OnSetEnabled( &_this->intervalo, 1 );
  CoreRectView__OnSetBounds( &_this->botao_R, _Const00AA );
  ApplicationModifiedButton_OnSetCaption( &_this->botao_R, EwLoadString( &_Const00AB 
  ));
  ApplicationModifiedButton_OnSetItemColor( &_this->botao_R, FlatColorOfTouch );
  ApplicationModifiedButton_OnSetItemColorActive( &_this->botao_R, Applicationcor_R 
  );
  CoreRectView__OnSetBounds( &_this->botao_S, _Const00AC );
  ApplicationModifiedButton_OnSetCaption( &_this->botao_S, EwLoadString( &_Const00AD 
  ));
  ApplicationModifiedButton_OnSetItemColor( &_this->botao_S, FlatColorOfDisabled 
  );
  ApplicationModifiedButton_OnSetItemColorActive( &_this->botao_S, Applicationcor_S 
  );
  CoreRectView__OnSetBounds( &_this->botao_T, _Const00AE );
  ApplicationModifiedButton_OnSetCaption( &_this->botao_T, EwLoadString( &_Const00AF 
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

/* Initializer for the class 'Application::VNC' */
void ApplicationVNC__Init( ApplicationVNC _this, XObject aLink, XHandle aArg )
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

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationVNC );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00B0 );
  CoreRectView__OnSetBounds( &_this->Message, _Const00B1 );
  ViewsText_OnSetString( &_this->Message, EwLoadString( &_Const00B2 ));
  ViewsText_OnSetColor( &_this->Message, _Const0015 );
  CoreRectView__OnSetBounds( &_this->BStart, _Const00B3 );
  ApplicationModifiedButton_OnSetCaption( &_this->BStart, EwLoadString( &_Const00B4 
  ));
  CoreRectView__OnSetBounds( &_this->labelMsg, _Const00B5 );
  ViewsText_OnSetAlignment( &_this->labelMsg, ViewsTextAlignmentAlignHorzLeft | 
  ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelMsg, EwLoadString( &_Const00B6 ));
  CoreRectView__OnSetBounds( &_this->labelState, _Const00B7 );
  ViewsText_OnSetAlignment( &_this->labelState, ViewsTextAlignmentAlignHorzLeft 
  | ViewsTextAlignmentAlignVertCenter );
  ViewsText_OnSetString( &_this->labelState, EwLoadString( &_Const00B8 ));
  CoreRectView__OnSetBounds( &_this->Status, _Const00B9 );
  ViewsText_OnSetString( &_this->Status, EwLoadString( &_Const00BA ));
  ViewsText_OnSetColor( &_this->Status, _Const0015 );
  CoreRectView__OnSetBounds( &_this->BStop, _Const00BB );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->BStop, 0 );
  ApplicationModifiedButton_OnSetCaption( &_this->BStop, EwLoadString( &_Const00BC 
  ));
  CoreGroup__Add( _this, ((CoreView)&_this->Message ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BStart ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelMsg ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->labelState ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Status ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BStop ), 0 );
  ViewsText_OnSetFont( &_this->Message, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  _this->LogMessageHandler.OnEvent = EwNewSlot( _this, ApplicationVNC_LogMessage 
  );
  CoreSystemEventHandler_OnSetEvent( &_this->LogMessageHandler, &EwGetAutoObject( 
  &ApplicationAutoobjeto, ApplicationClasse )->LogMessageEvent );
  _this->BStart.OnAction = EwNewSlot( _this, ApplicationVNC_startVNC );
  _this->device = EwGetAutoObject( &ApplicationAutoobjeto, ApplicationClasse );
  ViewsText_OnSetFont( &_this->labelMsg, EwLoadResource( &ResourcesFontVerdana20, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->labelState, EwLoadResource( &ResourcesFontVerdana20, 
  ResourcesFont ));
  ViewsText_OnSetFont( &_this->Status, EwLoadResource( &ApplicationNumbersG, ResourcesFont 
  ));
  _this->StatusChangedHandler.OnEvent = EwNewSlot( _this, ApplicationVNC_StatusChange 
  );
  CoreSystemEventHandler_OnSetEvent( &_this->StatusChangedHandler, &EwGetAutoObject( 
  &ApplicationAutoobjeto, ApplicationClasse )->StatusChangedEvent );
  _this->BStop.OnAction = EwNewSlot( _this, ApplicationVNC_stopVNC );
}

/* Re-Initializer for the class 'Application::VNC' */
void ApplicationVNC__ReInit( ApplicationVNC _this )
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
}

/* Finalizer method for the class 'Application::VNC' */
void ApplicationVNC__Done( ApplicationVNC _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationVNC );

  /* Finalize all embedded objects */
  ViewsText__Done( &_this->Message );
  CoreSystemEventHandler__Done( &_this->LogMessageHandler );
  ApplicationModifiedButton__Done( &_this->BStart );
  ViewsText__Done( &_this->labelMsg );
  ViewsText__Done( &_this->labelState );
  ViewsText__Done( &_this->Status );
  CoreSystemEventHandler__Done( &_this->StatusChangedHandler );
  ApplicationModifiedButton__Done( &_this->BStop );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::VNC' */
void ApplicationVNC__Mark( ApplicationVNC _this )
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
void ApplicationVNC_UpdateLayout( ApplicationVNC _this, XPoint aSize )
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
void ApplicationVNC_UpdateViewState( ApplicationVNC _this, XSet aState )
{
  CoreGroup_UpdateViewState((CoreGroup)_this, aState );
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void ApplicationVNC_LogMessage( ApplicationVNC _this, XObject sender )
{
  ApplicationcontextoMsg ctxRecebido;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ctxRecebido = EwCastObject( _this->LogMessageHandler.Context, ApplicationcontextoMsg 
  );
  ViewsText_OnSetString( &_this->Message, ctxRecebido->message );
}

/* 'C' function for method : 'Application::VNC.startVNC()' */
void ApplicationVNC_startVNC( ApplicationVNC _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationClasse_startVNC( _this->device );
}

/* This slot method is executed when the associated system event handler 'SystemEventHandler' 
   receives an event. */
void ApplicationVNC_StatusChange( ApplicationVNC _this, XObject sender )
{
  ApplicationcontextoStatus ctxRecebido;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ctxRecebido = EwCastObject( _this->StatusChangedHandler.Context, ApplicationcontextoStatus 
  );
  ViewsText_OnSetString( &_this->Status, ctxRecebido->Status );

  if (( !EwCompString( _this->Status.String, EwLoadString( &_Const00BD )) || !EwCompString( 
      _this->Status.String, EwLoadString( &_Const00BE ))) || !EwCompString( _this->Status.String, 
      EwLoadString( &_Const00BF )))
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->BStart, 1 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->BStop, 0 );
  }
  else
  {
    CoreGroup_OnSetEnabled((CoreGroup)&_this->BStart, 0 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->BStop, 1 );
  }
}

/* 'C' function for method : 'Application::VNC.stopVNC()' */
void ApplicationVNC_stopVNC( ApplicationVNC _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationClasse_stopVNC( _this->device );
}

/* Variants derived from the class : 'Application::VNC' */
EW_DEFINE_CLASS_VARIANTS( ApplicationVNC )
EW_END_OF_CLASS_VARIANTS( ApplicationVNC )

/* Virtual Method Table (VMT) for the class : 'Application::VNC' */
EW_DEFINE_CLASS( ApplicationVNC, CoreGroup, "Application::VNC" )
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
  ApplicationVNC_UpdateLayout,
  ApplicationVNC_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_Restack,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationVNC )

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
  CoreRectView__OnSetBounds( _this, _Const00C0 );
  CoreView_OnSetLayout((CoreView)&_this->TouchHandler, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreQuadView__OnSetPoint4( &_this->TouchHandler, _Const00C1 );
  CoreQuadView__OnSetPoint3( &_this->TouchHandler, _Const00C2 );
  CoreQuadView__OnSetPoint2( &_this->TouchHandler, _Const00C3 );
  CoreQuadView__OnSetPoint1( &_this->TouchHandler, _Const0001 );
  CoreView_OnSetLayout((CoreView)&_this->Frame, CoreLayoutAlignToBottom | CoreLayoutAlignToLeft 
  | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz | CoreLayoutResizeVert 
  );
  CoreRectView__OnSetBounds( &_this->Frame, _Const00C0 );
  ViewsFrame_OnSetColor( &_this->Frame, FlatColorOfTouch );
  CoreView_OnSetLayout((CoreView)&_this->CaptionText, CoreLayoutAlignToBottom | 
  CoreLayoutAlignToLeft | CoreLayoutAlignToRight | CoreLayoutAlignToTop | CoreLayoutResizeHorz 
  | CoreLayoutResizeVert );
  CoreRectView__OnSetBounds( &_this->CaptionText, _Const00C0 );
  ViewsText_OnSetString( &_this->CaptionText, EwLoadString( &_Const00C4 ));
  ViewsText_OnSetColor( &_this->CaptionText, FlatColorOfBackground );
  EwRetainString( &_this->Caption, EwLoadString( &_Const00C4 ));
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
}

/* Finalizer method for the class 'Application::Classe' */
void ApplicationClasse__Done( ApplicationClasse _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationClasse );

  /* Finalize all embedded objects */
  CoreSystemEvent__Done( &_this->LogMessageEvent );
  CoreSystemEvent__Done( &_this->StatusChangedEvent );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::Classe' */
void ApplicationClasse__Mark( ApplicationClasse _this )
{
  EwMarkObject( &_this->LogMessageEvent );
  EwMarkObject( &_this->StatusChangedEvent );

  /* Give the super class a chance to mark its objects and references */
  TemplatesDeviceClass__Mark( &_this->_Super );
}

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationClasse_LogMessageTrigger( ApplicationClasse _this, XString message )
{
  ApplicationcontextoMsg contexto = EwNewObject( ApplicationcontextoMsg, 0 );

  ApplicationcontextoMsg_OnSetmessage( contexto, message );
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
  VNC_SetState(VNC_INIT);
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
  ApplicationcontextoStatus contexto = EwNewObject( ApplicationcontextoStatus, 0 
    );

  ApplicationcontextoStatus_OnSetStatus( contexto, status );
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

/* Initializer for the class 'Application::contextoMsg' */
void ApplicationcontextoMsg__Init( ApplicationcontextoMsg _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationcontextoMsg );

  /* ... and initialize objects, variables, properties, etc. */
  EwRetainString( &_this->message, EwLoadString( &_Const0017 ));
}

/* Re-Initializer for the class 'Application::contextoMsg' */
void ApplicationcontextoMsg__ReInit( ApplicationcontextoMsg _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Application::contextoMsg' */
void ApplicationcontextoMsg__Done( ApplicationcontextoMsg _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationcontextoMsg );

  /* Release all used strings */
  EwReleaseString( &_this->message );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::contextoMsg' */
void ApplicationcontextoMsg__Mark( ApplicationcontextoMsg _this )
{
  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* 'C' function for method : 'Application::contextoMsg.OnSetmessage()' */
void ApplicationcontextoMsg_OnSetmessage( ApplicationcontextoMsg _this, XString 
  value )
{
  if ( !EwCompString( _this->message, value ))
    return;

  EwRetainString( &_this->message, value );
}

/* Variants derived from the class : 'Application::contextoMsg' */
EW_DEFINE_CLASS_VARIANTS( ApplicationcontextoMsg )
EW_END_OF_CLASS_VARIANTS( ApplicationcontextoMsg )

/* Virtual Method Table (VMT) for the class : 'Application::contextoMsg' */
EW_DEFINE_CLASS( ApplicationcontextoMsg, XObject, "Application::contextoMsg" )
EW_END_OF_CLASS( ApplicationcontextoMsg )

/* Initializer for the class 'Application::contextoStatus' */
void ApplicationcontextoStatus__Init( ApplicationcontextoStatus _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  XObject__Init( &_this->_Super, aLink, aArg );

  /* Setup the VMT pointer */
  _this->_VMT = EW_CLASS( ApplicationcontextoStatus );

  /* ... and initialize objects, variables, properties, etc. */
  EwRetainString( &_this->Status, EwLoadString( &_Const0017 ));
}

/* Re-Initializer for the class 'Application::contextoStatus' */
void ApplicationcontextoStatus__ReInit( ApplicationcontextoStatus _this )
{
  /* At first re-initialize the super class ... */
  XObject__ReInit( &_this->_Super );
}

/* Finalizer method for the class 'Application::contextoStatus' */
void ApplicationcontextoStatus__Done( ApplicationcontextoStatus _this )
{
  /* Finalize this class */
  _this->_VMT = EW_CLASS( ApplicationcontextoStatus );

  /* Release all used strings */
  EwReleaseString( &_this->Status );

  /* Don't forget to deinitialize the super class ... */
  XObject__Done( &_this->_Super );
}

/* Garbage Collector method for the class 'Application::contextoStatus' */
void ApplicationcontextoStatus__Mark( ApplicationcontextoStatus _this )
{
  /* Give the super class a chance to mark its objects and references */
  XObject__Mark( &_this->_Super );
}

/* 'C' function for method : 'Application::contextoStatus.OnSetStatus()' */
void ApplicationcontextoStatus_OnSetStatus( ApplicationcontextoStatus _this, XString 
  value )
{
  if ( !EwCompString( _this->Status, value ))
    return;

  EwRetainString( &_this->Status, value );
}

/* Variants derived from the class : 'Application::contextoStatus' */
EW_DEFINE_CLASS_VARIANTS( ApplicationcontextoStatus )
EW_END_OF_CLASS_VARIANTS( ApplicationcontextoStatus )

/* Virtual Method Table (VMT) for the class : 'Application::contextoStatus' */
EW_DEFINE_CLASS( ApplicationcontextoStatus, XObject, "Application::contextoStatus" )
EW_END_OF_CLASS( ApplicationcontextoStatus )

/* User defined constant: 'Application::cor_R' */
const XColor Applicationcor_R = { 0x00, 0xFF, 0x00, 0xFF };

/* User defined constant: 'Application::cor_S' */
const XColor Applicationcor_S = { 0xFF, 0xFF, 0x00, 0xFF };

/* User defined constant: 'Application::cor_T' */
const XColor Applicationcor_T = { 0xFF, 0x00, 0x00, 0xFF };

/* Embedded Wizard */
