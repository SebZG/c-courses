#include <stdio.h>
#include <string.h>

int main()
{
    char name[25];  // bytes
    int age;

    printf("\nWhat is your name? ");
    // scanf("%s", &name); // does not work with white spaces
    fgets(name, 25, stdin); // allows white spaces
    name[strlen(name) - 1] = '\0'; // gets rid of \n

    printf("How old are you? ");
    scanf("%d", &age);

    printf("\nHello, %s.", name);
    printf("You are %d years old.", age);

    return 0;
}