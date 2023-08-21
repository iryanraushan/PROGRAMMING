#include <stdio.h>
int main()
{
    int temp, j;
    int arr[100];
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // accending order
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if ((arr[i] > arr[i + 1]))
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    printf("your array is in accending order.: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    // descending order.
    for (int j = 0; j < size; j++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if ((arr[i] < arr[i + 1]))
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    printf("\nyour array is in descending order.: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
}