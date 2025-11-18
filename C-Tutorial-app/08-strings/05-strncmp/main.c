// strncmp()

/* 
    strncmp() compares the first n characters of two strings.

    - Useful when only partial comparison is needed. 
    - Case-sensitive and returns like strcmp().
    - Prevents reading past buffer limits.
*/

// Explanation

/* 
    The first three characters (hel) are the same, so strncmp() returns 0.
*/

// Syntax

/* 
    char *strncmp(const char *str1, const char *str2, size_t n);

    strncmp(str1, str2, 3);
*/

#include <stdio.h>
#include <string.h>

int main()
{   
    char str1[] = "hello";
    char str2[] = "helium";

    int res = strncmp(str1, str2, 3);
    printf("Result: %d\n", res);

    return 0;
}