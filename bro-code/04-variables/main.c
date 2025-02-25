#include <stdio.h>

int main()
{
    // variable = Allocated space in memory to store a value.
    //            We refer to a variable's name to access the store value.
    //            That variable now behaves as if it was the value it contains.
    //            BUT we need to declare what type of data we are storing.

    int x;        // Declaration
    x = 123;      // Initialization
    int y = 321;  // Declaration + Initialization

    int age = 21;         // integer
    float gpa = 3.5;      // floating point number
    char grade = 'A';     // character
    char name[] = "Bro";  // array of characters

    printf("Hello, %s\n", name);
    printf("You are %d years old.\n", age);
    printf("Your average grade is %c.\n", grade);
    printf("Your gpa is %f.\n", gpa);

    return 0;
}