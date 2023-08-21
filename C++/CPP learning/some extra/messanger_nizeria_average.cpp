#include "iostream"
using namespace std;
int main()
{
   int n, sum = 0;
   cout << "enter the number's  number ";
   cin >> n;
   int arr[1000];
   cout << "enter numbers : ";
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   for (int i = 0; i < n; i++)
   {
      sum = sum + arr[i];
   }
   cout << "average is " << sum / n;
   return 0;
}