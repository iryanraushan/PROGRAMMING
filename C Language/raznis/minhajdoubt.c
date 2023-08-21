#include <stdio.h>
#include <math.h>
int main()
{
     int num = 7, i;
     i = 2;
     while (i <= num - 1)
     {
          if (num % i == 0)
          {
               printf("not a prime");
               break;
          }
          i++;
     }
     if (i == num)
     {
          printf("\n%d", i);
     }
     return 0;
}