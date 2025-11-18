#include <stdio.h>

void reference(int *x);
int value(int x);

int main()
{
    int x = 1;
    printf("main()\n");
    printf("Addr of &x: 0x%p\n", &x); // Address of the local x
    printf("Value of x: %d\n\n", x);  // Value of the local x

    reference(&x);

    x = value(x);

    int *ptr = &x;
    *ptr = 4;
    printf("main()\n");
    printf("Addr of ptr:  0x%p\n", ptr);  // Address of the original variable
    printf("Addr of &ptr: 0x%p\n", &ptr); // Address of the pointer variable
    printf("Value of x: %d\n\n", *ptr);   // Value at the stored address

    printf("Final check in main()\n");
    printf("x = %d, *ptr = %d, &x =  0x%p\n\n", x, *ptr, &x);

    return 0;
}

void reference(int *x)
{
    *x = 2;

    printf("reference()\n");
    printf("Addr of original x: 0x%p\n", x);  // Address of the original variable
    printf("Addr of pointer &x: 0x%p\n", &x); // Address of the pointer variable
    printf("Value of *x: %d\n\n", *x);        // Value at the stored address
}

int value(int x)
{
    x = 3;

    printf("value()\n");
    printf("Addr of local &x: 0x%p\n", &x); // Address of the local x
    printf("Value of x: %d\n\n", x);        // Value of x

    return x;
}
