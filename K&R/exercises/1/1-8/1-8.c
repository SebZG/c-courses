/* Exercise 1-8. 

   Write a program to count blanks, tabs, and newlines. 
*/

#include <stdio.h>

int main(void)
{
    int c, b, t, n;

    b = t = n = 0;
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
            ++n;
        }
    }

    printf("Blanks: %d\n", b);
    printf("Tabs: %d\n", t);
    printf("Newlines: %d\n", n);

    return 0;
}