#ifndef LIB_UTIL_H_INCLUDED
#define LIB_UTIL_H_INCLUDED

#include <stdbool.h>

struct node_t
{
    char fName[50];
    char lName[50];
    bool isConsession;
    bool hasPaid;
    float amountPaid;
    struct node_t *next;
};

typedef struct node_t node;

node *createGuest(float standardPrice, float consessionPrice);
node *addGuestToHead(node *head, node *newNode);
node *autoPopList(node *head);
node *deleteHead(node *Head);
void deleteGuestFromPosition(node *head, int pos);
node *deleteGuest(node *head);
void printStats(node *head, float standardPrice, float consessionPrice);
void printAllData(node *head, float standardPrice, float consessionPrice);

#endif // LIB_UTIL_H_INCLUDED
