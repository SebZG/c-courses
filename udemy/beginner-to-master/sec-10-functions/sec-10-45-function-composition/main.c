#include <stdio.h>
#include <string.h>

void printHi(void); // declaration

int main()
{
    printf("Hi from the main program\n");
    printHi(); // call

    return 0;
}

void printHi(void) // definition
{
    printf("Hi from the printHi function\n");
}

