#include <stdio.h>
#include <stdlib.h>
int main ()
{
   int i =(int) malloc(sizeof(int));
   i = 10;
   printf("%d", i);
   return 0;
}