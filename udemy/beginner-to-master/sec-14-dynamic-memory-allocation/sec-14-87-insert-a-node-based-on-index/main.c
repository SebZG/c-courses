#include <stdio.h>
#include <stdlib.h>

struct node_t
{
    int data;
    struct node_t* next;
};

typedef struct node_t node;

void printLL(node* head);
node* createNodeLL(int data);
node* addNodeToHead(node* head, node* newNode);
node* findNodeContaining(node* head, int data);
void insertNodeInPosition(node* head, int position, int data);

int main()
{
    node* tmp;   // pointer
    node* head;  // pointer to the first node
    int i = 0;

    head = NULL;

    for (i = 0; i < 20; i++)  // create 20 nodes
    {
        tmp = createNodeLL(11 * i);
        head = addNodeToHead(head, tmp);
    }

    printLL(head);

    tmp = findNodeContaining(head, 77);
    printf("\n\nNode at addr:0x%x contains value 77\n", tmp);

    insertNodeInPosition(head, 3, 3);

    printf("\n");

    printLL(head);

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

node* createNodeLL(int data)
{
    node* nn;
    nn = (node*)malloc(sizeof(node));

    nn->data = data;
    nn->next = NULL;

    return nn;
}

node* addNodeToHead(node* head, node* newNode)
{
    newNode->next = head;  // point new node ptr to current head
    return newNode;
}

node* findNodeContaining(node* head, int data)
{
    node* tmp = head;

    while (tmp != NULL)  // if node is NULL then exit loop
    {
        if (tmp->data == data)
        {
            return tmp;
        }
        tmp = tmp->next;  // move tmp to the next node
    }
    return NULL;  // if not found
}

void insertNodeInPosition(node* head, int position, int data)  // nth position from head, index starting at 0
{
    node* tmp = head;
    node* newNode;
    int i;

    if (position == 0)
    {
        printf("Cannot insert in position 0");
    }
    else
    {
        for (i = 1; i < position; i++)
        {
            if (tmp->next != NULL)
            {
                tmp = tmp->next;  // traverse the list n times
            }
            else
            {
                return;  // if we are out of bounds
            }
        }
        // create new node
        newNode = (node*)malloc(sizeof(node));

        // populate node with data
        newNode->data = data;

        // point new node to the next node (next from current)
        newNode->next = tmp->next; 

        // point current node to new node
        tmp->next = newNode;

        // enjoy life, it's now inserted
    }
}
