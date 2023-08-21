// C++ Program to Find Frequency of Characters in String.

#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string str;
	cout << "Enter a string : ";
	cin >> str;
	
	char ch;
	cout << "Enter a character : ";
	cin >> ch;
	
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (ch == str[i])
		{
			count++;
		}
	}
	if (count == 0)
	{
		cout << "please enter a valid character.";
	}
	else 
	{
	cout << "Frequency of "	<< ch << " is : " << count;
	}
	return 0;
}