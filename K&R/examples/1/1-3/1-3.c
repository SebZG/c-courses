/* Fahrenheit to Celsius using for...loop */

#include <stdio.h>

/* Print Fahrenheit-Celsius table */
int main()
{
    int fahr;

    printf("Fahrenheit\tCelsius\n");
    printf("----------------------\n");

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
        printf("%10d %13.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}