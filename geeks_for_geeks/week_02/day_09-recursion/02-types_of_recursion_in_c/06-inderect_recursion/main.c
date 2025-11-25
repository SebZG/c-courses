// Indirect Recursion

/* 
    In indirect recursion, a function doesn’t call itself directly. 
    Instead, it calls another function, which in turn calls the first one. 
    This chain can involve more than two functions.
*/

#include <stdio.h>

void funcA(int);
void funcB(int);

int main()
{
    funcA(10); // 10 9 4 3 1

    return 0;
}

void funcA(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        funcB(n - 1);
    }
}

void funcB(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        funcA(n / 2);
    }
}