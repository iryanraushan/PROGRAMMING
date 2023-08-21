//16. Write a program to maintain the record of student using structure.
#include <stdio.h>
#include <conio.h>
struct student 
{
    char name[30], father_name[30], DOB[10];
};
struct student enter()
{ 
    struct student s;
    printf("Enter your name:\n");
    gets(s.name);

   // printf("\nEnter your father name:\n");
    gets(s.father_name);

    //printf("Enter your date of birth:\n");
    gets(s.DOB);
    return(s);
}
void display(struct student s)
{
    puts(s.name);
    puts(s.father_name);
    puts(s.DOB);
}
int main()
{
    struct student s1;
    s1 = enter(); 
    display(s1);
    return 0;
}