#include <stdio.h>

/* Count Characters in input; 1st version */

/* int main()
{
    long nc;

    nc = 0;  // initialize counter to 0
    while (getchar() != EOF)
    {
        ++nc;  // Increment count for each character
    }

    printf("%ld\n", nc);

    return 0;
} */

int main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ; // null statement
    
    printf("%.0f\n", nc);

    return 0;
}