// Tree Recursion

/* 
    In tree recursion, a function makes more than one recursive call to itself within its body. 
    As a result, the recursion tree branches out.
*/

#include <stdio.h>

void tree(int n);

int main()
{
    tree(5); // 3 2 1 1 2 1 1

    return 0;
}

void tree(int n)
{
    if (n == 0)
        return;

    printf("%d ", n);

    // First recursive call
    tree(n - 1);

    // Second recursive call
    tree(n - 1);
}