#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char userIn;

    printf("Please enter a number between 100 and 104 to see product details: ");
    scanf("%d", &userIn);

    printf("\n");

    switch(userIn)
    {
    case 100:
        printf("ID: %d\n", userIn);
        printf("Name: Chocolate bar\n");
        printf("Price: 1.20$\n");
        break;

    case 101:
        printf("ID: %d\n", userIn);
        printf("Name: Chocolate milk drink\n");
        printf("Price: 1.35$\n");
        break;

    case 102:
        printf("ID: %d\n", userIn);
        printf("Name: Chocolate Easter bunny\n");
        printf("Price: 1.99$\n");
        break;

    case 103:
        printf("ID: %d\n", userIn);
        printf("Name: Chocolate perfume\n");
        printf("Price: 6.30$\n");
        break;

    case 104:
        printf("ID: %d\n", userIn);
        printf("Name: Chocolate covered power bank\n");
        printf("Price: 2.50$\n");
        break;

    default:
        printf("You failed miserably\n");
        printf("It's ok\n");
        printf("Try again when you figure out how to use a vending machine\n");
        break;
    }

    return 0;
}
