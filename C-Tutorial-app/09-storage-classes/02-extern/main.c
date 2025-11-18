// Extern

/* 
    The `extern` storage class is used to declare a global variable or 
    function in another file or later in the same file.

    - Allows use of global variables across multiple files.
    - Links the variable to a previously declared instance.
    - Used to share variable values across different scopes.
*/

// Explanation

/* 
    `X` is first declared gobally.
    Inside main, `extern int X` connects to the same global variabl, 
    so changes are refleceted across both declarations.
*/

// Syntax

/* 
    extern <DataType> <VariableName>

    extern int count;
*/

#include <stdio.h>

int X;
int main()
{
    printf("Value of the variable %d\n", X);
    extern int X;
    X = 10;

    printf("Value of the variable: %d", X);

    return 0;
}