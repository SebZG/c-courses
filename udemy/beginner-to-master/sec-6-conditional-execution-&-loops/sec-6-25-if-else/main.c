#include <stdio.h>
#include <stdlib.h>

int main()
{
    int PwrBnksNo;

    PwrBnksNo = 5;

    if (PwrBnksNo > 10)
    {
        printf("You have too many power banks, please try not to get more");
    }
    else
    {
        printf("You don't have too many power banks, buy more.");
    }

    return 0;
}
