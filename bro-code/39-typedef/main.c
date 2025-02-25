#include <stdio.h>
#include <string.h>

// typedef char user[25];

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{
    // typedef = reserved keyword that gives aan existing datatype a "nickname"

    // user user1 = "Bro";

    User user1 = {
        "Bro",
        "password123",
        123456789
    };

    User user2 = {
        "Code",
        "321password",
        987654321
    };

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);

    return 0;
}