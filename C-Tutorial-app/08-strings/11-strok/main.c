// strtok()

/* 
    strtok() splits a string into tokens based on a set of delimiters.

    - Modifies the original string. 
    - Subsequent calls should pass NULL as first argument.
    - Not thread-safe.
    - Defined in string.h.
*/

// Explanation

/* 
    strtok() splits the string into individual words using space as a delimiter.
*/

// Syntax

/* 
    char *strtok(char *str, const char *delim);

    strtok(str, " ");
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello world";

    char *token = strtok(str, " ");
    while (token != NULL)
    {
        printf("%s\n", token);
    }

    return 0;
}