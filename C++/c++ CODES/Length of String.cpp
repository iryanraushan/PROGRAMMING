// C++ program to Find Length of String.

#include <iostream>
#include <string.h>

using namespace std;

int stringLength (char ch);

int stringLength (char ch[])
{
	int count = 0, i;
	for (i = 0; ch[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}

int main ()
{
	char ch[60];
	cout << "Enter a string : ";
	cin >> ch;
	
	cout << stringLength(ch);
	return 0;
}