#include <stdio.h>

// void printAge(int age);
void printAge(int *pAge);

int main()
{
    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //           some tasks are performed more easily with pointers
    //          * = indirection operator (value at address)

    int age = 21;
    int *pAge = NULL;  // Good practice to assign NULL if declaring a pointer
    pAge = &age;

    // printf("address of age: %p\n", &age);  // & = address operator / p = pointer
    // printf("value of pAge: %p\n", pAge);
    // printf("\n");

    // printf("size of age: %d bytes\n", sizeof(age));
    // printf("size of pAge: %d bytes\n", sizeof(pAge));
    // printf("\n");

    // printf("value of age: %d\n", age);
    // printf("value at stored address: %d\n", *pAge);  // dereferencing

    // printAge(age);
    printAge(pAge);

    return 0;
}

void printAge(int *pAge)
{
    printf("You are %d years old.", *pAge);  // dereferencing
}