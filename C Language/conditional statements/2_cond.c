//Write a C program to check whether a given number is even or odd. 
#include<stdio.h>
int main()
{
    int a, c;
    printf("give two number :");
    scanf("%d",&a);
    c = a % 2;
    if (c==0)
    {
        printf("your number is even ");
    }
    else 
        printf("your number is odd ");
    return 0;
}