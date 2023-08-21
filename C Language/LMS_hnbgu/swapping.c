/*Swapping of two integers using call by value and call by reference*/
#include <stdio.h>
#include <conio.h>
void swapR(int *, int *); //call by reference
void swapC(int, int);     // call by value
int main()
{
    int a, b; //variable declaration
    a = 10;   //initial assignment or variable initialization
    b = 20;
    printf("\n\n\n the value of a and b before swaping: %d %d", a, b);
    swapR(&a, &b); //function calling
    //swapC(a,b);
    printf("\n\n\n the value of a and b after swaping: %d %d", a, b);
    getch();
    return 0;
} // return statment
// pointer variable
void swapC(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("\n\n the value of x and y after swaping: %d %d", x, y);
}
void swapR(int *x, int *y)
{
    int *temp;
    *temp = *x;
    *x = *y;
    *y = *temp;
    printf("\n\n the value of x and y before swaping: %d %d", *x, *y);
}
