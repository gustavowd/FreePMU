################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/LwIP/src/api/api_lib.c \
../Middlewares/LwIP/src/api/api_msg.c \
../Middlewares/LwIP/src/api/err.c \
../Middlewares/LwIP/src/api/if_api.c \
../Middlewares/LwIP/src/api/netbuf.c \
../Middlewares/LwIP/src/api/netdb.c \
../Middlewares/LwIP/src/api/netifapi.c \
../Middlewares/LwIP/src/api/sockets.c \
../Middlewares/LwIP/src/api/tcpip.c 

OBJS += \
./Middlewares/LwIP/src/api/api_lib.o \
./Middlewares/LwIP/src/api/api_msg.o \
./Middlewares/LwIP/src/api/err.o \
./Middlewares/LwIP/src/api/if_api.o \
./Middlewares/LwIP/src/api/netbuf.o \
./Middlewares/LwIP/src/api/netdb.o \
./Middlewares/LwIP/src/api/netifapi.o \
./Middlewares/LwIP/src/api/sockets.o \
./Middlewares/LwIP/src/api/tcpip.o 

C_DEPS += \
./Middlewares/LwIP/src/api/api_lib.d \
./Middlewares/LwIP/src/api/api_msg.d \
./Middlewares/LwIP/src/api/err.d \
./Middlewares/LwIP/src/api/if_api.d \
./Middlewares/LwIP/src/api/netbuf.d \
./Middlewares/LwIP/src/api/netdb.d \
./Middlewares/LwIP/src/api/netifapi.d \
./Middlewares/LwIP/src/api/sockets.d \
./Middlewares/LwIP/src/api/tcpip.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/LwIP/src/api/%.o: ../Middlewares/LwIP/src/api/%.c Middlewares/LwIP/src/api/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F769xx -DSTM32 -DSTM32F7 -DLV_LVGL_H_INCLUDE_SIMPLE -DSTM32F769I_DISCO -DSTM32F769NIHx '-DMBEDTLS_CONFIG_FILE=<mbedtls_config.h>' -D_SYS_TIME_H -D_TIMEVAL_DEFINED -DMBEDTLS_PLATFORM_TIME_MACRO=time_c_library -DARM_MATH_CM7 '-D__packed=__attribute__((__packed__))' '-D__weak=__attribute__((weak))' -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/lvgl" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Utilities/STM32F769I-Discovery" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/mbedTLS/include" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/src" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/src/include" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/system" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/system/OS" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Core/Modules/DHCPClient" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

