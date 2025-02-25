/*  Exercise 1-7.

    Write a program to print the value of EOF.
*/

#include <stdio.h>

int main(void)
{
    int c;

    printf("Enter characters, press Ctrl+D (Unix/Mac) or Ctrl+Z (Windows) to end\n");

    while ((c = getchar()) != EOF)
    {
        printf("The value of c is: %d\n", c);
    }
    printf("The value of EOF is: %d\n", c);

    return 0;
}