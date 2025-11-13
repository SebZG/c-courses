#include "lib_util.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

enum MenuOption
{
    MENU_ADD_GUEST = 1,
    MENU_DELETE_GUEST = 2,
    MENU_PRINT_STATS = 3,
    MENU_PRINT_ALL = 4,
    MENU_AUTO_POPULATE = 5,
    MENU_QUIT = 6
};

typedef enum MenuOption MenuOption;

int main()
{
    node *tmp = NULL;
    node *head = NULL;

    float standardPrice = 0.00f;
    float consessionPrice = 0.00f;

    char c;

    bool valid = false;
    do
    {
        printf("Set standard price: ");
        if (scanf("%f", &standardPrice) != 1 || standardPrice < 0)
        {
            printf("Invalid input. Please enter a positive amount.\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
            }
        }
        else
        {
            valid = true;
            while ((c = getchar()) != '\n' && c != EOF)
            {
            }
        }
    } while (!valid);

    valid = false;
    do
    {
        printf("Set concession price: ");
        if (scanf("%f", &consessionPrice) != 1 || consessionPrice < 0)
        {
            printf("Invaid input. PLease enter a positive amount.\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
            }
        }
        else if (scanf("%f", &consessionPrice) >= standardPrice)
        {
            printf("Consession price cannot exceed stand price");
        }
        else
        {
            valid = true;
            while ((c = getchar()) != '\n' && c != EOF)
            {
            }
        }
    } while (!valid);

    while (1 == 1)
    {
        printf("\n'%d' to: Add a guest", MENU_ADD_GUEST);
        printf("\n'%d' to: Delete a guest", MENU_DELETE_GUEST);
        printf("\n'%d' tp: Print stats", MENU_PRINT_STATS);
        printf("\n'%d' to: Print all data", MENU_PRINT_ALL);
        printf("\n'%d' to: Automatically populate list", MENU_AUTO_POPULATE);
        printf("\n'%d' to: Quit\n", MENU_QUIT);

        int userSelect;
        if (scanf("%d", &userSelect) != 1)
        {
            perror("Please enter a number.\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
            }
            continue;
        }

        switch (userSelect)
        {
        case MENU_ADD_GUEST:
            tmp = createGuest(standardPrice, consessionPrice);
            head = addGuestToHead(head, tmp);
            break;
        case MENU_DELETE_GUEST:
            head = deleteGuest(head);
            break;
        case MENU_PRINT_STATS:
            printStats(head, standardPrice, consessionPrice);
            break;
        case MENU_PRINT_ALL:
            printAllData(head, standardPrice, consessionPrice);
            break;
        case MENU_AUTO_POPULATE:
            head = autoPopList(head);
            break;
        case MENU_QUIT:
            while (head)
            {
                node *tmp = head;
                head = head->next;
                free(tmp);
            }
            return 0;
        default:
            printf("\nInvalid selection.\n");
        }
    }


    return 0;
}