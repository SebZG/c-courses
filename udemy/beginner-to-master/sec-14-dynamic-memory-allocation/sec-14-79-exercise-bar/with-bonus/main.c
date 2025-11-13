#include <stdio.h>
#include <stdlib.h>

struct customer_t
{
    char fName[61];
    char lName[61];
    char pNum[19];
};

typedef struct customer_t customer;

void getCustomerData(customer *cPtrHead, int customerIndexNumber);
void printAllCustomers(customer *cPtrHead, int numOfCustomers);

int main()
{
    int numOfCustomers;
    int i;
    customer *arrOfCustomers;

    printf("How many customers are allowed tonight?: ");
    fflush(stdin);
    scanf("%d", &numOfCustomers);

    // dynamically allocate an array to hold numOfCustomers customer_t elements
    arrOfCustomers = (customer *)malloc(numOfCustomers * sizeof(customer));

    if (arrOfCustomers == NULL)
    {
        printf("ERROR: Failed to allocate memory");
    }
    else
    {
        printf("Success: %d bytes were allocated", numOfCustomers * sizeof(customer));
    }

    // populate array
    for (i = 0; i < numOfCustomers; i++)
    {
        getCustomerData(arrOfCustomers, i);
    }

    printAllCustomers(arrOfCustomers, numOfCustomers);

    free(arrOfCustomers);

    return 0;
}

void getCustomerData(customer *cPtrHead, int customerIndexNumber)
{
    // get customer data+
    printf("\n\nCustomer Number: %d", customerIndexNumber);

    printf("\nFirst Name: ");
    fflush(stdin);
    scanf("%s", &cPtrHead[customerIndexNumber].fName);

    printf("Last Name: ");
    fflush(stdin);
    scanf("%s", &cPtrHead[customerIndexNumber].lName);

    printf("Phone Number: ");
    fflush(stdin);
    scanf("%s", &cPtrHead[customerIndexNumber].pNum);
}

void printAllCustomers(customer *cPtrHead, int numOfCustomers)
{
    int i;

    printf("\n\nPrinting Customers:");

    for (i = 0; i < numOfCustomers; i++)
    {
        printf("\n\nCustomer Number: %d", i);
        printf("\nFirst Name: %s", cPtrHead[i].fName);
        printf("\nLast Name: %s", cPtrHead[i].lName);
        printf("\nPhone Number: %s", cPtrHead[i].pNum);
    }

    printf("\n");
}
