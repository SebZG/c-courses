/*
Exercise 1-14.

Revise the main routine of the longest-line program so
it will correctly print the length of arbitrarily long input lines,
and as much as possible of the text.
 */

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int get_line(char line[], int lim);
void copy(char s1[], char s2[]);

int main(void)
{
    int len;            /* current line length */
    int max;            /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char save[MAXLINE]; /* longest line, saved */

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(line, save);
        }
    }
    if (max > 0) /* there was a line */
        printf("%d: %s\n", max, save);
    return 0;
}

int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return (i);
}

void copy(char s1[], char s2[])
{
    int i;

    i = 0;
    while ((s2[i] = s1[i]) != '\0')
        ++i;
}