#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A = 10;
    int B = 5;
    int result;

    int *ptrA;
    int *ptrB;

    //pointer initialisation
    ptrA = &A;
    ptrB = &B;

    result = *ptrA / *ptrB;

    printf("\nDe-referencing ptrA: %d", *ptrA);
    printf("\nDe-referencing ptrB: %d", *ptrB);

    printf("\n\nResult: %d\n", result);

    return 0;
}
