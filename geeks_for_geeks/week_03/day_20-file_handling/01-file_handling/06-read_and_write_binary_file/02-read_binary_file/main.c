#include <stdio.h>
#include <stdlib.h>

// Structure that store
// binary file data
struct threeNum
{
    int n1, n2, n3;
};

int main()
{
    int n;
    struct threeNum num;
    FILE *fptr;
    fptr = fopen("binaryFile.bin", "rb");

    // Read the data from binary
    // file and print that data
    fread(&num, sizeof(struct threeNum), 1, fptr);
    printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    fclose(fptr);
    return 0;
}
