#include "stdio.h"
int check(char*);
void display(int);
int  main()
{
   char num[1000];int i = 0, s = 0;
   scanf("%s", &num);
   s=check(num);
      if(s)
   {
      printf("float ");
   }
   else
   {
      printf("int");
   }
   display(s);
   return 0;
}
int check(char *num)
{
   int i=0, s=0;
   while (num[i] != '\0')
   {
      if(num[i] == '.')
      {
         return 1;
      }
      i++;
   }

}
void display(int n)
{
   if (n)
   printf("float");
   else
   printf("int");
}