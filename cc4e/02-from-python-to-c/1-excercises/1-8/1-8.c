/*
Exercise 1-8.

Write a program to replace each tab by the three-character sequence >,
backspace, -, which prints as >,
and each backspace by the similar sequence <.
This makes tabs and backspaces visible.
 */

#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            putchar('>');   // First character for the tab representation
            putchar('\b');  // Backspace character to move back one position
            putchar('-');   // Last character to complete the visual representation of tab
        }
        else if (c == '\b')
        {
            putchar('<');  // Represent backspace with '<'
        }
        else
        {
            putchar(c);  // Print other characters as they are
        }
    }

    return 0;
}