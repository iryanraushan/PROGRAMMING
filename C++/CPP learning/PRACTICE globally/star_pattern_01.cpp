#include <iostream>
using namespace std;
int main()
{

   int n, m;
   cout << "give number of coulmn : ";
   cin >> n;
   m = 2 * n - 1;

   for (int i = 1; i <= m; i++)
   {
      for (int j = 1; j <= n; j++)
      {
         if (j <= i && j <= 2 * n - i)
         {
            cout << " * ";
         }
         else
         {
            cout << " ";
         }
      }
      cout << "\n";
   }
   return 0;
}