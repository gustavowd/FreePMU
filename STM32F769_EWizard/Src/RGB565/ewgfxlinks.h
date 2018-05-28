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
*   This is an internal header of the Embedded Wizard Graphics Engine EWGFX. It
*   resolves the dependencies to the external graphics subsystem functionality
*   and replaces the missing functionality by Embedded Wizard own software pixel
*   driver.
*
*   The product of this header file is a set of arrays containing pointers to
*   external drawing functions or to the functions of the software pixel driver.
*
*   This header file also performs a rudimentary integrity test of the external
*   drawing and surface adaptation. If there are incomplete functionality, the
*   'C' preprocessor will report error messages.
*
*******************************************************************************/


/* Support of a platform specific screen surface? */
#if defined EwGfxLockScreenSurface ||                                          \
    defined EwGfxUnlockScreenSurface
  #define EwProvideScreenSurface
#endif


/* Support of a platform specific native surface? */
#if defined EwGfxCreateNativeSurface ||                                        \
    defined EwGfxCreateConstNativeSurface ||                                   \
    defined EwGfxDestroyNativeSurface ||                                       \
    defined EwGfxLockNativeSurface ||                                          \
    defined EwGfxUnlockNativeSurface
  #define EwProvideNativeSurface
#endif


/* Support of a platform specific index8 surface? */
#if defined EwGfxCreateIndex8Surface ||                                        \
    defined EwGfxCreateConstIndex8Surface ||                                   \
    defined EwGfxDestroyIndex8Surface ||                                       \
    defined EwGfxLockIndex8Surface ||                                          \
    defined EwGfxUnlockIndex8Surface
  #define EwProvideIndex8Surface
#endif


/* Support of a platform specific alpha8 surface? */
#if defined EwGfxCreateAlpha8Surface ||                                        \
    defined EwGfxCreateConstAlpha8Surface ||                                   \
    defined EwGfxDestroyAlpha8Surface ||                                       \
    defined EwGfxLockAlpha8Surface ||                                          \
    defined EwGfxUnlockAlpha8Surface
  #define EwProvideAlpha8Surface
#endif


/* Verify the integrity of the screen surface adaptation */
#if defined EwProvideScreenSurface &&                                          \
    (                                                                          \
      !defined EwGfxLockScreenSurface ||                                       \
      !defined EwGfxUnlockScreenSurface                                        \
    )
  #error "Incomplete screen surface support. Some functions are missing."
#endif


/* Verify the integrity of the native surface adaptation */
#if defined EwProvideNativeSurface &&                                          \
    (                                                                          \
      !defined EwGfxCreateNativeSurface ||                                     \
      !defined EwGfxDestroyNativeSurface ||                                    \
      !defined EwGfxLockNativeSurface ||                                       \
      !defined EwGfxUnlockNativeSurface                                        \
    )
  #error "Incomplete native surface support. Some functions are missing."
#endif


/* Verify the integrity of the index8 surface adaptation */
#if defined EwProvideIndex8Surface &&                                          \
    (                                                                          \
      !defined EwGfxCreateIndex8Surface ||                                     \
      !defined EwGfxDestroyIndex8Surface ||                                    \
      !defined EwGfxLockIndex8Surface ||                                       \
      !defined EwGfxUnlockIndex8Surface                                        \
    )
  #error "Incomplete index8 surface support. Some functions are missing."
#endif


/* Verify the integrity of the native surface adaptation */
#if defined EwProvideAlpha8Surface &&                                          \
    (                                                                          \
      !defined EwGfxCreateAlpha8Surface ||                                     \
      !defined EwGfxDestroyAlpha8Surface ||                                    \
      !defined EwGfxLockAlpha8Surface ||                                       \
      !defined EwGfxUnlockAlpha8Surface                                        \
    )
  #error "Incomplete alpha8 surface support. Some functions are missing."
#endif


/* Platform specific drawing operations involving screen surface as the
   destination? */
#if defined EwGfxScreenDrawLineSolid ||                                        \
    defined EwGfxScreenDrawLineSolidBlend ||                                   \
    defined EwGfxScreenFillSolid ||                                            \
    defined EwGfxScreenFillSolidBlend ||                                       \
    defined EwGfxScreenDrawLineGradient ||                                     \
    defined EwGfxScreenDrawLineGradientBlend ||                                \
    defined EwGfxScreenFillGradient ||                                         \
    defined EwGfxScreenFillGradientBlend ||                                    \
    defined EwGfxScreenPolygonSolid ||                                         \
    defined EwGfxScreenPolygonSolidBlend ||                                    \
    defined EwGfxScreenPolygonGradient ||                                      \
    defined EwGfxScreenPolygonGradientBlend ||                                 \
    defined EwGfxScreenPolygonAntialiasedSolid ||                              \
    defined EwGfxScreenPolygonAntialiasedSolidBlend ||                         \
    defined EwGfxScreenPolygonAntialiasedGradient ||                           \
    defined EwGfxScreenPolygonAntialiasedGradientBlend
  #define EwNeedScreenSurface
#endif


/* Platform specific drawing operations involving screen surface as the 
   destination and native surface as source? */
#if defined EwGfxScreenCopyNative ||                                           \
    defined EwGfxScreenCopyNativeBlend ||                                      \
    defined EwGfxScreenCopyNativeGradient ||                                   \
    defined EwGfxScreenCopyNativeGradientBlend ||                              \
    defined EwGfxScreenTileNative ||                                           \
    defined EwGfxScreenTileNativeBlend ||                                      \
    defined EwGfxScreenTileNativeSolid ||                                      \
    defined EwGfxScreenTileNativeSolidBlend ||                                 \
    defined EwGfxScreenTileNativeGradient ||                                   \
    defined EwGfxScreenTileNativeGradientBlend ||                              \
    defined EwGfxScreenWarpPerspNative ||                                      \
    defined EwGfxScreenWarpPerspNativeBlend ||                                 \
    defined EwGfxScreenWarpPerspNativeGradient ||                              \
    defined EwGfxScreenWarpPerspNativeGradientBlend ||                         \
    defined EwGfxScreenWarpPerspNativeFilter ||                                \
    defined EwGfxScreenWarpPerspNativeFilterBlend ||                           \
    defined EwGfxScreenWarpPerspNativeFilterGradient ||                        \
    defined EwGfxScreenWarpPerspNativeFilterGradientBlend ||                   \
    defined EwGfxScreenWarpAffineNative ||                                     \
    defined EwGfxScreenWarpAffineNativeBlend ||                                \
    defined EwGfxScreenWarpAffineNativeGradient ||                             \
    defined EwGfxScreenWarpAffineNativeGradientBlend ||                        \
    defined EwGfxScreenWarpAffineNativeFilter ||                               \
    defined EwGfxScreenWarpAffineNativeFilterBlend ||                          \
    defined EwGfxScreenWarpAffineNativeFilterGradient ||                       \
    defined EwGfxScreenWarpAffineNativeFilterGradientBlend ||                  \
    defined EwGfxScreenScaleNative ||                                          \
    defined EwGfxScreenScaleNativeBlend ||                                     \
    defined EwGfxScreenScaleNativeGradient ||                                  \
    defined EwGfxScreenScaleNativeGradientBlend ||                             \
    defined EwGfxScreenScaleNativeFilter ||                                    \
    defined EwGfxScreenScaleNativeFilterBlend ||                               \
    defined EwGfxScreenScaleNativeFilterGradient ||                            \
    defined EwGfxScreenScaleNativeFilterGradientBlend
  #define EwNeedScreenSurface
  #define EwNeedNativeSurface
#endif


/* Platform specific drawing operations involving native surface as source and
   destination? */
#if defined EwGfxDrawLineSolid ||                                              \
    defined EwGfxDrawLineSolidBlend ||                                         \
    defined EwGfxFillSolid ||                                                  \
    defined EwGfxFillSolidBlend ||                                             \
    defined EwGfxDrawLineGradient ||                                           \
    defined EwGfxDrawLineGradientBlend ||                                      \
    defined EwGfxFillGradient ||                                               \
    defined EwGfxFillGradientBlend ||                                          \
    defined EwGfxCopyNative ||                                                 \
    defined EwGfxCopyNativeBlend ||                                            \
    defined EwGfxCopyNativeGradient ||                                         \
    defined EwGfxCopyNativeGradientBlend ||                                    \
    defined EwGfxTileNative ||                                                 \
    defined EwGfxTileNativeBlend ||                                            \
    defined EwGfxTileNativeSolid ||                                            \
    defined EwGfxTileNativeSolidBlend ||                                       \
    defined EwGfxTileNativeGradient ||                                         \
    defined EwGfxTileNativeGradientBlend ||                                    \
    defined EwGfxWarpPerspNative ||                                            \
    defined EwGfxWarpPerspNativeBlend ||                                       \
    defined EwGfxWarpPerspNativeGradient ||                                    \
    defined EwGfxWarpPerspNativeGradientBlend ||                               \
    defined EwGfxWarpPerspNativeFilter ||                                      \
    defined EwGfxWarpPerspNativeFilterBlend ||                                 \
    defined EwGfxWarpPerspNativeFilterGradient ||                              \
    defined EwGfxWarpPerspNativeFilterGradientBlend ||                         \
    defined EwGfxWarpAffineNative ||                                           \
    defined EwGfxWarpAffineNativeBlend ||                                      \
    defined EwGfxWarpAffineNativeGradient ||                                   \
    defined EwGfxWarpAffineNativeGradientBlend ||                              \
    defined EwGfxWarpAffineNativeFilter ||                                     \
    defined EwGfxWarpAffineNativeFilterBlend ||                                \
    defined EwGfxWarpAffineNativeFilterGradient ||                             \
    defined EwGfxWarpAffineNativeFilterGradientBlend ||                        \
    defined EwGfxScaleNative ||                                                \
    defined EwGfxScaleNativeBlend ||                                           \
    defined EwGfxScaleNativeGradient ||                                        \
    defined EwGfxScaleNativeGradientBlend ||                                   \
    defined EwGfxScaleNativeFilter ||                                          \
    defined EwGfxScaleNativeFilterBlend ||                                     \
    defined EwGfxScaleNativeFilterGradient ||                                  \
    defined EwGfxScaleNativeFilterGradientBlend ||                             \
    defined EwGfxPolygonSolid ||                                               \
    defined EwGfxPolygonSolidBlend ||                                          \
    defined EwGfxPolygonGradient ||                                            \
    defined EwGfxPolygonGradientBlend ||                                       \
    defined EwGfxPolygonAntialiasedSolid ||                                    \
    defined EwGfxPolygonAntialiasedSolidBlend ||                               \
    defined EwGfxPolygonAntialiasedGradient ||                                 \
    defined EwGfxPolygonAntialiasedGradientBlend
  #define EwNeedNativeSurface
#endif


/* Platform specific drawing operations involving index8 surface as source and
   the screen surface as destination? */
#if defined EwGfxScreenCopyIndex8 ||                                           \
    defined EwGfxScreenCopyIndex8Blend ||                                      \
    defined EwGfxScreenCopyIndex8Gradient ||                                   \
    defined EwGfxScreenCopyIndex8GradientBlend ||                              \
    defined EwGfxScreenTileIndex8 ||                                           \
    defined EwGfxScreenTileIndex8Blend ||                                      \
    defined EwGfxScreenTileIndex8Solid ||                                      \
    defined EwGfxScreenTileIndex8SolidBlend ||                                 \
    defined EwGfxScreenTileIndex8Gradient ||                                   \
    defined EwGfxScreenTileIndex8GradientBlend ||                              \
    defined EwGfxScreenWarpPerspIndex8 ||                                      \
    defined EwGfxScreenWarpPerspIndex8Blend ||                                 \
    defined EwGfxScreenWarpPerspIndex8Gradient ||                              \
    defined EwGfxScreenWarpPerspIndex8GradientBlend ||                         \
    defined EwGfxScreenWarpPerspIndex8Filter ||                                \
    defined EwGfxScreenWarpPerspIndex8FilterBlend ||                           \
    defined EwGfxScreenWarpPerspIndex8FilterGradient ||                        \
    defined EwGfxScreenWarpPerspIndex8FilterGradientBlend ||                   \
    defined EwGfxScreenWarpAffineIndex8 ||                                     \
    defined EwGfxScreenWarpAffineIndex8Blend ||                                \
    defined EwGfxScreenWarpAffineIndex8Gradient ||                             \
    defined EwGfxScreenWarpAffineIndex8GradientBlend ||                        \
    defined EwGfxScreenWarpAffineIndex8Filter ||                               \
    defined EwGfxScreenWarpAffineIndex8FilterBlend ||                          \
    defined EwGfxScreenWarpAffineIndex8FilterGradient ||                       \
    defined EwGfxScreenWarpAffineIndex8FilterGradientBlend ||                  \
    defined EwGfxScreenScaleIndex8 ||                                          \
    defined EwGfxScreenScaleIndex8Blend ||                                     \
    defined EwGfxScreenScaleIndex8Gradient ||                                  \
    defined EwGfxScreenScaleIndex8GradientBlend ||                             \
    defined EwGfxScreenScaleIndex8Filter ||                                    \
    defined EwGfxScreenScaleIndex8FilterBlend ||                               \
    defined EwGfxScreenScaleIndex8FilterGradient ||                            \
    defined EwGfxScreenScaleIndex8FilterGradientBlend
  #define EwNeedScreenSurface
  #define EwNeedIndex8Surface
#endif


/* Platform specific drawing operations involving index8 surface as source and
   the native surface as destination? */
#if defined EwGfxCopyIndex8 ||                                                 \
    defined EwGfxCopyIndex8Blend ||                                            \
    defined EwGfxCopyIndex8Gradient ||                                         \
    defined EwGfxCopyIndex8GradientBlend ||                                    \
    defined EwGfxTileIndex8 ||                                                 \
    defined EwGfxTileIndex8Blend ||                                            \
    defined EwGfxTileIndex8Solid ||                                            \
    defined EwGfxTileIndex8SolidBlend ||                                       \
    defined EwGfxTileIndex8Gradient ||                                         \
    defined EwGfxTileIndex8GradientBlend ||                                    \
    defined EwGfxWarpPerspIndex8 ||                                            \
    defined EwGfxWarpPerspIndex8Blend ||                                       \
    defined EwGfxWarpPerspIndex8Gradient ||                                    \
    defined EwGfxWarpPerspIndex8GradientBlend ||                               \
    defined EwGfxWarpPerspIndex8Filter ||                                      \
    defined EwGfxWarpPerspIndex8FilterBlend ||                                 \
    defined EwGfxWarpPerspIndex8FilterGradient ||                              \
    defined EwGfxWarpPerspIndex8FilterGradientBlend ||                         \
    defined EwGfxWarpAffineIndex8 ||                                           \
    defined EwGfxWarpAffineIndex8Blend ||                                      \
    defined EwGfxWarpAffineIndex8Gradient ||                                   \
    defined EwGfxWarpAffineIndex8GradientBlend ||                              \
    defined EwGfxWarpAffineIndex8Filter ||                                     \
    defined EwGfxWarpAffineIndex8FilterBlend ||                                \
    defined EwGfxWarpAffineIndex8FilterGradient ||                             \
    defined EwGfxWarpAffineIndex8FilterGradientBlend ||                        \
    defined EwGfxScaleIndex8 ||                                                \
    defined EwGfxScaleIndex8Blend ||                                           \
    defined EwGfxScaleIndex8Gradient ||                                        \
    defined EwGfxScaleIndex8GradientBlend ||                                   \
    defined EwGfxScaleIndex8Filter ||                                          \
    defined EwGfxScaleIndex8FilterBlend ||                                     \
    defined EwGfxScaleIndex8FilterGradient ||                                  \
    defined EwGfxScaleIndex8FilterGradientBlend
  #define EwNeedNativeSurface
  #define EwNeedIndex8Surface
#endif


/* Platform specific drawing operations involving alpha8 surface as source and
   the screen surface as destination? */
#if defined EwGfxScreenCopyAlpha8Gradient ||                                   \
    defined EwGfxScreenCopyAlpha8GradientBlend ||                              \
    defined EwGfxScreenTileAlpha8Solid ||                                      \
    defined EwGfxScreenTileAlpha8SolidBlend ||                                 \
    defined EwGfxScreenTileAlpha8Gradient ||                                   \
    defined EwGfxScreenTileAlpha8GradientBlend ||                              \
    defined EwGfxScreenWarpPerspAlpha8Gradient ||                              \
    defined EwGfxScreenWarpPerspAlpha8GradientBlend ||                         \
    defined EwGfxScreenWarpPerspAlpha8FilterGradient ||                        \
    defined EwGfxScreenWarpPerspAlpha8FilterGradientBlend ||                   \
    defined EwGfxScreenWarpAffineAlpha8Gradient ||                             \
    defined EwGfxScreenWarpAffineAlpha8GradientBlend ||                        \
    defined EwGfxScreenWarpAffineAlpha8FilterGradient ||                       \
    defined EwGfxScreenWarpAffineAlpha8FilterGradientBlend ||                  \
    defined EwGfxScreenScaleAlpha8Gradient ||                                  \
    defined EwGfxScreenScaleAlpha8GradientBlend ||                             \
    defined EwGfxScreenScaleAlpha8FilterGradient ||                            \
    defined EwGfxScreenScaleAlpha8FilterGradientBlend
  #define EwNeedScreenSurface
  #define EwNeedAlpha8Surface
#endif


/* Platform specific drawing operations involving alpha8 surface as source and
   the native surface as destination? */
#if defined EwGfxCopyAlpha8Gradient ||                                         \
    defined EwGfxCopyAlpha8GradientBlend ||                                    \
    defined EwGfxTileAlpha8Solid ||                                            \
    defined EwGfxTileAlpha8SolidBlend ||                                       \
    defined EwGfxTileAlpha8Gradient ||                                         \
    defined EwGfxTileAlpha8GradientBlend ||                                    \
    defined EwGfxWarpPerspAlpha8Gradient ||                                    \
    defined EwGfxWarpPerspAlpha8GradientBlend ||                               \
    defined EwGfxWarpPerspAlpha8FilterGradient ||                              \
    defined EwGfxWarpPerspAlpha8FilterGradientBlend ||                         \
    defined EwGfxWarpAffineAlpha8Gradient ||                                   \
    defined EwGfxWarpAffineAlpha8GradientBlend ||                              \
    defined EwGfxWarpAffineAlpha8FilterGradient ||                             \
    defined EwGfxWarpAffineAlpha8FilterGradientBlend ||                        \
    defined EwGfxScaleAlpha8Gradient ||                                        \
    defined EwGfxScaleAlpha8GradientBlend ||                                   \
    defined EwGfxScaleAlpha8FilterGradient ||                                  \
    defined EwGfxScaleAlpha8FilterGradientBlend
  #define EwNeedNativeSurface
  #define EwNeedAlpha8Surface
#endif


/* Contradictory screen surface format configuration */
#if !defined EW_USE_PIXEL_FORMAT_SCREEN &&                            \
     defined EwProvideScreenSurface
  #error "Screen surface is defined but not used by the viewport."
#endif

/* Verify the integrity of the adaptation of screen target drawing operations */
#if defined EwNeedScreenSurface && !defined EwProvideScreenSurface
  #error "Screen surface drawing operations without screen surface support."
#endif


/* Verify the integrity of the adaptation of native drawing operations */
#if defined EwNeedNativeSurface && !defined EwProvideNativeSurface
  #error "Native surface drawing operations without native surface support."
#endif


/* Verify the integrity of the adaptation of index8 drawing operations */
#if defined EwNeedIndex8Surface && !defined EwProvideIndex8Surface
  #error "Index8 surface drawing operations without index8 surface support."
#endif


/* Verify the integrity of the adaptation of alpha8 drawing operations */
#if defined EwNeedAlpha8Surface && !defined EwProvideAlpha8Surface
  #error "Alpha8 drawing operations found but no alpha8 surface support."
#endif


/* Verify the integrity of the framebuffer/display adaptation */
#if !defined EwGfxInitViewport || !defined EwGfxDoneViewport
  #error "Incomplete viewport adaptation."
#endif

#if !defined EwGfxBeginUpdate || !defined EwGfxEndUpdate
  #error "Incomplete viewport adaptation."
#endif


/* Depending on the capabilities of the underlying graphics subsystem select
   a set of functions for the 'draw a line' operation.
   Missing functionality will be emulated by the software. */
#ifdef EwGfxDrawLineGradient
  #define EwSetPixelSolid            0
#else
  #define EwGfxDrawLineGradient      0
#endif

#ifdef EwGfxDrawLineGradientBlend
  #define EwSetPixelSolidBlend       0
#else
  #define EwGfxDrawLineGradientBlend 0
#endif

#ifndef EwGfxDrawLineSolid
  #define EwGfxDrawLineSolid         EwGfxDrawLineGradient
#endif

#ifndef EwGfxDrawLineSolidBlend
  #define EwGfxDrawLineSolidBlend    EwGfxDrawLineGradientBlend
#endif

#ifdef EwGfxScreenDrawLineGradient
  #define EwScreenSetPixelSolid            0
#else
  #define EwGfxScreenDrawLineGradient      0
#endif

#ifdef EwGfxScreenDrawLineGradientBlend
  #define EwScreenSetPixelSolidBlend       0
#else
  #define EwGfxScreenDrawLineGradientBlend 0
#endif

#ifndef EwGfxScreenDrawLineSolid
  #define EwGfxScreenDrawLineSolid         EwGfxScreenDrawLineGradient
#endif

#ifndef EwGfxScreenDrawLineSolidBlend
  #define EwGfxScreenDrawLineSolidBlend    EwGfxScreenDrawLineGradientBlend
#endif


/* Register the functionality provided by the underlying graphics subsystem. */
static const XLineDriver LineDrivers[] =
{
  0, 0,
  EwGfxDrawLineSolid,                EwGfxDrawLineSolidBlend, 
  EwGfxDrawLineGradient,             EwGfxDrawLineGradientBlend,

#ifdef EW_USE_PIXEL_FORMAT_SCREEN
  0, 0,
  EwGfxScreenDrawLineSolid,          EwGfxScreenDrawLineSolidBlend, 
  EwGfxScreenDrawLineGradient,       EwGfxScreenDrawLineGradientBlend,
#endif

  0
};


/* For missing graphics subsystem functionality, register alternative software
   emulated functions */
static const XLineWorker LineWorkers[] =
{
  0, 0,
  EwSetPixelSolid,                  EwSetPixelSolidBlend, 
  EwSetPixelSolid,                  EwSetPixelSolidBlend,

#ifdef EW_USE_PIXEL_FORMAT_SCREEN
  0, 0,
  EwScreenSetPixelSolid,            EwScreenSetPixelSolidBlend, 
  EwScreenSetPixelSolid,            EwScreenSetPixelSolidBlend,
#endif

  0
};


/* Depending on the capabilities of the underlying graphics subsystem select
   a set of functions for the 'fill rectangle' operation.
   Missing functionality will be emulated by the software. */
#ifdef EwGfxFillGradient
  #define EwFillRowGradient         0
  #define EwFillRowSolid            0
#else
  #define EwGfxFillGradient         0
#endif

#ifdef EwGfxFillGradientBlend
  #define EwFillRowGradientBlend    0
  #define EwFillRowSolidBlend       0
#else
  #define EwGfxFillGradientBlend    0
#endif

#ifndef EwGfxFillSolid
  #define EwGfxFillSolid            EwGfxFillGradient
#endif

#ifndef EwGfxFillSolidBlend
  #define EwGfxFillSolidBlend       EwGfxFillGradientBlend
#endif


#ifdef EwGfxScreenFillGradient
  #define EwScreenFillRowGradient         0
  #define EwScreenFillRowSolid            0
#else
  #define EwGfxScreenFillGradient         0
#endif

#ifdef EwGfxScreenFillGradientBlend
  #define EwScreenFillRowGradientBlend    0
  #define EwScreenFillRowSolidBlend       0
#else
  #define EwGfxScreenFillGradientBlend    0
#endif

#ifndef EwGfxScreenFillSolid
  #define EwGfxScreenFillSolid            EwGfxScreenFillGradient
#endif

#ifndef EwGfxScreenFillSolidBlend
  #define EwGfxScreenFillSolidBlend       EwGfxScreenFillGradientBlend
#endif


/* Register the functionality provided by the underlying graphics subsystem. */
static const XFillDriver FillDrivers[] =
{
  0, 0,
  EwGfxFillSolid,                   EwGfxFillSolidBlend, 
  EwGfxFillGradient,                EwGfxFillGradientBlend,

#ifdef EW_USE_PIXEL_FORMAT_SCREEN
  0, 0,
  EwGfxScreenFillSolid,             EwGfxScreenFillSolidBlend, 
  EwGfxScreenFillGradient,          EwGfxScreenFillGradientBlend,
#endif

  0
};


/* For missing graphics subsystem functionality, register alternative software
   emulated functions */
static const XFillWorker FillWorkers[] =
{
  0, 0,
  EwFillRowSolid,                   EwFillRowSolidBlend, 
  EwFillRowGradient,                EwFillRowGradientBlend,

#ifdef EW_USE_PIXEL_FORMAT_SCREEN
  0, 0,
  EwScreenFillRowSolid,             EwScreenFillRowSolidBlend, 
  EwScreenFillRowGradient,          EwScreenFillRowGradientBlend,
#endif

  0
};


/* Depending on the capabilities of the underlying graphics subsystem select
   a set of functions for the 'copy surface' operation.
   Missing functionality will be emulated by the software. */
#ifdef EwGfxCopyNative
  #define EwCopyNativeRow                 0
#else
  #define EwGfxCopyNative                 0
#endif

#ifdef EwGfxCopyNativeBlend
  #define EwCopyNativeRowBlend            0
#else
  #define EwGfxCopyNativeBlend            0
#endif

#ifdef EwGfxCopyNativeGradient
  #define EwCopyNativeRowGradient         0
  #define EwCopyNativeRowSolid            0
#else
  #define EwGfxCopyNativeGradient         0
#endif

#ifdef EwGfxCopyNativeGradientBlend
  #define EwCopyNativeRowGradientBlend    0
  #define EwCopyNativeRowSolidBlend       0
#else
  #define EwGfxCopyNativeGradientBlend    0
#endif

#ifndef EwGfxCopyNativeSolid
  #define EwGfxCopyNativeSolid            EwGfxCopyNativeGradient
#endif

#ifndef EwGfxCopyNativeSolidBlend
  #define EwGfxCopyNativeSolidBlend       EwGfxCopyNativeGradientBlend
#endif

#ifdef EwGfxCopyIndex8
  #define EwCopyIndex8Row                 0
#else
  #define EwGfxCopyIndex8                 0
#endif

#ifdef EwGfxCopyIndex8Blend
  #define EwCopyIndex8RowBlend            0
#else
  #define EwGfxCopyIndex8Blend            0
#endif

#ifdef EwGfxCopyIndex8Gradient
  #define EwCopyIndex8RowGradient         0
  #define EwCopyIndex8RowSolid            0
#else
  #define EwGfxCopyIndex8Gradient         0
#endif

#ifdef EwGfxCopyIndex8GradientBlend
  #define EwCopyIndex8RowGradientBlend    0
  #define EwCopyIndex8RowSolidBlend       0
#else
  #define EwGfxCopyIndex8GradientBlend    0
#endif

#ifndef EwGfxCopyIndex8Solid
  #define EwGfxCopyIndex8Solid            EwGfxCopyIndex8Gradient
#endif

#ifndef EwGfxCopyIndex8SolidBlend
  #define EwGfxCopyIndex8SolidBlend       EwGfxCopyIndex8GradientBlend
#endif

#ifdef EwGfxCopyAlpha8Gradient
  #define EwCopyAlpha8RowGradient         0
  #define EwCopyAlpha8RowSolid            0
#else
  #define EwGfxCopyAlpha8Gradient         0
#endif

#ifdef EwGfxCopyAlpha8GradientBlend
  #define EwCopyAlpha8RowGradientBlend    0
  #define EwCopyAlpha8RowSolidBlend       0
#else
  #define EwGfxCopyAlpha8GradientBlend    0
#endif

#ifndef EwGfxCopyAlpha8Solid
  #define EwGfxCopyAlpha8Solid            EwGfxCopyAlpha8Gradient
#endif

#ifndef EwGfxCopyAlpha8SolidBlend
  #define EwGfxCopyAlpha8SolidBlend       EwGfxCopyAlpha8GradientBlend
#endif

#ifdef EwGfxScreenCopyNative
  #define EwScreenCopyNativeRow                 0
#else
  #define EwGfxScreenCopyNative                 0
#endif

#ifdef EwGfxScreenCopyNativeBlend
  #define EwScreenCopyNativeRowBlend            0
#else
  #define EwGfxScreenCopyNativeBlend            0
#endif

#ifdef EwGfxScreenCopyNativeGradient
  #define EwScreenCopyNativeRowGradient         0
  #define EwScreenCopyNativeRowSolid            0
#else
  #define EwGfxScreenCopyNativeGradient         0
#endif

#ifdef EwGfxScreenCopyNativeGradientBlend
  #define EwScreenCopyNativeRowGradientBlend    0
  #define EwScreenCopyNativeRowSolidBlend       0
#else
  #define EwGfxScreenCopyNativeGradientBlend    0
#endif

#ifndef EwGfxScreenCopyNativeSolid
  #define EwGfxScreenCopyNativeSolid            EwGfxScreenCopyNativeGradient
#endif

#ifndef EwGfxScreenCopyNativeSolidBlend
  #define EwGfxScreenCopyNativeSolidBlend       EwGfxScreenCopyNativeGradientBlend
#endif

#ifdef EwGfxScreenCopyIndex8
  #define EwScreenCopyIndex8Row                 0
#else
  #define EwGfxScreenCopyIndex8                 0
#endif

#ifdef EwGfxScreenCopyIndex8Blend
  #define EwScreenCopyIndex8RowBlend            0
#else
  #define EwGfxScreenCopyIndex8Blend            0
#endif

#ifdef EwGfxScreenCopyIndex8Gradient
  #define EwScreenCopyIndex8RowGradient         0
  #define EwScreenCopyIndex8RowSolid            0
#else
  #define EwGfxScreenCopyIndex8Gradient         0
#endif

#ifdef EwGfxScreenCopyIndex8GradientBlend
  #define EwScreenCopyIndex8RowGradientBlend    0
  #define EwScreenCopyIndex8RowSolidBlend       0
#else
  #define EwGfxScreenCopyIndex8GradientBlend    0
#endif

#ifndef EwGfxScreenCopyIndex8Solid
  #define EwGfxScreenCopyIndex8Solid            EwGfxScreenCopyIndex8Gradient
#endif

#ifndef EwGfxScreenCopyIndex8SolidBlend
  #define EwGfxScreenCopyIndex8SolidBlend       EwGfxScreenCopyIndex8GradientBlend
#endif

#ifdef EwGfxScreenCopyAlpha8Gradient
  #define EwScreenCopyAlpha8RowGradient         0
  #define EwScreenCopyAlpha8RowSolid            0
#else
  #define EwGfxScreenCopyAlpha8Gradient         0
#endif

#ifdef EwGfxScreenCopyAlpha8GradientBlend
  #define EwScreenCopyAlpha8RowGradientBlend    0
  #define EwScreenCopyAlpha8RowSolidBlend       0
#else
  #define EwGfxScreenCopyAlpha8GradientBlend    0
#endif

#ifndef EwGfxScreenCopyAlpha8Solid
  #define EwGfxScreenCopyAlpha8Solid            EwGfxScreenCopyAlpha8Gradient
#endif

#ifndef EwGfxScreenCopyAlpha8SolidBlend
  #define EwGfxScreenCopyAlpha8SolidBlend       EwGfxScreenCopyAlpha8GradientBlend
#endif


/* Register the functionality provided by the underlying graphics subsystem. */
static const XCopyDriver CopyDrivers[] =
{
  EwGfxCopyNative,                  EwGfxCopyNativeBlend,
  EwGfxCopyNativeSolid,             EwGfxCopyNativeSolidBlend,
  EwGfxCopyNativeGradient,          EwGfxCopyNativeGradientBlend,
  0,                                0,
  EwGfxCopyIndex8,                  EwGfxCopyIndex8Blend,
  EwGfxCopyIndex8Solid,             EwGfxCopyIndex8SolidBlend,
  EwGfxCopyIndex8Gradient,          EwGfxCopyIndex8GradientBlend,
  0,                                0,
  0,                                0,
  EwGfxCopyAlpha8Solid,             EwGfxCopyAlpha8SolidBlend,
  EwGfxCopyAlpha8Gradient,          EwGfxCopyAlpha8GradientBlend,

#ifdef EW_USE_PIXEL_FORMAT_SCREEN
  EwGfxScreenCopyNative,            EwGfxScreenCopyNativeBlend,
  EwGfxScreenCopyNativeSolid,       EwGfxScreenCopyNativeSolidBlend,
  EwGfxScreenCopyNativeGradient,    EwGfxScreenCopyNativeGradientBlend,
  0,                                0,
  EwGfxScreenCopyIndex8,            EwGfxScreenCopyIndex8Blend,
  EwGfxScreenCopyIndex8Solid,       EwGfxScreenCopyIndex8SolidBlend,
  EwGfxScreenCopyIndex8Gradient,    EwGfxScreenCopyIndex8GradientBlend,
  0,                                0,
  0,                                0,
  EwGfxScreenCopyAlpha8Solid,       EwGfxScreenCopyAlpha8SolidBlend,
  EwGfxScreenCopyAlpha8Gradient,    EwGfxScreenCopyAlpha8GradientBlend,
#endif

  0
};


/* For missing graphics subsystem functionality, register alternative software
   emulated functions */
static const XCopyWorker CopyWorkers[] =
{
  EwCopyNativeRow,                  EwCopyNativeRowBlend,
  EwCopyNativeRowSolid,             EwCopyNativeRowSolidBlend,
  EwCopyNativeRowGradient,          EwCopyNativeRowGradientBlend,
  0,                                0,
  EwCopyIndex8Row,                  EwCopyIndex8RowBlend,
  EwCopyIndex8RowSolid,             EwCopyIndex8RowSolidBlend,
  EwCopyIndex8RowGradient,          EwCopyIndex8RowGradientBlend,
  0,                                0,
  0,                                0,
  EwCopyAlpha8RowSolid,             EwCopyAlpha8RowSolidBlend,
  EwCopyAlpha8RowGradient,          EwCopyAlpha8RowGradientBlend,

#ifdef EW_USE_PIXEL_FORMAT_SCREEN
  EwScreenCopyNativeRow,            EwScreenCopyNativeRowBlend,
  EwScreenCopyNativeRowSolid,       EwScreenCopyNativeRowSolidBlend,
  EwScreenCopyNativeRowGradient,    EwScreenCopyNativeRowGradientBlend,
  0,                                0,
  EwScreenCopyIndex8Row,            EwScreenCopyIndex8RowBlend,
  EwScreenCopyIndex8RowSolid,       EwScreenCopyIndex8RowSolidBlend,
  EwScreenCopyIndex8RowGradient,    EwScreenCopyIndex8RowGradientBlend,
  0,                                0,
  0,                                0,
  EwScreenCopyAlpha8RowSolid,       EwScreenCopyAlpha8RowSolidBlend,
  EwScreenCopyAlpha8RowGradient,    EwScreenCopyAlpha8RowGradientBlend,
#endif

  0
};


/* Depending on the capabilities of the underlying graphics subsystem select
   a set of functions for the 'tile surface' operation. For missing tile
   functionality multiple copy operations will be used. */
#ifndef EwGfxTileNative
  #define EwGfxTileNative              0
#endif

#ifndef EwGfxTileNativeBlend
  #define EwGfxTileNativeBlend         0
#endif

#ifndef EwGfxTileNativeSolid
  #define EwGfxTileNativeSolid         0
#endif

#ifndef EwGfxTileNativeSolidBlend
  #define EwGfxTileNativeSolidBlend    0
#endif

#ifndef EwGfxTileNativeGradient
  #define EwGfxTileNativeGradient      0
#endif

#ifndef EwGfxTileNativeGradientBlend
  #define EwGfxTileNativeGradientBlend 0
#endif

#ifndef EwGfxTileIndex8
  #define EwGfxTileIndex8              0
#endif

#ifndef EwGfxTileIndex8Blend
  #define EwGfxTileIndex8Blend         0
#endif

#ifndef EwGfxTileIndex8Solid
  #define EwGfxTileIndex8Solid         0
#endif

#ifndef EwGfxTileIndex8SolidBlend
  #define EwGfxTileIndex8SolidBlend    0
#endif

#ifndef EwGfxTileIndex8Gradient
  #define EwGfxTileIndex8Gradient      0
#endif

#ifndef EwGfxTileIndex8GradientBlend
  #define EwGfxTileIndex8GradientBlend 0
#endif

#ifndef EwGfxTileAlpha8Solid
  #define EwGfxTileAlpha8Solid         0
#endif

#ifndef EwGfxTileAlpha8SolidBlend
  #define EwGfxTileAlpha8SolidBlend    0
#endif

#ifndef EwGfxTileAlpha8Gradient
  #define EwGfxTileAlpha8Gradient      0
#endif

#ifndef EwGfxTileAlpha8GradientBlend
  #define EwGfxTileAlpha8GradientBlend 0
#endif

#ifndef EwGfxScreenTileNative
  #define EwGfxScreenTileNative              0
#endif

#ifndef EwGfxScreenTileNativeBlend
  #define EwGfxScreenTileNativeBlend         0
#endif

#ifndef EwGfxScreenTileNativeSolid
  #define EwGfxScreenTileNativeSolid         0
#endif

#ifndef EwGfxScreenTileNativeSolidBlend
  #define EwGfxScreenTileNativeSolidBlend    0
#endif

#ifndef EwGfxScreenTileNativeGradient
  #define EwGfxScreenTileNativeGradient      0
#endif

#ifndef EwGfxScreenTileNativeGradientBlend
  #define EwGfxScreenTileNativeGradientBlend 0
#endif

#ifndef EwGfxScreenTileIndex8
  #define EwGfxScreenTileIndex8              0
#endif

#ifndef EwGfxScreenTileIndex8Blend
  #define EwGfxScreenTileIndex8Blend         0
#endif

#ifndef EwGfxScreenTileIndex8Solid
  #define EwGfxScreenTileIndex8Solid         0
#endif

#ifndef EwGfxScreenTileIndex8SolidBlend
  #define EwGfxScreenTileIndex8SolidBlend    0
#endif

#ifndef EwGfxScreenTileIndex8Gradient
  #define EwGfxScreenTileIndex8Gradient      0
#endif

#ifndef EwGfxScreenTileIndex8GradientBlend
  #define EwGfxScreenTileIndex8GradientBlend 0
#endif

#ifndef EwGfxScreenTileAlpha8Solid
  #define EwGfxScreenTileAlpha8Solid         0
#endif

#ifndef EwGfxScreenTileAlpha8SolidBlend
  #define EwGfxScreenTileAlpha8SolidBlend    0
#endif

#ifndef EwGfxScreenTileAlpha8Gradient
  #define EwGfxScreenTileAlpha8Gradient      0
#endif

#ifndef EwGfxScreenTileAlpha8GradientBlend
  #define EwGfxScreenTileAlpha8GradientBlend 0
#endif


/* Register the functionality provided by the underlying graphics subsystem. */
static const XTileDriver TileDrivers[] =
{
  EwGfxTileNative,                  EwGfxTileNativeBlend,
  EwGfxTileNativeSolid,             EwGfxTileNativeSolidBlend,
  EwGfxTileNativeGradient,          EwGfxTileNativeGradientBlend,
  0,                                0,
  EwGfxTileIndex8,                  EwGfxTileIndex8Blend,
  EwGfxTileIndex8Solid,             EwGfxTileIndex8SolidBlend,
  EwGfxTileIndex8Gradient,          EwGfxTileIndex8GradientBlend,
  0,                                0,
  0,                                0,
  EwGfxTileAlpha8Solid,             EwGfxTileAlpha8SolidBlend,
  EwGfxTileAlpha8Gradient,          EwGfxTileAlpha8GradientBlend,

#ifdef EW_USE_PIXEL_FORMAT_SCREEN
  EwGfxScreenTileNative,            EwGfxScreenTileNativeBlend,
  EwGfxScreenTileNativeSolid,       EwGfxScreenTileNativeSolidBlend,
  EwGfxScreenTileNativeGradient,    EwGfxScreenTileNativeGradientBlend,
  0,                                0,
  EwGfxScreenTileIndex8,            EwGfxScreenTileIndex8Blend,
  EwGfxScreenTileIndex8Solid,       EwGfxScreenTileIndex8SolidBlend,
  EwGfxScreenTileIndex8Gradient,    EwGfxScreenTileIndex8GradientBlend,
  0,                                0,
  0,                                0,
  EwGfxScreenTileAlpha8Solid,       EwGfxScreenTileAlpha8SolidBlend,
  EwGfxScreenTileAlpha8Gradient,    EwGfxScreenTileAlpha8GradientBlend,
#endif

  0
};


/* Depending on the capabilities of the underlying graphics subsystem select
   a set of functions for the 'warp perspective surface' operation.
   Missing functionality will be emulated by the software. */
#ifdef EwGfxWarpPerspNative
  #define EwWarpPerspNativeRow                       0
#else
  #define EwGfxWarpPerspNative                       0
  #define EwWarpPerspNativeRow                       EwWarpNativeRow
#endif

#ifdef EwGfxWarpPerspNativeBlend
  #define EwWarpPerspNativeRowBlend                  0
#else
  #define EwGfxWarpPerspNativeBlend                  0
  #define EwWarpPerspNativeRowBlend                  EwWarpNativeRowBlend
#endif

#ifdef EwGfxWarpPerspNativeGradient
  #define EwWarpPerspNativeRowGradient               0
  #define EwWarpPerspNativeRowSolid                  0
#else
  #define EwGfxWarpPerspNativeGradient               0
  #define EwWarpPerspNativeRowGradient               EwWarpNativeRowGradient
#endif

#ifdef EwGfxWarpPerspNativeGradientBlend
  #define EwWarpPerspNativeRowGradientBlend          0
  #define EwWarpPerspNativeRowSolidBlend             0
#else
  #define EwGfxWarpPerspNativeGradientBlend          0
  #define EwWarpPerspNativeRowGradientBlend \
    EwWarpNativeRowGradientBlend
#endif

#ifdef EwGfxWarpPerspNativeFilter
  #define EwWarpPerspNativeRowFilter                 0
#else
  #define EwGfxWarpPerspNativeFilter                 0
  #define EwWarpPerspNativeRowFilter                 EwWarpNativeRowFilter
#endif

#ifdef EwGfxWarpPerspNativeFilterBlend
  #define EwWarpPerspNativeRowFilterBlend            0
#else
  #define EwGfxWarpPerspNativeFilterBlend            0
  #define EwWarpPerspNativeRowFilterBlend            EwWarpNativeRowFilterBlend
#endif

#ifdef EwGfxWarpPerspNativeFilterGradient
  #define EwWarpPerspNativeRowFilterGradient         0
  #define EwWarpPerspNativeRowFilterSolid            0
#else
  #define EwGfxWarpPerspNativeFilterGradient         0
  #define EwWarpPerspNativeRowFilterGradient \
    EwWarpNativeRowFilterGradient
#endif

#ifdef EwGfxWarpPerspNativeFilterGradientBlend
  #define EwWarpPerspNativeRowFilterGradientBlend    0
  #define EwWarpPerspNativeRowFilterSolidBlend       0
#else
  #define EwGfxWarpPerspNativeFilterGradientBlend    0
  #define EwWarpPerspNativeRowFilterGradientBlend \
    EwWarpNativeRowFilterGradientBlend
#endif

#ifndef EwGfxWarpPerspNativeSolid
  #define EwGfxWarpPerspNativeSolid          EwGfxWarpPerspNativeGradient
#endif

#ifndef EwGfxWarpPerspNativeSolidBlend
  #define EwGfxWarpPerspNativeSolidBlend     EwGfxWarpPerspNativeGradientBlend
#endif

#ifndef EwGfxWarpPerspNativeFilterSolid
  #define EwGfxWarpPerspNativeFilterSolid    EwGfxWarpPerspNativeFilterGradient
#endif

#ifndef EwGfxWarpPerspNativeFilterSolidBlend
  #define EwGfxWarpPerspNativeFilterSolidBlend \
    EwGfxWarpPerspNativeFilterGradientBlend
#endif

#ifndef EwWarpPerspNativeRowSolid
  #define EwWarpPerspNativeRowSolid             EwWarpNativeRowSolid
#endif

#ifndef EwWarpPerspNativeRowSolidBlend
  #define EwWarpPerspNativeRowSolidBlend        EwWarpNativeRowSolidBlend
#endif

#ifndef EwWarpPerspNativeRowFilterSolid
  #define EwWarpPerspNativeRowFilterSolid       EwWarpNativeRowFilterSolid
#endif

#ifndef EwWarpPerspNativeRowFilterSolidBlend
  #define EwWarpPerspNativeRowFilterSolidBlend  EwWarpNativeRowFilterSolidBlend
#endif

#ifdef EwGfxWarpPerspIndex8
  #define EwWarpPerspIndex8Row                       0
#else
  #define EwGfxWarpPerspIndex8                       0
  #define EwWarpPerspIndex8Row                       EwWarpIndex8Row
#endif

#ifdef EwGfxWarpPerspIndex8Blend
  #define EwWarpPerspIndex8RowBlend                  0
#else
  #define EwGfxWarpPerspIndex8Blend                  0
  #define EwWarpPerspIndex8RowBlend                  EwWarpIndex8RowBlend
#endif

#ifdef EwGfxWarpPerspIndex8Gradient
  #define EwWarpPerspIndex8RowGradient               0
  #define EwWarpPerspIndex8RowSolid                  0
#else
  #define EwGfxWarpPerspIndex8Gradient               0
  #define EwWarpPerspIndex8RowGradient               EwWarpIndex8RowGradient
#endif

#ifdef EwGfxWarpPerspIndex8GradientBlend
  #define EwWarpPerspIndex8RowGradientBlend          0
  #define EwWarpPerspIndex8RowSolidBlend             0
#else
  #define EwGfxWarpPerspIndex8GradientBlend          0
  #define EwWarpPerspIndex8RowGradientBlend \
    EwWarpIndex8RowGradientBlend
#endif

#ifdef EwGfxWarpPerspIndex8Filter
  #define EwWarpPerspIndex8RowFilter                 0
#else
  #define EwGfxWarpPerspIndex8Filter                 0
  #define EwWarpPerspIndex8RowFilter                 EwWarpIndex8RowFilter
#endif

#ifdef EwGfxWarpPerspIndex8FilterBlend
  #define EwWarpPerspIndex8RowFilterBlend            0
#else
  #define EwGfxWarpPerspIndex8FilterBlend            0
  #define EwWarpPerspIndex8RowFilterBlend            EwWarpIndex8RowFilterBlend
#endif

#ifdef EwGfxWarpPerspIndex8FilterGradient
  #define EwWarpPerspIndex8RowFilterGradient         0
  #define EwWarpPerspIndex8RowFilterSolid            0
#else
  #define EwGfxWarpPerspIndex8FilterGradient         0
  #define EwWarpPerspIndex8RowFilterGradient \
    EwWarpIndex8RowFilterGradient
#endif

#ifdef EwGfxWarpPerspIndex8FilterGradientBlend
  #define EwWarpPerspIndex8RowFilterGradientBlend    0
  #define EwWarpPerspIndex8RowFilterSolidBlend       0
#else
  #define EwGfxWarpPerspIndex8FilterGradientBlend    0
  #define EwWarpPerspIndex8RowFilterGradientBlend \
    EwWarpIndex8RowFilterGradientBlend
#endif

#ifndef EwGfxWarpPerspIndex8Solid
  #define EwGfxWarpPerspIndex8Solid          EwGfxWarpPerspIndex8Gradient
#endif

#ifndef EwGfxWarpPerspIndex8SolidBlend
  #define EwGfxWarpPerspIndex8SolidBlend     EwGfxWarpPerspIndex8GradientBlend
#endif

#ifndef EwGfxWarpPerspIndex8FilterSolid
  #define EwGfxWarpPerspIndex8FilterSolid    EwGfxWarpPerspIndex8FilterGradient
#endif

#ifndef EwGfxWarpPerspIndex8FilterSolidBlend
  #define EwGfxWarpPerspIndex8FilterSolidBlend \
    EwGfxWarpPerspIndex8FilterGradientBlend
#endif

#ifndef EwWarpPerspIndex8RowSolid
  #define EwWarpPerspIndex8RowSolid             EwWarpIndex8RowSolid
#endif

#ifndef EwWarpPerspIndex8RowSolidBlend
  #define EwWarpPerspIndex8RowSolidBlend        EwWarpIndex8RowSolidBlend
#endif

#ifndef EwWarpPerspIndex8RowFilterSolid
  #define EwWarpPerspIndex8RowFilterSolid       EwWarpIndex8RowFilterSolid
#endif

#ifndef EwWarpPerspIndex8RowFilterSolidBlend
  #define EwWarpPerspIndex8RowFilterSolidBlend  EwWarpIndex8RowFilterSolidBlend
#endif

#ifdef EwGfxWarpPerspAlpha8Gradient
  #define EwWarpPerspAlpha8RowGradient               0
  #define EwWarpPerspAlpha8RowSolid                  0
#else
  #define EwGfxWarpPerspAlpha8Gradient               0
  #define EwWarpPerspAlpha8RowGradient               EwWarpAlpha8RowGradient
#endif

#ifdef EwGfxWarpPerspAlpha8GradientBlend
  #define EwWarpPerspAlpha8RowGradientBlend          0
  #define EwWarpPerspAlpha8RowSolidBlend             0
#else
  #define EwGfxWarpPerspAlpha8GradientBlend          0
  #define EwWarpPerspAlpha8RowGradientBlend \
    EwWarpAlpha8RowGradientBlend
#endif

#ifdef EwGfxWarpPerspAlpha8FilterGradient
  #define EwWarpPerspAlpha8RowFilterGradient         0
  #define EwWarpPerspAlpha8RowFilterSolid            0
#else
  #define EwGfxWarpPerspAlpha8FilterGradient         0
  #define EwWarpPerspAlpha8RowFilterGradient \
    EwWarpAlpha8RowFilterGradient
#endif

#ifdef EwGfxWarpPerspAlpha8FilterGradientBlend
  #define EwWarpPerspAlpha8RowFilterGradientBlend    0
  #define EwWarpPerspAlpha8RowFilterSolidBlend       0
#else
  #define EwGfxWarpPerspAlpha8FilterGradientBlend    0
  #define EwWarpPerspAlpha8RowFilterGradientBlend \
    EwWarpAlpha8RowFilterGradientBlend
#endif

#ifndef EwGfxWarpPerspAlpha8Solid
  #define EwGfxWarpPerspAlpha8Solid          EwGfxWarpPerspAlpha8Gradient
#endif

#ifndef EwGfxWarpPerspAlpha8SolidBlend
  #define EwGfxWarpPerspAlpha8SolidBlend     EwGfxWarpPerspAlpha8GradientBlend
#endif

#ifndef EwGfxWarpPerspAlpha8FilterSolid
  #define EwGfxWarpPerspAlpha8FilterSolid    EwGfxWarpPerspAlpha8FilterGradient
#endif

#ifndef EwGfxWarpPerspAlpha8FilterSolidBlend
  #define EwGfxWarpPerspAlpha8FilterSolidBlend \
    EwGfxWarpPerspAlpha8FilterGradientBlend
#endif

#ifndef EwWarpPerspAlpha8RowSolid
  #define EwWarpPerspAlpha8RowSolid             EwWarpAlpha8RowSolid
#endif

#ifndef EwWarpPerspAlpha8RowSolidBlend
  #define EwWarpPerspAlpha8RowSolidBlend        EwWarpAlpha8RowSolidBlend
#endif

#ifndef EwWarpPerspAlpha8RowFilterSolid
  #define EwWarpPerspAlpha8RowFilterSolid       EwWarpAlpha8RowFilterSolid
#endif

#ifndef EwWarpPerspAlpha8RowFilterSolidBlend
  #define EwWarpPerspAlpha8RowFilterSolidBlend  EwWarpAlpha8RowFilterSolidBlend
#endif

#ifdef EwGfxScreenWarpPerspNative
  #define EwScreenWarpPerspNativeRow                       0
#else
  #define EwGfxScreenWarpPerspNative                       0
  #define EwScreenWarpPerspNativeRow                       EwScreenWarpNativeRow
#endif

#ifdef EwGfxScreenWarpPerspNativeBlend
  #define EwScreenWarpPerspNativeRowBlend                  0
#else
  #define EwGfxScreenWarpPerspNativeBlend                  0
  #define EwScreenWarpPerspNativeRowBlend                  EwScreenWarpNativeRowBlend
#endif

#ifdef EwGfxScreenWarpPerspNativeGradient
  #define EwScreenWarpPerspNativeRowGradient               0
  #define EwScreenWarpPerspNativeRowSolid                  0
#else
  #define EwGfxScreenWarpPerspNativeGradient               0
  #define EwScreenWarpPerspNativeRowGradient               EwScreenWarpNativeRowGradient
#endif

#ifdef EwGfxScreenWarpPerspNativeGradientBlend
  #define EwScreenWarpPerspNativeRowGradientBlend          0
  #define EwScreenWarpPerspNativeRowSolidBlend             0
#else
  #define EwGfxScreenWarpPerspNativeGradientBlend          0
  #define EwScreenWarpPerspNativeRowGradientBlend \
    EwScreenWarpNativeRowGradientBlend
#endif

#ifdef EwGfxScreenWarpPerspNativeFilter
  #define EwScreenWarpPerspNativeRowFilter                 0
#else
  #define EwGfxScreenWarpPerspNativeFilter                 0
  #define EwScreenWarpPerspNativeRowFilter                 EwScreenWarpNativeRowFilter
#endif

#ifdef EwGfxScreenWarpPerspNativeFilterBlend
  #define EwScreenWarpPerspNativeRowFilterBlend            0
#else
  #define EwGfxScreenWarpPerspNativeFilterBlend            0
  #define EwScreenWarpPerspNativeRowFilterBlend            EwScreenWarpNativeRowFilterBlend
#endif

#ifdef EwGfxScreenWarpPerspNativeFilterGradient
  #define EwScreenWarpPerspNativeRowFilterGradient         0
  #define EwScreenWarpPerspNativeRowFilterSolid            0
#else
  #define EwGfxScreenWarpPerspNativeFilterGradient         0
  #define EwScreenWarpPerspNativeRowFilterGradient \
    EwScreenWarpNativeRowFilterGradient
#endif

#ifdef EwGfxScreenWarpPerspNativeFilterGradientBlend
  #define EwScreenWarpPerspNativeRowFilterGradientBlend    0
  #define EwScreenWarpPerspNativeRowFilterSolidBlend       0
#else
  #define EwGfxScreenWarpPerspNativeFilterGradientBlend    0
  #define EwScreenWarpPerspNativeRowFilterGradientBlend \
    EwScreenWarpNativeRowFilterGradientBlend
#endif

#ifndef EwGfxScreenWarpPerspNativeSolid
  #define EwGfxScreenWarpPerspNativeSolid          EwGfxScreenWarpPerspNativeGradient
#endif

#ifndef EwGfxScreenWarpPerspNativeSolidBlend
  #define EwGfxScreenWarpPerspNativeSolidBlend     EwGfxScreenWarpPerspNativeGradientBlend
#endif

#ifndef EwGfxScreenWarpPerspNativeFilterSolid
  #define EwGfxScreenWarpPerspNativeFilterSolid    EwGfxScreenWarpPerspNativeFilterGradient
#endif

#ifndef EwGfxScreenWarpPerspNativeFilterSolidBlend
  #define EwGfxScreenWarpPerspNativeFilterSolidBlend \
    EwGfxScreenWarpPerspNativeFilterGradientBlend
#endif

#ifndef EwScreenWarpPerspNativeRowSolid
  #define EwScreenWarpPerspNativeRowSolid             EwScreenWarpNativeRowSolid
#endif

#ifndef EwScreenWarpPerspNativeRowSolidBlend
  #define EwScreenWarpPerspNativeRowSolidBlend        EwScreenWarpNativeRowSolidBlend
#endif

#ifndef EwScreenWarpPerspNativeRowFilterSolid
  #define EwScreenWarpPerspNativeRowFilterSolid       EwScreenWarpNativeRowFilterSolid
#endif

#ifndef EwScreenWarpPerspNativeRowFilterSolidBlend
  #define EwScreenWarpPerspNativeRowFilterSolidBlend  EwScreenWarpNativeRowFilterSolidBlend
#endif

#ifdef EwGfxScreenWarpPerspIndex8
  #define EwScreenWarpPerspIndex8Row                       0
#else
  #define EwGfxScreenWarpPerspIndex8                       0
  #define EwScreenWarpPerspIndex8Row                       EwScreenWarpIndex8Row
#endif

#ifdef EwGfxScreenWarpPerspIndex8Blend
  #define EwScreenWarpPerspIndex8RowBlend                  0
#else
  #define EwGfxScreenWarpPerspIndex8Blend                  0
  #define EwScreenWarpPerspIndex8RowBlend                  EwScreenWarpIndex8RowBlend
#endif

#ifdef EwGfxScreenWarpPerspIndex8Gradient
  #define EwScreenWarpPerspIndex8RowGradient               0
  #define EwScreenWarpPerspIndex8RowSolid                  0
#else
  #define EwGfxScreenWarpPerspIndex8Gradient               0
  #define EwScreenWarpPerspIndex8RowGradient               EwScreenWarpIndex8RowGradient
#endif

#ifdef EwGfxScreenWarpPerspIndex8GradientBlend
  #define EwScreenWarpPerspIndex8RowGradientBlend          0
  #define EwScreenWarpPerspIndex8RowSolidBlend             0
#else
  #define EwGfxScreenWarpPerspIndex8GradientBlend          0
  #define EwScreenWarpPerspIndex8RowGradientBlend \
    EwScreenWarpIndex8RowGradientBlend
#endif

#ifdef EwGfxScreenWarpPerspIndex8Filter
  #define EwScreenWarpPerspIndex8RowFilter                 0
#else
  #define EwGfxScreenWarpPerspIndex8Filter                 0
  #define EwScreenWarpPerspIndex8RowFilter                 EwScreenWarpIndex8RowFilter
#endif

#ifdef EwGfxScreenWarpPerspIndex8FilterBlend
  #define EwScreenWarpPerspIndex8RowFilterBlend            0
#else
  #define EwGfxScreenWarpPerspIndex8FilterBlend            0
  #define EwScreenWarpPerspIndex8RowFilterBlend            EwScreenWarpIndex8RowFilterBlend
#endif

#ifdef EwGfxScreenWarpPerspIndex8FilterGradient
  #define EwScreenWarpPerspIndex8RowFilterGradient         0
  #define EwScreenWarpPerspIndex8RowFilterSolid            0
#else
  #define EwGfxScreenWarpPerspIndex8FilterGradient         0
  #define EwScreenWarpPerspIndex8RowFilterGradient \
    EwScreenWarpIndex8RowFilterGradient
#endif

#ifdef EwGfxScreenWarpPerspIndex8FilterGradientBlend
  #define EwScreenWarpPerspIndex8RowFilterGradientBlend    0
  #define EwScreenWarpPerspIndex8RowFilterSolidBlend       0
#else
  #define EwGfxScreenWarpPerspIndex8FilterGradientBlend    0
  #define EwScreenWarpPerspIndex8RowFilterGradientBlend \
    EwScreenWarpIndex8RowFilterGradientBlend
#endif

#ifndef EwGfxScreenWarpPerspIndex8Solid
  #define EwGfxScreenWarpPerspIndex8Solid          EwGfxScreenWarpPerspIndex8Gradient
#endif

#ifndef EwGfxScreenWarpPerspIndex8SolidBlend
  #define EwGfxScreenWarpPerspIndex8SolidBlend     EwGfxScreenWarpPerspIndex8GradientBlend
#endif

#ifndef EwGfxScreenWarpPerspIndex8FilterSolid
  #define EwGfxScreenWarpPerspIndex8FilterSolid    EwGfxScreenWarpPerspIndex8FilterGradient
#endif

#ifndef EwGfxScreenWarpPerspIndex8FilterSolidBlend
  #define EwGfxScreenWarpPerspIndex8FilterSolidBlend \
    EwGfxScreenWarpPerspIndex8FilterGradientBlend
#endif

#ifndef EwScreenWarpPerspIndex8RowSolid
  #define EwScreenWarpPerspIndex8RowSolid             EwScreenWarpIndex8RowSolid
#endif

#ifndef EwScreenWarpPerspIndex8RowSolidBlend
  #define EwScreenWarpPerspIndex8RowSolidBlend        EwScreenWarpIndex8RowSolidBlend
#endif

#ifndef EwScreenWarpPerspIndex8RowFilterSolid
  #define EwScreenWarpPerspIndex8RowFilterSolid       EwScreenWarpIndex8RowFilterSolid
#endif

#ifndef EwScreenWarpPerspIndex8RowFilterSolidBlend
  #define EwScreenWarpPerspIndex8RowFilterSolidBlend  EwScreenWarpIndex8RowFilterSolidBlend
#endif

#ifdef EwGfxScreenWarpPerspAlpha8Gradient
  #define EwScreenWarpPerspAlpha8RowGradient               0
  #define EwScreenWarpPerspAlpha8RowSolid                  0
#else
  #define EwGfxScreenWarpPerspAlpha8Gradient               0
  #define EwScreenWarpPerspAlpha8RowGradient               EwScreenWarpAlpha8RowGradient
#endif

#ifdef EwGfxScreenWarpPerspAlpha8GradientBlend
  #define EwScreenWarpPerspAlpha8RowGradientBlend          0
  #define EwScreenWarpPerspAlpha8RowSolidBlend             0
#else
  #define EwGfxScreenWarpPerspAlpha8GradientBlend          0
  #define EwScreenWarpPerspAlpha8RowGradientBlend \
    EwScreenWarpAlpha8RowGradientBlend
#endif

#ifdef EwGfxScreenWarpPerspAlpha8FilterGradient
  #define EwScreenWarpPerspAlpha8RowFilterGradient         0
  #define EwScreenWarpPerspAlpha8RowFilterSolid            0
#else
  #define EwGfxScreenWarpPerspAlpha8FilterGradient         0
  #define EwScreenWarpPerspAlpha8RowFilterGradient \
    EwScreenWarpAlpha8RowFilterGradient
#endif

#ifdef EwGfxScreenWarpPerspAlpha8FilterGradientBlend
  #define EwScreenWarpPerspAlpha8RowFilterGradientBlend    0
  #define EwScreenWarpPerspAlpha8RowFilterSolidBlend       0
#else
  #define EwGfxScreenWarpPerspAlpha8FilterGradientBlend    0
  #define EwScreenWarpPerspAlpha8RowFilterGradientBlend \
    EwScreenWarpAlpha8RowFilterGradientBlend
#endif

#ifndef EwGfxScreenWarpPerspAlpha8Solid
  #define EwGfxScreenWarpPerspAlpha8Solid          EwGfxScreenWarpPerspAlpha8Gradient
#endif

#ifndef EwGfxScreenWarpPerspAlpha8SolidBlend
  #define EwGfxScreenWarpPerspAlpha8SolidBlend     EwGfxScreenWarpPerspAlpha8GradientBlend
#endif

#ifndef EwGfxScreenWarpPerspAlpha8FilterSolid
  #define EwGfxScreenWarpPerspAlpha8FilterSolid    EwGfxScreenWarpPerspAlpha8FilterGradient
#endif

#ifndef EwGfxScreenWarpPerspAlpha8FilterSolidBlend
  #define EwGfxScreenWarpPerspAlpha8FilterSolidBlend \
    EwGfxScreenWarpPerspAlpha8FilterGradientBlend
#endif

#ifndef EwScreenWarpPerspAlpha8RowSolid
  #define EwScreenWarpPerspAlpha8RowSolid             EwScreenWarpAlpha8RowSolid
#endif

#ifndef EwScreenWarpPerspAlpha8RowSolidBlend
  #define EwScreenWarpPerspAlpha8RowSolidBlend        EwScreenWarpAlpha8RowSolidBlend
#endif

#ifndef EwScreenWarpPerspAlpha8RowFilterSolid
  #define EwScreenWarpPerspAlpha8RowFilterSolid       EwScreenWarpAlpha8RowFilterSolid
#endif

#ifndef EwScreenWarpPerspAlpha8RowFilterSolidBlend
  #define EwScreenWarpPerspAlpha8RowFilterSolidBlend  EwScreenWarpAlpha8RowFilterSolidBlend
#endif


/* Register the functionality provided by the underlying graphics subsystem. */
static const XWarpDriver WarpPerspDrivers[] =
{
  EwGfxWarpPerspNative,                      EwGfxWarpPerspNativeBlend,
  EwGfxWarpPerspNativeSolid,                 EwGfxWarpPerspNativeSolidBlend,
  EwGfxWarpPerspNativeGradient,              EwGfxWarpPerspNativeGradientBlend,
  0,                                         0,
  EwGfxWarpPerspNativeFilter,                EwGfxWarpPerspNativeFilterBlend,
  EwGfxWarpPerspNativeFilterSolid,           EwGfxWarpPerspNativeFilterSolidBlend,
  EwGfxWarpPerspNativeFilterGradient,        EwGfxWarpPerspNativeFilterGradientBlend,
  0,                                         0,
  EwGfxWarpPerspIndex8,                      EwGfxWarpPerspIndex8Blend,
  EwGfxWarpPerspIndex8Solid,                 EwGfxWarpPerspIndex8SolidBlend,
  EwGfxWarpPerspIndex8Gradient,              EwGfxWarpPerspIndex8GradientBlend,
  0,                                         0,
  EwGfxWarpPerspIndex8Filter,                EwGfxWarpPerspIndex8FilterBlend,
  EwGfxWarpPerspIndex8FilterSolid,           EwGfxWarpPerspIndex8FilterSolidBlend,
  EwGfxWarpPerspIndex8FilterGradient,        EwGfxWarpPerspIndex8FilterGradientBlend,
  0,                                         0,
  0,                                         0,
  EwGfxWarpPerspAlpha8Solid,                 EwGfxWarpPerspAlpha8SolidBlend,
  EwGfxWarpPerspAlpha8Gradient,              EwGfxWarpPerspAlpha8GradientBlend,
  0,                                         0,
  0,                                         0,
  EwGfxWarpPerspAlpha8FilterSolid,           EwGfxWarpPerspAlpha8FilterSolidBlend,
  EwGfxWarpPerspAlpha8FilterGradient,        EwGfxWarpPerspAlpha8FilterGradientBlend,

#ifdef EW_USE_PIXEL_FORMAT_SCREEN
  EwGfxScreenWarpPerspNative,                EwGfxScreenWarpPerspNativeBlend,
  EwGfxScreenWarpPerspNativeSolid,           EwGfxScreenWarpPerspNativeSolidBlend,
  EwGfxScreenWarpPerspNativeGradient,        EwGfxScreenWarpPerspNativeGradientBlend,
  0,                                         0,
  EwGfxScreenWarpPerspNativeFilter,          EwGfxScreenWarpPerspNativeFilterBlend,
  EwGfxScreenWarpPerspNativeFilterSolid,     EwGfxScreenWarpPerspNativeFilterSolidBlend,
  EwGfxScreenWarpPerspNativeFilterGradient,  EwGfxScreenWarpPerspNativeFilterGradientBlend,
  0,                                         0,
  EwGfxScreenWarpPerspIndex8,                EwGfxScreenWarpPerspIndex8Blend,
  EwGfxScreenWarpPerspIndex8Solid,           EwGfxScreenWarpPerspIndex8SolidBlend,
  EwGfxScreenWarpPerspIndex8Gradient,        EwGfxScreenWarpPerspIndex8GradientBlend,
  0,                                         0,
  EwGfxScreenWarpPerspIndex8Filter,          EwGfxScreenWarpPerspIndex8FilterBlend,
  EwGfxScreenWarpPerspIndex8FilterSolid,     EwGfxScreenWarpPerspIndex8FilterSolidBlend,
  EwGfxScreenWarpPerspIndex8FilterGradient,  EwGfxScreenWarpPerspIndex8FilterGradientBlend,
  0,                                         0,
  0,                                         0,
  EwGfxScreenWarpPerspAlpha8Solid,           EwGfxScreenWarpPerspAlpha8SolidBlend,
  EwGfxScreenWarpPerspAlpha8Gradient,        EwGfxScreenWarpPerspAlpha8GradientBlend,
  0,                                         0,
  0,                                         0,
  EwGfxScreenWarpPerspAlpha8FilterSolid,     EwGfxScreenWarpPerspAlpha8FilterSolidBlend,
  EwGfxScreenWarpPerspAlpha8FilterGradient,  EwGfxScreenWarpPerspAlpha8FilterGradientBlend,
#endif

  0
};


/* For missing graphics subsystem functionality, register alternative software
   emulated functions */
static const XWarpWorker WarpPerspWorkers[] =
{
  EwWarpPerspNativeRow,                      EwWarpPerspNativeRowBlend,
  EwWarpPerspNativeRowSolid,                 EwWarpPerspNativeRowSolidBlend,
  EwWarpPerspNativeRowGradient,              EwWarpPerspNativeRowGradientBlend,
  0,                                         0,
  EwWarpPerspNativeRowFilter,                EwWarpPerspNativeRowFilterBlend,
  EwWarpPerspNativeRowFilterSolid,           EwWarpPerspNativeRowFilterSolidBlend,
  EwWarpPerspNativeRowFilterGradient,        EwWarpPerspNativeRowFilterGradientBlend,
  0,                                         0,
  EwWarpPerspIndex8Row,                      EwWarpPerspIndex8RowBlend,
  EwWarpPerspIndex8RowSolid,                 EwWarpPerspIndex8RowSolidBlend,
  EwWarpPerspIndex8RowGradient,              EwWarpPerspIndex8RowGradientBlend,
  0,                                         0,
  EwWarpPerspIndex8RowFilter,                EwWarpPerspIndex8RowFilterBlend,
  EwWarpPerspIndex8RowFilterSolid,           EwWarpPerspIndex8RowFilterSolidBlend,
  EwWarpPerspIndex8RowFilterGradient,        EwWarpPerspIndex8RowFilterGradientBlend,
  0,                                         0,
  0,                                         0,
  EwWarpPerspAlpha8RowSolid,                 EwWarpPerspAlpha8RowSolidBlend,
  EwWarpPerspAlpha8RowGradient,              EwWarpPerspAlpha8RowGradientBlend,
  0,                                         0,
  0,                                         0,
  EwWarpPerspAlpha8RowFilterSolid,           EwWarpPerspAlpha8RowFilterSolidBlend,
  EwWarpPerspAlpha8RowFilterGradient,        EwWarpPerspAlpha8RowFilterGradientBlend,

#ifdef EW_USE_PIXEL_FORMAT_SCREEN
  EwScreenWarpPerspNativeRow,                EwScreenWarpPerspNativeRowBlend,
  EwScreenWarpPerspNativeRowSolid,           EwScreenWarpPerspNativeRowSolidBlend,
  EwScreenWarpPerspNativeRowGradient,        EwScreenWarpPerspNativeRowGradientBlend,
  0,                                         0,
  EwScreenWarpPerspNativeRowFilter,          EwScreenWarpPerspNativeRowFilterBlend,
  EwScreenWarpPerspNativeRowFilterSolid,     EwScreenWarpPerspNativeRowFilterSolidBlend,
  EwScreenWarpPerspNativeRowFilterGradient,  EwScreenWarpPerspNativeRowFilterGradientBlend,
  0,                                         0,
  EwScreenWarpPerspIndex8Row,                EwScreenWarpPerspIndex8RowBlend,
  EwScreenWarpPerspIndex8RowSolid,           EwScreenWarpPerspIndex8RowSolidBlend,
  EwScreenWarpPerspIndex8RowGradient,        EwScreenWarpPerspIndex8RowGradientBlend,
  0,                                         0,
  EwScreenWarpPerspIndex8RowFilter,          EwScreenWarpPerspIndex8RowFilterBlend,
  EwScreenWarpPerspIndex8RowFilterSolid,     EwScreenWarpPerspIndex8RowFilterSolidBlend,
  EwScreenWarpPerspIndex8RowFilterGradient,  EwScreenWarpPerspIndex8RowFilterGradientBlend,
  0,                                         0,
  0,                                         0,
  EwScreenWarpPerspAlpha8RowSolid,           EwScreenWarpPerspAlpha8RowSolidBlend,
  EwScreenWarpPerspAlpha8RowGradient,        EwScreenWarpPerspAlpha8RowGradientBlend,
  0,                                         0,
  0,                                         0,
  EwScreenWarpPerspAlpha8RowFilterSolid,     EwScreenWarpPerspAlpha8RowFilterSolidBlend,
  EwScreenWarpPerspAlpha8RowFilterGradient,  EwScreenWarpPerspAlpha8RowFilterGradientBlend,
#endif

  0
};


/* Depending on the capabilities of the underlying graphics subsystem select
   a set of functions for the 'warp affine surface' operation.
   Missing functionality will be emulated by the software. */
#ifdef EwGfxWarpAffineNative
  #define EwWarpAffineNativeRow                       0
#else
  #define EwGfxWarpAffineNative                       0
  #define EwWarpAffineNativeRow                       EwWarpNativeRow
#endif

#ifdef EwGfxWarpAffineNativeBlend
  #define EwWarpAffineNativeRowBlend                  0
#else
  #define EwGfxWarpAffineNativeBlend                  0
  #define EwWarpAffineNativeRowBlend                  EwWarpNativeRowBlend
#endif

#ifdef EwGfxWarpAffineNativeGradient
  #define EwWarpAffineNativeRowGradient               0
  #define EwWarpAffineNativeRowSolid                  0
#else
  #define EwGfxWarpAffineNativeGradient               0
  #define EwWarpAffineNativeRowGradient               EwWarpNativeRowGradient
#endif

#ifdef EwGfxWarpAffineNativeGradientBlend
  #define EwWarpAffineNativeRowGradientBlend          0
  #define EwWarpAffineNativeRowSolidBlend             0
#else
  #define EwGfxWarpAffineNativeGradientBlend          0
  #define EwWarpAffineNativeRowGradientBlend \
    EwWarpNativeRowGradientBlend
#endif

#ifdef EwGfxWarpAffineNativeFilter
  #define EwWarpAffineNativeRowFilter                 0
#else
  #define EwGfxWarpAffineNativeFilter                 0
  #define EwWarpAffineNativeRowFilter                 EwWarpNativeRowFilter
#endif

#ifdef EwGfxWarpAffineNativeFilterBlend
  #define EwWarpAffineNativeRowFilterBlend            0
#else
  #define EwGfxWarpAffineNativeFilterBlend            0
  #define EwWarpAffineNativeRowFilterBlend            EwWarpNativeRowFilterBlend
#endif

#ifdef EwGfxWarpAffineNativeFilterGradient
  #define EwWarpAffineNativeRowFilterGradient         0
  #define EwWarpAffineNativeRowFilterSolid            0
#else
  #define EwGfxWarpAffineNativeFilterGradient         0
  #define EwWarpAffineNativeRowFilterGradient \
    EwWarpNativeRowFilterGradient
#endif

#ifdef EwGfxWarpAffineNativeFilterGradientBlend
  #define EwWarpAffineNativeRowFilterGradientBlend    0
  #define EwWarpAffineNativeRowFilterSolidBlend       0
#else
  #define EwGfxWarpAffineNativeFilterGradientBlend    0
  #define EwWarpAffineNativeRowFilterGradientBlend \
    EwWarpNativeRowFilterGradientBlend
#endif

#ifndef EwGfxWarpAffineNativeSolid
  #define EwGfxWarpAffineNativeSolid        EwGfxWarpAffineNativeGradient
#endif

#ifndef EwGfxWarpAffineNativeSolidBlend
  #define EwGfxWarpAffineNativeSolidBlend   EwGfxWarpAffineNativeGradientBlend
#endif

#ifndef EwGfxWarpAffineNativeFilterSolid
  #define EwGfxWarpAffineNativeFilterSolid  EwGfxWarpAffineNativeFilterGradient
#endif

#ifndef EwGfxWarpAffineNativeFilterSolidBlend
  #define EwGfxWarpAffineNativeFilterSolidBlend \
    EwGfxWarpAffineNativeFilterGradientBlend
#endif

#ifndef EwWarpAffineNativeRowSolid
  #define EwWarpAffineNativeRowSolid             EwWarpNativeRowSolid
#endif

#ifndef EwWarpAffineNativeRowSolidBlend
  #define EwWarpAffineNativeRowSolidBlend        EwWarpNativeRowSolidBlend
#endif

#ifndef EwWarpAffineNativeRowFilterSolid
  #define EwWarpAffineNativeRowFilterSolid       EwWarpNativeRowFilterSolid
#endif

#ifndef EwWarpAffineNativeRowFilterSolidBlend
  #define EwWarpAffineNativeRowFilterSolidBlend  EwWarpNativeRowFilterSolidBlend
#endif

#ifdef EwGfxWarpAffineIndex8
  #define EwWarpAffineIndex8Row                       0
#else
  #define EwGfxWarpAffineIndex8                       0
  #define EwWarpAffineIndex8Row                       EwWarpIndex8Row
#endif

#ifdef EwGfxWarpAffineIndex8Blend
  #define EwWarpAffineIndex8RowBlend                  0
#else
  #define EwGfxWarpAffineIndex8Blend                  0
  #define EwWarpAffineIndex8RowBlend                  EwWarpIndex8RowBlend
#endif

#ifdef EwGfxWarpAffineIndex8Gradient
  #define EwWarpAffineIndex8RowGradient               0
  #define EwWarpAffineIndex8RowSolid                  0
#else
  #define EwGfxWarpAffineIndex8Gradient               0
  #define EwWarpAffineIndex8RowGradient               EwWarpIndex8RowGradient
#endif

#ifdef EwGfxWarpAffineIndex8GradientBlend
  #define EwWarpAffineIndex8RowGradientBlend          0
  #define EwWarpAffineIndex8RowSolidBlend             0
#else
  #define EwGfxWarpAffineIndex8GradientBlend          0
  #define EwWarpAffineIndex8RowGradientBlend \
    EwWarpIndex8RowGradientBlend
#endif

#ifdef EwGfxWarpAffineIndex8Filter
  #define EwWarpAffineIndex8RowFilter                 0
#else
  #define EwGfxWarpAffineIndex8Filter                 0
  #define EwWarpAffineIndex8RowFilter                 EwWarpIndex8RowFilter
#endif

#ifdef EwGfxWarpAffineIndex8FilterBlend
  #define EwWarpAffineIndex8RowFilterBlend            0
#else
  #define EwGfxWarpAffineIndex8FilterBlend            0
  #define EwWarpAffineIndex8RowFilterBlend            EwWarpIndex8RowFilterBlend
#endif

#ifdef EwGfxWarpAffineIndex8FilterGradient
  #define EwWarpAffineIndex8RowFilterGradient         0
  #define EwWarpAffineIndex8RowFilterSolid            0
#else
  #define EwGfxWarpAffineIndex8FilterGradient         0
  #define EwWarpAffineIndex8RowFilterGradient \
    EwWarpIndex8RowFilterGradient
#endif

#ifdef EwGfxWarpAffineIndex8FilterGradientBlend
  #define EwWarpAffineIndex8RowFilterGradientBlend    0
  #define EwWarpAffineIndex8RowFilterSolidBlend       0
#else
  #define EwGfxWarpAffineIndex8FilterGradientBlend    0
  #define EwWarpAffineIndex8RowFilterGradientBlend  \
    EwWarpIndex8RowFilterGradientBlend
#endif

#ifndef EwGfxWarpAffineIndex8Solid
  #define EwGfxWarpAffineIndex8Solid        EwGfxWarpAffineIndex8Gradient
#endif

#ifndef EwGfxWarpAffineIndex8SolidBlend
  #define EwGfxWarpAffineIndex8SolidBlend   EwGfxWarpAffineIndex8GradientBlend
#endif

#ifndef EwGfxWarpAffineIndex8FilterSolid
  #define EwGfxWarpAffineIndex8FilterSolid  EwGfxWarpAffineIndex8FilterGradient
#endif

#ifndef EwGfxWarpAffineIndex8FilterSolidBlend
  #define EwGfxWarpAffineIndex8FilterSolidBlend \
    EwGfxWarpAffineIndex8FilterGradientBlend
#endif

#ifndef EwWarpAffineIndex8RowSolid
  #define EwWarpAffineIndex8RowSolid             EwWarpIndex8RowSolid
#endif

#ifndef EwWarpAffineIndex8RowSolidBlend
  #define EwWarpAffineIndex8RowSolidBlend        EwWarpIndex8RowSolidBlend
#endif

#ifndef EwWarpAffineIndex8RowFilterSolid
  #define EwWarpAffineIndex8RowFilterSolid       EwWarpIndex8RowFilterSolid
#endif

#ifndef EwWarpAffineIndex8RowFilterSolidBlend
  #define EwWarpAffineIndex8RowFilterSolidBlend  EwWarpIndex8RowFilterSolidBlend
#endif

#ifdef EwGfxWarpAffineAlpha8Gradient
  #define EwWarpAffineAlpha8RowGradient               0
  #define EwWarpAffineAlpha8RowSolid                  0
#else
  #define EwGfxWarpAffineAlpha8Gradient               0
  #define EwWarpAffineAlpha8RowGradient               EwWarpAlpha8RowGradient
#endif

#ifdef EwGfxWarpAffineAlpha8GradientBlend
  #define EwWarpAffineAlpha8RowGradientBlend          0
  #define EwWarpAffineAlpha8RowSolidBlend             0
#else
  #define EwGfxWarpAffineAlpha8GradientBlend          0
  #define EwWarpAffineAlpha8RowGradientBlend \
    EwWarpAlpha8RowGradientBlend
#endif

#ifdef EwGfxWarpAffineAlpha8FilterGradient
  #define EwWarpAffineAlpha8RowFilterGradient         0
  #define EwWarpAffineAlpha8RowFilterSolid            0
#else
  #define EwGfxWarpAffineAlpha8FilterGradient         0
  #define EwWarpAffineAlpha8RowFilterGradient \
    EwWarpAlpha8RowFilterGradient
#endif

#ifdef EwGfxWarpAffineAlpha8FilterGradientBlend
  #define EwWarpAffineAlpha8RowFilterGradientBlend    0
  #define EwWarpAffineAlpha8RowFilterSolidBlend       0
#else
  #define EwGfxWarpAffineAlpha8FilterGradientBlend    0
  #define EwWarpAffineAlpha8RowFilterGradientBlend \
    EwWarpAlpha8RowFilterGradientBlend
#endif

#ifndef EwGfxWarpAffineAlpha8Solid
  #define EwGfxWarpAffineAlpha8Solid         EwGfxWarpAffineAlpha8Gradient
#endif

#ifndef EwGfxWarpAffineAlpha8SolidBlend
  #define EwGfxWarpAffineAlpha8SolidBlend    EwGfxWarpAffineAlpha8GradientBlend
#endif

#ifndef EwGfxWarpAffineAlpha8FilterSolid
  #define EwGfxWarpAffineAlpha8FilterSolid      \
    EwGfxWarpAffineAlpha8FilterGradient
#endif

#ifndef EwGfxWarpAffineAlpha8FilterSolidBlend
  #define EwGfxWarpAffineAlpha8FilterSolidBlend \
    EwGfxWarpAffineAlpha8FilterGradientBlend
#endif

#ifndef EwWarpAffineAlpha8RowSolid
  #define EwWarpAffineAlpha8RowSolid             EwWarpAlpha8RowSolid
#endif

#ifndef EwWarpAffineAlpha8RowSolidBlend
  #define EwWarpAffineAlpha8RowSolidBlend        EwWarpAlpha8RowSolidBlend
#endif

#ifndef EwWarpAffineAlpha8RowFilterSolid
  #define EwWarpAffineAlpha8RowFilterSolid       EwWarpAlpha8RowFilterSolid
#endif

#ifndef EwWarpAffineAlpha8RowFilterSolidBlend
  #define EwWarpAffineAlpha8RowFilterSolidBlend  EwWarpAlpha8RowFilterSolidBlend
#endif

#ifdef EwGfxScreenWarpAffineNative
  #define EwScreenWarpAffineNativeRow                       0
#else
  #define EwGfxScreenWarpAffineNative                       0
  #define EwScreenWarpAffineNativeRow                       EwScreenWarpNativeRow
#endif

#ifdef EwGfxScreenWarpAffineNativeBlend
  #define EwScreenWarpAffineNativeRowBlend                  0
#else
  #define EwGfxScreenWarpAffineNativeBlend                  0
  #define EwScreenWarpAffineNativeRowBlend                  EwScreenWarpNativeRowBlend
#endif

#ifdef EwGfxScreenWarpAffineNativeGradient
  #define EwScreenWarpAffineNativeRowGradient               0
  #define EwScreenWarpAffineNativeRowSolid                  0
#else
  #define EwGfxScreenWarpAffineNativeGradient               0
  #define EwScreenWarpAffineNativeRowGradient               EwScreenWarpNativeRowGradient
#endif

#ifdef EwGfxScreenWarpAffineNativeGradientBlend
  #define EwScreenWarpAffineNativeRowGradientBlend          0
  #define EwScreenWarpAffineNativeRowSolidBlend             0
#else
  #define EwGfxScreenWarpAffineNativeGradientBlend          0
  #define EwScreenWarpAffineNativeRowGradientBlend \
    EwScreenWarpNativeRowGradientBlend
#endif

#ifdef EwGfxScreenWarpAffineNativeFilter
  #define EwScreenWarpAffineNativeRowFilter                 0
#else
  #define EwGfxScreenWarpAffineNativeFilter                 0
  #define EwScreenWarpAffineNativeRowFilter                 EwScreenWarpNativeRowFilter
#endif

#ifdef EwGfxScreenWarpAffineNativeFilterBlend
  #define EwScreenWarpAffineNativeRowFilterBlend            0
#else
  #define EwGfxScreenWarpAffineNativeFilterBlend            0
  #define EwScreenWarpAffineNativeRowFilterBlend            EwScreenWarpNativeRowFilterBlend
#endif

#ifdef EwGfxScreenWarpAffineNativeFilterGradient
  #define EwScreenWarpAffineNativeRowFilterGradient         0
  #define EwScreenWarpAffineNativeRowFilterSolid            0
#else
  #define EwGfxScreenWarpAffineNativeFilterGradient         0
  #define EwScreenWarpAffineNativeRowFilterGradient \
    EwScreenWarpNativeRowFilterGradient
#endif

#ifdef EwGfxScreenWarpAffineNativeFilterGradientBlend
  #define EwScreenWarpAffineNativeRowFilterGradientBlend    0
  #define EwScreenWarpAffineNativeRowFilterSolidBlend       0
#else
  #define EwGfxScreenWarpAffineNativeFilterGradientBlend    0
  #define EwScreenWarpAffineNativeRowFilterGradientBlend \
    EwScreenWarpNativeRowFilterGradientBlend
#endif

#ifndef EwGfxScreenWarpAffineNativeSolid
  #define EwGfxScreenWarpAffineNativeSolid        EwGfxScreenWarpAffineNativeGradient
#endif

#ifndef EwGfxScreenWarpAffineNativeSolidBlend
  #define EwGfxScreenWarpAffineNativeSolidBlend   EwGfxScreenWarpAffineNativeGradientBlend
#endif

#ifndef EwGfxScreenWarpAffineNativeFilterSolid
  #define EwGfxScreenWarpAffineNativeFilterSolid  EwGfxScreenWarpAffineNativeFilterGradient
#endif

#ifndef EwGfxScreenWarpAffineNativeFilterSolidBlend
  #define EwGfxScreenWarpAffineNativeFilterSolidBlend \
    EwGfxScreenWarpAffineNativeFilterGradientBlend
#endif

#ifndef EwScreenWarpAffineNativeRowSolid
  #define EwScreenWarpAffineNativeRowSolid             EwScreenWarpNativeRowSolid
#endif

#ifndef EwScreenWarpAffineNativeRowSolidBlend
  #define EwScreenWarpAffineNativeRowSolidBlend        EwScreenWarpNativeRowSolidBlend
#endif

#ifndef EwScreenWarpAffineNativeRowFilterSolid
  #define EwScreenWarpAffineNativeRowFilterSolid       EwScreenWarpNativeRowFilterSolid
#endif

#ifndef EwScreenWarpAffineNativeRowFilterSolidBlend
  #define EwScreenWarpAffineNativeRowFilterSolidBlend  EwScreenWarpNativeRowFilterSolidBlend
#endif

#ifdef EwGfxScreenWarpAffineIndex8
  #define EwScreenWarpAffineIndex8Row                       0
#else
  #define EwGfxScreenWarpAffineIndex8                       0
  #define EwScreenWarpAffineIndex8Row                       EwScreenWarpIndex8Row
#endif

#ifdef EwGfxScreenWarpAffineIndex8Blend
  #define EwScreenWarpAffineIndex8RowBlend                  0
#else
  #define EwGfxScreenWarpAffineIndex8Blend                  0
  #define EwScreenWarpAffineIndex8RowBlend                  EwScreenWarpIndex8RowBlend
#endif

#ifdef EwGfxScreenWarpAffineIndex8Gradient
  #define EwScreenWarpAffineIndex8RowGradient               0
  #define EwScreenWarpAffineIndex8RowSolid                  0
#else
  #define EwGfxScreenWarpAffineIndex8Gradient               0
  #define EwScreenWarpAffineIndex8RowGradient               EwScreenWarpIndex8RowGradient
#endif

#ifdef EwGfxScreenWarpAffineIndex8GradientBlend
  #define EwScreenWarpAffineIndex8RowGradientBlend          0
  #define EwScreenWarpAffineIndex8RowSolidBlend             0
#else
  #define EwGfxScreenWarpAffineIndex8GradientBlend          0
  #define EwScreenWarpAffineIndex8RowGradientBlend \
    EwScreenWarpIndex8RowGradientBlend
#endif

#ifdef EwGfxScreenWarpAffineIndex8Filter
  #define EwScreenWarpAffineIndex8RowFilter                 0
#else
  #define EwGfxScreenWarpAffineIndex8Filter                 0
  #define EwScreenWarpAffineIndex8RowFilter                 EwScreenWarpIndex8RowFilter
#endif

#ifdef EwGfxScreenWarpAffineIndex8FilterBlend
  #define EwScreenWarpAffineIndex8RowFilterBlend            0
#else
  #define EwGfxScreenWarpAffineIndex8FilterBlend            0
  #define EwScreenWarpAffineIndex8RowFilterBlend            EwScreenWarpIndex8RowFilterBlend
#endif

#ifdef EwGfxScreenWarpAffineIndex8FilterGradient
  #define EwScreenWarpAffineIndex8RowFilterGradient         0
  #define EwScreenWarpAffineIndex8RowFilterSolid            0
#else
  #define EwGfxScreenWarpAffineIndex8FilterGradient         0
  #define EwScreenWarpAffineIndex8RowFilterGradient \
    EwScreenWarpIndex8RowFilterGradient
#endif

#ifdef EwGfxScreenWarpAffineIndex8FilterGradientBlend
  #define EwScreenWarpAffineIndex8RowFilterGradientBlend    0
  #define EwScreenWarpAffineIndex8RowFilterSolidBlend       0
#else
  #define EwGfxScreenWarpAffineIndex8FilterGradientBlend    0
  #define EwScreenWarpAffineIndex8RowFilterGradientBlend  \
    EwScreenWarpIndex8RowFilterGradientBlend
#endif

#ifndef EwGfxScreenWarpAffineIndex8Solid
  #define EwGfxScreenWarpAffineIndex8Solid        EwGfxScreenWarpAffineIndex8Gradient
#endif

#ifndef EwGfxScreenWarpAffineIndex8SolidBlend
  #define EwGfxScreenWarpAffineIndex8SolidBlend   EwGfxScreenWarpAffineIndex8GradientBlend
#endif

#ifndef EwGfxScreenWarpAffineIndex8FilterSolid
  #define EwGfxScreenWarpAffineIndex8FilterSolid  EwGfxScreenWarpAffineIndex8FilterGradient
#endif

#ifndef EwGfxScreenWarpAffineIndex8FilterSolidBlend
  #define EwGfxScreenWarpAffineIndex8FilterSolidBlend \
    EwGfxScreenWarpAffineIndex8FilterGradientBlend
#endif

#ifndef EwScreenWarpAffineIndex8RowSolid
  #define EwScreenWarpAffineIndex8RowSolid             EwScreenWarpIndex8RowSolid
#endif

#ifndef EwScreenWarpAffineIndex8RowSolidBlend
  #define EwScreenWarpAffineIndex8RowSolidBlend        EwScreenWarpIndex8RowSolidBlend
#endif

#ifndef EwScreenWarpAffineIndex8RowFilterSolid
  #define EwScreenWarpAffineIndex8RowFilterSolid       EwScreenWarpIndex8RowFilterSolid
#endif

#ifndef EwScreenWarpAffineIndex8RowFilterSolidBlend
  #define EwScreenWarpAffineIndex8RowFilterSolidBlend  EwScreenWarpIndex8RowFilterSolidBlend
#endif

#ifdef EwGfxScreenWarpAffineAlpha8Gradient
  #define EwScreenWarpAffineAlpha8RowGradient               0
  #define EwScreenWarpAffineAlpha8RowSolid                  0
#else
  #define EwGfxScreenWarpAffineAlpha8Gradient               0
  #define EwScreenWarpAffineAlpha8RowGradient               EwScreenWarpAlpha8RowGradient
#endif

#ifdef EwGfxScreenWarpAffineAlpha8GradientBlend
  #define EwScreenWarpAffineAlpha8RowGradientBlend          0
  #define EwScreenWarpAffineAlpha8RowSolidBlend             0
#else
  #define EwGfxScreenWarpAffineAlpha8GradientBlend          0
  #define EwScreenWarpAffineAlpha8RowGradientBlend \
    EwScreenWarpAlpha8RowGradientBlend
#endif

#ifdef EwGfxScreenWarpAffineAlpha8FilterGradient
  #define EwScreenWarpAffineAlpha8RowFilterGradient         0
  #define EwScreenWarpAffineAlpha8RowFilterSolid            0
#else
  #define EwGfxScreenWarpAffineAlpha8FilterGradient         0
  #define EwScreenWarpAffineAlpha8RowFilterGradient \
    EwScreenWarpAlpha8RowFilterGradient
#endif

#ifdef EwGfxScreenWarpAffineAlpha8FilterGradientBlend
  #define EwScreenWarpAffineAlpha8RowFilterGradientBlend    0
  #define EwScreenWarpAffineAlpha8RowFilterSolidBlend       0
#else
  #define EwGfxScreenWarpAffineAlpha8FilterGradientBlend    0
  #define EwScreenWarpAffineAlpha8RowFilterGradientBlend \
    EwScreenWarpAlpha8RowFilterGradientBlend
#endif

#ifndef EwGfxScreenWarpAffineAlpha8Solid
  #define EwGfxScreenWarpAffineAlpha8Solid         EwGfxScreenWarpAffineAlpha8Gradient
#endif

#ifndef EwGfxScreenWarpAffineAlpha8SolidBlend
  #define EwGfxScreenWarpAffineAlpha8SolidBlend    EwGfxScreenWarpAffineAlpha8GradientBlend
#endif

#ifndef EwGfxScreenWarpAffineAlpha8FilterSolid
  #define EwGfxScreenWarpAffineAlpha8FilterSolid      \
    EwGfxScreenWarpAffineAlpha8FilterGradient
#endif

#ifndef EwGfxScreenWarpAffineAlpha8FilterSolidBlend
  #define EwGfxScreenWarpAffineAlpha8FilterSolidBlend \
    EwGfxScreenWarpAffineAlpha8FilterGradientBlend
#endif

#ifndef EwScreenWarpAffineAlpha8RowSolid
  #define EwScreenWarpAffineAlpha8RowSolid             EwScreenWarpAlpha8RowSolid
#endif

#ifndef EwScreenWarpAffineAlpha8RowSolidBlend
  #define EwScreenWarpAffineAlpha8RowSolidBlend        EwScreenWarpAlpha8RowSolidBlend
#endif

#ifndef EwScreenWarpAffineAlpha8RowFilterSolid
  #define EwScreenWarpAffineAlpha8RowFilterSolid       EwScreenWarpAlpha8RowFilterSolid
#endif

#ifndef EwScreenWarpAffineAlpha8RowFilterSolidBlend
  #define EwScreenWarpAffineAlpha8RowFilterSolidBlend  EwScreenWarpAlpha8RowFilterSolidBlend
#endif


/* Register the functionality provided by the underlying graphics subsystem. */
static const XWarpDriver WarpAffineDrivers[] =
{
  EwGfxWarpAffineNative,                     EwGfxWarpAffineNativeBlend,
  EwGfxWarpAffineNativeSolid,                EwGfxWarpAffineNativeSolidBlend,
  EwGfxWarpAffineNativeGradient,             EwGfxWarpAffineNativeGradientBlend,
  0,                                         0,
  EwGfxWarpAffineNativeFilter,               EwGfxWarpAffineNativeFilterBlend,
  EwGfxWarpAffineNativeFilterSolid,          EwGfxWarpAffineNativeFilterSolidBlend,
  EwGfxWarpAffineNativeFilterGradient,       EwGfxWarpAffineNativeFilterGradientBlend,
  0,                                         0,
  EwGfxWarpAffineIndex8,                     EwGfxWarpAffineIndex8Blend,
  EwGfxWarpAffineIndex8Solid,                EwGfxWarpAffineIndex8SolidBlend,
  EwGfxWarpAffineIndex8Gradient,             EwGfxWarpAffineIndex8GradientBlend,
  0,                                         0,
  EwGfxWarpAffineIndex8Filter,               EwGfxWarpAffineIndex8FilterBlend,
  EwGfxWarpAffineIndex8FilterSolid,          EwGfxWarpAffineIndex8FilterSolidBlend,
  EwGfxWarpAffineIndex8FilterGradient,       EwGfxWarpAffineIndex8FilterGradientBlend,
  0,                                         0,
  0,                                         0,
  EwGfxWarpAffineAlpha8Solid,                EwGfxWarpAffineAlpha8SolidBlend,
  EwGfxWarpAffineAlpha8Gradient,             EwGfxWarpAffineAlpha8GradientBlend,
  0,                                         0,
  0,                                         0,
  EwGfxWarpAffineAlpha8FilterSolid,          EwGfxWarpAffineAlpha8FilterSolidBlend,
  EwGfxWarpAffineAlpha8FilterGradient,       EwGfxWarpAffineAlpha8FilterGradientBlend,

#ifdef EW_USE_PIXEL_FORMAT_SCREEN
  EwGfxScreenWarpAffineNative,               EwGfxScreenWarpAffineNativeBlend,
  EwGfxScreenWarpAffineNativeSolid,          EwGfxScreenWarpAffineNativeSolidBlend,
  EwGfxScreenWarpAffineNativeGradient,       EwGfxScreenWarpAffineNativeGradientBlend,
  0,                                         0,
  EwGfxScreenWarpAffineNativeFilter,         EwGfxScreenWarpAffineNativeFilterBlend,
  EwGfxScreenWarpAffineNativeFilterSolid,    EwGfxScreenWarpAffineNativeFilterSolidBlend,
  EwGfxScreenWarpAffineNativeFilterGradient, EwGfxScreenWarpAffineNativeFilterGradientBlend,
  0,                                         0,
  EwGfxScreenWarpAffineIndex8,               EwGfxScreenWarpAffineIndex8Blend,
  EwGfxScreenWarpAffineIndex8Solid,          EwGfxScreenWarpAffineIndex8SolidBlend,
  EwGfxScreenWarpAffineIndex8Gradient,       EwGfxScreenWarpAffineIndex8GradientBlend,
  0,                                         0,
  EwGfxScreenWarpAffineIndex8Filter,         EwGfxScreenWarpAffineIndex8FilterBlend,
  EwGfxScreenWarpAffineIndex8FilterSolid,    EwGfxScreenWarpAffineIndex8FilterSolidBlend,
  EwGfxScreenWarpAffineIndex8FilterGradient, EwGfxScreenWarpAffineIndex8FilterGradientBlend,
  0,                                         0,
  0,                                         0,
  EwGfxScreenWarpAffineAlpha8Solid,          EwGfxScreenWarpAffineAlpha8SolidBlend,
  EwGfxScreenWarpAffineAlpha8Gradient,       EwGfxScreenWarpAffineAlpha8GradientBlend,
  0,                                         0,
  0,                                         0,
  EwGfxScreenWarpAffineAlpha8FilterSolid,    EwGfxScreenWarpAffineAlpha8FilterSolidBlend,
  EwGfxScreenWarpAffineAlpha8FilterGradient, EwGfxScreenWarpAffineAlpha8FilterGradientBlend,
#endif

  0
};


/* For missing graphics subsystem functionality, register alternative software
   emulated functions */
static const XWarpWorker WarpAffineWorkers[] =
{
  EwWarpAffineNativeRow,                     EwWarpAffineNativeRowBlend,
  EwWarpAffineNativeRowSolid,                EwWarpAffineNativeRowSolidBlend,
  EwWarpAffineNativeRowGradient,             EwWarpAffineNativeRowGradientBlend,
  0,                                         0,
  EwWarpAffineNativeRowFilter,               EwWarpAffineNativeRowFilterBlend,
  EwWarpAffineNativeRowFilterSolid,          EwWarpAffineNativeRowFilterSolidBlend,
  EwWarpAffineNativeRowFilterGradient,       EwWarpAffineNativeRowFilterGradientBlend,
  0,                                         0,
  EwWarpAffineIndex8Row,                     EwWarpAffineIndex8RowBlend,
  EwWarpAffineIndex8RowSolid,                EwWarpAffineIndex8RowSolidBlend,
  EwWarpAffineIndex8RowGradient,             EwWarpAffineIndex8RowGradientBlend,
  0,                                         0,
  EwWarpAffineIndex8RowFilter,               EwWarpAffineIndex8RowFilterBlend,
  EwWarpAffineIndex8RowFilterSolid,          EwWarpAffineIndex8RowFilterSolidBlend,
  EwWarpAffineIndex8RowFilterGradient,       EwWarpAffineIndex8RowFilterGradientBlend,
  0,                                         0,
  0,                                         0,
  EwWarpAffineAlpha8RowSolid,                EwWarpAffineAlpha8RowSolidBlend,
  EwWarpAffineAlpha8RowGradient,             EwWarpAffineAlpha8RowGradientBlend,
  0,                                         0,
  0,                                         0,
  EwWarpAffineAlpha8RowFilterSolid,          EwWarpAffineAlpha8RowFilterSolidBlend,
  EwWarpAffineAlpha8RowFilterGradient,       EwWarpAffineAlpha8RowFilterGradientBlend,

#ifdef EW_USE_PIXEL_FORMAT_SCREEN
  EwScreenWarpAffineNativeRow,               EwScreenWarpAffineNativeRowBlend,
  EwScreenWarpAffineNativeRowSolid,          EwScreenWarpAffineNativeRowSolidBlend,
  EwScreenWarpAffineNativeRowGradient,       EwScreenWarpAffineNativeRowGradientBlend,
  0,                                         0,
  EwScreenWarpAffineNativeRowFilter,         EwScreenWarpAffineNativeRowFilterBlend,
  EwScreenWarpAffineNativeRowFilterSolid,   EwScreenWarpAffineNativeRowFilterSolidBlend,
  EwScreenWarpAffineNativeRowFilterGradient, EwScreenWarpAffineNativeRowFilterGradientBlend,
  0,                                         0,
  EwScreenWarpAffineIndex8Row,               EwScreenWarpAffineIndex8RowBlend,
  EwScreenWarpAffineIndex8RowSolid,          EwScreenWarpAffineIndex8RowSolidBlend,
  EwScreenWarpAffineIndex8RowGradient,       EwScreenWarpAffineIndex8RowGradientBlend,
  0,                                         0,
  EwScreenWarpAffineIndex8RowFilter,         EwScreenWarpAffineIndex8RowFilterBlend,
  EwScreenWarpAffineIndex8RowFilterSolid,    EwScreenWarpAffineIndex8RowFilterSolidBlend,
  EwScreenWarpAffineIndex8RowFilterGradient, EwScreenWarpAffineIndex8RowFilterGradientBlend,
  0,                                         0,
  0,                                         0,
  EwScreenWarpAffineAlpha8RowSolid,          EwScreenWarpAffineAlpha8RowSolidBlend,
  EwScreenWarpAffineAlpha8RowGradient,       EwScreenWarpAffineAlpha8RowGradientBlend,
  0,                                         0,
  0,                                         0,
  EwScreenWarpAffineAlpha8RowFilterSolid,    EwScreenWarpAffineAlpha8RowFilterSolidBlend,
  EwScreenWarpAffineAlpha8RowFilterGradient, EwScreenWarpAffineAlpha8RowFilterGradientBlend,
#endif

  0
};


/* Depending on the capabilities of the underlying graphics subsystem select
   a set of functions for the 'scale surface' operation. For missing scale
   functionality the 'warp affine' operation will be used. */
#ifndef EwGfxScaleNative
  #define EwGfxScaleNative                 EwGfxWarpAffineNative
#endif

#ifndef EwGfxScaleNativeBlend
  #define EwGfxScaleNativeBlend            EwGfxWarpAffineNativeBlend
#endif

#ifndef EwGfxScaleNativeSolid
  #define EwGfxScaleNativeSolid            EwGfxWarpAffineNativeSolid
#endif

#ifndef EwGfxScaleNativeSolidBlend
  #define EwGfxScaleNativeSolidBlend       EwGfxWarpAffineNativeSolidBlend
#endif

#ifndef EwGfxScaleNativeGradient
  #define EwGfxScaleNativeGradient         EwGfxWarpAffineNativeGradient
#endif

#ifndef EwGfxScaleNativeGradientBlend
  #define EwGfxScaleNativeGradientBlend    EwGfxWarpAffineNativeGradientBlend
#endif

#ifndef EwGfxScaleNativeFilter
  #define EwGfxScaleNativeFilter           EwGfxWarpAffineNativeFilter
#endif

#ifndef EwGfxScaleNativeFilterBlend
  #define EwGfxScaleNativeFilterBlend      EwGfxWarpAffineNativeFilterBlend
#endif

#ifndef EwGfxScaleNativeFilterSolid
  #define EwGfxScaleNativeFilterSolid      EwGfxWarpAffineNativeFilterSolid
#endif

#ifndef EwGfxScaleNativeFilterSolidBlend
  #define EwGfxScaleNativeFilterSolidBlend EwGfxWarpAffineNativeFilterSolidBlend
#endif

#ifndef EwGfxScaleNativeFilterGradient
  #define EwGfxScaleNativeFilterGradient   EwGfxWarpAffineNativeFilterGradient
#endif

#ifndef EwGfxScaleNativeFilterGradientBlend
  #define EwGfxScaleNativeFilterGradientBlend \
    EwGfxWarpAffineNativeFilterGradientBlend
#endif

#ifndef EwGfxScaleIndex8
  #define EwGfxScaleIndex8                 EwGfxWarpAffineIndex8
#endif

#ifndef EwGfxScaleIndex8Blend
  #define EwGfxScaleIndex8Blend            EwGfxWarpAffineIndex8Blend
#endif

#ifndef EwGfxScaleIndex8Solid
  #define EwGfxScaleIndex8Solid            EwGfxWarpAffineIndex8Solid
#endif

#ifndef EwGfxScaleIndex8SolidBlend
  #define EwGfxScaleIndex8SolidBlend       EwGfxWarpAffineIndex8SolidBlend
#endif

#ifndef EwGfxScaleIndex8Gradient
  #define EwGfxScaleIndex8Gradient         EwGfxWarpAffineIndex8Gradient
#endif

#ifndef EwGfxScaleIndex8GradientBlend
  #define EwGfxScaleIndex8GradientBlend    EwGfxWarpAffineIndex8GradientBlend
#endif

#ifndef EwGfxScaleIndex8Filter
  #define EwGfxScaleIndex8Filter           EwGfxWarpAffineIndex8Filter
#endif

#ifndef EwGfxScaleIndex8FilterBlend
  #define EwGfxScaleIndex8FilterBlend      EwGfxWarpAffineIndex8FilterBlend
#endif

#ifndef EwGfxScaleIndex8FilterSolid
  #define EwGfxScaleIndex8FilterSolid      EwGfxWarpAffineIndex8FilterSolid
#endif

#ifndef EwGfxScaleIndex8FilterSolidBlend
  #define EwGfxScaleIndex8FilterSolidBlend EwGfxWarpAffineIndex8FilterSolidBlend
#endif

#ifndef EwGfxScaleIndex8FilterGradient
  #define EwGfxScaleIndex8FilterGradient   EwGfxWarpAffineIndex8FilterGradient
#endif

#ifndef EwGfxScaleIndex8FilterGradientBlend
  #define EwGfxScaleIndex8FilterGradientBlend \
    EwGfxWarpAffineIndex8FilterGradientBlend
#endif

#ifndef EwGfxScaleAlpha8Solid
  #define EwGfxScaleAlpha8Solid            EwGfxWarpAffineAlpha8Solid
#endif

#ifndef EwGfxScaleAlpha8SolidBlend
  #define EwGfxScaleAlpha8SolidBlend       EwGfxWarpAffineAlpha8SolidBlend
#endif

#ifndef EwGfxScaleAlpha8Gradient
  #define EwGfxScaleAlpha8Gradient         EwGfxWarpAffineAlpha8Gradient
#endif

#ifndef EwGfxScaleAlpha8GradientBlend
  #define EwGfxScaleAlpha8GradientBlend    EwGfxWarpAffineAlpha8GradientBlend
#endif

#ifndef EwGfxScaleAlpha8FilterSolid
  #define EwGfxScaleAlpha8FilterSolid      EwGfxWarpAffineAlpha8FilterSolid
#endif

#ifndef EwGfxScaleAlpha8FilterSolidBlend
  #define EwGfxScaleAlpha8FilterSolidBlend EwGfxWarpAffineAlpha8FilterSolidBlend
#endif

#ifndef EwGfxScaleAlpha8FilterGradient
  #define EwGfxScaleAlpha8FilterGradient   EwGfxWarpAffineAlpha8FilterGradient
#endif

#ifndef EwGfxScaleAlpha8FilterGradientBlend
  #define EwGfxScaleAlpha8FilterGradientBlend \
    EwGfxWarpAffineAlpha8FilterGradientBlend
#endif

#ifndef EwGfxScreenScaleNative
  #define EwGfxScreenScaleNative                 EwGfxScreenWarpAffineNative
#endif

#ifndef EwGfxScreenScaleNativeBlend
  #define EwGfxScreenScaleNativeBlend            EwGfxScreenWarpAffineNativeBlend
#endif

#ifndef EwGfxScreenScaleNativeSolid
  #define EwGfxScreenScaleNativeSolid            EwGfxScreenWarpAffineNativeSolid
#endif

#ifndef EwGfxScreenScaleNativeSolidBlend
  #define EwGfxScreenScaleNativeSolidBlend       EwGfxScreenWarpAffineNativeSolidBlend
#endif

#ifndef EwGfxScreenScaleNativeGradient
  #define EwGfxScreenScaleNativeGradient         EwGfxScreenWarpAffineNativeGradient
#endif

#ifndef EwGfxScreenScaleNativeGradientBlend
  #define EwGfxScreenScaleNativeGradientBlend    EwGfxScreenWarpAffineNativeGradientBlend
#endif

#ifndef EwGfxScreenScaleNativeFilter
  #define EwGfxScreenScaleNativeFilter           EwGfxScreenWarpAffineNativeFilter
#endif

#ifndef EwGfxScreenScaleNativeFilterBlend
  #define EwGfxScreenScaleNativeFilterBlend      EwGfxScreenWarpAffineNativeFilterBlend
#endif

#ifndef EwGfxScreenScaleNativeFilterSolid
  #define EwGfxScreenScaleNativeFilterSolid      EwGfxScreenWarpAffineNativeFilterSolid
#endif

#ifndef EwGfxScreenScaleNativeFilterSolidBlend
  #define EwGfxScreenScaleNativeFilterSolidBlend EwGfxScreenWarpAffineNativeFilterSolidBlend
#endif

#ifndef EwGfxScreenScaleNativeFilterGradient
  #define EwGfxScreenScaleNativeFilterGradient   EwGfxScreenWarpAffineNativeFilterGradient
#endif

#ifndef EwGfxScreenScaleNativeFilterGradientBlend
  #define EwGfxScreenScaleNativeFilterGradientBlend \
    EwGfxScreenWarpAffineNativeFilterGradientBlend
#endif

#ifndef EwGfxScreenScaleIndex8
  #define EwGfxScreenScaleIndex8                 EwGfxScreenWarpAffineIndex8
#endif

#ifndef EwGfxScreenScaleIndex8Blend
  #define EwGfxScreenScaleIndex8Blend            EwGfxScreenWarpAffineIndex8Blend
#endif

#ifndef EwGfxScreenScaleIndex8Solid
  #define EwGfxScreenScaleIndex8Solid            EwGfxScreenWarpAffineIndex8Solid
#endif

#ifndef EwGfxScreenScaleIndex8SolidBlend
  #define EwGfxScreenScaleIndex8SolidBlend       EwGfxScreenWarpAffineIndex8SolidBlend
#endif

#ifndef EwGfxScreenScaleIndex8Gradient
  #define EwGfxScreenScaleIndex8Gradient         EwGfxScreenWarpAffineIndex8Gradient
#endif

#ifndef EwGfxScreenScaleIndex8GradientBlend
  #define EwGfxScreenScaleIndex8GradientBlend    EwGfxScreenWarpAffineIndex8GradientBlend
#endif

#ifndef EwGfxScreenScaleIndex8Filter
  #define EwGfxScreenScaleIndex8Filter           EwGfxScreenWarpAffineIndex8Filter
#endif

#ifndef EwGfxScreenScaleIndex8FilterBlend
  #define EwGfxScreenScaleIndex8FilterBlend      EwGfxScreenWarpAffineIndex8FilterBlend
#endif

#ifndef EwGfxScreenScaleIndex8FilterSolid
  #define EwGfxScreenScaleIndex8FilterSolid      EwGfxScreenWarpAffineIndex8FilterSolid
#endif

#ifndef EwGfxScreenScaleIndex8FilterSolidBlend
  #define EwGfxScreenScaleIndex8FilterSolidBlend EwGfxScreenWarpAffineIndex8FilterSolidBlend
#endif

#ifndef EwGfxScreenScaleIndex8FilterGradient
  #define EwGfxScreenScaleIndex8FilterGradient   EwGfxScreenWarpAffineIndex8FilterGradient
#endif

#ifndef EwGfxScreenScaleIndex8FilterGradientBlend
  #define EwGfxScreenScaleIndex8FilterGradientBlend \
    EwGfxScreenWarpAffineIndex8FilterGradientBlend
#endif

#ifndef EwGfxScreenScaleAlpha8Solid
  #define EwGfxScreenScaleAlpha8Solid            EwGfxScreenWarpAffineAlpha8Solid
#endif

#ifndef EwGfxScreenScaleAlpha8SolidBlend
  #define EwGfxScreenScaleAlpha8SolidBlend       EwGfxScreenWarpAffineAlpha8SolidBlend
#endif

#ifndef EwGfxScreenScaleAlpha8Gradient
  #define EwGfxScreenScaleAlpha8Gradient         EwGfxScreenWarpAffineAlpha8Gradient
#endif

#ifndef EwGfxScreenScaleAlpha8GradientBlend
  #define EwGfxScreenScaleAlpha8GradientBlend    EwGfxScreenWarpAffineAlpha8GradientBlend
#endif

#ifndef EwGfxScreenScaleAlpha8FilterSolid
  #define EwGfxScreenScaleAlpha8FilterSolid      EwGfxScreenWarpAffineAlpha8FilterSolid
#endif

#ifndef EwGfxScreenScaleAlpha8FilterSolidBlend
  #define EwGfxScreenScaleAlpha8FilterSolidBlend EwGfxScreenWarpAffineAlpha8FilterSolidBlend
#endif

#ifndef EwGfxScreenScaleAlpha8FilterGradient
  #define EwGfxScreenScaleAlpha8FilterGradient   EwGfxScreenWarpAffineAlpha8FilterGradient
#endif

#ifndef EwGfxScreenScaleAlpha8FilterGradientBlend
  #define EwGfxScreenScaleAlpha8FilterGradientBlend \
    EwGfxScreenWarpAffineAlpha8FilterGradientBlend
#endif


/* Register the functionality provided by the underlying graphics subsystem. */
static const XWarpDriver WarpScaleDrivers[] =
{
  EwGfxScaleNative,                     EwGfxScaleNativeBlend,
  EwGfxScaleNativeSolid,                EwGfxScaleNativeSolidBlend,
  EwGfxScaleNativeGradient,             EwGfxScaleNativeGradientBlend,
  0,                                    0,
  EwGfxScaleNativeFilter,               EwGfxScaleNativeFilterBlend,
  EwGfxScaleNativeFilterSolid,          EwGfxScaleNativeFilterSolidBlend,
  EwGfxScaleNativeFilterGradient,       EwGfxScaleNativeFilterGradientBlend,
  0,                                    0,
  EwGfxScaleIndex8,                     EwGfxScaleIndex8Blend,
  EwGfxScaleIndex8Solid,                EwGfxScaleIndex8SolidBlend,
  EwGfxScaleIndex8Gradient,             EwGfxScaleIndex8GradientBlend,
  0,                                    0,
  EwGfxScaleIndex8Filter,               EwGfxScaleIndex8FilterBlend,
  EwGfxScaleIndex8FilterSolid,          EwGfxScaleIndex8FilterSolidBlend,
  EwGfxScaleIndex8FilterGradient,       EwGfxScaleIndex8FilterGradientBlend,
  0,                                    0,
  0,                                    0,
  EwGfxScaleAlpha8Solid,                EwGfxScaleAlpha8SolidBlend,
  EwGfxScaleAlpha8Gradient,             EwGfxScaleAlpha8GradientBlend,
  0,                                    0,
  0,                                    0,
  EwGfxScaleAlpha8FilterSolid,          EwGfxScaleAlpha8FilterSolidBlend,
  EwGfxScaleAlpha8FilterGradient,       EwGfxScaleAlpha8FilterGradientBlend,

#ifdef EW_USE_PIXEL_FORMAT_SCREEN
  EwGfxScreenScaleNative,               EwGfxScreenScaleNativeBlend,
  EwGfxScreenScaleNativeSolid,          EwGfxScreenScaleNativeSolidBlend,
  EwGfxScreenScaleNativeGradient,       EwGfxScreenScaleNativeGradientBlend,
  0,                                    0,
  EwGfxScreenScaleNativeFilter,         EwGfxScreenScaleNativeFilterBlend,
  EwGfxScreenScaleNativeFilterSolid,    EwGfxScreenScaleNativeFilterSolidBlend,
  EwGfxScreenScaleNativeFilterGradient, EwGfxScreenScaleNativeFilterGradientBlend,
  0,                                    0,
  EwGfxScreenScaleIndex8,               EwGfxScreenScaleIndex8Blend,
  EwGfxScreenScaleIndex8Solid,          EwGfxScreenScaleIndex8SolidBlend,
  EwGfxScreenScaleIndex8Gradient,       EwGfxScreenScaleIndex8GradientBlend,
  0,                                    0,
  EwGfxScreenScaleIndex8Filter,         EwGfxScreenScaleIndex8FilterBlend,
  EwGfxScreenScaleIndex8FilterSolid,    EwGfxScreenScaleIndex8FilterSolidBlend,
  EwGfxScreenScaleIndex8FilterGradient, EwGfxScreenScaleIndex8FilterGradientBlend,
  0,                                    0,
  0,                                    0,
  EwGfxScreenScaleAlpha8Solid,          EwGfxScreenScaleAlpha8SolidBlend,
  EwGfxScreenScaleAlpha8Gradient,       EwGfxScreenScaleAlpha8GradientBlend,
  0,                                    0,
  0,                                    0,
  EwGfxScreenScaleAlpha8FilterSolid,    EwGfxScreenScaleAlpha8FilterSolidBlend,
  EwGfxScreenScaleAlpha8FilterGradient, EwGfxScreenScaleAlpha8FilterGradientBlend,
#endif

  0
};


/* Depending on the capabilities of the underlying graphics subsystem select
   a set of functions for the 'fill polygon' operation. */
#ifndef EwGfxPolygonGradient
  #define EwGfxPolygonGradient                 0
#endif

#ifndef EwGfxPolygonGradientBlend
  #define EwGfxPolygonGradientBlend            0
#endif

#ifndef EwGfxPolygonAntialiasedGradient
  #define EwGfxPolygonAntialiasedGradient      0
#endif

#ifndef EwGfxPolygonAntialiasedGradientBlend
  #define EwGfxPolygonAntialiasedGradientBlend 0
#endif

#ifndef EwGfxPolygonSolid
  #define EwGfxPolygonSolid                 EwGfxPolygonGradient
#endif

#ifndef EwGfxPolygonSolidBlend
  #define EwGfxPolygonSolidBlend            EwGfxPolygonGradientBlend
#endif

#ifndef EwGfxPolygonAntialiasedSolid
  #define EwGfxPolygonAntialiasedSolid      EwGfxPolygonAntialiasedGradient
#endif

#ifndef EwGfxPolygonAntialiasedSolidBlend
  #define EwGfxPolygonAntialiasedSolidBlend EwGfxPolygonAntialiasedGradientBlend
#endif


#ifndef EwGfxScreenPolygonGradient
  #define EwGfxScreenPolygonGradient                 0
#endif

#ifndef EwGfxScreenPolygonGradientBlend
  #define EwGfxScreenPolygonGradientBlend            0
#endif

#ifndef EwGfxScreenPolygonAntialiasedGradient
  #define EwGfxScreenPolygonAntialiasedGradient      0
#endif

#ifndef EwGfxScreenPolygonAntialiasedGradientBlend
  #define EwGfxScreenPolygonAntialiasedGradientBlend 0
#endif

#ifndef EwGfxScreenPolygonSolid
  #define EwGfxScreenPolygonSolid                 EwGfxScreenPolygonGradient
#endif

#ifndef EwGfxScreenPolygonSolidBlend
  #define EwGfxScreenPolygonSolidBlend            EwGfxScreenPolygonGradientBlend
#endif

#ifndef EwGfxScreenPolygonAntialiasedSolid
  #define EwGfxScreenPolygonAntialiasedSolid      EwGfxScreenPolygonAntialiasedGradient
#endif

#ifndef EwGfxScreenPolygonAntialiasedSolidBlend
  #define EwGfxScreenPolygonAntialiasedSolidBlend EwGfxScreenPolygonAntialiasedGradientBlend
#endif


/* Register the functionality provided by the underlying graphics subsystem. */
static const XPolygonDriver PolygonDrivers[] =
{
  0, 0,
  EwGfxPolygonSolid,                      EwGfxPolygonSolidBlend,
  EwGfxPolygonGradient,                   EwGfxPolygonGradientBlend,
  0, 0, 
  0, 0,
  EwGfxPolygonAntialiasedSolid,           EwGfxPolygonAntialiasedSolidBlend,
  EwGfxPolygonAntialiasedGradient,        EwGfxPolygonAntialiasedGradientBlend,
  0, 0,
  0, 0,

#ifdef EW_USE_PIXEL_FORMAT_SCREEN
  0, 0,
  EwGfxScreenPolygonSolid,                EwGfxScreenPolygonSolidBlend,
  EwGfxScreenPolygonGradient,             EwGfxScreenPolygonGradientBlend,
  0, 0,
  0, 0,
  EwGfxScreenPolygonAntialiasedSolid,     EwGfxScreenPolygonAntialiasedSolidBlend,
  EwGfxScreenPolygonAntialiasedGradient,  EwGfxScreenPolygonAntialiasedGradientBlend,
  0, 0,
  0, 0,
#endif

  0
};


/* pba */
