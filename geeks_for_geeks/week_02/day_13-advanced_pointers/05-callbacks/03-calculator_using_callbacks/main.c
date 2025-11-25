#include <stdio.h>

// Callback functions
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
int div(int a, int b)
{
    if (b != 0)
        return a / b;
    else
        return -1;
}

// General calculator function that accepts a callback
void calc(int a, int b, int (*op)(int, int))
{

    // Call the callback function
    printf("%d\n", op(a, b));
}

int main()
{
    int n1 = 10, n2 = 5;

    // Using the calculator with addition
    printf("Numbers : %d, %d\n", n1, n2);
    printf("Sum : ");
    calc(n1, n2, add);

    // Using the calculator with subtraction
    printf("Difference: ");
    calc(n1, n2, sub);

    return 0;
}
