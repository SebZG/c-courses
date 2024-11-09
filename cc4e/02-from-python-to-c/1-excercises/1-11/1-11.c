/*
Exercise 1-11.

Revise the word count program to use a better definition of "word,"
for example, a sequence of letters, digits and apostrophes that begins with a
letter.
 */

#include <ctype.h>
#include <stdio.h>

int main()
{
    int c;
    int inWord = 0;       // Flag to indicate if we're inside a word
    int wordStarted = 0;  // Flag to indicate if a valid word has started (begins with a letter)
    int wordCount = 0;    // Counter for words

    while ((c = getchar()) != EOF)
    {
        if (isalpha(c))
        {  // Check if the character is a letter
            if (!inWord)
            {
                inWord = 1;       // Start a new word
                wordStarted = 1;  // Set flag to indicate the word started with a letter
            }
            putchar(c);  // Print the letter
        }
        else if (wordStarted && (isalnum(c) || c == '\''))
        {
            putchar(c);  // Print digits or apostrophes in the word
        }
        else
        {
            if (inWord)
            {
                putchar('\n');  // End the current word with a newline
                wordCount++;    // Increment the word counter
            }
            inWord = 0;       // Reset inWord flag for next potential word
            wordStarted = 0;  // Reset wordStarted flag
        }
    }

    // If the last character was part of a word, count it as well
    if (inWord)
    {
        wordCount++;
    }

    printf("Word count: %d\n", wordCount);

    return 0;
}

/* #include <ctype.h>
#include <stdio.h>

int main()
{
    int c, inword = 0, nw = 0;

    while ((c = getchar()) != EOF)
    {
        if (isalpha(c))
        {
            inword = 1;
        }
        else if (inword)
        {
            if (isalnum(c) || c == '\'')
            {
                continue;
            }
            else
            {
                inword = 0;
                nw++;
            }
        }
    }

    if (inword)
    {
        nw++;
    }

    printf("%d\n", nw);

    return 0;
} */