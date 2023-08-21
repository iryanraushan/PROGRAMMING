#include <stdio.h>
int main()
{
   int arr1[100], arr2[100], n1, n2, loc;
   printf("how many num u want to store in arr1 :\n");
   scanf("%d", &n1);

   printf("give element for arr1 :\n");
   for (int i = 0; i < n1; i++)
   {
      scanf("%d", &arr1[i]);
   }
   printf("your arr1 is : ");
   for (int i = 0; i < n1; i++)
   {
      printf("  %d  ", arr1[i]);
   }
   printf("\n");
   printf("how many num u wan to store in arr2 :");
   scanf("%d", &n2);

   printf("give element for arr2 :\n");
   for (int i = 0; i < n2; i++)
   {
      scanf("%d", &arr2[i]);
   }

   printf("your arr2 is : ");
   for (int i = 0; i < n2; i++)
   {
      printf("  %d  ", arr2[i]);
   }

   printf("\ngive location where u ewant to store arr2 in arr1 :");
   scanf("%d", &loc);

   for (int i = n1 - 1; i >= loc; i--)
   {
      arr1[i + n2] = arr1[i];
   }
   for (int i = 0; i < n2; i++)
   {
      arr1[loc + i] = arr2[i];
   }
   printf("\n new array is : ");
   for (int i = 0; i < (n1 + n2); i++)
   {
      printf("  %d  ", arr1[i]);
   }
   return 0;
}