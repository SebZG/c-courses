/*
Exercise 1-4.

Write a program to print the corresponding Celsius to Fahrenheit table.
 */

#include <stdio.h>

/* #define construction */

#define LOWER 0   /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("%4d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}