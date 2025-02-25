#include <stdio.h>
#include <stdlib.h>

struct node_t
{
    int data;
    struct node_t* next;
};

typedef struct node_t node;

void printLL(node* head);
void insertAtEnd(node** head, int value);

int main()
{
    node* head = NULL; // Start with an empty list

    // Insert nodes at the end instead of the beginning
    insertAtEnd(&head, 11);
    insertAtEnd(&head, 22);
    insertAtEnd(&head, 33);

    printLL(head); // Print the linked list

    printf("\n");

    return 0;
}

// Function to insert at the end of the linked list
void insertAtEnd(node** head, int value)
{
    node* tmp = (node*) malloc(sizeof(node)); // Create a new node
    tmp->data = value; // Assign data
    tmp->next = NULL; // New node will be the last, so next is NULL

    if (*head == NULL) 
    {
        // If the list is empty, make the new node the head
        *head = tmp;
        return;
    }

    node* last = *head;
    while (last->next != NULL) 
    {
        last = last->next; // Move to the last node
    }

    last->next = tmp; // Link the last node to the new node
}

// Function to print the linked list
void printLL(node* head)
{
    node* tmp = head;

    while (tmp != NULL) 
    {
        printf("\nNode Addr: 0x%x, Data: %d, Next Addr: 0x%x", tmp, tmp->data, tmp->next);
        tmp = tmp->next;
    }
}
