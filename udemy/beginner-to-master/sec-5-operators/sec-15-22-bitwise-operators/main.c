#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed char x = 2;
    signed char answer;

    answer = x<<1;

    printf("answer = %x\n", answer);

    return 0;
}
