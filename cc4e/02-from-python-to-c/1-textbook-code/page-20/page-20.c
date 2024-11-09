/*
In C, the ASCII value of a character can be obtained by
subtracting the ASCII value of '0' from the character.
This is because the ASCII values for the digits '0'
through '9' are consecutive, starting at 48 for '0'.

For example, the ASCII value of '0' is 48, so subtracting
48 from '0' gives us 0. Similarly, the ASCII value of '1'
is 49, so subtracting 48 from '1' gives us 1, and so on.

This allows us to convert a character representing a digit
into its corresponding numerical value.
 */

#include <stdio.h>

main() /* count digits, white space, others */
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    printf("digits =");

    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);

    printf("\nwhite space = %d, other = %d\n",
        nwhite, nother);
}