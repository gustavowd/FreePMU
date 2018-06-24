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

#ifndef _CoreSystemEventTask_H
#define _CoreSystemEventTask_H

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

#include "_CoreTask.h"

/* Forward declaration of the class Core::SystemEvent */
#ifndef _CoreSystemEvent_
  EW_DECLARE_CLASS( CoreSystemEvent )
#define _CoreSystemEvent_
#endif

/* Forward declaration of the class Core::SystemEventTask */
#ifndef _CoreSystemEventTask_
  EW_DECLARE_CLASS( CoreSystemEventTask )
#define _CoreSystemEventTask_
#endif

/* Forward declaration of the class Core::TaskQueue */
#ifndef _CoreTaskQueue_
  EW_DECLARE_CLASS( CoreTaskQueue )
#define _CoreTaskQueue_
#endif


/* Deklaration of class : 'Core::SystemEventTask' */
EW_DEFINE_FIELDS( CoreSystemEventTask, CoreTask )
  EW_VARIABLE( context,         XObject )
  EW_VARIABLE( target,          CoreSystemEvent )
EW_END_OF_FIELDS( CoreSystemEventTask )

/* Virtual Method Table (VMT) for the class : 'Core::SystemEventTask' */
EW_DEFINE_METHODS( CoreSystemEventTask, CoreTask )
  EW_METHOD( OnStart,           void )( CoreSystemEventTask _this, CoreTaskQueue 
    aQueue )
EW_END_OF_METHODS( CoreSystemEventTask )

/* The method OnStart() is called at the begin of the execution of this task. The 
   default implementation of the method simply cancels the task causing the next 
   available task in the task queue to be started. You should override this method 
   in derived task classes to implement what the task should do.
   There are three typical application cases how to implement the OnStart() method:
   - In its simplest case the entire task algorithm is implemented in the OnStart() 
   method. In this case the method @Complete() should be called before leaving OnStart().
   - If the task does take long time for execution by using timers or effects, you 
   should put in OnStart() the code necessary to start the timers/effects. Don't 
   forget to call @Complete() when all timers/effects are done.
   - If the task is divided in many small execution steps, the OnStart() method 
   should call @Continue() to request the @OnContinue() method to be executed after 
   a short delay (usually after the next screen update). In @OnContinue() you can 
   perform the next step of the task. If necessary, @OnContinue() can also request 
   to be called again after a short delay. At the end of the task, after the last 
   step is terminated, don't forget to call @Complete().
   The parameter aQueue refers to the queue this task belongs to. It can be used 
   to schedule more task to execute later. */
void CoreSystemEventTask_OnStart( CoreSystemEventTask _this, CoreTaskQueue aQueue );

/* 'C' function for method : 'Core::SystemEventTask.onDelivered()' */
void CoreSystemEventTask_onDelivered( CoreSystemEventTask _this, XObject sender );

#ifdef __cplusplus
  }
#endif

#endif /* _CoreSystemEventTask_H */

/* Embedded Wizard */
