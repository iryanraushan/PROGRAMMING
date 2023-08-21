//Write a program in C to find the sum of all elements of the array.
#include<stdio.h>
#include<conio.h>
int main ()
{
    int arr[5],sum=0;
    for (int i=0;i<5;i++)
    {
      printf("give 5 no. for sum ");
      scanf("%d",&arr[i]);
    }
    for (int i=0;i<5;i++)
    {
          sum = sum + arr[i];
      printf("your array is %d,  ",arr[i]);
          
    }
    printf("\nyour sum  is %d ",sum);
return 0;
}