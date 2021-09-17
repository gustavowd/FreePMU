################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Utilities/STM32F769I-Discovery/stm32f769i_discovery.c \
../Utilities/STM32F769I-Discovery/stm32f769i_discovery_audio.c \
../Utilities/STM32F769I-Discovery/stm32f769i_discovery_eeprom.c \
../Utilities/STM32F769I-Discovery/stm32f769i_discovery_lcd.c \
../Utilities/STM32F769I-Discovery/stm32f769i_discovery_qspi.c \
../Utilities/STM32F769I-Discovery/stm32f769i_discovery_sd.c \
../Utilities/STM32F769I-Discovery/stm32f769i_discovery_sdram.c \
../Utilities/STM32F769I-Discovery/stm32f769i_discovery_ts.c 

OBJS += \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery.o \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery_audio.o \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery_eeprom.o \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery_lcd.o \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery_qspi.o \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery_sd.o \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery_sdram.o \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery_ts.o 

C_DEPS += \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery.d \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery_audio.d \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery_eeprom.d \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery_lcd.d \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery_qspi.d \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery_sd.d \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery_sdram.d \
./Utilities/STM32F769I-Discovery/stm32f769i_discovery_ts.d 


# Each subdirectory must supply rules for building sources it contributes
Utilities/STM32F769I-Discovery/%.o: ../Utilities/STM32F769I-Discovery/%.c Utilities/STM32F769I-Discovery/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F769xx -DSTM32 -DSTM32F7 -DLV_LVGL_H_INCLUDE_SIMPLE -DSTM32F769I_DISCO -DSTM32F769NIHx '-DMBEDTLS_CONFIG_FILE=<mbedtls_config.h>' -D_SYS_TIME_H -D_TIMEVAL_DEFINED -DMBEDTLS_PLATFORM_TIME_MACRO=time_c_library -DARM_MATH_CM7 '-D__packed=__attribute__((__packed__))' '-D__weak=__attribute__((weak))' -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/lvgl" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Utilities/STM32F769I-Discovery" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/mbedTLS/include" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/src" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/src/include" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/system" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/system/OS" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Core/Modules/DHCPClient" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

