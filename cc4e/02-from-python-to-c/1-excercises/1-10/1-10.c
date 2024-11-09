/*
Exercise 1-10.

Write a program which prints the words in its input, one per line.
 */

#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            putchar('\n');
        }
        else
        {
            putchar(c);
        }
    }

    return 0;
}

/* #include <stdio.h>

int main()
{
    int c;
    int inWord = 0;  // Flag to track if we're currently inside a word

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (inWord)
            {
                putchar('\n');  // End the current word by printing a newline
                inWord = 0;     // Reset the flag since we're now outside a word
            }
        }
        else
        {
            putchar(c);  // Print the character
            inWord = 1;  // Set the flag since we're inside a word
        }
    }

    return 0;
} */