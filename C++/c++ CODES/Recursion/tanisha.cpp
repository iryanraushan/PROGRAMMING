#include <iostream>
int main() {
	int n = 5;
	// std::cin >> n;
	
	int k ;
	for (int i = 1; i <= n; i++){
		
		k = i;
		for (int j = 1; j <= n; j++){
					
			if (j >= (n+1) - i){
				std::cout << k;
				k--;
			}	
			else {
				std::cout << " ";
			
			}
		}
			
		std::cout << std::endl;
	}
}