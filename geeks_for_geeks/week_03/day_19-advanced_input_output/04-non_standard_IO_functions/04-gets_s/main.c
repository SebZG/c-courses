#include <stdio.h>
int main()
{
    char str[20];
    if (gets_s(str, sizeof(str)) != NULL)
    {
        printf("Read: %s\n", str);
    }
    else
    {
        printf("Input error\n");
    }
    return 0;
}
