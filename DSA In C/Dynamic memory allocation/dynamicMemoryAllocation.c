#include <stdio.h>
#include <conio.h>
int main (){
	int a = 65; 
	char c = a; 
	printf("%c\n", c);
	
	int * i = &a;
	char * ch = i;
	printf("%d, %c", ch, ch);
	
}