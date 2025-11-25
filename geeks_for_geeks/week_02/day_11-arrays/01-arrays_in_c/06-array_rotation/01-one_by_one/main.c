#include <stdio.h>

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];

    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr[n - 1] = temp;
}

void leftRotate_1(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
    {
        // leftRotateByOne(arr, n);
        int temp = arr[0];
        for (int i = 0; i < n - 1; i++)
            arr[i] = arr[i + 1];
        arr[n - 1] = temp;
    }
}

void leftRotate_2(int arr[], int d, int n)
{
    // 1 2 3 4 5 6 - 0
    // 3 2 1 4 5 6 - 1
    // 3 4 1 2 5 6 - 2
    // 3 4 5 2 1 6 - 3
    // 3 4 5 6 1 2 - 4
    if (d == n)
    {
        printf("Array is already at position %d\n", d);
        return;
    }

    // No. of passes
    int p = n - d;
    p = n % 2 != 0 ? p + 1 : p;
    printf("d: %d\n", d);
    printf("n: %d\n", n);
    printf("p = n - d: %d\n", p);
    printf("arr[d]: %d\n", arr[d]);

    for (int i = 0; i < p; i++)
    {
        int temp = arr[0];
        if (n % 2 != 0 && i == n - 2)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            return;
        }
        else
        {
            temp = arr[i];
            arr[i] = arr[d + i];
            arr[d + i] = temp;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Length of arr[]
    int d = 3;                            // positions to move

    printf("Original arr: ");
    printArr(arr, n);

    // Rotate array left by d positions
    leftRotate_1(arr, d, n);
    printf("Rotated arr:  ");
    printArr(arr, n);

    // Rotate array left by 2 positions;
    // leftRotate_2(arr, d, n);
    // printf("Rotated arr:  ");
    // printArr(arr, n);

    return 0;
}
