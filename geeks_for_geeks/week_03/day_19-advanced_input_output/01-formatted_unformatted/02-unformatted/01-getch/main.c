/*

    getch() function reads a single character from the keyboard
    by the user but doesn't display that character on the console
    screen and immediately returned without pressing enter key.
    This function is declared in conio.h(header file). getch() is
    also used for hold the screen.

*/

#include <conio.h>
#include <stdio.h>

int main()
{
    printf("Enter any character: ");

    // Reads a character but
    // not displays
    _getch();

    return 0;
}
