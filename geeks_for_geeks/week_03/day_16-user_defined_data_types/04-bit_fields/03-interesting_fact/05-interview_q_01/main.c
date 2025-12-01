// Q1. Predict the output of the following program.
// Assume that unsigned int takes 4 bytes and long int takes 8 bytes.

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
    // Print the size of struct test
    printf("%lu", sizeof(struct test));

    return 0;

    // 24

    // 4 bytes for x
    // 4 bytes padding to align y
    // 8 bytes for the long int bit-field storage unit of y
    // 4 bytes for z
    // 4 bytes tail padding to make the total size a multiple of 8
    // Total: 4 + 4 + 8 + 4 + 4 = 24 bytes.
}
