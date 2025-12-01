/*

scanf() function is used in the C program for reading or taking any value
from the keyboard by the user, these values can be of any data type like integer,
float, character, string, and many more.
This is a pre-defined function declared in stdio.h(header file).
In scanf() function we use &(address-of operator) which is used to store the
variable value on the memory location of that variable.

*/

#include <stdio.h>

int main()
{
    int num1;

    // Printing a message on
    // the output screen
    printf("Enter a integer number: \n");

    // Taking an integer value
    // from keyboard
    scanf("%d", &num1);

    // Displaying the entered value
    printf("You have entered %d", num1);

    return 0;
}
