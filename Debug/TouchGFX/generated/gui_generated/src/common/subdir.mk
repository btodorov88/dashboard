################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../TouchGFX/generated/gui_generated/src/common/FrontendApplicationBase.cpp 

OBJS += \
./TouchGFX/generated/gui_generated/src/common/FrontendApplicationBase.o 

CPP_DEPS += \
./TouchGFX/generated/gui_generated/src/common/FrontendApplicationBase.d 


# Each subdirectory must supply rules for building sources it contributes
TouchGFX/generated/gui_generated/src/common/%.o TouchGFX/generated/gui_generated/src/common/%.su TouchGFX/generated/gui_generated/src/common/%.cyclo: ../TouchGFX/generated/gui_generated/src/common/%.cpp TouchGFX/generated/gui_generated/src/common/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m7 -std=gnu++14 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -I../TouchGFX/gui/include -I../FATFS/App -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../TouchGFX/generated/fonts/include -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../TouchGFX/generated/texts/include -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../TouchGFX/generated/images/include -I../Middlewares/ST/touchgfx/framework/include -I../TouchGFX/target/generated -I../Drivers/CMSIS/Include -I../Core/Inc -I../TouchGFX/generated/gui_generated/include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1 -I../FATFS/Target -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -I../TouchGFX/App -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Middlewares/Third_Party/FatFs/src -I../TouchGFX/target -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-TouchGFX-2f-generated-2f-gui_generated-2f-src-2f-common

clean-TouchGFX-2f-generated-2f-gui_generated-2f-src-2f-common:
	-$(RM) ./TouchGFX/generated/gui_generated/src/common/FrontendApplicationBase.cyclo ./TouchGFX/generated/gui_generated/src/common/FrontendApplicationBase.d ./TouchGFX/generated/gui_generated/src/common/FrontendApplicationBase.o ./TouchGFX/generated/gui_generated/src/common/FrontendApplicationBase.su

.PHONY: clean-TouchGFX-2f-generated-2f-gui_generated-2f-src-2f-common

