#include <stdio.h>

int main()
{
    // continue = skips the rest of the code & forces the next iteration of the loop
    // break = breaks out of the loop/switch

    for (int i = 0; i <= 20; i++)
    {
        if (i == 13)
        {
            // continue;
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}