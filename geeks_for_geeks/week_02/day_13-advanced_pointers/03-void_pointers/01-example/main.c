// C Program to demonstrate that a void pointer
// can hold the address of any type-castable type

#include <stdio.h>
int main()
{
    int a = 10;
    char b = 'x';

    // void pointer holds address of int 'a'
    void *p = &a;
    // void pointer holds address of char 'b'
    p = &b;
}
