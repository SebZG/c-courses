#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE* filePtr;
    int rNum;
    char line[200];
    char count;

    //open file in append mode
    filePtr = fopen("Many Random Numbers.txt", "a");

    //initialise random number generator
    srand((unsigned) time(0));//time function uses
                              //current time as seed
                              //for the random number


    for(count=0; count<100; count++)
    {
        //generate random number from 0 to 32
        rNum = rand() % 33;
        printf("The random number generated is: %d\n", rNum);

        //printf but for file, same operation but you have
        //to specify the file in the beginning, "filePtr"
        fprintf(filePtr, "\n%d" ,rNum);
    }


    fclose(filePtr);

    return 0;
}

