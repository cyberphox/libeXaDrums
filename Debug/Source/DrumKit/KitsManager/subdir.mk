################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Source/DrumKit/KitsManager/KitsManager.cpp 

OBJS += \
./Source/DrumKit/KitsManager/KitsManager.o 

CPP_DEPS += \
./Source/DrumKit/KitsManager/KitsManager.d 


# Each subdirectory must supply rules for building sources it contributes
Source/DrumKit/KitsManager/%.o: ../Source/DrumKit/KitsManager/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -I/usr/include/libxml2 -O0 -g3 -Wall -c -fmessage-length=0 -fPIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


