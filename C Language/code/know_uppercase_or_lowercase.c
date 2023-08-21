#include <stdio.h>
int main()
   {
     char x;
     int a;
     scanf("%c",&x);
     a = x;
     printf("%d\n", a);
     
     if (a >= 97 && x<= 122)
     {
        printf ("%c is lowercase.",x);
     }
     else 
     {
        printf("%c is upper case.",x);
     }
     return 0;
   }