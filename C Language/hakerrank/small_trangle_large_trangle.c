#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
   int a;
   int b;
   int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle *tr, int n)
{
  // int i;
   int area[7];
   for (int i = 0; i < n; i++)
   {
      int *s = (tr[i].a + tr[i].b + tr[i].c) / 2;
      area[i] = sqrt(*s * (*s - tr[i].a) * (*s - tr[i].b) * (*s - tr[i].c));
   }
   for(int i = 0; i <n; i++)
   {
      printf("%d ", area[i]);
   }

}

int main()
{
   int n;
   scanf("%d", &n);
   triangle *tr = malloc(n * sizeof(triangle));
   for (int i = 0; i < n; i++)
   {
      scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
   }
   sort_by_area(tr, n);
   for (int i = 0; i < n; i++)
   {
      printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
   }
   return 0;
}