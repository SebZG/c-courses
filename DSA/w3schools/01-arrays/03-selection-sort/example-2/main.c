#include <stdio.h>

int main()
{
    int arr[] = {64, 34, 25, 5, 22, 11, 90, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        if (min_idx != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

    printf("\nSorted arr: ");
    for (int i = 0; i < n; i++)
    {
        if (i > n)
        {
            printf("%d, ", arr[i]);
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n\n");

    return 0;
}