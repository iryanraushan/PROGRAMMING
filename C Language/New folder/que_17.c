//17. Write a program to reverse an array.
#include <stdio.h>
#include <conio.h>
#include <string.h>
void input_array(int);
void display_array(int*, int);
int main()
{
    int n;
    scanf("%d", &n);
    input_array(n);
    return 0;
}
void  input_array(int n)
{
    int arr[10000];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    display_array(arr, n);

}
void display_array(int *ptr, int n)
{
    
    for(int i = n-1; i>= 0; i--)
    {
        printf(" %d ", ptr[i]);
    }
}