#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// myQueue structure
typedef struct myQueue
{
    int currSize;
    Node *front;
    Node *rear;
} myQueue;

// Create a new node
Node *newNode(int data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Create an empty queue
myQueue *createQueue()
{
    myQueue *q = (myQueue *)malloc(sizeof(myQueue));
    q->front = q->rear = NULL;
    q->currSize = 0;
    return q;
}

// Check if the queue is empty
int isEmpty(myQueue *q)
{
    return q->front == NULL;
}

// Enqueue operation
void enqueue(myQueue *q, int data)
{
    Node *node = newNode(data);
    if (isEmpty(q))
    {
        q->front = q->rear = node;
    }
    else
    {
        q->rear->next = node;
        q->rear = node;
    }

    q->currSize++;
}

// Dequeue operation
int dequeue(myQueue *q)
{
    if (isEmpty(q))
    {
        printf("Queue Underflow\n");
        return -1;
    }

    Node *temp = q->front;
    int removedData = temp->data;
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    free(temp);

    q->currSize--;
    return removedData;
}

// Get front element
int getFront(myQueue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return -1;
    }
    return q->front->data;
}

// Get queue size
int size(myQueue *q)
{
    return q->currSize;
}

int main()
{
    myQueue *q = createQueue();

    enqueue(q, 10);
    enqueue(q, 20);

    printf("Dequeue: %d\n", dequeue(q));

    enqueue(q, 30);

    printf("Front: %d\n", getFront(q));
    printf("Size: %d\n", size(q));

    return 0;
}
