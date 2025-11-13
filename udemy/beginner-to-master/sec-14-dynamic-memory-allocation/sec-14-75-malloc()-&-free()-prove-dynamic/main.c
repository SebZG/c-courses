#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numOfElements;
    int i;
    int *ptr;

    // numOfElements = 50;
    printf("How many elements do you want?: ");
    fflush(stdin);
    scanf("%d", &numOfElements);

    ptr = (int *)malloc(numOfElements * sizeof(int));

    // populate the array
    for (i = 0; i < numOfElements; i++)
    {
        ptr[i] = i * 2;
    }

    // print the array
    for (i = 0; i < numOfElements; i++)
    {
        printf("\nElement [%d]: %d", i, ptr[i]);
    }

    printf("\n");

    free(ptr);

    return 0;
}
