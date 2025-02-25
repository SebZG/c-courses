/* Exercise 1-4.

   Write a program to print the corresponding Celsius to Fahrenheit table.
*/

#include <stdio.h>

int main()
{
    float celsius, fahr;
    float lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 100; /* upper limit */
    step = 10;   /* step size */

    printf("Celsius\t\tFahrenheit\n");
    printf("-------------------------\n");

    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%10.1f %13.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}