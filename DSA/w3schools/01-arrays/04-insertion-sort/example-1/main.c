#include <stdbool.h>
#include <stdio.h>


int main()
{
    int arr[10] = {34, 2, 56, 423, 545, 143, 123, 223, 43, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; i++)
    {
        int insert_idx = i;
        int curr_val = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > curr_val)
        {
            arr[j + 1] = arr[j];
            insert_idx = j;
            j--; 
        }
        arr[insert_idx] = curr_val;
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