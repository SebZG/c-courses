#include <stdbool.h>
#include <stdio.h>


int main()
{
    int arr[10] = {34, 2, 56, 423, 545, 143, 123, 223, 43, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
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