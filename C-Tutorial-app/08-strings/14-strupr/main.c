// strupr()

/* 
    strupr() converts all lowercase characters in a string to uppercase (non-standard).

    - Like strlr(), this is not standard C.
    - May need custom implementation using toupper().
    - Modifies the original string.
*/

// Explanation

/* 
    strupr() converts all characters in the string to uppercase.
*/

// Syntax

/* 
    char *strupr(char *str);

    strupr(str);
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "HELLO";

    printf("Reversed: %s\n", strupr(str));

    return 0;
}