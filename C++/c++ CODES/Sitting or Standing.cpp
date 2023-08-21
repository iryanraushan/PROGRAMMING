#include <iostream>
using namespace std;

int main () {
	
	freopen("countin.txt", "r", stdin);
	freopen("countin.txt", "w", stdout);
	
	int r, s;
	cin >> r >> s;
	int n;
	cin >> n;
	if (r*s >= n)
	{
		cout << n << " " << 0;
	}
	else 
	{
		cout << r*s << " " << n - (r*s);
	}
	return 0;
}