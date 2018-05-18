/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software and related documentation ("Software") are intellectual
* property owned by TARA Systems and are copyright of TARA Systems.
* Any modification, copying, reproduction or redistribution of the Software in
* whole or in part by any means not in accordance with the End-User License
* Agreement for Embedded Wizard is expressly prohibited. The removal of this
* preamble is expressly prohibited.
*
********************************************************************************
*
* DESCRIPTION:
*   This header file contains Graphics Engine configuration parameters and the
*   adaptation for the STM32 graphics subsystem.
*
*******************************************************************************/

#include "ewgfxdriver.h"
#include "ewextgfx.h"
#include "ewgfxdefs.h"
#include "ewextpxl_RGB565_RGBA8888.h"
#include "ewrte.h"

#include "ew_bsp_display.h"

#ifdef EW_USE_DMA2D_GRAPHICS_ACCELERATOR

  #include "ew_bsp_graphics.h"

  /* flag to switch on/off DMA2D graphics accelerator during runtime */
  static unsigned char UseDMA2D = 1;

  /* variables to store the source and destination surface accessed by DMA2D */
  static unsigned long DstSurfaceUsedByDMA2D = 0;
  static unsigned long SrcSurfaceUsedByDMA2D = 0;

#endif

#if ( EW_USE_SCRATCHPAD_BUFFER && EW_USE_DOUBLE_BUFFER )
  #error Incompatible configuration! Partial display update via scratch-pad buffer cannot be combined with double buffering!
  /*
     Please note: The Graphics Engine is configured with EW_USE_SCRATCHPAD_BUFFER=1
     This means, the Graphics Engine makes partial display updates into a scratch-pad
     buffer instead of a full-screen updates into a framebuffer.
     Therefore, the combination with double-buffering cannot be supported.
  */
#endif

/* Error messages */
#define Err01 "Invalid address of framebuffer (front-buffer)!"
#define Err02 "Size of framebuffer device (display size) does not match with given application size!"
#define Err03 "Could not allocate memory!"
#define Err04 "Invalid address of back-buffer!"
#define Err05 "Requested operation with graphics accelerator DMA2D failed!"
#define Err06 "Full screen update cannot be done within scratch-pad buffer!"
#define Err07 "Partial screen update cannot be combined with double buffering!"
#define Err08 "Invalid address of scratch-pad buffer!"


/* Descriptor of a STM32 surface. This type is used for framebuffers and all
   internal surfaces (bitmaps). The pixel memory of the surface may be preallocated
   for framebuffers. In all other cases, the pixel memory is allocated and freed
   dynamically.
   The color format of the surface is equal to the native color format of the
   Graphics Engine. */
typedef struct
{
  int   Width;
  int   Height;
  int   Prealloc;
  int   BytesPerPixel;
  int   Format;
  void* Pixel;
  int   OrigHeight;
  void* OrigPixel;
} XSTM32Surface;


/* Descriptor of an STM32 viewport. Due to the different modes that are supported,
   an additional off-screen canvas and/or double-buffering will be used. */
typedef struct
{
  XSTM32Surface* FrameBuffer;
  XSTM32Surface* DoubleBuffer;
  XSTM32Surface* ScratchPadBuffer;
} XSTM32Viewport;


/* Memory usage profiler */
extern int EwResourcesMemory;

/* extern variables to control Graphics Engine */
extern int EwPreserveFramebufferContent;
extern int EwMaxSurfaceCacheSize;
extern int EwMaxGlyphSurfaceWidth;
extern int EwMaxGlyphSurfaceHeight;


/*******************************************************************************
* FUNCTION:
*   STM32InitGfx
*
* DESCRIPTION:
*   The function STM32InitGfx is called from the Graphics Engine during the
*   initialization in order to make target specific configurations of the
*   Graphics Engine
*
* ARGUMENTS:
*   aArgs - Optional argument passed to the Graphics Engine init function.
*
* RETURN VALUE:
*   If successful, returns != 0.
*
*******************************************************************************/
int STM32InitGfx( void* aArgs )
{
  /* configure bitmap and glyph cache according makefile settings */
  EwMaxSurfaceCacheSize   = EW_MAX_SURFACE_CACHE_SIZE;
  EwMaxGlyphSurfaceWidth  = EW_MAX_GLYPH_SURFACE_WIDTH;
  EwMaxGlyphSurfaceHeight = EW_MAX_GLYPH_SURFACE_HEIGHT;

  /* In case of pure double-buffering mode, the Mosaic class library has to
     combine the dirty rectangles of two consecutive screen updates.
     To achieve this, the variable EwPreserveFramebufferContent has to be set to 0.
     Normally, the variable EwPreserveFramebufferContent is set to 1, which means
     that the graphics subsystem retains the content of the framebuffer between
     two consecutive screen update frames. */
  #if EW_USE_DOUBLE_BUFFER
    EwPreserveFramebufferContent = 0;
  #endif

  return 1;
}


/*******************************************************************************
* FUNCTION:
*   STM32InitViewport
*
* DESCRIPTION:
*   The function STM32InitViewport is called from the Graphics Engine,
*   to create a new viewport on the target. The function uses the given
*   buffers passed in the arguments aDisplay1, aDisplay2 and aDisplay3.
*
* ARGUMENTS:
*   aWidth,
*   aHeight       - Size of the application in pixel.
*   aExtentX,
*   aExtentY      - not used.
*   aExtentWidth,
*   aExtentHeight - Size of the physical or virtual framebuffer in pixel.
*   aOrient       - not used.
*   aOpacity      - not used.
*   aDisplay1     - Address of the framebuffer / front-buffer.
*   aDisplay2     - Address of the back-buffer in case of double-buffering.
*   aDisplay3     - Address of the scratch-pad buffer.
*
* RETURN VALUE:
*   Handle of the surface descriptor (viewport).
*
*******************************************************************************/
unsigned long STM32InitViewport( int aWidth, int aHeight, int aExtentX,
  int aExtentY, int aExtentWidth, int aExtentHeight, int aOrient, int aOpacity,
  void* aDisplay1, void* aDisplay2, void* aDisplay3 )
{
  /* compare metrics of display with metrics of application */
  if (( aWidth > aExtentWidth ) || ( aHeight != aExtentHeight ))
  {
    EW_ERROR( Err02 );
    return 0;
  }

  #if EW_USE_SCRATCHPAD_BUFFER

    /* verify that the given scratch-pad buffer address is valid */
    if ( !aDisplay3 )
    {
      EW_ERROR( Err08 );
      return 0;
    }

  #else

    /* verify that the given framebuffer address is valid */
    if ( !aDisplay1 )
    {
      EW_ERROR( Err01 );
      return 0;
    }

  #endif

  /* verify that the given back-buffer address matchs the choosen configuration */
  #if EW_USE_DOUBLE_BUFFER

    if ( !aDisplay2 )
    {
      EW_ERROR( Err04 );
      return 0;
    }

  #endif

  /* allocate memory for the descriptor structure */
  XSTM32Viewport* viewport = (XSTM32Viewport*)EwAlloc( sizeof( XSTM32Viewport ));
  if ( !viewport )
  {
    EW_ERROR( Err03 );
    return 0;
  }
  viewport->FrameBuffer      = 0;
  viewport->DoubleBuffer     = 0;
  viewport->ScratchPadBuffer = 0;

  #if EW_USE_SCRATCHPAD_BUFFER

    /* allocate memory for the scratch-pad buffer descriptor */
    viewport->ScratchPadBuffer = (XSTM32Surface*)EwAlloc( sizeof( XSTM32Surface ));
    if ( !viewport->ScratchPadBuffer )
    {
      EW_ERROR( Err03 );
      return 0;
    }

    /* initialize the scratch-pad buffer descriptor */
    viewport->ScratchPadBuffer->Width         = 0;
    viewport->ScratchPadBuffer->Height        = 0;
    viewport->ScratchPadBuffer->Prealloc      = 1;
    viewport->ScratchPadBuffer->BytesPerPixel = FRAME_BUFFER_DEPTH;
    viewport->ScratchPadBuffer->Format        = EW_PIXEL_FORMAT_SCREEN;
    viewport->ScratchPadBuffer->Pixel         = aDisplay3;
    viewport->ScratchPadBuffer->OrigHeight    = 0;
    viewport->ScratchPadBuffer->OrigPixel     = aDisplay3;

  #else

    /* allocate memory for the framebuffer descriptor */
    viewport->FrameBuffer = (XSTM32Surface*)EwAlloc( sizeof( XSTM32Surface ));
    if ( !viewport->FrameBuffer )
    {
      EW_ERROR( Err03 );
      return 0;
    }

    /* initialize the framebuffer descriptor */
    viewport->FrameBuffer->Width         = aExtentWidth;
    viewport->FrameBuffer->Height        = aExtentHeight;
    viewport->FrameBuffer->Prealloc      = 1;
    viewport->FrameBuffer->BytesPerPixel = FRAME_BUFFER_DEPTH;
    viewport->FrameBuffer->Format        = EW_PIXEL_FORMAT_SCREEN;
    viewport->FrameBuffer->Pixel         = aDisplay1;
    viewport->FrameBuffer->OrigHeight    = aExtentHeight;
    viewport->FrameBuffer->OrigPixel     = aDisplay1;

  #endif

  #if EW_USE_DOUBLE_BUFFER

    /* allocate memory for the double-buffer descriptor */
    viewport->DoubleBuffer = (XSTM32Surface*)EwAlloc( sizeof( XSTM32Surface ));
    if ( !viewport->DoubleBuffer )
    {
      EW_ERROR( Err03 );
      return 0;
    }

    /* initialize the double-buffer descriptor */
    viewport->DoubleBuffer->Width         = aExtentWidth;
    viewport->DoubleBuffer->Height        = aExtentHeight;
    viewport->DoubleBuffer->Prealloc      = 1;
    viewport->DoubleBuffer->BytesPerPixel = FRAME_BUFFER_DEPTH;
    viewport->DoubleBuffer->Format        = EW_PIXEL_FORMAT_SCREEN;
    viewport->DoubleBuffer->Pixel         = aDisplay2;
    viewport->DoubleBuffer->OrigHeight    = aExtentHeight;
    viewport->DoubleBuffer->OrigPixel     = aDisplay2;

  #endif

  #ifdef EW_USE_DMA2D_GRAPHICS_ACCELERATOR

    /* per default, DMA2D usage is switched on */
    UseDMA2D = 1;

    /* initialize the DMA2D graphics accelerator */
    if ( !EwBspGraphicsInit( DMA2D_OUTPUT_RGB565 ))
    {
      EW_ERROR( Err05 );
      return 0;
    }

  #endif

  EwResourcesMemory += sizeof( XSTM32Viewport );
  EwResourcesMemory += sizeof( XSTM32Surface );

  #if EW_USE_DOUBLE_BUFFER
    EwResourcesMemory += sizeof( XSTM32Surface );
  #endif

  /* ensure that current framebuffer is shown */
  if ( viewport->FrameBuffer )
    EwBspSetFramebufferAddress( (unsigned long)viewport->FrameBuffer->Pixel );

  return (unsigned long)viewport;
}


/*******************************************************************************
* FUNCTION:
*   STM32DoneViewport
*
* DESCRIPTION:
*   The function STM32DoneViewport is called from the Graphics Engine, to
*   release a previously created viewport on the STM32 target.
*
* ARGUMENTS:
*   aHandle - Handle of the surface descriptor (viewport).
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void STM32DoneViewport( unsigned long aHandle )
{
  XSTM32Viewport* viewport = (XSTM32Viewport*)aHandle;

  /* destroy the double-buffer descriptor */
  if ( viewport->DoubleBuffer )
    EwFree( viewport->DoubleBuffer );

  /* destroy the framebuffer descriptor */
  if ( viewport->FrameBuffer )
    EwFree( viewport->FrameBuffer );

  /* destroy the scratch-pad buffer descriptor */
  if ( viewport->ScratchPadBuffer )
    EwFree( viewport->ScratchPadBuffer );

  /* destroy the viewport */
  EwFree( viewport );

  #ifdef EW_USE_DMA2D_GRAPHICS_ACCELERATOR

    /* deinitialize the DMA2D graphics accelerator */
    EwBspGraphicsDone();

  #endif

  EwResourcesMemory -= sizeof( XSTM32Viewport );
  EwResourcesMemory -= sizeof( XSTM32Surface );

  #if EW_USE_DOUBLE_BUFFER
    EwResourcesMemory -= sizeof( XSTM32Surface );
  #endif
}


/*******************************************************************************
* FUNCTION:
*   STM32BeginUpdate
*
* DESCRIPTION:
*   The function STM32BeginUpdate is called from the Graphics Engine, to
*   initiate the screen update cycle.
*
* ARGUMENTS:
*   aHandle - Handle of the surface descriptor (viewport).
*
* RETURN VALUE:
*   Handle of the destination surface, used for all drawing operations.
*
*******************************************************************************/
unsigned long STM32BeginUpdate( unsigned long aHandle )
{
  #ifdef EW_USE_DMA2D_GRAPHICS_ACCELERATOR

    /* ensure that any hardware accelerated drawing operation is finished */
    EwBspGraphicsWaitForCompletion();

  #endif

  #if EW_USE_SCRATCHPAD_BUFFER

    EW_ERROR( Err06 );
    return 0;

  #elif EW_USE_DOUBLE_BUFFER

    XSTM32Viewport* viewport = (XSTM32Viewport*)aHandle;
    return (unsigned long)viewport->DoubleBuffer;

  #else

    XSTM32Viewport* viewport = (XSTM32Viewport*)aHandle;
    return (unsigned long)viewport->FrameBuffer;

  #endif
}


/*******************************************************************************
* FUNCTION:
*   STM32BeginUpdateArea
*
* DESCRIPTION:
*   The function STM32BeginUpdateArea is called from the Graphics Engine, to
*   initiate a partial screen update cycle.
*
* ARGUMENTS:
*   aHandle - Handle of the surface descriptor (viewport).
*   aX,
*   aY,
*   aWidth,
*   aHeight - Position and size of the area affected by the screen update
*     (dirty rectangle).
*
* RETURN VALUE:
*   Handle of the destination surface, used for all drawing operations.
*
*******************************************************************************/
unsigned long STM32BeginUpdateArea( unsigned long aHandle, int aX, int aY,
  int aWidth, int aHeight )
{
  #ifdef EW_USE_DMA2D_GRAPHICS_ACCELERATOR

    /* ensure that any hardware accelerated drawing operation is finished */
    EwBspGraphicsWaitForCompletion();

  #endif

  #if EW_USE_SCRATCHPAD_BUFFER

    XSTM32Viewport* viewport = (XSTM32Viewport*)aHandle;

    /* adapt size of scratch-pad buffer */
    viewport->ScratchPadBuffer->Width = aWidth;
    viewport->ScratchPadBuffer->Height = aHeight;

    /* return handle of scratch-pad buffer */
    return (unsigned long)viewport->ScratchPadBuffer;

  #elif EW_USE_DOUBLE_BUFFER

    EW_ERROR( Err07 );
    return 0;

  #else

    XSTM32Viewport* viewport = (XSTM32Viewport*)aHandle;

    /* adapt size and start address of framebuffer */
    viewport->FrameBuffer->Height = aHeight;
    viewport->FrameBuffer->Pixel  = (unsigned char *)viewport->FrameBuffer->OrigPixel
      + (( aY * viewport->FrameBuffer->Width ) + aX ) * viewport->FrameBuffer->BytesPerPixel;

    return (unsigned long)viewport->FrameBuffer;

  #endif
}


/*******************************************************************************
* FUNCTION:
*   STM32EndUpdate
*
* DESCRIPTION:
*   The function STM32BeginUpdate is called from the Graphics Engine, to
*   finalize the screen update cycle.
*
* ARGUMENTS:
*   aHandle - Handle of the surface descriptor (viewport).
*   aX,
*   aY,
*   aWidth,
*   aHeight - Position and size of the area affected from the screen update
*     (dirty rectangle).
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void STM32EndUpdate( unsigned long aHandle, int aX, int aY, int aWidth,
  int aHeight )
{
  /* nothing to do */
  if (( aWidth <= 0 ) || ( aHeight <= 0 ))
    return;

  #ifdef EW_USE_DMA2D_GRAPHICS_ACCELERATOR

    /* ensure that any hardware accelerated drawing operation is finished */
    EwBspGraphicsWaitForCompletion();

  #endif

  #if EW_USE_SCRATCHPAD_BUFFER

  #elif EW_USE_DOUBLE_BUFFER
  {
    XSTM32Viewport* viewport = (XSTM32Viewport*)aHandle;

    /* exchange front- and back-buffer objects */
    XSTM32Surface* tmp = viewport->DoubleBuffer;
    viewport->DoubleBuffer = viewport->FrameBuffer;
    viewport->FrameBuffer = tmp;

    /* make the new front-buffer visible */
    EwBspSetFramebufferAddress( (unsigned long)viewport->FrameBuffer->Pixel );

  }
  #else
  {
    XSTM32Viewport* viewport = (XSTM32Viewport*)aHandle;

    /* restore address and size of framebuffer */
    viewport->FrameBuffer->Height = viewport->FrameBuffer->OrigHeight;
    viewport->FrameBuffer->Pixel  = viewport->FrameBuffer->OrigPixel;
  }
  #endif
}


/*******************************************************************************
* FUNCTION:
*   STM32CreateSurface
*
* DESCRIPTION:
*   The function STM32CreateSurface() reserves pixel memory for a new surface
*   with the given size and color format. The function returns a handle to the
*   new surface.
*
* ARGUMENTS:
*   aFormat  - Color format of the surface. (See EW_PIXEL_FORMAT_XXX).
*   aWidth,
*   aHeight  - Size of the surface in pixel to create.
*
* RETURN VALUE:
*   The function returns a handle to the created surface. This can be a pointer
*   to a dynamically allocated data structure, an index in a list of surfaces,
*   or a handle returned by the lower level API.
*
*   If the creation is failed, the function should return 0.
*
*******************************************************************************/
unsigned long STM32CreateSurface( int aFormat, int aWidth, int aHeight )
{
  XSTM32Surface* surface = 0;
  int            size;

  if ( aFormat == EW_PIXEL_FORMAT_NATIVE )
  {
    size = aWidth * aHeight * sizeof( long );
    surface = (XSTM32Surface*)EwAllocVideo( sizeof( XSTM32Surface ) + size );

    if ( surface )
    {
      surface->Width         = aWidth;
      surface->Height        = aHeight;
      surface->Prealloc      = 0;
      surface->BytesPerPixel = sizeof( long );
      surface->Format        = aFormat;
      surface->Pixel         = (void*)( surface + 1 );

      EwResourcesMemory += sizeof( XSTM32Surface ) + size;
    }
  }
  else if ( aFormat == EW_PIXEL_FORMAT_ALPHA8 )
  {
    size = aWidth * aHeight;
    surface = (XSTM32Surface*)EwAllocVideo( sizeof( XSTM32Surface ) + size );

    if ( surface )
    {
      surface->Width         = aWidth;
      surface->Height        = aHeight;
      surface->Prealloc      = 0;
      surface->BytesPerPixel = sizeof( char );
      surface->Format        = aFormat;
      surface->Pixel         = (void*)( surface + 1 );

      EwResourcesMemory += sizeof( XSTM32Surface ) + size;
    }
  }
  else if ( aFormat == EW_PIXEL_FORMAT_SCREEN )
  {
    size = aWidth * aHeight * sizeof( short );
    surface = (XSTM32Surface*)EwAllocVideo( sizeof( XSTM32Surface ) + size );

    if ( surface )
    {
      surface->Width         = aWidth;
      surface->Height        = aHeight;
      surface->Prealloc      = 0;
      surface->BytesPerPixel = sizeof( short );
      surface->Format        = aFormat;
      surface->Pixel         = (void*)( surface + 1 );

      EwResourcesMemory += sizeof( XSTM32Surface ) + size;
    }
  }
  return (unsigned long)surface;
}


/*******************************************************************************
* FUNCTION:
*   STM32CreateConstSurface
*
* DESCRIPTION:
*   The function STM32CreateConstSurface() creates a surface structure
*   that refers to a constant pixel memory. The function returns a handle to the
*   new surface.
*
* ARGUMENTS:
*   aFormat - Color format of the surface. (See EW_PIXEL_FORMAT_XXX).
*   aWidth,
*   aHeight - Size of the surface in pixel.
*   aMemory - Pointer to constant pixel memory.
*
* RETURN VALUE:
*   The function returns a handle to the created surface.
*   If the creation is failed, the function should return 0.
*
*******************************************************************************/
unsigned long STM32CreateConstSurface( int aFormat, int aWidth, int aHeight,
  XSurfaceMemory* aMemory )
{
  XSTM32Surface* surface = 0;
  int            bytesPerPixel = 0;

  /* determine expected size of pixel */
  if ( aFormat == EW_PIXEL_FORMAT_NATIVE )
    bytesPerPixel = sizeof( long );
  if ( aFormat == EW_PIXEL_FORMAT_ALPHA8 )
    bytesPerPixel = sizeof( char );

  /* verify superficially the passed pixel memory */
  if ( !aMemory || !aMemory->Pixel1 || ( aMemory->Pitch1X != bytesPerPixel ) ||
     ( aMemory->Pitch1Y < (int)( aWidth * bytesPerPixel )))
    return 0;

  if ( bytesPerPixel > 0 )
  {
    /* allocate memory only for the administration structure */
    surface = (XSTM32Surface*)EwAllocVideo( sizeof( XSTM32Surface ));

    if ( surface )
    {
      surface->Width         = aWidth;
      surface->Height        = aHeight;
      surface->Prealloc      = 1;
      surface->BytesPerPixel = bytesPerPixel;
      surface->Format        = aFormat;
      surface->Pixel         = (void*)( aMemory->Pixel1 );

      EwResourcesMemory += sizeof( XSTM32Surface );
    }
  }

  return (unsigned long)surface;
}


/*******************************************************************************
* FUNCTION:
*   STM32DestroySurface
*
* DESCRIPTION:
*   The function STM32DestroySurface() frees the resources of the given surface.
*   This function is a counterpart to STM32CreateSurface().
*
* ARGUMENTS:
*   aHandle - Handle to the surface to free.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void STM32DestroySurface( unsigned long aHandle )
{
  XSTM32Surface* surface = (XSTM32Surface*)aHandle;

  EwResourcesMemory -= sizeof( XSTM32Surface ) + ( surface->Prealloc ?
    0 : ( surface->Width * surface->Height * surface->BytesPerPixel ));

  EwFreeVideo((void*)aHandle );
}


/*******************************************************************************
* FUNCTION:
*   STM32LockSurface
*
* DESCRIPTION:
*   The function LockSurface() provides a direct access to the pixel memory of
*   the given surface. The function returns a lock object containing pointers to
*   memory, where the caller can read/write the surface pixel values. Additional
*   pitch values also returned in the object allow the caller to calculate the
*   desired pixel addresses.
*
*   When finished the access cycle, the function UnlockSurface() should be used
*   in order to release the lock, update the affected surface, flush CPU caches,
*   etc.
*
* ARGUMENTS:
*   aHandle     - Handle to the surface to obtain the direct memory access.
*   aX, aY,
*   aWidth,
*   aHeight     - Area within the surface affected by the access operation.
*     (Relative to the top-left corner of the surface). This is the area, the
*     caller wish to read/write the pixel data.
*   aIndex,
*   Count       - Optional start index and number of entries within the CLUT,
*     the caller wish to read/write. These paramaters are used for surfaces
*     with the index8 color format only.
*   aReadPixel  - Is != 0, if the caller intends to read the pixel information
*     from the surface memory. If == 0, the memory content may remain undefined
*     depending on the underlying graphics sub-system and its video-memory
*     management.
*   aWritePixel - Is != 0, if the caller intends to modify the pixel information
*     within the surface memory. If == 0, any modifications within the memory
*     may remain ignored depending on the underlying graphics sub-system and its
*     video-memory management.
*   aReadClut   - Is != 0, if the caller intends to read the CLUT information.
*     If == 0, the CLUT content may remain undefined.
*   aWritePixel - Is != 0, if the caller intends to modify the CLUT information.
*     If == 0, any modifications within the memory may remain ignored depending
*     on the underlying graphics sub-system and its video-memory management.
*   aMemory     - Pointer to an object, where the desired surface pointers
*     should be stored.
*
* RETURN VALUE:
*   If successful, the function should return a kind of a lock object. This
*   object can contain additional information needed when the surface is
*   unlocked again. If you don't want to return additional information, return
*   any value != 0.
*
*   If there was not possible to lock the surface, or the desired access mode
*   is just not supported by the underlying graphics sub-system, the function
*   fails and returns zero. (e.g. OpenGL based sub-systems usually allow the
*   write access to surfaces (textures) only. Read access may fail in this
*   case).
*
*******************************************************************************/
unsigned long STM32LockSurface( unsigned long aHandle, int aX, int aY,
  int aWidth, int aHeight, int aIndex, int aCount, int aReadPixel, int aWritePixel,
  int aReadClut, int aWriteClut, XSurfaceMemory* aMemory )
{
  XSTM32Surface* surface = (XSTM32Surface*)aHandle;

#ifdef EW_USE_DMA2D_GRAPHICS_ACCELERATOR

  /* check if the DMA2D is currently accessing the given surface handle */
  if (( aHandle == DstSurfaceUsedByDMA2D ) || ( aWritePixel && ( aHandle == SrcSurfaceUsedByDMA2D )))
  {
    /* wait until hardware accelerated drawing operation is finished */
    EwBspGraphicsWaitForCompletion();

    /* clear the dst and src handles */
    DstSurfaceUsedByDMA2D = 0;
    SrcSurfaceUsedByDMA2D = 0;
  }

#endif

  /* return the details of the surface */
  aMemory->Pixel1  = (unsigned char *)surface->Pixel + (( aY * surface->Width ) + aX ) * surface->BytesPerPixel;
  aMemory->Pitch1Y = surface->Width * surface->BytesPerPixel;
  aMemory->Pitch1X = surface->BytesPerPixel;
  aMemory->Pixel2  = 0;
  aMemory->Pitch2Y = 0;
  aMemory->Pitch2X = 0;
  aMemory->Clut    = 0;

  return 1;
}


/*******************************************************************************
* FUNCTION:
*   STM32UnlockSurface
*
* DESCRIPTION:
*   The function STM32UnlockSurface() has the job to unlock the given surface and
*   if necessary free any temporary used resources.
*   This function is a counterpart to STM32LockSurface().
**
* ARGUMENTS:
*   aSurfaceHandle - Handle to the surface to release the direct memory access.
*   aLockHandle    - value returned by the corresponding LockSurface() call.
*     If LockSurface() has allocated memory for the lock object, you will need
*     to free it now.
*   aX, aY,
*   aWidth,
*   aHeight     - Area within the surface affected by the access operation.
*     (Relative to the top-left corner of the surface). This is the area, the
*     caller wished to read/write the pixel data.
*   aIndex,
*   Count       - Optional start index and number of entries within the CLUT,
*     the caller wished to read/write. These paramaters are used for surfaces
*     with the index8 color format only.
*   aWritePixel - Is != 0, if the caller has modified the pixel information
*     within the surface memory. If == 0, no modification took place, so no
*     surface updates are needed.
*   aWritePixel - Is != 0, if the caller has modified the CLUT information.
*     If == 0, no modification took place, so no surface updates are needed.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void STM32UnlockSurface( unsigned long aSurfaceHandle, unsigned long aLockHandle,
  int aX, int aY, int aWidth, int aHeight, int aIndex, int aCount, int aWritePixel,
  int aWriteClut )
{
}


#ifdef EW_USE_DMA2D_GRAPHICS_ACCELERATOR

/*******************************************************************************
* FUNCTION:
*   STM32FillDriver
*
* DESCRIPTION:
*   The function STM32FillDriver is called from the Graphics Engine, when a
*   rectangular area should be filled by using the DMA2D functionality.
*
* ARGUMENTS:
*   aDstHandle  - Handle to the native destination surface.
*   aDstX,
*   aDstY       - Origin of the area to fill (relative to the top-left corner
*      of the destination surface).
*   aWidth,
*   aHeight     - Size of the area to fill.
*   aBlend      - != 0 if the operation should be performed with alpha blending.
*   aColors     - Array with 4 RGBA8888 color values. The four color values do
*     correspond to the four corners of the area: top-left, top-right, bottom-
*     right and bottom-left.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void STM32FillDriver( unsigned long aDstHandle, int aDstX, int aDstY,
  int aWidth, int aHeight, int aBlend, unsigned long* aColors )
{
  XSurfaceMemory dstMem;
  void*          dst;
  int            dstOfs;
  int            dstFormat = ((XSTM32Surface*)aDstHandle)->Format;

  /* make a software emulation of the drawing function if the DMA2D is switched off */
  if ( UseDMA2D == 0 )
  {
    XGradient gradient;
    XFillWorker worker;

    /* obtain direct access to the destination buffer */
    STM32LockSurface( aDstHandle, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, &dstMem );

    /* select the necessary drawing function */
    if ( aBlend )
      worker = ( dstFormat == EW_PIXEL_FORMAT_SCREEN ) ? EwScreenFillRowSolidBlend : EwFillRowSolidBlend;
    else
      worker = ( dstFormat == EW_PIXEL_FORMAT_SCREEN ) ? EwScreenFillRowSolid : EwFillRowSolid;

    /* let the Graphics Engine make the drawing operation */
    EwInitColorGradient( aWidth, aHeight, (unsigned int*)aColors, &gradient );
    EwEmulateFill( &dstMem, aDstX, aDstY, aWidth, aHeight, &gradient, aWidth, aHeight, worker );
  }

  /* otherwise use the DMA2D hardware... */
  else
  {
    uint32_t dstColorFormat;
    uint32_t color = ( EW_ALPHA( aColors[0]) << 24 )
                   | ( EW_RED  ( aColors[0]) << 16 )
                   | ( EW_GREEN( aColors[0]) <<  8 )
                   |   EW_BLUE ( aColors[0]);

    /* obtain direct access to the destination buffer */
    STM32LockSurface( aDstHandle, aDstX, aDstY, aWidth, aHeight, 0, 0, 0, 1, 0, 0, &dstMem );

    /* get the start address in the destination and the offset */
    dst    = (void*)( dstMem.Pixel1 );
    dstOfs = ( dstMem.Pitch1Y / dstMem.Pitch1X ) - aWidth;

    /* convert the destination color format */
    dstColorFormat = ( dstFormat == EW_PIXEL_FORMAT_SCREEN ) ? DMA2D_OUTPUT_RGB565 : DMA2D_OUTPUT_ARGB8888;

    /* store the affected source and destination handles */
    DstSurfaceUsedByDMA2D = aDstHandle;
    SrcSurfaceUsedByDMA2D = 0;

    /* choose the appropriate DMA2D drawing operation */
    if ( aBlend )
      EwBspGraphicsFillBlend( (uint32_t)dst, dstOfs, aWidth, aHeight, dstColorFormat, color );
    else
      EwBspGraphicsFill( (uint32_t)dst, dstOfs, aWidth, aHeight, dstColorFormat, color );
  }
}


/*******************************************************************************
* PROTOTYPE:
*   STM32CopyDriver
*
* DESCRIPTION:
*   The following function performs the 'copy rectangular area' operation from a
*   native or alpha8 surface to a native surface.
*
* ARGUMENTS:
*   aDstHandle  - Handle to the native destination surface object. See the
*      function CreateSurface().
*   aSrcHandle  - Handle to the native/index8/alpha8 source surface object. See
*      the function CreateSurface().
*   aDstX,
*   aDstY       - Origin of the area to fill with the copied source surface
*     pixel (relative to the top-left corner of the destination surface).
*   aWidth,
*   aHeight     - Size of the area to fill with the copied source surface pixel.
*   aSrcX,
*   aSrcY       - Origin of the area to copy from the source surface.
*   aBlend      - != 0 if the operation should be performed with alpha blending.
*   aColors     - Array with 4 color values. These four values do correspond
*     to the four corners of the area: top-left, top-right, bottom-right and
*     bottom-left.
*     In case of an alpha8 source surface if all colors are equal, the solid
*     variant of the operation is assumed.
*     In case of native and index8 source surfaces if all colors are equal but
*     their alpha value < 255, the solid variant of the operation is assumed.
*     In case of native and index8 source surfaces if all colors are equal and
*     their alpha value == 255, the variant without any modulation is assumed.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void STM32CopyDriver( unsigned long aDstHandle, unsigned long aSrcHandle,
  int aDstX, int aDstY, int aSrcX, int aSrcY, int aWidth, int aHeight,
  int aBlend, unsigned long* aColors )
{
  XSurfaceMemory dstMem;
  void*          dst;
  int            dstOfs;
  XSurfaceMemory srcMem;
  void*          src;
  int            srcOfs;
  int            dstFormat = ((XSTM32Surface*)aDstHandle)->Format;

  /* make a software emulation of the drawing function if the DMA2D is switched off */
  if ( UseDMA2D == 0 )
  {
    XGradient gradient;
    XCopyWorker worker;

    /* obtain direct access to the destination buffer */
    STM32LockSurface( aDstHandle, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, &dstMem );

    /* obtain direct access to the source buffer */
    STM32LockSurface( aSrcHandle, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, &srcMem );

    /* select the necessary drawing function */
    worker = ( dstFormat == EW_PIXEL_FORMAT_SCREEN ) ? EwScreenCopyNativeRow : EwCopyNativeRow;

    /* let the Graphics Engine make the drawing operation */
    EwInitColorGradient( aWidth, aHeight, (unsigned int*)aColors, &gradient );
    EwEmulateCopy( &dstMem, &srcMem, aDstX, aDstY, aWidth, aHeight, aSrcX, aSrcY, &gradient, aWidth, aHeight, worker );
  }

  /* otherwise use the DMA2D hardware... */
  else
  {
    uint32_t dstColorFormat;

    /* obtain direct access to the destination buffer */
    STM32LockSurface( aDstHandle, aDstX, aDstY, aWidth, aHeight, 0, 0, 0, 1, 0, 0, &dstMem );

    /* obtain direct access to the source buffer */
    STM32LockSurface( aSrcHandle, aSrcX, aSrcY, aWidth, aHeight, 0, 0, 1, 0, 0, 0, &srcMem );

    /* get the start address in the source and destination and their offsets */
    dst    = (void*)( dstMem.Pixel1 );
    src    = (void*)( srcMem.Pixel1 );
    dstOfs = ( dstMem.Pitch1Y / dstMem.Pitch1X ) - aWidth;
    srcOfs = ( srcMem.Pitch1Y / srcMem.Pitch1X ) - aWidth;

    /* convert the destination color format */
    dstColorFormat = ( dstFormat == EW_PIXEL_FORMAT_SCREEN ) ? DMA2D_OUTPUT_RGB565 : DMA2D_OUTPUT_ARGB8888;

    /* store the affected source and destination handles */
    DstSurfaceUsedByDMA2D = aDstHandle;
    SrcSurfaceUsedByDMA2D = aSrcHandle;

    /* choose the appropriate DMA2D drawing operation */
    EwBspGraphicsCopy( (uint32_t)dst, (uint32_t)src, dstOfs, srcOfs, aWidth, aHeight, dstColorFormat, DMA2D_INPUT_ARGB8888 );
  }
}


/*******************************************************************************
* PROTOTYPE:
*   STM32BlendDriver
*
* DESCRIPTION:
*   The following function performs the 'blend rectangular area' operation from a
*   native or alpha8 surface to a native surface.
*
* ARGUMENTS:
*   aDstHandle  - Handle to the native destination surface object. See the
*      function CreateSurface().
*   aSrcHandle  - Handle to the native/index8/alpha8 source surface object. See
*      the function CreateSurface().
*   aDstX,
*   aDstY       - Origin of the area to fill with the copied source surface
*     pixel (relative to the top-left corner of the destination surface).
*   aWidth,
*   aHeight     - Size of the area to fill with the copied source surface pixel.
*   aSrcX,
*   aSrcY       - Origin of the area to copy from the source surface.
*   aBlend      - != 0 if the operation should be performed with alpha blending.
*   aColors     - Array with 4 color values. These four values do correspond
*     to the four corners of the area: top-left, top-right, bottom-right and
*     bottom-left.
*     In case of an alpha8 source surface if all colors are equal, the solid
*     variant of the operation is assumed.
*     In case of native and index8 source surfaces if all colors are equal but
*     their alpha value < 255, the solid variant of the operation is assumed.
*     In case of native and index8 source surfaces if all colors are equal and
*     their alpha value == 255, the variant withouto any modulation is assumed.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void STM32BlendDriver( unsigned long aDstHandle, unsigned long aSrcHandle,
  int aDstX, int aDstY, int aSrcX, int aSrcY, int aWidth, int aHeight,
  int aBlend, unsigned long* aColors )
{
  XSurfaceMemory dstMem;
  void*          dst;
  int            dstOfs;
  XSurfaceMemory srcMem;
  void*          src;
  int            srcOfs;
  unsigned char  alpha = EW_ALPHA( aColors[0]);
  int            srcFormat = ((XSTM32Surface*)aSrcHandle)->Format;
  int            dstFormat = ((XSTM32Surface*)aDstHandle)->Format;

  /* make a software emulation of the drawing function if the DMA2D is switched off */
  if ( UseDMA2D == 0 )
  {
    XGradient gradient;
    XCopyWorker worker = 0;

    /* obtain direct access to the destination buffer */
    STM32LockSurface( aDstHandle, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, &dstMem );

    /* obtain direct access to the source buffer */
    STM32LockSurface( aSrcHandle, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, &srcMem );

    /* select the necessary drawing function */
    if ( dstFormat == EW_PIXEL_FORMAT_SCREEN )
    {
      if ( srcFormat == EW_PIXEL_FORMAT_NATIVE )
        worker = (alpha == 0xFF) ? EwScreenCopyNativeRowBlend : EwScreenCopyNativeRowSolidBlend;
      else if ( srcFormat == EW_PIXEL_FORMAT_ALPHA8 )
        worker = EwScreenCopyAlpha8RowSolidBlend;
    }
    else
    {
      if ( srcFormat == EW_PIXEL_FORMAT_NATIVE )
        worker = (alpha == 0xFF) ? EwCopyNativeRowBlend : EwCopyNativeRowSolidBlend;
      else if ( srcFormat == EW_PIXEL_FORMAT_ALPHA8 )
        worker = EwCopyAlpha8RowSolidBlend;
    }

    /* let the Graphics Engine make the drawing operation */
    EwInitColorGradient( aWidth, aHeight, (unsigned int*)aColors, &gradient );
    EwEmulateCopy( &dstMem, &srcMem, aDstX, aDstY, aWidth, aHeight, aSrcX, aSrcY, &gradient, aWidth, aHeight, worker );
  }

  /* otherwise use the DMA2D hardware... */
  else
  {
    uint32_t dstColorFormat;
    uint32_t srcColorFormat;
    uint32_t color = ( EW_ALPHA( aColors[0]) << 24 )
                   | ( EW_RED  ( aColors[0]) << 16 )
                   | ( EW_GREEN( aColors[0]) <<  8 )
                   |   EW_BLUE ( aColors[0]);

    /* obtain direct access to the destination buffer */
    STM32LockSurface( aDstHandle, aDstX, aDstY, aWidth, aHeight, 0, 0, 0, 1, 0, 0, &dstMem );

    /* obtain direct access to the source buffer */
    STM32LockSurface( aSrcHandle, aSrcX, aSrcY, aWidth, aHeight, 0, 0, 1, 0, 0, 0, &srcMem );

    /* get the start address in the source and destination and their offsets */
    dst    = (void*)( dstMem.Pixel1 );
    src    = (void*)( srcMem.Pixel1 );
    dstOfs = ( dstMem.Pitch1Y / dstMem.Pitch1X ) - aWidth;
    srcOfs = ( srcMem.Pitch1Y / srcMem.Pitch1X ) - aWidth;

    /* convert the destination color format */
    dstColorFormat = ( dstFormat == EW_PIXEL_FORMAT_SCREEN ) ? DMA2D_OUTPUT_RGB565 : DMA2D_OUTPUT_ARGB8888;

    /* convert the source color format */
    srcColorFormat = ( srcFormat == EW_PIXEL_FORMAT_ALPHA8 ) ? DMA2D_INPUT_A8 : DMA2D_INPUT_ARGB8888;

    /* store the affected source and destination handles */
    DstSurfaceUsedByDMA2D = aDstHandle;
    SrcSurfaceUsedByDMA2D = aSrcHandle;

    /* choose the appropriate DMA2D drawing operation */
    EwBspGraphicsCopyBlend( (uint32_t)dst, (uint32_t)src, dstOfs, srcOfs, aWidth, aHeight, dstColorFormat, srcColorFormat, color );
  }
}


/*******************************************************************************
* FUNCTION:
*   STM32UseDMA2D
*
* DESCRIPTION:
*   The function STM32UseDMA2D can be used to switch on/off the usage of the
*   DMA2D dynamically during runtime. If the DMA2D is deactivated, the software
*   pixel driver of the Graphics Engine is used to execute the different
*   drawing operations.
*
* ARGUMENTS:
*   aActive     - Flag to control the usage of the DMA2D.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void STM32UseDMA2D( int aActive )
{
  /* just store the flag */
  UseDMA2D = aActive;

  /* and put a message to the terminal */
  if ( aActive )
    EwPrint( "DMA2D is now active...\n" );
  else
    EwPrint( "Attention: DMA2D is now disabled!\n" );
}


/*******************************************************************************
* FUNCTION:
*   STM32IsDMA2DUsed
*
* DESCRIPTION:
*   The function STM32IsDMA2DUsed returns a non zero value, if the DMA2D is
*   activated.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   A non zero value, if the DMA2D is activated.
*
*******************************************************************************/
int STM32IsDMA2DUsed( void )
{
  return UseDMA2D;
}

#endif /* EW_USE_DMA2D_GRAPHICS_ACCELERATOR */

/* msy, pba */
