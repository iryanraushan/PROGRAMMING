//9. Write a program to print fibonacci series 
#include <stdio.h>
#include <conio.h>
int main()
{
  int count, n, t1 = 0, t2 = 1, num = 0;

  printf("Enter The Number of Terms :\n");
  scanf("%d", &n);

  printf("\nFibonacci Series : %d , %d , ", t1, t2);
  count = 2;
  while (count < n)
  {
    num = t1 + t2;
    t1 = t2;
    t2 = num;
    ++count;
    printf("%d , ", num);
  }
  return 0;
}