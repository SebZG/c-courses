// strlen()

/* 
    strlen() returns the number of characters in a string, exluding the null terminator.

    - useful for determining string length before copying/appending. 
    - returns size_t type.
    - Defined in string.h.
*/

// Explanation

/* 
    strlen() counts the characters in the string up to, but not including, the null character.
*/

// Syntax

/* 
    size_t strlen(const char *str);

    strlen("Hello");
*/

#include <stdio.h>
#include <string.h>

int main()
{   
    char str[] = "Hello";

    strlen(str);
    printf("Length: %zu\n", strlen(str));

    return 0;
}