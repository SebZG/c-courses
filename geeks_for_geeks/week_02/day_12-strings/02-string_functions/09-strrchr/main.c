#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Hello, World!";

    // Finding the last occurence of 'o' is string s
    char *res = strrchr(s, 'o');

    if (res != NULL)
        printf("Character found at: %lld index", res - s);
    else
        printf("Character not found\n");

    return 0;
}
