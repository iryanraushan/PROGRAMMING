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
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("your array is in accending order.: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    // descending order.
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("\nyour array is in descending order.: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
}