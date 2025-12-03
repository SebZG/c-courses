// Create a File

// The fopen() function can not only open a file but also can create a file if it does not exist already.
// For that, we have to use the modes that allow the creation of a file if not found such as
// w, w+, wb, wb+, a, a+, ab, and ab+.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // File pointer
    FILE *fptr;

    // Creating file using fopen()
    // with access mode "w"
    fptr = fopen("file.txt", "w");

    // checking if the file is created
    if (fptr == NULL)
        printf("The file is not opened.");
    else
        printf("The file is created Successfully.");

    return 0;
}
