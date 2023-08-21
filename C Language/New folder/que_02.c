//2. Write a program to print and integer (entered by the user)
#include<stdio.h>
#include<conio.h>
void display(int);
int main ()
{
    int num;
    printf("give a number:\n");
    scanf("%d",&num);
    display(num);
return 0;
}
void display(int num)
{
    printf("number is %d", num);
}
    // DONE ......