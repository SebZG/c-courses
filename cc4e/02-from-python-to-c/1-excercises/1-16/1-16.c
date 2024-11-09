#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int main()
{
    char line[MAXLINE];

    while (fgets(line, MAXLINE, stdin))
    {
        // Remove trailing newline character
        int len = strlen(line);
        if (line[len - 1] == '\n')
        {
            line[--len] = '\0';
        }

        // Remove trailing blanks and tabs
        int i = len - 1;
        while (i >= 0 && (line[i] == ' ' || line[i] == '\t'))
        {
            i--;
        }

        // If line is not entirely blank, print it
        if (i >= 0)
        {
            printf("%.*s\n", i + 1, line);
        }
    }

    return 0;
}