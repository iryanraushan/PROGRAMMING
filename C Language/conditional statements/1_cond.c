//Write a C program to accept two integers and check whether they are equal or not.
#include<stdio.h>
int main ()
{
    int a, b;
    printf("give two value : ");
    scanf("%d %d",&a,&b);
    if (a == b)
    {
        printf("both are same value ");
    }
    else
    {
        printf("both are not same ");
    }
    return 0;
}