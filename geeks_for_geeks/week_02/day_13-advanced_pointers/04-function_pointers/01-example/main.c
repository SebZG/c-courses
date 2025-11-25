/*
    Function pointer points to the code instead of the data so there are
    some restrictions on the function pointers as compared to other pointers.
    Following are some important properties of function pointer:

    - Points to the memory address of a function in the code segment.
    - Requires the exact function signature (return type and parameter list).
    - Can point to different functions with matching signatures.
    - Cannot perform arithmetic operations like increment or decrement.
    - Supports array-like functionality for tables of function pointers.
*/

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{

    // Declare a function pointer that matches
    // the signature of add() function
    int (*fptr)(int, int);

    // Assign to add()
    fptr = &add;

    // Call the function via ptr
    printf("%d", fptr(10, 5));
    return 0;
}
