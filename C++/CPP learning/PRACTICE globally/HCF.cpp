#include <iostream>
using namespace std;
int main()
{
   int big_num, small_num, reminder, hcf;
   cout << "enter the greater number: ";
   cin >> big_num;
   cout << "enter the smaller number: ";
   cin >> small_num;
   while (1)
   {
      hcf = small_num;
      reminder = big_num % small_num;
      big_num = small_num;
      small_num = reminder;
      if (small_num == 0)
      {
         break;
      }
   }
   cout << "HCF is : " << hcf;
   return 0;
}