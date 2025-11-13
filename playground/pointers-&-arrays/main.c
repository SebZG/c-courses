#include <stdio.h>

int main()
{
    // Char array
    char cArr[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!'};
    int cCount; 
    char *cArrPtr = &cArr[0];

    printf("\n\nPrinting from cArr reference");
    for (cCount = 0; cCount < 12; cCount++)
    {
        printf("\n%c from 0X%x", cArr[cCount], &cArr[cCount]);
    }

    printf("\n\nPrinting from cArrPtr reference");
    for (cCount = 0; cCount < 12; cCount++)
    {
        printf("\n%c from 0x%x", *cArrPtr, cArrPtr);
        cArrPtr++;
    }

    // Int array
    int iArr[3] = {11, 22, 33};
    int iCount;
    int *iArrPtr = &iArr[0];

    printf("\n\nPrinting from iArr reference");
    for (iCount = 0;  iCount < 3; iCount++)
    {
        printf("\n%d from 0x%x", iArr[iCount], &iArr[iCount]);
    }

    printf("\n\nPrinting from iArrPtr reference");
    for (iCount = 0; iCount < 3; iCount++)
    {
        // printf("\n%d from 0x%x", *(iArrPtr + iCount), (iArrPtr + iCount));
        printf("\n%d from 0x%x", *iArrPtr, iArrPtr);
        iArrPtr++;
    }

    printf("\n");

    return 0;
}