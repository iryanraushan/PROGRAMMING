#include <stdio.h>
#include <conio.h>
float average(int *);
int main()
{
    float avg;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    avg = average(arr);
    printf("\n\n The average: %f", avg);
    getch();
    return 0;  
}

float average(int *p)
{
    float sum = 0;
    float avg;
    for (int i = 0; i < 10; i++)
        sum = sum + *(p + i);
    avg = sum / 10;
    return avg;
}