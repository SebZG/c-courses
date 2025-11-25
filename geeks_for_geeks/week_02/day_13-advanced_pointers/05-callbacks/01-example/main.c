/*
    Applications of Callbacks
    The callback concept finds their use in wide variety of cases.
    Some of them are given below:

    - Event-Driven Programming: Callbacks are widely used in GUI applications and
    other event-driven systems where certain actions (like button clicks) trigger callback functions.
    - Sorting Algorithms: Callbacks can be used to define comparison functions in
    sorting functions like qsort() in the C Standard Library.
    - Asynchronous Operations: Callbacks are used to handle asynchronous tasks,
    where a function continues its execution and calls the callback when the task completes.
    - Custom Behaviours: Callbacks allow the programmer to pass custom behaviour to functions.
    For example, callbacks can define how certain operations are performed without modifying the core logic of the function.
*/

#include <stdio.h>

void A()
{
    printf("I am function A");
}
// Callback function
void B(void (*ptr)())
{

    // Callback to A
    (*ptr)();
}

int main()
{

    // Function pointer to A()
    void (*ptr)() = &A;

    // Calling function B and passing
    // address of the function A as argument
    B(ptr);

    return 0;
}
