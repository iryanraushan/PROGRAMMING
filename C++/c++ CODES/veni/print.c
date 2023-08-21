#include <stdio.h>

void funct(int arr[], int size){

	printf("Given arrray is : ");
	
	for (int i = 0; i < size; i++){
		printf("%d, ", arr[i]);
	}
} 

int main() {
	int arr[6] = {3, 4, 5, 6, 7, 7};

	funct(arr, 6);
	return 0;
}