#include <stdio.h>
#include <string.h>

void multiply2Numbers(int x, int y); // function declaration or function prototype

int main()
{
    int numberA;
    int numberB;

    numberA = 24;
    numberB = 4;

    multiply2Numbers(numberA, numberB);

    printf("So now you know the result!\n");

    return 0;
}

void multiply2Numbers(int x, int y) // definition
{
    int result;

    result = x*y;

    printf("The result of %d*%d is %d\n", x, y, result);
}

