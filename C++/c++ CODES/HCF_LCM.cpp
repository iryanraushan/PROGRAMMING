/* 
	C++ Program to Find HCF of two numbers,
	C++ program to find LCM of two numbers.
*/
#include <iostream>

using namespace std;

int main () {
	
	int num1, num2;
	cout << "Enter two numbers : " << endl;
	cin >> num1 >> num2;
	
	int max = (num1 > num2) ? num1 : num2;
	while (true)
	{

		if (max % num1 == 0 && max % num2 ==0)
		{
			cout << "LCM is : " << max << endl;
			break;
		}
		else
		{
			max++;
		}
	}
	
	int hcf, x, min = (num1 > num2) ? num2 : num1;
	while (true)
	{
		x = max % min; 
		if (x == 0)
		{
			hcf = min;
			cout << "HCF is : " << hcf << endl;
			break;
		}
		else 
		{
			min = x;
			max = min;
		}
	}
	return 0;
}