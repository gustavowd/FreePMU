################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/EmbeddedWizardApp/Application.c \
../Src/EmbeddedWizardApp/Charts.c \
../Src/EmbeddedWizardApp/Core.c \
../Src/EmbeddedWizardApp/Effects.c \
../Src/EmbeddedWizardApp/Flat.c \
../Src/EmbeddedWizardApp/Graphics.c \
../Src/EmbeddedWizardApp/OldResources.c \
../Src/EmbeddedWizardApp/Resources.c \
../Src/EmbeddedWizardApp/Templates.c \
../Src/EmbeddedWizardApp/Views.c 

OBJS += \
./Src/EmbeddedWizardApp/Application.o \
./Src/EmbeddedWizardApp/Charts.o \
./Src/EmbeddedWizardApp/Core.o \
./Src/EmbeddedWizardApp/Effects.o \
./Src/EmbeddedWizardApp/Flat.o \
./Src/EmbeddedWizardApp/Graphics.o \
./Src/EmbeddedWizardApp/OldResources.o \
./Src/EmbeddedWizardApp/Resources.o \
./Src/EmbeddedWizardApp/Templates.o \
./Src/EmbeddedWizardApp/Views.o 

C_DEPS += \
./Src/EmbeddedWizardApp/Application.d \
./Src/EmbeddedWizardApp/Charts.d \
./Src/EmbeddedWizardApp/Core.d \
./Src/EmbeddedWizardApp/Effects.d \
./Src/EmbeddedWizardApp/Flat.d \
./Src/EmbeddedWizardApp/Graphics.d \
./Src/EmbeddedWizardApp/OldResources.d \
./Src/EmbeddedWizardApp/Resources.d \
./Src/EmbeddedWizardApp/Templates.d \
./Src/EmbeddedWizardApp/Views.d 


# Each subdirectory must supply rules for building sources it contributes
Src/EmbeddedWizardApp/%.o: ../Src/EmbeddedWizardApp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16 '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DUSE_HAL_DRIVER -DSTM32F769xx '-DEW_USE_FREE_RTOS=1' -DUSE_STM32F769I_DISCO '-DEW_FRAME_BUFFER_COLOR_FORMAT=3' '-DEW_USE_DOUBLE_BUFFER=1' -DARM_MATH_CM7 -D__FPU_PRESENT -DUSE_USB_HS '-DEW_USE_QSPI_FLASH=1' '-DEW_SURFACE_ROTATION=0' '-DEW_MAX_SURFACE_CACHE_SIZE=0x400000' '-DEW_MAX_GLYPH_SURFACE_WIDTH=256' '-DEW_MAX_GLYPH_SURFACE_HEIGHT=256' -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Inc" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Drivers/STM32F7xx_HAL_Driver/Inc" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Middlewares/Third_Party/FreeRTOS/Source/include" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Drivers/CMSIS/Include" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Drivers/BSP" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Drivers/BSP/Components/exc7200" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Drivers/BSP/Components/mfxstm32l152" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Drivers/BSP/Components/otm8009a" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Drivers/BSP/Components/stmpe811" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Drivers/BSP/STM32F769I-Discovery" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Src/BoardConfig" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Src/RGB565" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Src/RTE" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Src/Misc" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Drivers/BSP/Components/adv7533" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Drivers/BSP/Components/mx25l512" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Src/EmbeddedWizardApp" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Middlewares/ST/USBH_Library/STM32_USB_Host_Library/Core/Inc" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Middlewares/ST/USBH_Library/STM32_USB_Host_Library/Class/MSC/Inc" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Middlewares/Third_Party/FatFs/src" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Middlewares/Third_Party/FatFs/src/drivers" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Middlewares/Third_Party/LwIP/src/include" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Middlewares/Third_Party/LwIP/system" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Middlewares/Third_Party/LwIP/system/OS" -I"C:/Users/cpastro/eclipse-workspace/STM32F769_EWizard/Src/DHCPClient" -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


