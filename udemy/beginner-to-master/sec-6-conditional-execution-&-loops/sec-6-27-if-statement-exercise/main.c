#include <stdio.h>
#include <stdlib.h>

int main()
{
    int PwrBnksNo;

    printf("How many power banks do you have?\n");

    scanf("%d", &PwrBnksNo);

    printf("\nYou entered: %d\n", PwrBnksNo);

    //check for valid input
    if (PwrBnksNo < 0)
    {
        printf("How can you have less than 0 Power Banks?\n");
        printf("!!!!!!!NOW THE PROGRAM WILL TERMINATE!!!!!!!!\n");
    }
    else if (PwrBnksNo >= 1000)
    {
        printf("Come on! You don't really have that many power banks!\n");
        printf("!!!!!!!NOW THE PROGRAM WILL TERMINATE!!!!!!!!\n");
    }
    else
    {
        if (PwrBnksNo > 10)
        {
            printf("You have too many power banks, please try not to get more\n");
        }
        else if (PwrBnksNo > 7)
        {
            printf("You have enough power banks\n");
        }
        else if (PwrBnksNo > 4)
        {
            printf("You are ok but get some more power banks\n");
        }
        else if (PwrBnksNo >= 1)
        {
            printf("You need to buy more power banks\n");
        }
        else
        {
            printf("Wow you are very brave\n");
        }
    }

    return 0;
}
