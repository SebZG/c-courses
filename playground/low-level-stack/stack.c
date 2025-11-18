#include "stack.h"
#include <stdlib.h>

stack_t *stack_new(size_t capacity)
{
    stack_t *s = malloc(sizeof(stack_t));
    if (s == NULL)
    {
        return NULL;
    }

    s->count = 0;
    s->capacity = capacity;
    s->data = (void **)malloc(sizeof(void *) * capacity);
    if (s->data == NULL)
    {
        return NULL;
    }

    return s;
}

void stack_push(stack_t *stack, void *obj)
{
    if (stack->count == stack->capacity)
    {
        stack->capacity *= 2;
        stack->data = (void **)realloc((void *)stack->data, sizeof(void *) * stack->capacity);
        if (stack->data == NULL)
        {
            return;
        }
    }

    stack->data[stack->count] = obj;
    stack->count++;
}

void *stack_pop(stack_t *stack)
{
    if (stack->count == 0)
    {
        return NULL;
    }

    stack->count--;
    return stack->data[stack->count];
}

void stack_free(stack_t *stack)
{
    if (stack == NULL)
    {
        return;
    }

    if (stack->data != NULL)
    {
        free((void *)stack->data);
    }

    free(stack);
}