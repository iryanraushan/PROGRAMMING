#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

   char str[1000];
   int  a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, j = 0, k = 0;
   scanf("%s", str);
   for (int i = 0; i < strlen(str); i++)
   {
      if (str[i] == '0')
      {
         a++;
      }
      if (str[i] == '1')
      {
         b++;
      }
      if (str[i] == '2')
      {
         c++;
      }
      if (str[i] == '3')
      {
         d++;
      }
      if (str[i] == '4')
      {
         e++;
      }
      if (str[i] == '5')
      {
         f++;
      }
      if (str[i] == '6')
      {
         g++;
      }
      if (str[i] == '7')
      {
         h++;
      }
      if (str[i] == '8')
      {
         j++;
      }
      if (str[i] == '9')
      {
         k++;
      }
   }
   printf("%d %d %d %d %d %d %d %d %d %d", a, b, c, d, e, f, g, h, j, k);
   return 0;
}
