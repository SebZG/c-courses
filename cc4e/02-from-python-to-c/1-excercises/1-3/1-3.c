/*
Exercise 1-3.

Modify the temperature conversion program
to print a heading above the table.
 */

#include <stdio.h>

int main()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr += 20)
    {
        printf("%4d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}