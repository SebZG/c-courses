// Static

/* 
    The `static` storage class preserves the value of a variable between function calls.

    - Static variables retain their value between function calls.
    - Scope is local but lifetime is throughout the program.
*/

// Explanation

/* 
    `count` is declared static, so it is initialized only once
    and retains its value across iterations
*/

// Syntax

/* 
    static <DataType> <VariableName>

    static int count;
*/

#include <stdio.h>

int main()
{
    for (int i = 0; i < 5; i++)
    {
        static int count = 0;
        printf("%d\n", count++);
    }

    return 0;
}