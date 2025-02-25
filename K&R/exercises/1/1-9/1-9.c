/* Exercise 1-9.

   Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
 */

#include <stdio.h>

int main()
{
    int c, prev;

    prev = 0;  // Initialize previous character to 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' || prev != ' ')
        {
            putchar(c);
        }

        prev = c;  // Update previous character
    }

    return 0;
}