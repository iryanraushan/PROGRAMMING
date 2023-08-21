#include "stdio.h"
void check_present(char* , char);
void check_present(char st[] , char ch)
{
   //char *ptr = st;
   
   while(*st != '\0')
   {
     if(*st == ch)
     {
        printf("yes that character is present on string.");
     }
     st++;
   }
}
int main()
{
   char s[] =  "ilovemyindia";
   check_present(s, 'm');
   return 0;
}