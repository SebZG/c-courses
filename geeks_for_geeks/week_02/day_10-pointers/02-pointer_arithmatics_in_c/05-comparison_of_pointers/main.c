#include <stdio.h>

void traverseArr(int *arr, int N, int M);

int main()
{
    /*     // declaring array
    int arr[5];

    // declaring pointer to array name
    int *ptr1 = arr;
    // declaring pointer to first element
    int *ptr2 = &arr[0];

    if (ptr1 == ptr2)
    {
        printf("Pointer to Array Name and First Element are Equal.\n");
    }
    else
    {
        printf("Pointer to Array Name and First Element are not Equal.\n");
    }

    // Comparison to NULL
    int *ptr3 = NULL;

    if (ptr3 == NULL)
    {
        printf("The pointer is NULL\n");
    }
    else
    {
        printf("The pointer is not NULL\n");
    }

    // Comparison operators on Pointers using an array
    int n = 10;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Declaration of pointer variable
    int *ptr;

    // Pointer points the first (0th index)
    // element in an array
    ptr = arr;
    int count_even = 0;
    int count_odd = 0;

    for (int i = 0; i < n; i++)
    {

        if (*ptr % 2 == 0)
        {
            count_even++;
        }
        if (*ptr % 2 != 0)
        {
            count_odd++;
        }

        // Pointing to the next
        // element in an array
        ptr++;
    }
    printf("No of even elements in an array is : %d\n", count_even);
    printf("No of odd elements in an array is : %d\n", count_odd);

 */
    /*     // Pointer Arithmetic on Arrays
    // Program 1
    int N = 5;

    // An array
    int arr[] = {1, 2, 3, 4, 5};

    // Declare pointer variable
    int *ptr;

    // Point the pointer to first
    // element in array arr[]
    ptr = arr;

    // Traverse array using ptr
    for (int i = 0; i < N; i++)
    {

        // Print element at which
        // ptr points
        printf("%d ", ptr[0]);
        ptr++;
    } */

    int N = 3, M = 2;

    // A 2D array
    int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    // Function Call
    traverseArr((int *)arr, N, M);

    return 0;
}

void traverseArr(int *arr, int N, int M)
{

    int i, j;

    // Traverse rows of 2D matrix
    for (i = 0; i < N; i++)
    {

        // Traverse columns of 2D matrix
        for (j = 0; j < M; j++)
        {

            // Print the element
            printf("%d ", *((arr + i * M) + j));
            // printf("%d ", arr[j]);
        }
        // arr += 2;
        printf("\n");
    }
}

// (0 * 3) + 0 = 0 * 4 = 0
// (0 * 3) + 1 = 1 * 4 = 4

// (1 * 3) + 0 = 3 * 4 = 12
// (1 * 3) + 1 = 4 * 4 = 16

// (2 * 3) + 0 = 6 * 4 = 24
// (2 * 3) + 1 = 7 * 4 = 28