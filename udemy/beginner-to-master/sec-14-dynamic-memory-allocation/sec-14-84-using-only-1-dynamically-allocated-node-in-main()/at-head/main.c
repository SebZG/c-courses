#include <stdio.h>
#include <stdlib.h>

struct node_t
{
    int data;
    struct node_t *next;
};

typedef struct node_t node;

void printLL(node *head);

int main()
{
    node *tmp;  // pointer
    node *head; // pointer to the first node

    tmp = (node *)malloc(sizeof(node)); // dynamically allocate a new node
    tmp->data = 11;                     // populate node using its pointer
    tmp->next = NULL;
    head = tmp; // since this is the first node, assign it to head

    tmp = (node *)malloc(sizeof(node)); // creating the second node
    tmp->data = 22;                     // populate node using its pointer
    tmp->next = head;
    head = tmp;

    tmp = (node *)malloc(sizeof(node)); // creating the third node
    tmp->data = 33;                     // populate node using its pointer
    tmp->next = head;
    head = tmp;

    printLL(head);

    printf("\n");

    return 0;
}

void printLL(node *head)
{
    node *tmp = head;

    while (tmp != NULL) // if node is NULL then exit loop
    {
        // print
        printf("\nNode Addr: 0x%x, Data: %d, Next Addr: 0x%x", tmp, tmp->data, tmp->next);
        tmp = tmp->next; // point tmp to the next node
    }
}