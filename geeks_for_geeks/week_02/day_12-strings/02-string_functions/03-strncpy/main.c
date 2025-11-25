#include <stdio.h>
#include <string.h>

int main()
{
    char src[] = "Hello";
    char dest[20];

    // Copies "Hello" to dest
    strncpy(dest, src, 4);
    printf("%s", dest);

    return 0;
}
