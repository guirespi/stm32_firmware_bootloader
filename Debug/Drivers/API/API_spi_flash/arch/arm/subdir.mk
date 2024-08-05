################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/API/API_spi_flash/arch/arm/arch_stm32f4xx.c 

OBJS += \
./Drivers/API/API_spi_flash/arch/arm/arch_stm32f4xx.o 

C_DEPS += \
./Drivers/API/API_spi_flash/arch/arm/arch_stm32f4xx.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/API/API_spi_flash/arch/arm/%.o Drivers/API/API_spi_flash/arch/arm/%.su Drivers/API/API_spi_flash/arch/arm/%.cyclo: ../Drivers/API/API_spi_flash/arch/arm/%.c Drivers/API/API_spi_flash/arch/arm/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/Drivers/API/API_spi_flash/arch/common" -I"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/Drivers/API/API_spi_flash/inc" -I"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/Drivers/API/API_console/inc" -I"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/Drivers/API/API_console/arch/common" -I"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/Drivers/API/api_uart/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-API-2f-API_spi_flash-2f-arch-2f-arm

clean-Drivers-2f-API-2f-API_spi_flash-2f-arch-2f-arm:
	-$(RM) ./Drivers/API/API_spi_flash/arch/arm/arch_stm32f4xx.cyclo ./Drivers/API/API_spi_flash/arch/arm/arch_stm32f4xx.d ./Drivers/API/API_spi_flash/arch/arm/arch_stm32f4xx.o ./Drivers/API/API_spi_flash/arch/arm/arch_stm32f4xx.su

.PHONY: clean-Drivers-2f-API-2f-API_spi_flash-2f-arch-2f-arm

