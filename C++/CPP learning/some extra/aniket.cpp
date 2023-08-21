#include <iostream>
int oddeven(int);
using namespace std;
int main()
{
   int num;
   cin >> num;
   oddeven(num);
   if (oddeven(num) == 1)
   cout << "even";
   else 
   cout << "odd";
   return 0;
}
int oddeven(int a)
{
 
   if (a % 2 == 0)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}