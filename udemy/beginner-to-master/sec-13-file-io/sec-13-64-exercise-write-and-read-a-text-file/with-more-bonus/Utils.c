#include "Utils.h"

#include <stdio.h>
#include <stdlib.h>


void createOutputFile(void)
{
    FILE *fileOutPtr;

    fileOutPtr = fopen("Happy today.txt", "w");
    fprintf(fileOutPtr, "I am so happy, I found the dot");
    fclose(fileOutPtr);
}
