#include <stdio.h>
int main()
{
    int i = 0, num, sum = 0;
    float avg;
    printf("give a number ");
    scanf("%d", &num);
    for (i; i <= num; i++)
    {
        sum = sum + i;
        printf("you value is %d \n",i);
    }
    printf("you sum is %d \n", sum);

    avg = sum / num;
    printf("your average is %f ", avg);
    return 0;
}