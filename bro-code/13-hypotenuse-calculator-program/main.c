#include <math.h>
#include <stdio.h>

int main()
{
    double A;
    double B;
    double C;

    printf("\nEnter the length of side A: ");
    scanf("%lf", &A);

    printf("Enter the length of side B: ");
    scanf("%lf", &B);

    C = sqrt(A * A + B * B);

    printf("\nHypotenuse = %lf\n ", C);

    return 0;
}