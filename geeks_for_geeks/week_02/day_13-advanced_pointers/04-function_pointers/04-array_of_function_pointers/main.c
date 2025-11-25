#include <stdio.h>

// Function declarations
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divd(int a, int b)
{
    if (b != 0)
        return a / b;
    else
        return -1;
}

int main()
{

    // Declare an array of function pointers
    int (*farr[])(int, int) = {add, sub, mul, divd};
    int x = 10, y = 5;

    // Dynamically call functions using the array
    printf("Sum: %d\n", farr[0](x, y));
    printf("Difference: %d\n", farr[1](x, y));
    printf("Product: %d\n", farr[2](x, y));
    printf("Divide: %d", farr[3](x, y));

    return 0;
}
