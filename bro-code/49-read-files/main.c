#include <stdio.h>

int main()
{
    FILE *pF = fopen("text.txt", "r");

    char buffer[255];

    if (pF == NULL)
    {
        printf("File not found.");
        return 1;
    }
    else
    {
        while (fgets(buffer, 255, pF) != NULL)
        {
            printf("%s", buffer);
        }
    }

    fclose(pF);

    return 0;
}