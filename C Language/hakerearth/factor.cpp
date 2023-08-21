#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int num1, num2,j=0,count=0, k=0, arr1[1000], arr2[1000];
	cin >> num1 >> num2;										
  for (int i = 1; i < num1-1; i++)
	{
		if(num1 % i==0)
		{
			arr1[j]=i;
			j++;
		}
	}
	for (int i = 1; i < num2-1; i++)
	{
		if(num2 % i==0)
		{
			arr2[k]=i;
			k++;
		}
	}
  int x=sizeof(arr1)/sizeof(int);
	int y = sizeof(arr2)/ sizeof(int);
   for(int i=0; i<x; i++)
   {
      cout << arr1[i]<< endl;
   }
   cout << x<< y;
	for(int i = 0; i<x; i++)
	{
		for(int j=0 ; j< y; j++)
		{
			if(arr1[i]==arr2[j])
			{
				count++;
			}
		}
	}
	cout << count;
	return 0;
}

