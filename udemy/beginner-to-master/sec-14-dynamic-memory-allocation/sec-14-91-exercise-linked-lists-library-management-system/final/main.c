#include <stdio.h>
#include <stdlib.h>

#include "lib_util.h"

int main()
{
    node* tmp;
    node* head;

    char userSelect;

    head = NULL;

    while (1 == 1)
    {
        printf("\nPlease choose what Action you would like to make:");
        printf("\nType \"A\" to: Add a book to the library");
        printf("\nType \"B\" to: Print all data in database");
        printf("\nType \"C\" to: Print number of copies available for a book");
        printf("\nType \"D\" to: Remove a book from library database");
        printf("\nType \"E\" to: Loan out a book");
        printf("\nType \"F\" to: Automatically populate library");
        printf("\nType \"Q\" to: Quit\n");

        fflush(stdin);
        userSelect = getchar();

        switch (userSelect)
        {
            case 'A':
                printf("\nYou selected \"A\", Adding a book...\n");
                tmp = createNodeLL();
                head = addNodeToHead(head, tmp);
                break;

            case 'B':
                printf("\nYou selected \"B\", Printing Data...\n");
                printAllInfo(head);
                break;

            case 'C':
                printf("\nYou selected \"C\", Printing number of copies available for a book...\n");
                printNumOfCopies(head);
                break;

            case 'D':
                printf("\nYou selected \"D\", Removing Book from Database...\n");
                head = deleteBookFromDB(head);
                break;

            case 'E':
                printf("\nYou selected \"E\", Loaning out a book...\n");
                loanOutBook(head);
                break;

            case 'F':
                printf("\nYou selected \"F\", Automatically populating library...\n");
                head = autoPopLib(head);
                break;

            case 'Q':
                printf("\nYou selected \"Q\", Quit\n");
                return 0;
                break;

            default:
                printf("\nPlease type a valid character");
                break;
        }
        printf("\n");
    }

    return 0;
}
