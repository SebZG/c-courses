#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quicksort(int array[], int low, int high);
int partition(int array[], int low, int high);

int main()
{
    // int myArray[] = {64, 34, 25, 12, 22, 11, 90, 5}; // 8
    int myArray[] = {6, 3, 7, 5, 1, 2, 4}; // 7
    int n = sizeof(myArray) / sizeof(myArray[0]);

    quicksort(myArray, 0, n - 1);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", myArray[i]);
    }

    printf("\n\n");

    return 0;
}

void quicksort(int array[], int low, int high)
{
    srand(time(NULL));

    if (low < high)
    {
        int pivotIndex = partition(array, low, high);
        quicksort(array, low, pivotIndex - 1);
        quicksort(array, pivotIndex + 1, high);
    }
}

int partition(int array[], int low, int high)
{
    // int pivot_idx = low + (rand() % (high - low));
    // if(pivot_idx != high)
    // {
    //     int temp = array[pivot_idx];
    //     array[pivot_idx] = array[high];
    //     array[high] = temp;
    // }

    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    int temp = array[i + 1];
    array[i + 1] = array[high];
    array[high] = temp;
    return i + 1;
}