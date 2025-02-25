#include <stdio.h>

int main()
{
    double prices[] = { 5.0, 10.0, 15.0, 25.0, 20.0, 30.0 };

    printf("%d bytes\n", sizeof(prices));

    // printf("%.2lf", prices[0]);
    // printf("%.2lf", prices[1]);
    // printf("%.2lf", prices[2]);
    // printf("%.2lf", prices[3]);
    // printf("%.2lf", prices[4]);

    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("%.2lf\n", prices[i]);
    }
    return 0;
}