#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[2][2] = {{'A', 'S'},
                      {'D', 'F'}};

    int i, j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

    //arr[0][0] = 12;
    //arr[0][1] = 24;
    //arr[1][0] = 15;
    //arr[1][1] = 30;

    //printf("arr[0][0]:%d", arr[0][0]);
    //printf(" arr[0][1]:%d", arr[0][1]);
    //printf("\narr[1][0]:%d", arr[1][0]);
    //printf(" arr[1][1]:%d", arr[1][1]);



    return 0;
}
