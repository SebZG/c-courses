#include <stdio.h>

// Defining enum
enum enm
{
    a = 3,
    b = 2,
    c
};

int main()
{

    // Creating enum variable
    enum enm v1 = a;
    enum enm v2 = b;
    enum enm v3 = c;
    printf("%d %d %d", v1, v2, v3);
    return 0;
}
