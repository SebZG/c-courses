// Deques

/* 
    A Deque (Double Ended Queue) is a linear data structure that allows
    insertion and deletion of elements from both ends, i.e., front and rear. 

    - Deque allows insertion and deletion from both ends.
    - It can be implemented using arrays or linked lists.
    - Useful in situations required fast access from both ends, like
    in a sliding window problem.
*/

// Explanation

/* 
    Thiss program demonstrates the creation of a deque and insertion of an element at the front. 
*/

// Syntax

/* 
    struct Deque {
        int front, rear;
        int capacity;
        int *array;
    }

    struct Deque *deque

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Deque
{
    int front, rear;
    int capacity;
    int *array;
} deque_t;

deque_t *dequeCreate(int capacity);
void insertFront(deque_t *deque, int value);

int main()
{
    // enqueue(10);
    // enqueue(20);
    // enqueue(30);

    // dequeue();

    // display();

    return 0;
}

deque_t *dequeCreate(int capacity)
{
    deque_t *deque = (deque_t *)malloc(sizeof(deque_t));
    deque->capacity = capacity;
    deque->front = -1;
    deque->rear = -1;
    deque->array = (int *)malloc(deque->capacity * sizeof(int));

    return deque;
}

void insertFront(deque_t *deque, int value)
{
    if (deque->front == 0)
    {
        printf("Deque is full\n");
    }
    deque->array[--deque->front] = value;
}