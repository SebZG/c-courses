// Lomuto partition

//      6 3 7 5 1 2 [4]
//                   |
//           3 1 [2] 4 6 7 [5]
//                |         |
//              1 2 [3]     5 6 [7]

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HELLO 0

void swap(int *x, int *y);
void quicksort(int array[], int length);
void quicksort_rec(int array[], int low, int high);
int partition(int array[], int low, int high);

int main()
{
    // int arr[] = {10, 11, 23, 44, 8, 15, 3, 9, 12, 45, 56, 45, 45};
    int arr[] = {6, 3, 7, 5, 1, 2, 4}; // 7
    int length = sizeof(arr) / sizeof(arr[0]);

    // srand(time(NULL)); // Seed for random number for later

    quicksort(arr, length);

    printf("\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void quicksort(int arr[], int length)
{
    quicksort_rec(arr, 0, length - 1);
}

void quicksort_rec(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot_idx = partition(arr, low, high);
        quicksort_rec(arr, low, pivot_idx - 1);
        quicksort_rec(arr, pivot_idx + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    //      j
    //      6 3 7 5 1 2 [4] - start
    //    i


    // int pivot_idx = low + (rand() % (high - low));
    // if (pivot_idx != high)
    // {
    //     swap(&arr[pivot_idx], &arr[high]);
    // }

    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

//      6 3 7 5 1 2 [4]
//                   |
//           3 1 [2] 4 6 7 [5]
//                |         |
//              1 2 [3]     5 6 [7]


//      (low(0) < high(6)) = true
//      partition(arr, low, high)
//      low = 0, high = 6
//      
//      j
//      6 3 7 5 1 2 [4] - round 1
//    i


//      FIRST PARTITION
//      low = 0, pivot_idx = 3;
//      quicksort_rec(arr, low, pivot_idx - 1)
//      (low(0) < high(2)) == true
//      partition(arr, low, high)
//      low = 0, high = 2
//
//        j
//      1 2 [3] 4 6 7 5 - round 2
//        i
//


//      low = 0, pivot_idx = 1
//      quicksort_rec(arr, low, pivot_idx - 1)
//      (low(0) < high(0)) == false

//      SECOND PARTITION
//      pivot_idx = 3, high = 6; (values from FIRST PARTITION)
//      quicksort_rec(arr, pivot_idx + 1, high)
//      (low(4) < high(6)) == true
//      partition(arr, low, high)
//      low = 4, high = 6
//
//                j
//      1 2 3 4 5 7 [6] - round 3
//              i
//


//      pivot_idx = 4, high = 6
//      quicksort_rec(arr, pivot_idx + 1, high)
//      (low(5) < high(6)) == true;
//      partition(arr, low, high)
//      low = 5, high = 6;
//
//                j
//      1 2 3 4 5 6 [7] - round 4
//                i


//      pivot_idx = 5, high 6;
//      quicksort_rec(arr, pivot_idx + 1, high)
//      (low(6) < high(6)) == false;
//      END


//      FINAL RESULT
//
//      1 2 3 4 5 6 7