#include <stdio.h>

void twoDArr()
{
    /*
        arr[0][0]: 0    arr[0][1]: 1
        arr[1][0]: 2    arr[1][1]: 3
        arr[2][0]: 4    arr[2][1]: 5
    */

    int arr[3][2] = {{0, 1}, {2, 3}, {4, 5}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("arr[%d][%d]: %d    ", i, j, arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void threeDArr()
{
    /*
        arr[0][0][0] = 1   arr[0][0][1] = 1
        arr[0][1][0] = 2   arr[0][1][1] = 3
        arr[0][2][0] = 4   arr[0][2][1] = 5


        arr[1][0][0] = 6   arr[1][0][1] = 7
        arr[1][1][0] = 8   arr[1][1][1] = 9
        arr[1][2][0] = 10   arr[1][2][1] = 11
    */

    int arr[2][3][2] = {{{1, 2}, {3, 4}, {5, 6}}, {{7, 8}, {9, 10}, {11, 12}}};

    // Loop through the depth
    for (int i = 0; i < 2; ++i)
    {
        // Loop through the
        // rows of each depth
        for (int j = 0; j < 3; ++j)
        {
            // Loop through the
            // columns of each row
            for (int k = 0; k < 2; ++k)
                printf("arr[%i][%i][%i] = %d   ", i, j, k, arr[i][j][k]);
            printf("\n");
        }
        // printf("\n");
    }
}

int main()
{
    twoDArr();

    threeDArr();

    return 0;
}
