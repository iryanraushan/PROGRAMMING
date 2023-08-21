#include <stdio.h>
#define TRUE 1
#define maxSizeArray 100

int array[maxSizeArray];
int sizeOfArray;

void createArray(void);
void displayElement(void);
void insertElement(void);
void deleteElement(void);

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
    if (position > sizeOfArray){
    	return;
	}
	else {
	for (int i = sizeOfArray-1; i>= position; i--){
        array[i+1] = array[i];
    }
    array[position] = element;
    sizeOfArray++;
	}

}

void deleteElement(){
    int position;
    printf("Enter position of Array For Delete element\n");
    scanf("%d", &position);
    for (int i = position; i < sizeOfArray; i++){
        array[i] = array[i + 1];
    }
    sizeOfArray--;
}




void main(){
    int option;
    while (TRUE && option >= 0 && option <= 4){
        printf("Choose a valid option\n");
        printf("1. Creating an Array. \n");
        printf("2. Display of Array Elements.\n");
        printf("3. Inserting an Element. \n");
        printf("4. Deleting an Element.\n");
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
            default:
                break;
        }
    }   
}
