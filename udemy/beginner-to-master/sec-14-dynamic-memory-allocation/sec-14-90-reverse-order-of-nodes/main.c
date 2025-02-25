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
void deleteNodeFromPosition(node* head, int position);
node* deleteHead(node* head);
node* deleteNodeWithData(node* head, int data);
node* reverseLL(node* head);

int main()
{
    node* tmp;   // pointer
    node* head;  // pointer to the first node
    int i = 0;

    head = NULL;

    for (i = 0; i < 20; i++)  // create 20 nodes
    {
        tmp = createNodeLL(1 + i);
        head = addNodeToHead(head, tmp);
    }

    printf("\n");

    printLL(head);

    head = reverseLL(head);

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

void deleteNodeFromPosition(node* head, int position)  // nth position from head, index starting at 0
{
    node* tmp = head;
    node* nodeToDel;
    int i;

    if (position == 0)
    {
        printf("Cannot delete node in position 0");
    }
    else if (position == 1)
    {
        nodeToDel = tmp->next;        // point to the node that needs to be deleted
        tmp->next = nodeToDel->next;  // break connection to the nodeToDel and connect to next
        free(nodeToDel);              // de-allocate the memory from the deleted node
        return;
    }
    else
    {
        for (i = 1; i < position; i++)
        {
            tmp = tmp->next;  // tmp to the one before the node we want to delete
            if (tmp->next != NULL)
            {
                nodeToDel = tmp->next;  // point to the node that needs to be deleted
                if (i == position - 1)
                {
                    tmp->next = nodeToDel->next;  // break connection to the nodeToDel and connect to next
                    free(nodeToDel);              // de-allocate the memory from the deleted node
                    return;
                }
            }
            else
            {
                printf("Cannot delete something beyond the end of the list");
                return;  // if we are out of bounds
            }
        }
    }
}

node* deleteHead(node* head)  // returns new head
{
    node* tmp = head;
    node* nodeToDel;

    head = head->next;  // point head to the 2nd node
    // tmp still points to the original head
    free(tmp);  // de-allocate memory that is pointed to by tmp

    return head;
}

node* deleteNodeWithData(node* head, int data)  // returns new head
{
    // iterate through the list
    // find the index number of the node with the value we want to delete
    // use our deleteNodeWithIndex function to delete the node

    node* tmp = head;
    int indexCount = 0;

    while (tmp != NULL)  // if node is NULL then exit loop
    {
        if (tmp->data == data)
        {
            break;
        }
        tmp = tmp->next;  // point tmp to the next node
        indexCount++;
    }

    if (indexCount == 0)
    {
        // use delete head function
        head = deleteHead(head);
        return head;
    }
    else
    {
        // use deleteNodeWithIndex function
        deleteNodeFromPosition(head, indexCount);
        return head;
    }
}

node* reverseLL(node* head)
{
    node* previous;
    node* current;
    node* next;

    current = head;
    previous = NULL;

    while (current != NULL)
    {
        // change connections
        next = current->next;      // moved next
        current->next = previous;  // connect current node to the previous

        // move pointers to next
        previous = current;
        current = next;
    }
    head = previous;
    return head;
}
