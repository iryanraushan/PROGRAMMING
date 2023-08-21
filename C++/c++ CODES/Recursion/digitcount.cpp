#include <iostream>
using namespace std;
int countDigit(int);

int countDigit(int n) {
	
	static int count = 0;
	if(n > 0){
		count ++;
		countDigit(n / 10);
	}
	else
		return count;
}

int main() {
	int n;
	cout << "Enter a number : " << endl;
	cin >> n;
	
	int count = countDigit(n);
	cout << count;
}