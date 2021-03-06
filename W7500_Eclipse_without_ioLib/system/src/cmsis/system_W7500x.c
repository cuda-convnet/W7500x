################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include system/src/newlib/subdir.mk
-include system/src/diag/subdir.mk
-include system/src/cortexm/subdir.mk
-include system/src/cmsis/subdir.mk
-include system/src/W7500x/subdir.mk
-include src/ioLibrary/MDIO/subdir.mk
-include src/ioLibrary/Internet/httpServer/subdir.mk
-include src/ioLibrary/Internet/DNS/subdir.mk
-include src/ioLibrary/Internet/DHCP/subdir.mk
-include src/ioLibrary/Ethernet/subdir.mk
-include src/ioLibrary/Application/loopback/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
W7500x_ExampleProj.bin \

SECONDARY_SIZE += \
W7500x_ExampleProj.siz \


# All Target
all: W7500x_ExampleProj.elf secondary-outputs

# Tool invocations
W7500x_ExampleProj.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross ARM GNU C++ Linker'
	arm-none-eabi-g++ -mcpu=cortex-m0 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -T mem.ld -T libs.ld -T sections.ld -nostartfiles -Xlinker --gc-sections -L"../ldscripts" -Wl,-Map,"W7500x_ExampleProj.map" --specs=nano.specs -o "W7500x_ExampleProj.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

W7500x_ExampleProj.bin: W7500x_ExampleProj.elf
	@echo 'Invoking: Cross ARM GNU Create Flash Image'
	arm-none-eabi-objcopy -O binary "W7500x_ExampleProj.elf"  "W7500x_ExampleProj.bin"
	@echo 'Finished building: $@'
	@echo ' '

W7500x_ExampleProj.siz: W7500x_ExampleProj.elf
	@echo 'Invoking: Cross ARM GNU Print Size'
	arm-none-eabi-size --format=berkeley "W7500x_ExampleProj.elf"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(C_UPPER_DEPS)$(SECONDARY_SIZE)$(PDE_DEPS)$(C_DEPS)$(CC_DEPS)$(C++_DEPS)$(OBJS)$(CXX_DEPS)$(SECONDARY_FLASH)$(ASM_DEPS)$(INO_DEPS)$(S_UPPER_DEPS)$(CPP_DEPS) W7500x_ExampleProj.elf
	-@echo ' '

post-build:
	-arm-none-eabi-objcopy -O ihex "W7500x_ExampleProj.elf" "W7500x_ExampleProj.hex";arm-none-eabi-objcopy -O srec "W7500x_ExampleProj.elf" "W7500x_ExampleProj.srec"
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              �0��&,���z
���y�j�|�0����WsQ�/����=+Rat>�<���/Fj�e)�4�m��