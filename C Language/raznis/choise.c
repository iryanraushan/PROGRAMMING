#include<stdio.h>
#include<conio.h>
void main(){
    int choice;
    do
       {
          printf("\n select your choice:  \n");
          printf("\n 1: withdrwal: ");
          printf("\n 2: deposit: ");
          printf("\n 3: check balance: ");
          printf("\n 4: mini statement: ");
          printf("\n 5: exit: ");
          scanf("%d", &choice);
    switch (choice)
        {
          case 1: printf ("you are in first choice\n");     break;
          case 2: printf ("you are in second choice\n");    break;
          case 3: printf ("you are in third choice\n");     break;
          case 4: printf ("you are in fourth choice\n");    break;
          case 5: printf ("you have opted for exit \n");    break;
        }
        }
    while (choice!=5);
getch ();
}