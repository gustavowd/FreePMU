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

#ifndef _CoreSystemEventHandler_H
#define _CoreSystemEventHandler_H

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

/* Forward declaration of the class Core::SystemEvent */
#ifndef _CoreSystemEvent_
  EW_DECLARE_CLASS( CoreSystemEvent )
#define _CoreSystemEvent_
#endif

/* Forward declaration of the class Core::SystemEventHandler */
#ifndef _CoreSystemEventHandler_
  EW_DECLARE_CLASS( CoreSystemEventHandler )
#define _CoreSystemEventHandler_
#endif


/* The class Core::SystemEventHandler provides a convenient component able to react 
   to system events. Such events are usually generated by the real device the GUI 
   application is designed for. Every time the device notifies the GUI application 
   about a particular event, the corresponding system event handlers are activated. 
   Here for example, the device can report the current status of an engine every 
   time this engine starts or stops. Thereupon the GUI application can react to 
   such event and e.g. update the screen.
   In Embedded Wizard every system event is represented by its own Core::SystemEvent 
   instance. Usually you create and maintain such instances globally, e.g. within 
   a device autoobject. Once a system event instance is available, you can connect 
   a system event handler with it. For this purpose assign the system event instance 
   to the property @Event. Later at the runtime when the system event instance is 
   triggered, all associated system event handlers will be notified causing each 
   handler to send a signal to a slot method stored in its property @OnEvent. In 
   the slot method you are free to implement what to do in response to the event.
   Please note, the delivery of events succeeds asynchronously however always accordingly 
   to the order in which the events were triggered. */
EW_DEFINE_FIELDS( CoreSystemEventHandler, XObject )
  EW_VARIABLE( Context,         XObject )
  EW_PROPERTY( OnEvent,         XSlot )
  EW_PROPERTY( Event,           CoreSystemEvent )
  EW_PROPERTY( Enabled,         XBool )
EW_END_OF_FIELDS( CoreSystemEventHandler )

/* Virtual Method Table (VMT) for the class : 'Core::SystemEventHandler' */
EW_DEFINE_METHODS( CoreSystemEventHandler, XObject )
EW_END_OF_METHODS( CoreSystemEventHandler )

/* 'C' function for method : 'Core::SystemEventHandler.onEvent()' */
void CoreSystemEventHandler_onEvent( CoreSystemEventHandler _this, XObject sender );

/* 'C' function for method : 'Core::SystemEventHandler.OnSetEvent()' */
void CoreSystemEventHandler_OnSetEvent( CoreSystemEventHandler _this, CoreSystemEvent 
  value );

#ifdef __cplusplus
  }
#endif

#endif /* _CoreSystemEventHandler_H */

/* Embedded Wizard */
