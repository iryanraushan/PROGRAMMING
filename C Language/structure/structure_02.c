#include <stdio.h>
#include <conio.h>
struct book
{
  int book_id;
  char title[20];
  float price;
};
struct book input()
{
  struct book b;
  printf("enter book id, title, price. \n");
  scanf("%d", &b.book_id);
  fflush(stdin);
  gets(b.title);
  scanf("%f", &b.price);
  return (b);
}
void display(struct book b)
{
  printf(" %d , %s, %f.", b.book_id, b.title, b.price);
}
int main()
{
  struct book b1;
  b1 = input();
  display(b1);
  return 0;
}
