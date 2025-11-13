#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    number = 0;

    while (number < 10)
    {
        number = number + 1;
        printf("number = %d \n", number);
    }

    return 0;
}
