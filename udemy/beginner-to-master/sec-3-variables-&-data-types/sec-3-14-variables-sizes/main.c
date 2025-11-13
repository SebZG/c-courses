#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* char */
    printf("char takes %d byte(s) \n", sizeof(char)); // 1 byte / 8 bits / -128 ... 127
    printf("signed char takes %d byte(s) \n", sizeof(signed char)); // 1 byte / 8 bits / -128 ... 127
    printf("unsigned char takes %d byte(s) \n\n", sizeof(unsigned char)); // 1 byte / 8 bits / 0 ... 255

    /* int */
    printf("int takes %d byte(s)\n", sizeof(int)); // 4 bytes / 32 bits / -2,147,483,648 ... 2,147,483,647
    printf("unsigned int takes %d byte(s) \n\n", sizeof(unsigned int)); // 4 bytes / 32 bits / 0 ... 4,294,967,295

    /* short */
    printf("short takes %d byte(s) \n", sizeof(short)); // 2 bytes / 16 bits / -32,768 ... 32,767
    printf("unsigned short takes %d byte(s) \n\n", sizeof(unsigned short)); // 2 bytes / 16 bits / 0 ... 65,535

    /* long */
    printf("long takes %d byte(s) \n", sizeof(long)); // 4 bytes / 32 bits / -2,147,483,648 ... 2,147,483,647
    printf("unsigned long takes %d byte(s) \n\n", sizeof(unsigned long)); // 4 bytes / 32 bits / 0 ... 4,294,967,295

    /* float */
    printf("float takes %d byte(s) \n\n", sizeof(float)); // 4 bytes / 32 bits / 1.17549e-38 ... 3.40282e+38

    /* double */
    printf("double takes %d byte(s) \n\n", sizeof(double)); // 8 bytes / 64 bits / 2.22507e-308 ... 1.79769e+308

    return 0;
}
