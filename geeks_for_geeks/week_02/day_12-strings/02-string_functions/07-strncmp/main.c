#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Apple";
    char s2[] = "Applet";

    // Compare two strings upto
    // 4 characters and print result
    int res = strncmp(s1, s2, 4);
    if (res == 0)
        printf("s1 and s2 are same");
    else if (res < 0)
        printf("s1 is lexicographically "
               "smaller than s2");
    else
        printf("s1 is lexicographically "
               "greater than s2");
    return 0;
}
