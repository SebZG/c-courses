#include <stdio.h>
#include <string.h>

struct Player
{
    char name[20];
    int score;
};

int main()
{
    // struct = collection of related data ("variables")
    //          they can be of different data types
    //          listed under one name in a block of memory.
    //          VERY SIMILAR to classes in other languages (but not methods)

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Bro");
    player1.score = 50;

    strcpy(player2.name, "Code");
    player2.score = 100;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
}