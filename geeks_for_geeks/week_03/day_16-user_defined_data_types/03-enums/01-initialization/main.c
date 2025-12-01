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

    // Creating enum variable
    enum direction dir = NORTH;
    printf("%d\n", dir);

    // This is valid too
    dir = 3;
    printf("%d", dir);
    return 0;
}
