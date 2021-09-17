################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/frameDataQ.c \
../Core/Src/freertos.c \
../Core/Src/hardware_rng.c \
../Core/Src/k_rtc.c \
../Core/Src/main.c \
../Core/Src/net_sockets.c \
../Core/Src/printf_lib.c \
../Core/Src/serial.c \
../Core/Src/ssl_client.c \
../Core/Src/stm32f7xx_hal_msp.c \
../Core/Src/stm32f7xx_hal_timebase_tim.c \
../Core/Src/stm32f7xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f7xx.c \
../Core/Src/tarefasPMU.c \
../Core/Src/tcp_server.c \
../Core/Src/tls_client_utils.c \
../Core/Src/tls_common_utils.c \
../Core/Src/tls_server_utils.c 

OBJS += \
./Core/Src/frameDataQ.o \
./Core/Src/freertos.o \
./Core/Src/hardware_rng.o \
./Core/Src/k_rtc.o \
./Core/Src/main.o \
./Core/Src/net_sockets.o \
./Core/Src/printf_lib.o \
./Core/Src/serial.o \
./Core/Src/ssl_client.o \
./Core/Src/stm32f7xx_hal_msp.o \
./Core/Src/stm32f7xx_hal_timebase_tim.o \
./Core/Src/stm32f7xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f7xx.o \
./Core/Src/tarefasPMU.o \
./Core/Src/tcp_server.o \
./Core/Src/tls_client_utils.o \
./Core/Src/tls_common_utils.o \
./Core/Src/tls_server_utils.o 

C_DEPS += \
./Core/Src/frameDataQ.d \
./Core/Src/freertos.d \
./Core/Src/hardware_rng.d \
./Core/Src/k_rtc.d \
./Core/Src/main.d \
./Core/Src/net_sockets.d \
./Core/Src/printf_lib.d \
./Core/Src/serial.d \
./Core/Src/ssl_client.d \
./Core/Src/stm32f7xx_hal_msp.d \
./Core/Src/stm32f7xx_hal_timebase_tim.d \
./Core/Src/stm32f7xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f7xx.d \
./Core/Src/tarefasPMU.d \
./Core/Src/tcp_server.d \
./Core/Src/tls_client_utils.d \
./Core/Src/tls_common_utils.d \
./Core/Src/tls_server_utils.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F769xx -DSTM32 -DSTM32F7 -DLV_LVGL_H_INCLUDE_SIMPLE -DSTM32F769I_DISCO -DSTM32F769NIHx '-DMBEDTLS_CONFIG_FILE=<mbedtls_config.h>' -D_SYS_TIME_H -D_TIMEVAL_DEFINED -DMBEDTLS_PLATFORM_TIME_MACRO=time_c_library -DARM_MATH_CM7 '-D__packed=__attribute__((__packed__))' '-D__weak=__attribute__((weak))' -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/lvgl" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Utilities/STM32F769I-Discovery" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/mbedTLS/include" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/src" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/src/include" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/system" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/system/OS" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Core/Modules/DHCPClient" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

