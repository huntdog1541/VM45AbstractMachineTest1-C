//
// Created by david.hunt on 9/5/2019.
//

#include <stdint.h>
#include <stdbool.h>

#define REGISTER_SIZE 8;

#ifndef VM45ABSTRACTMACHINETEST1_C_REGISTER_H
#define VM45ABSTRACTMACHINETEST1_C_REGISTER_H

extern bool ax[8];
extern bool bx[8];
extern bool cx[8];
extern bool dx[8];

void clearRegister(bool reg[]);

void clearAllRegisters();

void printRegisters();

void printRegisterBinaryValue(bool reg[]);

void printRegisterIntegerValue(bool reg[]);

void printRegisterHexValue(bool reg[]);

int calculateValue(bool reg[]);

void setValue(bool reg[], int value);

#endif //VM45ABSTRACTMACHINETEST1_C_REGISTER_H
