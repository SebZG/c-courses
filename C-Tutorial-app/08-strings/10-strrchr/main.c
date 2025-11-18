// strstr()

/* 
    strstr() returns a pointer to the first occurrence of a substring in a string.

    - Returns NULL if the string is not found. 
    - Case-sensitive.
    - Defined in string.h.
*/

// Explanation

/* 
    strstr() finds the substring "world" in "hello world".
*/

// Syntax

/* 
    char *strstr(const char *str, const char *substr);

    strstr("hello world", 'world');
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello world";

    char *res = strstr(str, "world");
    if (res != NULL)
    {
        printf("Last found substring: %s\n", res);
    }

    return 0;
}