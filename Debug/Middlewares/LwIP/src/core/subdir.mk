################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/LwIP/src/core/altcp.c \
../Middlewares/LwIP/src/core/altcp_alloc.c \
../Middlewares/LwIP/src/core/altcp_tcp.c \
../Middlewares/LwIP/src/core/def.c \
../Middlewares/LwIP/src/core/dns.c \
../Middlewares/LwIP/src/core/inet_chksum.c \
../Middlewares/LwIP/src/core/init.c \
../Middlewares/LwIP/src/core/ip.c \
../Middlewares/LwIP/src/core/mem.c \
../Middlewares/LwIP/src/core/memp.c \
../Middlewares/LwIP/src/core/netif.c \
../Middlewares/LwIP/src/core/pbuf.c \
../Middlewares/LwIP/src/core/raw.c \
../Middlewares/LwIP/src/core/stats.c \
../Middlewares/LwIP/src/core/sys.c \
../Middlewares/LwIP/src/core/tcp.c \
../Middlewares/LwIP/src/core/tcp_in.c \
../Middlewares/LwIP/src/core/tcp_out.c \
../Middlewares/LwIP/src/core/timeouts.c \
../Middlewares/LwIP/src/core/udp.c 

OBJS += \
./Middlewares/LwIP/src/core/altcp.o \
./Middlewares/LwIP/src/core/altcp_alloc.o \
./Middlewares/LwIP/src/core/altcp_tcp.o \
./Middlewares/LwIP/src/core/def.o \
./Middlewares/LwIP/src/core/dns.o \
./Middlewares/LwIP/src/core/inet_chksum.o \
./Middlewares/LwIP/src/core/init.o \
./Middlewares/LwIP/src/core/ip.o \
./Middlewares/LwIP/src/core/mem.o \
./Middlewares/LwIP/src/core/memp.o \
./Middlewares/LwIP/src/core/netif.o \
./Middlewares/LwIP/src/core/pbuf.o \
./Middlewares/LwIP/src/core/raw.o \
./Middlewares/LwIP/src/core/stats.o \
./Middlewares/LwIP/src/core/sys.o \
./Middlewares/LwIP/src/core/tcp.o \
./Middlewares/LwIP/src/core/tcp_in.o \
./Middlewares/LwIP/src/core/tcp_out.o \
./Middlewares/LwIP/src/core/timeouts.o \
./Middlewares/LwIP/src/core/udp.o 

C_DEPS += \
./Middlewares/LwIP/src/core/altcp.d \
./Middlewares/LwIP/src/core/altcp_alloc.d \
./Middlewares/LwIP/src/core/altcp_tcp.d \
./Middlewares/LwIP/src/core/def.d \
./Middlewares/LwIP/src/core/dns.d \
./Middlewares/LwIP/src/core/inet_chksum.d \
./Middlewares/LwIP/src/core/init.d \
./Middlewares/LwIP/src/core/ip.d \
./Middlewares/LwIP/src/core/mem.d \
./Middlewares/LwIP/src/core/memp.d \
./Middlewares/LwIP/src/core/netif.d \
./Middlewares/LwIP/src/core/pbuf.d \
./Middlewares/LwIP/src/core/raw.d \
./Middlewares/LwIP/src/core/stats.d \
./Middlewares/LwIP/src/core/sys.d \
./Middlewares/LwIP/src/core/tcp.d \
./Middlewares/LwIP/src/core/tcp_in.d \
./Middlewares/LwIP/src/core/tcp_out.d \
./Middlewares/LwIP/src/core/timeouts.d \
./Middlewares/LwIP/src/core/udp.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/LwIP/src/core/%.o: ../Middlewares/LwIP/src/core/%.c Middlewares/LwIP/src/core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F769xx -DSTM32 -DSTM32F7 -DLV_LVGL_H_INCLUDE_SIMPLE -DSTM32F769I_DISCO -DSTM32F769NIHx '-DMBEDTLS_CONFIG_FILE=<mbedtls_config.h>' -D_SYS_TIME_H -D_TIMEVAL_DEFINED -DMBEDTLS_PLATFORM_TIME_MACRO=time_c_library -DARM_MATH_CM7 '-D__packed=__attribute__((__packed__))' '-D__weak=__attribute__((weak))' -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/lvgl" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Utilities/STM32F769I-Discovery" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/mbedTLS/include" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/src" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/src/include" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/system" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/system/OS" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Core/Modules/DHCPClient" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

