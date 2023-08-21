#include <stdio.h>

int main()
{
    int a,b;
    printf("how much element do you want");
    scanf("%d", &a);

    printf("how long you want the table");
    scanf("%d", &b);

  int mul[a][b], n[a];

  for (int i = 0; i < a; i++)
  {
      printf("enter the element for table");
      scanf("%d", &n[i]);
  }

  for (int i = 0; i < a; i++)
  {

      for (int j = 0; j < b; j++)

      {
          mul[i][j] = n[i] * (j + 1);
      }
  }
  /////////////

  for (int i = 0; i < a; i++)
  {

      for (int j = 0; j < b; j++)
      {
          printf("%dX%d=%d\n", n[i], j + 1, mul[i][j]);
      }
      printf("******table*****\n");
  }
  return 0;
}