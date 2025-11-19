#include <stdio.h>

int F(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return F(n - 1) + F(n - 2);
    }
}

int main()
{
    printf("\n%d\n\n", F(5));
    return 0;
}