//Write a program in C to count a total number of duplicate elements in an array.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a[3], i, j;
    for (i = 0; i < 3; i++)
    {
        printf("give %d element - ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf("your array is %d", a[i]);
    }
    
    return 0;
}