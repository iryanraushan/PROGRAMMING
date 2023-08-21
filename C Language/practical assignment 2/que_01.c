//1. Write a program to print “Hello World!” using function and pointer.
#include <stdio.h>
#include <conio.h>
void display(char*);
int main()
{
   char str[] = "Hello World!";
   char* ptr= str;
   display(ptr);
   return 0;
}
void display(char str[])
{
   printf("%s ", str);
}