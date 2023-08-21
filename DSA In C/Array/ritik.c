#include <stdio.h>
#include <stdlib.h>
#define max 100

int array[max];
int size;


void makeArray(){
	
	printf("Enter size of arr (0-100): \n");
	scanf("%d", &size);
	printf("Enter elements of Array : \n");
	for (int i = 0; i < size; i++){
		scanf("%d", &array[i]);
	}
}

void displayArray(){
	printf("Your Array is : ");
	for (int i = 0; i < size; i++){
		printf("%d\t", array[i]);
	}
	printf("\n");
}

void insertElement(){
	int element, index;
	printf("Enter your element: ");
	scanf("%d", &element);
	printf("Enter the index : ");
	scanf("%d", &index);
	for (int i = size-1; i>= index; i--){
		array[i+1] = array[i];
	}
	array[index] = element;
	size++;
}

void deleteElement(){
	int index;
	printf("Enter index of Array For Delete Data\n");
	scanf("%d", &index);
	for (int i = index; i < size; i++){
		array[i] = array[i + 1];
	}
	size--;
}

void main(){
	int choise;
	while (1){
		printf("Choose a valid choise:\n");
		printf("1. Creating an Array of N Integer Elements.\n");
		printf("2. Display of Array Elements with Suitable Headings.\n");
		printf("3. Inserting an Element (ELEM) at a given valid Position (POS).\n");
		printf("4. Deleting an Element at a given valid Position(POS).\n");
		printf("5. Exit. \n");
		scanf("%d", &choise);
		switch(choise){
			case 1:
				makeArray();
				break;
			case 2:
				displayArray();
				break;
			case 3:
				insertElement();
				break;
			case 4:
				deleteElement();
			case 5:
				break;
		}
	}	
}
