#include <stdio.h>

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
    chocBar_t *cbPtr;

    CB0.chocBarID = 000;
    CB0.price = 0.39;
    CB0.calories = 155;

    printf("\nCB0.chocBarID: %d", CB0.chocBarID);
    printf("\nCB0.price: %f", CB0.price);
    printf("\nCB0.chocBarID: %d\n", CB0.calories);

    cbPtr = &CB1;

    cbPtr->chocBarID = 001;
    cbPtr->price = 1.33;
    cbPtr->calories = 659;

    printf("\ncbPtr->chocBarID: %d", cbPtr->chocBarID);
    printf("\ncbPtr->price: %f", cbPtr->price);
    printf("\ncbPtr->calories: %d\n", cbPtr->calories);

    cbPtr = &CB2;

    (*cbPtr).chocBarID = 002;
    (*cbPtr).price = 0.95;
    (*cbPtr).calories = 335;

    printf("\n(*cbPtr).chocBarID: %d", (*cbPtr).chocBarID);
    printf("\n(*cbPtr).price: %f", (*cbPtr).price);
    printf("\n(*cbPtr).calories: %d\n", (*cbPtr).calories);

    return 0;
}