#include<stdio.h>
#include<conio.h>
int fun (int);
int main ()
{
    int k, n;
    printf("give a number:");
    scanf("%d",&n);
    k = fun(n);
    printf("%d",k);
return 0;
}
int fun(int a)
{
    int s;
    if (a == 1)
    return a;
    s = a + fun(a-1);
    return s;
}