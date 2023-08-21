#include<stdio.h>
#include<conio.h>
int main ()
{
    int arr[6];
    for (int i = 0; i < 6; i++){
        scanf("%d", &arr[i]);
    }

    for (int  i = 0; i < 6; i++)
    {
        printf("%d  ",  arr[i]);
    }
    
return 0;
}