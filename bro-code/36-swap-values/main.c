#include <stdio.h>
#include <string.h>

int main()
{
    // char temp;
    // char x = 'X';
    // char y = 'Y';
    // temp = x;
    // x = y;
    // y = temp;
    // printf("x = %c\n", x);
    // printf("y = %c\n", y);

    char temp[10];
    char x[10] = "water";
    char y[10] = "lemonade";
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);
    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}