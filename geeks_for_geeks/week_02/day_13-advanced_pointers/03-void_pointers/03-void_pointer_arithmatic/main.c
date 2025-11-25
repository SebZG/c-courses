// C program to demonstrate the usage
// of a void pointer to perform pointer
// arithmetic and access a specific memory location

/*
    The C standard doesn't allow pointer arithmetic with void pointers.
    However, in GNU C it is allowed by considering the size of the void as 1.
*/

/*
    - malloc() and calloc() return void * type and this allows these functions to be used to allocate memory of any data type (just because of void *).
    - void pointers in C are used to implement generic functions in C. For example, compare function which is used in qsort().
    - void pointers used along with Function pointers of type void (*)(void) point to the functions that take any arguments and return any value.
    - void pointers are mainly used in the implementation of data structures such as linked lists, trees, and queues i.e. dynamic data structures.
    - void pointers are also commonly used for typecasting.
*/

#include <stdio.h>

int main()
{
    // Declare and initialize an integer array 'a' with two
    // elements
    int a[2] = {1, 2};
    // Declare a void pointer and assign the address of
    // array 'a' to it
    void *ptr = &a;

    // Increment the pointer by the size of an integer
    ptr = ptr + sizeof(int);

    // The void pointer 'ptr' is cast to an integer
    // pointer using '(int*)ptr' Then, the value is
    // dereferenced with `*(int*)ptr` to get the value at
    // that memory location
    printf("%d", *(int *)ptr);

    return 0;
}
