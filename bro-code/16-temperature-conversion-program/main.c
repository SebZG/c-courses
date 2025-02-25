#include <ctype.h>
#include <stdio.h>

int main()
{
    char unit;
    float temp;

    printf("\nIs the temperature in F or C?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C')
    {
        printf("\nEnter the temperature in C: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nTemperature in F: %0.1f", temp);
    }
    else if (unit == 'F')
    {
        printf("\nEnter the temperature in F: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("\nTemperature in C: %0.1f", temp);
    }
    else
    {
        printf("\nInvalid input.");
    }

    return 0;
}