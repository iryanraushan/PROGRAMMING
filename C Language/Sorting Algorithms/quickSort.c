#include <stdio.h>
int main()
{
    int temp, j = 0;
    int arr[100];
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // accending order
    

    printf("your array is in accending order.: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    // descending order.
    
    
    printf("\nyour array is in descending order.: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
}