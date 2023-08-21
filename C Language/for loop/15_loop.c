//Write a program in C to make such a pattern like a pyramid with an asterisk.
#include<stdio.h>
#include<conio.h>
int main ()
{ 
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            
            printf("*");
        }
        printf("\n");
    }
return 0;
}