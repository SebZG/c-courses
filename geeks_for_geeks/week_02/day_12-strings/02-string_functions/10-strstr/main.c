#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Hello, Geeks!";

    // Find the occurence of "Geeks" in string s
    char *pos = strstr(s, "Geeks");
    printf("%s\n", pos);

    if (pos != NULL)
        printf("Found");
    else
        printf("Not Found");

    return 0;
}
