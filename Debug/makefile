################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Drivers/STM32F4xx_HAL_Driver/Src/subdir.mk
-include Drivers/API/API_spi_flash/src/subdir.mk
-include Drivers/API/API_spi_flash/arch/arm/subdir.mk
-include Drivers/API/API_log/src/subdir.mk
-include Drivers/API/API_log/arch/arm/subdir.mk
-include Drivers/API/API_console/src/subdir.mk
-include Drivers/API/API_console/arch/arm/subdir.mk
-include Core/Startup/subdir.mk
-include Core/Src/subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := 1B_PDM_PCDM_FINAL_JOB
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX :=
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME)$(if $(BUILD_ARTIFACT_EXTENSION),.$(BUILD_ARTIFACT_EXTENSION),)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
1B_PDM_PCDM_FINAL_JOB.elf \

MAP_FILES += \
1B_PDM_PCDM_FINAL_JOB.map \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
1B_PDM_PCDM_FINAL_JOB.list \


# All Target
all: main-build

# Main-build Target
main-build: 1B_PDM_PCDM_FINAL_JOB.elf secondary-outputs

# Tool invocations
1B_PDM_PCDM_FINAL_JOB.elf 1B_PDM_PCDM_FINAL_JOB.map: $(OBJS) $(USER_OBJS) /home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/STM32F429ZITX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "1B_PDM_PCDM_FINAL_JOB.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"/home/guirespi/STM32CubeIDE/GR_1B_FINAL_WORK/1B_PDM_PCDM_FINAL_JOB/STM32F429ZITX_FLASH.ld" --specs=nosys.specs -Wl,-Map="1B_PDM_PCDM_FINAL_JOB.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

1B_PDM_PCDM_FINAL_JOB.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "1B_PDM_PCDM_FINAL_JOB.list"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) 1B_PDM_PCDM_FINAL_JOB.elf 1B_PDM_PCDM_FINAL_JOB.list 1B_PDM_PCDM_FINAL_JOB.map default.size.stdout
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents main-build fail-specified-linker-script-missing warn-no-linker-script-specified

-include ../makefile.targets
