#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c)
{
   int sum = a+b+c;
   if (n == 3)
   {
      return c;
   }
   else if (n == 2)
   {
      return b;
   }
   else if (n == 1)
   {
      return a;
   }
   else
   {
      if(n == n-3)
      return sum;
      else
      sum = sum + find_nth_term(n-1, b, c, sum);
   }
   return 0;
}
                
int main()
{
   int n, a, b, c;

   scanf("%d %d %d %d", &n, &a, &b, &c);
   int ans = find_nth_term(n, a, b, c);

   printf("%d", ans);
   return 0;
}