//if ans will come 0 then that number is divisible by 97.
#include<stdio.h>
int main() {
int a,b;
printf("  write the number :");
scanf("%d",&b);
    a=b%90;
printf("your remainder is %d \n ",a);
if (a==0){
 printf(" yes , this no. is divisible by 90  ");
    }
   else
 printf("   no   ");
 return 0;
}