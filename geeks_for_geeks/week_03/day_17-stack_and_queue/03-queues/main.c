#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{
    int *arr;
    int capacity;
    int size;
} queue_t;

// Create queue
queue_t *createQueue(int capacity)
{
    queue_t *q = (queue_t *)malloc(sizeof(queue_t));
    if (q == NULL)
    {
        free(q);
        return NULL;
    }

    // Maximum number of elements the queue can hold
    q->capacity = capacity;
    q->size = 0;

    // Array to store queue elements
    q->arr = (int *)malloc(capacity * sizeof(int));
    if (q->arr == NULL)
    {
        free(q);
        return NULL;
    }

    return q;
}

bool isEmpty(queue_t *q)
{
    return q->size == 0;
}

bool isFull(queue_t *q)
{
    return q->size == q->capacity;
}

// Add an element to the rear of the queue
void enqueue(queue_t *q, int n)
{
    if (isFull(q))
    {
        printf("Queue is full\n");
        return;
    }

    q->arr[q->size++] = n;
}

// removes the front element from the queue
void dequeue(queue_t *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }

    for (int i = 1; i < q->size; i++)
        q->arr[i - 1] = q->arr[i];

    q->size--;
}

// Returns the front element of the queue
int getFront(queue_t *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty.\n");
        return -1;
    }

    return q->arr[0];
}

// Returns the last element of the queue
int getRear(queue_t *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty.\n");
        return -1;
    }

    return q->arr[q->size - 1];
}


int main()
{
    queue_t *q = createQueue(3);

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    printf("Front: %d\n", getFront(q));

    dequeue(q);
    printf("Front: %d\n", getFront(q));
    printf("Rear: %d\n", getRear(q));

    enqueue(q, 40);

    return 0;
}
