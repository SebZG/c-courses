/*

sprintf stands for "string print".
This function is similar to printf() function but this function
prints the string into a character array instead of printing it on
the console screen.

*/

#include <stdio.h>

int main()
{
    char str[50];
    int a = 2, b = 8, c, d;

    // The string "a = 2 and b = 8"
    // is now stored into str
    // character array
    sprintf(str, "a = %d and b = %d", a, b);

    // The value of a and b is now in
    // c and d
    sscanf(str, "a = %d and b = %d", &c, &d);

    // Displays the value of c and d
    printf("c = %d and d = %d", c, d);
    return 0;
}
