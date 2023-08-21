// C++ Program to Swap Two Strings.

#include <iostream>
#include <string.h>

using namespace std;

int main () 
{
	char ch1[100], ch2[100];
	
	cout << "Enter 1st string : ";
	cin >> ch1;
	cout << "Enter 2nd string : ";
	cin >> ch2;
	
	char ch3[100];
	strcpy(ch3, ch1);
	strcpy(ch1, ch2);
	strcpy(ch2, ch3);
	
	cout << ch1 << "	" << ch2;
	return 0;
}