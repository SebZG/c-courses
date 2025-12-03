#include <stdio.h>

int main()
{
    int pos;
    char str[20];
    scanf("%s%n", str, &pos);                       // "GeeksforGeeks"
    printf("Read: %s, Characters: %d\n", str, pos); // "Read: GeeksforGeeks, Characters: 13"

    return 0;
}
