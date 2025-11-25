#include <stdio.h>
#include <stdlib.h>

int *createArray(int size)
{
    // Allocate memory for the array
    int *arr = (int *)malloc(size * sizeof(int));
    // Check if memory allocation was successful
    if (!arr)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Initialize the array with example values
    for (int i = 0; i < size; i++)
        arr[i] = i * 2;

    return arr;
}

int main()
{
    // Define the size of the array
    int size = 5;
    // Call the function to create the array and store the values
    int *myArr = createArray(size);
    // Time Complexity: O(N), where N denotes the returned array size.
    // Auxiliary Space: O(N)

    // Print the elements of the array
    for (int i = 0; i < size; i++)
        printf("%d ", myArr[i]);

    printf("\n");

    // Free the allocated memory to avoid memory leaks
    free(myArr);

    return 0;
}
