#include <iostream>
using namespace std;
int main()
{
   int num_of_ieat,a,b, count =0, blank = 0 ;
   cin >> num_of_ieat;
   for ( int i = 1; i<=num_of_ieat;i++)
     {
        blank = i*a;
        count++;
     }
   
  cout << blank  << endl << count;
   return 0;
}