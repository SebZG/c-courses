#include <stdio.h>

// %[flags][width][.precision][length]specifier

int main()
{
    short s = 12345;
    long l = 1234567890;
    long double ld = 3.1415926535;

    // Output using proper format specifiers
    printf("Short int (%%hd): %hd\n", s);    // 12345
    printf("Long int  (%%ld): %ld\n", l);    // 123456789
    printf("Long double (%%Lf): %Lf\n", ld); // 3.141593

    return 0;
}
