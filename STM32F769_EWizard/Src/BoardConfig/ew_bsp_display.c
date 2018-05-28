/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This software is delivered "as is" and shows the usage of other software
* components. It is provided as an example software which is intended to be
* modified and extended according to particular requirements.
*
* TARA Systems hereby disclaims all warranties and conditions with regard to the
* software, including all implied warranties and conditions of merchantability
* and non-infringement of any third party IPR or other rights which may result
* from the use or the inability to use the software.
*
********************************************************************************
*
* DESCRIPTION:
*   This file is part of the interface (glue layer) between an Embedded Wizard
*   generated UI application and the board support package (BSP) of a dedicated
*   target.
*   This template is responsible to initialize the display hardware of the board
*   and to provide the necessary access to update the display content.
*
*******************************************************************************/

#include "stm32f7xx_hal.h"
#include "stm32f769i_discovery.h"
#include "stm32f769i_discovery_lcd.h"

#include <string.h>

#include "ewrte.h"
#include "ewgfx.h"
#include "ewextgfx.h"
#include "ewgfxdefs.h"

#include "ew_bsp_graphics.h"
#include "ew_bsp_display.h"
#include "ew_bsp_clock.h"

#if EW_USE_FREE_RTOS == 1

  #include "cmsis_os.h"

  static osSemaphoreId        LcdUpdateSemaphoreId = 0;

#endif

#define LAYER_INDEX           0

#define VSYNC                 1
#define VBP                   1
#define VFP                   1
#define HSYNC                 1
#define HBP                   1
#define HFP                   1

#define NO_AREA               0
#define LEFT_AREA             1
#define RIGHT_AREA            2

#define hltdc_handle          hltdc_discovery
#define hdsi_handle           hdsi_discovery

#define __DSI_MASK_TE()       (GPIOJ->AFR[0] &= (0xFFFFF0FFU))   /* Mask DSI TearingEffect Pin*/
#define __DSI_UNMASK_TE()     (GPIOJ->AFR[0] |= ((uint32_t)(GPIO_AF13_DSI) << 8)) /* UnMask DSI TearingEffect Pin*/

#if (( EW_FRAME_BUFFER_COLOR_FORMAT == EW_FRAME_BUFFER_COLOR_FORMAT_RGBA8888 ) \
  || ( EW_FRAME_BUFFER_COLOR_FORMAT == EW_FRAME_BUFFER_COLOR_FORMAT_RGB888 ))
  #define DSI_COLOR_CODING    DSI_RGB888
  #define OTM8009A_FORMAT     OTM8009A_FORMAT_RGB888
#else
  #define DSI_COLOR_CODING    DSI_RGB565
  #define OTM8009A_FORMAT     OTM8009A_FORMAT_RBG565
#endif

extern LTDC_HandleTypeDef     hltdc_handle;
extern DSI_HandleTypeDef      hdsi_handle;

static uint32_t               CurrentFramebufferAddress = 0;
static LTDC_LayerCfgTypeDef   LayerConfig;
static volatile int32_t       ActiveArea  = LEFT_AREA;

static uint8_t pColLeft[]   = {0x00, 0x00, 0x01, 0x8F}; /*   0 -> 399 */
static uint8_t pColRight[]  = {0x01, 0x90, 0x03, 0x1F}; /* 400 -> 799 */
static uint8_t pPage[]      = {0x00, 0x00, 0x01, 0xDF}; /*   0 -> 479 */
#ifdef EW_USE_DOUBLE_BUFFER
  static uint8_t pScanCol[] = {0x01, 0xB0};             /* Scan @ 432 */
#else
  static uint8_t pScanCol[] = {0x02, 0x40};             /* Scan @ 576 */
#endif


#if EW_USE_FREE_RTOS == 1
void HAL_DSI_MspInit(DSI_HandleTypeDef* hdsi)
{
  HAL_NVIC_SetPriority(DSI_IRQn, 8, 0);
}
#endif


/*******************************************************************************
* FUNCTION:
*   LTDC_IRQHandler, LTDC_ER_IRQHandler and DSI_IRQHandler
*
* DESCRIPTION:
*   LTDC_IRQHandler, LTDC_ER_IRQHandler and DSI_IRQHandler Interrupt Handler.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void LTDC_IRQHandler( void )
{
  BSP_LCD_LTDC_IRQHandler();
}

void LTDC_ER_IRQHandler( void )
{
  BSP_LCD_LTDC_ER_IRQHandler();
}

void DSI_IRQHandler( void )
{
  HAL_DSI_IRQHandler( &hdsi_handle );
}


/*******************************************************************************
* FUNCTION:
*   EwBspConfigDisplay
*
* DESCRIPTION:
*   Configures the display hardware.
*
* ARGUMENTS:
*   aWidth   - Width of the framebuffer in pixel.
*   aHeight  - Height of the framebuffer in pixel.
*   aAddress - Startaddress of the framebuffer.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspConfigDisplay( int aWidth, int aHeight, void* aAddress )
{
  DSI_CmdCfgTypeDef         CmdCfg;
  DSI_LPCmdTypeDef          LPCmd;
  DSI_PLLInitTypeDef        dsiPllInit;
  GPIO_InitTypeDef          GPIO_Init_Structure;

  memset( &CmdCfg, 0, sizeof( CmdCfg ));
  memset( &LPCmd, 0, sizeof( LPCmd ));
  memset( &dsiPllInit, 0, sizeof( dsiPllInit ));
  memset( &GPIO_Init_Structure, 0, sizeof( GPIO_Init_Structure ));

  /* Initialize given framebuffer */
  if ( aAddress )
    memset( aAddress, 0, aWidth * aHeight * FRAME_BUFFER_DEPTH );

  ActiveArea = NO_AREA;

  #if EW_USE_FREE_RTOS == 1

    /* Create the LCD update semaphore */
    osSemaphoreDef( LcdUpdateSemaphore );
    LcdUpdateSemaphoreId = osSemaphoreCreate( osSemaphore( LcdUpdateSemaphore ), 1 );

  #endif

  /* Toggle Hardware Reset of the DSI LCD using its XRES signal (active low) */
  BSP_LCD_Reset();

  /* Call first MSP Initialize only in case of first initialization
  * This will set IP blocks LTDC, DSI and DMA2D
  * - out of reset
  * - clocked
  * - NVIC IRQ related to IP blocks enabled
  */
  BSP_LCD_MspInit();

  /* Base address of DSI Host/Wrapper registers to be set before calling De-Init */
  hdsi_handle.Instance = DSI;

  HAL_DSI_DeInit(&(hdsi_handle));

#if defined(USE_STM32F769I_EVAL) || defined(USE_STM32F769I_DISCO)
  dsiPllInit.PLLNDIV  = 100;
  dsiPllInit.PLLIDF   = DSI_PLL_IN_DIV5;
#else
  dsiPllInit.PLLNDIV  = 125;
  dsiPllInit.PLLIDF   = DSI_PLL_IN_DIV2;
#endif  /* USE_STM32469I_DISCO_REVA */
  dsiPllInit.PLLODF  = DSI_PLL_OUT_DIV1;

  hdsi_handle.Init.NumberOfLanes = DSI_TWO_DATA_LANES;
  hdsi_handle.Init.TXEscapeCkdiv = 0x4;
  HAL_DSI_Init(&(hdsi_handle), &(dsiPllInit));

  /* Configure the DSI for Command mode */
  CmdCfg.VirtualChannelID      = 0;
  CmdCfg.HSPolarity            = DSI_HSYNC_ACTIVE_HIGH;
  CmdCfg.VSPolarity            = DSI_VSYNC_ACTIVE_HIGH;
  CmdCfg.DEPolarity            = DSI_DATA_ENABLE_ACTIVE_HIGH;
  CmdCfg.ColorCoding           = DSI_COLOR_CODING;
  CmdCfg.CommandSize           = aWidth / 2; /* screen is diveded into 2 areas! */
  CmdCfg.TearingEffectSource   = DSI_TE_EXTERNAL;
  CmdCfg.TearingEffectPolarity = DSI_TE_RISING_EDGE;
  CmdCfg.VSyncPol              = DSI_VSYNC_FALLING;
  CmdCfg.AutomaticRefresh      = DSI_AR_DISABLE;
  CmdCfg.TEAcknowledgeRequest  = DSI_TE_ACKNOWLEDGE_ENABLE;
  HAL_DSI_ConfigAdaptedCommandMode(&hdsi_handle, &CmdCfg);

  LPCmd.LPGenShortWriteNoP     = DSI_LP_GSW0P_ENABLE;
  LPCmd.LPGenShortWriteOneP    = DSI_LP_GSW1P_ENABLE;
  LPCmd.LPGenShortWriteTwoP    = DSI_LP_GSW2P_ENABLE;
  LPCmd.LPGenShortReadNoP      = DSI_LP_GSR0P_ENABLE;
  LPCmd.LPGenShortReadOneP     = DSI_LP_GSR1P_ENABLE;
  LPCmd.LPGenShortReadTwoP     = DSI_LP_GSR2P_ENABLE;
  LPCmd.LPGenLongWrite         = DSI_LP_GLW_ENABLE;
  LPCmd.LPDcsShortWriteNoP     = DSI_LP_DSW0P_ENABLE;
  LPCmd.LPDcsShortWriteOneP    = DSI_LP_DSW1P_ENABLE;
  LPCmd.LPDcsShortReadNoP      = DSI_LP_DSR0P_ENABLE;
  LPCmd.LPDcsLongWrite         = DSI_LP_DLW_ENABLE;
  HAL_DSI_ConfigCommand(&hdsi_handle, &LPCmd);

  /* De-Initialize LTDC */
  HAL_LTDC_DeInit(&hltdc_handle);

  /* Configure LTDC */
  hltdc_handle.Init.HorizontalSync     = HSYNC;
  hltdc_handle.Init.VerticalSync       = VSYNC;
  hltdc_handle.Init.AccumulatedHBP     = HSYNC + HBP;
  hltdc_handle.Init.AccumulatedVBP     = VSYNC + VBP;
  hltdc_handle.Init.AccumulatedActiveW = HSYNC + HBP + aWidth / 2; /* screen is diveded into 2 areas! */
  hltdc_handle.Init.AccumulatedActiveH = VSYNC + VBP + aHeight;
  hltdc_handle.Init.TotalWidth         = HSYNC + HBP + aWidth / 2 + HFP; /* screen is diveded into 2 areas! */
  hltdc_handle.Init.TotalHeigh         = VSYNC + VBP + aHeight + VFP;
  hltdc_handle.Init.Backcolor.Blue     = 0;
  hltdc_handle.Init.Backcolor.Green    = 0;
  hltdc_handle.Init.Backcolor.Red      = 0;
  hltdc_handle.Init.HSPolarity         = LTDC_HSPOLARITY_AL;
  hltdc_handle.Init.VSPolarity         = LTDC_VSPOLARITY_AL;
  hltdc_handle.Init.DEPolarity         = LTDC_DEPOLARITY_AL;
  hltdc_handle.Init.PCPolarity         = LTDC_PCPOLARITY_IPC;
  hltdc_handle.Instance                = LTDC;

  /* Initialize LTDC */
  HAL_LTDC_Init(&hltdc_handle);

  /* Start DSI */
  HAL_DSI_Start(&(hdsi_handle));

  /* Initialize the OTM8009A LCD Display IC Driver (KoD LCD IC Driver)
  *  depending on configuration set in 'hdsivideo_handle'.
  */
  OTM8009A_Init( OTM8009A_FORMAT, OTM8009A_ORIENTATION_LANDSCAPE );

  LPCmd.LPGenShortWriteNoP    = DSI_LP_GSW0P_DISABLE;
  LPCmd.LPGenShortWriteOneP   = DSI_LP_GSW1P_DISABLE;
  LPCmd.LPGenShortWriteTwoP   = DSI_LP_GSW2P_DISABLE;
  LPCmd.LPGenShortReadNoP     = DSI_LP_GSR0P_DISABLE;
  LPCmd.LPGenShortReadOneP    = DSI_LP_GSR1P_DISABLE;
  LPCmd.LPGenShortReadTwoP    = DSI_LP_GSR2P_DISABLE;
  LPCmd.LPGenLongWrite        = DSI_LP_GLW_DISABLE;
  LPCmd.LPDcsShortWriteNoP    = DSI_LP_DSW0P_DISABLE;
  LPCmd.LPDcsShortWriteOneP   = DSI_LP_DSW1P_DISABLE;
  LPCmd.LPDcsShortReadNoP     = DSI_LP_DSR0P_DISABLE;
  LPCmd.LPDcsLongWrite        = DSI_LP_DLW_DISABLE;
  HAL_DSI_ConfigCommand(&hdsi_handle, &LPCmd);

  HAL_DSI_ConfigFlowControl(&hdsi_handle, DSI_FLOW_CONTROL_BTA);


  /* Configure DSI_TE pin from MB1166 : Tearing effect on separated GPIO from KoD LCD */
  /* that is mapped on GPIOJ2 as alternate DSI function (DSI_TE)                      */
  /* This pin is used only when the LCD and DSI link is configured in command mode    */
  __HAL_RCC_GPIOJ_CLK_ENABLE();
  GPIO_Init_Structure.Pin       = GPIO_PIN_2;
  GPIO_Init_Structure.Mode      = GPIO_MODE_AF_PP;
  GPIO_Init_Structure.Pull      = GPIO_NOPULL;
  GPIO_Init_Structure.Speed     = GPIO_SPEED_HIGH;
  GPIO_Init_Structure.Alternate = GPIO_AF13_DSI;
  HAL_GPIO_Init(GPIOJ, &GPIO_Init_Structure);

  /* Refresh the display */
  HAL_DSI_Refresh(&hdsi_handle);

  /* Layer Init */
  LayerConfig.WindowX0 = 0;
  LayerConfig.WindowX1 = aWidth / 2;
  LayerConfig.WindowY0 = 0;
  LayerConfig.WindowY1 = aHeight;

  /* Pixel Format configuration: translate framebuffer color format into LTDC mode */
  #if ( EW_FRAME_BUFFER_COLOR_FORMAT == EW_FRAME_BUFFER_COLOR_FORMAT_RGBA8888 )
    LayerConfig.PixelFormat = LTDC_PIXEL_FORMAT_ARGB8888;
  #elif ( EW_FRAME_BUFFER_COLOR_FORMAT == EW_FRAME_BUFFER_COLOR_FORMAT_RGB888 )
    LayerConfig.PixelFormat = LTDC_PIXEL_FORMAT_RGB888;
  #elif ( EW_FRAME_BUFFER_COLOR_FORMAT == EW_FRAME_BUFFER_COLOR_FORMAT_RGBA4444 )
    LayerConfig.PixelFormat = LTDC_PIXEL_FORMAT_ARGB4444;
  #elif ( EW_FRAME_BUFFER_COLOR_FORMAT == EW_FRAME_BUFFER_COLOR_FORMAT_RGB565 )
    LayerConfig.PixelFormat = LTDC_PIXEL_FORMAT_RGB565;
  #elif ( EW_FRAME_BUFFER_COLOR_FORMAT == EW_FRAME_BUFFER_COLOR_FORMAT_Index8 )
    LayerConfig.PixelFormat = LTDC_PIXEL_FORMAT_L8;
  #elif ( EW_FRAME_BUFFER_COLOR_FORMAT == EW_FRAME_BUFFER_COLOR_FORMAT_LumA44 )
    LayerConfig.PixelFormat = LTDC_PIXEL_FORMAT_AL44;
  #endif

  LayerConfig.FBStartAdress = (uint32_t)aAddress;
  LayerConfig.Alpha = 255;
  LayerConfig.Alpha0 = 0;
  LayerConfig.Backcolor.Blue = 0;
  LayerConfig.Backcolor.Green = 0;
  LayerConfig.Backcolor.Red = 0;
  LayerConfig.BlendingFactor1 = LTDC_BLENDING_FACTOR1_CA;
  LayerConfig.BlendingFactor2 = LTDC_BLENDING_FACTOR2_CA;
  LayerConfig.ImageWidth = aWidth / 2;
  LayerConfig.ImageHeight = aHeight;

  HAL_LTDC_ConfigLayer(&hltdc_handle, &LayerConfig, LAYER_INDEX );

  BSP_LCD_SelectLayer( LAYER_INDEX );

  HAL_DSI_LongWrite( &hdsi_handle, 0, DSI_DCS_LONG_PKT_WRITE, 4, OTM8009A_CMD_CASET, pColLeft );
  HAL_DSI_LongWrite( &hdsi_handle, 0, DSI_DCS_LONG_PKT_WRITE, 4, OTM8009A_CMD_PASET, pPage );

  /* Update pitch : the draw is done on the whole physical X Size */
  HAL_LTDC_SetPitch( &hltdc_handle, aWidth, LAYER_INDEX );

  HAL_DSI_LongWrite(&hdsi_handle, 0, DSI_DCS_LONG_PKT_WRITE, 2, OTM8009A_CMD_WRTESCN, pScanCol);

  /* short delay necessary to ensure proper DSI update... */
  HAL_Delay( 100 );

  #if EW_USE_FREE_RTOS == 1

    /* initially take the LcdUpdate token for the first LCD update */
    osSemaphoreWait( LcdUpdateSemaphoreId , 1000 );

  #endif
}


/*******************************************************************************
* FUNCTION:
*   EwBspWaitForDisplayCompletion
*
* DESCRIPTION:
*   The function EwBspWaitForDisplayCompletion returns as soon as the LCD update
*   has been completed.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
static void EwBspWaitForDisplayCompletion( void )
{
  if ( ActiveArea == NO_AREA )
    return;

  CPU_LOAD_SET_IDLE();

  #if EW_USE_FREE_RTOS == 1

    osSemaphoreWait( LcdUpdateSemaphoreId , 1000 );
    ActiveArea = NO_AREA;

  #else

  while ( ActiveArea != NO_AREA )
    ;

  #endif

  CPU_LOAD_SET_ACTIVE();
}


/*******************************************************************************
* FUNCTION:
*   EwBspUpdateDisplay
*
* DESCRIPTION:
*   Starts the transfer of the framebuffer content via DSI to update the LCD.
*
* ARGUMENTS:
*   None
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspUpdateDisplay( void )
{
  /* ensure that LCD update is finished */
  EwBspWaitForDisplayCompletion();

  /* prepare the update of the left display area */
  ActiveArea = LEFT_AREA;

  /* change address within layer configuration structure */
  LayerConfig.FBStartAdress = CurrentFramebufferAddress;

  /* change layer configuration */
  if ( HAL_LTDC_ConfigLayer( &hltdc_handle, &LayerConfig, LAYER_INDEX ) != HAL_OK )
    EwPrint( "EwBspUpdateDisplay: Could not change layer configuration!\n" );

  /* Disable DSI Wrapper */
  __HAL_DSI_WRAPPER_DISABLE( &hdsi_handle );

  /* Update LTDC configuaration */
  LTDC_LAYER( &hltdc_handle, LAYER_INDEX )->CFBAR = LayerConfig.FBStartAdress ;
  __HAL_LTDC_RELOAD_CONFIG( &hltdc_handle );

  /* Enable DSI Wrapper */
  __HAL_DSI_WRAPPER_ENABLE( &hdsi_handle );

  HAL_DSI_LongWrite( &hdsi_handle, 0, DSI_DCS_LONG_PKT_WRITE, 4, OTM8009A_CMD_CASET, pColLeft );

  /* start the update of the LCD via DSI */
  __DSI_UNMASK_TE();

  #if EW_USE_DOUBLE_BUFFER == 1

    /* reserve the memory bandwidth for the DSI update */
    EwBspGraphicsConcurrentOperation( 0 );

  #else

    /* ensure that LCD update is finished */
    EwBspWaitForDisplayCompletion();

  #endif
}


/*******************************************************************************
* FUNCTION:
*   HAL_DSI_TearingEffectCallback
*
* DESCRIPTION:
*   Tearing Effect DSI callback.
*
* ARGUMENTS:
*   hdsi - Pointer to a DSI_HandleTypeDef structure that contains the
*     configuration information for the DSI.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void HAL_DSI_TearingEffectCallback( DSI_HandleTypeDef* hdsi )
{
  /* Mask the TE */
  __DSI_MASK_TE();

  /* Refresh the left part of the display */
  HAL_DSI_Refresh( hdsi );
}


/*******************************************************************************
* FUNCTION:
*   HAL_DSI_EndOfRefreshCallback
*
* DESCRIPTION:
*   End of Refresh DSI callback.
*
* ARGUMENTS:
*   hdsi - Pointer to a DSI_HandleTypeDef structure that contains the
*     configuration information for the DSI.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void HAL_DSI_EndOfRefreshCallback( DSI_HandleTypeDef* hdsi )
{
  if ( ActiveArea == LEFT_AREA )
  {
    /* Disable DSI Wrapper */
    __HAL_DSI_WRAPPER_DISABLE( hdsi );

    /* Update LTDC configuaration */
    LTDC_LAYER( &hltdc_handle, LAYER_INDEX )->CFBAR = LayerConfig.FBStartAdress + LayerConfig.ImageWidth * FRAME_BUFFER_DEPTH;
    __HAL_LTDC_RELOAD_CONFIG( &hltdc_handle );

    /* Enable DSI Wrapper */
    __HAL_DSI_WRAPPER_ENABLE( hdsi );

    HAL_DSI_LongWrite( hdsi, 0, DSI_DCS_LONG_PKT_WRITE, 4, OTM8009A_CMD_CASET, pColRight );

    /* Refresh the display */
    HAL_DSI_Refresh( hdsi );

    ActiveArea = RIGHT_AREA;
  }
  else
  {

    #if EW_USE_FREE_RTOS == 1

      osSemaphoreRelease( LcdUpdateSemaphoreId );

    #else

      ActiveArea = NO_AREA;

    #endif

    /* DSI update is done, now let the DMA2D work in parallel with CPU */
    EwBspGraphicsConcurrentOperation( 1 );
  }
}


/*******************************************************************************
* FUNCTION:
*   EwBspSetFramebufferAddress
*
* DESCRIPTION:
*   The function EwBspSetFramebufferAddress is called from the Graphics Engine
*   in order to change the currently active framebuffer address. If the display
*   is running in a double-buffering mode, the function is called after each
*   screen update.
*   Changing the framebuffer address should be synchronized with V-sync.
*   In case of double-buffering, the function has to wait and return after
*   the V-sync was detected.
*
* ARGUMENTS:
*   aAddress - New address of the framebuffer to be shown on the display.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspSetFramebufferAddress( unsigned long aAddress )
{
  CurrentFramebufferAddress = (uint32_t)aAddress;
}


/*******************************************************************************
* FUNCTION:
*   EwBspSetFramebufferClut
*
* DESCRIPTION:
*   The function EwBspSetFramebufferClut is called from the Graphics Engine
*   in order to update the hardware CLUT of the current framebuffer.
*   The function is only called when the color format of the framebuffer is
*   Index8 or LumA44.
*
* ARGUMENTS:
*   aClut - Pointer to a color lookup table with 256 enries.
*
* RETURN VALUE:
*   None
*
*******************************************************************************/
void EwBspSetFramebufferClut( unsigned long* aClut )
{
  __HAL_DSI_WRAPPER_DISABLE( &hdsi_handle );

  /* short delay necessary to ensure proper DSI update... */
  HAL_Delay( 100 );

  if ( HAL_LTDC_ConfigCLUT( &hltdc_handle, (uint32_t*)aClut, 256, LAYER_INDEX ) != HAL_OK )
    EwPrint( "EwBspSetFramebufferClut: Could not configure layer CLUT!\n" );
  if ( HAL_LTDC_EnableCLUT( &hltdc_handle, LAYER_INDEX ) != HAL_OK )
    EwPrint( "EwBspSetFramebufferClut: Could not enable layer CLUT!\n" );

  /* short delay necessary to ensure proper DSI update... */
  HAL_Delay( 100 );

  __HAL_DSI_WRAPPER_ENABLE( &hdsi_handle );

  /* short delay necessary to ensure proper DSI update... */
  HAL_Delay( 100 );
}


/* msy */
