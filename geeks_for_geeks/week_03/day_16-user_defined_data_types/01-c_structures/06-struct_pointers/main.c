#include <stdio.h>

// Structure declaration
struct Point
{
    int x, y;
};

int main()
{
    struct Point p = {1, 2};

    // ptr is a pointer to structure p
    struct Point *ptr = &p;

    // Accessing structure members using structure pointer
    printf("%d %d", ptr->x, ptr->y);

    return 0;
}
