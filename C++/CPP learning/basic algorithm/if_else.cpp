#include <iostream>
#include <string.h>
int main()
{
  char arr[20];
  gets(arr);
  if (arr[0] == 'i' && arr[1] == 'f' || arr[0] == 'I' && arr[1] == 'F')
  {
    puts(arr);
  }
  else
  {
    printf("if ");
    puts(arr);
  }

  return 0;
}