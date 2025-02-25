#include <stdio.h>
#include <stdlib.h>

struct node_t
{
    int data;
    struct node_t* next;
};

typedef struct node_t node;

void printLL(node* head);

int main()
{
    // create pointers to all nodes
    node* a;
    node* b;
    node* c;
    node* head;  // pointer to the first node

    a = (node*)malloc(sizeof(node));
    b = (node*)malloc(sizeof(node));
    c = (node*)malloc(sizeof(node));

    // populate nodes using their pointers
    a->data = 11;
    b->data = 22;
    c->data = 33;

    // link the list
    head = a;  // because a is a pointer now
    a->next = b;
    b->next = c;
    c->next = NULL;

    printLL(head);

    printf("\n");

    return 0;
}

void printLL(node* head)
{
    node* tmp = head;

    while (tmp != NULL)  // if node is NULL then exit loop
    {
        // print
        printf("\n Node Addr:0x%x, Data: %d, Next Addr:0x%x", tmp, tmp->data, tmp->next);
        tmp = tmp->next;  // point tmp to the next node
    }
}
