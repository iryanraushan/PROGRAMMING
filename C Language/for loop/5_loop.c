//Write a program in C to display the cube of the number upto given an integer.
#include <stdio.h>
int main()
{
    int num, cube;
    printf("give a number ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        cube = i * i * i;
        printf("your number is %d and cube of this num is %d \n", i, cube);
    }
    return 0;
}