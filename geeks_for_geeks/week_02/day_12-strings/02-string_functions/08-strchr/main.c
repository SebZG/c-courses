#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Hello, World!";

    // Finding the first occurence of 'o' in string s
    char *res = strchr(s, 'o');

    if (res != NULL)
        printf("Character found at: %lld index", res - s);
    else
        printf("Character not found");

    return 0;
}
