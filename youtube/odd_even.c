#include <stdio.h>
int odd_even(int);
int main()
{
   int num;
   printf("give a number to check odd or even :");
   scanf("%d", &num);

   odd_even(num);
   if (odd_even(num) == 1)
   {
      printf("%d is a even number.", num);
   }
   else
   {
      printf("%d is a odd number.", num);
   }

   // thanks to all...........

   // if (num %2==0)
   // {
   //    printf("%d is a even number.", num);
   // }
   // else
   // {
   //    printf("%d is a odd number.",num);
   // }
   return 0;
}
int odd_even(int num)
{
   if (num % 2 == 0)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}