#include <stdio.h>
int main ()
{
   char arr[200];
   printf("give a string : ");
   gets(arr);

   for (int i = 0; arr[i] != '\0';i++)
   {
      if (arr[i] >= 'a' && arr[i] <= 'z')
      {
         arr[i] = arr[i]- 32;
      }
      else if (arr[i] == ' ')
      {
         arr[i]=arr[i];
      }
      else{
         arr[i] = arr[i] +32;
      }
   }    
   printf("new string is:  %s", arr);
   return 0;
}