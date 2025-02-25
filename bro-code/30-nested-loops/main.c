#include <stdio.h>

int main()
{
    // nested loop = a loop inside of another loop

    int rows;
    int cols;
    char sym;

    printf("\nEnter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter a symbol: ");
    scanf(" %c", &sym);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            printf("%c", sym);
        }
        printf("\n");
    }

    return 0;
}