#include <iostream>
using namespace std;

findElement(int, int, int);

findElement(int* arr, int n, int e){

	if(arr

}

int main(){
	int n;
	cout << "Enter size of array :" << endl:
	cin >> n;
	
	int *arr = new int[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int e;
	cout << "Enter the element for search : " << endl;
	cin >> e;
	findElement(arr, n, e);
}
	
	