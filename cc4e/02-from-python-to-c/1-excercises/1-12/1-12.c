/*
Exercise 1-12.

Write a program to print a histogram of the lengths of
words in its input. It is easiest to draw the histogram
horizontally; a vertical orientation is more challenging.
 */

/*
The = {0} is an initializer that sets all elements of the wordLengths array to
0. This is a shorthand way to initialize all elements of the array to a default
value, rather than having to write a loop to set each element individually.
*/

#include <stdio.h>

#define MAX_WORD_LENGTH 20  // Maximum allowed word length for individual tracking

int main()
{
    int c, wordLength = 0;
    int wordLengths[MAX_WORD_LENGTH + 2] = { 0 };  // Array to store frequency of word lengths,
                                                   // with an extra bucket for >20

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (wordLength > 0)
            {
                if (wordLength <= MAX_WORD_LENGTH)
                {
                    wordLengths[wordLength]++;  // Increment count for this word length
                }
                else
                {
                    wordLengths[MAX_WORD_LENGTH + 1]++;  // Count words longer than 20 characters
                }
                wordLength = 0;  // Reset for the next word
            }
        }
        else
        {
            wordLength++;  // Increase word length for each character in the word
        }
    }

    // Handle the last word if input does not end with whitespace
    if (wordLength > 0)
    {
        if (wordLength <= MAX_WORD_LENGTH)
        {
            wordLengths[wordLength]++;
        }
        else
        {
            wordLengths[MAX_WORD_LENGTH + 1]++;
        }
    }

    // Print the histogram
    printf("Histogram of word lengths:\n");

    // Print the word lengths for 1 to 20
    for (int i = 1; i <= MAX_WORD_LENGTH; i++)
    {
        // if (wordLengths[i] > 0) {
        printf("%2d: ", i);
        for (int j = 0; j < wordLengths[i]; j++)
        {
            putchar('#');
        }
        printf(" (%d)\n", wordLengths[i]);
        // }
    }

    // Print the bucket for words longer than 20 characters
    // if (wordLengths[MAX_WORD_LENGTH + 1] > 0) {
    printf("21+: ");
    for (int j = 0; j < wordLengths[MAX_WORD_LENGTH + 1]; j++)
    {
        putchar('#');
    }
    printf(" (%d)\n", wordLengths[MAX_WORD_LENGTH + 1]);
    // }

    return 0;
}