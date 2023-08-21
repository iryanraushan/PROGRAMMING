//Write a C program to check whether a given number is positive or negative. 
#include<stdio.h>
int main ()
{
    int a;
    printf("give a number : ");
    scanf("%d",&a);
    if (a>0)
    printf("your no. is positive ");
    else
    printf("your no. is negative ");
    return 0;
}