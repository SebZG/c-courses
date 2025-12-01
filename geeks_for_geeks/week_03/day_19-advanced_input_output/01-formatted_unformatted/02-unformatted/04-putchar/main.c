/*

The putchar() function is used to display a single character at a
time by passing that character directly to it or by passing a variable
that has already stored a character. This function is declared in
stdio.h(header file)

*/

#include <conio.h>
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");

    // Reads a character
    ch = getchar();

    // Displays that character
    putchar(ch);
    return 0;
}
