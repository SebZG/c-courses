#include <stdio.h>

void printIntArr(int *arr, int arrSize);

int main()
{
    int iArr[6] = {11, 22, 33, 44, 55, 66};
    int *iArrPtr = &iArr[0];
    // int *iArrPtr = iArr;

    printIntArr(iArrPtr, 6);
    // printfIntArr(iArr, 6);

    return 0;
}

// void printIntArr(int arr[], int arrSize)
void printIntArr(int *arr, int arrSize)
{
    for (int count = 0; count < arrSize; count++)
    {
        // printf("\nElement: %d: %d", count, arr[count]);
        printf("\nElement: %d: %d", count, *(arr + count));
    }

    printf("\n");
}