#include <stdio.h>

// %[flags][width][.precision][length]specifier

// -: Left-justify within the field width.
// +: Always show the sign for numeric values.
// 0: Pad with zeros instead of spaces.
// #: Alternate form (e.g., prefix 0x for hex, include decimal point for floats).
// (space): Add a space for positive numbers.

int main()
{
    int num = 42;
    int neg = -42;
    float f = 3.5;
    int hex = 255;

    // '-' : Left-justify within 10-character
    // width
    printf("Left-justify: '%-10d'\n", num); // "42"

    // '+' : Always show sign
    printf("With sign: '%+d', '%+d'\n", num, neg); // "+42", "-42"

    // '0' : Pad with zeros (width 5)
    printf("Zero-padded: '%05d'\n", num); // "00042"

    // '#' : Alternate form
    printf("Hex with #: '%#x'\n", hex);   // "0xff"
    printf("Octal with #: '%#o'\n", hex); // "0377"
    printf("Float with #: '%#f'\n", f);   // "3.500000"

    // ' ' (space): Adds space for positive
    // numbers
    printf("Space for sign: '% d', '% d'", num, neg); // " 42", "-42"

    return 0;
}
