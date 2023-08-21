//Write a program in C to copy the elements of one array into another array.
#include<stdio.h>
#include<conio.h>
int main ()
{
    int arr1[5], arr2[5];
    for (int i=0;i<5;i++)
    {
        printf("give %d no. is ",i);
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("your array is %d ",arr1[i]);
    }
    for (int i=0;i<5;i++)
    {
        arr2[i]=arr1[i];
    }
    for(int i=0;i<5;i++)
    {
        printf(" \n your copied array is %d",arr2[i]);
    }

return 0;
}