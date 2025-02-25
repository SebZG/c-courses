#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //char a[] = {'H','e','l','l','o',' ','W','\0','r','l','d','!'};
    char a[] = "Hello World!";
    char b[500];
    int count;

    printf("%s\n", a);

    scanf("\n%s", &b);

    printf("%s\n", b);

//    for(count=0; count<13; count++)
//    {
//        //printf("%c",a[count]);
//        printf("\nArray element %d: %d lives in 0x%x", count, a[count], &a[count]);
//    }


    return 0;
}

