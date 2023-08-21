#include <iostream>
using namespace std;
int main()
{
   int arr[4] ={23, 34, 45, 56}, sum =0;
   for (int i=0; i<4;i++)
   {
      sum = sum + arr[i];
   }
   cout << sum;
return 0;
}