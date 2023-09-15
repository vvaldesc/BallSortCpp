################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BallSort.cpp \
../src/TADjuego.cpp \
../src/TADpila.cpp \
../src/TADtablero.cpp \
../src/entorno.cpp \
../src/pruebas_TADpila.cpp \
../src/pruebas_TADtablero.cpp 

OBJS += \
./src/BallSort.o \
./src/TADjuego.o \
./src/TADpila.o \
./src/TADtablero.o \
./src/entorno.o \
./src/pruebas_TADpila.o \
./src/pruebas_TADtablero.o 

CPP_DEPS += \
./src/BallSort.d \
./src/TADjuego.d \
./src/TADpila.d \
./src/TADtablero.d \
./src/entorno.d \
./src/pruebas_TADpila.d \
./src/pruebas_TADtablero.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


