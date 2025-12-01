#include <stdio.h>

// Define a union with
// different data types
union Student
{
    int rollNo;
    union Academic
    {
        int marks;
    } performance;
};

int main()
{

    // Declare a union variable
    union Student abc;

    // Assign and print the
    // roll number
    abc.rollNo = 21;
    printf("%d\n", abc.rollNo);

    // Assign and print the
    // member of inner union
    abc.performance.marks = 91;
    printf("%d", abc.performance.marks);
    return 0;
}
