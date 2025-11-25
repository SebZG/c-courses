#include <stdio.h>

int getSum(int arr[], int n)
{

    // Base case: No elements left
    if (n == 0)
        return 0;

    // Add current element and move to the
    // rest of the array
    return arr[n - 1] + getSum(arr, n - 1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Finding the sum
    int res = getSum(arr, n);

    printf("%d", res);
    return 0;
}
