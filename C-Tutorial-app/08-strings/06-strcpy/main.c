// strcpy()

/* 
    strcpy() copies the content of one string into another.

    - Overwrites the destination string. 
    - No boundss checking - can cause buffer overflows.
    - Defined in string.h.
*/

// Explanation

/* 
    The contents of src is copied into dest.
*/

// Syntax

/* 
    char *strcpy(char *dest, const char *src);

    strcpy(dest, src);
*/

#include <stdio.h>
#include <string.h>

int main()
{   
    char src[] = "C Programming";
    char dest[20];

    strcpy(dest, src);
    printf("Copied string: %s\n", dest);

    return 0;
}