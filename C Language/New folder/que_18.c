#include <stdio.h>
#include <conio.h>
int main()
{
   int k;
   int row;
   printf("entre a row\n");
   scanf("%d", &row);
   for (int i = 1; i <= row; i++)
   {
     
      for (int j = 1; j <= (row * 2) - 1; j++)
      {
         if (j >= (row + 1) - i && j <= (row - 1) + i && k)
         {
            printf("*");
            k = 0;
           
         }
         else
         {
            printf(" ");
            k = 1;
         }
      }
      printf("\n");
   }
   return 0;
}