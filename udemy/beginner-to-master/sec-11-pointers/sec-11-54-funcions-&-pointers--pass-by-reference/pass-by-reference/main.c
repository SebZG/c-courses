#include <stdio.h>
#include <stdlib.h>

void printFunc(int* a);

int main()
{
    int toPrintInt = 9000;
    int* ptr_toPrintInt;

    ptr_toPrintInt = &toPrintInt;

    printf("\nFrom main BEFORE function: %d\n", toPrintInt);

    printFunc(ptr_toPrintInt);

    printf("\nFrom main AFTER function: %d\n", toPrintInt);

    return 0;
}

void printFunc(int* a)
{
    printf("\nFrom Function (no mod): %d\n", *a);

    *a = 4000;
    
    printf("\nFrom Function (with mod): %d\n", *a);
}
