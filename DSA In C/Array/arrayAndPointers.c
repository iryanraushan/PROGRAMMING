#include <stdio.h>
#include <conio.h>
int main (){
	int arr[] = {2, 4, 5, 6, 6, 7};
	int *p = arr;
	printf("%p\n", p);
	printf("%p", arr);
}