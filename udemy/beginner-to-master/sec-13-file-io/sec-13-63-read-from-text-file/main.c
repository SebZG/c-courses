#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePtr;
    char line[200];

    filePtr = fopen("Homer - Iliad Quote.txt", "r");

    while (!feof(filePtr))
    {
        // read a line from the file and save it to the buffer called line
        fgets(line, 200, filePtr);

        // print the contents of the buffer called line to the screen
        printf("%s\n", line);
    }

    // good kids close the file
    fclose(filePtr);

    return 0;
}
