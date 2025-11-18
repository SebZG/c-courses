// Queues

/* 
    A Queue is a linear data structure that follows the 
    First in First Out (FIFO) principle. The element inserted first
    is the first one to be removed. 

    - Follows FIFO order (First In First Out).
    - Supports operations like enqueue(insert) and dequeue(remove).
    - Can be implemented using arrays or linked lists.
    - Used in scheduling, buffering, etc.
*/

// Explanation

/* 
    The code demonstrates a queue implementation using an array.
    Elements are enqueued, one is dequeued, and the remaining queue is displayed. 
*/

// Syntax

/* 
    <DataType> queue_name[<size>]

    int queue[100];
*/

#include <stdio.h>

#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value);
void dequeue();
void display();

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();

    display();

    return 0;
}

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        {
            printf("Dequeued: %d\n", queue[front]);
            front++;
        }
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (int i = 0; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}