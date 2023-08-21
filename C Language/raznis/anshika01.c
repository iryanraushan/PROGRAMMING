#include<stdio.h>
#include<conio.h>
int main ()
{ 
    for(int i =0;i<=4;i++)
    {
        for(int j=1;j<=5;j++)
        if(j<=1+i)
        {
            printf("%d",i+1);
        }
        else
        {
            printf(" ");
        }
        printf("\n");
    }
return 0;
}