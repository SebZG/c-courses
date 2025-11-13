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
void insertNodeInPosition(node *head, int pos, int data);
node *findNodeContaining(node *head, int data);
void deleteNodeFromPosition(node *head, int pos);
node *deleteHead(node *head);
void printLL(node *head);

int main()
{
    node *head = NULL;
    node *tmp = NULL;

    for (int i = 0; i < 10; i++)
    {
        tmp = createNodeLL(1 * i);
        head = addNodeToHead(head, tmp);
    }

    printLL(head);

    insertNodeInPosition(head, 1, 108);

    tmp = findNodeContaining(head, 108);
    printf("\nNode at Addr: 0x0%x contains value: %d\n", tmp, tmp->data);

    printLL(head);

    deleteNodeFromPosition(head, 1);

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

void deleteNodeFromPosition(node *head, int pos)
{
    node *tmp = head;
    node *nodeToDel;

    if (pos == 0)
    {
        printf("Cannot delete node in position 0");
    }
    else if (pos == 1)
    {
        nodeToDel = tmp->next;
        tmp->next = nodeToDel->next;
        free(nodeToDel);
        return;
    }
    else
    {
        for (int i = 1; i < pos; i++)
        {
            tmp = tmp->next;
            if (tmp->next != NULL)
            {
                nodeToDel = tmp->next;
                if (i == pos - 1)
                {
                    tmp->next = nodeToDel->next;
                    free(nodeToDel);
                    return;
                }
            }
            else
            {
                printf("Cannot delete something beyond the end of the list");
                return;
            }
        }
    }
}

node *deleteHead(node *head)
{
    node *tmp = head;
    node *nodeToDel;

    head = head->next;
    free(tmp);

    return head;
}

void printLL(node *head)
{
    node *tmp = head;

    while (tmp != NULL)
    {
        printf("\nNode Addr: 0x0%x, Data: %d, Next Addr: 0x0%x", tmp, tmp->data, tmp->next);
        tmp = tmp->next;
    }

    printf("\n");
}