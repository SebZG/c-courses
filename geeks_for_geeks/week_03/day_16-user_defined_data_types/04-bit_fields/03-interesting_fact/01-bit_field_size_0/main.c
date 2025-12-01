// 1. A special unnamed bit field of size 0 is used to force alignment on the next boundary.
// Example: The below code demonstrates how to force alignment to the next memory boundary using bit fields.

// C Program to illustrate the use of forced alignment in
// structure using bit fields
#include <stdio.h>

// A structure without forced alignment
struct test1
{
    unsigned int x : 5;
    unsigned int y : 8;
};

// A structure with forced alignment
struct test2
{
    unsigned int x : 5;
    unsigned int : 0;
    unsigned int y : 8;
};

int main()
{
    printf("Size of test1 is %lu bytes\n", sizeof(struct test1));
    printf("Size of test2 is %lu bytes\n", sizeof(struct test2));
    return 0;

    // Size of test1 is 4 bytes
    // Size of test2 is 8 bytes
}
