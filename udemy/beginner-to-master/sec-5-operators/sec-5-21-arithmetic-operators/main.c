#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int result;

    x = 3;

    result = x--;

    printf("result = %d\n", result);
    printf("x = %d\n", x);

    return 0;
}
