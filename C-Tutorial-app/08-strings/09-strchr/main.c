// strchr()

/* 
    strchr() returns a pointer to the first occurrence of a character in a string.

    - Returns NULL if character not found.
    - Includes search for null terminator.
    - Defined in string.h.
*/

// Explanation

/* 
    strchr() finds the first occurrance of 'a' in "Example", which is at index 2.
*/

// Syntax

/* 
    char *strchr(const char *str, int c);

    strchr("Example", 'a');
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Example";

    char *res = strchr(str, 'a');
    if (res != NULL)
    {
        printf("Found at: %d\n", res - str);
    }

    return 0;
}