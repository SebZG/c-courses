#include <stdio.h>
#include <stdlib.h>

struct ChocBar
{
    unsigned int chocBarID;
    float price;
    unsigned int calories;
};

typedef struct ChocBar chocBar_t;

int main()
{
    chocBar_t CB0;
    chocBar_t CB1;
    chocBar_t CB2;
    chocBar_t CB3;
    chocBar_t* cbPtr;

    CB0.chocBarID = 3395;
    CB0.price = 0.39;
    CB0.calories = 155;

    printf("\nCB0.chocBarID: %d\n", CB0.chocBarID);
    printf("CB0.price: %f\n", CB0.price);
    printf("CB0.calories: %d\n", CB0.calories);

    cbPtr = &CB1;

    cbPtr->chocBarID = 1136;
    cbPtr->price = 1.33;
    cbPtr->calories = 659;

    printf("\ncbPtr->chocBarID: %d\n", cbPtr->chocBarID);
    printf("cbPtr->price: %f\n", cbPtr->price);
    printf("cbPtr->calories: %d\n", cbPtr->calories);

    cbPtr = &CB2;

    (*cbPtr).chocBarID = 5112;
    (*cbPtr).price = 0.95;
    (*cbPtr).calories = 335;

    printf("\n(*cbPtr).chocBarID: %d\n", (*cbPtr).chocBarID);
    printf("(*cbPtr).price: %f\n", (*cbPtr).price);
    printf("(*cbPtr).calories: %d\n", (*cbPtr).calories);


    return 0;
}
