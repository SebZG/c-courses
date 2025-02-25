#include <stdio.h>
#include <stdlib.h>

int main()
{
    int PwrBnksNo;

    PwrBnksNo = 0;

    if(PwrBnksNo>10)
    {
        printf("You have too many power banks, please try not to get more");
    }
    else if(PwrBnksNo>7)
    {
       printf("You have enough power banks");
    }
    else if(PwrBnksNo>4)
    {
       printf("You are ok but get some more power banks");
    }
    else if(PwrBnksNo>=1)
    {
       printf("You need to buy more power banks");
    }
    else
    {
        printf("Wow you are very brave");
    }


    return 0;
}
