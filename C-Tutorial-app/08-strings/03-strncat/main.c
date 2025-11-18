// strncat()

/* 
    strncat() appends a specified number of characters from one string to the end of another.

    - Similar to strcat(), but limits the number of characters to append. 
    - Prevents buffer overflow if used correctly.
    - Defined in string.h.
*/

// Explanation

/* 
    Only the first 4 characters of str2 are appended to str1.
*/

// Syntax

/* 
    char *strncat(char *dest, const char *src, size_t n);

    strncat(str1, str2, 4);
*/

#include <stdio.h>
#include <string.h>

int main()
{   
    char str1[50] = "Good";
    char str2[] = " Morning";

    strncat(str1, str2, 4);
    printf("Result: %s\n", str1);

    return 0;
}