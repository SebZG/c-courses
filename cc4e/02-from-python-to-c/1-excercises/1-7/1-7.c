/*
Exercise 1-7.

Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blank.
 */

#include <stdio.h>

int main()
{
    int c, previousWasBlank = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (!previousWasBlank)
            {
                putchar(c);  // Print the first blank
                previousWasBlank = 1;
            }
        }
        else  // If previousWasBlank is true, skip printing to remove extra blanks
        {
            putchar(c);            // Print non-blank characters
            previousWasBlank = 0;  // Reset blank tracking for non-blank characters
        }
    }

    return 0;
}