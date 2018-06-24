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

#ifndef _ApplicationFreq769_H
#define _ApplicationFreq769_H

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

#include "_ApplicationConfigScreen.h"
#include "_ApplicationFreq.h"
#include "_ApplicationModIconButton.h"
#include "_ApplicationPlotterGraph.h"
#include "_CoreTimer.h"
#include "_EffectsInt32Effect.h"
#include "_ViewsText.h"

/* Forward declaration of the class Application::Classe */
#ifndef _ApplicationClasse_
  EW_DECLARE_CLASS( ApplicationClasse )
#define _ApplicationClasse_
#endif

/* Forward declaration of the class Core::DialogContext */
#ifndef _CoreDialogContext_
  EW_DECLARE_CLASS( CoreDialogContext )
#define _CoreDialogContext_
#endif

/* Forward declaration of the class Core::Group */
#ifndef _CoreGroup_
  EW_DECLARE_CLASS( CoreGroup )
#define _CoreGroup_
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


/* Deklaration of class variant : 'Application::Freq769' */
EW_DEFINE_VFIELDS( ApplicationFreq769, XObjectVariant, ApplicationFreq )
EW_END_OF_VFIELDS( ApplicationFreq769 )

/* Virtual Method Table (VMT) for the class variant : 'Application::Freq769' */
EW_DEFINE_VMETHODS( ApplicationFreq769, XObjectVariant, ApplicationFreq )
  EW_METHOD( atualizaY,         void )( ApplicationFreq _this )
  EW_METHOD( atualizaX,         void )( ApplicationFreq _this )
EW_END_OF_VMETHODS( ApplicationFreq769 )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationFreq769_Init( ApplicationFreq _this, XHandle aArg );

/* Atualiza os rótulos do eixo vertical do gráfico e a proporção de plotagem. */
void ApplicationFreq769_atualizaY( ApplicationFreq _this );

/* Atualiza os rótulos do eixo X no gráfico. */
void ApplicationFreq769_atualizaX( ApplicationFreq _this );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationFreq769_H */

/* Embedded Wizard */
