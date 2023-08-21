#include<stdio.h>
#include<conio.h>
int main ()
{
   char arr[1000];
   fgets(arr,100,stdin);
   printf("Hello, world!\n");
   puts(arr);
   printf("%s",arr);
return 0;
}