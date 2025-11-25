#include <stdio.h>

int main()
{
    int arr[] = {23, 12, 45, 20, 90, 89, 95, 32, 65, 19};

    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < n; i++)
        if (max < arr[i])
            max = arr[i];
    // Time Complexity: O(N) where N is the number of elements in the array.
    // Auxiliary Space: O(1)

    printf("Array Elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    printf("The max value is: %d", max);

    return 0;
}
