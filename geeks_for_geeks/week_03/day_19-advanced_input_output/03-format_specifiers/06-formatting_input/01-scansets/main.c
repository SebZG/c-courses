#include <stdio.h>

// %[characters]: reads only the characters listed in characters.
// %[^characters]: reads until a character in characters is encountered.

int main()
{
    char letters[50];

    // Reads only alphabetic characters
    scanf("%[a-zA-Z]", letters);   // "num8float7.1"
    printf("Read: %s\n", letters); // "num"
    return 0;
}
