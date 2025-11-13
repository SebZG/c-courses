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
    node a;
    node b;
    node c;
    node *head; // pointer to the first node

    // populate the data
    a.data = 11;
    b.data = 22;
    c.data = 33;

    // link the list
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    //    //print, not clever
    //    printf("head points to: 0x%x, Data: %d, Next Addr: 0x%x", head, head->data, head->next);
    //
    //    printf("\nNode a Addr:0x%x, Data: %d, Next Addr:0x%x", &a, a.data, a.next);
    //    printf("\nNode b Addr:0x%x, Data: %d, Next Addr:0x%x", &b, b.data, b.next);
    //    printf("\nNode c Addr:0x%x, Data: %d, Next Addr:0x%x", &c, c.data, c.next);

    printLL(head);

    printf("\n");

    return 0;
}

void printLL(node *head)
{
    node *tmp = head;

    while (tmp != NULL)
    {
        printf("\nNode Addr:0x%x, Data: %d, Next Addr:0x%x", tmp, tmp->data, tmp->next);
        tmp = tmp->next;
    }
}
