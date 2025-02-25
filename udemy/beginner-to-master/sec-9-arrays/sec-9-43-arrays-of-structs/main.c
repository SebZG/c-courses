#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct catType
{
    unsigned char catAgeInYears;
    char catName[51];
};

typedef struct catType cat_t;

int main ()
{
    cat_t cat[3];
    int count;

    cat[0].catAgeInYears = 5;
    strcpy(cat[0].catName, "Freckles");

    cat[1].catAgeInYears = 3;
    strcpy(cat[1].catName, "Cuddles");

    cat[2].catAgeInYears = 1;
    strcpy(cat[2].catName, "Sniffles");

    //reading all the data for hard working people
    printf("\ncat[0].catAgeInYears: %d\n", cat[0].catAgeInYears);
    printf("cat[0].catName: %s\n\n", cat[0].catName);

    printf("cat[1].catAgeInYears: %d\n", cat[1].catAgeInYears);
    printf("cat[1].catName: %s\n\n", cat[1].catName);

    printf("cat[2].catAgeInYears: %d\n", cat[2].catAgeInYears);
    printf("cat[2].catName: %s\n\n", cat[2].catName);

    printf("\n\n");

    //reading data for clever people
    for(count = 0; count<3; count++)
    {
        printf("\ncat[%d].catAgeInYears: %d\n", count , cat[count].catAgeInYears);
        printf("cat[%d].catName: %s\n\n", count , cat[count].catName);
    }



    return 0;
}

