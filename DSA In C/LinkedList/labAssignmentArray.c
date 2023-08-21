#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define maxSizeArray 100

int array[maxSizeArray];
int sizeOfArray;


void createArray(){
	
	printf("Enter size of Array (0-100): \n");
	scanf("%d", &sizeOfArray);
	
	printf("Enter elements of Array : \n");
	for (int i = 0; i < sizeOfArray; i++){
		scanf("%d", &array[i]);
	}
}

void displayElement(){
	printf("Your Array is : ");
	for (int i = 0; i < sizeOfArray; i++){
		printf("%d\t", array[i]);
	}
	printf("\n");
}

void insertElement(){
	int element, position;
	printf("Enter your element: ");
	scanf("%d", &element);
	printf("Enter the index : ");
	scanf("%d", &position);
	for (int i = sizeOfArray-1; i>= position; i--){
		array[i+1] = array[i];
	}
	array[position] = element;
	sizeOfArray++;
}

void deleteElement(){
	int position;
	printf("Enter position of Array For Delete Data\n");
	scanf("%d", &position);
	for (int i = position; i < sizeOfArray; i++){
		array[i] = array[i + 1];
	}
	sizeOfArray--;
}

void main(){
	int option;
	while (TRUE){
		printf("Choose a valid option:\n");
		printf("1. Creating an Array of N Integer Elements.\n");
		printf("2. Display of Array Elements with Suitable Headings.\n");
		printf("3. Inserting an Element (ELEM) at a given valid Position (POS).\n");
		printf("4. Deleting an Element at a given valid Position(POS).\n");
		printf("5. Exit. \n");
		scanf("%d", &option);
		switch(option){
			case 1:
				createArray();
				break;
			case 2:
				displayElement();
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
