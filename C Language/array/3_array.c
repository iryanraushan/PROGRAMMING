//Write a program in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
#include<conio.h>
int main ()
{
    int arr[3];
    for(int i=0;i<3;i++)
    {
    printf("give %d for array:",i);
    scanf("%d",&arr[i]);
    }
    for (int i=2;i>=0;i--)
    printf("your array is %d  ,",arr[i]);
return 0;
}