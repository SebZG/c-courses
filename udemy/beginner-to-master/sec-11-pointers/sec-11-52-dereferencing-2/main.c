#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNormalInt;
    int* pInt;

    myNormalInt = 25;

    pInt = &myNormalInt;

    printf("pInt lives in the address: %x\n", &pInt);
    printf("pInt points to the address: %x\n", pInt);
    printf("pInt lives in the data: %d\n", *pInt);

    // proof that we are reading a ptr to the original data
    myNormalInt = 39;
    printf("\n(after mod:39) pInt points to the data %d \n", *pInt);

    // using ptr to write data
    *pInt = 55;
    printf("\n(after mod:55) pInt points to the data %d \n", *pInt);

    // read myNormalInt normally as an int to see what has changed
    printf("\nmyNormalInt contains the data %d \n", myNormalInt);

    return 0;
}
