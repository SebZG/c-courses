#include <stdio.h>

// Defining a structure
struct A
{
    int x;
};

int main()
{

    // Creating a structure variable
    struct A a;

    // Initializing member
    a.x = 11;

    printf("%d", a.x);
    return 0;
}
