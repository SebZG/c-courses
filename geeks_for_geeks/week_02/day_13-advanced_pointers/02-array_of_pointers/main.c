// C Program to Create an Array of Pointers to Strings

#include <stdio.h>

int main()
{
    // Initialize an array of pointers to strings
    char *arr[4] = {"C++", "Java", "Python", "JavaScript"};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Print the strings using the pointers
    printf("Array Elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }
    return 0;
}
