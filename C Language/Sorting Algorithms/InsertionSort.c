#include <stdio.h>
int main (){
    int temp, j;
    int arr[100];
    int size; 
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    // accending order
    for (int i = 1; i < size ; i++){
        temp = arr[i];
        j = i-1;
        while ((temp < arr[j]) && j >= 0){
            arr[j+1] = arr[j];
            arr[j] = temp;
            j = j-1;
        }
    }
    printf("your array is in accending order.: \n");
    for (int i = 0; i < size; i++){
        printf("%d  ", arr[i]);
    }
    //descending order.
    for (int i = 1; i < size ; i++){
        temp = arr[i];
        j = i-1;
        while ((temp > arr[j]) && j >= 0){
            arr[j+1] = arr[j];
            arr[j] = temp;
            j = j-1;
        }
    }
    printf("\nyour array is in descending order.: \n");
    for (int i = 0; i < size; i++){
        printf("%d  ", arr[i]);
    }
}