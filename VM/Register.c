//
// Created by david.hunt on 9/5/2019.
//

#include "Register.h"
#include <stdio.h>
#include <math.h>

bool ax[8];
bool bx[8];
bool cx[8];
bool dx[8];

void clearRegister(bool reg[])
{
    int i = 0;
    for(i = 0; i < 8; i++)
    {
        reg[i] = 0;
    }
}

void clearAllRegisters()
{
    clearRegister(ax);
    clearRegister(bx);
    clearRegister(cx);
    clearRegister(dx);
}

void printRegisters()
{
    printf("Printing Register 'AX': ");
    printRegisterBinaryValue(ax);
    printRegisterIntegerValue(ax);
    printf("\nPrinting Register 'BX': ");
    printRegisterBinaryValue(bx);
    printRegisterIntegerValue(bx);
    printf("\nPrinting Register 'CX': ");
    printRegisterBinaryValue(cx);
    printRegisterIntegerValue(cx);
    printf("\nPrinting Register 'DX': ");
    printRegisterBinaryValue(dx);
    printRegisterIntegerValue(dx);
}

void printRegisterBinaryValue(bool reg[])
{
    int i;
    for(i = 7; i >= 0; i--)
    {
        printf(reg[i]? "1" : "0");
        if((i % 4 == 0))
            printf(" ");
    }
}

void printRegisterHexValue(bool reg[])
{
    int i = 7, j = 0, k = 0;
    int temp = 0;
    for(i = 7; i >= 0; i--)
    {
        if(reg[i])
        {
            temp += (int) pow(2, i);
        }
    }
    printf("%02x", temp);
    /*while(i >= 0)
    {
        for(j = 8; j > 0; j--)
        {
            if(reg[i--])
                temp += (int) pow(2, j);
        }
        printf("%02x ", temp);
        temp = 0;
    }*/
}

void printRegisterIntegerValue(bool reg[])
{
    int value = calculateValue(reg);
    printf(" Value: %d", value);
}

int calculateValue(bool reg[])
{
    int answer = 0;
    int i = 0;
    for(i = 0; i < 8; i++)
    {
        if(reg[i])
            answer += (int) pow(2, i);
    }
    return answer;
}

void setValue(bool reg[], int value)
{
    int temp = value, i;
    int powValue = 0;
    for(i = 7; i >= 0; i--)
    {
        powValue = (int)pow(2, i);
        if((temp/powValue) == 1)
        {
            reg[i] = true;
            temp = temp % powValue;
        }
        else
            reg[i] = false;
    }
}