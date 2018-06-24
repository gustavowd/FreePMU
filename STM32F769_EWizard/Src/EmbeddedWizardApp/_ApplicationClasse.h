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

#ifndef _ApplicationClasse_H
#define _ApplicationClasse_H

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

#include "_CoreSystemEvent.h"
#include "_TemplatesDeviceClass.h"

/* Forward declaration of the class Application::Classe */
#ifndef _ApplicationClasse_
  EW_DECLARE_CLASS( ApplicationClasse )
#define _ApplicationClasse_
#endif

/* Forward declaration of the class Charts::CoordList */
#ifndef _ChartsCoordList_
  EW_DECLARE_CLASS( ChartsCoordList )
#define _ChartsCoordList_
#endif


/* Deklaration of class : 'Application::Classe' */
EW_DEFINE_FIELDS( ApplicationClasse, TemplatesDeviceClass )
  EW_OBJECT  ( LogMessageEvent, CoreSystemEvent )
  EW_OBJECT  ( StatusChangedEvent, CoreSystemEvent )
  EW_OBJECT  ( ButtonStateEvent, CoreSystemEvent )
EW_END_OF_FIELDS( ApplicationClasse )

/* Virtual Method Table (VMT) for the class : 'Application::Classe' */
EW_DEFINE_METHODS( ApplicationClasse, TemplatesDeviceClass )
EW_END_OF_METHODS( ApplicationClasse )

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationClasse_LogMessageTrigger( ApplicationClasse _this, XString message );

/* Wrapper function for the non virtual method : 'Application::Classe.LogMessageTrigger()' */
void ApplicationClasse__LogMessageTrigger( void* _this, XString message );

/* The following define announces the presence of the method Application::Classe.LogMessageTrigger(). */
#define _ApplicationClasse__LogMessageTrigger_

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationClasse_startVNC( ApplicationClasse _this );

/* Wrapper function for the non virtual method : 'Application::Classe.startVNC()' */
void ApplicationClasse__startVNC( void* _this );

/* The following define announces the presence of the method Application::Classe.startVNC(). */
#define _ApplicationClasse__startVNC_

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationClasse_StatusTrigger( ApplicationClasse _this, XString status );

/* Wrapper function for the non virtual method : 'Application::Classe.StatusTrigger()' */
void ApplicationClasse__StatusTrigger( void* _this, XString status );

/* The following define announces the presence of the method Application::Classe.StatusTrigger(). */
#define _ApplicationClasse__StatusTrigger_

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationClasse_stopVNC( ApplicationClasse _this );

/* Wrapper function for the non virtual method : 'Application::Classe.stopVNC()' */
void ApplicationClasse__stopVNC( void* _this );

/* The following define announces the presence of the method Application::Classe.stopVNC(). */
#define _ApplicationClasse__stopVNC_

/* 'C' function for method : 'Application::Classe.getFreq()' */
XFloat ApplicationClasse_getFreq( ApplicationClasse _this );

/* 'C' function for method : 'Application::Classe.getMagR()' */
XFloat ApplicationClasse_getMagR( ApplicationClasse _this );

/* 'C' function for method : 'Application::Classe.getMagT()' */
XFloat ApplicationClasse_getMagT( ApplicationClasse _this );

/* 'C' function for method : 'Application::Classe.getMagS()' */
XFloat ApplicationClasse_getMagS( ApplicationClasse _this );

/* 'C' function for method : 'Application::Classe.getFaseR()' */
XFloat ApplicationClasse_getFaseR( ApplicationClasse _this );

/* 'C' function for method : 'Application::Classe.getFaseT()' */
XFloat ApplicationClasse_getFaseT( ApplicationClasse _this );

/* 'C' function for method : 'Application::Classe.getFaseS()' */
XFloat ApplicationClasse_getFaseS( ApplicationClasse _this );

/* 'C' function for method : 'Application::Classe.getFFT_R()' */
ChartsCoordList ApplicationClasse_getFFT_R( ApplicationClasse _this );

/* 'C' function for method : 'Application::Classe.getFFT_S()' */
ChartsCoordList ApplicationClasse_getFFT_S( ApplicationClasse _this );

/* 'C' function for method : 'Application::Classe.getFFT_T()' */
ChartsCoordList ApplicationClasse_getFFT_T( ApplicationClasse _this );

/* This method is intended to be called by the device to notify the GUI application 
   about a particular system event. */
void ApplicationClasse_ChangeBtnState( ApplicationClasse _this, XInt32 IniState, 
  XInt32 PararState );

/* Wrapper function for the non virtual method : 'Application::Classe.ChangeBtnState()' */
void ApplicationClasse__ChangeBtnState( void* _this, XInt32 IniState, XInt32 PararState );

/* The following define announces the presence of the method Application::Classe.ChangeBtnState(). */
#define _ApplicationClasse__ChangeBtnState_

#ifdef __cplusplus
  }
#endif

#endif /* _ApplicationClasse_H */

/* Embedded Wizard */
