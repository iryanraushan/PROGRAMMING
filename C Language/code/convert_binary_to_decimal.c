#include "stdio.h"
#include "math.h"
int main ()
{
   int num[100], count =0, x=0, j=0;
   printf("enter a binary code : ");
   for(int i = 0; i< 8 ;i++)
   {
      scanf("%d", &num[7-i]);
   }
   
   for(int i = 0; i< 8 ;i++)
   {
      printf(" %d ", num[i]);
   }
   printf("\n");
   for(int i = 0; i< 8; i++)
   {
      if(num[i]==1)
      {
       x= x + pow(2, count);
       j++;
      }
       count++;
   }
      printf(" %d", x);
}