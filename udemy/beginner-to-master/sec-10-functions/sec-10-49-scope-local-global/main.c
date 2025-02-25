#include <stdio.h>
#include <string.h>

void printHi(void);



int main()
{
    int a;

    a = 50;

    printf("Hi from the main program\n");
    printf("a = %d\n", a);
    printf("a lives in %x\n", &a);

    printHi();
    printf("Hi from the main program\n");
    printf("a = %d\n", a);
    printf("a lives in %x\n", &a);

    return 0;
}

void printHi(void)
{
    int a;

    a = 30;

    printf("Hi from printHi function\n");
    printf("a = %d\n", a);
    printf("a lives in %x\n", &a);
}




