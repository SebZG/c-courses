#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3] = {22, 55, 88};
    int *arrPtr; // 4 bytes

    printf("\n\nPrinting from array reference: ");
    printf("\n%d from 0x%x", arr[0], &arr[0]);
    printf("\n%d from 0x%x", arr[1], &arr[1]);
    printf("\n%d from 0x%x", arr[2], &arr[2]);

    //interesting, not recommended
    printf("\n%d from 0x%x", arr[3], &arr[3]);

    arrPtr = &arr[0];

    printf("\n\nPrinting from POINTER reference: ");
    printf("\n%d from 0x%x", *arrPtr, arrPtr);
    arrPtr++; // increment by 4 bytes
    printf("\n%d from 0x%x", *arrPtr, arrPtr);
    arrPtr++; // increment by 4 bytes
    printf("\n%d from 0x%x", *arrPtr, arrPtr);

    //interesting, not recommended
    arrPtr++; // increment by 4 bytes
    printf("\n%d from 0x%x", *arrPtr, arrPtr);


    return 0;
}
