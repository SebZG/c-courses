// Nested Recursion

/* 
    In nested recursion, a function makes more than one recursive call to itself within its body. 
    As a result, the recursion nested branches out.
*/

#include <stdio.h>

int nested(int n);

int main()
{
    printf("%d", nested(95)); // 91

    return 0;
}

int nested(int n)
{
    if (n > 100)
        return n - 10;

    // Two recursive calls nested inside each other
    return nested(nested(n + 11));
}