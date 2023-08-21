#include<stdio.h>
#include<conio.h>
float average(int,int,int);
int main ()
{
    int a, b, c;
    float d;
    printf("enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    d=average(a,b,c);
    printf("%f",d);
return 0;
}
float average(int x, int y, int z)
{
    float r;
    r=(x+y+z)/3;
    return r;
}