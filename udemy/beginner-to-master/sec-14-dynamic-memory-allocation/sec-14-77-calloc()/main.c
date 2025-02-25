#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *memoryBlockPtr;

    memoryBlockPtr = (int *)calloc(3, sizeof(int));

    printf("memoryBlockPtr[0] contains 0x%x\n", memoryBlockPtr[0]);
    printf("memoryBlockPtr[1] contains 0x%x\n", memoryBlockPtr[1]);
    printf("memoryBlockPtr[2] contains 0x%x\n", memoryBlockPtr[2]);

    //    memoryBlockPtr[0] = 1;
    //    memoryBlockPtr[1] = 2;
    //    memoryBlockPtr[2] = 3;

    *memoryBlockPtr = 1;
    memoryBlockPtr++;
    *memoryBlockPtr = 2;
    memoryBlockPtr++;
    *memoryBlockPtr = 3;

    memoryBlockPtr--;
    memoryBlockPtr--;

    printf("\nmemoryBlockPtr[0] contains 0x%x\n", *memoryBlockPtr);
    memoryBlockPtr++;
    printf("memoryBlockPtr[1] contains 0x%x\n", *memoryBlockPtr);
    memoryBlockPtr++;
    printf("memoryBlockPtr[2] contains 0x%x\n", *memoryBlockPtr);

    free(memoryBlockPtr);

    return 0;
}
