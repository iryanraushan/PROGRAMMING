#include <stdio.h>
int prod_arr(int arr[], int n) {
   int result = 1;
   //Wil multiply each element and store it in result
   for (int i = 0; i < n; i++)
   result = result * arr[i];
   return result;
}
