#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePtr;
    char line[200];

    filePtr = fopen("Homer - Iliad Quote.txt", "r");

    while (!feof(filePtr)) // read line by line
    {
        fgets(line, 200, filePtr);
        printf("%s\n", line);
    }

    fclose(filePtr);

    return 0;
}
