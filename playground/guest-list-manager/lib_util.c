#include "lib_util.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


node *createGuest(float standardPrice, float consessionPrice)
{
    char fName[50] = {0};
    char lName[50] = {0};
    bool isConsession = false;
    bool hasPaid = false;
    float amountPaid = 0.00f;

    char inputTmp[10] = {0};
    char c;

    node *newGuest = (node *)malloc(sizeof(node));
    if (!newGuest)
    {
        printf("Failed to allocate memory for new guest");
        return NULL;
    }

    printf("\nGuest's first name: ");
    // snprintf()
    if (scanf("%49s", fName) != 1)
    {
        free(newGuest);
        return NULL;
    }
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }

    printf("\nGuest's last name: ");
    if (scanf("%49s", lName) != 1)
    {
        free(newGuest);
        return NULL;
    }
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }

    int validInput = 0;
    do
    {
        printf("\nIs concession? (true/false): ");
        if (scanf("%9s", inputTmp) != 1)
        {
            while ((c = getchar()) != '\n' && c != EOF)
            {
            }
            continue;
        }
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }

        if (strcmp(inputTmp, "true") == 0)
        {
            isConsession = true;
            validInput = 1;
        }
        else if (strcmp(inputTmp, "false") == 0)
        {
            isConsession = false;
            validInput = 1;
        }
        else
        {
            printf("Invalid input. Please enter 'true' or 'false'.\n");
        }
    } while (!validInput);

    validInput = 0;
    do
    {
        printf("\nHas paid? (true/false): ");
        if (scanf("%9s", inputTmp) != 1)
        {
            while ((c = getchar()) != '\n' && c != EOF)
            {
            }
            continue;
        }
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }

        if (strcmp(inputTmp, "true") == 0)
        {
            hasPaid = true;
            validInput = 1;
            isConsession ? (amountPaid = consessionPrice) : (amountPaid = standardPrice);
        }
        else if (strcmp(inputTmp, "false") == 0)
        {
            hasPaid = false;
            validInput = 1;
            amountPaid = 0;
        }
        else
        {
            printf("Invalid input. Please enter 'true' or 'false'.\n");
        }
    } while (!validInput);

    strcpy(newGuest->fName, fName);
    strcpy(newGuest->lName, lName);
    newGuest->isConsession = isConsession;
    newGuest->hasPaid = hasPaid;
    newGuest->amountPaid = amountPaid;

    newGuest->next = NULL;

    return newGuest;
}

node *addGuestToHead(node *head, node *newNode)
{
    newNode->next = head;
    return newNode;
}

node *autoPopList(node *head)
{
    node *newGuest;
    // node *tmp = head;

    newGuest = (node *)malloc(sizeof(node));

    strcpy(newGuest->fName, "fName1");
    strcpy(newGuest->lName, "lName1");
    newGuest->isConsession = true;
    newGuest->hasPaid = true;
    newGuest->amountPaid = 15.00f;
    newGuest->next = NULL;
    head = addGuestToHead(head, newGuest);

    newGuest = (node *)malloc(sizeof(node));

    strcpy(newGuest->fName, "fName2");
    strcpy(newGuest->lName, "lName2");
    newGuest->isConsession = true;
    newGuest->hasPaid = false;
    newGuest->amountPaid = 0.00f;
    newGuest->next = NULL;
    head = addGuestToHead(head, newGuest);

    newGuest = (node *)malloc(sizeof(node));

    strcpy(newGuest->fName, "fName3");
    strcpy(newGuest->lName, "lName3");
    newGuest->isConsession = false;
    newGuest->hasPaid = true;
    newGuest->amountPaid = 20.00f;
    newGuest->next = NULL;
    head = addGuestToHead(head, newGuest);

    newGuest = (node *)malloc(sizeof(node));

    strcpy(newGuest->fName, "fName4");
    strcpy(newGuest->lName, "lName4");
    newGuest->isConsession = false;
    newGuest->hasPaid = true;
    newGuest->amountPaid = 20.00f;
    newGuest->next = NULL;
    head = addGuestToHead(head, newGuest);

    newGuest = (node *)malloc(sizeof(node));

    strcpy(newGuest->fName, "fName5");
    strcpy(newGuest->lName, "lName5");
    newGuest->isConsession = false;
    newGuest->hasPaid = true;
    newGuest->amountPaid = 20.00f;
    newGuest->next = NULL;
    head = addGuestToHead(head, newGuest);

    newGuest = (node *)malloc(sizeof(node));

    strcpy(newGuest->fName, "fName6");
    strcpy(newGuest->lName, "lName6");
    newGuest->isConsession = false;
    newGuest->hasPaid = true;
    newGuest->amountPaid = 20.00f;
    newGuest->next = NULL;
    head = addGuestToHead(head, newGuest);

    return head;
}

node *deleteHead(node *head)
{
    node *tmp = head;
    // node *nodeToDel;

    head = head->next;
    free(tmp);

    return head;
}

void deleteGuestFromPosition(node *head, int pos)
{
    node *tmp = head;
    node *guestToDel;

    if (pos == 0)
    {
        printf("\nCannot delete node from position 0");
    }
    else if (pos == 1)
    {
        guestToDel = tmp->next;
        tmp->next = guestToDel->next;
        free(guestToDel);
        return;
    }
    else
    {
        for (int i = 1; i < pos; i++)
        {
            tmp = tmp->next;
            if (tmp->next != NULL)
            {
                guestToDel = tmp->next;
                if (i == (pos - 1))
                {
                    tmp->next = guestToDel->next;
                    free(guestToDel);
                    return;
                }
            }
            else
            {
                printf("\nCannot delete something beyond the end of the list");
                return;
            }
        }
    }
}

node *deleteGuest(node *head)
{
    if (head == NULL)
    {
        printf("\nNo guests in the list.\n");
        return head;
    }

    node *tmp = head;
    char fName[50];
    char lName[50];
    int indexCount = 0;
    int c;

    printf("\nGuest's first name: ");
    if (scanf("%49s", fName) != 1)
    {
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }
        return head;
    }

    printf("\nGuest's last name: ");
    if (scanf("%49s", lName) != 1)
    {
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }
        return head;
    }

    while (tmp != NULL)
    {
        if (strcmp(tmp->fName, fName) == 0 && strcmp(tmp->lName, lName) == 0)
        {
            printf("\nGuest found.");
            break;
        }
        tmp = tmp->next;
        indexCount++;
    }

    if (tmp == NULL)
    {
        printf("\nGuest not found.\n");
        return head;
    }

    if (indexCount == 0)
    {
        head = deleteHead(head);
        printf("\nGuest deleted.\n");
        return head;
    }

    deleteGuestFromPosition(head, indexCount);
    printf("\nGuest deleted.\n");
    return head;
}

void printStats(node *head, float standardPrice, float consessionPrice)
{
    node *tmp = head;

    int totalGuests = 0;
    float totalPaid = 0;
    float totalOwed = 0;

    if (tmp == NULL)
    {
        printf("\nNo guests in the list.\n");
        return;
    }

    while (tmp != NULL)
    {
        totalGuests++;

        if (!tmp->hasPaid)
        {
            if (tmp->isConsession)
            {
                totalOwed += consessionPrice;
            }
            else
            {
                totalOwed += standardPrice;
            }
        }
        else
        {
            totalPaid += tmp->amountPaid;
        }

        tmp = tmp->next;
    }
    printf("\n--------------------------------\n");
    printf("Total GUESTS:   %15d\n", totalGuests);
    printf("Total PAID:     %15.2f\n", totalPaid);
    printf("Total OWED:     %15.2f\n", totalOwed);
    printf("Total EXPECTED: %15.2f\n", totalPaid + totalOwed);
    printf("--------------------------------\n");
}

void printAllData(node *head, float standardPrice, float consessionPrice)
{
    node *tmp = head;

    int totalGuests = 0;
    float totalPaid = 0;
    float totalOwed = 0;

    char isTrue[] = "true";
    char isFalse[] = "false";

    if (tmp == NULL)
    {
        printf("\nNo guests in the list.\n");
        return;
    }

    printf("\n--------------------------------");
    while (tmp != NULL)
    {
        printf("\nFirst name:     %15s", tmp->fName);
        printf("\nLast name:      %15s", tmp->lName);
        printf("\nIs concession:  %15s", tmp->isConsession ? isTrue : isFalse);
        printf("\nHas paid:       %15s", tmp->hasPaid ? isTrue : isFalse);
        printf("\nAmount paid:    %15.2f\n", tmp->amountPaid);

        totalGuests++;

        if (!tmp->hasPaid)
        {
            if (tmp->isConsession)
            {
                totalOwed += consessionPrice;
            }
            else
            {
                totalOwed += standardPrice;
            }
        }
        else
        {
            totalPaid += tmp->amountPaid;
        }

        tmp = tmp->next;
    }
    printf("--------------------------------\n");
    printf("Total GUESTS:   %15d\n", totalGuests);
    printf("Total PAID:     %15.2f\n", totalPaid);
    printf("Total OWED:     %15.2f\n", totalOwed);
    printf("Total EXPECTED: %15.2f\n", totalPaid + totalOwed);
    printf("--------------------------------\n");
}