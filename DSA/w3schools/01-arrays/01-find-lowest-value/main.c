#include <stdio.h>

int main()
{
    int arr[] = {33, 645, 3, 55, 645, 34, 23};
    int size = sizeof(arr) / sizeof(arr[0]);
    int minVal = arr[0];


    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }

    printf("\nLowest value: %d\n\n", minVal);

    return 0;
}