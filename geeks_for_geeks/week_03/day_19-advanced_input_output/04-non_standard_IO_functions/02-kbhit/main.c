#include <conio.h>
#include <stdio.h>
int main()
{
    printf("Press any key to continue, or wait...\n");

    while (!kbhit())
    {
        printf("Waiting...\n");

        // Non-standard sleep, discussed later
        sleep(1);
    }
    printf("Key pressed: %c\n", getch());
    return 0;
}
