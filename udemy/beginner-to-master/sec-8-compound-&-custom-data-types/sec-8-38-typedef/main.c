#include <stdio.h>
#include <string.h>

int main()
{

    struct products
    {
        unsigned int productID;
        float priceInUSD;
        unsigned int unitsInStock;
    };

    typedef struct products product_t; // typedef: keyword // struct products: type of the new data type // product_t: name of the new data type

    product_t P0; // instantiate P0
    product_t P1; // instantiate P1
    product_t P2; // instantiate P2
    product_t P3; // instantiate P3


    /* initialise products */

    P0.productID = 1001;
    P0.priceInUSD = 30.00;
    P0.unitsInStock = 55;

    P1.productID = 1033;
    P1.priceInUSD = 91.00;
    P1.unitsInStock = 23;

    P2.productID = 1404;
    P2.priceInUSD = 55.00;
    P2.unitsInStock = 68;

    P3.productID = 1500;
    P3.priceInUSD = 155.39;
    P3.unitsInStock = 18;


    /* read products */

    printf("P0.ProductID: %d\n", P0.productID);
    printf("P0.priceInUSD: %0.2f\n", P0.priceInUSD);
    printf("P0.unitsInStock: %d\n\n", P0.unitsInStock);

    printf("P1.ProductID: %d\n", P1.productID);
    printf("P1.priceInUSD: %0.2f\n", P1.priceInUSD);
    printf("P1.unitsInStock: %d\n\n", P1.unitsInStock);

    printf("P2.ProductID: %d\n", P2.productID);
    printf("P2.priceInUSD: %0.2f\n", P2.priceInUSD);
    printf("P2.unitsInStock: %d\n\n", P2.unitsInStock);

    printf("P3.ProductID: %d\n", P3.productID);
    printf("P3.priceInUSD: %0.2f\n", P3.priceInUSD);
    printf("P3.unitsInStock: %d\n\n", P3.unitsInStock);

    return 0;
}
