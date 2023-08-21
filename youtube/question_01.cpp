#include <iostream>
using namespace std;

int i, j = 8;

int main()
{
     cout << i << "\t" << j << endl;
     i = ++j + j + j++;
     char ch('C');
     cout << ch <<"\t" << int(ch) << endl;
     cout << i << "\t" << j;
return 0;
}