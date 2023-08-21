// //1. Write a program in C to store elements in an array and print it.
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 5;i++)
//     {
       
//         printf("your no. is %d\n", arr[i]);
//     }
//     getch();
//     return 0;
// }
#include<stdio.h>

int main()
{
    int n=21;
int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("not prime");
         break;
        }
    }
    if (i==n-1)
    {
        printf("prime no");
    }
return 0;
}