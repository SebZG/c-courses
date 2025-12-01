/*

    getche() function reads a single character from the keyboard by the
    user and displays it on the console screen and immediately returns
    without pressing the enter key. This function is declared in
    conio.h(header file).

*/

#include <conio.h>
#include <stdio.h>

int main()
{
    printf("Enter any character: ");

    // Reads a character and
    // displays immediately
    getche();
    return 0;
}
