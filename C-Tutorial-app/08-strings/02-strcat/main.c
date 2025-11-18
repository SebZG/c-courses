// strcat()

/* 
    strcat()= concatenates two strings and stores the result in the first string.

    - Appends the second string to the first.
    - The first string must be large enough to hold the result.
    - Defined in string.h.
*/

// Explanation

/* 
    strcat() appends the content of str2 to str1, resulting in 'Hello, World!'.
*/

// Syntax

/* 
    char *strcat(char *dest, const char *src);

    strcat(str1, str2);
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Hello, ";
    char str2[] = "World!";

    strcat(str1, str2);

    printf("Concatenated String: %s", str1);

    return 0;
}