#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arrA[101];
    int i = 0;

    fgets(arrA, sizeof(arrA), stdin);

    while (arrA[i] != 0)
    {
        printf("%c", arrA[i]);
        i++;
    }

    printf("\n");

    return 0;
}
