#include <iostream>
using namespace std;
int main()
{
   int arr[1000], n, rev;
   cin >> n;
   for (int i = 0; i <=n; i++)
   {
      cin >> arr[i];
   }
  for (int i = n ; i >=0; i--)
   {
      cout << arr[i]<<" ";
   }
   return 0;
}