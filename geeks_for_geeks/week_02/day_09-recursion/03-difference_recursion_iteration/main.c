/* 
    A program is called recursive when an entity calls itself. 
    A program is called iterative when there is a loop (or repetition).

    -In recursion, a function calls itself to solve smaller parts of a given problem. 
    It continues until a base condition is met to stop further calls.
    -Iteration means repeatedly executing a set of instructions using loops like for, while, or do-while. 
    It continues until a specified condition becomes false.
*/

#include <stdio.h>

// ----- Recursion -----
// method to find factorial of given number
int factorialUsingRecursion(int n)
{
    if (n == 0)
        return 1;
    return n * factorialUsingRecursion(n - 1);
}

// ----- Iteration -----
// Method to find the factorial of a given number
int factorialUsingIteration(int n)
{
    int res = 1, i;

    for (i = 2; i <= n; i++)
        res *= i;

    return res;
}

int main()
{
    int num = 5;
    printf("Factorial of %d using Recursion is: %d\n", num, factorialUsingRecursion(5));

    // printf("Factorial of %d using Iteration is: %d", num, factorialUsingIteration(5));

    return 0;
}