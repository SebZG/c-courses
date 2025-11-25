#include <stdio.h>
#include <string.h>

int main()
{
    char s1[30] = "Hello, ";
    char s2[] = "Geeks!";

    // Appends "Geeks!" to "Hello, "
    strncat(s1, s2, 4);
    printf("%s", s1);

    return 0;
}
