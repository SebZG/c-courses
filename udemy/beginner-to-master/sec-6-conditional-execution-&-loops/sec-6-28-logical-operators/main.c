#include <stdio.h>
#include <stdlib.h>

int main()
{
   // short X = 51;
   short Y = 58419;
   // short Y = 0;

   if(!Y)
   {
      printf("TRUE");
      //printf("\nX in memory is %x",X);
      printf("\nY in memory is %x\n",Y);
   }
   else
   {
      printf("FALSE");
      //printf("\nX in memory is %x",X);
      printf("\nY in memory is %x\n",Y);
   }

   return 0;
}
