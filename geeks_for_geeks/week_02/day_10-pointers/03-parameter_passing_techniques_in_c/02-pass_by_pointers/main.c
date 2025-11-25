#include <stdio.h>

// Function that takes parameters by pointer
void func(int *val)
{

    // Changing the value
    *val = 123;
}

int main()
{
    int x = 1;

    // Passing address of x
    func(&x);
    printf("%d", x);

    return 0;
}
