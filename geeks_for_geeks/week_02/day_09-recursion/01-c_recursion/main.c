#include <stdio.h>

void rec(int n);
void f(int n);

int main()
{
    // rec(1);
    f(3);

    return 0;
}

void rec(int n)
{
    if (n == 6) // Base case
        return;

    printf("Recursion Level %d\n", n);

    rec(n + 1); // Recursive case
}

void f(int n)
{
    printf("F(%d)'s Stack Frame Pushed\n", n);

    if (n > 1)
    {
        f(n - 1);
        f(n - 1);
    }

    printf("F(%d)'s Stack Frame Removed\n", n);
}