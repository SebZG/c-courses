#include <stdio.h>
#include <stdlib.h>

int main()
{
    int var_1;  //data type = int
    int var_2;  //data type = int
    int var_3;  //data type = int
    int var_4;  //data type = int
    int var_5;  //data type = int
    int var_6;  //data type = int
    int *var_7; //data type = int pointer
    int var_8;  //data type = int

    var_1 = 0x5DA96D;
    var_2 = 0x4DABA5;
    var_3 = 0xFAFAFA;
    var_4 = 0x699C5A;
    var_5 = 0xF4F4F4;
    var_6 = 0xFF1AA2;
    var_7 = &var_3; // assign the address of something to the pointer
                    //since the pointer is simply a variable
    var_8 = 0x322DAA;

    printf("var_1 contains %x and lives in location %x\n", var_1, &var_1);
    printf("var_2 contains %x and lives in location %x\n", var_2, &var_2);
    printf("var_3 contains %x and lives in location %x\n", var_3, &var_3);
    printf("var_4 contains %x and lives in location %x\n", var_4, &var_4);
    printf("var_5 contains %x and lives in location %x\n", var_5, &var_5);
    printf("var_6 contains %x and lives in location %x\n", var_6, &var_6);
    printf("var_7 contains %x and lives in location %x\n",
           var_7,
           &var_7); //var_7 is a special variable, it is a pointer
    printf("var_8 contains %x and lives in location %x\n", var_8, &var_8);

    printf("\nde-referencing var_7 gives us %x\n", *var_7);

    *var_7 = 0xAAAAAA;

    printf("\nde-referencing var_7 gives us %x\n", *var_7);

    printf("var_3 contains %x and lives in location %x\n", var_3, &var_3);

    return 0;
}
