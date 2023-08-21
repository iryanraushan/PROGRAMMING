#include<stdio.h>
#include<conio.h>
int main ()
{
    char arr[250];
    int a=0;
    gets(arr);
    for (int i=0;arr[i]!=0;i++)
    {
       a = a + arr[i] - 96;
    }
    printf("%d",a);
return 0;
}