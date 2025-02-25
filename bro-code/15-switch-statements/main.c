#include <stdio.h>

int main()
{
    // switch = A more efficient alternative to using "else if" statements
    //          allows a value to be tested for equality against many cases

    char grade;

    printf("\nEnter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
        case 'A':
            printf("You did great!");
            break;
        case 'B':
            printf("You did okay.");
            break;
        case 'C':
            printf("You need to study harder.");
            break;
        default:
            printf("You failed.");
    }

    return 0;
}