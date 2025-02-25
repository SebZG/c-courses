#include <stdio.h>
#include <stdlib.h>
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
    DFM_Bottle* DFM_ptr;

    // initalise struct
    DFM_Btl[0].DFM_ID = 10000;
    strcpy(DFM_Btl[0].primaryMaterial, "Almond");

    // read struct
    printf("DFM_Btl[0].DFM_ID: %d\n", DFM_Btl[0].DFM_ID);
    printf("DFM_Btl[0].primaryMaterial: %s\n", DFM_Btl[0].primaryMaterial);

    // point DFM_ptr to &DFM_Btl[1]
    DFM_ptr = &DFM_Btl[1];

    // initalise struct
    DFM_ptr->DFM_ID = 10001;
    strcpy(DFM_ptr->primaryMaterial, "Coconut");

    // read struct
    printf("DFM_ptr->DFM_ID: %d\n", DFM_ptr->DFM_ID);
    printf("DFM_ptr->primaryMaterial: %s\n", DFM_ptr->primaryMaterial);

    DFM_ptr++;

    // initalise struct
    (*DFM_ptr).DFM_ID = 10002;
    strcpy((*DFM_ptr).primaryMaterial, "Oats");

    // read struct
    printf("(*DFM_ptr).DFM_ID: %d\n", (*DFM_ptr).DFM_ID);
    printf("(*DFM_ptr).primaryMaterial: %s\n", (*DFM_ptr).primaryMaterial);

    return 0;
}
