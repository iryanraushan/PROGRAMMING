#include <iostream>
using namespace std;
int main () {
	
	freopen("mixin.txt.txt", "r", stdin);
	freopen("mixout.txt.txt", "w", stdout);
	
	int a, b;
	cin >> a >> b;
	if (a % b == 0){
		cout << (a/b);
	}
	else {
		cout << (a/b) << " " << (a%b) << "/" << b;
	}
	return 0;
}