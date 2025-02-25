#include <stdbool.h>

int main()
{
    // logical operators = ! (NOT) reverses the state of a condition

    bool sunny = true;

    if (!sunny)
    {
        printf("The weather is good!");
    }
    else
    {
        printf("The weather is bad!");
    }

    return 0;
}