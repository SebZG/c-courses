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
void insertNodeInPosition(node *head, int position, int data);
node *findNodeContaining(node *head, int data);
void printLL(node *head);

int main()
{
    node *head = NULL;
    node *tmp = NULL;

    for (int i = 0; i < 20; i++)
    {
        tmp = createNodeLL(11 * i);
        head = addNodeToHead(head, tmp);
    }

    printLL(head);

    insertNodeInPosition(head, 3, 123);
    
    tmp = findNodeContaining(head, 123);
    printf("\nNode at Addr: 0x%x contains value: %d\n", tmp, tmp->data);

    printLL(head);

    return 0;
}

node *createNodeLL(int data)
{
    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

node *addNodeToHead(node *head, node *newNode)
{
    newNode->next = head;
    return newNode;
}

void insertNodeInPosition(node *head, int pos, int data)
{
    node *tmp = head;
    node *newNode;

    if (pos == 0)
    {
        printf("Cannot insert in position 0");
    }
    else
    {
        for (int i = 1; i < pos; i++)
        {
            if (tmp->next != NULL)
            {
                tmp = tmp->next;
            }
            else
            {
                return;
            }
        }
        newNode = (node *)malloc(sizeof(node));
        newNode->data = data;
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
}

node *findNodeContaining(node *head, int data)
{
    node *tmp = head;

    while (tmp != NULL)
    {
        if (tmp->data == data)
        {
            return tmp;
        }
        tmp = tmp->next;
    }
    return NULL;
}

void printLL(node *head)
{
    node *tmp = head;

    while (tmp != NULL)
    {
        printf("\nNode Addr: 0x%x, Data: %d, next Addr: 0x%x", tmp, tmp->data, tmp->next);
        tmp = tmp->next;
    }

    printf("\n");
}