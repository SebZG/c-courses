// strrev()

/* 
    strrev() reverses a string in place (non-standard, supported in some compilers).

    - Available in some compilers like Turbo C. 
    - May need to write custom implementation in standard C.
    - Defined in string.h.
*/

// Explanation

/* 
    strrev() reverses the string in-place, but it is not part of standard C.
*/

// Syntax

/* 
    char *strrev(char *str);

    strrev(str);
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hello";

    printf("Reversed: %s\n", strrev(str));

    return 0;
}