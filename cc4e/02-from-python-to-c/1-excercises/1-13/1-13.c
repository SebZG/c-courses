/*
Exercise 1-13.

Write a program to convert its input to lower case,
using a function lower(c) which returns c if c is not a letter,
and the lower case value of c if it is a letter.
 */

#include <stdio.h>

int lower(int c)
{
    //' Check if c is an uppercase letter
    if (c >= 'A' && c <= 'Z')
    {
        // Convert to lowercase by adding the difference between 'A' and 'a'
        return c + 'a' - 'A';
    }
    else
    {
        // Return the unchanged character if it's not an uppercase letter
        return c;
    }
}

int main()
{
    int c;

    printf("Enter text:\n");

    // Read each character until end of input
    while ((c = getchar()) != EOF)
    {
        // Convert and print each character
        putchar(lower(c));
    }

    return 0;
}