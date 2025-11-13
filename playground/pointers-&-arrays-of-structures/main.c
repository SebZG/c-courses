#include <stdio.h>
#include <string.h>

struct dairyFreeMilk
{
    int DFM_ID;
    char primaryMaterial[31];
};

typedef struct dairyFreeMilk DFM_Bottle;

int main()
{
    DFM_Bottle DFM_Btl[3];
    DFM_Bottle *DFM_ptr;

    DFM_Btl[0].DFM_ID = 100;
    strcpy(DFM_Btl[0].primaryMaterial, "Almond");

    printf("DFM_Btl[0].DFM_ID: %d\n", DFM_Btl[0].DFM_ID);
    printf("DFM_Btl[0].primaryMaterial: %s\n\n", DFM_Btl[0].primaryMaterial);

    DFM_ptr = &DFM_Btl[1];

    DFM_ptr->DFM_ID = 101;
    strcpy(DFM_ptr->primaryMaterial, "Coconut");

    printf("DFM_ptr->DFM_ID: %d\n", DFM_ptr->DFM_ID);
    printf("DFM_ptr->primaryMaterial: %s\n\n", DFM_ptr->primaryMaterial);

    DFM_ptr++;

    (*DFM_ptr).DFM_ID = 102;
    strcpy((*DFM_ptr).primaryMaterial, "Oats");

    printf("(*DFM_ptr).DFM_ID: %d\n", (*DFM_ptr).DFM_ID);
    printf("(*DFM_ptr).primaryMaterial: %s\n\n", (*DFM_ptr).primaryMaterial);

    return 0;
}