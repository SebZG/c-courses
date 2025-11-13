#include <stdio.h>
#include <stdlib.h>

#include "Utils.h"

int main()
{
    FILE *fileInPtr;
    char line[200];

    fileInPtr = fopen("Weather Information.txt", "r");

    while (!feof(fileInPtr)) // read line by line
    {
        fgets(line, 200, fileInPtr);

        if (line[0] == '.')
        {
            printf("\n%s\n\n", "Found it!!!");
            createOutputFile();
        }
    }

    fclose(fileInPtr);
    printf("\n");

    return 0;
}
