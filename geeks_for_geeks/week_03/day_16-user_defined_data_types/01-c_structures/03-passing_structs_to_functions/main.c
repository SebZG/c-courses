#include <stdio.h>

// Structure definition
struct A
{
    int x;
};

// Function to increment values
void increment(struct A a, struct A *b)
{
    a.x++;
    b->x++;
}

int main()
{
    struct A a = {10};
    struct A b = {10};

    // Passing a by value and b by pointer
    increment(a, &b);

    printf("a.x: %d \tb.x: %d", a.x, b.x);
    return 0;
}
