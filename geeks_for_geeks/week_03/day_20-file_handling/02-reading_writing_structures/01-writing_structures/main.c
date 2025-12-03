// C program for writing
// struct to file
#include <stdio.h>
#include <stdlib.h>

// a struct to be read and written
struct person
{
    int id;
    char fname[20];
    char lname[20];
};

int main()
{
    FILE *outfile;

    // open file for writing
    outfile = fopen("person.bin", "wb");
    if (outfile == NULL)
    {
        fprintf(stderr, "\nError opened file\n");
        exit(1);
    }

    struct person input1 = {1, "rohan", "sharma"};

    // write struct to file
    int flag = 0;
    flag = fwrite(&input1, sizeof(struct person), 1, outfile);
    if (flag)
    {
        printf("Contents of the structure written "
               "successfully");
    }
    else
        printf("Error Writing to File!");

    // close file
    fclose(outfile);

    return 0;
}
