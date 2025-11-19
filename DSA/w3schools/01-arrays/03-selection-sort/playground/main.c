#include <stdbool.h>
#include <stdio.h>


int main()
{
    int arr[10] = {34, 56, 423, 2, 545, 143, 123, 223, 43, 5};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    for (size_t i = 0; i < n - 1; i++)
    {
        size_t min_idx = i;
        for (size_t j = i + 1; j < n; j++)
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

    printf("\n");
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