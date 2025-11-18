// Arrays

/* 
    An array is a collection of elements of the
    same data type stored at contiguous memory locations.
    It allows you to store multiple values in a single variable.

    - Fixed-size collection of elements.
    - All elements must be of the same type.
    - Indexing starts from 0.
    - Stored in contiguous memory locations.
*/

// Explanation

/* 
    This code initializes an integer array with 5
    elements and uses a loop to print each element
    along with its index.
*/

// Syntax

/* 
    <DataType> array_name[<size>];

    int numbers[5];
*/

#include <stdio.h>

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: %d\n", i, numbers[i]);
    }

    return 0;
}