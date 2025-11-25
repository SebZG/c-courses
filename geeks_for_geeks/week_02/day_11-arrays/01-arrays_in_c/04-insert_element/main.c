#include <stdio.h>

void insert(int arr[], int *n, int pos, int val)
{

    // Shift elements to the right
    for (int i = *n; i > pos; i--)
        arr[i] = arr[i - 1];

    // Insert val at the specified position
    arr[pos] = val;

    // Increase the current size
    (*n)++;
}

void insertLast(int arr[], int *n, int val)
{

    // Insert val at last
    arr[*n] = val;

    // Increase the current size
    (*n)++;
}

int main()
{
    int arr[7] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 3;
    int val = 25;

    // Insert the value at the specified position
    insert(arr, &n, pos, val);
    // Time Complexity: O(n) (for Shifting) + O(1) (for incrementing size) = O(n)
    // Auxiliary Space: O(1)

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");

    // Insert the value at the end
    insertLast(arr, &n, val);
    // Time Complexity: O(1) (for decrementing size)
    // Auxiliary Space: O(1)

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
