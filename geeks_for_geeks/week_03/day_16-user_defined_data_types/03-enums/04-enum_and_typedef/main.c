#include <stdio.h>

// Defining enum
typedef enum direction
{
    EAST,
    NORTH,
    WEST,
    SOUTH
} Dirctn;

int main()
{
    Dirctn dir = NORTH;

    // Checking the size of enum
    printf("%d", dir);
    return 0;
}
