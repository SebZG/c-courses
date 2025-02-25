#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *memoryBlockPtr;

    memoryBlockPtr = (int *)calloc(3, sizeof(int));

    printf("\nmemoryBlockPtr[0] contains 0x%x in location 0x%x\n", memoryBlockPtr[0], &memoryBlockPtr[0]);
    printf("memoryBlockPtr[1] contains 0x%x in location 0x%x\n", memoryBlockPtr[1], &memoryBlockPtr[1]);
    printf("memoryBlockPtr[2] contains 0x%x in location 0x%x\n", memoryBlockPtr[2], &memoryBlockPtr[2]);

    memoryBlockPtr[0] = 1;
    memoryBlockPtr[1] = 2;
    memoryBlockPtr[2] = 3;

    printf("\nmemoryBlockPtr[0] contains 0x%x in location 0x%x\n", memoryBlockPtr[0], &memoryBlockPtr[0]);
    printf("memoryBlockPtr[1] contains 0x%x in location 0x%x\n", memoryBlockPtr[1], &memoryBlockPtr[1]);
    printf("memoryBlockPtr[2] contains 0x%x in location 0x%x\n", memoryBlockPtr[2], &memoryBlockPtr[2]);

    realloc(memoryBlockPtr, 5 * sizeof(int));

    memoryBlockPtr[3] = 4;
    memoryBlockPtr[4] = 5;

    printf("\nmemoryBlockPtr[0] contains 0x%x in location 0x%x\n", memoryBlockPtr[0], &memoryBlockPtr[0]);
    printf("memoryBlockPtr[1] contains 0x%x in location 0x%x\n", memoryBlockPtr[1], &memoryBlockPtr[1]);
    printf("memoryBlockPtr[2] contains 0x%x in location 0x%x\n", memoryBlockPtr[2], &memoryBlockPtr[2]);
    printf("memoryBlockPtr[3] contains 0x%x in location 0x%x\n", memoryBlockPtr[3], &memoryBlockPtr[3]);
    printf("memoryBlockPtr[4] contains 0x%x in location 0x%x\n", memoryBlockPtr[4], &memoryBlockPtr[4]);

    free(memoryBlockPtr);

    return 0;
}
