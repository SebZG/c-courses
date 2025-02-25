#include <stdio.h>

int main()
{
    // BITWISE OPERATORS = special operators used in bit level programming
    //                     (knowing binary is important for this topic)

    // & = AND
    // | = OR
    // ^ = XOR
    // ~ = NOT
    // << = LEFT SHIFT
    // >> = RIGHT SHIFT

    int x = 6;   //  6 = 00000110
    int y = 12;  // 12 = 00001100
    int z = 0;   //  0 = 00000000

    z = x & y;
    printf("AND = %d\n", z);  // 4 = 00000100

    z = x | y;
    printf("OR = %d\n", z);  // 12 = 00001100

    z = x ^ y;
    printf("XOR = %d\n", z);  // 10 = 00001010

    z = x << 2;
    printf("LEFT SHIFT = %d\n", z);  // 24 = 00011000

    z = x >> 1;
    printf("RIGHT SHIFT = %d\n", z);  // 3 = 00000011

    return 0;
}