#include <stdio.h>
#include <conio.h>
int integer(void);
int main()
{
  int a;
  a = integer();
  printf("%d", a);
  return 0;
}
int integer()
{
  int b[250], c, a = 1;
  scanf("%d", &c);
  for (int i = 0; i < c; i++)
  {
    scanf("%d", &b[i]);
  }
  for (int i = 0; i < c; i++)
  {
    a = a * b[i];
  }
  return a;
}