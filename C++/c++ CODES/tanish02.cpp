#include <iostream>
using namespace std;
int main (){
	int num;
	int countPositive = 0, countNegative = 0, count0 = 0;
	cout << "Enter a number : "<< endl;
	askAgain:
		cin >> num;
		if (num > 0) countPositive++;
		else if (num < 0) countNegative++;
		else count0++;

	char ch;
	cout << "Do you want to continue (y for yes and n for no)."<< endl;
	cin >> ch;
	if (ch == 'y'){
		goto askAgain;
	}else {
		cout << "you entered " << countPositive << " positive numbers" << endl;
		cout << "you entered " << countNegative << " negative numbers" << endl;
		cout << "you entered " << count0 << " zero numbers" << endl;
	}
}