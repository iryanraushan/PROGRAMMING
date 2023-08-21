#include <iostream>
using namespace std;
int main()
{
     int num;
     cout << "Enter a number : ";
     cin >> num;

     int size = num * 2 - 1;
     int x=0;

     for (int i = 0; i < size; i++)
     {
          for (int j = 0; i < size; j++)
          {
               x = i<j ? i : j;
               x = x < size - i ? x : size - i - 1;
               x = x < size - j -1 ? x : size - j - 1;
               
               cout << num - x << " ";
          }
          cout << endl;
          
     }
     
return 0;
}