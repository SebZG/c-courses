#include <stdio.h>

enum Day
{
    Mon = 1,
    Tue = 2,
    Wed = 3,
    Thu = 4,
    Fri = 5,
    Sat = 6,
    Sun = 7
};

int main()
{
    // enum(eration) = a user defined type of named integer identifiers
    //                 helps to make a program more readable.

    enum Day today = Sun;

    // printf("%d", today);  // enums are NOT STRINGS, but they can be treated as int

    if (today == Sat || today == Sun)
    {
        printf("\nWeekend");
    }
    else
    {
        printf("\nWeekday");
    }

    return 0;
}