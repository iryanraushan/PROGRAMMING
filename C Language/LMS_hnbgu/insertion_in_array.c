#include <stdio.h>
#include <conio.h>

void main()
{
    int arr[10] = {32, 2, 7, 8, 4, 0, 12, 17, 45, 67};
    int i, loc, N, p;
    printf("the contents of array are:\n");
    for (i = 0; i < 10; i++)
        printf("arr[%d] = %d\t", i, arr[i]);
    printf("enter the element to be inserted");
    scanf("%d", &p);
    printf("%u", &p);
    printf("enter the location where is to be inserted: \n");
    scanf("%d", &loc);
    for (i = 9; i >= loc; i--)
        arr[i + 1] = arr[i];
    //arr[loc] = 100;
    arr[loc] = p;
    printf("%u", &arr[10]);
    printf("the contents of array are:\n ");
    for (i = 0; i < 11; i++)
        printf("arr[%d] = %d\n", i, arr[i]);
    getch();
}  