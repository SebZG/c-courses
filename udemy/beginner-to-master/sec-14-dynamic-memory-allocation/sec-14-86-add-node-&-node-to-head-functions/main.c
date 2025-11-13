#include <stdio.h>
#include <stdlib.h>

struct node_t
{
    int data;
    struct node_t *next;
};

typedef struct node_t node;

node *createNodeLL(int data);
node *addNodeToHead(node *head, node *newNode);
void printLL(node *head);

int main()
{
    node *tmp;  // pointer
    node *head; // pointer to the first node

    head = NULL;

    tmp = createNodeLL(11);
    head = addNodeToHead(head, tmp);

    tmp = createNodeLL(22);
    head = addNodeToHead(head, tmp);

    tmp = createNodeLL(33);
    head = addNodeToHead(head, tmp);

    tmp = createNodeLL(44);
    head = addNodeToHead(head, tmp);

    printLL(head);

    printf("\n");

    return 0;
}

node *createNodeLL(int data)
{
    node *nn;
    nn = (node *)malloc(sizeof(node));

    nn->data = data;
    nn->next = NULL;

    return nn;
}

node *addNodeToHead(node *head, node *newNode)
{
    newNode->next = head;
    return newNode;
}

void printLL(node *head)
{
    node *tmp = head;

    while (tmp != NULL) // if node is NULL then exit loop
    {
        // print
        printf("\n Node Addr:0x%x, Data: %d, Next Addr:0x%x", tmp, tmp->data, tmp->next);
        tmp = tmp->next; // point tmp to the next node
    }
}