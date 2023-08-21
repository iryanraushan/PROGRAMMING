#include <stdio.h>
int main ()
{
   int num, i, arr[100], j= 0, count = 0, sum = 0;
   printf("enter a integer : ");
   scanf("%d", &num); 
/*A perfect number is a positive integer that 
is equal to the sum of its positive divisors,
excluding the number itself. 
for example :

15 has divisors  1, 3, 5.
and  1 + 3 + 5 = 9,
so 15 isn't a perfect number.

6 has divisors 1, 2 and 3. 
and 1 + 2 + 3 = 6,
so 6 is a perfect number.*/
   for (i = 1 ; i < num; i++)
   {
      if (num % i == 0)
      {
          arr[j] = i;
          count++;
          j++;
      }
   }
   printf("your all divisors is : ");
   for(j = 0; j<count; j++)
   {
      printf(" %d ", arr[j]);
   }
   for (j = 0; j< count ;j++)
   {
      sum = sum + arr[j];
   }
   printf("\nsum of all divisors is %d.\n",sum);
   if(sum == num )
   {
      printf("%d is a perfect number.", num);
   }
   else 
   {
       printf("%d isn't a perfect number.", num);
   }
   return 0;
}