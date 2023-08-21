#include "stdio.h"
int perfect_square(int);
void display(int);

int main()
{
   int num;
   scanf("%d", &num);
   display(perfect_square(num));

}
int perfect_square(int num)
{
   for(int i = 0; i <= num; i++)
   {
      if(num == i*i)
      {
         return 1;
      }
      
   }
}
void display(int n)
{
   if(n == 1)
   {
      printf("is a perfect square.");
   }
   else
   printf("is not perfect square.");
}