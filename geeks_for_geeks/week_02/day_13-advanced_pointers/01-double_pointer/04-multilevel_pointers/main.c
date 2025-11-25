#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr1 = &num;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    // accessing values
    printf("Value of num: %d\n", num);
    printf("Value using single pointer: %d\n", *ptr1);
    printf("Value using double pointer: %d\n", **ptr2);
    printf("Value using tripple pointer: %d\n", ***ptr3);

    return 0;
}
