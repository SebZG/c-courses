#include <stdio.h>

int main()
{
    char c; // reserve memory (8 bits)

    c = ';'; // put ; inside the memory reserved the name c
    printf("c read as a character is: %c\n", c); // read as a character
    printf("c read as an int is: %i\n", c); // read it as an int
    printf("c read as a hexadecimal is: %x\n", c); // read it as a hexadecimal

    return 0;
}
