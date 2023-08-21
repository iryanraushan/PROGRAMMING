#include <bits/stdc++.h>
using namespace std;
int main() {
	int s;
	cin >> s;
	while (s--) {
		int n;
		cin >> n;
		int * p = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		} 
		
		int max = p[(n/2) + 1];
		for (int i = 0; i < n; i++){
			if (n % 2 == 0 ){
				cout << "no"<< endl;
				break;
			}
			
			else {
				if (p[0] != 1){
					cout << "no" << endl;
					break;
				}
				else if ( p[i] > max )
				{
					cout << "no" << endl;
					break;
				}
				 
				else 
				{
					for (int j = 0; j < ((n/2) + 1); i++)
					{
						if (p[i+1] - p[i] != 1){
							cout << "no" << endl;
							break;
						}
					}
					for (int j = ((n/2) + 1); j < n; i++)
					{
						if (p[i+1] - p[i] != -1){
							cout << "no" << endl;
							break;
						}
					}
				}
			}
		}
	}
}