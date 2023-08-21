//9. Write a program to print fibonacci series.
#include <stdio.h>
#include <conio.h>
void fibonacci(int);
void display(int*, int);
int main()
{
  int count;
  scanf("%d", &count);
  fibonacci(count);
  return 0;
}
void fibonacci(int count)
{
  int i, num1 = 0, num2 = 01, sum = 0;
   int arr[10000];
  arr[0] = num1;
  arr[1] = num2;
  for (i = 2; i < count; i++)
  {
    sum = num1 + num2;
    arr[i] = sum;
    num1 = num2;
    num2 = sum;
  }
  display(arr, count);
}
void display(int* ptr,int  count)
 { for (int i = 0; i < count; i++)
  {
    printf(" %d ", ptr[i]);
  }}
// done ........
