#include <stdio.h>
#include <stdlib.h>

struct customer_t
{
    char fName[61];
    char lName[61];
    char pNum[19];
};

typedef struct customer_t customer;

int main()
{
    int numOfCustomers;
    int i;
    customer *arrOfCustomers;

    printf("How many customers are allowed tonight?:");
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
        // get customer data+
        printf("\n\nCustomer Number: %d", i);

        printf("\nFirst Name:");
        fflush(stdin);
        scanf("%s", &arrOfCustomers[i].fName);

        printf("Last Name:");
        fflush(stdin);
        scanf("%s", &arrOfCustomers[i].lName);

        printf("Phone Number:");
        fflush(stdin);
        scanf("%s", &arrOfCustomers[i].pNum);
    }

    printf("\n\nPrinting Customers:");

    // read array
    for (i = 0; i < numOfCustomers; i++)
    {
        printf("\n\nCustomer Number: %d", i);
        printf("\nFirst Name:%s", arrOfCustomers[i].fName);
        printf("\nLast Name:%s", arrOfCustomers[i].lName);
        printf("\nPhone Number:%s", arrOfCustomers[i].pNum);
    }

    free(arrOfCustomers);

    return 0;
}
