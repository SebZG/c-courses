// Q2. Predict the output of the following program.

#include <stdio.h>

struct test
{
    // Unsigned integer member x
    unsigned int x;
    // Bit-field member y with 33 bits
    long int y : 33;
    // Unsigned integer member z
    unsigned int z;
};

int main()
{
    // Declare a variable t of type struct test
    struct test t;
    // Pointer to unsigned int, pointing to member x
    unsigned int *ptr1 = &t.x;
    // Pointer to unsigned int, pointing to member z
    unsigned int *ptr2 = &t.z;

    // Print the difference between the two pointers
    printf("%d", ptr2 - ptr1);

    return 0;

    // 4

    // Pointer arithmetic rule
    // For pointers of type T *, the difference ptr2 - ptr1 is:
    // (byte_address(ptr2) − byte_address(ptr1)) / sizeof(T)
    // Here:
    // T is unsigned int
    // sizeof(unsigned int) = 4
    // Byte difference between &t.z and &t.x = 16

    // ptr2 - ptr1 = (16 bytes) / (4 bytes per unsigned int) = 4
}
