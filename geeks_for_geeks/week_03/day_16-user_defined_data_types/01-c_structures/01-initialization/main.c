#include <stdio.h>

// Defining a structure to represent a student
struct Student
{
    char name[50];
    int age;
    float grade;
};

int main()
{

    // Declaring and initializing a structure variable
    struct Student s1 = {"Rahul", 20, 18.5};

    // Designated Initializing another structure
    struct Student s2 = {.age = 18, .name = "Vikas", .grade = 22};

    // Accessing structure members
    printf("%s\t%d\t%.2f\n", s1.name, s1.age, s1.grade);
    printf("%s\t%d\t%.2f\n", s2.name, s2.age, s2.grade);

    return 0;
}
