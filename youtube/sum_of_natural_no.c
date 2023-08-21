#include <stdio.h>
int main ()
{
   int num, sum=0, i; 
   printf("give a value :");
   scanf("%d", &num);   
   for (i= 0; i <=num ; i++)
   {
      sum = sum +i;
   }
   printf(" sum is %d", sum);
   return 0;
}