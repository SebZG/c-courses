#include <stdio.h>

int main()
{
    short int X1 = 1;
    unsigned short int X2 = 2;
    int X3 = 3;
    unsigned int X4 = 4;
    long int X5 = 5;
    unsigned long int X6 = 6;
    long long int  X7 = 7;
    unsigned long long int X8 = 8;

    printf("Value of X1 = %hd and Size of X1 = %d Bytes\n", X1, sizeof(X1));
    printf("Value of X2 = %hu and Size of X2 = %d Bytes\n", X2, sizeof(X2));
    printf("Value of X3 = %d and Size of X3 = %d Bytes\n", X3, sizeof(X3));
    printf("Value of X4 = %u and Size of X4 = %d Bytes\n", X4, sizeof(X4));
    printf("Value of X5 = %ld and Size of X5 = %d Bytes\n", X5, sizeof(X5));
    printf("Value of X6 = %lu and Size of X6 = %d Bytes\n", X6, sizeof(X6));
    printf("Value of X7 = %lld and Size of X7 = %d Bytes\n", X7, sizeof(X7));
    printf("Value of X8 = %llu and Size of X8 = %d Bytes\n", X8, sizeof(X8));

    return 0;
}