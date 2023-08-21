#include <iostream>
using namespace std;
int sumArray(int, int);

int sumArray(int arr[], int n){
	if (n < 0)
	{
		return 0;
	}
	else {
	return arr[n] + sumArray(arr, n-1);
	}
} 

int main () {
	int n;
	cout << "Enter Size of array : " << endl;
	cin >> n;
	
	int *arr = new int[n];
	cout << "Elements of array :" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << sumArray(arr, n);
}