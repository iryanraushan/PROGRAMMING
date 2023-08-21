/* C++ Program for Pascal Triangle */

#include<iostream>

using namespace std;

int factorial (int n);
int combination (int , int);
void printPascalTrangle (int numberOfRow);

int factorial(int n)
{
	int fact = 1;
	for (int i = n; i >= 1; i--)
	{
		fact = fact * i;
	}
	return fact;
}

int combination (int n, int r)
{
	return (factorial(n) / factorial(n-r) / factorial(r));	
}

void printPascalTrangle (int numberOfRow)
{
	int i, j, k, r;
	
	for (i = 1; i <= numberOfRow; i++)
	{
		k = 1;
		r = 0;
		for (j = 1; j <= numberOfRow * 2 - 1; j++)
		{
			if (j >= (numberOfRow + 1 - i) && j <= (numberOfRow - 1 + i) && k)
			{
				cout << combination(i - 1, r);
				k = 0;
				r++;
			}
			else 
			{
				cout << " ";
				k = 1;
			}
		}
		cout << endl;
	}
}

int main ()
{
	int numberOfRow;
	
	cout << "Enter number of row : ";
	cin >> numberOfRow;
	
	printPascalTrangle (numberOfRow);
}