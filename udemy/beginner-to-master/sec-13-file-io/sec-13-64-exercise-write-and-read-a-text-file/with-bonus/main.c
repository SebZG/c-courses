#include <stdio.h>
#include <stdlib.h>

void createOutputFile(void);//function declaration

int main()
{
    FILE* fileInPtr;
    char line[200];

    fileInPtr = fopen("Weather Information.txt", "r");

    while(!feof(fileInPtr))
    {
        fgets(line, 200, fileInPtr);

        if(line[0] == '.')
        {
            printf("\nFound it!\n");
            createOutputFile();
        }
    }

    fclose(fileInPtr);

    return 0;
}

void createOutputFile(void) //definition
{
    FILE* fileOutPtr;

    fileOutPtr = fopen("Happy today.txt", "w");
    fprintf(fileOutPtr, "I am so happy, I found the dot");
    fclose(fileOutPtr);
}
