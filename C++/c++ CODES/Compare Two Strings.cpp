// C++ Program to Compare Two Strings.
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	char ch1[50], ch2[50];
	cout << "Enter a string : ";
	cin >> ch1;
	cout << "Enter 2nd string :";
	cin >> ch2;
	
	int flag, i, j;
	for (i = 0; ch1[i] != '\0'; i++)
	{
		for (int j = 0; ch2[j] != '\0'; j++)
		{
			if (ch1[i] == ch2[j])
			{
				flag = 1;
			}
			else 
			{
				flag = 0;
				break;
			}
		}
	}
	
	if (flag == 0)
	{
		cout << "Both are not eual.";
	}
	else 
	{
		cout << "Both are different.";
	}
	return 0;
}