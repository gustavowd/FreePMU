################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/Application/Src/DeviceDriver.c \
../Src/Application/Src/frameDataQ.c \
../Src/Application/Src/freertos.c \
../Src/Application/Src/hardware_rng.c \
../Src/Application/Src/main.c \
../Src/Application/Src/net_sockets.c \
../Src/Application/Src/printf_lib.c \
../Src/Application/Src/ssl_client.c \
../Src/Application/Src/stm32f7xx_hal_timebase_tim.c \
../Src/Application/Src/stm32f7xx_it.c \
../Src/Application/Src/system_stm32f7xx.c \
../Src/Application/Src/tarefasPMU.c \
../Src/Application/Src/tcp_server.c 

OBJS += \
./Src/Application/Src/DeviceDriver.o \
./Src/Application/Src/frameDataQ.o \
./Src/Application/Src/freertos.o \
./Src/Application/Src/hardware_rng.o \
./Src/Application/Src/main.o \
./Src/Application/Src/net_sockets.o \
./Src/Application/Src/printf_lib.o \
./Src/Application/Src/ssl_client.o \
./Src/Application/Src/stm32f7xx_hal_timebase_tim.o \
./Src/Application/Src/stm32f7xx_it.o \
./Src/Application/Src/system_stm32f7xx.o \
./Src/Application/Src/tarefasPMU.o \
./Src/Application/Src/tcp_server.o 

C_DEPS += \
./Src/Application/Src/DeviceDriver.d \
./Src/Application/Src/frameDataQ.d \
./Src/Application/Src/freertos.d \
./Src/Application/Src/hardware_rng.d \
./Src/Application/Src/main.d \
./Src/Application/Src/net_sockets.d \
./Src/Application/Src/printf_lib.d \
./Src/Application/Src/ssl_client.d \
./Src/Application/Src/stm32f7xx_hal_timebase_tim.d \
./Src/Application/Src/stm32f7xx_it.d \
./Src/Application/Src/system_stm32f7xx.d \
./Src/Application/Src/tarefasPMU.d \
./Src/Application/Src/tcp_server.d 


# Each subdirectory must supply rules for building sources it contributes
Src/Application/Src/%.o: ../Src/Application/Src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' '-DUSE_HAL_DRIVER=1' -DSTM32F746xx '-DMBEDTLS_CONFIG_FILE=<mbedtls_config.h>' '-DEW_FRAME_BUFFER_COLOR_FORMAT=EW_FRAME_BUFFER_COLOR_FORMAT_RGB565' '-DEW_USE_FREE_RTOS=1' '-DEW_MAX_SURFACE_CACHE_SIZE=0x200000' '-DEW_MAX_GLYPH_SURFACE_WIDTH=256' '-DEW_MAX_GLYPH_SURFACE_HEIGHT=256' '-DEW_USE_DOUBLE_BUFFER=1' '-DEW_SURFACE_ROTATION=0' '-DEW_CPU_LOAD_MEASURING=0' '-DEW_USE_QSPI_FLASH=1' -DARM_MATH_CM7 -D__FPU_PRESENT -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Config" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Drivers/CMSIS/Include" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Drivers/BSP/Components/ft5336" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Drivers/BSP/Components/wm8994" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Drivers/BSP/STM32746G-Discovery" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Middlewares/Third_Party/LwIP/system" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Middlewares/Third_Party/FatFs/src" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Middlewares/Third_Party/FatFs/src/drivers" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Middlewares/ST/STM32_USB_Host_Library/Core/Inc" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Middlewares/Third_Party/mbedTLS/include" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Src/Application/Inc" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Src/Application/Src/application" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Src/Application/Src/Misc" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Src/Application/Src/RGB565" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Src/Application/Src/RTE" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Src/Application/Src/TargetSpecific" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Src/Application/Src/vnc_server" -I"C:/Users/cpastro/eclipse-workspace/PMU_STM32F746/Utilities/CPU" -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


