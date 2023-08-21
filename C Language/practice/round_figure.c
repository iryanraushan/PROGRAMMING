#include<stdio.h>
#include<conio.h>
void clrscr (void);
int main ()
{
     clrscr();
     float num, num1;
     int num2, x, num3;
     printf("enter a number : ");
     scanf("%f", &num);

     num1 = num * 10;
     num2 = (int)num1;
     x = num2 % 10;
     num3 = num2 / 10;
     if(x > 5)
     printf("round figure of num is %d.", num3 + 1);
     else if (x < 5 )
     printf("round figure of num is %d.", num3);
     else
     printf("round figure of num is %d.", num);

return 0;
}