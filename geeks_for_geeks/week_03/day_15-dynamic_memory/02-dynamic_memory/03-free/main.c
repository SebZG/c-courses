#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)calloc(5, sizeof(int));

    // Do some operations.....
    for (int i = 0; i < 5; i++)
        printf("%d ", ptr[i]);

    // Free the memory after completing
    // operations
    free(ptr);

    // Free the ptr itself
    ptr = NULL;

    return 0;
}
