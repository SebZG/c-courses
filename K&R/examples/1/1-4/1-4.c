/* 
   Using Symbolic Constants (Magic Numbers) 
*/

#include <stdio.h>

#define LOWER 0   /* lower limit of temperature table */
#define UPPER 300 /* upper limit */
#define STEP 20   /* step size */

/* Print Fahrenheit-Celsius table */

int main()
{
    int fahr;

    printf("Fahrenheit\tCelsius\n");
    printf("----------------------\n");

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%10d %13.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}