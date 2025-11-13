#include <stdio.h>
#include <stdlib.h>

struct Pen_type
{
    int penLengthMm;
    char penColour[31];
    char penModelName[51];
};

typedef struct Pen_type Pen;


int main()
{
    FILE *filePtr;
    Pen P0, P1;

    //=====Read from a binary file=====//

    //open file for reading
    //r for read and b for binary
    filePtr = fopen("writePenData.bin", "rb");

    //check if the file exists, if not, exit
    if (filePtr == NULL)
    {
        printf("\nError opening file\n");
        return (-1);
    }

    //write read from file
    fread(&P0, sizeof(Pen), 1, filePtr);
    fread(&P1, sizeof(Pen), 1, filePtr);

    //print content of both structures
    printf("Structure P0:");
    printf("\nP0.penLenthMm:%d", P0.penLengthMm);
    printf("\nP0.penColour:%s", P0.penColour);
    printf("\nP0.PenModelName:%s\n\n", P0.penModelName);

    printf("Structure P1:");
    printf("\nP1.penLenthMm:%d", P1.penLengthMm);
    printf("\nP1.penColour:%s", P1.penColour);
    printf("\nP1.PenModelName:%s\n\n", P1.penModelName);

    fclose(filePtr);

    return 0;
}
