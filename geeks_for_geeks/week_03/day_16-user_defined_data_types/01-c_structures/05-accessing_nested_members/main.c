#include <stdio.h>

// Child structure declaration
struct child
{
    int x;
    char c;
};

// Parent structure declaration
struct parent
{
    int a;
    struct child b;
};

int main()
{
    struct parent p = {25, 195, 'A'};

    // Accessing and printing nested members
    printf("p.a = %d\n", p.a);
    printf("p.b.x = %d\n", p.b.x);
    printf("p.b.c = %c", p.b.c);
    return 0;
}
