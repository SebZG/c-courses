// Head Recursion

/* 
    In head recursion, the recursive call is made before any other statement in the function.
    So, the funcion calls itself and then processes the result.
*/

#include <stdio.h>

void head(int n);

int main()
{
    head(5); // 1 2 3 4 5

    return 0;
}

void head(int n)
{
    if (n == 0)
        return;

    // Recursive call before any processing
    head(n - 1);

    printf("%d ", n);
}