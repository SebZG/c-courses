#include <stdio.h>

#define COUNT 19

int main()
{
    int prev2 = 0;
    int prev1 = 1;
    int newFib;

    printf("\n%d\n", prev2);
    printf("%d\n", prev1);

    for (int i = 0; i < COUNT; i++)
    {
        newFib = prev2 + prev1;
        printf("%d\n", newFib);
        prev2 = prev1;
        prev1 = newFib;
    }

    printf("\n");

    return 0;
}