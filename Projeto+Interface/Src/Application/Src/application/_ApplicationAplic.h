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

#ifndef _ApplicationAplic_H
#define _ApplicationAplic_H

#ifdef __cplusplus
  extern "C"
  {
#endif

#include "ewrte.h"
#if EW_RTE_VERSION != 0x0008001E
  #error Wrong version of Embedded Wizard Runtime Environment.
#endif

#include "ewgfx.h"
#if EW_GFX_VERSION != 0x0008001E
  #error Wrong version of Embedded Wizard Graphics Engine.
#endif

#include "_ApplicationFase.h"
#include "_ApplicationFasores.h"
#include "_ApplicationFreq.h"
#include "_ApplicationMag.h"
#include "_ApplicationVNC.h"
#include "_CoreOutline.h"
#include "_CoreRoot.h"
#include "_CoreTimer.h"
#include "_CoreWipeTouchHandler.h"
#include "_EffectsPointEffect.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"

/* Forward declaration of the class Application::Aplic */
#ifndef _ApplicationAplic_
  EW_DECLARE_CLASS( ApplicationAplic )
#define _ApplicationAplic_
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

/* Forward declaration of the class Core::ModalContext */
#ifndef _CoreModalContext_
  EW_DECLARE_CLASS( CoreModalContext )
#define _CoreModalContext_
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


/* This is the root component of the entire GUI application. */
EW_DEFINE_FIELDS( ApplicationAplic, CoreRoot )
  EW_VARIABLE( nrTela,          XInt32 )
  EW_OBJECT  ( Anima,           EffectsPointEffect )
  EW_OBJECT  ( Rectangle,       ViewsRectangle )
  EW_OBJECT  ( Rectangle1,      ViewsRectangle )
  EW_OBJECT  ( Title,           ViewsText )
  EW_OBJECT  ( WipeTouchHandler, CoreWipeTouchHandler )
  EW_OBJECT  ( Janela,          CoreOutline )
  EW_OBJECT  ( TFasores,        ApplicationFasores )
  EW_OBJECT  ( TFreq,           ApplicationFreq )
  EW_OBJECT  ( TMag,            ApplicationMag )
  EW_OBJECT  ( TFase,           ApplicationFase )
  EW_OBJECT  ( TVNC,            ApplicationVNC )
EW_END_OF_FIELDS( ApplicationAplic )

/* Virtual Method Table (VMT) for the class : 'Application::Aplic' */
EW_DEFINE_METHODS( ApplicationAplic, CoreRoot )
  EW_METHOD( initLayoutContext, void )( CoreRectView _this, XRect aBounds, CoreOutline 
    aOutline )
  EW_METHOD( GetRoot,           CoreRoot )( CoreRoot _this )
  EW_METHOD( Draw,              void )( CoreRoot _this, GraphicsCanvas aCanvas, 
    XRect aClip, XPoint aOffset, XInt32 aOpacity, XBool aBlend )
  EW_METHOD( HandleEvent,       XObject )( CoreView _this, CoreEvent aEvent )
  EW_METHOD( CursorHitTest,     CoreCursorHit )( CoreGroup _this, XRect aArea, XInt32 
    aFinger, XInt32 aStrikeCount, CoreView aDedicatedView, XSet aRetargetReason )
  EW_METHOD( ArrangeView,       XPoint )( CoreRectView _this, XRect aBounds, XEnum 
    aFormation )
  EW_METHOD( MoveView,          void )( CoreRectView _this, XPoint aOffset, XBool 
    aFastMove )
  EW_METHOD( GetExtent,         XRect )( CoreRectView _this )
  EW_METHOD( ChangeViewState,   void )( CoreRoot _this, XSet aSetState, XSet aClearState )
  EW_METHOD( OnSetBounds,       void )( CoreGroup _this, XRect value )
  EW_METHOD( OnSetFocus,        void )( CoreRoot _this, CoreView value )
  EW_METHOD( DispatchEvent,     XObject )( CoreRoot _this, CoreEvent aEvent )
  EW_METHOD( BroadcastEvent,    XObject )( CoreRoot _this, CoreEvent aEvent, XSet 
    aFilter )
  EW_METHOD( UpdateLayout,      void )( CoreGroup _this, XPoint aSize )
  EW_METHOD( UpdateViewState,   void )( CoreGroup _this, XSet aState )
  EW_METHOD( InvalidateArea,    void )( CoreRoot _this, XRect aArea )
  EW_METHOD( Restack,           void )( CoreRoot _this, CoreView aView, XInt32 aOrder )
  EW_METHOD( Add,               void )( CoreRoot _this, CoreView aView, XInt32 aOrder )
EW_END_OF_METHODS( ApplicationAplic )

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationAplic_Init( ApplicationAplic _this, XHandle aArg );

/* This method is called when the user has performed a wipe left gesture. It starts 
   a transition to the next screen. */
void ApplicationAplic_onWipeLeft( ApplicationAplic _this, XObject sender );

/* This method is called when the user has performed a wipe right gesture. It starts 
   a transition to the preceding screen. */
void ApplicationAplic_onWipeRight( ApplicationAplic _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationAplic_H */

/* Embedded Wizard */
