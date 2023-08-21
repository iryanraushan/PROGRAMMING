#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 0; i <= 10; )
    {
        sum = sum + i ;
        printf("value is %d\n", i++);
    }
    printf("sum is %d",sum);
}