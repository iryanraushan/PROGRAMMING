// #include <iostream>
// using namespace std;
// main()
// {
//  int n = 4, k = 2;

//  cout << ++n << endl; // 5
//  cout << n << endl;   // 5
//  cout << n++ << endl; // 5
//  cout << n << endl; // 6
//  cout << -n << endl; // -6
//  cout << n << endl;//

//  cout << --n << endl;
//   cout << n << endl;

//  cout << n-- << endl;
//   cout << n << endl;

//  cout << n + k << endl;
//  cout << n << endl;
//  cout << k << endl;
//  cout << n << k << endl;
//  cout << n << endl;
//  cout << " " << n << endl;
//  cout << " n" << endl;
//  cout << "\n" << endl;
//  cout << " n * n = ";
//  cout << n * n << endl;

//  cout << 'n' << endl;

//  return 0;
// }
// #include <iostream>
// using namespace std;
// main() {
//  int n;
//  cout << (n = 4) << endl;
//  cout << (n == 4) << endl;
//  cout << (n > 3) << endl;
//  cout << (n < 4) << endl;
//  cout << (n = 0) << endl;
//  cout << (n == 0) << endl;
//  cout << (n > 0) << endl;
//  cout << (n && 4) << endl;
//  cout << (n || 4) << endl;
//  cout << (!n) << endl;
//  return 0;
// }
#include <iostream>
using namespace std;
main()
{
   int n = 3;
   while (n >= 0)
   {
      cout << n * n << endl;
      --n;
   }
   cout << n << endl;
   while (n < 4)
      cout << ++n << endl;
   cout << n << endl;

   return 0;
}
