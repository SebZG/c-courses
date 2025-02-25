#include <stdio.h>

int main()
{
    /*     FILE *pF = fopen("text.txt", "w");  // "w" = write / "r" = read / "a" = append

        fprintf(pF, "Spongebob Squarepants\n");

        fclose(pF); */

    if (remove("test.txt") == 0)
    {
        printf("File deleted successfully.");
    }
    else
    {
        printf("File not found.");
    }

    return 0;
}