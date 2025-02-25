#include <stdio.h>

int main()
{
    int happyNumber = 42;
    char happyCharacter = 'j';
    float happyFloat = 3.14;

    printf("The number is %d\n", happyNumber);        // %d or %i is for integers - prints 42
    printf("The character is %c\n", happyCharacter);  // %c is for characters - prints 'j'
    printf("The character is %c\n", happyNumber);     // prints the number as a character - "*"
    printf("The float is %0.2f\n", happyFloat);       // %f is for floats - prints 3.14
    printf("The string is %s\n", "Hello");            // %s is for strings - prints "Hello"

    return 0;
}