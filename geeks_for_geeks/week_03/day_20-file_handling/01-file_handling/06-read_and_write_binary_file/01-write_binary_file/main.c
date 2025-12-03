#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
    int n1, n2, n3;
};

int main()
{
    int n = 1;

    // Structure variable declared.
    struct threeNum num;
    FILE *fptr;
    fptr = fopen("binaryFile.bin", "wb");
    int flag = 0;
    num.n1 = n;
    num.n2 = 5 * n;
    num.n3 = 5 * n + 1;

    // Write the Structure data
    // to binary file.
    flag = fwrite(&num, sizeof(struct threeNum), 1, fptr);

    // Checking if the data is written.
    if (!flag)
        printf("Write Operation Failure");
    else
        printf("Write Operation Successful");
    fclose(fptr);
    return 0;
}
