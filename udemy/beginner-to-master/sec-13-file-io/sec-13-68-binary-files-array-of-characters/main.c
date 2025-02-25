#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* filePtr;
    char funWords[51] = "fun fun fun fun";
    char readBuffer[51];

    //=====Write something to a binary file=====//

    //open file for writing (create)
    //w for write and b for binary
    filePtr = fopen("test.bin", "wb");

    //write funWords to file
    fwrite(funWords,sizeof(funWords),1,filePtr);

    fclose(filePtr);

    //=====Read from a binary file=====//

    //open file for reading
    //r for read and b for binary
    filePtr = fopen("test.bin", "rb");

    //read file, only one lot of up to 51 characters
    fread(readBuffer,sizeof(readBuffer),1,filePtr);

    //print whatever we read (which was one string)
    printf("%s\n",readBuffer);

    fclose(filePtr);

    return 0;
}

