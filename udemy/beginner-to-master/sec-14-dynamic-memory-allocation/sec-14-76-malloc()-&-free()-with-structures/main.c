#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct PL_bttl_type
{
    unsigned short mlCapacity;
    char material[51];
};

typedef struct PL_bttl_type btl;

int main()
{
    int numOfBottles;
    int i;
    btl *bottlePtr;

    printf("How many bottles do you want?:");
    fflush(stdin);
    scanf("%d", &numOfBottles);

    // dynamically allocate memory to hold numOfBottles btl elements
    bottlePtr = (btl *)malloc(numOfBottles * sizeof(btl));

    if (bottlePtr == NULL)
    {
        printf("You tried to allocate too much memory, be lovely");
        return -1;
    }

    for (i = 0; i < numOfBottles; i++)
    {
        bottlePtr[i].mlCapacity = (i * 3) + 1;
        strcpy(bottlePtr[i].material, "PET");
    }

    for (i = 0; i < numOfBottles; i++)
    {
        printf("\nElement %d: %d ml ", i, bottlePtr[i].mlCapacity);
        printf("and %s material", bottlePtr[i].material);
    }

    printf("\nPress <Enter> to free the memory");
    fflush(stdin);
    getchar();

    free(bottlePtr);

    return 0;
}
