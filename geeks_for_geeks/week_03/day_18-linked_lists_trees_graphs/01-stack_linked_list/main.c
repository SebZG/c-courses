#include <float.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node node;
typedef struct Stack stack;

struct Node
{
    int data;
    node *next;
};

struct Stack
{
    node *top;
    int count;
};

void initStack(stack *s)
{
    s->top = NULL;
    s->count = 0;
}

void push(stack *s, int x)
{
    node *temp = (node *)malloc(sizeof(node));
    if (!temp)
    {
        printf("Memory allocation failed.\n");
        return;
    }
    temp->data = x;
    temp->next = s->top;
    s->top = temp;

    s->count++;
}

int pop(stack *s)
{
    if (s->top == NULL)
    {
        printf("Stack Underflow.\n");
        return -1;
    }

    node *temp = s->top;
    s->top = s->top->next;

    int val = temp->data;
    free(temp);

    s->count--;
    return val;
}

int peek(stack *s)
{
    if (s->top == NULL)
    {
        printf("Stack is Empty.\n");
        return -1;
    }

    return s->top->data;
}

bool isEmpty(stack *s)
{
    return s->top == NULL;
}

int size(stack *s)
{
    return s->count;
}

int main()
{
    stack s;
    initStack(&s);

    push(&s, 1);
    printf("New node pushed\n");
    printf("peek: %d\n", peek(&s));
    printf("isEmpty: %d\n", isEmpty(&s));
    printf("size: %d\n\n", size(&s));

    push(&s, 2);
    printf("New node pushed\n");
    printf("peek: %d\n", peek(&s));
    printf("isEmpty: %d\n", isEmpty(&s));
    printf("size: %d\n\n", size(&s));

    printf("pop: %d\n", pop(&s));
    printf("isEmpty: %d\n", isEmpty(&s));
    printf("size: %d\n\n", size(&s));

    printf("pop: %d\n", pop(&s));
    printf("isEmpty: %d\n", isEmpty(&s));
    printf("size: %d\n\n", size(&s));

    return 0;
}

/*
INIT STACK
┌─────────┐
│ Stack s │
├─────────┤
│ top: ◯──┼──> NULL
│ count: 0│
└─────────┘

Memory addresses (for this example):
- Stack s is at address 0x1000
- We'll assign addresses as nodes are created


FIRST PUSH
node *temp = (node *)malloc(sizeof(node));
temp->data = x;  // x = 1

┌─────────┐                    ┌──────────┐
│ Stack s │                    │ temp     │ (at address 0x2000)
├─────────┤                    ├──────────┤
│ top: ◯──┼──> NULL            │ data: 1  │
│ count: 0│                    │ next: ?? │ (uninitialized)
└─────────┘                    └──────────┘

temp->next = s->top; (s->top is NULL)
┌─────────┐                    ┌──────────┐
│ Stack s │                    │ temp     │ (0x2000)
├─────────┤                    ├──────────┤
│ top: ◯──┼──> NULL    ┌───────│ data: 1  │
│ count: 0│            │       │ next: ◯──┼──> NULL
└─────────┘            │       └──────────┘
                       │
                    (copied)

s->top = temp;
┌─────────┐
│ Stack s │
├─────────┤              ┌──────────┐
│ top: ◯──┼─────────────>│   NODE   │ (0x2000)
│ count: 1│              ├──────────┤
└─────────┘              │ data: 1  │
                         │ next: ◯──┼──> NULL
                         └──────────┘

SECOND PUSH
node *temp = (node *)malloc(sizeof(node));
temp->data = x;  // x = 2

┌─────────┐              ┌──────────┐         ┌──────────┐
│ Stack s │              │   NODE   │ (0x2000)│   temp   │ (NEW! 0x3000)
├─────────┤              ├──────────┤         ├──────────┤
│ top: ◯──┼─────────────>│ data: 1  │         │ data: 2  │
│ count: 1│              │ next: ◯──┼──>NULL  │ next: ?? │
└─────────┘              └──────────┘         └──────────┘
                         ↑
                    Still exists!

temp->next = s->top;
This copies the ADDRESS from s->top into temp->next

┌─────────┐              ┌──────────┐         ┌──────────┐
│ Stack s │              │   NODE   │ (0x2000)│   temp   │ (0x3000)
├─────────┤              ├──────────┤         ├──────────┤
│ top: ◯──┼─────────────>│ data: 1  │    ┌────│ data: 2  │
│ count: 1│              │ next: ◯──┼──┐ │    │ next: ◯──┼───┐
└─────────┘              └──────────┘  │ │    └──────────┘   │
                         ↑             │ │                   │
                         └─────────────┘ └───────────────────┘

Node 1 is now connected to temp through temp->next!

s->top = temp;
Now update s->top to point to the NEW node

┌─────────┐
│ Stack s │
├─────────┤              ┌──────────┐         ┌──────────┐
│ top: ◯──┼──────────────┼──────────┼────────>│   NODE   │ (0x3000)
│ count: 2│              │          │         ├──────────┤
└─────────┘              │  NODE    │ (0x2000)│ data: 2  │
                         ├──────────┤    ┌────│ next: ◯──┼────┐
                         │ data: 1  │◄───┘    └──────────┘    │
                         │ next: ◯──┼──> NULL                 │
                         └──────────┘◄────────────────────────┘

TOP OF STACK

*/
