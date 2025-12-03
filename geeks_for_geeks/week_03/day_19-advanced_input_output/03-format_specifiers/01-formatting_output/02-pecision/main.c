#include <stdio.h>

// %[flags][width][.precision][length]specifier

int main()
{
    int num = 42;
    float pi = 3.141592;
    char str[] = "Hello, World!";

    // Integer with precision: adds leading
    // zeros
    printf("Integer with .5 precision: '%.5d'\n", num); // "00042"

    // Integer with more digits than precision:
    // unchanged
    printf("Large integer with .3 precision: '%.3d'\n", 12345); // "12345"

    // Float with .2 precision: 2 digits after
    // decimal
    printf("Float with .2 precision: '%.2f'\n", pi); // "3.14"

    // Float with .6 precision: 6 digits after
    // decimal (default)
    printf("Float with .6 precision: '%.6f'\n", pi); // "3.141592"

    // String with .5 precision: print only 5
    // characters
    printf("String with .5 precision: '%.5s'", str); // "Hello"

    return 0;
}
