#include <stdio.h>
#include <stdlib.h>

int main()
{

    // File pointer to store the
    // value returned by fopen
    FILE *fptr;

    // Opening the file in read mode
    fptr = fopen("filename.txt", "r");

    // checking if the file is
    // opened successfully
    if (fptr == NULL)
    {
        printf("The file is not opened.");
    }

    return 0;
}
