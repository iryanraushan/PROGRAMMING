#include <stdio.h>
#include <conio.h>
int main () {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8};
	int size; 
//	printf("Enter your arrray size : ");
//	scanf("%d", &size);
	
//	printf("Enter your arrray element : ");
//	for (int i = 0; i < 9; i++){
//		scanf("%d", &arr[i]);
//	}
	
	printf("your array before insertion : ");
	for (int i = 0; i < 8; i++){
		printf("%d ", arr[i]);
	}
	
	int num = 45, index = 6;
	for (int i = 8; i >= index; i++){
		arr[i+1] = arr[i];
	}
//	arr[6] = num; 
	
	printf("\nyour array after insertion : ");
	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	return 0;	
}
