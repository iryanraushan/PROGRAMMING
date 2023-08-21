//8. Write a program to find largest element in an array.
#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[100], n, i;
    printf("how many no. you rant to take in array\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("  %d array element is: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf(" your array is %d, ", arr[i]);
    }
    for (i = 1; i < n; ++i)
    {
        if (arr[0] < arr[i])
           {
                arr[0] = arr[i];
           }
    }

    printf(" \n\n Largest element = %d", arr[0]);
    return 0;
    getch();
}