#include <stdio.h>
#include <stdlib.h>

// void printIntArr(int arr[], int arrSize);
void printIntArr(int* arr, int arrSize);

int main()
{
    int arrOfInts[6] = { 12223, 16432, 37882, 39947, 475, 388271 };
    int* arrPtr;

    // arrPtr = arrOfInts;
    // printIntArr(arrOfInts, 6);

    arrPtr = &arrOfInts[0];
    printIntArr(arrPtr, 6);

    return 0;
}

// void printIntArr(int arr[], int arrSize)
void printIntArr(int *arr, int arrSize)
{
    int count;

    for (count = 0; count < arrSize; count++)
    {
        // printf("\nElement: %d: %d", count, arr[count]);
        printf("\nElement: %d: %d", count, *(arr + count));
    }
    printf("\n");
}
