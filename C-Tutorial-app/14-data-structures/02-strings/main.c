// Strings

/* 
    A string is a collection of characters terminated by 
    a null character (\0). In C, strings are used to store text data.

    - Strings are arrays of characters.
    - They must end with a null character \0.
    - Declared using char type.
    - String handling functions are available in <string.h>.
*/

// Explanation

/* 
    The program declares a string named "name"
    initialized with "John". It prints greeting using the string.
*/

// Syntax

/* 
    <DataType> string_name[<size>]

    int numbers[5];
*/

#include <stdio.h>

int main()
{
    char name[20] = "John";

    printf("Hello, %s\n", name);

    return 0;
}