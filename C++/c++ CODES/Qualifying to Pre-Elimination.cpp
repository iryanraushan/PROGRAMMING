#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin >> t;

	while(t--){
		
		int n, s;
		cin >> n >> s;
	
		int* p = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		}
    	sort(p, p + n, greater<int>());
		
		int count = 0, score = p[s - 1];
		
		for (int i = 0; i < n; i++) {
			if (p[i] >= score){
				 count++;
			} 
			else 
			{
				break;
			}
		}
		cout << count << endl;
	}	
	
	return 0;
}