// #include <stdio.h>

// void main() {
//     printf("Hello World");
// }

#include <stddef.h>
#include <stdio.h>
#include <string.h>

char *reverse_words(const char *words, size_t length, char *reversed);

int main()
{
    const char *input = "The greatest victory is that which requires no battle";
    size_t length = strlen(input);
    char output[100];  // Make sure this is large enough to hold the reversed string
    reverse_words(input, length, output);
    printf("%s\n", output);  // Expected: "battle no requires which that is victory greatest The"
    return 0;
}

char *reverse_words(const char *words, size_t length, char *reversed)
{
    if (reversed == NULL || words == NULL || length == 0)
    {
        reversed[0] = '\0';  // Set to an empty string if input is empty or invalid
        return reversed;
    }

    size_t i = length;
    size_t pos = 0;

    while (i > 0)
    {
        // Move i back to find the beginning of the last word
        size_t end = i - 1;
        while (end > 0 && words[end - 1] != ' ')
        {
            end--;
        }

        // Copy the word into `reversed`
        size_t word_len = i - end;
        strncpy(&reversed[pos], &words[end], word_len);
        pos += word_len;

        // Add a space if not the last word
        if (end > 0)
        {
            reversed[pos] = ' ';
            pos++;
        }

        // Update `i`, but ensure it doesn't go below 0
        if (end == 0)
        {
            break;  // No more words to process
        }
        i = end - 1;
    }

    // Null-terminate the `reversed` string
    reversed[pos] = '\0';
    return reversed;
}
