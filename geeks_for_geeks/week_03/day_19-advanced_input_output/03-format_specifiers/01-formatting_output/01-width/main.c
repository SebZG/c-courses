#include <stdio.h>

// %[flags][width][.precision][length]specifier

int main()
{
    int num = 42;
    char name[] = "Geeks";

    // Integer with width 5
    printf("Integer with width 5: '%5d'\n", num); // "   42"

    // String with width 10
    printf("Name with width 10: '%10s'\n", name); // "     Geeks"

    // Integer with width less than digits in number
    printf("Large number with width 5: '%5d'\n", 123456); // "12345"

    // String with width less than string length
    printf("Long name with width 5: '%5s'\n", "forGeeks"); // "forGeeks"

    return 0;
}
