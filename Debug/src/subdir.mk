################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Battleship.cpp \
../src/Board.cpp \
../src/Carrier.cpp \
../src/Cruiser.cpp \
../src/Destroyer.cpp \
../src/HW6.cpp \
../src/Production.cpp \
../src/Submarine.cpp \
../src/Tests.cpp 

OBJS += \
./src/Battleship.o \
./src/Board.o \
./src/Carrier.o \
./src/Cruiser.o \
./src/Destroyer.o \
./src/HW6.o \
./src/Production.o \
./src/Submarine.o \
./src/Tests.o 

CPP_DEPS += \
./src/Battleship.d \
./src/Board.d \
./src/Carrier.d \
./src/Cruiser.d \
./src/Destroyer.d \
./src/HW6.d \
./src/Production.d \
./src/Submarine.d \
./src/Tests.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


