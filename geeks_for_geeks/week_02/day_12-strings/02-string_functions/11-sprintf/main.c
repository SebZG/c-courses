#include <stdio.h>

int main()
{
    char s[50];
    int n = 10;

    // Output formatted string into string bugger s
    sprintf(s, "The value is %d", n);
    printf("%s\n", s);

    return 0;
}
