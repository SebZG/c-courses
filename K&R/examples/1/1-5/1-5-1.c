#include <stdio.h>

/* Copy input to output, character by character */
int main()
{
    int c;  // Declare c as int to store both characters and EOF.

    while ((c = getchar()) != EOF)  // Read characters until EOF
    {
        putchar(c);  // Output the character
    }

    return 0;
}