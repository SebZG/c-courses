#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r = 2, c = 3;

    // Create a double pointer
    int **arr;

    // Allocate memory for rows
    arr = (int **)malloc(r * sizeof(int *));

    // Allocate memory for each row
    for (int i = 0; i < r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));

    // Initialize with some values
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = (i * c) + j + 1;
        }
    }

    // Print the array
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < r; i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
