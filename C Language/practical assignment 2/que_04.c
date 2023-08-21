//4. Write a program to compute quotient and remainder.
#include <stdio.h>
#include <conio.h>
void display(int, int);
int main()
{
    int dend , dsor;
    printf("enter dividend : ");
    scanf("%d", &dend);
    printf("enter divisor : ");
    scanf("%d",&dsor);
    display (dend, dsor);
    return 0;
}
void display(int dend, int dsor)
{
   printf("your quotient is %d,\n", dend / dsor);
   printf("your reminder is %d.",  dend % dsor);
}
 // done .....