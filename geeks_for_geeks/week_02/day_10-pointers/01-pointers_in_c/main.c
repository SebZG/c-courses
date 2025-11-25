#include <stdio.h>

int add(int a, int b);

int main()
{
    // NULL pointer
    int *ptr = NULL;

    // Void pointer
    void *ptr;

    // Wild pointer
    int *ptr;

    // Dangling pointer
    int *ptr = (int *)malloc(sizeof(int));
    // After below free call, ptr becomes a Dangling Pointer
    free(ptr);
    // Removeing Dangling Pointer
    ptr = NULL;

    // Constant pointers
    int a = 90, b = 50;
    // Creating a constant pointer
    int *const ptr = &a;
    // Trying to reassign it to b
    ptr = &b; // error: assignment of read-only variable 'ptr'


    // Pointer to function
    // matching the signature of add() function
    int (*fptr)(int, int);
    // Assign address of add()
    fptr = &add;
    // Call the function via ptr
    printf("%d", fptr(10, 5)); // 15


    // Muiltilevel pointers
    int var = 10;
    // Pointer to in
    int *ptr1 = &var;
    // Pointer to pointer (double pointer)
    int **ptr2 = &ptr1;
    // Accessing values using all three
    printf("var: %d\n", var);
    printf("*ptr1: %d\n", *ptr1);
    printf("**ptr2: %d\n", **ptr2);

    printf("%d\n", sizeof(*ptr1));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}