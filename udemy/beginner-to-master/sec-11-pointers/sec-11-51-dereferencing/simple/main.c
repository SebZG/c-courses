#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var0 = 11;
    int *myPtr;

    myPtr = &var0;

    printf("var0 contains %d and lives in location %x\n", var0, &var0);
    printf("myPtr contains %x and lives in location %x\n", myPtr, &myPtr);

    printf("*myPtr = %d\n", *myPtr); // read this memory location using the pointer

    *myPtr = 15;

    printf("*myPtr = %d\n", *myPtr);

    printf("var0 contains %d and lives in location %x\n", var0, &var0);

    return 0;
}
