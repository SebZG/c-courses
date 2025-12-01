/*

    sprintf stands for "string print".
    This function is similar to printf() function but this function prints
    the string into a character array instead of printing it on the console screen.

*/

#include <stdio.h>

int main()
{
    char str[50];
    int a = 2, b = 8;

    // The string "2 and 8 are even number"
    // is now stored into str
    sprintf(str, "%d and %d are even number", a, b);

    // Displays the string
    printf("%s", str);
    return 0;
}
