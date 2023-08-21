#include <stdio.h>
#include <conio.h>
int main()
{
   int i, j, arr1[200], arr2[200], set[200], k = 0, count = 0;
   printf("give element for arr1 : ");
   for (i = 0; i < 4; i++)
   {
      scanf("%d", &arr1[i]);
   }
   printf("give element for arr2 : ");
   for (j = 0; j < 4; j++)
   {
      scanf("%d", &arr2[i]);
   }
   for (i = 0; i < 4; i++)
   {
      for (j = 0; j < 4; j++)
      {
         if (arr1[i] == arr2[j])
         {
            set[k] = arr1[i];
            k++;
            count++;
         }
         
      }
   }
   for (k = 0; k < count; k++)
   {
      printf(" %d ", set[k]);
   }
   return 0;
}