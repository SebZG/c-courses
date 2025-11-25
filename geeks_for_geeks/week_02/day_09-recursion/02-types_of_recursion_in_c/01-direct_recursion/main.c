// Direct Recursion

/* 
    This is the simplest and most common form of recursion.
    In direct recursion, a function calls itself directly within its own body.
*/

#include <stdio.h>

void show(int n);

int main()
{
    show(5); // 5 4 3 2 1

    return 0;
}

void show(int n)
{
    if (n == 0)
        return;

    printf("%d ", n);

    // Direct recursive call
    show(n - 1);
}