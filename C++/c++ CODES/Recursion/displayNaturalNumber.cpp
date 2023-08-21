#include <iostream>
using namespace std;

void displayNaturalNumber (int);

void displayNaturalNumber(int n){
	if (n >= 1){
		cout << n << endl;
	}	
	displayNaturalNumber (n-1);
}


int main () {
	int n;
	cout << "Enter a number: " << endl;
	cin >> n;
	displayNaturalNumber(n);
	return 0;	
}