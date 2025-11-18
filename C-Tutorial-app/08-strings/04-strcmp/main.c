// strcmp()

/* 
    strncmp() compares two strings lexicographically.

    - Returns 0 if strings are equal. 
    - Returns >0 if first string is greater, <0 if second is greater.
    - Case-sensitive comparison.
*/

// Explanation

/* 
    strcmp() returns a negative value because "apple" comes before "aricot" lexicographically.
*/

// Syntax

/* 
    char *strcmp(const char *str1, const char *str2);

    strcmp(str1, str2);
*/

#include <stdio.h>
#include <string.h>

int main()
{   
    char str1[] = "apple";
    char str2[] = "apricot";

    int res = strcmp(str1, str2);
    printf("Result: %d\n", res);

    return 0;
}