#include <stdio.h>
#include "VM/Register.h"

int main() {
    printf("Hello, World!\n");
    clearAllRegisters();
    printRegisters();
    printf("\n\n");
    setValue(ax, 8);
    printRegisters();
    printf("\n\nHex 'AX' value: ");
    printRegisterHexValue(ax);
    printf("\n\nSetting 'AX' to 255\n");
    setValue(ax, 255);
    printRegisters();
    printf("\n\nHex 'AX' value: ");
    printRegisterHexValue(ax);
    return 0;
}