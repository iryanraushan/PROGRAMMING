#include <stdio.h>
int check(char*);
void display(int);
int main()
{
   char arr[100];
   printf("enter a number : ");
   scanf("%s", &arr);
   display(check(arr));
}
int check(char *arr)
{
   int i=0;
   while (arr[i] != '\0')
   {
      if(arr[i]== '.')
      {
         return 1;
      }
      i++;
   }
}
void display(int n)
{
   if(n)
   {
      printf(" float value .");
   }
   else
   printf(" ineger value .");
}