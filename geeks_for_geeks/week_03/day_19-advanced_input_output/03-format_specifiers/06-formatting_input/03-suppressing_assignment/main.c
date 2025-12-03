#include <stdio.h>

int main()
{
    int num;

    // Skips first integer, reads second
    scanf("%*d %d", &num);     // "24 54"
    printf("Read: %d\n", num); // "54"

    return 0;
}
