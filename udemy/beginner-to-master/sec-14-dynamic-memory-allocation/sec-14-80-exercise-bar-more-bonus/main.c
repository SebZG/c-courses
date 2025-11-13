#include <stdio.h>
#include <stdlib.h>

struct customer_t
{
    char fName[61];
    char lName[61];
    char pNum[18];
};

typedef struct customer_t customer;

void getCustomerData(customer *cPtrHead, int customerIndexNumber);
void printAllCustomers(customer *cPtrHead, int numOfCustomers);

int main()
{
    int numOfCustomers = 0;
    char instruction;
    customer *arrOfCustomers;

    while (1 == 1)
    {
        // ask if we want to enter data for another customer or exit
        // on exit all information for all customers is printed
        printf("\nEnter Y to enter a new customer or Q to exit: ");
        fflush(stdin);
        scanf("%c", &instruction);

        if (instruction == 'Y')
        {
            numOfCustomers++;

            // if this is the first customer
            if (numOfCustomers == 1)
            {
                // allocate space for new customer
                arrOfCustomers = (customer *)malloc(numOfCustomers * sizeof(customer));

                if (arrOfCustomers == NULL)
                {
                    printf("ERROR: Failed to allocate memory");
                }
                else
                {
                    printf("Success: %d bytes were allocated", numOfCustomers * sizeof(customer));
                }
            }
            else
            {
                // allocate space for new customer (realloc)
                arrOfCustomers = (customer *)realloc(arrOfCustomers, numOfCustomers * sizeof(customer));

                if (arrOfCustomers == NULL)
                {
                    printf("ERROR: Failed to allocate memory");
                }
                else
                {
                    printf("Success: %d bytes were allocated", numOfCustomers * sizeof(customer));
                }
            }

            getCustomerData(arrOfCustomers, numOfCustomers - 1); // populate customer at index-1
        }
        else if (instruction == 'Q')
        {
            printAllCustomers(arrOfCustomers, numOfCustomers);
            break;
        }
        else
        {
            printf("ERROR: Wrong Instruction");
        }
    }

    printf("\n");

    free(arrOfCustomers);

    return 0;
}

void getCustomerData(customer *cPtrHead, int customerIndexNumber)
{
    // get customer data
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
}