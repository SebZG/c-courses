#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[12] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!'};
    int cnt;
    char *arrPtr; // 1 byte

    printf("\n\nPrinting from array reference:");
    for (cnt = 0; cnt < 12; cnt++)
    {
        printf("\n%c from 0x%x", arr[cnt], &arr[cnt]);
    }

    arrPtr = &arr[0];

    printf("\n\nPrinting from pointer reference:");
    for (cnt = 0; cnt < 12; cnt++)
    {
        printf("\n%c from 0x%x", *arrPtr, arrPtr);
        arrPtr++; // increment by 1 byte
    }

    return 0;
}
