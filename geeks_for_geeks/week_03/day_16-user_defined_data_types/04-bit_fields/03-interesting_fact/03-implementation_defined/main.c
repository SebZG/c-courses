// 3. It is implementation-defined to assign an out-of-range value to a bit field member.
// Example: The below code demonstrates the usage of bit fields within a structure and assigns an out-of-range value to one of the bit field members.

// C Program to show what happends when out of range value
// is assigned to bit field member
#include <stdio.h>

struct test
{
    // Bit-field member x with 2 bits
    unsigned int x : 2;
    // Bit-field member y with 2 bits
    unsigned int y : 2;
    // Bit-field member z with 2 bits
    unsigned int z : 2;
};

int main()
{
    // Declare a variable t of type struct test
    struct test t;
    // Assign the value 5 to x (2 bits)
    t.x = 5;

    // Print the value of x
    printf("%d", t.x);

    return 0;

    // Implementation-Dependent
}
