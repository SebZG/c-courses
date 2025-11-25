// C Program to return an array in C using Structures
#include <stdio.h>

// Define a structure to hold an array
typedef struct
{
    int array[5];
} ArrayStruct;

// Function to create and return a structure containing an
// array
ArrayStruct createStructArray()
{
    // Declare a variable of type ArrayStruct
    ArrayStruct arrStruct;
    for (int i = 0; i < 5; i++)
        // Initialize the array
        arrStruct.array[i] = i * 2;

    // Return the structure
    return arrStruct;
}

int main()
{
    // Call the function to get a structure containing the
    // array
    ArrayStruct myArrayStruct = createStructArray();
    // Time Complexity: O(N), where N denotes the returned array size.
    // Auxiliary Space: O(1), as the size of the array is constant.

    // Print the elements of the array
    printf("Array Elements: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", myArrayStruct.array[i]);

    printf("\n");

    return 0;
}
