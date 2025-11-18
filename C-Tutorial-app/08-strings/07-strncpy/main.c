// strncpy()

/* 
    strncpy() copies up to n characters from one string to another.

    - safer alternative to strcpy(). 
    - If source is shorter than n, destination is padded with null characters.
    - Defined in string.h.
*/

// Explanation

/* 
    Only the fist 5 characters are copied, and we manuallu null-terminate.
*/

// Syntax

/* 
    char *strncpy(char *dest, const char *src, size_t n);

    strncpy(dest, src, 5);
*/

#include <stdio.h>
#include <string.h>

int main()
{   
    char src[] = "Language";
    char dest[10];

    strncpy(dest, src, 5);
    dest[5] = '\0';
    printf("Copied string: %s\n", dest);

    return 0;
}