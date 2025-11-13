/*
r = read
w = write - if the file exists, content is overwritten, else, new file is created.
a = append - if  the file doesn't exist, file is created.
r+ = read and write
w+ = write and read - if the file exists, it is overwritten.
a+ = append and read - if the file exists, append to it.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePtr;
    char line[] = "This is a beautiful line";

    filePtr = fopen("New Text File lalala.txt", "w");

    // printf("%s", line);
    fprintf(filePtr, "%s", line);

    fclose(filePtr);

    return 0;
}
