// Stacks

/* 
    A Stack is a linear data structure that follows the 
    Last in First Out (LIFO) principle. The element inserted last
    is the first one to be removed. 

    - Follows LIFO order (Last In First Out).
    - Supports operations like push, pop, and peek.
    - Can be implemented using arrays or linked lists.
    - Used in function call management, expression evaluation, etc.
*/

// Explanation

/* 
    The code implements basic stack operations using an array.
    Elements are pushed onto the stack, one is popped, and then
    the remaining stack is displayed. 
*/

// Syntax

/* 
    <DataType> stack_name[<size>]

    int stack[100];
*/

#include <stdio.h>

#define SIZE 5
int stack[SIZE];
int top = -1;

void push(int value);
void pop();
void display();

int main()
{
    push(10);
    push(20);
    push(30);

    pop();

    display();

    return 0;
}

void push(int value)
{
    if (top == SIZE - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        {
            printf("Popped: %d\n", stack[top]);
            top--;
        }
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for (int i = 0; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}