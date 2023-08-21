#include <iostream>
using namespace std;
int main()
{
   int num, x, i = 1, arr[1000], count = 0;
   cin >> num;
   while (num)
   {
      x = num % 2;
      arr[i] = x;
      num = num / 2;
      i++;
      count++;
   }
   cout << "your binary code is = ";
   for (i = count; i >0; i--)
   {
      cout << arr[i];
   }

   return 0;
}