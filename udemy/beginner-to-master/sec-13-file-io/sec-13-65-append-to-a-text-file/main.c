#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filePtr;
    char a0[] = "This is a beautiful line";
    char a1[] = "This is a more beautiful line";
    char a2[] = "This is the most beautiful line here...";

    filePtr = fopen("Fun Text.txt", "a");

    fprintf(filePtr, "\n%s", a0);
    fprintf(filePtr, "\n%s", a1);
    fprintf(filePtr, "\n%s", a2);

    fclose(filePtr);

    return 0;
}
