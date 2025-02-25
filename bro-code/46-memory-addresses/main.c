#include <stdio.h>

int main()
{
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) of memory, used to hold some value (person)
    // memory address = a number that points to a memory block (home address)

    // char a = 'X';
    // char b = 'Y';
    // char c = 'Z';

    char a;
    double b[3];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    // printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    // printf("%p\n", &c);

    return 0;
}