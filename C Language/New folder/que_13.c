//13. Write a program to print sum of digits.
#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,x, sum=0;
    printf("enter a number : ");
    scanf("%d", &a);
    while(a!=0)
    {
        x=a%10;
        sum = sum + x;
        a=a/10;
    }
    printf("sum of digit is = %d.", sum);
return 0;
}