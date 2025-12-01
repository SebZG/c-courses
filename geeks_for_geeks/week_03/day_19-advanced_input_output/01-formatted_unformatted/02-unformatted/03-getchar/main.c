/*

The getchar() function is used to read only a first single character
from the keyboard whether multiple characters is typed by the user
and this function reads one character at one time until and unless
the enter key is pressed. This function is declared in stdio.h(header file)

*/

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");

    // Reads and stores the character
    ch = getchar();

    printf("You entered: %c\n", ch);

    return 0;
}
