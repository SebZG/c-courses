#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int count;

    // for(count=0; count<150; count++)
    // {
    //     a[count] = 10 + count;
    // }

    // printf("\n\n");

    for(count=0; count<12; count++)
    {
        printf("Array element %d: %d lives in 0x%x\n", count, a[count], &a[count]);
    }

//    printf("\n\n");
//
//    printf("\nArray element 0: %d", a[0]);
//    printf("\nArray element 1: %d", a[1]);
//    printf("\nArray element 2: %d", a[2]);
//    printf("\nArray element 3: %d", a[3]);
//    printf("\nArray element 4: %d", a[4]);
//    printf("\nArray element 5: %d", a[5]);
//    printf("\nArray element 6: %d", a[6]);
//    printf("\nArray element 7: %d", a[7]);
//    printf("\nArray element 8: %d", a[8]);
//    printf("\nArray element 9: %d", a[9]);
//    printf("\nArray element 10: %d", a[10]);
//    printf("\nArray element 11: %d", a[11]);
//
//    printf("\n\n");
//    printf("\nArray element 0: %d lives in 0x%x", a[0], &a[0]);
//    printf("\nArray element 1: %d lives in 0x%x", a[1], &a[1]);
//    printf("\nArray element 2: %d lives in 0x%x", a[2], &a[2]);
//    printf("\nArray element 3: %d lives in 0x%x", a[3], &a[3]);
//    printf("\nArray element 4: %d lives in 0x%x", a[4], &a[4]);
//    printf("\nArray element 5: %d lives in 0x%x", a[5], &a[5]);
//    printf("\nArray element 6: %d lives in 0x%x", a[6], &a[6]);
//    printf("\nArray element 7: %d lives in 0x%x", a[7], &a[7]);
//    printf("\nArray element 8: %d lives in 0x%x", a[8], &a[8]);
//    printf("\nArray element 9: %d lives in 0x%x", a[9], &a[9]);
//    printf("\nArray element 10: %d lives in 0x%x", a[10], &a[10]);
//    printf("\nArray element 11: %d lives in 0x%x", a[11], &a[11]);

    return 0;
}

