#include <stdio.h>
#include <stdlib.h>

int intAdder(int a, int b);
int intMultiplier(int a, int b);

int main()
{
    int inputA;
    int inputB;
    int addResult;
    int multiplyResult;

    inputA = 30;
    inputB = 10;

    addResult = intAdder(inputA, inputB);
    printf("inputA + inputB = %d", addResult);

    multiplyResult = intMultiplier(inputA, inputB);
    printf("\ninputA * inputB = %d", multiplyResult);

    return 0;
}

int intAdder(int a, int b)
{
    int resultAdd;  // live in the stack
                    // during execution of this function

    resultAdd = a + b;

    return resultAdd;
}

int intMultiplier(int a, int b)
{
    int resultMultiply;

    resultMultiply = a * b;

    return resultMultiply;
}
