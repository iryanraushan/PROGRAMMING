#include "stdio.h"
int main()
{
   int arr[100], n, x, j = 0, arr1[20000];
   printf("enter the array size: ");
   scanf("%d", &n);
   
   for (int i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
   printf("how many number you want to shift left from last: ");
   scanf("%d", &x);
   for (int i = n - x; i < n; i++)
   {
      arr1[j] = arr[i];
      j++;
   }
   printf("your array is : ");
    for (int i = 0; i < n ;i++)
   {
      printf(" %d ", arr[i]);
   }
   printf("\n your array is 1 : ");
   for (int i = 0; i < x; i++)
   {
      printf(" %d ", arr1[i]);
   }
   /*    5   6   8   9   45   67   99   === 7 
         0   1   2   3   4    5     6        
      3  === arr1 === 45 67 99
      7-3.....    i= 7-3 ;i > 0; i--;;;;arr[x+i ]  = arr[i ]  */
   for (int i = n - x; i >= 0; i--)
   {
      arr[x + i] = arr[i];
   }

   // for (int i= 0 ; i < n; i++)
   // {
   //    printf(" %d ", arr[i]);
   // }
   for(int i = 0; i < x; i++)
   {
     arr[i] = arr1[i];
   }
   printf("\n your new array is : ");
   for(int i = 0; i< n; i++)
   {
      printf(" %d ", arr[i]);
   }
}