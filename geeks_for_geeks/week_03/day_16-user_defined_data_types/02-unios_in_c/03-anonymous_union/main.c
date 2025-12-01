#include <stdio.h>

// Define a union with
// different data types
struct Student
{
    int rollNo;

    // Anonymous union
    union
    {
        int marks;
    } performance;
};

int main()
{

    // Declare a structure variable
    struct Student abc;

    abc.rollNo = 21;
    printf("%d\n", abc.rollNo);

    // Assign and print the member of anonymous union
    abc.performance.marks = 91;
    printf("%d", abc.performance.marks);

    return 0;
}
