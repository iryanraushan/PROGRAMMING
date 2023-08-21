#include <iostream>
#include <string>
using namespace std;

int main (){
	string str;
	getline(cin, str);

	int  arr[100], count = 0, k = 0;
	for (int i = 0; i < str.length(); i++){
		count++;
		if (str[i] == ' ' || str[i] == '\0')
		{
			arr[k] = count-1;
			count = 0;
			k++;
		}
		
	}	
	for (int j = 0; j < k; j++){
		cout << arr[j] << endl;
	}
	
	return 0;
}