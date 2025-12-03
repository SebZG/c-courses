#include <stdio.h>

// %[flags][width][.precision][length]specifier

int main()
{
    int width = 10;
    float num = 3.14159;

    // Dynamic width
    printf("%*d\n", width, 42); // "        42"

    // Dynamic precision
    printf("%.*f\n", 2, num); // "3.14"
    return 0;
}
