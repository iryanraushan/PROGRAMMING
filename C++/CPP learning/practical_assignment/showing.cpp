#include "iostream"
int main()
{
  int i, number, test = 0;
  scanf("%d", &number);
one:
  for (i = 0; i < number; ++i)
  {
    test += i;
    printf("%d", test);
    goto two;
  }
two:
  if (test < 10)
    goto one;

  return 0;
}