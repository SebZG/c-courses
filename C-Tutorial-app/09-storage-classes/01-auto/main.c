// Auto

/* 
    The `auto` storage class is the default for local variables inside functions.

    - Default storage class for local variables.
    - Scope is limited to the block in which it is defined.
    - Automaticaly infers data type with `auto` keyword in modern C++, but not in C.
    - Modifies the original string.
*/

// Explanation

/* 
    Three different `abc` variables are declared in nested blocks.
    Each one shadows the outer variables, and the innermost value is printed when in its scope. 
*/

// Syntax

/* 
    <DataType> <VariableName>
    auto <VariableName>

    int count;
    auto int total;
*/

#include <stdio.h>

int main()
{
    int abc =30; {
        int abc = 20; {
            int abc = 10;
            printf("%d\n", abc);
        }
        printf("%d\n", abc);
    }
    printf("%d\n", abc);

    return 0;
}