#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    x = 0;
    for(int i = 0; i < 10; i++)
    {
        printf("x = %d \n", x);
        x++;
    }

    return 0;
}
