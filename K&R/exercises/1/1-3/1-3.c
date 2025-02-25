/* Exercise 1-3.

   Modify the temperature conversion program to print a heading above the table.
*/

#include <stdio.h>
int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;   /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20;   /* step size */

    printf("Fahrenheit\t\tCelsius\n");
    printf("--------------------\n");

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%10.0f %13.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}