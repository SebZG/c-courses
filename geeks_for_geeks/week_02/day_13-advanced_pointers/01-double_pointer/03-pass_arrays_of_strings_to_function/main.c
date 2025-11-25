#include <stdio.h>

// Function that takes array of strings as argument
void print(char **arr, int n)
{
    for (int i = 0; i < n; i++)
        printf("%s\n", *(arr + i));
}

int main()
{
    char *arr[10] = {"Geek", "Geeks", "Geekfor"};
    print(arr, 3);
    return 0;
}
