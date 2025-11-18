// strlwr()

/* 
    strlwr() converts all uppercase characters in a string to lowercase (non-standard).

    - May not be portable across platforms.
    - Modifies the original string.
*/

// Explanation

/* 
    strlwr() converts all characters in the string to lowercase.
*/

// Syntax

/* 
    char *strlwr(char *str);

    strlwr(str);
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "HELLO";

    printf("Reversed: %s\n", strlwr(str));

    return 0;
}