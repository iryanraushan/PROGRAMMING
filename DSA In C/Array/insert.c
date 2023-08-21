#include <stdio.h>

int sizeOfArray = 7;
int array[34] = {2, 5, 6, 7, 8 ,9};

void insertElement(){
	int element, index;
	printf("Enter your element: ");
	scanf("%d", &element);
	printf("Enter the index : ");
	scanf("%d", &index);
	for (int i = sizeOfArray-1; i>= index; i--){
		array[i+1] = array[i];
	}
	array[index] = element;
}
void displayElement(){
	printf("Your Array is : ");
	for (int i = 0; i < sizeOfArray; i++){
		printf("%d\t", array[i]);
	}
	printf("\n");
}

int main(){
	displayElement();
	insertElement();
	displayElement();
}
