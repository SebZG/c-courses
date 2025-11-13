#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;

    x = 127;

    x = x+1;

    printf("x = %d in decimal", x);
    printf("\nx = %x in hexadecimal", x);

    x = x+8;

    printf("\n\nx = %d in decimal", x);
    printf("\nx = %x in hexadecimal\n\n", x);

    return 0;
}
