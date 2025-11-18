// gets() and puts()

/* 
    gets() is used to read a string from standard input.
    puts() is used to write a string to standard output.

    - gets() reads a line from stdin and stores it in a character array (buffer).
    - puts() prints a string followed by a newline.
    - gets() is unsafe due to buffer overflows.
    Use fgets() instead. 
*/

// Explanation

/* 
    gets() captures the input and stores it into the array 'name'.
    puts() then displays the captured string with a newline.
*/

// Sytax

/* 
    gets(<char_array>);
    puts(<char_array>);

    char name[50];
    gets(name);
    puts(name);
*/

#include <stdio.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    // gets(name);
    // printf("Welcome, ");
    // puts(name);

    fgets(name, sizeof(name), stdin);
    printf("Welcome, %s\n", name);

    return 0;
}
