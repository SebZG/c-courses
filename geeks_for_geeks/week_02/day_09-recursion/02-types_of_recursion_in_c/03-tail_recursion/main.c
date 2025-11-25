// Tail Recursion

/* 
    Tail recursion is the opposite of head recursion. In this, the function
    performs its task and then calls itself.
    The recursive call is the last operation in the function.
*/

#include <stdio.h>

void tail(int n);

int main()
{
    tail(5); // 5 4 3 2 1

    return 0;
}

void tail(int n)
{
    if (n == 0)
        return;

    printf("%d ", n);

    // Recursive call after processing
    tail(n - 1);
}