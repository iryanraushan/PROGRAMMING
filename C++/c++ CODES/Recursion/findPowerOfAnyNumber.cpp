#include <iostream>
using namespace std;

int findPower(int n, int p){
	int power = 1;
	if (p >= 1){
		power = findPower(n, p-1) * n;	
	}
	else 
		return power;
}

int main () {
	int n, p;
	cout << "enter a number: " << endl;
	cin >> n;
	cout << "Enter power : " << endl;
	cin >> p;
	
	cout << findPower(n, p);
	
}