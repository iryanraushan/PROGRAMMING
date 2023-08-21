#include <stdio.h>
int main()
{
   int x, i, j = 0, arr[100], sum = 0, count = 0;
   printf("give a num : ");
   scanf("%d", &x);
   for (i = 1; i < x; i++)
   {
      if (x % i == 0)
      {
         arr[j] = i;
         count++;
         j++;
      }
   }
   printf("%d\n", count);
   for (j = 0; j < count; j++)
   {
      printf(" %d ", arr[j]);
   }
   for (j = 0; j < count; j++)
   {
      sum = sum + arr[j];
   }
   printf("\n%d", sum);
   if (sum == x)
      printf("\n%d is a perfact no.", x);
   else
   {
      printf("\n%d isn't a perfact no.", x);
   }
   return 0;
}