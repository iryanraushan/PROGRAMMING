#include <stdio.h>

int main(){
	int num = 7;
	int * p = &num;
	
	char ch = 't';
	char * p1 = &ch;
	
	printf("%p\n", p);
	printf("%p\n", p1);
	printf("%d\n", sizeof(p1));
	printf("%d\n", sizeof(p));
}
