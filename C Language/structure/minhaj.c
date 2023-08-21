#include <stdio.h>
#include <conio.h>

struct student
{
     int rollNumber;
     int ageOfStudent;
     float subject_1, subject_2, subject_3;
};

void displayMarks(float marks1, float marks2, float marks3, int i)
{
     float totalMarks = marks1 + marks2 + marks3;
     printf("Total percentage of Rill number %d student - %0.2f%. \n", i + 1, (totalMarks / 300) * 100);
}
void displayMaxMarks(int n, float marks1, float marks2, float marks3)
{
     float totalMarks[n], maxmarks;
     for (int i = 0; i < n; i++)
     {
          totalMarks[i] = marks1 + marks2 + marks3;
     }
     maxmarks = totalMarks[0];
     int count;
     for (int i = 0; i < n; i++)
     {
          if (totalMarks[i] > maxmarks)
          {
               maxmarks = totalMarks[i];
               count = i;
          }
     }
     printf("Roll number of class topper is : %d. ", count + 1);
     printf("And got %0.2f number.", totalMarks[count]);
}

int main()
{
     int n, i;
     printf("Enter number of students : ");
     scanf("%d", &n);
     struct student s[n];

     for (int i = 0; i < n; i++)
     {
          printf("Enter Roll number : ");
          scanf("%d", &s[i].rollNumber);

          printf("Enter age of %d student : ", i + 1);
          scanf("%d", &s[i].rollNumber);

          printf("Enter marks of subject_1 : ");
          scanf("%f", &s[i].subject_1);

          printf("Enter marks of subject_2 : ");
          scanf("%f", &s[i].subject_2);

          printf("Enter marks of subject_3 : ");
          scanf("%f", &s[i].subject_3);
     }
     printf("\n(a).\n");
     for (int i = 0; i < n; i++)
     {
          displayMarks(s[i].subject_1, s[i].subject_2, s[i].subject_3, i);
     }
     printf("(b).\n");
     displayMaxMarks(n, s[i].subject_1, s[i].subject_2, s[i].subject_3);

     return 0;
}