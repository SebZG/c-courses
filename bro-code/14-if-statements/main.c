#include <stdio.h>

int main()
{
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are now signed up!\n ");
    }
    else if (age < 0)
    {
        printf("You are not born yet!\n ");
    }
    else
    {
        printf("You are too young!\n ");
    }

    return 0;
}