#include <stdio.h>

int main(){
	int arr[] = {32, 45, 3, 24, 65, 43, 66, 10, 15, 12};
	
    int leastElement;
    int p = arr[0];
    for (int i = 1; i < 10; i++){
    	if (arr[i] < p){
    		p = arr[i];
		}
		else{
			leastElement = p;
		}
	}
	printf("%d", leastElement);
}
