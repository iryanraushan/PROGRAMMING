// #include <stdio.h>
// int main() 
// {
//     double n1, n2, n3;
//     printf("Enter three different numbers: ");
//     scanf("%lf %lf %lf", &n1, &n2, &n3);

//     if (n1 >= n2 && n1 >= n3)
//         printf("%.2f is the largest number.", n1);

//     if (n2 >= n1 && n2 >= n3)
//         printf("%.2f is the largest number.", n2);

//     if (n3 >= n1 && n3 >= n2)
//         printf("%.2f is the largest number.", n3);

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     unsigned long long fact = 1;
//     printf("Enter an integer: ");
//     scanf("%d", &n);

//     if (n < 0)
//         printf("Error! Factorial of a negative number does not exist.");
//     else {
//         for (i = 1; i <= n; ++i) {
//             fact *= i;
//         }
//         printf("Factorial of %d = %llu", n, fact);
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//   int n;
//   double arr[100];
//   printf("Type the number of elements (1 to 100): ");
//   scanf("%d", &n);

//   for (int i = 0; i < n; ++i) {
//     printf("Type number%d: ", i + 1);
//     scanf("%lf", &arr[i]);
//   }

//   for (int i = 1; i < n; ++i) {
//     if (arr[0] < arr[i]) {
//       arr[0] = arr[i];
//     }
//   }

//   printf("Largest element = %.2lf", arr[0]);

//   return 0;
// }
// #include <stdio.h>
// int main() 
// {
//     int i, n, t1 = 0, t2 = 1;
//     int nextTerm = t1 + t2;
//     printf("Type the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series: %d, %d, ", t1, t2);

//     for (i = 1; i <= n; ++i) {
//         printf("%d, ", nextTerm);
//         t1 = t2;
//         t2 = nextTerm;
//         nextTerm = t1 + t2;
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//   int n, i, flag = 0;
//   printf("Enter a positive integer: ");
//   scanf("%d", &n);

//   for (i = 2; i <= n / 2; ++i) 
// {

//     if (n % i == 0)
//  {
//       flag = 1;
//       break;
//     }
//   }

//   if (n == 1) {
//     printf("1 is neither prime nor composite.");
//   } 
//   else {
//     if (flag == 0)
//       printf("%d is a prime number.", n);
//     else
//       printf("%d is not a prime number.", n);
//   }

//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int num,sum=0,r;
//     printf("Type a Number: ");
//     scanf("%d",&num);
//     while(num)
//     {
//         r=num%10;
//         num=num/10;
//         sum=sum+r;
//     }
//     printf("Sum of Digits of Number:  %d",sum);
//     return 0;
// }
// #include <stdio.h>
// int main() 
// {
//   int r, c, a[100][100], b[100][100], sum[100][100], i, j;
//   printf("Type the number of rows (between 1 and 100): ");
//   scanf("%d", &r);
//   printf("Type the number of columns (between 1 and 100): ");
//   scanf("%d", &c);

//   printf("\nType elements of 1st matrix:\n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("Type element a%d%d: ", i + 1, j + 1);
//       scanf("%d", &a[i][j]);
//     }

//   printf("Type elements of 2nd matrix:\n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("Type element b%d%d: ", i + 1, j + 1);
//       scanf("%d", &b[i][j]);
//     }

//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       sum[i][j] = a[i][j] + b[i][j];
//     }

//   printf("\nSum of two matrices: \n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("%d   ", sum[i][j]);
//       if (j == c - 1) {
//         printf("\n\n");
//       }
//     }

//   return 0;
// // }
// #include <stdio.h>
// struct student 
// {
//     char firstName[50];
//     int roll;
//     float marks;
// } s[10];

// int main() 
// {
//     int i;
//     printf("Enter information of students:\n");

//     for (i = 0; i < 5; ++i) {
//         s[i].roll = i + 1;
//         printf("\nFor roll number%d,\n", s[i].roll);
//         printf("Enter first name: ");
//         scanf("%s", s[i].firstName);
//         printf("Enter marks: ");
//         scanf("%f", &s[i].marks);
//     }
//     printf("Displaying Information:\n\n");

//     for (i = 0; i < 5; ++i) {
//         printf("\nRoll number: %d\n", i + 1);
//         printf("First name: ");
//         puts(s[i].firstName);
//         printf("Marks: %.1f", s[i].marks);
//         printf("\n");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//   int n;
//   scanf("%d",&n);
//   int arr[n];
//   int i;
// for(i = 0; i < n; i++)
// {
//   scanf(“%d”,&arr[i]);
// }
//   printf(“Reversed array is:\n”);
// for(i = n-1; i >= 0; i–)
// {
//   printf(“%d\n”,arr[i]);
// }
//   return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n, r, c, s;

//     printf("Enter number of rows: ");
//     scanf("%d",&n);

//     for(r=1;r<=n;r++)
//     {
//       for(s=1;s<=n-r;s++) printf(" ");
//       for(c=1;c<=r;c++) printf("* ");

//       printf("\n");
//     }

//     return 0;
// }
// #include<stdio.h>    
// #include<stdlib.h>  
// int main()
// {  
//   int ch=65;    
//     int i,j,k,m;    
//   system("cls");  
//     for(i=1;i<=5;i++)    
//     {    
//         for(j=5;j>=i;j--)    
//             printf(" ");    
//         for(k=1;k<=i;k++)    
//             printf("%c",ch++);    
//             ch--;    
//         for(m=1;m<i;m++)    
//             printf("%c",--ch);    
//         printf("\n");    
//         ch=65;    
//     }    
// return 0;  
// }  
#include<stdio.h>    
#include<stdlib.h>  
int main()
{  
  int i,j,k,l,n;    
  system("cls");  
  printf("enter the range=");    
  scanf("%d",&n);    
for(i=1;i<=n;i++)    
{    
 for(j=1;j<=n-i;j++)    
{    
 printf(" ");    
}    
for(k=1;k<=i;k++)    
{    
  printf("%d",k);    
}    
for(l=i-1;l>=1;l--)    
{    
  printf("%d",l);    
}    
  printf("\n");    
}    
return 0;  
}
