#include <stdio.h>
#include <stdlib.h>

int main()
{
    int varCaseNo = 59;

    switch(varCaseNo)
    {
    case 0:
        printf("Case 0 was selected");
        break;

    case 1:
        printf("Case 1 was selected");
        break;

    case 3:
        printf("Case 3 was selected");
        break;

    case 59:
        printf("Case 59 was selected");
        printf("\nVeeery happy statement");
        printf("\nit really likes the number 59");
        break;

    default:
        printf("Incorrect input");
        break;
    }

    printf("\n");

    return 0;
}
