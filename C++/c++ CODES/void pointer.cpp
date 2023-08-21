#include <iostream>
using namespace std;
int main ()
{
	int a = 10;
	auto *p = &a;
	cout << p << endl;
	cout << *p << endl;
	
	float f = 89.3;
	auto *pf = &f;
	cout << pf << endl;
	cout << *pf << endl;

	
}  