#include <stdio.h>

void birthdaySong(char name[], int age);

int main()
{
    char name[] = "Bro";
    int age = 21;

    birthdaySong(name, age);

    return 0;
}

void birthdaySong(char name[], int age)
{
    printf("Happy birthday dear, %s.\n", name);
    printf("You are %d years old.\n", age);
}