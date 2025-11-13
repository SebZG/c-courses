#include <stdio.h>
#include <stdlib.h>

struct node_t
{
    int data;
    struct node_t *next;
};

typedef struct node_t node;

void insertAtHead(node **head, int value);
void printLL(node *head);

int main()
{
    node *head = NULL;
    // node *tmp;

    insertAtHead(&head, 11);
    insertAtHead(&head, 22);
    insertAtHead(&head, 33);

    printLL(head);

    node *ptr = head;
    while (ptr != NULL)
    {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }

    return 0;
}

void insertAtHead(node **head, int value)
{
    node *tmp = (node *)malloc(sizeof(node));
    tmp->data = value;

    *head == NULL ? (tmp->next = NULL) : (tmp->next = *head);

    // if (*head == NULL)
    // {
    //     tmp->next = NULL;
    // }
    // else
    // {
    //     tmp->next = *head;
    // }

    *head = tmp;
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