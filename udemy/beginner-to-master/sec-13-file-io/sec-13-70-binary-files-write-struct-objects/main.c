#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    P0.penLengthMm = 50;
    strcpy(P0.penColour, "White");
    strcpy(P0.penModelName, "Snow");

    P1.penLengthMm = 89;
    strcpy(P1.penColour, "Yellow");
    strcpy(P1.penModelName, "Sun");

    //print content of both structures
    printf("Structure P0:");
    printf("\nP0.penLenthMm:%d", P0.penLengthMm);
    printf("\nP0.penColour:%s", P0.penColour);
    printf("\nP0.PenModelName:%s\n\n", P0.penModelName);

    printf("Structure P1:");
    printf("\nP1.penLenthMm:%d", P1.penLengthMm);
    printf("\nP1.penColour:%s", P1.penColour);
    printf("\nP1.PenModelName:%s\n\n", P1.penModelName);

    //=====Write something to a binary file=====//

    //open file for writing (create)
    //w for write and b for binary
    filePtr = fopen("writePenData.bin", "wb");

    //write funWords to file
    fwrite(&P0, sizeof(Pen), 1, filePtr);
    fwrite(&P1, sizeof(Pen), 1, filePtr);

    fclose(filePtr);

    return 0;
}
