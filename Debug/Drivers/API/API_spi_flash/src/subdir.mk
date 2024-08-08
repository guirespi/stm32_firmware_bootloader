################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/API/API_spi_flash/src/API_spi_flash.c 

OBJS += \
./Drivers/API/API_spi_flash/src/API_spi_flash.o 

C_DEPS += \
./Drivers/API/API_spi_flash/src/API_spi_flash.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/API/API_spi_flash/src/%.o Drivers/API/API_spi_flash/src/%.su Drivers/API/API_spi_flash/src/%.cyclo: ../Drivers/API/API_spi_flash/src/%.c Drivers/API/API_spi_flash/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F429xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/Drivers/API/API_spi_flash/arch/common" -I"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/Drivers/API/API_spi_flash/inc" -I"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/Drivers/API/API_console/inc" -I"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/Drivers/API/API_console/arch/common" -I"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/Drivers/API/API_log/arch/common" -I"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/Drivers/API/API_log/inc" -I"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/Drivers/API/api_debounce/Inc" -I"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/Drivers/BSP/STM32F4xx_Nucleo_144" -I"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/Drivers/API/api_delay/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-API-2f-API_spi_flash-2f-src

clean-Drivers-2f-API-2f-API_spi_flash-2f-src:
	-$(RM) ./Drivers/API/API_spi_flash/src/API_spi_flash.cyclo ./Drivers/API/API_spi_flash/src/API_spi_flash.d ./Drivers/API/API_spi_flash/src/API_spi_flash.o ./Drivers/API/API_spi_flash/src/API_spi_flash.su

.PHONY: clean-Drivers-2f-API-2f-API_spi_flash-2f-src

