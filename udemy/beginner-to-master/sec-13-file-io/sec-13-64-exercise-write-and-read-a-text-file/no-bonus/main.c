#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fileInPtr;
    FILE *fileOutPtr;
    char line[200];

    fileInPtr = fopen("Weather Information.txt", "r");

    while (!feof(fileInPtr))
    {
        fgets(line, 200, fileInPtr);

        if (line[0] == '.')
        {
            fileOutPtr = fopen("Happy today.txt", "w");
            fprintf(fileOutPtr, "I am so happy, I found the dot");
            fclose(fileOutPtr);
        }
    }

    fclose(fileInPtr);

    return 0;
}
