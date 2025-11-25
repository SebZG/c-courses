#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isPalindrome(char s[])
{
    int len = (int)strlen(s);
    int mid = len / 2;
    printf("len: %d\n", len);
    printf("mid: %d\n", mid);

    for (int i = 0, j = len - 1; i < mid; i++, j--)
    {
        if (s[i] != s[j])
            return false;
    }
    return true;
}

int main()
{
    char str1[10] = "tacocat";

    bool res = isPalindrome(str1);
    printf("%d", res);

    return 0;
}
