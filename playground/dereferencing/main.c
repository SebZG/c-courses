#include <stdio.h>

int main()
{
    int myNormalInt = 25;
    int *p_int = &myNormalInt;

    printf("myNormalInt has the data: %d\n", myNormalInt);
    printf("myNormalInt lives in: %x\n", &myNormalInt);

    printf("p_int points to the data: %d\n", *p_int);
    printf("p_int point to the address: %x\n", p_int);
    printf("p_int lives in: %x\n", &p_int);

    myNormalInt = 39;
    printf("\n(after mod: 39) p_int points to the data: %d\n", *p_int);

    *p_int = 55;
    printf("\n(after mod: 55) p_int points to the data: %d\n", *p_int);

    printf("\nmyNormalInt contains the data: %d\n", myNormalInt);

    return 0;
}