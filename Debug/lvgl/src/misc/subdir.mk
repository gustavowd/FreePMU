################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../lvgl/src/misc/lv_anim.c \
../lvgl/src/misc/lv_area.c \
../lvgl/src/misc/lv_async.c \
../lvgl/src/misc/lv_bidi.c \
../lvgl/src/misc/lv_color.c \
../lvgl/src/misc/lv_fs.c \
../lvgl/src/misc/lv_gc.c \
../lvgl/src/misc/lv_ll.c \
../lvgl/src/misc/lv_log.c \
../lvgl/src/misc/lv_math.c \
../lvgl/src/misc/lv_mem.c \
../lvgl/src/misc/lv_printf.c \
../lvgl/src/misc/lv_style.c \
../lvgl/src/misc/lv_style_gen.c \
../lvgl/src/misc/lv_templ.c \
../lvgl/src/misc/lv_timer.c \
../lvgl/src/misc/lv_tlsf.c \
../lvgl/src/misc/lv_txt.c \
../lvgl/src/misc/lv_txt_ap.c \
../lvgl/src/misc/lv_utils.c 

OBJS += \
./lvgl/src/misc/lv_anim.o \
./lvgl/src/misc/lv_area.o \
./lvgl/src/misc/lv_async.o \
./lvgl/src/misc/lv_bidi.o \
./lvgl/src/misc/lv_color.o \
./lvgl/src/misc/lv_fs.o \
./lvgl/src/misc/lv_gc.o \
./lvgl/src/misc/lv_ll.o \
./lvgl/src/misc/lv_log.o \
./lvgl/src/misc/lv_math.o \
./lvgl/src/misc/lv_mem.o \
./lvgl/src/misc/lv_printf.o \
./lvgl/src/misc/lv_style.o \
./lvgl/src/misc/lv_style_gen.o \
./lvgl/src/misc/lv_templ.o \
./lvgl/src/misc/lv_timer.o \
./lvgl/src/misc/lv_tlsf.o \
./lvgl/src/misc/lv_txt.o \
./lvgl/src/misc/lv_txt_ap.o \
./lvgl/src/misc/lv_utils.o 

C_DEPS += \
./lvgl/src/misc/lv_anim.d \
./lvgl/src/misc/lv_area.d \
./lvgl/src/misc/lv_async.d \
./lvgl/src/misc/lv_bidi.d \
./lvgl/src/misc/lv_color.d \
./lvgl/src/misc/lv_fs.d \
./lvgl/src/misc/lv_gc.d \
./lvgl/src/misc/lv_ll.d \
./lvgl/src/misc/lv_log.d \
./lvgl/src/misc/lv_math.d \
./lvgl/src/misc/lv_mem.d \
./lvgl/src/misc/lv_printf.d \
./lvgl/src/misc/lv_style.d \
./lvgl/src/misc/lv_style_gen.d \
./lvgl/src/misc/lv_templ.d \
./lvgl/src/misc/lv_timer.d \
./lvgl/src/misc/lv_tlsf.d \
./lvgl/src/misc/lv_txt.d \
./lvgl/src/misc/lv_txt_ap.d \
./lvgl/src/misc/lv_utils.d 


# Each subdirectory must supply rules for building sources it contributes
lvgl/src/misc/%.o: ../lvgl/src/misc/%.c lvgl/src/misc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F769xx -DSTM32 -DSTM32F7 -DLV_LVGL_H_INCLUDE_SIMPLE -DSTM32F769I_DISCO -DSTM32F769NIHx '-DMBEDTLS_CONFIG_FILE=<mbedtls_config.h>' -D_SYS_TIME_H -D_TIMEVAL_DEFINED -DMBEDTLS_PLATFORM_TIME_MACRO=time_c_library -DARM_MATH_CM7 '-D__packed=__attribute__((__packed__))' '-D__weak=__attribute__((weak))' -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/lvgl" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Utilities/STM32F769I-Discovery" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/mbedTLS/include" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/src" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/src/include" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/system" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/system/OS" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Core/Modules/DHCPClient" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

