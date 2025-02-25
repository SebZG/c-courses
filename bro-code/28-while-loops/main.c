#include <stdio.h>
#include <string.h>

int main()
{
    // While loop = repeats a section of code possibly unlimited times.
    // WHILE some condition remains true.
    // A while loop might not execute at all.

    char name[25];

    printf("\nWhat is your name?");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("\nYou must enter a name.\n");
        printf("\nWhat is your name?");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("\nHello, %s", name);

    return 0;
}