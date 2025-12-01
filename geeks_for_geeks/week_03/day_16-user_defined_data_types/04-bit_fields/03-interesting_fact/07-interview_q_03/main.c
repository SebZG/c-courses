// Q3. Predict the output of the following program.

#include <stdio.h>

union test
{
    // Bit-field member x with 3 bits
    unsigned int x : 3;
    // Bit-field member y with 3 bits
    unsigned int y : 3;
    // Regular integer member z
    int z;
};

int main()
{
    // Declare a variable t of type union test
    union test t;
    // Assign the value 5 to x (3 bits)
    t.x = 5;
    // Assign the value 4 to y (3 bits)
    t.y = 4;
    // Assign the value 1 to z (32 bits)
    t.z = 1;
    // Print the values of x, y, and z
    printf("t.x = %d, t.y = %d, t.z = %d", t.x, t.y, t.z);

    return 0;

    // t.x = 1, t.y = 1, t.z = 1
}
