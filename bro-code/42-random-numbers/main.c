#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // pseudo random numbers = A set of values or elements that are statistically random
    //                         (Don't use these for any sort of cryptographic security)

    srand(time(0));

    int number1 = (rand() % 6) + 1;  // 1 - 6
    int number2 = (rand() % 6) + 1;  // 1 - 6

    printf("%d\n", number1);
    printf("%d\n", number2);

    return 0;
}