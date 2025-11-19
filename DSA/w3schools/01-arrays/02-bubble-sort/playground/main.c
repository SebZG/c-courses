#include <stdbool.h>
#include <stdio.h>


int main()
{
    int arr[] = {1, 54, 234, 23, 73, 43222, 432, 12};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    for (size_t i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (size_t j = 0; j < n - 1 - i; i++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            printf("%d, ", arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }

    printf("\n\n");

    return 0;
}