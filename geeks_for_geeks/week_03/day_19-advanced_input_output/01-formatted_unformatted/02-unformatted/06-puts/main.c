/*

    In C programming puts() function is used to display a group of
    characters or strings which is already stored in a character array.
    This function is declared in stdio.h(header file).

*/

#include <stdio.h>

int main()
{
    char name[50];
    printf("Enter your text: ");

    // Reads string from user
    gets(name);

    printf("Your text is: ");

    // Displays string
    puts(name);

    return 0;
}
