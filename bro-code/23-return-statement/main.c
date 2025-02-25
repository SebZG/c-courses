#include <stdio.h>

double square(double x);

int main()
{
    // return = returns a value back top a calling function

    double x = square(3.14);

    printf("%lf", x);

    return 0;
}

double square(double x)
{
    // double results = x * x;

    // return results;

    return x * x;
}