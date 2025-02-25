#include <stdio.h>
#include <stdlib.h>

struct node_t
{
    int data;
    struct node_t* next;
};

typedef struct node_t node;

int main()
{
    node a;
    node b;
    node c;
    node* head;  // pointer to the first node

    // populate the data
    a.data = 11;
    b.data = 22;
    c.data = 33;

    // link the list
    head = &a;
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    return 0;
}
