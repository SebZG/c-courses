#include <stdio.h>
#include <string.h>

void printHi(int val); // declaration

int main()
{
    float a = 15;

    printf("Hi from the main program\n");

    printHi(a); // call

    return 0;
}

void printHi(int val) // definition
{
    printf("\nThe value sent from the function call is: %d\n", val);
    printf("Hi from the printHi function\n");
}
