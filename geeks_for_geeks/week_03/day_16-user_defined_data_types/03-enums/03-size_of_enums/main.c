#include <stdio.h>

// Defining enum
enum direction
{
    EAST,
    NORTH,
    WEST,
    SOUTH
};

int main()
{
    enum direction dir = NORTH;

    // Checking the size of enum
    printf("%ld bytes", sizeof(dir));
    return 0;
}
