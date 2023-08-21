#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int arr1[8], x, i, arr2[8], arr3[8], arr4[8], arr5[8], arr6[8];

void calculate_the_maximum(int n, int k)
{
   int count =0, j=0, y=0;
   while (n)
   {
      x = n % 2;
      arr1[7 - i] = x;
      n = n / 2;
      i++;
   }
   for (int i = 0; i < 8; i++)
   {
      printf(" %d ", arr1[i]);
   }
   i = 0;
   while (k)
   {
      x = k % 2;
      arr2[7 - i] = x;
      k = k / 2;
      i++;
   }
   printf("\n");
   for (int i = 0; i < 8; i++)
   {
      printf(" %d ", arr2[i]);
   }
   for (i = 0; i < 8; i++)
   {
      arr3[i] = arr1[i] && arr2[i];
      arr4[i] = arr1[i] || arr2[i];
      arr5[i] = arr1[i] ^ arr2[i];
   }
   printf("\n");
   for (int i = 0; i < 8; i++)
   {
      printf(" %d ", arr3[i]);
   }
   printf("\n");
   for (int i = 0; i < 8; i++)
   {
      printf(" %d ", arr4[i]);
   }
   printf("\n");
   for (int i = 0; i < 8; i++)
   {
      printf(" %d ", arr5[i]);
   }
   
   for(int i = 7; i>=0; i--)
   {
      if(arr3[i]==1)
      {
       y= y + pow(2, count);
       j++;
      }
       count++;
   }
   printf("\n %d", y);
   y=0;
   count=0;
   for(int i = 7; i>=0; i--)
   {
      if(arr4[i]==1)
      {
       y= y + pow(2, count);
       j++;
      }
       count++;
   }
   printf("\n %d", y);
   y=0;
   count=0;
   for(int i = 7; i>=0; i--)
   {
      if(arr5[i]==1)
      {
       y= y + pow(2, count);
       j++;
      }
       count++;
   }
      printf("\n %d", y);
}

int main()
{
   int n, k;

   scanf("%d %d", &n, &k);
   calculate_the_maximum(n, k);

   return 0;
}
