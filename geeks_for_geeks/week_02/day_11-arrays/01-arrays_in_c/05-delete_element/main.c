#include <stdio.h>

void del(int arr[], int *n, int key)
{
    // Find the element
    int i = 0;
    while (arr[i] != key)
        i++;

    // Shifting the right side elements one
    // position to the left
    for (int j = i; j < *n - 1; j++)
        arr[j] = arr[j + 1];

    // Decrese the size
    (*n)--;
}

void delLast(int arr[], int *n)
{
    // Decrese the size
    (*n)--;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    // Delete the key from the array
    del(arr, &n, key);
    // Time Complexity: O(n) (for Searching) + O(n) (for Shifting) + O(1) (for decrementing size) = O(n)
    // Auxiliary Space: O(1)

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    // Delete the last element
    delLast(arr, &n);
    // Time Complexity: O(1) (for decrementing size)
    // Auxiliary Space: O(1)

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
