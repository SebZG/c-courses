#include <conio.h>
#include <stdio.h>
int main()
{
    printf("Press a key (not echoed): ");
    int ch = getch();
    printf("\nYou pressed: %c\n", ch);
    printf("Press a key (echoed): ");
    ch = getche();
    printf("\nYou pressed: %c\n", ch);
    return 0;
}
