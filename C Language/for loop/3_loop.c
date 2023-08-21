#include<stdio.h>
int main()
{
    int num , sum = 0 ;
    printf("give a number ");
    scanf("%d",&num);
    for (int i = 0 ; i <= num ;  )
    {
        sum = sum + i ;
        printf(" vLue is %d \n ",i++);
    }
    printf("your sum is up to  is %d ",sum);
   
    return 0;
}