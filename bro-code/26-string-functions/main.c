#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "Bro";
    char str2[100] = "Code";

    // strlwr(str1); // converts string to lowercase
    // strupr(str1); // converts string to uppercase
    // strcat(str1, str2); // appends string2 to end of string1
    // strncat(str1, str2, 1); // appends n characters of string2 to end of string1
    // strcpy(str1, str2); // copy string2 to string1
    // strncpy(str1, str2, 4); //  copy n characters of string2 to string1

    // strset(str1, '?'); // sets all characters of a string to aa given character
    // strnset(str1, '?', 1); // sets first n characters of a string to a given character
    // strrev(str1); // reverses a string

    // printf("%s\n", str1);

    // returns n
    int result = strlen(str1); // returns string length as int
    // int result = strcmp(str1, str2);  // string compare all characters
    // int result = strncmp(str1, str2, 1); // string compare n characters
    // int result = strcmpi(str1, str2); // string compare all characters ignoring case
    // int result = strnicmp(str1, str2, 1); // string compare n characters ignoring case

    printf("%d\n", result);

    if (result == 0)
    {
        printf("These string are the same");
    }
    else
    {
        printf("These string are not the same");
    }

    return 0;
}