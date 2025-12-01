#include <stdio.h>

union A
{
    int x;
    char y;
};

union B
{
    int arr[10];
    char y;
};


int main()
{

    // Finding size using sizeof() operator
    printf("Sizeof A: %ld\n", sizeof(union A));
    printf("Sizeof B: %ld\n", sizeof(union B));
    return 0;
}
