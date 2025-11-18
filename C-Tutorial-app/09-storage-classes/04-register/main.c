// Register

/* 
    The `register` storage class hints that the variable should be
    stored in a CPU register instead of RAM.

    - Faster access than memory-stored variables.
    - Cannot get the address of a register variable.
    - Scope is local to the block
*/

// Explanation

/* 
    Like `auto`, but attempts to store variables in
    CPU registers for faster access (compiler-dependent).
*/

// Syntax

/* 
    register <DataType> <VariableName>

    register int temp;
*/

#include <stdio.h>

int main()
{
    register int abc = 30;
    {
        register int abc = 20;
        {
            register int abc = 10;
            printf("%d\n", abc);
        }
        printf("%d\n", abc);
    }
    printf("%d\n", abc);

    return 0;
}