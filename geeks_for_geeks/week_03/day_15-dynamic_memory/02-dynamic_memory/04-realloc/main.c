#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(5 * sizeof(int));

    // Reallocation
    int *temp = (int *)realloc(ptr, 10 * sizeof(int));

    // Only update the pointer if reallocation is successful
    if (temp == NULL)
        printf("Memory Reallocation Failed\n");
    else
        ptr = temp;

    return 0;
}
