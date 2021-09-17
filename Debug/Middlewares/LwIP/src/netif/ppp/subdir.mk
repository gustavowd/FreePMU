################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Middlewares/LwIP/src/netif/ppp/auth.c \
../Middlewares/LwIP/src/netif/ppp/ccp.c \
../Middlewares/LwIP/src/netif/ppp/chap-md5.c \
../Middlewares/LwIP/src/netif/ppp/chap-new.c \
../Middlewares/LwIP/src/netif/ppp/chap_ms.c \
../Middlewares/LwIP/src/netif/ppp/demand.c \
../Middlewares/LwIP/src/netif/ppp/eap.c \
../Middlewares/LwIP/src/netif/ppp/ecp.c \
../Middlewares/LwIP/src/netif/ppp/eui64.c \
../Middlewares/LwIP/src/netif/ppp/fsm.c \
../Middlewares/LwIP/src/netif/ppp/ipcp.c \
../Middlewares/LwIP/src/netif/ppp/ipv6cp.c \
../Middlewares/LwIP/src/netif/ppp/lcp.c \
../Middlewares/LwIP/src/netif/ppp/magic.c \
../Middlewares/LwIP/src/netif/ppp/mppe.c \
../Middlewares/LwIP/src/netif/ppp/multilink.c \
../Middlewares/LwIP/src/netif/ppp/ppp.c \
../Middlewares/LwIP/src/netif/ppp/pppapi.c \
../Middlewares/LwIP/src/netif/ppp/pppcrypt.c \
../Middlewares/LwIP/src/netif/ppp/pppoe.c \
../Middlewares/LwIP/src/netif/ppp/pppol2tp.c \
../Middlewares/LwIP/src/netif/ppp/pppos.c \
../Middlewares/LwIP/src/netif/ppp/upap.c \
../Middlewares/LwIP/src/netif/ppp/utils.c \
../Middlewares/LwIP/src/netif/ppp/vj.c 

OBJS += \
./Middlewares/LwIP/src/netif/ppp/auth.o \
./Middlewares/LwIP/src/netif/ppp/ccp.o \
./Middlewares/LwIP/src/netif/ppp/chap-md5.o \
./Middlewares/LwIP/src/netif/ppp/chap-new.o \
./Middlewares/LwIP/src/netif/ppp/chap_ms.o \
./Middlewares/LwIP/src/netif/ppp/demand.o \
./Middlewares/LwIP/src/netif/ppp/eap.o \
./Middlewares/LwIP/src/netif/ppp/ecp.o \
./Middlewares/LwIP/src/netif/ppp/eui64.o \
./Middlewares/LwIP/src/netif/ppp/fsm.o \
./Middlewares/LwIP/src/netif/ppp/ipcp.o \
./Middlewares/LwIP/src/netif/ppp/ipv6cp.o \
./Middlewares/LwIP/src/netif/ppp/lcp.o \
./Middlewares/LwIP/src/netif/ppp/magic.o \
./Middlewares/LwIP/src/netif/ppp/mppe.o \
./Middlewares/LwIP/src/netif/ppp/multilink.o \
./Middlewares/LwIP/src/netif/ppp/ppp.o \
./Middlewares/LwIP/src/netif/ppp/pppapi.o \
./Middlewares/LwIP/src/netif/ppp/pppcrypt.o \
./Middlewares/LwIP/src/netif/ppp/pppoe.o \
./Middlewares/LwIP/src/netif/ppp/pppol2tp.o \
./Middlewares/LwIP/src/netif/ppp/pppos.o \
./Middlewares/LwIP/src/netif/ppp/upap.o \
./Middlewares/LwIP/src/netif/ppp/utils.o \
./Middlewares/LwIP/src/netif/ppp/vj.o 

C_DEPS += \
./Middlewares/LwIP/src/netif/ppp/auth.d \
./Middlewares/LwIP/src/netif/ppp/ccp.d \
./Middlewares/LwIP/src/netif/ppp/chap-md5.d \
./Middlewares/LwIP/src/netif/ppp/chap-new.d \
./Middlewares/LwIP/src/netif/ppp/chap_ms.d \
./Middlewares/LwIP/src/netif/ppp/demand.d \
./Middlewares/LwIP/src/netif/ppp/eap.d \
./Middlewares/LwIP/src/netif/ppp/ecp.d \
./Middlewares/LwIP/src/netif/ppp/eui64.d \
./Middlewares/LwIP/src/netif/ppp/fsm.d \
./Middlewares/LwIP/src/netif/ppp/ipcp.d \
./Middlewares/LwIP/src/netif/ppp/ipv6cp.d \
./Middlewares/LwIP/src/netif/ppp/lcp.d \
./Middlewares/LwIP/src/netif/ppp/magic.d \
./Middlewares/LwIP/src/netif/ppp/mppe.d \
./Middlewares/LwIP/src/netif/ppp/multilink.d \
./Middlewares/LwIP/src/netif/ppp/ppp.d \
./Middlewares/LwIP/src/netif/ppp/pppapi.d \
./Middlewares/LwIP/src/netif/ppp/pppcrypt.d \
./Middlewares/LwIP/src/netif/ppp/pppoe.d \
./Middlewares/LwIP/src/netif/ppp/pppol2tp.d \
./Middlewares/LwIP/src/netif/ppp/pppos.d \
./Middlewares/LwIP/src/netif/ppp/upap.d \
./Middlewares/LwIP/src/netif/ppp/utils.d \
./Middlewares/LwIP/src/netif/ppp/vj.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/LwIP/src/netif/ppp/%.o: ../Middlewares/LwIP/src/netif/ppp/%.c Middlewares/LwIP/src/netif/ppp/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F769xx -DSTM32 -DSTM32F7 -DLV_LVGL_H_INCLUDE_SIMPLE -DSTM32F769I_DISCO -DSTM32F769NIHx '-DMBEDTLS_CONFIG_FILE=<mbedtls_config.h>' -D_SYS_TIME_H -D_TIMEVAL_DEFINED -DMBEDTLS_PLATFORM_TIME_MACRO=time_c_library -DARM_MATH_CM7 '-D__packed=__attribute__((__packed__))' '-D__weak=__attribute__((weak))' -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/lvgl" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Utilities/STM32F769I-Discovery" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/mbedTLS/include" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/src" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/src/include" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/system" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Middlewares/LwIP/system/OS" -I"/home/gustavo/STM32CubeIDE/workspace_1.7.0/FreePMU_LVGL_STM32F769/Core/Modules/DHCPClient" -O3 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

