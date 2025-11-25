#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Hello, Geeks, C!";

    // Initializing tokens
    char *t = strtok(s, ", ");

    // Printing rest of the tokens
    while (t != NULL)
    {
        printf("%s\n", t);
        t = strtok(NULL, ", ");
    }

    return 0;
}
