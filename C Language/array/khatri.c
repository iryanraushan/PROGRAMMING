#include <stdio.h>
int main()
{
     int D, M, Y, b[13], sum = 0, d, i;
     printf("Enter the day:");
     scanf("%d", &D);
     printf("Enter the month:");
     scanf("%d", &M);
     printf("Enter the year starting from 2001:");
     scanf("%d", &Y);
     b[0] = 0;
     b[1] = 31;
     b[2] = 28;
     b[3] = 31;
     b[4] = 30;
     b[5] = 31;
     b[6] = 30;
     b[7] = 31;
     b[8] = 31;
     b[9] = 30;
     b[10] = 31;
     b[11] = 30;
     b[12] = 31;
     if (((Y % 4 == 0) && (Y % 100 != 0)) || (Y % 400 == 0))
          b[2] = 29;
     while (M > 0)
     {
          sum = sum + b[M - 1];
          M = M - 1;
     }
     d = Y - 2001;
     i = 365 * d + d / 4 + D - 1 + sum;
     while (i > 6)
          i = i - 7;
     if (i == 0)
          printf("Monday");
     else if (i == 1)
          printf("Tuesday");
     else if (i == 2)
          printf("Wednesday");
     else if (i == 3)
          printf("Thursday");
     else if (i == 4)
          printf("Friday");
     else if (i == 5)
          printf("Saturday");
     else
          ("Sunday");
}