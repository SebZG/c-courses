/* Exercise 1-6.

   Verify that the expression getchar() != EOF is 0 or 1.
 */

#include <stdio.h>

int main(void)
{
    int c;

    printf("Enter characters, press Ctrl+D (Unix/Mac) or Ctrl+Z (Windows) to end\n");

    while (c = getchar() != EOF)
    {
        printf("getchar() != EOF evaluates to: %d\n", c);
    }

    printf("EOF reached. getchar() != EOF evaluates to: %d\n", c);

    return 0;
}