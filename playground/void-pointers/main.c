#include <stdio.h>

typedef enum DATA_TYPE
{
    INT,
    FLOAT,
} data_type_t;

void printValue(void *ptr, data_type_t type);

int main()
{
    int dec = 33;
    printValue(&dec, INT);

    float flt = 3.14;
    printValue(&flt, FLOAT);

    return 0;
}

void printValue(void *ptr, data_type_t type)
{
    if (type == INT)
    {
        printf("Value: %d\n", *(int *)ptr);
    }
    else if (type == FLOAT)
    {
        printf("Value: %f\n", *(float *)ptr);
    }
}
