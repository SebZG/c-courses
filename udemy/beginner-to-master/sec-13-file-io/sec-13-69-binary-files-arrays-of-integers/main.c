#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* filePtr;
    int funInts[4] = {55,22,33,11};
    int readBuffer[4];

    //=====Write something to a binary file=====//

    //open file for writing (create)
    //w for write and b for binary
    filePtr = fopen("test.bin", "wb");

    //funInts is a pointer to a block of memory that is to be written
    //sizeof(funInts[0]) is the size of one array element (4 bytes in this case)
    //4 is how many array elements are to be written
    //filePtr is where those elements are written
    fwrite(funInts, sizeof(funInts[0]), 4, filePtr);

    fclose(filePtr);

    //=====Read from a binary file=====//

    //open file for reading
    //r for read and b for binary
    filePtr = fopen("test.bin", "rb");

    //readBuffer is a pointer to a block of memory that the read data is going to be written to
    //sizeof(readBuffer[0]) is the size of one array element (4 bytes in this case)
    //4 is how many array elements are to be read
    //filePtr is where those elements are read from
    fread(readBuffer, sizeof(readBuffer[0]), 4, filePtr);

    //print whatever we read
    printf("%d\n",readBuffer[0]);
    printf("%d\n",readBuffer[1]);
    printf("%d\n",readBuffer[2]);
    printf("%d\n",readBuffer[3]);

    fclose(filePtr);

    return 0;
}

