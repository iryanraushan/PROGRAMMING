#include "stdio.h"
   int  n, i,x, arr1[100];
int main()
{
   printf("give a value : ");
   scanf("%d", &n);
   while (n)
   {
      x = n % 2;
      arr1[7 - i] = x;
      n = n / 2;
      i++;
   }
   printf("your binary code is = ");
   for (int i = 0; i < 8; i++)
   {
      printf(" %d", arr1[i]);
   }
return 0;
}