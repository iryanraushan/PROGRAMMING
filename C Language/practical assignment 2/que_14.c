//14. Write a program to reverse given number.
#include <stdio.h>
#include <conio.h>
void reverse_num(int);
void display(int*, int);
int main()
{
    int num;
    printf("give a number:");
    scanf("%d", &num);
    reverse_num(num);
    return 0;
}
void reverse_num(int num)
{
    int i = 0, arr[1000], count = 0;
    while (num != 0)
    {
        arr[i] = num % 10;
        i++;
        count++;
        num /= 10;
    }
    display(arr, count);
}
void display(int* ptr, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d", ptr[i]);
    }
}