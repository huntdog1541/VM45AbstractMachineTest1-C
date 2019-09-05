cmake_minimum_required(VERSION 3.14)
project(VM45AbstractMachineTest1_C C)

set(CMAKE_C_STANDARD 11)

add_executable(VM45AbstractMachineTest1_C main.c VM/VM.c VM/VM.h VM/Register.c VM/Register.h)