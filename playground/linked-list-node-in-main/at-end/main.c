#include <stdio.h>
#include <stdlib.h>

struct node_t
{
    int data;
    struct node_t *next;
};

typedef struct node_t node;

// void insertAtEnd(node **head, int value);
void insertAtEnd(node **head, node **ptr, int value);
void printLL(node *head);

int main()
{
    node *head = NULL;
    node *ptr = NULL;

    insertAtEnd(&head, &ptr, 11);
    insertAtEnd(&head, &ptr, 22);
    insertAtEnd(&head, &ptr, 33);

    printLL(head);

    ptr = head;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }

    return 0;
}

// void insertAtEnd(node **head, int value)
void insertAtEnd(node **head, node **ptr, int value)
{
    node *tmp = (node *)malloc(sizeof(node));
    tmp->data = value;
    tmp->next = NULL;

    if (*head == NULL)
    {
        // *head = tmp;
        *head = *ptr = tmp;
        return;
    }

    (*ptr)->next = tmp;
    *ptr = tmp;

    // node *ptr = *head;
    // while (ptr->next != NULL)
    // {
    //     ptr = ptr->next;
    // }

    // ptr->next = tmp;
}

void printLL(node *head)
{
    node *tmp = head;

    while (tmp != NULL)
    {
        printf("\nNode Addr: 0x%x, Data: %d, Next Addr: 0x%x", tmp, tmp->data, tmp->next);
        tmp = tmp->next;
    }

    printf("\n");
}