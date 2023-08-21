//8. Write a program to find largest element in an array.
#include <stdio.h>
#include <conio.h>
void display(int);
int largestnum(void);
int main()
{
   display(largestnum());
}
int largestnum()
{
    int n, arr[1000];
    printf("enter array's length : ");
    scanf("%d", &n);
    for(int i=0;i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++)
    {
        if(arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    return arr[0];
}
void display(int num)
{
    printf("largest number in your array is %d.", num);
}