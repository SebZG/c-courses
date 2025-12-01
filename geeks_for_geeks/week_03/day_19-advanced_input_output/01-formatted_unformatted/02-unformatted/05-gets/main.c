/*

    gets() function reads a group of characters or strings from the
    keyboard by the user and these characters get stored in a character array.
    This function allows us to write space-separated texts or strings.
    This function is declared in stdio.h(header file).

*/

#include <conio.h>
#include <stdio.h>

int main()
{
    // Declaring a char type array
    // of length 50 characters
    char name[50];

    printf("Please enter some texts: ");

    // Reading a line of character or
    // a string
    gets(name);

    // Displaying this line of character
    // or a string
    printf("You have entered: %s", name);
    return 0;
}
