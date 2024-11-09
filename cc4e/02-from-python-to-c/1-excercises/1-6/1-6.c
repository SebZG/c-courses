/*
Exercise 1-6.

Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

int main()
{
    int c, b, t, nl;

    b = t = nl = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++b;
        }
        else if (c == '\t')
        {
            ++t;
        }
        else if (c == '\n')
        {
            ++nl;
        }
    }

    printf("Blanks: %d\n", b);
    printf("Tabs: %d\n", t);
    printf("Newlines: %d\n", nl);

    return 0;
}

/* count lines, words, chars in input */
/* #include <stdio.h>

#define YES 1
#define NO 0

main()
{
    int c, nl, nw, nc, inword;

    inword = NO;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            inword = NO;
        else if (inword == NO)
            inword = YES;
        ++nw;
    }
    printf("%d %d %d\n", nl, nw, nc);
} */