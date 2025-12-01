// 2. We cannot have pointers to bit field members as they may not start at a byte boundary.
// Example: The below code demonstrates that taking the address of a bit field member directly is not allowed.

// C program to demonstrate that the pointers cannot point
// to bit field members
#include <stdio.h>
struct test
{
    unsigned int x : 5;
    unsigned int y : 5;
    unsigned int z;
};
int main()
{
    struct test t;

    // Uncommenting the following line will make
    // the program compile and run
    printf("Address of t.x is %p", &t.x);

    // The below line works fine as z is not a
    // bit field member
    printf("Address of t.z is %p", &t.z);
    return 0;

    // prog.c: In function 'main':
    // prog.c:14:1: error: cannot take address of bit-field 'x'
    //  printf("Address of t.x is %p", &t.x);
    //  ^
}
