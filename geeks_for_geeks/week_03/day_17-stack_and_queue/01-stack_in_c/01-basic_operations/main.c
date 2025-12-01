// C program to demonstrate how to implement a Stack
#include <stdbool.h>
#include <stdio.h>

// Define the maximum capacity of the stack
#define MAX_SIZE 100

// Define a structure for the stack
typedef struct Stack
{
    int top;
    int arr[MAX_SIZE];
} stack_t;

// Function to initialize the stack
void initialize(stack_t *stack)
{
    stack->top = -1;
}

// Function to check if the stack is empty
bool isEmpty(stack_t *stack)
{
    return stack->top == -1;
}

// Function to check if the stack is full
bool isFull(stack_t *stack)
{
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(stack_t *stack, int value)
{
    if (isFull(stack))
    {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
    printf("Pushed %d onto the stack\n", value);
}

// Function to pop an element from the stack
int pop(stack_t *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack Underflow\n");
        return -1;
    }
    int popped = stack->arr[stack->top--];
    printf("Popped %d from the stack\n", popped);
    return popped;
}

int peek(stack_t *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->arr[stack->top];
}

int main()
{
    stack_t stack;
    initialize(&stack);

    push(&stack, 3);
    printf("Top element: %d\n", peek(&stack));

    push(&stack, 5);
    printf("Top element: %d\n", peek(&stack));

    push(&stack, 2);
    printf("Top element: %d\n", peek(&stack));

    push(&stack, 8);
    printf("Top element: %d\n\n", peek(&stack));

    while (!isEmpty(&stack))
    {
        printf("Top element: %d\n", peek(&stack));
        printf("Popped element: %d\n", pop(&stack));
    }

    return 0;
}
